#ifdef ZZ_INCLUDE_CODE
ZZ_326B8:
	V1 = 0x63960000;
	A0 = 0x80060000;
	A0 -= 228;
	V0 = EMU_ReadU32(A0);
	V1 |= 0x347F;
	A1 = 0xFFFF0000;
	A1 |= 0x7FFF;
	AT = 0x80060000;
	EMU_Write32(AT - 212,V1); //+ 0xFFFFFF2C
	V1 = 0x1;
	AT = 0x80060000;
	EMU_Write8(AT - 204,V1); //+ 0xFFFFFF34
	V1 = 0x80;
	AT = 0x80060000;
	EMU_Write8(AT - 203,V1); //+ 0xFFFFFF35
	V1 = 0x3FFF;
	AT = 0x80060000;
	EMU_Write16(AT - 202,V1); //+ 0xFFFFFF36
	V1 = 0x1000;
	AT = 0x80060000;
	EMU_Write16(AT - 198,V1); //+ 0xFFFFFF3A
	V1 = -3;
	AT = 0x80060000;
	EMU_Write32(AT - 220,R0); //+ 0xFFFFFF24
	AT = 0x80060000;
	EMU_Write16(AT - 200,R0); //+ 0xFFFFFF38
	AT = 0x80060000;
	EMU_Write32(AT - 208,R0); //+ 0xFFFFFF30
	AT = 0x80060000;
	EMU_Write32(AT - 196,R0); //+ 0xFFFFFF3C
	AT = 0x80060000;
	EMU_Write32(AT - 192,R0); //+ 0xFFFFFF40
	AT = 0x80060000;
	EMU_Write32(AT - 188,R0); //+ 0xFFFFFF44
	V0 &= V1;
	V1 = -2;
	V0 &= V1;
	V1 = -5;
	V0 &= V1;
	V1 = -9;
	V0 &= V1;
	V1 = -17;
	V0 &= V1;
	V1 = -33;
	V0 &= V1;
	V1 = -65;
	V0 &= V1;
	V1 = -129;
	V0 &= V1;
	V1 = -257;
	V0 &= V1;
	V0 |= 0x600;
	V1 = -2049;
	V0 &= V1;
	V1 = -28673;
	V0 &= V1;
	V0 &= A1;
	ZZ_JUMPREGISTER_BEGIN(RA);
	EMU_Write32(A0,V0);
	ZZ_CLOCKCYCLES_JR(59);
	ZZ_JUMPREGISTER(0x80032848,ZZ_327B4_94);
	ZZ_JUMPREGISTER(0x80033084,ZZ_32E88_1FC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800326B8,ZZ_326B8);
ZZ_MARK(0x800326BC);
ZZ_MARK(0x800326C0);
ZZ_MARK(0x800326C4);
ZZ_MARK(0x800326C8);
ZZ_MARK(0x800326CC);
ZZ_MARK(0x800326D0);
ZZ_MARK(0x800326D4);
ZZ_MARK(0x800326D8);
ZZ_MARK(0x800326DC);
ZZ_MARK(0x800326E0);
ZZ_MARK(0x800326E4);
ZZ_MARK(0x800326E8);
ZZ_MARK(0x800326EC);
ZZ_MARK(0x800326F0);
ZZ_MARK(0x800326F4);
ZZ_MARK(0x800326F8);
ZZ_MARK(0x800326FC);
ZZ_MARK(0x80032700);
ZZ_MARK(0x80032704);
ZZ_MARK(0x80032708);
ZZ_MARK(0x8003270C);
ZZ_MARK(0x80032710);
ZZ_MARK(0x80032714);
ZZ_MARK(0x80032718);
ZZ_MARK(0x8003271C);
ZZ_MARK(0x80032720);
ZZ_MARK(0x80032724);
ZZ_MARK(0x80032728);
ZZ_MARK(0x8003272C);
ZZ_MARK(0x80032730);
ZZ_MARK(0x80032734);
ZZ_MARK(0x80032738);
ZZ_MARK(0x8003273C);
ZZ_MARK(0x80032740);
ZZ_MARK(0x80032744);
ZZ_MARK(0x80032748);
ZZ_MARK(0x8003274C);
ZZ_MARK(0x80032750);
ZZ_MARK(0x80032754);
ZZ_MARK(0x80032758);
ZZ_MARK(0x8003275C);
ZZ_MARK(0x80032760);
ZZ_MARK(0x80032764);
ZZ_MARK(0x80032768);
ZZ_MARK(0x8003276C);
ZZ_MARK(0x80032770);
ZZ_MARK(0x80032774);
ZZ_MARK(0x80032778);
ZZ_MARK(0x8003277C);
ZZ_MARK(0x80032780);
ZZ_MARK(0x80032784);
ZZ_MARK(0x80032788);
ZZ_MARK(0x8003278C);
ZZ_MARK(0x80032790);
ZZ_MARK(0x80032794);
ZZ_MARK(0x80032798);
ZZ_MARK(0x8003279C);
ZZ_MARK(0x800327A0);
