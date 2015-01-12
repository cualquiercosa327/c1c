#ifdef ZZ_INCLUDE_CODE
ZZ_1A040:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 14056); //+ 0x36E8
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	V1 = EMU_ReadU32(V0 + 20); //+ 0x14
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 3036); //+ 0xBDC
	A0 = 0x1F800000;
	AT = 0x1F800000;
	EMU_Write32(AT + 80,V0); //+ 0x50
	V0 = V1 < 121;
	if (V0)
	{
		A0 |= 0x54;
		ZZ_CLOCKCYCLES(13,0x8001A078);
		goto ZZ_1A040_38;
	}
	A0 |= 0x54;
	V1 = 0x78;
	ZZ_CLOCKCYCLES(14,0x8001A078);
ZZ_1A040_38:
	A1 = 0x1F800000;
	A1 |= 0x60;
	V0 = 0x80070000;
	V0 -= 12792;
	EMU_Write32(A0,V1);
	A0 = 0x80060000;
	A0 -= 14420;
	A2 = 0x80060000;
	A2 -= 14104;
	A2 = A2 - A0;
	AT = 0x1F800000;
	EMU_Write32(AT + 88,V0); //+ 0x58
	V0 = A2 >> 31;
	A2 += V0;
	RA = 0x8001A0B8; //ZZ_1A040_78
	A2 = (int32_t)A2 >> 1;
	ZZ_CLOCKCYCLES(16,0x8003BBD8);
	goto ZZ_3BBD8;
ZZ_1A040_78:
	V0 = 0x1F800000;
	V0 |= 0x60;
	AT = 0x1F800000;
	EMU_Write32(AT + 92,V0); //+ 0x5C
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x8001C428,ZZ_1C3D4_54);
	ZZ_JUMPREGISTER(0x8001E1D4,ZZ_1D860_974);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001A040,ZZ_1A040);
ZZ_MARK(0x8001A044);
ZZ_MARK(0x8001A048);
ZZ_MARK(0x8001A04C);
ZZ_MARK(0x8001A050);
ZZ_MARK(0x8001A054);
ZZ_MARK(0x8001A058);
ZZ_MARK(0x8001A05C);
ZZ_MARK(0x8001A060);
ZZ_MARK(0x8001A064);
ZZ_MARK(0x8001A068);
ZZ_MARK(0x8001A06C);
ZZ_MARK(0x8001A070);
ZZ_MARK(0x8001A074);
ZZ_MARK_TARGET(0x8001A078,ZZ_1A040_38);
ZZ_MARK(0x8001A07C);
ZZ_MARK(0x8001A080);
ZZ_MARK(0x8001A084);
ZZ_MARK(0x8001A088);
ZZ_MARK(0x8001A08C);
ZZ_MARK(0x8001A090);
ZZ_MARK(0x8001A094);
ZZ_MARK(0x8001A098);
ZZ_MARK(0x8001A09C);
ZZ_MARK(0x8001A0A0);
ZZ_MARK(0x8001A0A4);
ZZ_MARK(0x8001A0A8);
ZZ_MARK(0x8001A0AC);
ZZ_MARK(0x8001A0B0);
ZZ_MARK(0x8001A0B4);
ZZ_MARK_TARGET(0x8001A0B8,ZZ_1A040_78);
ZZ_MARK(0x8001A0BC);
ZZ_MARK(0x8001A0C0);
ZZ_MARK(0x8001A0C4);
ZZ_MARK(0x8001A0C8);
ZZ_MARK(0x8001A0CC);
ZZ_MARK(0x8001A0D0);
ZZ_MARK(0x8001A0D4);
