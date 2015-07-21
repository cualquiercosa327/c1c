#ifndef H_NS_H
#define H_NS_H

#include "common.h"
#include "emu.h"

#ifdef __cplusplus
extern "C" {
#endif

#define NS_EID_NONE 0x6396347F

typedef uint8_t nsitem;

struct nsentry
{
	unk32_t magic;
	unk32_t id;
	unk32_t type;
	int32_t itemcount;
	EMUPTR(nsitem) items[];
};

struct nspage
{
	uint16_t magic;
	uint16_t type;
	unk32_t pagenum;
	int32_t entrycount;
	unk32_t checksum;
	EMUPTR(struct nsentry) entries[];
};

struct nspageinfo
{
	EMUPTR(struct nspage) page;
	int16_t status;
	unk16_t off_6;
	int16_t unk_8;
	unk16_t off_10;
  int16_t savings;
	int16_t compressed;
	EMUPTR(struct nspage) nextpage;
	int32_t pagenum;
	unk32_t off_24;
	int32_t pagecount;
	unk32_t off_32;
	unk32_t off_36;
	unk32_t off_40;
};

extern int32_t NS_13B94(EMUPTR(struct nspage) nspage);

//extern int NS_VerifyChecksum(EMUPTR(struct nspage) nspage);

extern uint32_t NS_13B30(EMUPTR(struct nspageinfo) nspageinfo);

#ifdef __cplusplus
}
#endif

#endif
