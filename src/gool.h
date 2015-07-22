#ifndef H_GOOL_H
#define H_GOOL_H

#include "common.h"
#include "ns.h"
#include "gfx.h"

#ifdef __cplusplus
extern "C" {
#endif

#define GOOL_OBJECT_LEVELSPAWNLISTSIZE 3592
#define GOOL_OBJECT_SPAWNLISTSIZE      304
#define GOOL_OBJECT_POOLSIZE           96

#define GOOL_OBJECT_GETCHILDREN(obj) \
(obj)->header == 2 ? (emuptr<goolobj>((uint32_t)obj))->listchildren \
                   : (emuptr<goolobj>((uint32_t)obj))->children
#define GOOL_OBJECT_SETCHILDREN(obj,child) \
(obj)->header == 2 ? (emuptr<goolobj>((uint32_t)obj))->listchildren = child \
                   : (emuptr<goolobj>((uint32_t)obj))->children = child
#define GOOL_OBJECT_GETFP(obj) \
(!obj->fp) ? 0 : ((uint32_t)obj->fp - EMUADDR(&obj->self))
#define GOOL_OBJECT_GETSP(obj) \
(!obj->sp) ? 0 : ((uint32_t)obj->sp - EMUADDR(&obj->self))
#define GOOL_OBJECT_GETFRAMERANGE(fp,sp) \
(((fp) << 16) | (sp))
#define GOOL_OBJECT_PUSH(obj,val) \
EMU_Write32((uint32_t)(obj->sp++),(uint32_t)(val))
#define GOOL_OBJECT_POP(obj) \
EMU_ReadU32((uint32_t)(--obj->sp))
#define GOOL_OBJECT_PEEK(obj) \
EMU_ReadU32((uint32_t)(obj->sp))
#define GOOL_OBJECT_PEEKBACK(obj) \
EMU_ReadU32((uint32_t)(obj->sp)-4)

#define abs(x) ((x) < 0 ? -(x) : (x))

struct goolobj;
struct gooldbllink
{
  EMUPTR(goolobj) prev;
  EMUPTR(goolobj) next;
  unk32_t unk_8;
};

struct goolobj
{
  uint32_t header;
  union
  {
    uint32_t proctype;
    EMUPTR(goolobj) listchildren;
  };
  struct bound bound;
  EMUPTR(nsentry) local;
  EMUPTR(nsentry) external;
  EMUPTR(nsentry) zone;
  uint32_t state;
  
  union { struct slightmatrix colors;
  struct slightmatrix lightmatrix; };
  struct scolor color;
  struct scolormatrix colormatrix;
  struct scolor intensity;
  
  EMUPTR(goolobj) self;
  EMUPTR(goolobj) parent;
  EMUPTR(goolobj) sibling;
  EMUPTR(goolobj) children;
  EMUPTR(goolobj) creator;
  EMUPTR(goolobj) player;
  EMUPTR(goolobj) collider;
  EMUPTR(goolobj) invoker;
  
  union { struct vector vectors;
  struct vector trans; };
  struct angle rot;        
  struct vector scale;     
  union
  {
    struct vector velocity;
    struct gooldbllink link;
  };
  struct angle targetrot;  
  union
  {  
    struct angle angvelocity;     
    struct
    {
      uint32_t modeflagsa;
      uint32_t modeflagsb;
      uint32_t modeflagsc;
    };
  };
  
  uint32_t statusa;       
  uint32_t statusb;       
  uint32_t statusc;       
  uint32_t subtype;         
  uint32_t id;           
  EMUPTR(uint32_t) sp;    
  EMUPTR(uint32_t) pc;    
  EMUPTR(uint32_t) fp;    
  EMUPTR(uint32_t) pctrans;
  EMUPTR(uint32_t) pcevent;
  EMUPTR(uint32_t) pchead;
  union
  {
    uint32_t misc_flag;
    EMUPTR(goolobj) misc_child;
    EMUPTR(nsentry) misc_entry;
    uint32_t misc_memcard;
  };
  uint32_t unk_F8;
  uint32_t stampanim;
  uint32_t stampstate;
  uint32_t animcounter;     // 0x104
  EMUPTR(uint32_t) animseq; // 0x108
  uint32_t animframe;       // 0x10C
  
  EMUPTR(nsitem) entity;
  int32_t pathprogress;
  uint32_t pathcount;
  uint32_t groundy;
  uint32_t stateflags;
  int32_t speed;
  uint32_t displaymode;
  uint32_t unk_12C;
  uint32_t stampland;  // 0x130
  int32_t landyvel;    // 0x134
  uint32_t zindex;     // 0x138
  uint32_t event;      // 0x13C
  int32_t camzoom;     // 0x140
  uint32_t approachyz; // 0x144
  int32_t hotspotclip; // 0x148
  int32_t unk_14C;
  unk32_t unk_150;  
  unk32_t unk_154;
  int32_t node;
  uint32_t memory[0x40];
};

struct goolobjlist
{
  uint32_t header;
  EMUPTR(goolobj) children;
};

struct goolentity
{
  EMUPTR(nsentry) parententry;
  uint16_t spawnflags;
  uint16_t proctype;
  uint16_t id;
  uint16_t pathlen;
  union
  {
    struct sangle rot;
    struct
    {
      uint16_t modeflagsa;
      uint16_t modeflagsb;
      uint16_t modeflagsc;
    };
  };
  uint8_t type;
  uint8_t subtype;
  struct spoint path[];
};

struct goolstateinfo
{
  uint32_t flags;
  uint32_t statusc;
  uint16_t externeidrel;
  uint16_t event;
  uint16_t trans;
  uint16_t code;
};

struct goolstateref
{
  uint32_t state;
  uint32_t guard;
};

struct gooleventpoll
{
  union
  {
    uint32_t categories;
    struct
    {
      uint32_t unused_flags:25;
      uint32_t sendtoenemiesc:1;
      uint32_t sendtoenemiesb:1;
      uint32_t sendtosprites:1;
      uint32_t sendtoenemiesa:1;
      uint32_t sendtopausemenu:1;
      uint32_t sendtoplayer:1;
      uint32_t unk_flag:1;
    };
  };
  EMUPTR(goolobj) sender;
  EMUPTR(goolobj) collider;
  uint32_t distnearest;
  uint32_t event;
};

struct levelstate // in gool.h for now
{
  vector playertrans;
  angle playerrot;
  vector playerscale;
  uint32_t currentzone;
  uint32_t currentsection;
  uint32_t currentprogress;
  uint32_t levelid;
  uint32_t flag;
  uint32_t spawnlist[GOOL_OBJECT_SPAWNLISTSIZE];
  uint32_t boxesbroken; // count
};
 
extern uint32_t GOOL_InitAllocTable();
//extern uint32_t GOOL_FreeAllocTable();
//extern uint32_t GOOL_OrientObjectOnPath(EMUPTR(goolobj) obj, uint32_t progress, vector *trans);
//extern uint32_t GOOL_LoadLevelSpawnList(uint32_t levelid);
extern uint32_t GOOL_TraverseObjectTreePreorder(EMUPTR(goolobj) obj, EMUPTR(uint32_t(EMUPTR(goolobj),uint32_t)) func, uint32_t arg);
extern uint32_t GOOL_TraverseObjectTreePostorder(EMUPTR(goolobj) obj, EMUPTR(uint32_t(EMUPTR(goolobj),uint32_t)) func, uint32_t arg);
//extern uint32_t GOOL_FindObject(...);
//extern uint32_t ...
//extern uint32_t ...
//extern uint32_t GOOL_TestObjectId
//extern uint32_t ...
extern EMUPTR(goolobj) GOOL_TestObjectStateFlags(EMUPTR(goolobj) obj, uint32_t flags);
//extern uint32_t GOOL_SpawnObject
extern EMUPTR(goolobj) GOOL_CreateObject(EMUPTR(goolobj) parent, uint32_t type, uint32_t subtype, uint32_t argc, emuptr<uint32_t>args, uint32_t flag);
extern uint32_t GOOL_InitObject(EMUPTR(goolobj) obj, uint32_t type, uint32_t state, uint32_t argc, emuptr<uint32_t> args);
//extern uint32_t GOOL_TerminateObject
//extern uint32_t GOOL_TerminateObject
//extern uint32_t GOOL_TerminateObject
//extern uint32_t GOOL_UpdateObjectBounds
//extern uint32_t GOOL_UpdateObjects

extern uint32_t GOOL_ChangeObjectState(EMUPTR(goolobj) obj, uint32_t state, uint32_t argc, emuptr<uint32_t> args);
extern uint32_t GOOL_CreateObjectStackFrame(EMUPTR(goolobj) obj, uint32_t argc, uint32_t flags);
extern uint32_t GOOL_UpdateObject(EMUPTR(goolobj) obj, uint32_t flag);
//extern uint32_t GOOL_RenderObject??

extern EMUPTR(uint32_t) GOOL_TranslateInGop(EMUPTR(goolobj) obj, uint32_t gop);
extern EMUPTR(uint32_t) GOOL_TranslateOutGop(EMUPTR(goolobj) obj, uint32_t gop);
extern EMUPTR(uint32_t) GOOL_TranslateGop(EMUPTR(goolobj) obj, uint32_t gop);
extern uint32_t GOOL_InterpretObject(EMUPTR(goolobj) obj, uint32_t flags, EMUPTR(goolstateref) transition);

extern void GOOL_InterpretObject_NativeEnter();
extern void GOOL_InterpretObject_NativeReturn(uint32_t result);

extern void GOOL_OP_13_unnamed(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_Misc(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_2225_unnamed(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_ControlFlow(EMUPTR(goolobj) obj, uint32_t instruction, uint32_t &flags, EMUPTR(goolstateref) transition);
extern void GOOL_OP_ChangeAnim(EMUPTR(goolobj) obj, uint32_t instruction, uint32_t &flags);
extern void GOOL_OP_ChangeAnimFrame(EMUPTR(goolobj) obj, uint32_t instruction, uint32_t &flags);
extern void GOOL_OP_TransformVectors(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_JumpAndLink(EMUPTR(goolobj) obj, uint32_t instruction, uint32_t &flags);
extern void GOOL_OP_SendEvent(EMUPTR(goolobj) obj, uint32_t instruction, uint32_t &flags, EMUPTR(goolobj) recipient, uint32_t opcode);
extern void GOOL_OP_ReturnStateTransition(EMUPTR(goolobj) obj, uint32_t instruction, uint32_t &flags, EMUPTR(goolstateref) transition, uint32_t opcode); 
extern void GOOL_OP_SpawnChildren(EMUPTR(goolobj) obj, uint32_t instruction, uint32_t opcode);
extern void GOOL_OP_Paging(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_AudioA(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_AudioB(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_ReactSolidSurfaces(EMUPTR(goolobj) obj, uint32_t instruction);

extern void GOOL_CopyObjectVectors(EMUPTR(goolobj) src, EMUPTR(goolobj) dst);

extern void GOOL_AdoptObject(EMUPTR(goolobj) child, EMUPTR(goolobj) parent);
extern void GOOL_AddObjectChild(EMUPTR(goolobj) child, EMUPTR(goolobj) parent);
extern void GOOL_RemoveObjectChild(EMUPTR(goolobj) child, EMUPTR(goolobj) parent);
extern EMUPTR(goolobj) GOOL_GetObjectPredecessor(EMUPTR(goolobj) child, EMUPTR(goolobj) parent);

extern void GOOL_OP_0(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_1(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_2(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_3(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_4(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_5(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_6(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_7(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_8(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_9(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_A(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_B(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_C(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_D(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_E(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_F(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_10(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_11(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_12(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_13(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_14(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_15(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_1626(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_17(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_18(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_19(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_1A(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_1B(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_1C(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_1D(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_1E(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_1F(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_20(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_21(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_2225(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_23(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_24(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_27(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_82(EMUPTR(goolobj) obj, uint32_t instruction, uint32_t &flags, EMUPTR(goolstateref) transition);
extern void GOOL_OP_83(EMUPTR(goolobj) obj, uint32_t instruction, uint32_t &flags);
extern void GOOL_OP_84(EMUPTR(goolobj) obj, uint32_t instruction, uint32_t &flags);
extern void GOOL_OP_85(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_86(EMUPTR(goolobj) obj, uint32_t instruction, uint32_t &flags);
extern void GOOL_OP_8889(EMUPTR(goolobj) obj, uint32_t instruction, uint32_t &flags, EMUPTR(goolstateref) transition, uint32_t opcode);
extern void GOOL_OP_8A91(EMUPTR(goolobj) obj, uint32_t instruction, uint32_t opcode);
extern void GOOL_OP_8B(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_8C(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_8D(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_8E(EMUPTR(goolobj) obj, uint32_t instruction);
extern void GOOL_OP_8F(EMUPTR(goolobj) obj, uint32_t instruction, uint32_t &flags, EMUPTR(goolobj) recipient, uint32_t opcode);

#ifdef __cplusplus
}
#endif

#endif
