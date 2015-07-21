#include "libc.h"

uint32_t LIBC_Malloc(uint32_t size)
{
  return EMU_Invoke(0x80011A58,1,size);
}

uint32_t LIBC_Realloc(uint32_t ptr, uint32_t size)
{
  return EMU_Invoke(0x80011CA0,2,ptr,size);
}

uint32_t LIBC_Calloc(uint32_t num, uint32_t size)
{
  return EMU_Invoke(0x80011D30,2,num,size);
}

void LIBC_Free(uint32_t ptr)
{
  EMU_Invoke(0x80011C8C,1,ptr);
}
