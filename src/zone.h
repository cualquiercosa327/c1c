struct zoneheader
{
  uint32_t worldcount;
  wgeomodel world[8];
  uint32_t headercount;
  uint32_t campathcount;
  uint32_t entitycount;
  uint32_t neighborcount;
  union
  {
    EMUPTR(nsentry) neighbor[8];
    uint32_t neighboreid[8];
  };
  uint32_t tpagecount;
  uint32_t tchunkcount;
  uint32_t tpage[8];
  uint32_t tchunk[32];
  uint32_t loadflags;
  uint32_t vramfillh;
  uint32_t unknownA;
  uint32_t visibilitydepth;
  uint32_t unknownB;
  uint32_t unknownC;
  uint32_t unknownD;
  uint32_t unknownE;
  uint32_t flags;
  uint32_t deathy;
  uint32_t unknownF;
  uint32_t unknownG;
  uint32_t unknownH;
  uint8_t vramfillr;
  uint8_t vramfillg;
  uint8_t vramfillb;
  uint8_t unused_a;
  uint8_t farcolorr;
  uint8_t farcolorg;
  uint8_t farcolorb;
  uint8_t unused_b;
  struct slightmatrix objectlightmatrix;
  struct scolor objectcolor;
  struct scolormatrix objectcolormatrix;
  struct scolor objectlightintensity;
  struct slightmatrix playerlightmatrix;
  struct scolor playercolor;
  struct scolormatrix playercolormatrix;
  struct scolor playerlightintensity;
}

// cam relation examples:
// before && behind = most levels
// after && infront = most levels
// after && behind  = boulders, parts of jaws of darkness, temple ruins 
// before && infront = ^^^^^^^^
struct zonepathdescriptor
{
  uint8_t relation;
  uint8_t neighborzoneindex;
  uint8_t campathindex;
  uint8_t goal;
};
typedef zonepathdescriptor zoneneighborpathdescriptor;

struct zonecampathpoint
{
  int16_t x;
  int16_t y;
  int16_t z;
  int16_t rotx;
  int16_t roty;
  int16_t rotz;
};

struct zonecampath
{
  uint32_t slsteid;
  union
  {
    EMUPTR(nsentry) parentzone;
    uint32_t parentzoneeid;
  }
  uint32_t neighborpathcount;
  struct zoneneighborpathdescriptor neighborpathdescriptor[4];
  uint8_t entranceindex;
  uint8_t exitindex;
  uint16_t length;
  uint16_t cammode;
  int16_t avgptdist;
  int16_t camzoom;
  uint16_t unknownA;
  uint16_t unknownB;
  uint16_t unknownC;
  struct svector direction;
  struct zonecampathpoint point[];
};