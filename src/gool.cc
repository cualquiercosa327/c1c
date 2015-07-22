#include "gool.h"
#include "error.h"
#include "libc.h"
#include "emu.h"

emuptr<uint32_t> globals(0x8006188C);
EMUGLOBALVAR(emuptr<uint32_t>,constbuf,0x80056480);
EMUGLOBALVAR(uint32_t,activebufindex,0x80056484);

EMUGLOBALVAR(emuptr<goolobj>,crash,0x800566B4);
EMUGLOBALVAR(uint32_t,nextlevelid,0x80056714);
EMUGLOBALVAR(emuptr<nsentry>,currentzone,0x80057914); 
EMUGLOBALVAR(uint32_t,rendercount,0x80057960);
EMUGLOBALVAR(struct levelstate,levelstate,0x80057974);
EMUGLOBALVAR(emuptr<uint8_t>,dispenv,0x80058404);

EMUGLOBALARR(uint16_t,GOOL_OBJECT_LEVELSPAWNLISTSIZE,levelspawnlist,0x8005E348);
EMUGLOBALARR(uint32_t,GOOL_OBJECT_SPAWNLISTSIZE,spawnlist,0x8005FF58);

EMUGLOBALVAR(emuptr<goolobj>,player,0x80060DB0);
EMUGLOBALVAR(emuptr<goolobj>,objects,0x80060DB4);
EMUGLOBALARR(goolobjlist,8,usedlists,0x80060DB8);
EMUGLOBALVAR(goolobjlist,freelist,0x80060DF8);
EMUGLOBALVAR(emuptr<goolobj>,unhandledobj,0x80060E00);
EMUGLOBALVAR(uint32_t,tickselapsed,0x80060E04);
EMUGLOBALVAR(uint32_t,globanimflags,0x800618B0);

uint32_t GOOL_InitAllocTable()
{
  crash = 0;

  player = LIBC_Malloc(sizeof(goolobj) + 0x100); 
  objects = LIBC_Malloc(GOOL_OBJECT_POOLSIZE*sizeof(goolobj));
  
  if (objects == 0 || player == 0)
    return ERROR_CODE_ALLOCFAILED;

  unhandledobj = 0;
  tickselapsed = 0;

  freelist.header = 2;
  freelist.children = objects;      
  
  for (int i = 0; i < GOOL_OBJECT_POOLSIZE; i++)
  {
    objects[i].header = 0;
    objects[i].parent = EMUADDR(&freelist);
    objects[i].children = 0;
    if (i < (GOOL_OBJECT_POOLSIZE-1))
      objects[i].sibling = EMUADDR(&objects[i+1]);
    else                         
      objects[i].sibling = 0;
  }   
  
  for (int i = 0; i < 8; i++)
  {
    usedlists[i].header = 2;
    usedlists[i].children = 0;
  }
  
  player->header = 0;
  player->parent = 0;
  player->sibling = 0;
  player->children = 0;

  return ERROR_CODE_SUCCESS;
}

void GOOL_FreeAllocTable()
{
  LIBC_Free((uint32_t)objects);
  LIBC_Free((uint32_t)player);
}

inline void GOOL_AdoptObject(emuptr<goolobj> child, emuptr<goolobj> parent)
{
  GOOL_RemoveObjectChild(child, child->parent);
  GOOL_AddObjectChild(child, parent);
}       

inline void GOOL_AddObjectChild(emuptr<goolobj> child, emuptr<goolobj> parent)
{
  child->parent = parent;
  child->sibling = GOOL_OBJECT_GETCHILDREN(parent);
  GOOL_OBJECT_SETCHILDREN(parent, child);
}

inline void GOOL_RemoveObjectChild(emuptr<goolobj> child, emuptr<goolobj> parent)
{
  if (parent)
  {
    emuptr<goolobj> cur(GOOL_OBJECT_GETCHILDREN(parent));
    if (cur == child)
    {
      GOOL_OBJECT_SETCHILDREN(parent, child->sibling);
    }
    else if (GOOL_OBJECT_GETCHILDREN(parent))
    {
      emuptr<goolobj> prev(GOOL_GetObjectPredecessor(child, parent));
      if (prev)
        prev->sibling = child->sibling;
    }
  }
}

inline emuptr<goolobj> GOOL_GetObjectPredecessor(emuptr<goolobj> child, emuptr<goolobj> parent)
{
  emuptr<goolobj> cur(GOOL_OBJECT_GETCHILDREN(parent));
  while ((cur->sibling != child) && (cur = cur->sibling));
  return cur;
}

/*
uint32_t GOOL_OrientObjectOnPath(emuptr<goolobj>obj, uint32_t progress, vector *trans);
{

}
*/

uint32_t GOOL_TraverseObjectTreePreorder(emuptr<goolobj> obj, emuptr<uint32_t(emuptr<goolobj>,uint32_t)> func, uint32_t arg)
{
  //uint32_t result = (*func)(obj, arg);
  uint32_t result = EMU_Invoke((uint32_t)func,2,obj,arg);
  if (result == ERROR_CODE_INVALIDRETURN)
  {
    EMU_Invoke(0x8001CDD0,2,obj,0); // GOOL_TerminateObject(obj, 0);
    return ERROR_CODE_INVALIDRETURN;
  }
  
  emuptr<goolobj> children(GOOL_OBJECT_GETCHILDREN(obj));
  if (children)
  {
    emuptr<goolobj> cur(children);
    emuptr<goolobj> next;
    do
    {
      if (cur->header == 0) { break; }
      next = cur->sibling;
      GOOL_TraverseObjectTreePreorder(cur, func, arg);
    } while ((cur = next));
  }
  
  return result;
}

uint32_t GOOL_TraverseObjectTreePostorder(emuptr<goolobj> obj, emuptr<uint32_t(emuptr<goolobj>,uint32_t)> func, uint32_t arg)
{
  emuptr<goolobj> children(GOOL_OBJECT_GETCHILDREN(obj));
  if (children)         
  {
    emuptr<goolobj> cur(children);
    emuptr<goolobj> next;
    do
    {
      next = cur->sibling;
      uint32_t result = GOOL_TraverseObjectTreePostorder(cur, func, arg);                            
      if (result == ERROR_CODE_INVALIDRETURN)
        EMU_Invoke(0x8001CDD0,2,obj,0); // GOOL_TerminateObject(obj, 0);
    } while ((cur = next));
  }
   
  return EMU_Invoke((uint32_t)func,2,obj,arg);
  //return (*func)(obj, arg);
}

emuptr<goolobj> GOOL_TestObjectStateFlags(emuptr<goolobj> obj, uint32_t flags)
{
  if (obj->stateflags & flags)
    return obj;
  return emuptr<goolobj>(0);
}

/*emuptr<goolobj>GOOL_SpawnObject(emuptr<nsentry> entityentry, uint32_t entityindex)
{
  if (!entityentry)
    return ERROR_CODE_INVALID;

  nsitem *entity;
  if (entityentry->type == 7)
  {
    nsitem *zoneheader = entityentry->items[0];
    uint32_t headercolitemcount = *(uint32_t*)&(zoneheader+0x204);
    uint32_t sectionitemcount = *(uint32_t*)&(zoneheader+0x208);
    int entityitemindex = (headercolitemcount + sectionitemcount) + entityindex; 
    entity = entityentry->items[entityitemindex];
  }                      
  else if (entityentry->type == 17)
  {
    entity = entityentry->items[2+entityIndex];
  }   
  else
  {
    entity = entityentry->items[entityIndex];
  }
  
  bool iscrash = (
                  entity->procType == 3 
               && (entity->type == 0                              || 
                   (entity->id > 0 && entity->id < 5)             ||
                   (entity->type == 0x2C && entity->subtype == 0) ||
                   (entity->type == 0x30))
                 );
                 
  if (iscrash && crash)
    return ERROR_CODE_INVALID;

  emuptr<goolobj>nearbox;
  if (entity->type == 0x22)
  {    
    if (prevboxentity && 
        absdist(entity->path[0].x, prevboxentity->path[0].x) < 10 &&
        absdist(entity->path[0].z, prevboxentity->path[0].z) < 10 &&
        absdist(entity->path[0].y, prevboxentity->path[0].y) < 10)
    {
      nearbox = prevbox;
    }
    else
    {
      var_61A60  = 0x19000;
      prevbox = 0;
      nearbox = 0;
    }
    
    prevboxentity = entity;
  }

  uint32_t id = entity->id >> 8;
  uint32_t poolstate = poolstates[id];
  if ((poolstate & 1) || (poolstate & 2))
  {
    if (entity->type == 0x22)
      var_61A60 += 0x19000;
     
    return ERROR_CODE_INVALID;
  }

  emuptr<goolobj>obj;
  uint32_t usedlistindex;
  if (isCrash)
  {
    crash = player;
    obj = crash;
    usedlistindex = 6;
  }
  else
  { 
    emuptr<goolobj>freeobjects = GOOL_OBJECT_GETCHILDREN(freelist);
    emuptr<goolobj>flaggedvictim = 0;
    do
    {
      if (freeobjects) 
      {
        obj = freeobjects;
        usedlistindex = 3;
        break;
      }
      else
      {
        emuptr<goolobj>victimlist = usedlists+3;
        emuptr<goolobj>victims = 0;
        emuptr<goolobj>victim = 0;
        if (victimlist->type == 2)           
          victims = victimlist->children;       
        else
        {
          flaggedvictim = GOOL_TestObjectStateFlags(victimlist, 0x80000); 
          if (flaggedvictim)
            victims = GOOL_OBJECT_GETCHILDREN(victimlist);   
        }
 
        if (victims)
        {
          victim = victims;
          do
          {
            flaggedvictim = GOOL_FindObject(victim, GOOL_TestObjectStateFlags, 0x80000); 
            victim = victim->sibling; 
          } while (victim && !flaggedvictim);
        } 

        if (flaggedvictim) 
        {
          GOOL_TerminateObject(flaggedvictim); 
        }
      }
    } while (flaggedvictim);
  }

  if (!obj)
    return ERROR_CODE_OBJECTPOOLFULL;

  emuptr<goolobj>parent = usedlists+usedlistindex;
  GOOL_AdoptObject(obj, parent); 

  obj->proctype = entity->proctype;
  uint32_t result = GOOL_InitObject(obj, entity->type, entity->subtype, 0, 0);
  if (ERROR_ISERRORCODE(result))
    GOOL_AdoptObject(obj, freelist);

  poolstates[id] |= 1;
  obj->id = id << 8;
  
  if (entityentry)                
  {
    if (entityentry->type == 0x11)
      obj->zone = currentzone; 
    else
      obj->zone = entityentry;     
  }

  if (entity->subtype == 0)
  {  
    nsitem *zoneheader = entityentry->items[0];

    //processOffset = child   +  0x30;
    //itemOffset    = item1   + 0x348;
   
    //if (((a2 | a3) & 3) != 0)
    //  copyInterleave(processOffset, itemOffset, 12, sizeof(word), 3); //copy 12 words, but dont copy the 3rd byte
    //else
    //  copy(processOffset, itemOffset, 12, sizeof(word));
    GOOL_CopyObjectColors(obj, zoneheader, 0x348);
    
  }
  else
  {
    unsigned char *zoneHeader = entityentry->items[0];

    //processOffset = obj   +  0x30;
    //itemOffset    = item1 + 0x318;

    //if (((a2 | a3) & 3) != 0)
    //  copyInterleave(processOffset, itemOffset, 12, sizeof(word), 3); //copy 12 words, but dont copy the 3rd byte
    //else
    //  copy(processOffset, itemOffset, 12, sizeof(word));
    copyColors(obj, zoneHeader, 0x318);
  }

  obj->entity = entity;
  obj->pathlen = entity->pathlen << 8;

  if (!(entity->spawnflags & 1))
  {
    obj->rot.x = entity->rot.x;
    obj->rot.y = entity->rot.y;
    obj->rot.z = entity->rot.z;
  }

  obj->modeflagsa = entity->modeflagsa << 8;
  obj->modeflagsb = entity->modeflagsb << 8;
  obj->modeflagsc = entity->modeflagsc << 8;

  GOOL_OrientObjectOnPath(obj, 0, &obj->trans);
  
  //NO SAVESTATE YET EITHER
  //if (obj == crash)
  //{
  //  if (*(0x56714) == -1)
  //  {
  //    sub_80026460(obj, 0x57974, 1);   
  //  }
  //}

  emuptr<nsentry> exec = obj->local;
  nsitem *execheader = exec->items[0];
  uint32_t type = *(uint32_t*)&(codeHeader+0);
  uint32_t category = *(uint32_t*)&(codeHeader+4);
  emuptr<goolobj>enemylist = usedlists[4];
  if (category == 0x300) 
    GOOL_AdoptObject(obj, enemylist);

  if (type == 0x22)
  {
    if (prevboxobj)
    {
      obj->link.prev = prevbox;
      obj->link.next = 0;
      prevbox->link.next = obj;
    }
    else
    {
      obj->link.prev = 0;
      obj->link.next = 0;
    }

    obj->trans.x += (0x19000 - var_61A60);

    prevbox = obj;   //then it is set right here...

    unsigned char *zoneHeader = obj->zone->items[0];
    
    uint32_t zoneflags = getWord(zoneHeader, 0x2DC, true);
    if ((zoneflags & 4) == 0)
    {
      unsigned char XorZbit = (((obj->trans.z >> 4) ^ obj->trans.x) & 7);
      obj->animcounter = XorZbit;
 
      if (XorZbit)
        obj->statusB |= 0x10000000;
    }
  }

  return obj;
}*/

emuptr<goolobj> GOOL_CreateObject(emuptr<goolobj> parent, uint32_t type, uint32_t subtype, uint32_t argc, emuptr<uint32_t> args, uint32_t flag)
{
  emuptr<goolobj> obj;

  if (type == 0 && subtype == 0)
  {
    crash = player;
    obj = crash;
  }
  else
  { 
    emuptr<goolobj> freelistptr(EMUADDR(&freelist));
    emuptr<goolobj> freeobjects(GOOL_OBJECT_GETCHILDREN(freelistptr));
    emuptr<goolobj> flaggedvictim(0);
    do
    {
      if (freeobjects || !flag) 
      {
        obj = freeobjects;
        break;
      }
      
      emuptr<goolobj> victimlist(EMUADDR(&usedlists[3]));
      emuptr<goolobj> victims(0);
      emuptr<goolobj> victim(0);
      if (victimlist->header == 2)           
        victims = victimlist->children;       
      else
      {
        flaggedvictim = GOOL_TestObjectStateFlags(victimlist, 0x80000); 
        if (flaggedvictim)
          victims = GOOL_OBJECT_GETCHILDREN(victimlist);   
      }
      
      if (victims)
      {
        victim = victims;
        do
        {
          // flaggedvictim = GOOL_FindObject(victim, GOOL_TestObjectStateFlags, 0x80000); 
          flaggedvictim = EMU_Invoke(0x8001B788,3,obj,GOOL_TestObjectStateFlags,0x80000);
          victim = victim->sibling; 
        } while (victim && !flaggedvictim);
      } 
      if (flaggedvictim) 
        EMU_Invoke(0x8001D1E0,1,flaggedvictim); // GOOL_TerminateObject(flaggedvictim);
    } while (flaggedvictim);
  }

  if (!obj)
    return (emuptr<goolobj>)ERROR_CODE_OBJECTPOOLFULL;

  GOOL_AdoptObject(obj, parent); 
  obj->proctype = 3;

  GOOL_InitObject(obj, type, subtype, argc, args);

  if (obj->zone)
  {  
    emuptr<nsitem> zoneheader(obj->zone->items[0]);
    emuptr<uint32_t> zonecolors(EMUADDR(&zoneheader[0x318]));
    emuptr<uint32_t> objcolors((uint32_t)obj + 0x30);

    for (int i = 0; i < 12; i++)
      objcolors[i] = zonecolors[i];
  }
  else
  {
    emuptr<nsitem> zoneheader(currentzone->items[0]);
    emuptr<uint32_t> zonecolors;
    if (obj == crash)
      zonecolors = EMUADDR(&zoneheader[0x348]);
    else
      zonecolors = EMUADDR(&zoneheader[0x318]);
    emuptr<uint32_t> objcolors((uint32_t)obj + 0x30);

    for (int i = 0; i < 12; i++)
      objcolors[i] = zonecolors[i];    
  }
 
  return obj;
}

uint32_t GOOL_InitObject(emuptr<goolobj> obj, uint32_t type, uint32_t subtype, uint32_t argc, emuptr<uint32_t> args)
{
  obj->node = 0xFFFF;
  obj->id = 0;
  obj->entity = 0;
  obj->pathprogress = 0;
  obj->pathcount = 0;
  
  obj->header = 1;
  
  obj->velocity.x = 0;
  obj->velocity.y = 0;
  obj->velocity.z = 0;
  obj->targetrot.x = 0;
  obj->targetrot.y = 0;
  obj->targetrot.z = 0;
  obj->angvelocity.x = 0;
  obj->angvelocity.y = 0;
  obj->angvelocity.z = 0;
  
  obj->speed = 0;
  obj->animframe = 0;
  obj->unk_F8 = 0;
  obj->targetrot.y = 0; // not sure why they do this, probably a typo
 
  obj->statusa = 0;
  obj->statusb = 0;
  obj->statusc = 0;
  
  obj->displaymode = 0;
  obj->zindex = 0;
  obj->stampland = 0;
  obj->hotspotclip = 0;
  
  obj->unk_14C = -2;
  
  // inherit zone, rotation, and scale from parent if it exists
  emuptr<goolobj> parent(obj->parent);
  if (parent->header == 1)
  {
    obj->zone = parent->zone;
    GOOL_CopyObjectVectors(parent, obj);
  }
  else
  {
    obj->zone = 0;
    obj->rot.x = 0;
    obj->rot.y = 0;
    obj->rot.z = 0;
    obj->scale.x = GFX_FIXED(1);
    obj->scale.y = GFX_FIXED(1);
    obj->scale.z = GFX_FIXED(1);
  }

  if (type == 4 || type == 5 || type == 29)
  {
    obj->zone = 0;
  }
  if (type == 0)
  {
    obj->camzoom = 0;
  }
  if (obj->proctype != 3) 
  {
    return ERROR_CODE_INVALID; 
  }
  
  emuptr<uint8_t> nsd(EMU_ReadU32(0x8005C53C));
  emuptr<uint32_t> execmap(EMUADDR(&nsd[0x14]));
  emuptr<uint32_t> execeid(EMUADDR(&execmap[type]));
  
  if (*execeid == NS_EID_NONE)
    return ERROR_CODE_INVALID; // if null exec eid
  if (type >= 64) 
    return ERROR_CODE_INVALID; // or invalid map index

  emuptr<nsentry> exec(EMU_Invoke(0x80015118,3,execeid,1,0));
  obj->local = exec;
  if (ERROR_ISERRORCODE(exec))
    return ERROR_CODE_INVALID; // if invalid exec eid

  obj->self = obj;
  obj->creator = 0;
  obj->collider = 0;
  obj->invoker = 0;

  obj->subtype = subtype;
  obj->animseq = 0;
  obj->pchead = 0; // reset head block
  obj->player = player;
 
  // index beginning the subtype->state map 
  // preceding indices are in event handler->state map
  emuptr<nsitem> execheader(exec->items[0]);
  uint32_t statemapindex = *(uint32_t*)&(execheader[0x10]);
  uint32_t stateoffset = (statemapindex + subtype) << 1;
  emuptr<nsitem> execstatemap(exec->items[3]);
  uint16_t state = *(uint16_t*)&(execstatemap[stateoffset]);
  
  if (state == 0xFF)
    return ERROR_CODE_INVALIDSTATE;
  
  return ERROR_RETURNCODE(EMU_Invoke(0x8001D698,4,obj,state,argc,args));
}

uint32_t GOOL_ChangeObjectState(emuptr<goolobj> obj, uint32_t state, uint32_t argc, emuptr<uint32_t> args)
{
  emuptr<uint32_t> pcheadold = obj->pchead;
  
  if (state == 0xFF)                     
    return ERROR_CODE_INVALIDSTATE;
  if (obj->statusb & 0x10000000)  // if the object is stalled
    return ERROR_CODE_INVALIDSTATE;  
  
  obj->state = state;
  
  emuptr<nsentry> exec(obj->local);
  emuptr<goolstateinfo> execstates(exec->items[4]);
  emuptr<goolstateinfo> stateinfo(EMUADDR(&execstates[state]));
  obj->statusc = stateinfo->statusc;
 
  emuptr<uint32_t> execdata(exec->items[2]);
  emuptr<uint32_t> externeid(EMUADDR(&execdata[stateinfo->externeidrel]));
  emuptr<nsentry> external(EMU_Invoke(0x80015A98,1,externeid));
  obj->external = external;                       
  
  emuptr<uint32_t> execcode(exec->items[1]);
  if (stateinfo->code != 0x3FFF)
    obj->pc = EMUADDR(&execcode[stateinfo->code]);
  else
    obj->pc = 0;
  if (stateinfo->event != 0x3FFF)
    obj->pcevent = EMUADDR(&execcode[stateinfo->event]);
  else
    obj->pcevent = 0;
  if (stateinfo->trans != 0x3FFF)
    obj->pctrans = EMUADDR(&execcode[stateinfo->trans]);
  else
    obj->pctrans = 0;   
  obj->pchead = 0;
            
  emuptr<nsitem> execheader(exec->items[0]);
  uint32_t spoffset = *(uint32_t*)&(execheader[0xC]);
  obj->fp = 0;
  obj->sp = EMUADDR((uint32_t*)&obj->self + spoffset);

  obj->statusa |= 0x20020; // set bits 6 and 18; bit 18 is set during state transitions
  obj->stateflags = stateinfo->flags;
  
  // push args  
  for (uint32_t c=0; c<argc; c++)
    GOOL_OBJECT_PUSH(obj, args[c]);

  GOOL_CreateObjectStackFrame(obj, argc, 0xFFFF);  // create initial stack frame
  
  // do head block interpretation
  if (pcheadold)
  {
    GOOL_CreateObjectStackFrame(obj, 0, 0xFFFF);
    obj->pc = pcheadold;     

    SP-=8;
    emuptr<goolstateref> transition(SP);
    uint32_t result = EMU_Invoke(0x800201DC,3,obj,0x13,transition);
    SP+=8;
    if (ERROR_ISERRORCODE(result)) 
    {
      return result;
    }
  }
  else
    GOOL_OBJECT_PUSH(obj, 0);

  obj->stampstate = tickselapsed; // record time of state change
      
  if (obj->pctrans && obj == unhandledobj) // if unable to interpret trans block in this frame
  {  
    GOOL_CreateObjectStackFrame(obj, 0, 0xFFFF); 
    obj->pc = obj->pctrans;
          
    //result = interpret(obj, flags, sub);
    SP-=8;      
    emuptr<goolstateref> transition(SP);
    uint32_t result = EMU_Invoke(0x800201DC,3,obj,0x3,transition);
    SP+=8;      
    if (ERROR_ISERRORCODE(result))
    {
      return result;
    }
  }
  
  return ERROR_CODE_SUCCESS;
}

uint32_t GOOL_CreateObjectStackFrame(emuptr<goolobj> obj, uint32_t argc, uint32_t flags)
{
  uint32_t fprel = GOOL_OBJECT_GETFP(obj);
  uint32_t sprel = GOOL_OBJECT_GETSP(obj) - (argc*4);
  
  obj->fp = obj->sp;
  
  GOOL_OBJECT_PUSH(obj, flags);
  GOOL_OBJECT_PUSH(obj, obj->pc);
  GOOL_OBJECT_PUSH(obj, GOOL_OBJECT_GETFRAMERANGE(fprel, sprel));
  
  return ERROR_CODE_SUCCESS;
}

inline void GOOL_CopyObjectVectors(emuptr<goolobj> src, emuptr<goolobj> dst)
{
  uint32_t *srcptr = (uint32_t*)&src->trans;
  uint32_t *dstptr = (uint32_t*)&dst->trans;
  for (int i = 0;i < 2;i++,srcptr+=4,dstptr+=4)
  {
    *(dstptr) = *(srcptr);
    *(dstptr+1) = *(srcptr+1);
    *(dstptr+2) = *(srcptr+2);
    *(dstptr+3) = *(srcptr+3);
  }
  *(dstptr) = *(srcptr);
}

uint32_t GOOL_UpdateObject(emuptr<goolobj> obj, uint32_t flag)
{
  if (obj->proctype != 3) 
    return ERROR_CODE_SUCCESS;

  if (obj == crash) 
  {
    EMU_Invoke(0x800167A4,0); // PAD_Update();
  }
  unhandledobj = obj;
  
  bool animate;
  if (!(globanimflags & 8)) 
    animate = false;                
  else
  {
    if ((obj->statusb & 0x2000000) || ((globanimflags & 0x8000) && (obj->stateflags & 0x20000)))
      animate = true;
    else
    { 
      emuptr<nsitem> execheader(obj->local->items[0]);
      uint32_t category = *((uint32_t*)&execheader[4]);
      
      if (category == 0x200) 
      { 
        animate = globanimflags & 0x100;
 
        uint32_t type = *((uint32_t*)&execheader[0]);
        if (type == 4 && (obj->subtype == 4 || obj->subtype == 7))
          flag = 1; // when flag 0 force animation of pause menu
      }             // when flag 0 no other object shall animate
      else if (category == 0x100) { animate = globanimflags & 0x20; }
      else if (category == 0x300) { animate = globanimflags & 0x80; } 
      else if (category == 0x400) { animate = globanimflags & 0x400;}
      else if (category == 0x500) { animate = globanimflags & 0x80; }
      else if (category == 0x600) { animate = globanimflags & 0x80; }
      else                        { animate = false; }
    }
  }
 
  if (flag && animate)
  {
    if (!(obj->statusb & 0x10000000) || (obj->animcounter == 0)) 
    {
      obj->stampanim = tickselapsed;
      
      if ((obj->statusb & 0x10) && (obj->stampanim == crash->stampanim)) 
        EMU_Invoke(0x8001EEA8,1,obj); // GOOL_RecordObjectSpace(obj);

      if (obj->pctrans)  
      {
        uint32_t sprel = GOOL_OBJECT_GETSP(obj);
        uint32_t fprel = GOOL_OBJECT_GETFP(obj);
    
        obj->fp = obj->sp;
    
        GOOL_OBJECT_PUSH(obj, 0xFFFF);
        GOOL_OBJECT_PUSH(obj, obj->pc);
        GOOL_OBJECT_PUSH(obj, GOOL_OBJECT_GETFRAMERANGE(fprel,sprel));
        
        obj->pc = obj->pctrans;
    
        SP-=8;
        emuptr<goolstateref> transition(SP);
        //uint32_t result = GOOL_InterpretObject(obj, 0x3, transition);
        uint32_t result = EMU_Invoke(0x800201DC,3,obj,0x3,transition);
        SP+=8;
        if (ERROR_ISERRORCODE(result))
          return result;
      }
      
      uint32_t wait = GOOL_OBJECT_PEEKBACK(obj);       
      uint32_t waitstart = (wait & 0xFFFFFF);
      uint32_t waitduration = wait >> 24;
  
      uint32_t waitelapsed = tickselapsed - waitstart;
      if (waitelapsed >= waitduration)
      {
        GOOL_OBJECT_POP(obj); // get rid of 'wait' 
        SP-=8;
        emuptr<goolstateref> transition(SP);
        // continue execution until another anim instruction is reached        
        uint32_t result = EMU_Invoke(0x800201DC,3,obj,0x4,transition);
        SP+=8;
        if (ERROR_ISERRORCODE(result))
          return result;
      } 

      EMU_Invoke(0x8001EB28,1,obj); // GOOL_UpdateObjectColors(obj);
      EMU_Invoke(0x8001F30C,1,obj); // GOOL_UpdateObjectPhysics(obj);
      obj->statusa &= 0xFFFFFFDF; // reset gravity accel. flag
    }
    else
    {
      if (--obj->animcounter == 0) // decrement stall counter
        obj->statusb &= 0xEFFFFFFF; // clear stall flag when counter reaches 0
    }
  }
    
  if (obj->animseq && !(obj->statusb & 0x100) && (globanimflags & 4)) 
  {
    bool display;
    if (((obj->statusb & 0x2000000) || (obj->stateflags & 0x20000)) && (globanimflags & 0x4000))
      display = true;
    else
    {      
      emuptr<nsitem> execheader(obj->local->items[0]);
      uint32_t category = *((uint32_t*)&execheader[4]);
      if      (category == 0x100) { display = globanimflags & 0x10;  }
      else if (category == 0x200) { display = globanimflags & 0x200; }
      else if (category == 0x300) { display = globanimflags & 0x40;  } 
      else if (category == 0x400) { display = globanimflags & 0x800; }
      else if (category == 0x500) { display = globanimflags & 0x40;  }
      else if (category == 0x600) { display = globanimflags & 0x40;  }
      else                        { display = false; }
    }

    if (display)
      EMU_Invoke(0x8001DE78,1,obj); // GOOL_RenderObject(obj);
  }
  
  unhandledobj = 0; 
  return ERROR_CODE_SUCCESS;
}

#define G_OPCODE(ins) (ins >> 24)
#define G_OPA(ins) ((ins >> 12) & 0xFFF)
#define G_OPB(ins) ((ins      ) & 0xFFF)
#define G_OP(ins) G_OPB(ins)

#define G_TRANS_GOPA(obj,ins,a) \
a = *(GOOL_TranslateInGop(obj,G_OPA(ins)))
#define G_TRANS_GOPB(obj,ins,b) \
b = *(GOOL_TranslateInGop(obj,G_OPB(ins)))
#define G_TRANS_GOPA_IN(obj,ins,a) \
a = GOOL_TranslateInGop(obj,G_OPA(ins))
#define G_TRANS_GOPB_IN(obj,ins,b) \
b = GOOL_TranslateInGop(obj,G_OPB(ins))
#define G_TRANS_GOPA_OUT(obj,ins,a) \
a = GOOL_TranslateOutGop(obj,G_OPA(ins))
#define G_TRANS_GOPB_OUT(obj,ins,b) \
b = GOOL_TranslateOutGop(obj,G_OPB(ins))
#define G_TRANS_GOP G_TRANS_GOPB
#define G_TRANS_GOP_IN G_TRANS_GOPB_IN
#define G_TRANS_GOP_OUT G_TRANS_GOPB_OUT
#define G_TRANS_GOPS(obj,ins,a,b) \
G_TRANS_GOPA(obj,ins,a); \
G_TRANS_GOPB(obj,ins,b)
#define G_TRANS_REGREF(obj,a) \
(((a) == 0x1F) ? GOOL_OBJECT_POP(obj) \
               : *((uint32_t*)&obj->self + (a)))
          
#define GOOL_GOP_STACKTOPREF 0xE1F
#define GOOL_GOP_SPDOUBLEREF 0xBF0

/*
\s+RA = 0x[0-9A-F]{8};(\s+((?!RA)[^\n])+\n)+(\s+)goto ZZ_([0-9A-F]{5});$
\1\3V0 = EMU_Invoke\(0x800\4,0\);
^\s+ZZ_CLOCKCYCLES(_JR)?[(]\d+(,0x[0-9A-F]{8})?[)];..
*/

inline emuptr<uint32_t> GOOL_TranslateInGop(emuptr<goolobj> obj, uint32_t gop)
{
  if ((gop & 0xFFF) == GOOL_GOP_STACKTOPREF) // stack pop
    return --obj->sp;
  else if ((gop & 0xE00) == 0xE00) // stack ref
  {
    uint32_t index = gop & 0x1FF;
    return (emuptr<uint32_t>)EMUADDR((uint32_t*)&obj->self + index);
  }
  else // other ref
    return GOOL_TranslateGop(obj, gop);
}

inline emuptr<uint32_t> GOOL_TranslateOutGop(emuptr<goolobj> obj, uint32_t gop)
{
  if ((gop & 0xFFF) == GOOL_GOP_STACKTOPREF) // stack push
    return obj->sp++;
  else if ((gop & 0xE00) == 0xE00) // stack ref
  {
    uint32_t index = gop & 0x1FF;
    return (emuptr<uint32_t>)EMUADDR((uint32_t*)&obj->self + index);
  }
  else // other ref
    return GOOL_TranslateGop(obj, gop);
}
    
emuptr<uint32_t> GOOL_TranslateGop(emuptr<goolobj> obj, uint32_t gop)
{
  if (!(gop & 0x800)) // ireg or pool ref
  {
    uint32_t index = gop & 0x3FF;
    emuptr<uint32_t> execdata;
    if (!(gop & 0x400))
      execdata = obj->local->items[2]; //ireg ref
    else
      execdata = obj->external->items[2]; // pool ref
    return (emuptr<uint32_t>)EMUADDR(&execdata[index]);
  }
  else if (!(gop & 0x400))
  {
    if (!(gop & 0x200)) // int ref
    {
      int32_t intval = (gop & 0x1FF) << 23; // shift up sign bit
      intval >>= 15;
      
      activebufindex = !activebufindex;
      constbuf[activebufindex] = intval;
      return (emuptr<uint32_t>)EMUADDR(&constbuf[activebufindex]);
    }
    else if (!(gop & 0x100)) // frac ref
    {
      int32_t fracval = (gop & 0xFF) << 24; // shift up sign bit
      fracval >>= 20;
      
      activebufindex = !activebufindex;
      constbuf[activebufindex] = fracval;
      return (emuptr<uint32_t>)EMUADDR(&constbuf[activebufindex]);
    }
    else if (!(gop & 0x80)) // var ref
    {
      int32_t index = (gop & 0x3F) << 26; // shift up sign bit
      index >>= 26;
      return (emuptr<uint32_t>)EMUADDR(&obj->fp[index]);
    }
    else if (gop == 0xBE0) // null ref
    {
      return (emuptr<uint32_t>)0;
    }
    else if (gop == 0xBF0) // sp-double ref
    {
      return (emuptr<uint32_t>)0xBF0;
    }
    else // invalid ref
    {
      return (emuptr<uint32_t>)1;
    }
  }
  else // reg ref
  {
    uint32_t linkindex = (gop >> 6) & 0x7;
    uint32_t linkreg = gop & 0x3F;
    
    emuptr<goolobj> link(((uint32_t*)&obj->self)[linkindex]);
    if (link)
      return (emuptr<uint32_t>)EMUADDR((uint32_t*)&link->self + linkreg);
    else
      return (emuptr<uint32_t>)0;
  }
}

static uint32_t retflag = 0;
static uint32_t retcode = 0;

uint32_t GOOL_InterpretObject(emuptr<goolobj> obj, uint32_t flags, emuptr<goolstateref> transition)
{
  GOOL_InterpretObject_NativeEnter();
  
  emuptr<goolobj> recipient;
  uint32_t argbuf;
  
  register uint32_t instruction;
  register uint32_t opcode;
  register union
  {
    uint32_t a;
    uint32_t r;
    int32_t sa;
    int32_t sr;
    emuptr<uint32_t> src;
  };
  register union
  {
    uint32_t b;
    uint32_t l;
    int32_t sb;
    int32_t sl;
    emuptr<uint32_t> dst;
  };
  do
  {
    FP = GOOL_GOP_STACKTOPREF; 
    instruction = *(obj->pc++);
    opcode = G_OPCODE(instruction);
    
    switch (opcode)
    {
    case 0:
      G_TRANS_GOPS(obj,instruction,r,l);
      GOOL_OBJECT_PUSH(obj,l+r);
      break;
    case 1:
      G_TRANS_GOPS(obj,instruction,r,l);
      GOOL_OBJECT_PUSH(obj,l-r);
      break;
    case 2:
      G_TRANS_GOPS(obj,instruction,r,l);
      GOOL_OBJECT_PUSH(obj,l*r);
      break;
    case 3:
      G_TRANS_GOPS(obj,instruction,r,l);
      GOOL_OBJECT_PUSH(obj,l/r);
      break;
    case 4:
      G_TRANS_GOPS(obj,instruction,a,b);
      GOOL_OBJECT_PUSH(obj,!(a^b));
      break;
    case 5:
      G_TRANS_GOPS(obj,instruction,a,b);
      b ? GOOL_OBJECT_PUSH(obj,a!=0)
        : GOOL_OBJECT_PUSH(obj,0);
      break;
    case 6:
      G_TRANS_GOPS(obj,instruction,a,b);
      GOOL_OBJECT_PUSH(obj,a||b);
      break;
    case 7:
      G_TRANS_GOPS(obj,instruction,a,b);
      GOOL_OBJECT_PUSH(obj,a&b);
      break;
    case 8:
      G_TRANS_GOPS(obj,instruction,a,b);
      GOOL_OBJECT_PUSH(obj,a|b);
      break;
    case 9:
      G_TRANS_GOPS(obj,instruction,sl,sr);
      GOOL_OBJECT_PUSH(obj,sl>sr);
      break;   
    case 0xA:
      G_TRANS_GOPS(obj,instruction,sl,sr);
      GOOL_OBJECT_PUSH(obj,sl>=sr);
      break;   
    case 0xB:
      G_TRANS_GOPS(obj,instruction,sl,sr);
      GOOL_OBJECT_PUSH(obj,sl<sr);
      break;         
    case 0xC:
      G_TRANS_GOPS(obj,instruction,sl,sr);
      GOOL_OBJECT_PUSH(obj,sl<=sr);
      break; 
    case 0xD:
      G_TRANS_GOPS(obj,instruction,r,l);
      GOOL_OBJECT_PUSH(obj,l%r);
      break;
    case 0xE:
      G_TRANS_GOPS(obj,instruction,a,b);
      GOOL_OBJECT_PUSH(obj,a^b);
      break;
    case 0xF:
      G_TRANS_GOPS(obj,instruction,a,b);
      GOOL_OBJECT_PUSH(obj,!((a&b)^a));
      break;     
    case 0x10:
      G_TRANS_GOPS(obj,instruction,a,b);
      if (a == b)
        GOOL_OBJECT_PUSH(obj,b);
      else
      {
        uint32_t rand = EMU_Invoke(0x8002F6B0,1,a-b);   
        GOOL_OBJECT_PUSH(obj,b+rand);
      }
      break;
    case 0x11:
      G_TRANS_GOPA(obj,instruction,a);
      G_TRANS_GOPB_OUT(obj,instruction,dst);
      if (dst) { *(dst) = a; }
      break;
    case 0x12:
      G_TRANS_GOPA(obj,instruction,a);
      G_TRANS_GOPB_OUT(obj,instruction,dst);
      *(dst) = !a;
      break;
    case 0x13:
      GOOL_OP_13_unnamed(obj,instruction);
      break;
    case 0x14:
      G_TRANS_GOPA_IN(obj,instruction,src);
      G_TRANS_GOPB_OUT(obj,instruction,dst);
      *(dst) = src;
      break;
    case 0x15: // signed = arithmetic shift*
      G_TRANS_GOPS(obj,instruction,sr,sl);
      sr < 0 ? GOOL_OBJECT_PUSH(obj,sl>>-sr)
             : GOOL_OBJECT_PUSH(obj,sl<<sr);
      break;
    case 0x16:
    case 0x26:
      G_TRANS_GOPA_IN(obj,instruction,src);
      G_TRANS_GOPB_IN(obj,instruction,dst);
      if (G_OPCODE(instruction) == 0x26)
      {
        if (!dst) { break; }
        GOOL_OBJECT_PUSH(obj,(uint32_t)dst);
        if (src) { GOOL_OBJECT_PUSH(obj,(uint32_t)src); }
      }
      else
      {
        if (!dst) { break; }
        if (src) { argbuf = *(src); }
        GOOL_OBJECT_PUSH(obj,*(dst));
        if (src) { GOOL_OBJECT_PUSH(obj,argbuf); }
      }
      break;
    case 0x17:
      G_TRANS_GOPA_IN(obj,instruction,src);
      G_TRANS_GOPB_OUT(obj,instruction,dst);
      if (dst) { *(dst) = ~*(src); }
      break;
    case 0x18:
    {
      emuptr<uint32_t> execcode(obj->local->items[1]);
      uint32_t offset = (instruction & 0x3FFF);
      uint32_t mem = (instruction >> 14) & 0x3F;
      if (mem == 0x1F)
        GOOL_OBJECT_PUSH(obj,EMUADDR(&execcode[offset]));
      else
        ((uint32_t*)&obj->self)[mem] = (uint32_t)EMUADDR(&execcode[offset]);
      break;
    }
    case 0x19:
      G_TRANS_GOPA(obj,instruction,sa);
      G_TRANS_GOPB_OUT(obj,instruction,dst);
      sa < 0 ? *(dst) = -sa : *(dst) = sa;
      break;
    case 0x1A:
    {
      //uint32_t result = GOOL_TestControls(instruction & 0x1FFFFF, 0);
      uint32_t result = EMU_Invoke(0x8001FDC4,2,instruction & 0x1FFFFF,0);
      GOOL_OBJECT_PUSH(obj, result);
      break;
    }
    case 0x1B:
    {
      G_TRANS_GOPS(obj,instruction,sa,sb);
      int32_t speed, velocity;
      
      uint32_t gamespeed = *((uint32_t*)&dispenv[0x84]);
      if (gamespeed >= 0x67)
        speed = sa * 0x66;
      else
        speed = sa * gamespeed;
      if (speed < 0) { speed += 0x3FF; }
      
      velocity = sb + (speed >> 10);
      GOOL_OBJECT_PUSH(obj,velocity);
      break;
    }
    case 0x1C:
      GOOL_OP_Misc(obj,instruction);
      break;       
    case 0x1D:
    {
      G_TRANS_GOPS(obj,instruction,sa,sb);
      uint32_t angle = ((sb << 11) / sa) - 0x400;
      uint32_t s; /*if (a > 0xFFFF) { s = 2; } else*/
      { s = 0; }
      uint32_t sin = EMU_Invoke(0x8003905C,1,angle);
      uint32_t sinadjusted = sin + 0x1000;
      uint32_t sinscaled = ((sinadjusted >> s) * sa) >> (13 - s);
      GOOL_OBJECT_PUSH(obj,sinscaled);
      break;
    }
    case 0x1E:
      G_TRANS_GOPS(obj,instruction,a,b);
      GOOL_OBJECT_PUSH(obj,(a + rendercount) % b);
      break;
    case 0x1F:
      G_TRANS_GOP(obj,instruction,b);
      GOOL_OBJECT_PUSH(obj,globals[b >> 8]);
      break;
    case 0x20:
      G_TRANS_GOPS(obj,instruction,a,b);
      globals[b >> 8] = a;
      break;
    case 0x21:
    {
      G_TRANS_GOPS(obj,instruction,a,b);
      int32_t angdist = EMU_Invoke(0x800245F0,2,b,a);
      GOOL_OBJECT_PUSH(obj,angdist);
      break;
    }
    case 0x22:
    case 0x25:
      GOOL_OP_2225_unnamed(obj,instruction);
      break;
    case 0x23:
    {
      
      uint32_t linkindex = (instruction >> 12) & 7;
      uint32_t colorindex = (instruction >> 15) & 0x3F;
      emuptr<goolobj> link(((uint32_t*)&obj->self)[linkindex]);
      uint32_t color = *((uint16_t*)&link->colors + colorindex);
      GOOL_OBJECT_PUSH(obj,color);
      break;
    }
    case 0x24:
    {
      
      G_TRANS_GOP(obj,instruction,b);
      uint32_t linkindex = (instruction >> 12) & 7;
      uint32_t colorindex = (instruction >> 15) & 0x3F;
      emuptr<goolobj> link(((uint32_t*)&obj->self)[linkindex]);
      uint32_t color = b;
      *((uint16_t*)&link->colors + colorindex) = color;
      break;
    }
    case 0x27:
    {
      
      G_TRANS_GOPA(obj,instruction,a);
      G_TRANS_GOPB_OUT(obj,instruction,dst);
      emuptr<nsitem> execanims(obj->local->items[5]);
      uint32_t offset = a/64;
      *(dst) = (uint32_t)EMUADDR(&execanims[offset]);
      break;
    }
    case 0x82:
      GOOL_OP_ControlFlow(obj,instruction,flags,transition);
      break;
    case 0x83:
      GOOL_OP_ChangeAnim(obj,instruction,flags);
      break;
    case 0x84:
      GOOL_OP_ChangeAnimFrame(obj,instruction,flags);
      break;
    case 0x85:
      GOOL_OP_TransformVectors(obj,instruction);
      break;
    case 0x86:
      GOOL_OP_JumpAndLink(obj,instruction,flags);
      break;
    case 0x87:
    case 0x90:
    {
      uint32_t index = (instruction >> 21) & 0x7;
      recipient = ((uint32_t*)&obj->self)[index];
    }
    case 0x8F:
      GOOL_OP_SendEvent(obj,instruction,flags,recipient,opcode);
      break;
    case 0x88:
    case 0x89:
      GOOL_OP_ReturnStateTransition(obj,instruction,flags,transition,opcode);
      break;
    case 0x8A:
    case 0x91:
      GOOL_OP_SpawnChildren(obj,instruction,opcode);
      break;
    case 0x8B:
      GOOL_OP_Paging(obj,instruction);
      break;
    case 0x8C:
      GOOL_OP_AudioA(obj,instruction);
      break;
    case 0x8D:
      GOOL_OP_AudioB(obj,instruction);
      break;
    case 0x8E:
      GOOL_OP_ReactSolidSurfaces(obj,instruction);
      break;
    }  
  } while (!retflag);
  
  retflag = 0;
  return retcode;
}

__attribute__((always_inline)) inline void GOOL_InterpretObject_NativeEnter() 
{
	SP -= 320;
  EMU_Write32(SP + 316, RA); //+ 0x13C
	EMU_Write32(SP + 312, FP); //+ 0x138
	EMU_Write32(SP + 308, S7); //+ 0x134
	EMU_Write32(SP + 304, S6); //+ 0x130
	EMU_Write32(SP + 300, S5); //+ 0x12C
	EMU_Write32(SP + 296, S4); //+ 0x128
	EMU_Write32(SP + 292, S3); //+ 0x124
	EMU_Write32(SP + 288, S2); //+ 0x120
	EMU_Write32(SP + 284, S1); //+ 0x11C
	EMU_Write32(SP + 280, S0); //+ 0x118
}

__attribute__((always_inline)) inline void GOOL_InterpretObject_NativeReturn(uint32_t result)
{
  RA = EMU_ReadU32(SP + 316); //+ 0x13C
	FP = EMU_ReadU32(SP + 312); //+ 0x138
	S7 = EMU_ReadU32(SP + 308); //+ 0x134
	S6 = EMU_ReadU32(SP + 304); //+ 0x130
	S5 = EMU_ReadU32(SP + 300); //+ 0x12C
	S4 = EMU_ReadU32(SP + 296); //+ 0x128
	S3 = EMU_ReadU32(SP + 292); //+ 0x124
	S2 = EMU_ReadU32(SP + 288); //+ 0x120
	S1 = EMU_ReadU32(SP + 284); //+ 0x11C
	S0 = EMU_ReadU32(SP + 280); //+ 0x118
	SP += 320;
  
  retflag = 1;
  retcode = result;
}

#define GOOL_OPERATION __attribute__((always_inline)) inline void
#define greturn(x) { GOOL_InterpretObject_NativeReturn(x); return; }

#if defined (GOOL_DEBUG_INTERPRETER_DAC)
#include "gool_temp.h"
#endif

GOOL_OPERATION GOOL_OP_13_unnamed(emuptr<goolobj> obj, uint32_t instruction)
{
  int32_t p1;
  int32_t p2;
  int32_t rate;
  if (G_OPA(instruction) == GOOL_GOP_SPDOUBLEREF)
  {
    p1 = GOOL_OBJECT_POP(obj);
    p2 = GOOL_OBJECT_POP(obj);
  }
  else
  {
    p1 = 0x100;
    p2 = *(GOOL_TranslateInGop(obj,G_OPA(instruction)));
  }
  
  emuptr<uint32_t> inout;
  G_TRANS_GOPB_IN(obj,instruction,inout);
  if (!inout) { return; }     
  rate = *(inout);
  
  int32_t prog;
  int32_t absprog; 
  if (p2 >= 0)
  {
    if ((rate + p1) < p2)
      prog = rate + p1;
    else
      prog = (p1*2) - rate;
    absprog = abs(prog);
  }
  else
  {
    if (p2 >= (rate - p1))
      prog = -p2 - (p1*2);
    else
      prog = rate - p1;
    absprog = -abs(prog);
  }
  
  G_TRANS_GOPB_OUT(obj,instruction,inout); // inout
  *(inout) = prog;
  GOOL_OBJECT_PUSH(obj,absprog);
}

GOOL_OPERATION GOOL_OP_2225_unnamed(emuptr<goolobj> obj, uint32_t instruction)
{
  int32_t ang1, ang2, speed, angout;
  if (G_OPA(instruction) == GOOL_GOP_SPDOUBLEREF)
  {
    speed = GOOL_OBJECT_POP(obj);
    ang2 = GOOL_OBJECT_POP(obj);
  }
  else
  {
    speed = 0x100; //!
    ang2 = *(GOOL_TranslateInGop(obj,G_OPA(instruction)));
  }
  
  emuptr<uint32_t> ang1ptr = GOOL_TranslateInGop(obj,G_OPB(instruction));
  if (ang1ptr) 
  {  
    ang1 = *(ang1ptr);
    if (G_OPCODE(instruction) == 0x22)
      angout = EMU_Invoke(0x80024628,3,ang1,ang2,abs(speed));
    else /* if G_OPCODE(instruction == 0x25) */
      angout = EMU_Invoke(0x800243A0,4,ang1,ang2,speed,0);
    
    GOOL_OBJECT_PUSH(obj,angout);
  }
  else
    GOOL_OBJECT_PUSH(obj,0);
}

GOOL_OPERATION GOOL_OP_Misc(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
  emuptr<uint32_t> ptr;
  G_TRANS_GOPB_IN(obj,instruction,ptr);
  S3 = ptr;
  
  uint32_t subopprimary;
  union
  {
    int32_t subopsecondary;
    int32_t argval;
    int32_t argindex;
    int32_t categories; // bitfield
  };   
  subopprimary = (instruction >> 20) & 0xF;
  subopsecondary = (int32_t)(instruction << 12) >> 27;
  
  V1 = subopprimary;
  A2 = subopsecondary;

  switch (subopprimary)
  {
  case 0: // read event [service routine?] argument
  {
    if (!ptr) { break; }
    
    emuptr<uint32_t> args(*(ptr));
    if (args)
      GOOL_OBJECT_PUSH(obj, args[argindex]);
    else
      GOOL_OBJECT_PUSH(obj, 0);
    break;
  }
  case 1: // [euclidian or manhattan] distance from obj (src) to link (dst)
  case 6: // [euclidian or manhattan] distance from vec (src) to link (dst)
  {
    uint32_t linkindex = (instruction >> 12) & 7;
    emuptr<goolobj> link(((uint32_t*)&obj->self)[linkindex]);
  
    emuptr<vector> srctrans;
    emuptr<vector> dsttrans;
    
    if (subopprimary == 6)
      srctrans = ptr; // ?
    else
      srctrans = EMUADDR(&obj->trans);
    
    dsttrans = EMUADDR(&link->trans);
    
    if (subopsecondary & 2) // restricts distance calculations to the XZ plane
    {
      SP -= sizeof(vector)*2;
      emuptr<vector> srctranstmp(SP);
      emuptr<vector> dsttranstmp(SP+sizeof(vector));
      
      srctranstmp->x = srctrans->x;
      srctranstmp->y = 0;
      srctranstmp->z = srctrans->z;
      srctrans = srctranstmp; // EMUADDR(&srctranstmp);
      
      dsttranstmp->x = dsttrans->x;
      dsttranstmp->y = 0;
      dsttranstmp->z = dsttrans->z;
      dsttrans = dsttranstmp; // EMUADDR(&dsttranstmp);
    }
    
    if (subopsecondary & 1)
      GOOL_OBJECT_PUSH(obj, EMU_Invoke(0x80029D30,2,srctrans,dsttrans)); /*eucDist(srctrans, dsttrans));*/
    else
      GOOL_OBJECT_PUSH(obj, EMU_Invoke(0x80029B90,2,srctrans,dsttrans)); /*apxDist(srctrans, dsttrans));*/
  
    //need this for now
    if (subopsecondary & 2)
      SP += sizeof(vector)*2;  
    break;
  }
  case 5: // look angle between obj. and link in XZ plane
  {
  	uint32_t linkindex = (instruction >> 12) & 7;
    emuptr<goolobj> link(((uint32_t*)&obj->self)[linkindex]);
    
    emuptr<vector> srctrans(EMUADDR(&obj->trans));
    emuptr<vector> dsttrans(EMUADDR(&link->trans));
    
    uint32_t angleXZ = EMU_Invoke(0x80029E10,2,srctrans,dsttrans); /*angleXZ(srctrans, dsttrans);*/
    int32_t lookangleXZ = angleXZ - (obj->rot.x & 0xFFF);

    if (abs(lookangleXZ) >= 0x800)
      lookangleXZ = (-lookangleXZ & 0xFFF); 
    
    GOOL_OBJECT_PUSH(obj, lookangleXZ);
    break;
  }
  case 2: // angular displacement between vec and link vec
  {
  	uint32_t linkindex = (instruction >> 12) & 7;
    emuptr<goolobj> link(((uint32_t*)&obj->self)[linkindex]);
    
    emuptr<vector> srctrans(EMUADDR(&link->trans));
    emuptr<vector> dsttrans(ptr);
    
    if (obj->statusb & 0x00200200)
      GOOL_OBJECT_PUSH(obj, EMU_Invoke(0x80029E48,2,srctrans,dsttrans)); /*angleXY(srctrans, dsttrans));*/
    else
      GOOL_OBJECT_PUSH(obj, EMU_Invoke(0x80029E10,2,srctrans,dsttrans)); /*angleXZ(srctrans, dsttrans));*/
    break;
  }
  case 3: // load link register
  {
	  uint32_t linkindex = (instruction >> 12) & 7;
    emuptr<goolobj> link(((uint32_t*)&obj->self)[linkindex]);
    
    uint32_t regindex = *(ptr) >> 8;
    uint32_t data = ((uint32_t*)&link->self)[regindex];
    
    GOOL_OBJECT_PUSH(obj, data);
    break;
  }
  case 4: // set link register
  {
  	uint32_t linkindex = (instruction >> 12) & 7;
    emuptr<goolobj> link(((uint32_t*)&obj->self)[linkindex]);
    
    uint32_t regindex = *(ptr) >> 8;
    uint32_t data = GOOL_OBJECT_POP(obj);
    
    ((uint32_t*)&link->self)[regindex] = data;
    break;
  }
  case 7: // find the [spawned] obj with id
  {
  	if (!ptr) { break; }
     
    uint32_t id = *(ptr);
    if (id)
    {
      if (spawnlist[id >> 8] & 1) // if object with this id has been spawned
      {
        emuptr<goolobj> found(0);
        for (uint32_t count = 3; count < 5; count++)
        {
          emuptr<goolobj> usedlist(EMUADDR(&usedlists[count]));
          emuptr<goolobj> children(GOOL_OBJECT_GETCHILDREN(usedlist));       
          emuptr<goolobj> child(children);   /* *** @ here = useless check done in the original: */  
          while (child && !found)            /* if (usedlist->header != 2 &&                     */
          {                                  /*    !(found = hasPID(headObject, PIDflags))) {    */
            found = EMU_Invoke(0x8001B788,3,child,0x8001BA90,id); /*findObject(child, hasID, id);*/
            child = child->sibling;
          }
        }
        GOOL_OBJECT_PUSH(obj, found);
        break; // break from this case
      }
    }
    GOOL_OBJECT_PUSH(obj, 0);
    break;
  }
  case 8:
  {    
    if (!ptr) { break; }
    
    uint32_t id = *(ptr) >> 8;
    if (subopsecondary)
      spawnlist[id] &= 0xFFFFFFFD;
    else
      spawnlist[id] |= 2;
    break;
  }
  case 9:
  {  
    emuptr<nsentry> zone;
    
    emuptr<point> zonepoint(ptr);
    if (zonepoint)
      zone = EMU_Invoke(0x80026DD4,2,currentzone,zonepoint); /*ZDAT_FindZone(currentzone, zonepoint);*/
    else
      zone = currentzone;
    
    if (ERROR_ISSUCCESSCODE(zone))
    {
      uint32_t linkindex = (instruction >> 12) & 7;
      emuptr<goolobj> link(((uint32_t*)&obj->self)[linkindex]);
      link->zone = zone;
    }
    break;
  }
  case 10:
  {
    if (!ptr) { break; }
  
    uint32_t id = *(ptr) >> 8; 
    switch (subopsecondary)
    {
    case 0: 
      spawnlist[id] &= 0xFFFFFFFB; // clear bit 3 
      break; 
    case 1: 
      spawnlist[id] |= 4;          // set bit 3
      break; 
    case 4:
    {
      emuptr<emuptr<uint8_t>> nsdptr(0x8005C53C);
      emuptr<uint8_t> nsd(*nsdptr);
      uint32_t levelid = *((uint16_t*)&nsd[4]);
      uint32_t listentry = ((levelid << 9) | id) & 0xFFFF;
      
      uint32_t count = 0;
      while (levelspawnlist[count])
      {
        if (levelspawnlist[count] == listentry) // if we find the entry w/this value
        {                                          
          if (levelspawnlist[count+1]) // if the following entry is a tail entry
            levelspawnlist[count] = 1; // replace current entry as free entry
          else                            
            levelspawnlist[count] = 0; // else make current entry a tail entry  
          break;
        }
        count++;   
      }
    } // no break;
    case 2: 
      spawnlist[id] &= 0xFFFFFFF7; // clear bit 4
      break; 
    case 5:
    {
      emuptr<nsitem> zoneheader(currentzone->items[0]);
      uint32_t zoneflags = *((uint32_t*)&zoneheader[0x2FC]);
      
      if (!(zoneflags & 0x2000)) // if state can be saved in the current zone
      {
        // keeps a list of levelid|objid (LLLLLLLPPPPPPPPP)
        // so we can record a list of the objects that have been encountered
        emuptr<emuptr<uint8_t>> nsdptr(0x8005C53C);
        emuptr<uint8_t> nsd(*nsdptr);
        uint32_t levelid = *((uint16_t*)&nsd[4]);
        uint32_t listentry = ((levelid << 9) | id) & 0xFFFF;
     
        uint32_t count = 0;
        emuptr<goolobj> found(0);
        emuptr<uint16_t> freeentry(0);
        while (levelspawnlist[count]) // while we haven't reached a tail entry
        {
          if (levelspawnlist[count] != listentry)
          {
            if (levelspawnlist[count] == 1)                // if we find a free entry
              freeentry = EMUADDR(&levelspawnlist[count]); // remember its position
          }                                                // but continue to search
          else
          {
            found = 1; // else if we find the entry
            break;     // then the object has already been encountered
          }            // so stop searching
          count++;   
        }
            
        if (!found) // if we found the entry
        {
          if (!freeentry)                                // [but] if we didn't find a free entry
            freeentry = EMUADDR(&levelspawnlist[count]); // shrink tail by making first tail entry new free entry
        
          *(freeentry) = listentry; // put listentry in the free entry
        }
      }
    }  // no break;
    case 3: 
      spawnlist[id] |= 8; // set bit 4
      break; 
    case 6: 
      break;
    case 7: 
      break;
    case 8: 
      spawnlist[id] &= 0xFFFFFFFE; // clear bit 1
      break;
    case 9: 
      spawnlist[id] |= 1; // set bit 1
      break; 
    }
    break;
  } 
  case 11:
  {
    if (!ptr) { break; }
    
    uint32_t id = *(ptr) >> 8;
    if (subopsecondary == 1)
      GOOL_OBJECT_PUSH(obj, ((spawnlist[id] >> 1) ^ 1) & 1/*!(spawnlist[id] & 2)*/);
    else if (subopsecondary == 2) 
      GOOL_OBJECT_PUSH(obj, spawnlist[id] & 4);
    else if (subopsecondary == 3)
      GOOL_OBJECT_PUSH(obj, spawnlist[id] & 8);
    break;
  }
  case 12:
  {
    switch(subopsecondary)
    {
    case 0:
      EMU_Invoke(0x80026460,3,obj,EMUADDR(&levelstate),0); // saveState(obj, levelstate, false);
      break;
    case 1:
      EMU_Invoke(0x80026650,1,EMUADDR(&levelstate)); // reloadLevel(levelstate);
      break;
    case 2:
    {
      uint32_t listindex = *(ptr) >> 8;
      emuptr<goolobj> parent(EMUADDR(&usedlists[listindex]));
      GOOL_AdoptObject(obj, parent);
      break;
    }
    case 3:
      *(ptr); // unused
      break;
    case 4:
    {
      emuptr<goolobj> dstobj(*(ptr));
      dstobj->zone = EMU_ReadU32(0x80057918); // changes zone?
      break;
    }
    case 5:
      EMU_Invoke(0x800313B4,0); // sets some audio parameter
      break;
    case 6:
      EMU_Invoke(0x800313C4,1,*(ptr)); // spu routine
      break;
    case 7:
    {
      if (currentzone)
      {
        emuptr<nsitem> zoneheader(currentzone->items[0]);
        uint32_t neighborcount = *((uint32_t*)&zoneheader[0x210]);
        emuptr<uint32_t> neighboreids(EMUADDR(&zoneheader[0x214]));
        for (uint32_t i = 0; i < neighborcount; i++)
        {
          emuptr<nsentry> neighborzone;
          neighborzone = EMU_Invoke(0x80015A98,1,EMUADDR(&neighboreids[i])); /*NS_PageEntry(neighboreid);*/
          
          for (uint32_t ii = 0; ii < 8; ii++)
          {
            // uint32_t (*func)(goolobj*, void*) = (uint32_t (*)(goolobj*, void*))terminateZoneObject;
            // GOOL_TraverseObjectListTreePostorder(&usedlists[ii], func, neighborzone);
            EMU_Invoke(0x8001B92C,3,EMUADDR(&usedlists[ii]),0x8001D11C,neighborzone);
          }
        }
      }
      break;
    }
    case 8:
    {
      uint32_t linkindex = (instruction >> 12) & 7;
      emuptr<goolobj> link(((uint32_t*)&obj->self)[linkindex]);
      
      emuptr<vector> srctrans(ptr);
      emuptr<vector> dsttrans(EMUADDR(&link->trans));
      
      int32_t disty  = dsttrans->y - srctrans->y;
      int32_t distxz = EMU_Invoke(0x80029DB0,2,dsttrans,srctrans);/*eucdistxz(dsttrans, srctrans);*/
  
      // can do this for now; note that we will have to convert back to the game's angle 
      // format if we decide to use math's atan2 in the future
      int32_t arctan = EMU_Invoke(0x8004301C,2,disty,distxz); /*atan2(disty, distxz);*/
    
      GOOL_OBJECT_PUSH(obj, arctan); 
      break;
    }
    case 9:
    {
      uint32_t levelid = *(ptr) >> 8;
      nextlevelid = levelid;
      break;
    }
    case 10:
    {
      uint32_t levelid = *(ptr) >> 8;
      EMU_Invoke(0x80013798,1,levelid); // seek disc to location of NSF corresponding to levelid
      break;
    }
    case 11:
    {
      EMU_Invoke(0x80026200,1,1); // reset global variables
      break;
    }
    }
    break;
  }
  case 13:
  {
    uint32_t linkindex = (instruction >> 12) & 7;
    emuptr<goolobj> link(((uint32_t*)&obj->self)[linkindex]); 
    
    SP -= sizeof(gooleventpoll);
    emuptr<gooleventpoll> eventpoll(SP);
    
    eventpoll->categories = categories; // bitfield, one bit for each object category
    eventpoll->sender = link;
    eventpoll->collider = 0;
    eventpoll->distnearest = 0x7FFFFFFF;
    eventpoll->event = *(ptr);
  
    emuptr<goolobj> objlist(EMUADDR(&usedlists[4])); // evidently this list contains only objects that 
    if (objlist)                                     // can receive an asynchronous event...
    {                                                // not sure what other significance it has.
      uint32_t result = 0;                           // the following pointless check done in original
      emuptr<goolobj> children(GOOL_OBJECT_GETCHILDREN(objlist)); // <- before this line:
      if (children/* && !result*/)                  /* if (objlist->type != 2)                      */               
      {                                             /* {                                            */               
        emuptr<goolobj> cur(children);              /*   result = sub_8001BAB0(procList5, &var_108);*/               
        emuptr<goolobj> next;                       /*   children = getChildren(process);           */               
        do                                          /* }                                            */
        {                                           /* else                                         */
          result = EMU_Invoke(0x8001B788,3,cur,0x8001BAB0,eventpoll);
          next = cur->sibling;
        } while ((cur = next) && !result);
      }
    }
    SP += sizeof(gooleventpoll);
    
    if (eventpoll->collider)
      GOOL_OBJECT_PUSH(obj, eventpoll->collider);
    else
      GOOL_OBJECT_PUSH(obj, 0);
    break;
  }
  case 14:
  {

    uint32_t linkindex = (instruction >> 12) & 7;
    emuptr<goolobj> link(((uint32_t*)&obj->self)[linkindex]);
  
    SP -= sizeof(space);
    emuptr<space> linkspace(SP);
    GFX_GETSPACE(linkspace, &link->trans, &link->bound);
  
    emuptr<point> testpoint(ptr);
    uint32_t result = EMU_Invoke(0x80026B80,2,testpoint,linkspace); /*iscolliding(testpoint, &linkspace);*/
    SP += sizeof(space);
    
    GOOL_OBJECT_PUSH(obj, result); 
    break;
  }
  case 15:
  {
    uint32_t arg = *(ptr);
    obj->misc_memcard = EMU_Invoke(0x8003D4EC,2,subopsecondary,arg); // memory card routine
    break;
  }
  }  
}

GOOL_OPERATION GOOL_OP_ControlFlow(emuptr<goolobj> obj, uint32_t instruction, uint32_t &flags, emuptr<goolstateref> transition)
{
  static uint32_t cond;
  static uint32_t flagspair;
  
  uint32_t condtype = (instruction >> 20) & 3;
  if (condtype == 0)
    cond = 1;
  else if (condtype == 1)
    cond = G_TRANS_REGREF(obj,(instruction >> 14) & 0x3F);
  else if (condtype == 2)
    cond = !G_TRANS_REGREF(obj,(instruction >> 14) & 0x3F);
  // else cond is unchanged; use val from previous invocation
    
  uint32_t optype = (instruction >> 22) & 3;
  if (cond && (optype != 3))
  {
    if (optype == 0) // branch
    {
      int32_t offset = (int32_t)((instruction & 0x3FF) << 22) >> 22;
      int32_t varskip = (instruction >> 10) & 0xF;
      obj->pc += offset;
      obj->sp -= varskip; 
    }
    else if (optype == 1) // state change
    {
      uint32_t state = (instruction & 0x3FFF);
      emuptr<nsentry> exec(obj->local);
      emuptr<goolstateinfo> execstates(exec->items[4]);
      emuptr<goolstateinfo> stateinfo(EMUADDR(&execstates[state]));
    
      uint32_t stateflagstest;
      if (obj->displaymode >= 2 && obj->displaymode <= 4)
        stateflagstest = (obj->statusc | 0x1002) & stateinfo->flags;
      else
        stateflagstest = obj->statusc & stateinfo->flags;
        
      if (!stateflagstest)
      {
        uint32_t result = GOOL_ChangeObjectState(obj,state,0,(emuptr<uint32_t>)0);
        if (ERROR_ISERRORCODE(result) || !(flags & 2))
          GOOL_OBJECT_POP(obj);
        else
          greturn(result);
      }
    }
    else if (optype == 2) // return
    {
      flagspair = flags;
      
      obj->sp = obj->fp + 2;
      uint32_t callerframerange = GOOL_OBJECT_PEEK(obj); // peek caller frame range
      uint32_t callerframefp = callerframerange >> 16;
      uint32_t callerframesp = callerframerange & 0xFFFF;
      
      uint32_t result;
      if (callerframefp) // if not initial frame
      {
        result = ERROR_CODE_SUCCESS;
        
        obj->sp = obj->fp + 1;
        obj->pc = GOOL_OBJECT_PEEK(obj); // peek & restore pc to its previous location in caller

        GOOL_OBJECT_POP(obj);
        uint32_t prevflags = GOOL_OBJECT_PEEK(obj); // peek caller prev. flags
        flagspair = (flags & 0xFFFF0000) | (prevflags & 0xFFFF);

        obj->sp = EMUADDR((uint8_t*)&obj->self + callerframesp); // restore sp to its previous location in caller
        obj->fp = EMUADDR((uint8_t*)&obj->self + callerframefp); // restore fp to its previous location in caller
      }
      else
        result = ERROR_CODE_INVALIDRETURN;
        
      if (flags & 8)
      {
        if (flags & 0x20)
        {
          transition->state = 0xFF;
          greturn(ERROR_CODE_SUCCESS);
        }
        else
          greturn(ERROR_CODE_INVALIDSTATERETURN);
      }
      
      if ((flags & 1) || ERROR_ISERRORCODE(result))
      {
        if ((flags & 0x10) && ERROR_ISSUCCESSCODE(result)) // if mode flags bit 5 set and valid return
          GOOL_OBJECT_PUSH(obj,0); // push initial value for wait
          
        greturn(result);
      }
      else
      {
        if ((flagspair & 0xFFFF) != 0xFFFF)
          flags = flagspair;
      }
    }
  }
}

GOOL_OPERATION GOOL_OP_ChangeAnim(emuptr<goolobj> obj, uint32_t instruction, uint32_t &flags)
{
  uint32_t animframe = instruction & 0x7F;
  uint32_t anim = (instruction >> 7) & 0x1FF;
  uint32_t wait = (instruction >> 16) & 0x3F;
  uint32_t flip = (instruction >> 22) & 0x3;
  
  emuptr<uint32_t> execanims(obj->local->items[5]);
  emuptr<uint32_t> animseq(EMUADDR(&execanims[anim]));
  
  obj->animframe = animframe << 8;
  obj->animseq = animseq;
  
  // push timestamp and number of ticks to wait before resuming execution
  GOOL_OBJECT_PUSH(obj, (wait << 24) | tickselapsed); 
  
  if (flip == 0)
    obj->scale.x = -abs(obj->scale.x);
  else if (flip == 1)
    obj->scale.x = abs(obj->scale.x);
  else if (flip == 2)
    obj->scale.x = -obj->scale.x;
  // else if (flip == 3) {}
  
  // if object is a solid object and is stopped by solid surfaces/objects
  if (obj->statusb & 0x18)
  { 
    uint32_t outofrange = EMU_Invoke(
                                     0x80029C90,6,
                                     obj,
                                     EMUADDR(&obj->trans),
                                     EMUADDR(&crash->trans),
                                     0x7D000,0xAF000,0x7D000
                                    );
    if (!outofrange || (obj->statusb & 0x80000000))
      EMU_Invoke(0x8001D33C,2,obj,EMUADDR(&obj->scale));
  }
  
  if (flags & 4)
    greturn(ERROR_CODE_SUCCESS);
}

GOOL_OPERATION GOOL_OP_ChangeAnimFrame(emuptr<goolobj> obj, uint32_t instruction, uint32_t &flags)
{
  uint32_t animframe = *(GOOL_TranslateInGop(obj,G_OPB(instruction)));
  uint32_t wait = (instruction >> 16) & 0x3F;
  uint32_t flip = (instruction >> 22) & 0x3;
  
  obj->animframe = animframe;
  
  // push timestamp and number of ticks to wait before resuming execution
  GOOL_OBJECT_PUSH(obj, (wait << 24) | tickselapsed); 
  
  if (flip == 0)
    obj->scale.x = -abs(obj->scale.x);
  else if (flip == 1)
    obj->scale.x = abs(obj->scale.x);
  else if (flip == 2)
    obj->scale.x = -obj->scale.x;
  // else if (flip == 3) {}
  
  EMU_Invoke(0x8001D33C,2,obj,EMUADDR(&obj->scale));
  
  if (flags & 4)
    greturn(ERROR_CODE_SUCCESS);
}

GOOL_OPERATION GOOL_OP_TransformVectors(emuptr<goolobj> obj, uint32_t instruction)
{
  emuptr<uint32_t> ptr;
  ptr = GOOL_TranslateInGop(obj, G_OPB(instruction));
  
  uint32_t subop = (instruction >> 18) & 7;
  
  S1 = instruction;
  S2 = obj;
  S3 = ptr;
	V0 = S1 >> 12;
	V0 &= 0x7;
	V1 = V0 << 1;
	V1 += V0;
	V1 <<= 2;
	V1 += 128;
	S4 = S2 + V1;
  V1 = subop;
  
  switch (subop)
  {
  case 0: // get nth point on the obj's path
  {
    if (ptr && obj->entity)
    {
      uint32_t progress = *(ptr); // path progress value = point index
      uint32_t transindex = (instruction >> 12) & 7; // vector in & out
      emuptr<vector> trans(EMUADDR(&obj->vectors + transindex));
  
      SP -= sizeof(vector);
      emuptr<vector> newtrans(SP);
      newtrans->x = trans->x;
      newtrans->y = trans->y;
      newtrans->z = trans->z;
      // GOOL_OrientObjectOnPath(obj,progress,newtrans);
      EMU_Invoke(0x8001AC9C,3,obj,progress,newtrans);
      trans->x = newtrans->x;
      trans->y = newtrans->y;
      trans->z = newtrans->z;
      obj->groundy = trans->y;
      SP += sizeof(vector);
    }
    break;
  }
  case 1: // convert coords to screen coords
  {
    /*
    uint32_t perspindex = (instruction >> 12) & 7; // vector in
    uint32_t orthoindex = (instruction >> 15) & 7; // vector out
    emuptr<vector> persp(EMUADDR(&obj->vectors + perspindex));
    emuptr<vector> ortho(EMUADDR(&obj->vectors + orthoindex));
    
    EMU_Invoke(0x800249E0,2,persp,ortho); // transform persp to ortho
    
    emuptr<vector> inoutvector(ptr);
    if (inoutvector->x)
    {
      int32_t z = ortho->z >> 8;
      if (z)
      {
        inoutvector->x = (inoutvector->x * 280) / z;
        inoutvector->y = (inoutvector->y * 280) / z;
        inoutvector->z = (inoutvector->z * 280) / z;
      }
    }
    */
    
	A0 = S4;
	V1 = S1 >> 15;
	V1 &= 0x7;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 += 128;
	S0 = S2 + V0;
  A1 = S0;
	V0 = EMU_Invoke(0x800249E0,0);
	V1 = EMU_ReadU32(S3);
	if (!V1)
	{
		return;
	}
	V0 = EMU_ReadU32(S0 + 8); //+ 0x8
	A2 = (int32_t)V0 >> 8;
	if (!A2)
	{
		A1 = V1 << 3;
		return;
	}
	A1 = V1 << 3;
	A1 += V1;
	A1 <<= 2;
	A1 = A1 - V1;
	A1 <<= 3;
	EMU_SDivide(A1,A2);
	if (A2)
	{
		goto ZZ_201DC_3524;
	}
	EMU_Break(7168);
ZZ_201DC_3524:
	AT = -1;
	if (A2 != AT)
	{
		AT = 0x80000000;
		goto ZZ_201DC_353C;
	}
	AT = 0x80000000;
	if (A1 != AT)
	{
		goto ZZ_201DC_353C;
	}
	EMU_Break(6144);
ZZ_201DC_353C:
	A1 = LO;
	V0 = EMU_ReadU32(S3 + 4); //+ 0x4
	V1 = V0 << 3;
	V1 += V0;
	V1 <<= 2;
	V1 = V1 - V0;
	V1 <<= 3;
	EMU_SDivide(V1,A2);
	if (A2)
	{
		goto ZZ_201DC_356C;
	}
	EMU_Break(7168);
ZZ_201DC_356C:
	AT = -1;
	if (A2 != AT)
	{
		AT = 0x80000000;
		goto ZZ_201DC_3584;
	}
	AT = 0x80000000;
	if (V1 != AT)
	{
		goto ZZ_201DC_3584;
	}
	EMU_Break(6144);
ZZ_201DC_3584:
	V1 = LO;
	A0 = EMU_ReadU32(S3 + 8); //+ 0x8
	V0 = A0 << 3;
	V0 += A0;
	V0 <<= 2;
	V0 = V0 - A0;
	V0 <<= 3;
	EMU_SDivide(V0,A2);
	if (A2)
	{
		goto ZZ_201DC_35B4;
	}
	EMU_Break(7168);
ZZ_201DC_35B4:
	AT = -1;
	if (A2 != AT)
	{
		AT = 0x80000000;
		goto ZZ_201DC_35CC;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		goto ZZ_201DC_35CC;
	}
	EMU_Break(6144);
ZZ_201DC_35CC:
	V0 = LO;
	EMU_Write32(S3,A1);
	EMU_Write32(S3 + 4,V1); //+ 0x4
	EMU_Write32(S3 + 8,V0); //+ 0x8
	return;
  
    break;
  }
  case 2: // adjust velocity vector to point in direction of target    
  {       // spin (xz) or flip (xy) angle with input speed
    int32_t speed = *(ptr);
    uint32_t velocityindex = (instruction >> 12) & 7; // vector out 
    emuptr<vector> velocity(EMUADDR(&obj->vectors + velocityindex)); 
    
    uint32_t targetrot = obj->targetrot.x & 0xFFF; // xz or xy plane
    int32_t targetx = EMU_Invoke(0x8003905C,1,targetrot); // sin
    velocity->x = ((targetx/16) * speed) >> 8;
    if (obj->statusb & 0x00200200)
    {
      int32_t targety = EMU_Invoke(0x800390D0,1,targetrot); // cos
      velocity->y = ((targety/16) * speed) >> 8;
    }
    else
    {
      int32_t targetz = EMU_Invoke(0x800390D0,1,targetrot); // cos
      velocity->z = ((targetz/16) * speed) >> 8;
    }
    obj->speed = speed;
    break;
  }
  case 4: // linear transformation (trans, rot, and scale)
  case 5: // linear transformation (trans and rot [with targetrot])
  {
    uint32_t transindex = (instruction >> 12) & 7; // trans vector in
    uint32_t outindex = (instruction >> 15) & 7; // vector out
    emuptr<vector> trans(EMUADDR(&obj->vectors + transindex));
    emuptr<vector> outvector(EMUADDR(&obj->vectors + outindex));
    
    SP -= sizeof(vector);
    emuptr<vector> invector(SP); // vector in 
    invector->z = *(ptr);
    invector->y = GOOL_OBJECT_POP(obj);
    invector->x = GOOL_OBJECT_POP(obj);
    
    // transform
    if (subop == 4)
    {
      EMU_Invoke(0x8002465C,5,invector,
                              trans,
                              EMUADDR(&obj->rot),
                              EMUADDR(&obj->scale),
                              outvector);
    }
    else
    {
      EMU_Invoke(0x8002465C,5,invector,
                              trans,
                              EMUADDR(&obj->targetrot),
                              0,
                              outvector);
    }
    
    SP += sizeof(vector);
    break;
  }
  case 6: // transform obj [model] vertex
  {
    /*
    uint32_t linkindex = (instruction >> 21) & 7;
    uint32_t outindex = (instruction >> 12) & 7;
    emuptr<goolobj> link(((uint32_t*)&obj->self)[linkindex]); 
    emuptr<point> outvertex(EMUADDR(&obj->vectors + outindex));
    
    // if cur sequence is from a tgeo/svtx model
    emuptr<uint8_t> animseq(link->animseq);
    if (animseq && (animseq[0] == 1)) 
    {
      emuptr<uint32_t> svtxeid(EMUADDR(&animseq[4]));
      emuptr<nsentry> svtx;
      svtx = EMU_Invoke(0x80015A98,1,svtxeid);
      
      uint32_t frameindex = link->animframe >> 8;
      emuptr<nsitem> framedata(svtx->items[frameindex]);
      
      emuptr<uint32_t> tgeoeid(EMUADDR(&framedata[4]));
      emuptr<nsentry> tgeo;
      tgeo = EMU_Invoke(0x80015A98,1,tgeoeid);
      
      uint32_t vertexindex = *(ptr) >> 8; // index of vert to transform
      emuptr<uint8_t> vertexdata(EMUADDR(&framedata[0x38+(vertexindex*6)]));
      
      uint32_t modeltransx = *((uint32_t*)&framedata[0x8]);
      uint32_t modeltransy = *((uint32_t*)&framedata[0xC]);
      uint32_t modeltransz = *((uint32_t*)&framedata[0x10]);
      
      SP -= sizeof(point);
      emuptr<point> invertex(SP);
      // world coords               // model coords
      invertex->x = (modeltransx + (vertexdata[0] - 0x80)) << 10;
      invertex->y = (modeltransy + (vertexdata[1] - 0x80)) << 10;
      invertex->z = (modeltransz + (vertexdata[2] - 0x80)) << 10;
      
      emuptr<nsitem> modeldata(tgeo->items[0]);
      uint32_t modelscalex = *((uint32_t*)&modeldata[0x4]);
      uint32_t modelscaley = *((uint32_t*)&modeldata[0x8]);
      uint32_t modelscalez = *((uint32_t*)&modeldata[0xC]);
      
      SP -= sizeof(vector);
      emuptr<vector> scale(SP);
      // right shift 12 necessary when multiplying fixed pt values
      scale->x = (modelscalex * link->scale.x) >> 12;
      scale->y = (modelscaley * link->scale.y) >> 12;
      scale->z = (modelscalez * link->scale.z) >> 12;
      
      // transform the vertex
      EMU_Invoke(0x8002465C,5,invertex,
                              EMUADDR(&link->trans),
                              EMUADDR(&link->rot),
                              scale,
                              outvertex);
      SP += sizeof(vector);
      SP += sizeof(point);
      */
      
	V0 = S1 >> 19;
	V0 &= 0x1C;
	V0 += S2;
	S1 = EMU_ReadU32(V0 + 96); //+ 0x60
	A0 = EMU_ReadU32(S1 + 264); //+ 0x108
	if (!A0)
	{
		V0 = 0x1;
		return;
	}
	V0 = 0x1;
	V1 = EMU_ReadU8(A0);
	if (V1 != V0)
	{
		return;
	}
  A0 += 4;
	V0 = EMU_Invoke(0x80015A98,0);
	A0 = EMU_ReadU32(S1 + 264); //+ 0x108
	V1 = EMU_ReadU32(S1 + 268); //+ 0x10C
	V1 >>= 8;
	V1 <<= 2;
	V1 += V0;
	S0 = EMU_ReadU32(V1 + 16); //+ 0x10
  A0 += 4;
	V0 = EMU_Invoke(0x80015A98,0);
	V1 = EMU_ReadU32(S1 + 268); //+ 0x10C
	V1 >>= 8;
	V1 <<= 2;
	V1 += V0;
	A0 = EMU_ReadU32(V1 + 16); //+ 0x10
  A0 += 4;
	V0 = EMU_Invoke(0x80015A98,0);
	V1 = EMU_ReadU32(S3);
	V1 >>= 8;
	A0 = V1 << 1;
	A0 += V1;
	A0 <<= 1;
	A0 += 56;
	A0 += S0;
	V1 = EMU_ReadU8(A0);
	A1 = EMU_ReadU32(S0 + 8); //+ 0x8
	V1 -= 128;
	V1 += A1;
	A1 = EMU_ReadU32(V0 + 16); //+ 0x10
	V1 <<= 10;
	EMU_Write32(SP + 56,V1); //+ 0x38
	V0 = EMU_ReadU8(A0 + 1); //+ 0x1
	V1 = EMU_ReadU32(S0 + 12); //+ 0xC
	V0 -= 128;
	V0 += V1;
	V0 <<= 10;
	EMU_Write32(SP + 60,V0); //+ 0x3C
	V0 = EMU_ReadU8(A0 + 2); //+ 0x2
	V1 = EMU_ReadU32(S0 + 16); //+ 0x10
	V0 -= 128;
	V0 += V1;
	V0 <<= 10;
	EMU_Write32(SP + 64,V0); //+ 0x40
	V1 = EMU_ReadU32(S1 + 152); //+ 0x98
	V0 = EMU_ReadU32(A1 + 4); //+ 0x4
	EMU_SMultiply(V1,V0);
	V0 = LO;
	V0 = (int32_t)V0 >> 12;
	EMU_Write32(SP + 80,V0); //+ 0x50
	V1 = EMU_ReadU32(S1 + 156); //+ 0x9C
	V0 = EMU_ReadU32(A1 + 8); //+ 0x8
	EMU_SMultiply(V1,V0);
	V0 = LO;
	V0 = (int32_t)V0 >> 12;
	EMU_Write32(SP + 84,V0); //+ 0x54
	V1 = EMU_ReadU32(S1 + 160); //+ 0xA0
	V0 = EMU_ReadU32(A1 + 12); //+ 0xC
	EMU_SMultiply(V1,V0);
	A2 = S1 + 140;
	A3 = SP + 80;
	A0 = SP + 56;
	A1 = S1 + 128;
	V0 = LO;
	V0 = (int32_t)V0 >> 12;
	EMU_Write32(SP + 88,V0); //+ 0x58
  EMU_Write32(SP + 16,S4);
	V0 = EMU_Invoke(0x8002465C,0);
	return;
    
    break;
  }
  case 7:
  {
    uint32_t vectaindex = (instruction >> 12) & 7;
    uint32_t vectbindex = (instruction >> 15) & 7;
    emuptr<vector> vecta(EMUADDR(&obj->vectors + vectaindex));
    emuptr<vector> vectb(EMUADDR(&obj->vectors + vectbindex));
    
    EMU_Invoke(0x800248A0,3,vecta,vectb,0); // audio-related vect func
    break;
  }
  }
}

GOOL_OPERATION GOOL_OP_JumpAndLink(emuptr<goolobj> obj, uint32_t instruction, uint32_t &flags)
{
  uint32_t address = instruction & 0x3FFF;
  uint32_t argc = (instruction >> 20) & 0xF;
  
  // inline code: CreateObjectStackFrame
  uint32_t fprel = GOOL_OBJECT_GETFP(obj);
  uint32_t sprel = GOOL_OBJECT_GETSP(obj) - (argc*4);
  
  obj->fp = obj->sp;
  
  GOOL_OBJECT_PUSH(obj, flags);
  GOOL_OBJECT_PUSH(obj, obj->pc);
  GOOL_OBJECT_PUSH(obj, GOOL_OBJECT_GETFRAMERANGE(fprel, sprel));
  
  if (address != 0x3FFF)
  {
    emuptr<uint32_t> execcode(obj->local->items[1]);
    obj->pc = EMUADDR(&execcode[address]);
  }
  else
    obj->pc = 0;
  
  flags &= 0xFFFFFFF6;
}

GOOL_OPERATION GOOL_OP_SendEvent(emuptr<goolobj> obj, uint32_t instruction, uint32_t &flags, emuptr<goolobj> recipient, uint32_t opcode)
{
  SP -= 64;
  emuptr<uint32_t> args(SP); // local stack variable of GOOL_InterpretObject

  emuptr<uint32_t> eventptr = GOOL_TranslateInGop(obj,G_OPB(instruction));
  
  obj->statusa &= 0xFFFDFFFF; // clear bit 18
  
  uint32_t cond = G_TRANS_REGREF(obj, (instruction >> 12) & 0x3F);
  uint32_t argc = (instruction >> 18) & 0x7;
  uint32_t mode = (instruction >> 21) & 0x7; // mode for determining recipients when op!=0x87
  
  if (eventptr && cond && (recipient || opcode == 0x8F))
  {
    for (uint32_t i=0; i<argc; i++)
      args[i] = obj->sp[-argc+i];
    
    uint32_t event = *(eventptr);
    if (opcode == 0x8F)
      EMU_Invoke(0x80025134,5,obj,event,mode,argc,args);
    else if (opcode == 0x87)
      EMU_Invoke(0x80024040,5,obj,recipient,event,argc,args);
    else if (opcode == 0x90)
      EMU_Invoke(0x800251B8,6,obj,recipient,event,mode,argc,args);
  }
  else
    obj->misc_flag = 0;
  SP += 64;
  
  if (obj->statusa & 0x20000) // if object has since changed state (as a result of the event)
  {
    if (flags & 2)
    {
      greturn(ERROR_CODE_SUCCESS);
    }
    else
      GOOL_OBJECT_POP(obj);
  }
  else
    obj->sp -= argc;
}

/*****************************************************************
*  condtype = 0: unconditional                                   *
*  condtype = 1: if not equal to zero                            *
*  condtype = 2: if equal to zero                                *
*  condtype = 3: true if condition for most recent operation of  *
*                this instruction type evaluated to true; false  *
*                otherwise                                       *
*                                                                *
*               cond == true           | cond == false           *
*               ----------------------------------------------   *
*  rettype = 0: modify guard           | branch to offset _Im10_ *
*  rettype = 1: modify guard           | nothing/continue        *
*               and return state       |                         *
*  rettype = 2: modify guard           | nothing/continue        *
*               and return null state  |                         *
*  rettype = 3: modify guard           | nothing/continue        *
*                                                                *
*  op 0x88: modify guard = set guard to false                    *
*  op 0x89: modify guard = set guard to true                     *
*****************************************************************/

GOOL_OPERATION GOOL_OP_ReturnStateTransition(emuptr<goolobj> obj,
                                            uint32_t instruction, 
                                                 uint32_t &flags, 
                                 emuptr<goolstateref> transition, 
                                                 uint32_t opcode)
{
  if (!(flags & 8)) 
    greturn (ERROR_CODE_INVALID);
    
  static uint32_t cond;
  
  uint32_t condtype = (instruction >> 20) & 3;
  if (condtype == 0)
    cond = 1;
  else if (condtype == 1)
    cond = G_TRANS_REGREF(obj,(instruction >> 14) & 0x3F);
  else if (condtype == 2)
    cond = !G_TRANS_REGREF(obj,(instruction >> 14) & 0x3F);
  // else cond is unchanged; use val from previous invocation
          
  uint32_t rettype = (instruction >> 22) & 3;
  if (cond)
  {
    flags |= 0x20; //GOOL_XSTAT_RETURNEVENT;
    transition->guard = (opcode == 0x89);
    
    if (rettype == 1)
    {    
      obj->sp = obj->fp + 2;
      
      uint32_t callerframerange = GOOL_OBJECT_PEEK(obj); // peek caller frame range
      uint32_t callerframefp = callerframerange >> 16;
      uint32_t callerframesp = callerframerange & 0xFFFF;
      
      uint32_t result;
      if (callerframefp) // if not initial frame
      {        
        obj->sp = obj->fp + 1;
        obj->pc = GOOL_OBJECT_PEEK(obj); // peek & restore pc to its previous location in caller
        GOOL_OBJECT_POP(obj);
        
        obj->sp = EMUADDR((uint8_t*)&obj->self + callerframesp); // restore sp to its previous location in caller
        obj->fp = EMUADDR((uint8_t*)&obj->self + callerframefp); // restore fp to its previous location in caller
      
        result = ERROR_CODE_SUCCESS;
      }
      else
        result = ERROR_CODE_INVALIDRETURN;

      if (ERROR_ISSUCCESSCODE(result))
        transition->state = (instruction & 0x3FFF);
      
      greturn(result);
    }
    else if (rettype == 2)
    {          
      obj->sp = obj->fp + 2;
      
      uint32_t callerframerange = GOOL_OBJECT_PEEK(obj); // peek caller frame range
      uint32_t callerframefp = callerframerange >> 16;
      uint32_t callerframesp = callerframerange & 0xFFFF;
      
      uint32_t result;
      if (callerframefp) // if not initial frame
      {        
        obj->sp = obj->fp + 1;
        obj->pc = GOOL_OBJECT_PEEK(obj); // peek & restore pc to its previous location in caller
        GOOL_OBJECT_POP(obj);
        
        obj->sp = EMUADDR((uint8_t*)&obj->self + callerframesp); // restore sp to its previous location in caller
        obj->fp = EMUADDR((uint8_t*)&obj->self + callerframefp); // restore fp to its previous location in caller
      
        result = ERROR_CODE_SUCCESS;
      }
      else
        result = ERROR_CODE_INVALIDRETURN;

      if (ERROR_ISSUCCESSCODE(result))
        transition->state = 0xFF;
      
      greturn(result);
    }
  }
  else if (rettype == 0)
  {
    int32_t offset = (int32_t)((instruction & 0x3FF) << 22) >> 22;
    int32_t varskip = (instruction >> 10) & 0xF;
    obj->pc += offset;
    obj->sp -= varskip; 
  }
}

GOOL_OPERATION GOOL_OP_SpawnChildren(emuptr<goolobj> obj, uint32_t instruction, uint32_t opcode)
{
  uint32_t spawncount = (instruction & 0x3F);
  uint32_t argc = (instruction >> 20) & 0xF;
  
  if (!spawncount)
    spawncount = obj->sp[--argc];
    
  if (spawncount > 0)
  {
    uint32_t flag = (opcode == 0x91);
    
    for (uint32_t i = 0; i < spawncount; i++)
    {
      uint32_t type = (instruction >> 12) & 0xFF;
      uint32_t subtype = (instruction >> 6) & 0x3F;
      
      emuptr<uint32_t> args(EMUADDR(&obj->sp[-argc]));
      emuptr<goolobj> child;
      child = GOOL_CreateObject(obj, type, subtype, argc, args, flag);
      
      if (ERROR_ISERRORCODE(child))
        obj->misc_child = 0;
      else
        obj->misc_child = child;
        
      child->creator = obj;
    }
  }
  
  obj->sp -= argc; // pop the args
}

GOOL_OPERATION GOOL_OP_Paging(emuptr<goolobj> obj, uint32_t instruction)
{
  // setup
  S1 = instruction;
  S2 = obj;
  
// ZZ_201DC_3058:
	A0 = S2;
	A1 = S1 >> 12;
	A1 &= 0xFFF;	
  A2 = R0;
	V0 = EMU_Invoke(0x8001FC4C,0);
	A0 = S2;
	A1 = S1 & 0xFFF;
	S0 = EMU_ReadU32(V0);	
  A2 = R0;
	V0 = EMU_Invoke(0x8001FC4C,0);
	A0 = V0;
	S0 -= 1;
	V0 = S0 < 6;
	if (!V0)
	{
		V0 = S0 << 2;
		return;
	}
	V0 = S0 << 2;
	AT = 0x80010000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 2040); //+ 0x7F8
	if (S0 == 0) { goto ZZ_201DC_30AC; }
	if (S0 == 1) { goto ZZ_201DC_30C8; }
	if (S0 == 2) { goto ZZ_201DC_30D8; }
	if (S0 == 3) { goto ZZ_201DC_30EC; }
	if (S0 == 4) { goto ZZ_201DC_3100; }
	if (S0 == 5) { goto ZZ_201DC_30B4; }
ZZ_201DC_30AC:
	A1 = R0;
	goto ZZ_201DC_30B8;
ZZ_201DC_30B4:
	A1 = 0x1;
ZZ_201DC_30B8:	
  A2 = 0x1;
	V0 = EMU_Invoke(0x80015118,0);
	EMU_Write32(S2 + 244,V0); //+ 0xF4
  return;
ZZ_201DC_30C8:	
  A1 = 0x1;
	V0 = EMU_Invoke(0x80015458,0);
	EMU_Write32(S2 + 244,V0); //+ 0xF4
  return;
ZZ_201DC_30D8:	
  A1 = R0;
	V0 = EMU_Invoke(0x80015458,0);
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = A0 + 4;
	goto ZZ_201DC_3128;
ZZ_201DC_30EC: //ZZ_201DC_30F4
	V0 = EMU_Invoke(0x800156D4,0);
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = A0 + 4;
	goto ZZ_201DC_3128;
ZZ_201DC_3100:
	S0 = EMU_ReadU32(A0);
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	A0 = S0 << 2;
	A0 = V0 - A0;	
  A1 = S0;
	V0 = EMU_Invoke(0x8001579C,0);
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	S0 <<= 2;
	A0 = A0 - S0;
	V1 = A0 + 4;
ZZ_201DC_3128:
	EMU_Write32(S2 + 220,V1); //+ 0xDC
  EMU_Write32(A0,V0);
}

GOOL_OPERATION GOOL_OP_AudioA(emuptr<goolobj> obj, uint32_t instruction)
{
  // setup
  S1 = instruction;
  S2 = obj;
  
// ZZ_201DC_3C9C:
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_3CE4;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_3CD4;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	S0 = V0;
	EMU_Write32(S2 + 220,S0); //+ 0xDC
	goto ZZ_201DC_3CF0;
ZZ_201DC_3CD4:
	V0 <<= 2;
	V0 += 96;
	S0 = S2 + V0;
	goto ZZ_201DC_3CF0;
ZZ_201DC_3CE4:	
  A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	S0 = V0;
ZZ_201DC_3CF0:
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_3D30;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_3D20;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_3D38;
ZZ_201DC_3D20:
	V0 <<= 2;
	V0 += 96;
	V0 += S2;
	goto ZZ_201DC_3D38;
ZZ_201DC_3D30:	
  A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
ZZ_201DC_3D38:
	A0 = S2;
	A2 = EMU_ReadS16(S0);	
  A1 = V0;
	V0 = EMU_Invoke(0x800304C8,0);
	EMU_Write32(S2 + 332,V0); //+ 0x14C
}

GOOL_OPERATION GOOL_OP_AudioB(emuptr<goolobj> obj, uint32_t instruction)
{
  // setup
  S1 = instruction;
  S2 = obj;
  
// ZZ_201DC_3D50:
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_3D94;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_3D84;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	A2 = V0;
	EMU_Write32(S2 + 220,A2); //+ 0xDC
	goto ZZ_201DC_3DA0;
ZZ_201DC_3D84:
	V0 <<= 2;
	V0 += 96;
	A2 = S2 + V0;
	goto ZZ_201DC_3DA0;
ZZ_201DC_3D94:
  A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	A2 = V0;
ZZ_201DC_3DA0:
	V0 = S1 >> 20;
	A1 = V0 & 0xF;
	V0 = S1 >> 12;
	V1 = V0 & 0x3F;
	if (V1)
	{
		V0 = 0x1F;
		goto ZZ_201DC_3DC0;
	}
	V0 = 0x1F;
	A0 = R0;
	goto ZZ_201DC_3DE8;
ZZ_201DC_3DC0:
	if (V1 != V0)
	{
		V0 = V1 << 2;
		goto ZZ_201DC_3DDC;
	}
	V0 = V1 << 2;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_3DE4;
ZZ_201DC_3DDC:
	V0 += 96;
	V0 += S2;
ZZ_201DC_3DE4:
	A0 = EMU_ReadU32(V0);
ZZ_201DC_3DE8:
	V0 = 0xF;
	if (A1 != V0)
	{
		V0 = 0x40000;
		goto ZZ_201DC_3DF8;
	}
	V0 = 0x40000;
	A1 = 0x80000000;
ZZ_201DC_3DF8:
	V0 &= S1;
	if (!V0)
	{
		V0 = 0x40000000;
		goto ZZ_201DC_3E08;
	}
	V0 = 0x40000000;
	A1 |= V0;
ZZ_201DC_3E08:
	V0 = 0x80000;
	V0 &= S1;
	if (!V0)
	{
		V0 = 0x20000000;
		goto ZZ_201DC_3E1C;
	}
	V0 = 0x20000000;
	A1 |= V0;
ZZ_201DC_3E1C:
  A3 = S2;
	V0 = EMU_Invoke(0x80030840,0);
}

GOOL_OPERATION GOOL_OP_ReactSolidSurfaces(emuptr<goolobj> obj, uint32_t instruction)
{
  // setup
  S1 = instruction;
  S2 = obj;
  
// ZZ_201DC_3610:
	A0 = S2;
	A1 = S1 & 0xFFF;
	A2 = R0;
	V1 = S1 >> 12;
	V1 &= 0x7;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 += 128;
	S0 = S2 + V0;
	V0 = EMU_Invoke(0x8001FC4C,0);
	V0 = S1 >> 18;
	V1 = V0 & 0x7;
	V0 = V1 < 7;
	if (!V0)
	{
		V0 = V1 << 2;
    return;
	}
	V0 = V1 << 2;
	AT = 0x80010000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 2096); //+ 0x830
	if (V1 == 0) { goto ZZ_201DC_3668; }
	if (V1 == 1) { goto ZZ_201DC_376C; }
	if (V1 == 2) { goto ZZ_201DC_387C; }
  if (V1 == 3) { goto ZZ_201DC_387C; }
  if (V1 == 4) { goto ZZ_201DC_387C; }
	if (V1 == 5) { goto ZZ_201DC_387C; }
	if (V1 == 6) { goto ZZ_201DC_39C8; }
ZZ_201DC_3668:
	V0 = EMU_ReadU32(S2 + 128); //+ 0x80
	V1 = EMU_ReadU32(S2 + 132); //+ 0x84
	A0 = EMU_ReadU32(S2 + 136); //+ 0x88
	EMU_Write32(SP + 40,V0); //+ 0x28
	EMU_Write32(SP + 44,V1); //+ 0x2C
	EMU_Write32(SP + 48,A0); //+ 0x30
	V0 = EMU_ReadU32(S0);
	V1 = EMU_ReadU32(S0 + 4); //+ 0x4
	A0 = EMU_ReadU32(S0 + 8); //+ 0x8
	EMU_Write32(SP + 24,V0); //+ 0x18
	EMU_Write32(SP + 28,V1); //+ 0x1C
	EMU_Write32(SP + 32,A0); //+ 0x20
	A0 = SP + 40;
	V0 = EMU_ReadU32(S2 + 24); //+ 0x18
	A1 = SP + 24;
	V1 = V0 >> 31;
	V0 += V1;
	V1 = EMU_ReadU32(SP + 44); //+ 0x2C
	V0 = (int32_t)V0 >> 1;
	V0 += V1;
	EMU_Write32(SP + 44,V0); //+ 0x2C
	V0 = EMU_Invoke(0x800277EC,0);
	A1 = S1 & 0xFFF;
	EMU_Write32(S2 + 244,V0); //+ 0xF4
	V0 = 0xBE0;
	if (A1 == V0)
	{
		V0 = S1 & 0xE00;
		goto ZZ_201DC_3734;
	}
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		goto ZZ_201DC_3710;
	}
	if (A1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_3700;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	A2 = V0;
	V0 = A2 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_371C;
ZZ_201DC_3700:
	V0 <<= 2;
	V0 += 96;
	A2 = S2 + V0;
	goto ZZ_201DC_371C;
ZZ_201DC_3710:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	A2 = V0;
ZZ_201DC_371C:
	V0 = EMU_ReadU32(SP + 24); //+ 0x18
	V1 = EMU_ReadU32(SP + 28); //+ 0x1C
	A0 = EMU_ReadU32(SP + 32); //+ 0x20
	EMU_Write32(A2,V0);
	EMU_Write32(A2 + 4,V1); //+ 0x4
	EMU_Write32(A2 + 8,A0); //+ 0x8
ZZ_201DC_3734:
	V1 = S1 >> 15;
	V1 &= 0x7;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 += S2;
	V1 = EMU_ReadU32(SP + 40); //+ 0x28
	A0 = EMU_ReadU32(SP + 44); //+ 0x2C
	A1 = EMU_ReadU32(SP + 48); //+ 0x30
	EMU_Write32(V0 + 128,V1); //+ 0x80
	EMU_Write32(V0 + 132,A0); //+ 0x84
	EMU_Write32(V0 + 136,A1); //+ 0x88
  return;
ZZ_201DC_376C:
	V0 = EMU_ReadU32(S2 + 128); //+ 0x80
	V1 = EMU_ReadU32(S2 + 132); //+ 0x84
	A0 = EMU_ReadU32(S2 + 136); //+ 0x88
	EMU_Write32(SP + 56,V0); //+ 0x38
	EMU_Write32(SP + 60,V1); //+ 0x3C
	EMU_Write32(SP + 64,A0); //+ 0x40
	V0 = EMU_ReadU32(S2 + 128); //+ 0x80
	V1 = EMU_ReadU32(S2 + 132); //+ 0x84
	A0 = EMU_ReadU32(S2 + 136); //+ 0x88
	EMU_Write32(SP + 80,V0); //+ 0x50
	EMU_Write32(SP + 84,V1); //+ 0x54
	EMU_Write32(SP + 88,A0); //+ 0x58
	V1 = EMU_ReadU32(GP + 696); //+ 0x2B8
	if (S2 == V1)
	{
		A1 = SP + 56;
		goto ZZ_201DC_37BC;
	}
	A1 = SP + 56;
	V0 = EMU_ReadU32(S2 + 100); //+ 0x64
	if (V0 != V1)
	{
		A0 = S2;
		goto ZZ_201DC_37C8;
	}
	A0 = S2;
ZZ_201DC_37BC:
	A0 = S2;
	V0 = EMU_Invoke(0x800289B4,0);
	A0 = S2;
ZZ_201DC_37C8:
	A1 = SP + 80;
	V0 = EMU_Invoke(0x80028644,0);
	EMU_Write32(S2 + 244,V0); //+ 0xF4
	A1 = S1 & 0xFFF;
	V0 = 0xBE0;
	if (A1 == V0)
	{
		V0 = S1 & 0xE00;
		goto ZZ_201DC_3844;
	}
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		goto ZZ_201DC_3820;
	}
	if (A1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_3810;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	A2 = V0;
	V0 = A2 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_382C;
ZZ_201DC_3810:
	V0 <<= 2;
	V0 += 96;
	A2 = S2 + V0;
	goto ZZ_201DC_382C;
ZZ_201DC_3820:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	A2 = V0;
ZZ_201DC_382C:
	V0 = EMU_ReadU32(SP + 112); //+ 0x70
	V1 = EMU_ReadU32(SP + 116); //+ 0x74
	A0 = EMU_ReadU32(SP + 120); //+ 0x78
	EMU_Write32(A2,V0);
	EMU_Write32(A2 + 4,V1); //+ 0x4
	EMU_Write32(A2 + 8,A0); //+ 0x8
ZZ_201DC_3844:
	V1 = S1 >> 15;
	V1 &= 0x7;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 += S2;
	V1 = EMU_ReadU32(SP + 80); //+ 0x50
	A0 = EMU_ReadU32(SP + 84); //+ 0x54
	A1 = EMU_ReadU32(SP + 88); //+ 0x58
	EMU_Write32(V0 + 128,V1); //+ 0x80
	EMU_Write32(V0 + 132,A0); //+ 0x84
	EMU_Write32(V0 + 136,A1); //+ 0x88
  return;
ZZ_201DC_387C:
	V0 = S1 >> 18;
	V1 = V0 & 0x7;
	A3 = V1 - 4;
	A3 = A3 < 2;
	V0 = 0x5;
	if (V1 == V0)
	{
		T0 = R0;
		goto ZZ_201DC_38A4;
	}
	T0 = R0;
	V0 = 0x3;
	if (V1 != V0)
	{
		goto ZZ_201DC_38A8;
	}
ZZ_201DC_38A4:
	T0 = 0x1;
ZZ_201DC_38A8:
	V0 = EMU_ReadU32(S2 + 128); //+ 0x80
	V1 = EMU_ReadU32(S2 + 132); //+ 0x84
	A0 = EMU_ReadU32(S2 + 136); //+ 0x88
	EMU_Write32(SP + 112,V0); //+ 0x70
	EMU_Write32(SP + 116,V1); //+ 0x74
	EMU_Write32(SP + 120,A0); //+ 0x78
	V0 = EMU_ReadU32(S2 + 40); //+ 0x28
	if (V0)
	{
		A1 = SP + 112;
		goto ZZ_201DC_38D8;
	}
	A1 = SP + 112;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 30996); //+ 0x7914
ZZ_201DC_38D8:
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	V0 = EMU_ReadU32(V0 + 764); //+ 0x2FC
	V0 &= 0x1;
	if (!V0)
	{
		goto ZZ_201DC_3908;
	}
	if (!T0)
	{
		A2 = 0x2;
		goto ZZ_201DC_3914;
	}
	A2 = 0x2;
	A2 = 0x6;
	goto ZZ_201DC_3914;
ZZ_201DC_3908:
	if (!T0)
	{
		A2 = 0x1;
		goto ZZ_201DC_3914;
	}
	A2 = 0x1;
	A2 = 0x5;
ZZ_201DC_3914:
	A0 = S2;
	A3 = A3 < 1;
	V0 = EMU_Invoke(0x80028E3C,0);
	A1 = S1 & 0xFFF;
	V0 = 0xBE0;
	if (A1 == V0)
	{
		V0 = S1 & 0xE00;
		goto ZZ_201DC_3990;
	}
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		goto ZZ_201DC_396C;
	}
	if (A1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_395C;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	A2 = V0;
	V0 = A2 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_3978;
ZZ_201DC_395C:
	V0 <<= 2;
	V0 += 96;
	A2 = S2 + V0;
	goto ZZ_201DC_3978;
ZZ_201DC_396C:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	A2 = V0;
ZZ_201DC_3978:
	V0 = EMU_ReadU32(SP + 128); //+ 0x80
	V1 = EMU_ReadU32(SP + 132); //+ 0x84
	A0 = EMU_ReadU32(SP + 136); //+ 0x88
	EMU_Write32(A2,V0);
	EMU_Write32(A2 + 4,V1); //+ 0x4
	EMU_Write32(A2 + 8,A0); //+ 0x8
ZZ_201DC_3990:
	V1 = S1 >> 15;
	V1 &= 0x7;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 += S2;
	V1 = EMU_ReadU32(SP + 112); //+ 0x70
	A0 = EMU_ReadU32(SP + 116); //+ 0x74
	A1 = EMU_ReadU32(SP + 120); //+ 0x78
	EMU_Write32(V0 + 128,V1); //+ 0x80
	EMU_Write32(V0 + 132,A0); //+ 0x84
	EMU_Write32(V0 + 136,A1); //+ 0x88
  return;
ZZ_201DC_39C8:
	A0 = S2;
	V0 = EMU_Invoke(0x8002940C,0);
}
      
#undef greturn  
