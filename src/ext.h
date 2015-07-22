#ifndef EXT_H
#define EXT_H

#include "common.h"
#include "ns.h"

#ifdef __cplusplus
extern "C" {
#endif

#define EXT_FONTMAPLEN 64

struct extfontchar
{
  uint32_t colinfo; 
  uint32_t texinfo;
  uint16_t width;
  uint16_t height;
};
  
struct extfontmap
{
  uint8_t type_unused;
  uint8_t unk1_unused;
  uint8_t maplen_unused;
  uint8_t unk3_unused;
  uint32_t tpage_unused;
  struct extfontchar map[EXT_FONTMAPLEN];
  uint32_t backdrop_colinfo;
  uint32_t backdrop_texinfo;
};

extern uint32_t EXT_Malloc(uint32_t);
extern void EXT_Free(uint32_t);

extern void EXT_HandleExtensions(void);
extern void EXT_Init(void);
extern void EXT_ViewObjectInfo(void);

extern void EXT_setpos(uint32_t,uint32_t);
extern void EXT_printf(const char *, ...);

extern char *EXT_parseextfmt(char *, const char *, ...);
extern char *EXT_vsparseextfmt(char *, const char *, va_list);
extern char *EXT_etoa(char *, EMUPTR(nsentry));
extern char *EXT_btoa(char *, uint32_t, uint32_t);


//extern void EXT_printfeid(char *str,EMUPTR(nsentry));
//extern void EXT_printfbin(char *str,uint32_t,uint32_t);

#ifdef __cplusplus
}
#endif

#endif