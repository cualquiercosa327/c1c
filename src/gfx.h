#ifndef GFX_H
#define GFX_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

#define GFX_FIXED(x) ((x) << 12)
#define GFX_GETSPACE(sp,bd,pt) \
((struct space*)(sp))->p1.x = ((struct point*)(pt))->x + ((struct bound*)(bd))->p1.x; \
((struct space*)(sp))->p1.y = ((struct point*)(pt))->y + ((struct bound*)(bd))->p1.y; \
((struct space*)(sp))->p1.z = ((struct point*)(pt))->z + ((struct bound*)(bd))->p1.z; \
((struct space*)(sp))->p2.x = ((struct point*)(pt))->x + ((struct bound*)(bd))->p2.x; \
((struct space*)(sp))->p2.y = ((struct point*)(pt))->y + ((struct bound*)(bd))->p2.y; \
((struct space*)(sp))->p2.z = ((struct point*)(pt))->z + ((struct bound*)(bd))->p2.z; \

struct vector
{
  int32_t x;
  int32_t y;
  int32_t z;
};

#define point vector

struct svector
{
  int16_t x;
  int16_t y;
  int16_t z;
};

#define spoint svector

struct angle
{
  int32_t y;
  int32_t x;
  int32_t z;
};

struct sangle
{
  int16_t y;
  int16_t x;
  int16_t z;
};

struct bound
{
  struct point p1;
  struct point p2;
};

#define space bound

struct dimension
{
  int32_t w;
  int32_t h;
  int32_t d;
};

struct volume
{
  struct point pos;
  struct dimension dim;
};

struct matrix
{
  struct vector v1;
  struct vector v2;
  struct vector v3;
};

struct smatrix
{
  struct svector v1;
  struct svector v2;
  struct svector v3;
};

#define slightmatrix smatrix
  
struct scolor
{
  uint16_t r;
  uint16_t g;
  uint16_t b;
};

struct scolormatrix
{
  struct scolor v1;
  struct scolor v2;
  struct scolor v3;
};

#ifdef __cplusplus
}
#endif

#endif