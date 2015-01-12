#ifdef ZZ_INCLUDE_CODE
ZZ_4A1A4:
	V1 = A0 & 0xFFFF;
	V0 = (int32_t)V1 < 3;
	if (!V0)
	{
		V0 = 1;
		ZZ_CLOCKCYCLES(4,0x8004A1D0);
		goto ZZ_4A1A4_2C;
	}
	V0 = 1;
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 12828); //+ 0xFFFFCDE4
	V1 <<= 4;
	V1 += A0;
	EMU_Write16(V1,R0);
	ZZ_CLOCKCYCLES(11,0x8004A1D4);
	goto ZZ_4A1A4_30;
ZZ_4A1A4_2C:
	V0 = R0;
	ZZ_CLOCKCYCLES(1,0x8004A1D4);
ZZ_4A1A4_30:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80055034,ZZ_54E64_1D0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004A1A4,ZZ_4A1A4);
ZZ_MARK(0x8004A1A8);
ZZ_MARK(0x8004A1AC);
ZZ_MARK(0x8004A1B0);
ZZ_MARK(0x8004A1B4);
ZZ_MARK(0x8004A1B8);
ZZ_MARK(0x8004A1BC);
ZZ_MARK(0x8004A1C0);
ZZ_MARK(0x8004A1C4);
ZZ_MARK(0x8004A1C8);
ZZ_MARK(0x8004A1CC);
ZZ_MARK_TARGET(0x8004A1D0,ZZ_4A1A4_2C);
ZZ_MARK_TARGET(0x8004A1D4,ZZ_4A1A4_30);
ZZ_MARK(0x8004A1D8);
