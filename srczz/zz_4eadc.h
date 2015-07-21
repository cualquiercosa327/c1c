#ifdef ZZ_INCLUDE_CODE
ZZ_4EADC:
	A3 = A0;
	V1 = 0x80060000;
	V1 = EMU_ReadU8(V1 - 6817); //+ 0xFFFFE55F
	V0 = 0x80060000;
	V0 = EMU_ReadU8(V0 - 6812); //+ 0xFFFFE564
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 12316); //+ 0xFFFFCFE4
	V1 <<= 4;
	V0 += V1;
	V0 <<= 5;
	V1 = V0 + A0;
	V0 = EMU_ReadU8(V1 + 5); //+ 0x5
	A1 &= 0xFFFF;
	V0 += A1;
	if ((int32_t)V0 >= 0)
	{
		A2 = R0;
		ZZ_CLOCKCYCLES(16,0x8004EB20);
		goto ZZ_4EADC_44;
	}
	A2 = R0;
	V0 += 7;
	ZZ_CLOCKCYCLES(17,0x8004EB20);
ZZ_4EADC_44:
	A1 = (int32_t)V0 >> 3;
	V0 = (int32_t)A1 < 16;
	if (V0)
	{
		A0 = A1;
		ZZ_CLOCKCYCLES(4,0x8004EB38);
		goto ZZ_4EADC_5C;
	}
	A0 = A1;
	A2 = 0x1;
	A0 = A1 - 16;
	ZZ_CLOCKCYCLES(6,0x8004EB38);
ZZ_4EADC_5C:
	V1 = EMU_ReadU8(V1 + 4); //+ 0x4
	V0 = A3 + 60;
	V0 = V0 - V1;
	V0 += A2;
	V0 <<= 16;
	V0 = (int32_t)V0 >> 16;
	V1 = 0xC;
	EMU_SDivide(V0,V1);
	if (V1)
	{
		ZZ_CLOCKCYCLES(10,0x8004EB64);
		goto ZZ_4EADC_88;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(11,0x8004EB64);
ZZ_4EADC_88:
	AT = -1;
	if (V1 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x8004EB7C);
		goto ZZ_4EADC_A0;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x8004EB7C);
		goto ZZ_4EADC_A0;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x8004EB7C);
ZZ_4EADC_A0:
	V0 = LO;
	V1 = HI;
	A0 <<= 16;
	A0 = (int32_t)A0 >> 16;
	V1 <<= 4;
	V1 += A0;
	V1 <<= 1;
	V0 -= 5;
	AT = 0x80050000;
	AT += V1;
	V1 = EMU_ReadU16(AT + 25208); //+ 0x6278
	V0 <<= 16;
	V0 = (int32_t)V0 >> 16;
	if ((int32_t)V0 <= 0)
	{
		ZZ_CLOCKCYCLES(15,0x8004EBC0);
		goto ZZ_4EADC_E4;
	}
	V1 <<= V0;
	ZZ_CLOCKCYCLES(17,0x8004EBD4);
	goto ZZ_4EADC_F8;
ZZ_4EADC_E4:
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(2,0x8004EBD4);
		goto ZZ_4EADC_F8;
	}
	V1 &= 0xFFFF;
	V0 = -V0;
	V1 = (int32_t)V1 >> V0;
	ZZ_CLOCKCYCLES(5,0x8004EBD4);
ZZ_4EADC_F8:
	ZZ_JUMPREGISTER_BEGIN(RA);
	V0 = V1 & 0xFFFF;
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x8004F860,ZZ_4F680_1E0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004EADC,0x8004EB20,ZZ_4EADC);
ZZ_MARK_TARGET(0x8004EB20,0x8004EB38,ZZ_4EADC_44);
ZZ_MARK_TARGET(0x8004EB38,0x8004EB64,ZZ_4EADC_5C);
ZZ_MARK_TARGET(0x8004EB64,0x8004EB7C,ZZ_4EADC_88);
ZZ_MARK_TARGET(0x8004EB7C,0x8004EBC0,ZZ_4EADC_A0);
ZZ_MARK_TARGET(0x8004EBC0,0x8004EBD4,ZZ_4EADC_E4);
ZZ_MARK_TARGET(0x8004EBD4,0x8004EBDC,ZZ_4EADC_F8);