#ifdef ZZ_INCLUDE_CODE
ZZ_39470:
	SP -= 32;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = A1;
	EMU_Write32(SP + 24,S2); //+ 0x18
	S2 = A2;
	A0 = S1 & 0xFFF;
	A1 = A0;
	V1 = S1 & 0xE00;
	V0 = 0xE00;
	if (V1 != V0)
	{
		EMU_Write32(SP + 28,RA); //+ 0x1C
		ZZ_CLOCKCYCLES(13,0x800394D4);
		goto ZZ_39470_64;
	}
	EMU_Write32(SP + 28,RA); //+ 0x1C
	V0 = 0xE1F;
	if (A0 != V0)
	{
		V0 = S1 & 0x1FF;
		ZZ_CLOCKCYCLES(16,0x800394C4);
		goto ZZ_39470_54;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S0 + 188); //+ 0xBC
	V0 -= 4;
	EMU_Write32(S0 + 188,V0); //+ 0xBC
	ZZ_CLOCKCYCLES(21,0x800394DC);
	goto ZZ_39470_6C;
ZZ_39470_54:
	V0 <<= 2;
	V0 += 64;
	V0 += S0;
	ZZ_CLOCKCYCLES(4,0x800394DC);
	goto ZZ_39470_6C;
ZZ_39470_64:
	RA = 0x800394DC; //ZZ_39470_6C
	A0 = S0;
	ZZ_CLOCKCYCLES(2,0x80036FA4);
	goto ZZ_36FA4;
ZZ_39470_6C:
	V0 = EMU_ReadU32(V0);
	A0 = EMU_ReadU32(S0 + 188); //+ 0xBC
	EMU_Write32(S0 + 236,V0); //+ 0xEC
	V0 = A0 + 4;
	EMU_Write32(S0 + 188,V0); //+ 0xBC
	V1 = 0x80070000;
	V1 = EMU_ReadU32(V1 - 12804); //+ 0xFFFFCDFC
	V0 = S1 >> 16;
	V0 &= 0x3F;
	V0 <<= 24;
	V0 |= V1;
	EMU_Write32(A0,V0);
	V0 = S1 >> 22;
	V1 = V0 & 0x3;
	V0 = 0x1;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(17,0x80039550);
		goto ZZ_39470_E0;
	}
	if (!V1)
	{
		V0 = 0x2;
		ZZ_CLOCKCYCLES(19,0x80039538);
		goto ZZ_39470_C8;
	}
	V0 = 0x2;
	if (V1 == V0)
	{
		V0 = S2 & 0x4;
		ZZ_CLOCKCYCLES(21,0x80039568);
		goto ZZ_39470_F8;
	}
	V0 = S2 & 0x4;
	ZZ_CLOCKCYCLES(23,0x8003957C);
	goto ZZ_39470_10C;
ZZ_39470_C8:
	V0 = EMU_ReadU32(S0 + 120); //+ 0x78
	if ((int32_t)V0 >= 0)
	{
		V0 = -V0;
		ZZ_CLOCKCYCLES(4,0x80039578);
		goto ZZ_39470_108;
	}
	V0 = -V0;
	ZZ_CLOCKCYCLES(6,0x80039574);
	goto ZZ_39470_104;
ZZ_39470_E0:
	V0 = EMU_ReadU32(S0 + 120); //+ 0x78
	if ((int32_t)V0 <= 0)
	{
		V0 = -V0;
		ZZ_CLOCKCYCLES(4,0x80039578);
		goto ZZ_39470_108;
	}
	V0 = -V0;
	ZZ_CLOCKCYCLES(6,0x80039574);
	goto ZZ_39470_104;
ZZ_39470_F8:
	V0 = EMU_ReadU32(S0 + 120); //+ 0x78
	V0 = -V0;
	ZZ_CLOCKCYCLES(3,0x80039574);
ZZ_39470_104:
	EMU_Write32(S0 + 120,V0); //+ 0x78
	ZZ_CLOCKCYCLES(1,0x80039578);
ZZ_39470_108:
	V0 = S2 & 0x4;
	ZZ_CLOCKCYCLES(1,0x8003957C);
ZZ_39470_10C:
	V0 = R0 < V0;
	V0 = -V0;
	V1 = -255;
	V0 &= V1;
	RA = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(11);
	ZZ_JUMPREGISTER(0x8003A294,ZZ_3A234_60);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80039470,ZZ_39470);
ZZ_MARK(0x80039474);
ZZ_MARK(0x80039478);
ZZ_MARK(0x8003947C);
ZZ_MARK(0x80039480);
ZZ_MARK(0x80039484);
ZZ_MARK(0x80039488);
ZZ_MARK(0x8003948C);
ZZ_MARK(0x80039490);
ZZ_MARK(0x80039494);
ZZ_MARK(0x80039498);
ZZ_MARK(0x8003949C);
ZZ_MARK(0x800394A0);
ZZ_MARK(0x800394A4);
ZZ_MARK(0x800394A8);
ZZ_MARK(0x800394AC);
ZZ_MARK(0x800394B0);
ZZ_MARK(0x800394B4);
ZZ_MARK(0x800394B8);
ZZ_MARK(0x800394BC);
ZZ_MARK(0x800394C0);
ZZ_MARK_TARGET(0x800394C4,ZZ_39470_54);
ZZ_MARK(0x800394C8);
ZZ_MARK(0x800394CC);
ZZ_MARK(0x800394D0);
ZZ_MARK_TARGET(0x800394D4,ZZ_39470_64);
ZZ_MARK(0x800394D8);
ZZ_MARK_TARGET(0x800394DC,ZZ_39470_6C);
ZZ_MARK(0x800394E0);
ZZ_MARK(0x800394E4);
ZZ_MARK(0x800394E8);
ZZ_MARK(0x800394EC);
ZZ_MARK(0x800394F0);
ZZ_MARK(0x800394F4);
ZZ_MARK(0x800394F8);
ZZ_MARK(0x800394FC);
ZZ_MARK(0x80039500);
ZZ_MARK(0x80039504);
ZZ_MARK(0x80039508);
ZZ_MARK(0x8003950C);
ZZ_MARK(0x80039510);
ZZ_MARK(0x80039514);
ZZ_MARK(0x80039518);
ZZ_MARK(0x8003951C);
ZZ_MARK(0x80039520);
ZZ_MARK(0x80039524);
ZZ_MARK(0x80039528);
ZZ_MARK(0x8003952C);
ZZ_MARK(0x80039530);
ZZ_MARK(0x80039534);
ZZ_MARK_TARGET(0x80039538,ZZ_39470_C8);
ZZ_MARK(0x8003953C);
ZZ_MARK(0x80039540);
ZZ_MARK(0x80039544);
ZZ_MARK(0x80039548);
ZZ_MARK(0x8003954C);
ZZ_MARK_TARGET(0x80039550,ZZ_39470_E0);
ZZ_MARK(0x80039554);
ZZ_MARK(0x80039558);
ZZ_MARK(0x8003955C);
ZZ_MARK(0x80039560);
ZZ_MARK(0x80039564);
ZZ_MARK_TARGET(0x80039568,ZZ_39470_F8);
ZZ_MARK(0x8003956C);
ZZ_MARK(0x80039570);
ZZ_MARK_TARGET(0x80039574,ZZ_39470_104);
ZZ_MARK_TARGET(0x80039578,ZZ_39470_108);
ZZ_MARK_TARGET(0x8003957C,ZZ_39470_10C);
ZZ_MARK(0x80039580);
ZZ_MARK(0x80039584);
ZZ_MARK(0x80039588);
ZZ_MARK(0x8003958C);
ZZ_MARK(0x80039590);
ZZ_MARK(0x80039594);
ZZ_MARK(0x80039598);
ZZ_MARK(0x8003959C);
ZZ_MARK(0x800395A0);
ZZ_MARK(0x800395A4);
