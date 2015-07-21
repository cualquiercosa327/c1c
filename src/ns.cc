#include "ns.h"
#include "emu.h"

inline int32_t NS_13B94(emuptr<struct nspage> nspage)
{
	if (nspage->type == 0x1)
	{
		// crash 2: return -255;
    return 0;
	}
	if (nspage->magic != 0x1234)
	{
		// crash 2: return -18;
    return 0;
	}
	for (int32_t i = nspage->entrycount - 1;i >= 0;i--)
	{
		*(uint32_t *)&nspage->entries[i] += (uint32_t)nspage;
		for (int32_t ii = nspage->entries[i]->itemcount;ii >= 0;ii--)
		{
			*(uint32_t *)&nspage->entries[i]->items[ii] += (uint32_t)nspage->entries[i];
		}
	}
	*(uint32_t *)&nspage->entries[nspage->entrycount] += (uint32_t)nspage;
	// crash 2: return -255;
  return 0;
}

/*int NS_VerifyChecksum(emuptr<struct nspage> nspage)
{
	return nspage->checksum == EMU_Invoke(0x800125F8,1,nspage);
}*/

uint32_t NS_13B30(emuptr<struct nspageinfo> nspageinfo)
{
	int16_t status = nspageinfo->status;
	int32_t pagecount = nspageinfo->pagecount;
	T0 = 0;
	if (status == 0x3 || status == 0xD)
	{
		/* crash 2: also verify checksum after page is read
    if (EMU_ReadU32(0x80068260) && !NS_VerifyChecksum(nspageinfo->page))
		{
			return EMU_Invoke(0x80013148,1,nspageinfo);
		}*/
    if (nspageinfo->compressed)
    {
      uint32_t dst = (uint32_t)nspageinfo->page;
      uint32_t src = dst + (nspageinfo->savings << 11);
      EMU_Invoke(0x80013970,2,src,dst);
    }
		nspageinfo->status = 0x4;
		// crash 2: EMU_Invoke(0x8001254C,1,nspageinfo->page);
		return NS_13B94(nspageinfo->page);
	}
	V0 = EMU_ReadU32(0x8005C540);
	V0 = EMU_ReadU32(V0 + 1052); //+ 0x41C
	V1 = nspageinfo->pagenum >> 1;
  // c2 uses A2 here
	A1 = ((int32_t)V1 < (int32_t)V0) && !!EMU_ReadU32(0x8005CFC0);
	for (int32_t i = 0;i < pagecount;i++,nspageinfo--)
	{
		if (status != 0x2)
			continue;
		// crash 2: nspageinfo->off_10 = A2; (A1)
    nspageinfo->compressed = A1;
		if (A1)
		{
			V1 = EMU_ReadU32(0x8005C540);
			V0 = nspageinfo->pagenum >> 1;
			V0 <<= 2;
			V0 += V1;
			V0 = EMU_ReadU32(V0 + 1056); //+ 0x420
			V1 = T0 + 32;
			V0 &= 0x3F;
			T0 = V1 - V0;
			// crash 2: nspageinfo->unk_8 = T0;
      nspageinfo->savings = T0;
		}
		if (nspageinfo->status == 0x2)
		{
			nspageinfo->status = 0x3;
		}
		else
		{
			nspageinfo->status = 0xD;
			if (A1)
			{
				V1 = EMU_ReadU32(0x8005C540);
				V0 = nspageinfo->pagenum >> 1;
				V0 <<= 2;
				V0 += V1;
				V0 = EMU_ReadU32(V0 + 1056); //+ 0x420
				// crash 2: A0 = nspageinfo->unk_8;
        V1 = nspageinfo->savings;
				V0 &= 0x3F;
				V0 += V1; // V1 rather than A0
        V1 = (uint32_t)nspageinfo->page;
				V0 <<= 11;
				V1 += V0;
				nspageinfo->nextpage = emuptr<nspage>(V1);
			}
			else
			{
				nspageinfo->nextpage = nspageinfo[1].page;
			}
			nspageinfo->nextpage->magic = 0x8765;
		}
	}
	// BUG :: The game's original implementation of this function
	// returned an undefined value if the loop body was not executed
	// at least once (c1: register $A2, c2: $A3)
	return (uint32_t)(nspageinfo + 1);
}