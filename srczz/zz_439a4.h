#ifdef ZZ_INCLUDE_CODE
ZZ_439A4:
	SP -= 40;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = A0;
	EMU_Write32(SP + 24,S2); //+ 0x18
	S2 = A1;
	EMU_Write32(SP + 28,S3); //+ 0x1C
	S3 = A2;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = 0x3;
	EMU_Write32(SP + 32,S4); //+ 0x20
	S4 = -1;
	EMU_Write32(SP + 36,RA); //+ 0x24
	A0 = S2;
	ZZ_CLOCKCYCLES(13,0x800439D8);
ZZ_439A4_34:
	A1 = S1;
	RA = 0x800439E4; //ZZ_439A4_40
	A2 = S3;
	ZZ_CLOCKCYCLES(3,0x80045518);
	goto ZZ_45518;
ZZ_439A4_40:
	if (V0)
	{
		S0 -= 1;
		ZZ_CLOCKCYCLES(2,0x800439F4);
		goto ZZ_439A4_50;
	}
	S0 -= 1;
	V0 = 0x1;
	ZZ_CLOCKCYCLES(4,0x80043A00);
	goto ZZ_439A4_5C;
ZZ_439A4_50:
	if (S0 != S4)
	{
		A0 = S2;
		ZZ_CLOCKCYCLES(2,0x800439D8);
		goto ZZ_439A4_34;
	}
	A0 = S2;
	V0 = R0;
	ZZ_CLOCKCYCLES(3,0x80043A00);
ZZ_439A4_5C:
	RA = EMU_ReadU32(SP + 36); //+ 0x24
	S4 = EMU_ReadU32(SP + 32); //+ 0x20
	S3 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 40;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(9);
	ZZ_JUMPREGISTER(0x80015C8C,ZZ_15B58_134);
	ZZ_JUMPREGISTER(0x8002F920,ZZ_2F8C4_5C);
	ZZ_JUMPREGISTER(0x8002F9A0,ZZ_2F8C4_DC);
	ZZ_JUMPREGISTER(0x80013F58,ZZ_13D48_210);
	ZZ_JUMPREGISTER(0x8002FAE8,ZZ_2F8C4_224);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800439A4,0x800439D8,ZZ_439A4);
ZZ_MARK_TARGET(0x800439D8,0x800439E4,ZZ_439A4_34);
ZZ_MARK_TARGET(0x800439E4,0x800439F4,ZZ_439A4_40);
ZZ_MARK_TARGET(0x800439F4,0x80043A00,ZZ_439A4_50);
ZZ_MARK_TARGET(0x80043A00,0x80043A24,ZZ_439A4_5C);
