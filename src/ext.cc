#include "ext.h"
#include "emu.h"
#include "gool.h"
#include "gfx.h"

static emuptr<extfontmap> fontmap;
static emuptr<goolobj> fontobj;
static emuptr<nsentry> fonttpage;

static emuptr<uint32_t> slots[10];
static emuptr<char> str;

static int32_t textx, texty;

#define LOG_EXT 100
uint32_t EXT_Malloc(uint32_t size)
{
  size = (((size + 3) >> 2) << 2);
  SDL_LogDebug(LOG_EXT,"size: %d", size);
  return EMU_Invoke(0x80011A58,1,size);
}

void EXT_Free(uint32_t address)
{
  EMU_Invoke(0x80011C8C,1,address);
}

void EXT_DecodeEID(uint32_t eid, char *str)
{
  slots[0][0] = 3;
  slots[0][1] = eid;
  EMU_Invoke(0x800126C0,1,slots[0]);
  
  char *buf = (char*)EMU_Pointer(0x80056718);
  for (int i=0; i<6; i++)
  {
    str[i] = buf[i];
    if (str[i] >= 0x61 && str[i] <= 0x7A)
      str[i] -= 0x20;
  }
}

void EXT_HandleExtensions()
{
  #ifdef C1C_ENABLE_INGAMEMENU
  static uint32_t extinit = 0;
  if (!extinit)
  {
    EXT_Init();
    extinit = 1;
  }
  
  EXT_ViewObjectInfo();
  #endif
}

#define EXT_FONTMAP_ADDCHAR(c,t,w,h) \
do \
{ \
  fontmap->map[i].colinfo = c; \
  fontmap->map[i].texinfo = t; \
  fontmap->map[i].width = w; \
  fontmap->map[i].height = h; \
  i++; \
} while (0); 

#define EXT_FONTTPAGEEID 0x52C2E06F

void EXT_Init()
{
  
  fontmap = EXT_Malloc(sizeof(extfontmap));
  fontobj = EXT_Malloc(sizeof(goolobj));
  str = EXT_Malloc(0x1000);
  for (int i=0;i<10;i++)
    slots[i] = EXT_Malloc(8);
  
  slots[1][0] = EXT_FONTTPAGEEID;
  fonttpage = EMU_Invoke(0x80015A98,1,slots[1]);
    
  fontobj->header = 1;
  fontobj->zindex = 1;
  fontobj->statusb = 0;
  
  int i = 0;
  EXT_FONTMAP_ADDCHAR(0x00000000,0x00000000,400,420);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030A0004,400,0);
  EXT_FONTMAP_ADDCHAR(0x00000000,0x00000000,400,420);
  EXT_FONTMAP_ADDCHAR(0x80808080,0x03530044,800,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030B4014,400,0);
  EXT_FONTMAP_ADDCHAR(0x00000000,0x00000000,400,420); 
  EXT_FONTMAP_ADDCHAR(0x00000000,0x00000000,400,420); 
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030B4008,300,0);
  EXT_FONTMAP_ADDCHAR(0x00000000,0x00000000,400,420); 
  EXT_FONTMAP_ADDCHAR(0x00000000,0x00000000,400,420); 
  EXT_FONTMAP_ADDCHAR(0x80808080,0x03520044,800,0);
  EXT_FONTMAP_ADDCHAR(0x80808080,0x03540044,800,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030B4004,300,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030B4010,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030B400C,250,0);
  EXT_FONTMAP_ADDCHAR(0x00000000,0x00000000,400,420); 
  EXT_FONTMAP_ADDCHAR(0x81808080,0x03088004,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x0308C004,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x03090004,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x03094004,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x03098004,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x0309C00C,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x0309C008,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x0309C004,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030A000C,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030A0008,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030B801C,300,0);
  EXT_FONTMAP_ADDCHAR(0x00000000,0x00000000,400,420); 
  EXT_FONTMAP_ADDCHAR(0x00000000,0x00000000,400,420); 
  EXT_FONTMAP_ADDCHAR(0x00000000,0x00000000,400,420); 
  EXT_FONTMAP_ADDCHAR(0xE8808080,0x034800C4,400,0);
  EXT_FONTMAP_ADDCHAR(0x89808080,0x030D40D0,400,0);
  EXT_FONTMAP_ADDCHAR(0x00000000,0x00000000,400,420) 
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030A400C,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030A4008,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030A4004,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030A801C,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030A8018,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030A8014,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030A8010,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030A800C,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030A8008,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030A8004,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030AC01C,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030AC018,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030AC014,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030AC010,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030AC00C,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030AC008,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030AC004,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030B001C,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030B0018,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030B0014,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030B0010,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030B000C,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030B0008,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030B0004,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030B401C,400,0);
  EXT_FONTMAP_ADDCHAR(0x81808080,0x030B4018,400,0);
  EXT_FONTMAP_ADDCHAR(0x00000000,0x00000000,400,420); 
  EXT_FONTMAP_ADDCHAR(0x00000000,0x00000000,400,420); 
  EXT_FONTMAP_ADDCHAR(0x00000000,0x00000000,400,420); 
  EXT_FONTMAP_ADDCHAR(0x80808080,0x03550044,800,0);
  EXT_FONTMAP_ADDCHAR(0x00000000,0x00000000,400,420);
  
  textx = 0;
  texty = 0;
}

#undef EXT_FONTMAP_ADDCHAR
    
static char *stringmap[] = { "EMPTY", "EXISTS", "HEAD",
                             "NULL", "PLAYER", "HUD", "ENEMYA", "SPRITE", "ENEMYB", "ENEMYC",
                             "MODE1","MODE2","MODE3","MODE4","MODE5","MODE6","MODE7","MODE8" };

static char *menustates = "GENERAL  VECTORS  STATUS   PROCESS";

char temp[0x100];
char menubuf[0x10000];

static uint32_t padprevheld = 0;
static int32_t curobjindex = 0;
static int32_t menustate = 0;
static int32_t menuitem = 0;
static int32_t menuh = 18;
static int32_t cursorx = 0;
static int32_t cursory = 0;

#define EXT_PRINTF_MINH 400
#define EXT_PRINTF_SCALEY 7.54f

void EXT_ViewObjectInfo()
{ 
  /*
  EMU_Write32(0x800618DC,0x1F);
  EMU_Write32(0x80061988,0xF7BE2FBD);
  EMU_Write32(0x800619AC,0x05000014);
  EMU_Write32(0x80061A1C,0xF7BE2FBD);
  EMU_Write32(0x80061A20,0x05000014);
  */
  
  // note: not official locations of ctrl press & held buffer
  // zz_167a4 (controller func) modified to write these locations
  uint32_t padheld = EMU_ReadU32(0x8005792C);
  uint32_t padpress = (~padprevheld & padheld);      
  padprevheld = padheld;
  
  if (padheld & 0x100) // select
  {
    if (padpress & 0x4000) // down
    {
      if (++menuitem > menuh)
        menuitem = menuh;
    }
    if (padpress & 0x1000) // up
    {
      if (--menuitem < 0)
        menuitem = 0;
    }
    if (padpress & 0x8000) // left
    {
      switch (menuitem)
      {
      case 0:
        if (--curobjindex < 0)
          curobjindex = 0;
        break;
      case 1:
        if (--menustate < 0)
          menustate = 0;
        break;
      }
    }
    if (padpress & 0x2000)
    {
      switch (menuitem)
      {
      case 0:
        if (++curobjindex > 95)
          curobjindex = 95;
        break;
      case 1:
        if (++menustate > 3)
          menustate = 3;
        break;
      }
    }
    /*
    if (padpress & 0x10) // triangle
    {
      emuptr<goolobj> player(EMU_ReadU32(0x80060DB0));
      player->trans.x = 3945216;
      player->trans.y = 5305246;
      player->trans.z = 10958080;
    }
    */
  }
  
  if (menuitem == 1)
  { 
    cursorx = menustate;
    cursory = menuitem;
  }
  else
  {
    cursorx = 0;
    cursory = menuitem;
  }
   
  uint32_t goolobjs = 0;
  uint32_t curobjoffset = 0;
  if (curobjindex == 0)
  {
    goolobjs = EMU_ReadU32(0x80060DB0);
    curobjoffset = 0;
  }
  else if (curobjindex > 0)
  {
    goolobjs = EMU_ReadU32(0x80060DB4);
    curobjoffset = (curobjindex-1)*sizeof(goolobj);
  }
  emuptr<goolobj> curobj(goolobjs+curobjoffset);
  
  
  EXT_setpos(0, 0);
  if (menustate == 0)
  {
    EXT_printf("~c0"
              "OBJECT %d:~n0"
              "%s~n0" 
              "------------------------------~n0"
              "EXISTS?: %s~n0"
              "PROCTYPE: %d~n0"
              "BOUND: [%d, %d, %d]-[%d, %d, %d]~n0"
              "LOCAL EXEC: %e~n0"
              "EXTERNAL EXEC: %e~n0"
              "CURRENT ZONE: %e~n0"
              "STATE: %d ~n0",
              curobjindex,
              menustates,
              stringmap[curobj->header],
              curobj->proctype,
              curobj->bound.p1.x, curobj->bound.p1.y, curobj->bound.p1.z,
              curobj->bound.p2.x, curobj->bound.p2.y, curobj->bound.p2.z,
              curobj->local, curobj->external, curobj->zone,
              curobj->state
              );
  }
  else if (menustate == 1)
  {
    EXT_printf("~c0"
          "OBJECT %d:~n0"
          "%s~n0" 
          "------------------------------~n0"
          "TRANS: [%d, %d, %d]~n0"
          "ROT: [%d, %d, %d]~n0"
          "SCALE: [%d, %d, %d]~n0"
          "VELOCITY: [%d, %d, %d]~n0"
          "TARGETROT: [%d, %d, %d]~n0"
          "ANGVELOCITY: [%d, %d, %d]~n0",
          curobjindex,
          menustates,
          curobj->trans.x, curobj->trans.y, curobj->trans.z,
          curobj->rot.x, curobj->rot.y, curobj->rot.z,
          curobj->scale.x, curobj->scale.y, curobj->scale.z,
          curobj->velocity.x, curobj->velocity.y, curobj->velocity.z,
          curobj->targetrot.x, curobj->targetrot.y, curobj->targetrot.z,
          curobj->angvelocity.x, curobj->angvelocity.y, curobj->angvelocity.z
          );
  }
  else if (menustate == 2)
  {
    EXT_printf("~c0"
          "OBJECT %d:~n0"
          "%s~n0" 
          "------------------------------~n0"
          "STATUSA   : %b16s~n0"
          "          : %b16b~n0"
          "STATUSB   : %b16s~n0"
          "          : %b16b~n0"
          "STATUSC   : %b16s~n0"
          "          : %b16b~n0"
          "STATEFLAGS: %b16s~n0"
          "          : %b16b~n0",
          curobjindex,
          menustates,
          curobj->statusa, curobj->statusb, curobj->statusc,
          curobj->stateflags);
  }
  
  uint32_t cursorxpos = (cursorx * EXT_PRINTF_SCALEY*4500) - 0x1000;
  uint32_t cursorypos = -(cursory * EXT_PRINTF_SCALEY*435);
  EXT_setpos(cursorxpos, cursorypos);
  EXT_printf("~c0>");                 
}

/* print routines */

void EXT_setpos(uint32_t x, uint32_t y)
{
  textx = x;
  texty = y;
}
  
void EXT_printf(const char *fmt, ...)
{ 
  uint32_t slotaddr;
  if ((fonttpage == 0) || (fonttpage == 0xFFFFFFF6))
  {
    slots[1][0] = EXT_FONTTPAGEEID;
    fonttpage = EMU_Invoke(0x80015A98,1,slots[1]); 
    if (fonttpage == 0 || fonttpage == 0xFFFFFFF6)
    {
      return;
    }
    slotaddr = (uint32_t)slots[1];
  }
  
  char bufp[0x1000];
  char buf[0x1000];
  
  va_list args;
  va_start(args,fmt);
  EXT_vsparseextfmt(bufp,fmt,args);  
  vsprintf(buf,bufp,args);
  va_end(args);

  uint32_t len = strlen(buf);
  uint32_t addy = 0; 
  uint32_t maxh = EXT_PRINTF_MINH;
  for (uint32_t i = 0; i < len; i++)
  { 
    if (fontmap->map[buf[i]-32].height > maxh) 
      maxh = fontmap->map[buf[i]-32].height;
    if ((buf[i] == '~') && (buf[i+1] == 'n'))
    {
      addy += (uint32_t)((float)maxh * EXT_PRINTF_SCALEY);
      maxh = EXT_PRINTF_MINH;
    }
    str[i] = buf[i];
  }
  addy += (uint32_t)((float)maxh * EXT_PRINTF_SCALEY);
  str[len] = 0;
  str[len+1] = 0;

  fontobj->trans.x = textx - 0xE000;
  fontobj->trans.y = texty + 0x6E00;
  fontobj->trans.z = 0;
  fontobj->rot.x = 0;
  fontobj->rot.y = 0;
  fontobj->rot.z = 0;
  fontobj->scale.x = 150;
  fontobj->scale.y = 200;
  fontobj->scale.z = 0;
  
  const uint32_t xpos = 0;
  const uint32_t scale = 0;
  uint32_t primlist = EMU_ReadU32(0x8005840C) + 0x88;
  uint32_t farclipz = EMU_ReadU32(0x800578D0);
  EMU_Invoke(0x8003A144,8,((uint32_t)fontobj)+0x80,0x80057888,1,0,0x80057844,farclipz,0x3C00,0);
  EMU_Invoke(0x8001E3D4,7,fontobj,str,xpos,fontmap,fonttpage,scale,primlist);
   
  texty -= addy;
}

char *EXT_parseextfmt(char *dst, const char *src, ...)
{
  va_list args;
  va_start(args, src);
  char *ret = EXT_vsparseextfmt(dst, src, args);
  va_end(args);
  
  return ret;
}

static uint32_t as = 0;
#define va_rebuild_begin(a) { as = 0; }
#define va_arg_keep(a,t) va_arg(a,t); \
do \
{ \
  if (as) { ((uint32_t*)a)[-(as+1)] = ((uint32_t*)a)[-1]; } \
} while (0)
#define va_arg_skip(a,t) va_arg(a,t); as++
#define va_rebuild_end(a) { ((uint32_t*)a)[-as] = 0; }

char *EXT_vsparseextfmt(char *dst, const char *src, va_list args)
{
  uint32_t len = strlen(src);
  uint32_t arg = 0;
  uint32_t val = 0;
  uint32_t bval = 0;
  uint32_t bskip = 0;
  
  uint32_t s = 0;
  uint32_t d = 0;
  va_rebuild_begin(args);
  while (s < len)
  {
    if (src[s] == '%')
    {
      char nxt = src[s+1];
      if (nxt == 'b' || nxt == 'e')
      {
        if (nxt == 'b' && bskip) {}
        else
        {
          arg = va_arg_skip(args,uint32_t);
        }
      }
      else
      {
        va_arg_keep(args,uint32_t);
      }
      if (nxt == 'e')
      {
        emuptr<nsentry> entry(arg);
        EXT_etoa(temp, entry);
        uint32_t elen = strlen(temp);
        for (uint32_t i = 0; i < elen; i++)
          dst[d++] = temp[i];
        s+=2;
      }
      else if (nxt == 'b')
      {        
        char ls[4];
        uint32_t lsi = s+2;
        
        for (uint32_t i = 0; src[lsi] != 'b' && src[lsi] != 's'; i++,lsi++)
        {
          if (src[lsi] >= '0' && src[lsi] <= '9')
            ls[i] = src[lsi];
          else
            break;
        }
        
        uint32_t blen = atoi(ls);
        if (!bskip)
        {
          val = arg;
          bval = val;
        }
        else
          val = bval & ((1 << blen)-1);
          
        EXT_btoa(temp, val, blen);
        
        for (uint32_t i = 0; i < blen; i++)
          dst[d++] = temp[i];
        
        if (bskip = (src[lsi] == 's'))
          bval >>= blen;  
          
        s=++lsi;
      }
      else
      {
        dst[d++] = src[s++];
      }
    }      
    else
    {
      dst[d++] = src[s++];
    }
  }
  dst[d] = 0;
  va_rebuild_end(args);
}

char *EXT_etoa(char *str, emuptr<nsentry> entry)
{
  if (entry == 0) sprintf(temp, "NULL\0");
  else EXT_DecodeEID(entry->id, temp);
  return (str = temp);
}

char *EXT_btoa(char *str, uint32_t val, uint32_t len)
{ 
  for (int32_t i=len,v=val; i>0; temp[--i]='0'+(v&1),v>>=1);
  temp[len] = 0;
  return (str = temp);
}

/*
void EXT_printfeid(char *str, emuptr<nsentry> entry)
{
  if (entry == 0) sprintf(temp, "NULL\0");
  else EXT_DecodeEID(entry->id, temp);
  EXT_printf(str, temp);
}

void EXT_printfbin(char *str, uint32_t val, uint32_t len)
{
  for (int32_t i=len,v=val; i>0; temp[--i]='0'+(v&1),v>>=1);
  temp[len] = 0;
  EXT_printf(str,temp);
}
*/