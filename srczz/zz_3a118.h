#ifdef ZZ_INCLUDE_CODE
ZZ_3A118:
	A0 <<= 20;
	if ((int32_t)A0 < 0)
	{
		A0 <<= 1;
		ZZ_CLOCKCYCLES(3,0x8003A154);
		goto ZZ_3A118_3C;
	}
	A0 <<= 1;
	if ((int32_t)A0 < 0)
	{
		A0 >>= 19;
		ZZ_CLOCKCYCLES(5,0x8003A140);
		goto ZZ_3A118_28;
	}
	A0 >>= 19;
	A0 &= 0xFFC;
	V0 = S4 + A0;
	V0 = EMU_ReadU32(V0);
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(10);
	ZZ_JUMPREGISTER(0x8003A374,ZZ_3A2AC_C8);
	ZZ_JUMPREGISTER(0x8003A398,ZZ_3A2AC_EC);
	ZZ_JUMPREGISTER(0x8003A3BC,ZZ_3A2AC_110);
	ZZ_JUMPREGISTER(0x8003A3E4,ZZ_3A2AC_138);
	ZZ_JUMPREGISTER(0x8003A4A0,ZZ_3A2AC_1F4);
	ZZ_JUMPREGISTER(0x8003A454,ZZ_3A2AC_1A8);
	ZZ_JUMPREGISTER(0x8003A47C,ZZ_3A2AC_1D0);
	ZZ_JUMPREGISTER(0x8003A580,ZZ_3A2AC_2D4);
	ZZ_JUMPREGISTER(0x8003A4C8,ZZ_3A2AC_21C);
	ZZ_JUMPREGISTER(0x8003A4EC,ZZ_3A2AC_240);
	ZZ_JUMPREGISTER(0x8003A514,ZZ_3A2AC_268);
	ZZ_JUMPREGISTER(0x8003A538,ZZ_3A2AC_28C);
	ZZ_JUMPREGISTER(0x8003A40C,ZZ_3A2AC_160);
	ZZ_JUMPREGISTER(0x8003A5A4,ZZ_3A2AC_2F8);
	ZZ_JUMPREGISTER(0x8003A5C8,ZZ_3A2AC_31C);
	ZZ_JUMPREGISTER(0x8003A5F4,ZZ_3A2AC_348);
	ZZ_JUMPREGISTER(0x8003A660,ZZ_3A2AC_3B4);
	ZZ_JUMPREGISTER(0x8003A434,ZZ_3A2AC_188);
	ZZ_JUMPREGISTER(0x8003A69C,ZZ_3A2AC_3F0);
	ZZ_JUMPREGISTER(0x8003A560,ZZ_3A2AC_2B4);
	ZZ_JUMPREGISTER(0x8003A788,ZZ_3A2AC_4DC);
	ZZ_JUMPREGISTER(0x8003A82C,ZZ_3A2AC_580);
	ZZ_JUMPREGISTER(0x8003A8B8,ZZ_3A2AC_60C);
	ZZ_JUMPREGISTER(0x8003A8E0,ZZ_3A2AC_634);
	ZZ_JUMPREGISTER(0x8003ACE4,ZZ_3AC50_94);
	ZZ_JUMPREGISTER(0x8003AB3C,ZZ_3AA64_D8);
	ZZ_JUMPREGISTER(0x8003AB68,ZZ_3AA64_104);
	ZZ_JUMPREGISTER(0x8003ABB0,ZZ_3AA64_14C);
	ZZ_JUMPREGISTER(0x8003AC10,ZZ_3AA64_1AC);
	ZZ_JUMPREGISTER(0x8003AC34,ZZ_3AA64_1D0);
	ZZ_JUMPREGISTER(0x8003ACB4,ZZ_3AC50_64);
	ZZ_JUMPREGISTER(0x8003AE04,ZZ_3AC50_1B4);
	ZZ_JUMPREGISTER(0x8003ABE0,ZZ_3AA64_17C);
	ZZ_JUMPREGISTER(0x8003A7D4,ZZ_3A2AC_528);
	ZZ_JUMPREGISTER(0x8003A88C,ZZ_3A2AC_5E0);
	ZZ_JUMPREGISTER(0x8003A380,ZZ_3A2AC_D4);
	ZZ_JUMPREGISTER(0x8003A3A4,ZZ_3A2AC_F8);
	ZZ_JUMPREGISTER(0x8003A3C8,ZZ_3A2AC_11C);
	ZZ_JUMPREGISTER(0x8003A3F0,ZZ_3A2AC_144);
	ZZ_JUMPREGISTER(0x8003A4AC,ZZ_3A2AC_200);
	ZZ_JUMPREGISTER(0x8003A460,ZZ_3A2AC_1B4);
	ZZ_JUMPREGISTER(0x8003A488,ZZ_3A2AC_1DC);
	ZZ_JUMPREGISTER(0x8003A58C,ZZ_3A2AC_2E0);
	ZZ_JUMPREGISTER(0x8003A4D4,ZZ_3A2AC_228);
	ZZ_JUMPREGISTER(0x8003A4F8,ZZ_3A2AC_24C);
	ZZ_JUMPREGISTER(0x8003A520,ZZ_3A2AC_274);
	ZZ_JUMPREGISTER(0x8003A544,ZZ_3A2AC_298);
	ZZ_JUMPREGISTER(0x8003A418,ZZ_3A2AC_16C);
	ZZ_JUMPREGISTER(0x8003A5B0,ZZ_3A2AC_304);
	ZZ_JUMPREGISTER(0x8003A5D4,ZZ_3A2AC_328);
	ZZ_JUMPREGISTER(0x8003A600,ZZ_3A2AC_354);
	ZZ_JUMPREGISTER(0x8003A6A8,ZZ_3A2AC_3FC);
	ZZ_JUMPREGISTER(0x8003A838,ZZ_3A2AC_58C);
	ZZ_JUMPREGISTER(0x8003A8EC,ZZ_3A2AC_640);
	ZZ_JUMPREGISTER(0x8003ACF0,ZZ_3AC50_A0);
	ZZ_JUMPREGISTER(0x8003ABBC,ZZ_3AA64_158);
	ZZ_JUMPREGISTER(0x8003ABEC,ZZ_3AA64_188);
	ZZ_JUMPREGISTER(0x8003A6DC,ZZ_3A2AC_430);
	ZZ_JUMPREGISTER(0x8003A7E0,ZZ_3A2AC_534);
	ZZ_JUMPREGISTER(0x8003A898,ZZ_3A2AC_5EC);
	ZZ_JUMPREGISTER(0x8003AA84,ZZ_3AA64_20);
	ZZ_JUMPREGISTER(0x8003A938,ZZ_3A918_20);
	ZZ_JUMPREGISTER(0x8003A9D0,ZZ_3A9B0_20);
	ZZ_JUMPREGISTER(0x8003A964,ZZ_3A918_4C);
	ZZ_JUMPREGISTER(0x8003A9F0,ZZ_3A9B0_40);
	ZZ_JUMPREGISTER_END();
ZZ_3A118_28:
	A0 &= 0xFFC;
	V0 = S3 + A0;
	V0 = EMU_ReadU32(V0);
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x8003A374,ZZ_3A2AC_C8);
	ZZ_JUMPREGISTER(0x8003A398,ZZ_3A2AC_EC);
	ZZ_JUMPREGISTER(0x8003A3BC,ZZ_3A2AC_110);
	ZZ_JUMPREGISTER(0x8003A3E4,ZZ_3A2AC_138);
	ZZ_JUMPREGISTER(0x8003A4A0,ZZ_3A2AC_1F4);
	ZZ_JUMPREGISTER(0x8003A454,ZZ_3A2AC_1A8);
	ZZ_JUMPREGISTER(0x8003A47C,ZZ_3A2AC_1D0);
	ZZ_JUMPREGISTER(0x8003A580,ZZ_3A2AC_2D4);
	ZZ_JUMPREGISTER(0x8003A4C8,ZZ_3A2AC_21C);
	ZZ_JUMPREGISTER(0x8003A4EC,ZZ_3A2AC_240);
	ZZ_JUMPREGISTER(0x8003A514,ZZ_3A2AC_268);
	ZZ_JUMPREGISTER(0x8003A538,ZZ_3A2AC_28C);
	ZZ_JUMPREGISTER(0x8003A40C,ZZ_3A2AC_160);
	ZZ_JUMPREGISTER(0x8003A5A4,ZZ_3A2AC_2F8);
	ZZ_JUMPREGISTER(0x8003A5C8,ZZ_3A2AC_31C);
	ZZ_JUMPREGISTER(0x8003A5F4,ZZ_3A2AC_348);
	ZZ_JUMPREGISTER(0x8003A660,ZZ_3A2AC_3B4);
	ZZ_JUMPREGISTER(0x8003A434,ZZ_3A2AC_188);
	ZZ_JUMPREGISTER(0x8003A69C,ZZ_3A2AC_3F0);
	ZZ_JUMPREGISTER(0x8003A560,ZZ_3A2AC_2B4);
	ZZ_JUMPREGISTER(0x8003A788,ZZ_3A2AC_4DC);
	ZZ_JUMPREGISTER(0x8003A82C,ZZ_3A2AC_580);
	ZZ_JUMPREGISTER(0x8003A8B8,ZZ_3A2AC_60C);
	ZZ_JUMPREGISTER(0x8003A8E0,ZZ_3A2AC_634);
	ZZ_JUMPREGISTER(0x8003ACE4,ZZ_3AC50_94);
	ZZ_JUMPREGISTER(0x8003AB3C,ZZ_3AA64_D8);
	ZZ_JUMPREGISTER(0x8003AB68,ZZ_3AA64_104);
	ZZ_JUMPREGISTER(0x8003ABB0,ZZ_3AA64_14C);
	ZZ_JUMPREGISTER(0x8003AC10,ZZ_3AA64_1AC);
	ZZ_JUMPREGISTER(0x8003AC34,ZZ_3AA64_1D0);
	ZZ_JUMPREGISTER(0x8003ACB4,ZZ_3AC50_64);
	ZZ_JUMPREGISTER(0x8003AE04,ZZ_3AC50_1B4);
	ZZ_JUMPREGISTER(0x8003ABE0,ZZ_3AA64_17C);
	ZZ_JUMPREGISTER(0x8003A7D4,ZZ_3A2AC_528);
	ZZ_JUMPREGISTER(0x8003A88C,ZZ_3A2AC_5E0);
	ZZ_JUMPREGISTER(0x8003A380,ZZ_3A2AC_D4);
	ZZ_JUMPREGISTER(0x8003A3A4,ZZ_3A2AC_F8);
	ZZ_JUMPREGISTER(0x8003A3C8,ZZ_3A2AC_11C);
	ZZ_JUMPREGISTER(0x8003A3F0,ZZ_3A2AC_144);
	ZZ_JUMPREGISTER(0x8003A4AC,ZZ_3A2AC_200);
	ZZ_JUMPREGISTER(0x8003A460,ZZ_3A2AC_1B4);
	ZZ_JUMPREGISTER(0x8003A488,ZZ_3A2AC_1DC);
	ZZ_JUMPREGISTER(0x8003A58C,ZZ_3A2AC_2E0);
	ZZ_JUMPREGISTER(0x8003A4D4,ZZ_3A2AC_228);
	ZZ_JUMPREGISTER(0x8003A4F8,ZZ_3A2AC_24C);
	ZZ_JUMPREGISTER(0x8003A520,ZZ_3A2AC_274);
	ZZ_JUMPREGISTER(0x8003A544,ZZ_3A2AC_298);
	ZZ_JUMPREGISTER(0x8003A418,ZZ_3A2AC_16C);
	ZZ_JUMPREGISTER(0x8003A5B0,ZZ_3A2AC_304);
	ZZ_JUMPREGISTER(0x8003A5D4,ZZ_3A2AC_328);
	ZZ_JUMPREGISTER(0x8003A600,ZZ_3A2AC_354);
	ZZ_JUMPREGISTER(0x8003A6A8,ZZ_3A2AC_3FC);
	ZZ_JUMPREGISTER(0x8003A838,ZZ_3A2AC_58C);
	ZZ_JUMPREGISTER(0x8003A8EC,ZZ_3A2AC_640);
	ZZ_JUMPREGISTER(0x8003ACF0,ZZ_3AC50_A0);
	ZZ_JUMPREGISTER(0x8003ABBC,ZZ_3AA64_158);
	ZZ_JUMPREGISTER(0x8003ABEC,ZZ_3AA64_188);
	ZZ_JUMPREGISTER(0x8003A6DC,ZZ_3A2AC_430);
	ZZ_JUMPREGISTER(0x8003A7E0,ZZ_3A2AC_534);
	ZZ_JUMPREGISTER(0x8003A898,ZZ_3A2AC_5EC);
	ZZ_JUMPREGISTER(0x8003AA84,ZZ_3AA64_20);
	ZZ_JUMPREGISTER(0x8003A938,ZZ_3A918_20);
	ZZ_JUMPREGISTER(0x8003A9D0,ZZ_3A9B0_20);
	ZZ_JUMPREGISTER(0x8003A964,ZZ_3A918_4C);
	ZZ_JUMPREGISTER(0x8003A9F0,ZZ_3A9B0_40);
	ZZ_JUMPREGISTER_END();
ZZ_3A118_3C:
	if ((int32_t)A0 < 0)
	{
		A0 <<= 1;
		ZZ_CLOCKCYCLES(2,0x8003A1B0);
		goto ZZ_3A118_98;
	}
	A0 <<= 1;
	if ((int32_t)A0 < 0)
	{
		A0 <<= 1;
		ZZ_CLOCKCYCLES(4,0x8003A16C);
		goto ZZ_3A118_54;
	}
	A0 <<= 1;
	ZZ_JUMPREGISTER_BEGIN(RA);
	V0 = (int32_t)A0 >> 15;
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x8003A374,ZZ_3A2AC_C8);
	ZZ_JUMPREGISTER(0x8003A398,ZZ_3A2AC_EC);
	ZZ_JUMPREGISTER(0x8003A3BC,ZZ_3A2AC_110);
	ZZ_JUMPREGISTER(0x8003A3E4,ZZ_3A2AC_138);
	ZZ_JUMPREGISTER(0x8003A4A0,ZZ_3A2AC_1F4);
	ZZ_JUMPREGISTER(0x8003A454,ZZ_3A2AC_1A8);
	ZZ_JUMPREGISTER(0x8003A47C,ZZ_3A2AC_1D0);
	ZZ_JUMPREGISTER(0x8003A580,ZZ_3A2AC_2D4);
	ZZ_JUMPREGISTER(0x8003A4C8,ZZ_3A2AC_21C);
	ZZ_JUMPREGISTER(0x8003A4EC,ZZ_3A2AC_240);
	ZZ_JUMPREGISTER(0x8003A514,ZZ_3A2AC_268);
	ZZ_JUMPREGISTER(0x8003A538,ZZ_3A2AC_28C);
	ZZ_JUMPREGISTER(0x8003A40C,ZZ_3A2AC_160);
	ZZ_JUMPREGISTER(0x8003A5A4,ZZ_3A2AC_2F8);
	ZZ_JUMPREGISTER(0x8003A5C8,ZZ_3A2AC_31C);
	ZZ_JUMPREGISTER(0x8003A5F4,ZZ_3A2AC_348);
	ZZ_JUMPREGISTER(0x8003A660,ZZ_3A2AC_3B4);
	ZZ_JUMPREGISTER(0x8003A434,ZZ_3A2AC_188);
	ZZ_JUMPREGISTER(0x8003A69C,ZZ_3A2AC_3F0);
	ZZ_JUMPREGISTER(0x8003A560,ZZ_3A2AC_2B4);
	ZZ_JUMPREGISTER(0x8003A788,ZZ_3A2AC_4DC);
	ZZ_JUMPREGISTER(0x8003A82C,ZZ_3A2AC_580);
	ZZ_JUMPREGISTER(0x8003A8B8,ZZ_3A2AC_60C);
	ZZ_JUMPREGISTER(0x8003A8E0,ZZ_3A2AC_634);
	ZZ_JUMPREGISTER(0x8003ACE4,ZZ_3AC50_94);
	ZZ_JUMPREGISTER(0x8003AB3C,ZZ_3AA64_D8);
	ZZ_JUMPREGISTER(0x8003AB68,ZZ_3AA64_104);
	ZZ_JUMPREGISTER(0x8003ABB0,ZZ_3AA64_14C);
	ZZ_JUMPREGISTER(0x8003AC10,ZZ_3AA64_1AC);
	ZZ_JUMPREGISTER(0x8003AC34,ZZ_3AA64_1D0);
	ZZ_JUMPREGISTER(0x8003ACB4,ZZ_3AC50_64);
	ZZ_JUMPREGISTER(0x8003AE04,ZZ_3AC50_1B4);
	ZZ_JUMPREGISTER(0x8003ABE0,ZZ_3AA64_17C);
	ZZ_JUMPREGISTER(0x8003A7D4,ZZ_3A2AC_528);
	ZZ_JUMPREGISTER(0x8003A88C,ZZ_3A2AC_5E0);
	ZZ_JUMPREGISTER(0x8003A380,ZZ_3A2AC_D4);
	ZZ_JUMPREGISTER(0x8003A3A4,ZZ_3A2AC_F8);
	ZZ_JUMPREGISTER(0x8003A3C8,ZZ_3A2AC_11C);
	ZZ_JUMPREGISTER(0x8003A3F0,ZZ_3A2AC_144);
	ZZ_JUMPREGISTER(0x8003A4AC,ZZ_3A2AC_200);
	ZZ_JUMPREGISTER(0x8003A460,ZZ_3A2AC_1B4);
	ZZ_JUMPREGISTER(0x8003A488,ZZ_3A2AC_1DC);
	ZZ_JUMPREGISTER(0x8003A58C,ZZ_3A2AC_2E0);
	ZZ_JUMPREGISTER(0x8003A4D4,ZZ_3A2AC_228);
	ZZ_JUMPREGISTER(0x8003A4F8,ZZ_3A2AC_24C);
	ZZ_JUMPREGISTER(0x8003A520,ZZ_3A2AC_274);
	ZZ_JUMPREGISTER(0x8003A544,ZZ_3A2AC_298);
	ZZ_JUMPREGISTER(0x8003A418,ZZ_3A2AC_16C);
	ZZ_JUMPREGISTER(0x8003A5B0,ZZ_3A2AC_304);
	ZZ_JUMPREGISTER(0x8003A5D4,ZZ_3A2AC_328);
	ZZ_JUMPREGISTER(0x8003A600,ZZ_3A2AC_354);
	ZZ_JUMPREGISTER(0x8003A6A8,ZZ_3A2AC_3FC);
	ZZ_JUMPREGISTER(0x8003A838,ZZ_3A2AC_58C);
	ZZ_JUMPREGISTER(0x8003A8EC,ZZ_3A2AC_640);
	ZZ_JUMPREGISTER(0x8003ACF0,ZZ_3AC50_A0);
	ZZ_JUMPREGISTER(0x8003ABBC,ZZ_3AA64_158);
	ZZ_JUMPREGISTER(0x8003ABEC,ZZ_3AA64_188);
	ZZ_JUMPREGISTER(0x8003A6DC,ZZ_3A2AC_430);
	ZZ_JUMPREGISTER(0x8003A7E0,ZZ_3A2AC_534);
	ZZ_JUMPREGISTER(0x8003A898,ZZ_3A2AC_5EC);
	ZZ_JUMPREGISTER(0x8003AA84,ZZ_3AA64_20);
	ZZ_JUMPREGISTER(0x8003A938,ZZ_3A918_20);
	ZZ_JUMPREGISTER(0x8003A9D0,ZZ_3A9B0_20);
	ZZ_JUMPREGISTER(0x8003A964,ZZ_3A918_4C);
	ZZ_JUMPREGISTER(0x8003A9F0,ZZ_3A9B0_40);
	ZZ_JUMPREGISTER_END();
ZZ_3A118_54:
	if ((int32_t)A0 < 0)
	{
		A0 <<= 1;
		ZZ_CLOCKCYCLES(2,0x8003A17C);
		goto ZZ_3A118_64;
	}
	A0 <<= 1;
	ZZ_JUMPREGISTER_BEGIN(RA);
	V0 = (int32_t)A0 >> 20;
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x8003A374,ZZ_3A2AC_C8);
	ZZ_JUMPREGISTER(0x8003A398,ZZ_3A2AC_EC);
	ZZ_JUMPREGISTER(0x8003A3BC,ZZ_3A2AC_110);
	ZZ_JUMPREGISTER(0x8003A3E4,ZZ_3A2AC_138);
	ZZ_JUMPREGISTER(0x8003A4A0,ZZ_3A2AC_1F4);
	ZZ_JUMPREGISTER(0x8003A454,ZZ_3A2AC_1A8);
	ZZ_JUMPREGISTER(0x8003A47C,ZZ_3A2AC_1D0);
	ZZ_JUMPREGISTER(0x8003A580,ZZ_3A2AC_2D4);
	ZZ_JUMPREGISTER(0x8003A4C8,ZZ_3A2AC_21C);
	ZZ_JUMPREGISTER(0x8003A4EC,ZZ_3A2AC_240);
	ZZ_JUMPREGISTER(0x8003A514,ZZ_3A2AC_268);
	ZZ_JUMPREGISTER(0x8003A538,ZZ_3A2AC_28C);
	ZZ_JUMPREGISTER(0x8003A40C,ZZ_3A2AC_160);
	ZZ_JUMPREGISTER(0x8003A5A4,ZZ_3A2AC_2F8);
	ZZ_JUMPREGISTER(0x8003A5C8,ZZ_3A2AC_31C);
	ZZ_JUMPREGISTER(0x8003A5F4,ZZ_3A2AC_348);
	ZZ_JUMPREGISTER(0x8003A660,ZZ_3A2AC_3B4);
	ZZ_JUMPREGISTER(0x8003A434,ZZ_3A2AC_188);
	ZZ_JUMPREGISTER(0x8003A69C,ZZ_3A2AC_3F0);
	ZZ_JUMPREGISTER(0x8003A560,ZZ_3A2AC_2B4);
	ZZ_JUMPREGISTER(0x8003A788,ZZ_3A2AC_4DC);
	ZZ_JUMPREGISTER(0x8003A82C,ZZ_3A2AC_580);
	ZZ_JUMPREGISTER(0x8003A8B8,ZZ_3A2AC_60C);
	ZZ_JUMPREGISTER(0x8003A8E0,ZZ_3A2AC_634);
	ZZ_JUMPREGISTER(0x8003ACE4,ZZ_3AC50_94);
	ZZ_JUMPREGISTER(0x8003AB3C,ZZ_3AA64_D8);
	ZZ_JUMPREGISTER(0x8003AB68,ZZ_3AA64_104);
	ZZ_JUMPREGISTER(0x8003ABB0,ZZ_3AA64_14C);
	ZZ_JUMPREGISTER(0x8003AC10,ZZ_3AA64_1AC);
	ZZ_JUMPREGISTER(0x8003AC34,ZZ_3AA64_1D0);
	ZZ_JUMPREGISTER(0x8003ACB4,ZZ_3AC50_64);
	ZZ_JUMPREGISTER(0x8003AE04,ZZ_3AC50_1B4);
	ZZ_JUMPREGISTER(0x8003ABE0,ZZ_3AA64_17C);
	ZZ_JUMPREGISTER(0x8003A7D4,ZZ_3A2AC_528);
	ZZ_JUMPREGISTER(0x8003A88C,ZZ_3A2AC_5E0);
	ZZ_JUMPREGISTER(0x8003A380,ZZ_3A2AC_D4);
	ZZ_JUMPREGISTER(0x8003A3A4,ZZ_3A2AC_F8);
	ZZ_JUMPREGISTER(0x8003A3C8,ZZ_3A2AC_11C);
	ZZ_JUMPREGISTER(0x8003A3F0,ZZ_3A2AC_144);
	ZZ_JUMPREGISTER(0x8003A4AC,ZZ_3A2AC_200);
	ZZ_JUMPREGISTER(0x8003A460,ZZ_3A2AC_1B4);
	ZZ_JUMPREGISTER(0x8003A488,ZZ_3A2AC_1DC);
	ZZ_JUMPREGISTER(0x8003A58C,ZZ_3A2AC_2E0);
	ZZ_JUMPREGISTER(0x8003A4D4,ZZ_3A2AC_228);
	ZZ_JUMPREGISTER(0x8003A4F8,ZZ_3A2AC_24C);
	ZZ_JUMPREGISTER(0x8003A520,ZZ_3A2AC_274);
	ZZ_JUMPREGISTER(0x8003A544,ZZ_3A2AC_298);
	ZZ_JUMPREGISTER(0x8003A418,ZZ_3A2AC_16C);
	ZZ_JUMPREGISTER(0x8003A5B0,ZZ_3A2AC_304);
	ZZ_JUMPREGISTER(0x8003A5D4,ZZ_3A2AC_328);
	ZZ_JUMPREGISTER(0x8003A600,ZZ_3A2AC_354);
	ZZ_JUMPREGISTER(0x8003A6A8,ZZ_3A2AC_3FC);
	ZZ_JUMPREGISTER(0x8003A838,ZZ_3A2AC_58C);
	ZZ_JUMPREGISTER(0x8003A8EC,ZZ_3A2AC_640);
	ZZ_JUMPREGISTER(0x8003ACF0,ZZ_3AC50_A0);
	ZZ_JUMPREGISTER(0x8003ABBC,ZZ_3AA64_158);
	ZZ_JUMPREGISTER(0x8003ABEC,ZZ_3AA64_188);
	ZZ_JUMPREGISTER(0x8003A6DC,ZZ_3A2AC_430);
	ZZ_JUMPREGISTER(0x8003A7E0,ZZ_3A2AC_534);
	ZZ_JUMPREGISTER(0x8003A898,ZZ_3A2AC_5EC);
	ZZ_JUMPREGISTER(0x8003AA84,ZZ_3AA64_20);
	ZZ_JUMPREGISTER(0x8003A938,ZZ_3A918_20);
	ZZ_JUMPREGISTER(0x8003A9D0,ZZ_3A9B0_20);
	ZZ_JUMPREGISTER(0x8003A964,ZZ_3A918_4C);
	ZZ_JUMPREGISTER(0x8003A9F0,ZZ_3A9B0_40);
	ZZ_JUMPREGISTER_END();
ZZ_3A118_64:
	if ((int32_t)A0 < 0)
	{
		A0 <<= 1;
		ZZ_CLOCKCYCLES(2,0x8003A198);
		goto ZZ_3A118_80;
	}
	A0 <<= 1;
	A0 = (int32_t)A0 >> 23;
	V0 = S7 + A0;
	V0 = EMU_ReadU32(V0);
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x8003A374,ZZ_3A2AC_C8);
	ZZ_JUMPREGISTER(0x8003A398,ZZ_3A2AC_EC);
	ZZ_JUMPREGISTER(0x8003A3BC,ZZ_3A2AC_110);
	ZZ_JUMPREGISTER(0x8003A3E4,ZZ_3A2AC_138);
	ZZ_JUMPREGISTER(0x8003A4A0,ZZ_3A2AC_1F4);
	ZZ_JUMPREGISTER(0x8003A454,ZZ_3A2AC_1A8);
	ZZ_JUMPREGISTER(0x8003A47C,ZZ_3A2AC_1D0);
	ZZ_JUMPREGISTER(0x8003A580,ZZ_3A2AC_2D4);
	ZZ_JUMPREGISTER(0x8003A4C8,ZZ_3A2AC_21C);
	ZZ_JUMPREGISTER(0x8003A4EC,ZZ_3A2AC_240);
	ZZ_JUMPREGISTER(0x8003A514,ZZ_3A2AC_268);
	ZZ_JUMPREGISTER(0x8003A538,ZZ_3A2AC_28C);
	ZZ_JUMPREGISTER(0x8003A40C,ZZ_3A2AC_160);
	ZZ_JUMPREGISTER(0x8003A5A4,ZZ_3A2AC_2F8);
	ZZ_JUMPREGISTER(0x8003A5C8,ZZ_3A2AC_31C);
	ZZ_JUMPREGISTER(0x8003A5F4,ZZ_3A2AC_348);
	ZZ_JUMPREGISTER(0x8003A660,ZZ_3A2AC_3B4);
	ZZ_JUMPREGISTER(0x8003A434,ZZ_3A2AC_188);
	ZZ_JUMPREGISTER(0x8003A69C,ZZ_3A2AC_3F0);
	ZZ_JUMPREGISTER(0x8003A560,ZZ_3A2AC_2B4);
	ZZ_JUMPREGISTER(0x8003A788,ZZ_3A2AC_4DC);
	ZZ_JUMPREGISTER(0x8003A82C,ZZ_3A2AC_580);
	ZZ_JUMPREGISTER(0x8003A8B8,ZZ_3A2AC_60C);
	ZZ_JUMPREGISTER(0x8003A8E0,ZZ_3A2AC_634);
	ZZ_JUMPREGISTER(0x8003ACE4,ZZ_3AC50_94);
	ZZ_JUMPREGISTER(0x8003AB3C,ZZ_3AA64_D8);
	ZZ_JUMPREGISTER(0x8003AB68,ZZ_3AA64_104);
	ZZ_JUMPREGISTER(0x8003ABB0,ZZ_3AA64_14C);
	ZZ_JUMPREGISTER(0x8003AC10,ZZ_3AA64_1AC);
	ZZ_JUMPREGISTER(0x8003AC34,ZZ_3AA64_1D0);
	ZZ_JUMPREGISTER(0x8003ACB4,ZZ_3AC50_64);
	ZZ_JUMPREGISTER(0x8003AE04,ZZ_3AC50_1B4);
	ZZ_JUMPREGISTER(0x8003ABE0,ZZ_3AA64_17C);
	ZZ_JUMPREGISTER(0x8003A7D4,ZZ_3A2AC_528);
	ZZ_JUMPREGISTER(0x8003A88C,ZZ_3A2AC_5E0);
	ZZ_JUMPREGISTER(0x8003A380,ZZ_3A2AC_D4);
	ZZ_JUMPREGISTER(0x8003A3A4,ZZ_3A2AC_F8);
	ZZ_JUMPREGISTER(0x8003A3C8,ZZ_3A2AC_11C);
	ZZ_JUMPREGISTER(0x8003A3F0,ZZ_3A2AC_144);
	ZZ_JUMPREGISTER(0x8003A4AC,ZZ_3A2AC_200);
	ZZ_JUMPREGISTER(0x8003A460,ZZ_3A2AC_1B4);
	ZZ_JUMPREGISTER(0x8003A488,ZZ_3A2AC_1DC);
	ZZ_JUMPREGISTER(0x8003A58C,ZZ_3A2AC_2E0);
	ZZ_JUMPREGISTER(0x8003A4D4,ZZ_3A2AC_228);
	ZZ_JUMPREGISTER(0x8003A4F8,ZZ_3A2AC_24C);
	ZZ_JUMPREGISTER(0x8003A520,ZZ_3A2AC_274);
	ZZ_JUMPREGISTER(0x8003A544,ZZ_3A2AC_298);
	ZZ_JUMPREGISTER(0x8003A418,ZZ_3A2AC_16C);
	ZZ_JUMPREGISTER(0x8003A5B0,ZZ_3A2AC_304);
	ZZ_JUMPREGISTER(0x8003A5D4,ZZ_3A2AC_328);
	ZZ_JUMPREGISTER(0x8003A600,ZZ_3A2AC_354);
	ZZ_JUMPREGISTER(0x8003A6A8,ZZ_3A2AC_3FC);
	ZZ_JUMPREGISTER(0x8003A838,ZZ_3A2AC_58C);
	ZZ_JUMPREGISTER(0x8003A8EC,ZZ_3A2AC_640);
	ZZ_JUMPREGISTER(0x8003ACF0,ZZ_3AC50_A0);
	ZZ_JUMPREGISTER(0x8003ABBC,ZZ_3AA64_158);
	ZZ_JUMPREGISTER(0x8003ABEC,ZZ_3AA64_188);
	ZZ_JUMPREGISTER(0x8003A6DC,ZZ_3A2AC_430);
	ZZ_JUMPREGISTER(0x8003A7E0,ZZ_3A2AC_534);
	ZZ_JUMPREGISTER(0x8003A898,ZZ_3A2AC_5EC);
	ZZ_JUMPREGISTER(0x8003AA84,ZZ_3AA64_20);
	ZZ_JUMPREGISTER(0x8003A938,ZZ_3A918_20);
	ZZ_JUMPREGISTER(0x8003A9D0,ZZ_3A9B0_20);
	ZZ_JUMPREGISTER(0x8003A964,ZZ_3A918_4C);
	ZZ_JUMPREGISTER(0x8003A9F0,ZZ_3A9B0_40);
	ZZ_JUMPREGISTER_END();
ZZ_3A118_80:
	A0 <<= 2;
	if ((int32_t)A0 < 0)
	{
		V0 = 1;
		ZZ_CLOCKCYCLES(3,0x8003A1A8);
		goto ZZ_3A118_90;
	}
	V0 = 1;
	V0 = 0;
	ZZ_CLOCKCYCLES(4,0x8003A1A8);
ZZ_3A118_90:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x8003A374,ZZ_3A2AC_C8);
	ZZ_JUMPREGISTER(0x8003A398,ZZ_3A2AC_EC);
	ZZ_JUMPREGISTER(0x8003A3BC,ZZ_3A2AC_110);
	ZZ_JUMPREGISTER(0x8003A3E4,ZZ_3A2AC_138);
	ZZ_JUMPREGISTER(0x8003A4A0,ZZ_3A2AC_1F4);
	ZZ_JUMPREGISTER(0x8003A454,ZZ_3A2AC_1A8);
	ZZ_JUMPREGISTER(0x8003A47C,ZZ_3A2AC_1D0);
	ZZ_JUMPREGISTER(0x8003A580,ZZ_3A2AC_2D4);
	ZZ_JUMPREGISTER(0x8003A4C8,ZZ_3A2AC_21C);
	ZZ_JUMPREGISTER(0x8003A4EC,ZZ_3A2AC_240);
	ZZ_JUMPREGISTER(0x8003A514,ZZ_3A2AC_268);
	ZZ_JUMPREGISTER(0x8003A538,ZZ_3A2AC_28C);
	ZZ_JUMPREGISTER(0x8003A40C,ZZ_3A2AC_160);
	ZZ_JUMPREGISTER(0x8003A5A4,ZZ_3A2AC_2F8);
	ZZ_JUMPREGISTER(0x8003A5C8,ZZ_3A2AC_31C);
	ZZ_JUMPREGISTER(0x8003A5F4,ZZ_3A2AC_348);
	ZZ_JUMPREGISTER(0x8003A660,ZZ_3A2AC_3B4);
	ZZ_JUMPREGISTER(0x8003A434,ZZ_3A2AC_188);
	ZZ_JUMPREGISTER(0x8003A69C,ZZ_3A2AC_3F0);
	ZZ_JUMPREGISTER(0x8003A560,ZZ_3A2AC_2B4);
	ZZ_JUMPREGISTER(0x8003A788,ZZ_3A2AC_4DC);
	ZZ_JUMPREGISTER(0x8003A82C,ZZ_3A2AC_580);
	ZZ_JUMPREGISTER(0x8003A8B8,ZZ_3A2AC_60C);
	ZZ_JUMPREGISTER(0x8003A8E0,ZZ_3A2AC_634);
	ZZ_JUMPREGISTER(0x8003ACE4,ZZ_3AC50_94);
	ZZ_JUMPREGISTER(0x8003AB3C,ZZ_3AA64_D8);
	ZZ_JUMPREGISTER(0x8003AB68,ZZ_3AA64_104);
	ZZ_JUMPREGISTER(0x8003ABB0,ZZ_3AA64_14C);
	ZZ_JUMPREGISTER(0x8003AC10,ZZ_3AA64_1AC);
	ZZ_JUMPREGISTER(0x8003AC34,ZZ_3AA64_1D0);
	ZZ_JUMPREGISTER(0x8003ACB4,ZZ_3AC50_64);
	ZZ_JUMPREGISTER(0x8003AE04,ZZ_3AC50_1B4);
	ZZ_JUMPREGISTER(0x8003ABE0,ZZ_3AA64_17C);
	ZZ_JUMPREGISTER(0x8003A7D4,ZZ_3A2AC_528);
	ZZ_JUMPREGISTER(0x8003A88C,ZZ_3A2AC_5E0);
	ZZ_JUMPREGISTER(0x8003A380,ZZ_3A2AC_D4);
	ZZ_JUMPREGISTER(0x8003A3A4,ZZ_3A2AC_F8);
	ZZ_JUMPREGISTER(0x8003A3C8,ZZ_3A2AC_11C);
	ZZ_JUMPREGISTER(0x8003A3F0,ZZ_3A2AC_144);
	ZZ_JUMPREGISTER(0x8003A4AC,ZZ_3A2AC_200);
	ZZ_JUMPREGISTER(0x8003A460,ZZ_3A2AC_1B4);
	ZZ_JUMPREGISTER(0x8003A488,ZZ_3A2AC_1DC);
	ZZ_JUMPREGISTER(0x8003A58C,ZZ_3A2AC_2E0);
	ZZ_JUMPREGISTER(0x8003A4D4,ZZ_3A2AC_228);
	ZZ_JUMPREGISTER(0x8003A4F8,ZZ_3A2AC_24C);
	ZZ_JUMPREGISTER(0x8003A520,ZZ_3A2AC_274);
	ZZ_JUMPREGISTER(0x8003A544,ZZ_3A2AC_298);
	ZZ_JUMPREGISTER(0x8003A418,ZZ_3A2AC_16C);
	ZZ_JUMPREGISTER(0x8003A5B0,ZZ_3A2AC_304);
	ZZ_JUMPREGISTER(0x8003A5D4,ZZ_3A2AC_328);
	ZZ_JUMPREGISTER(0x8003A600,ZZ_3A2AC_354);
	ZZ_JUMPREGISTER(0x8003A6A8,ZZ_3A2AC_3FC);
	ZZ_JUMPREGISTER(0x8003A838,ZZ_3A2AC_58C);
	ZZ_JUMPREGISTER(0x8003A8EC,ZZ_3A2AC_640);
	ZZ_JUMPREGISTER(0x8003ACF0,ZZ_3AC50_A0);
	ZZ_JUMPREGISTER(0x8003ABBC,ZZ_3AA64_158);
	ZZ_JUMPREGISTER(0x8003ABEC,ZZ_3AA64_188);
	ZZ_JUMPREGISTER(0x8003A6DC,ZZ_3A2AC_430);
	ZZ_JUMPREGISTER(0x8003A7E0,ZZ_3A2AC_534);
	ZZ_JUMPREGISTER(0x8003A898,ZZ_3A2AC_5EC);
	ZZ_JUMPREGISTER(0x8003AA84,ZZ_3AA64_20);
	ZZ_JUMPREGISTER(0x8003A938,ZZ_3A918_20);
	ZZ_JUMPREGISTER(0x8003A9D0,ZZ_3A9B0_20);
	ZZ_JUMPREGISTER(0x8003A964,ZZ_3A918_4C);
	ZZ_JUMPREGISTER(0x8003A9F0,ZZ_3A9B0_40);
	ZZ_JUMPREGISTER_END();
ZZ_3A118_98:
	if ((int32_t)A0 < 0)
	{
		A0 >>= 20;
		ZZ_CLOCKCYCLES(2,0x8003A1E4);
		goto ZZ_3A118_CC;
	}
	A0 >>= 20;
	V0 = A0 >> 6;
	V0 &= 0x1C;
	V0 += S0;
	V0 = EMU_ReadU32(V0 + 64); //+ 0x40
	A0 &= 0xFC;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(9,0x8003A1A8);
		goto ZZ_3A118_90;
	}
	V0 += A0;
	V0 = EMU_ReadU32(V0 + 64); //+ 0x40
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(13);
	ZZ_JUMPREGISTER(0x8003A374,ZZ_3A2AC_C8);
	ZZ_JUMPREGISTER(0x8003A398,ZZ_3A2AC_EC);
	ZZ_JUMPREGISTER(0x8003A3BC,ZZ_3A2AC_110);
	ZZ_JUMPREGISTER(0x8003A3E4,ZZ_3A2AC_138);
	ZZ_JUMPREGISTER(0x8003A4A0,ZZ_3A2AC_1F4);
	ZZ_JUMPREGISTER(0x8003A454,ZZ_3A2AC_1A8);
	ZZ_JUMPREGISTER(0x8003A47C,ZZ_3A2AC_1D0);
	ZZ_JUMPREGISTER(0x8003A580,ZZ_3A2AC_2D4);
	ZZ_JUMPREGISTER(0x8003A4C8,ZZ_3A2AC_21C);
	ZZ_JUMPREGISTER(0x8003A4EC,ZZ_3A2AC_240);
	ZZ_JUMPREGISTER(0x8003A514,ZZ_3A2AC_268);
	ZZ_JUMPREGISTER(0x8003A538,ZZ_3A2AC_28C);
	ZZ_JUMPREGISTER(0x8003A40C,ZZ_3A2AC_160);
	ZZ_JUMPREGISTER(0x8003A5A4,ZZ_3A2AC_2F8);
	ZZ_JUMPREGISTER(0x8003A5C8,ZZ_3A2AC_31C);
	ZZ_JUMPREGISTER(0x8003A5F4,ZZ_3A2AC_348);
	ZZ_JUMPREGISTER(0x8003A660,ZZ_3A2AC_3B4);
	ZZ_JUMPREGISTER(0x8003A434,ZZ_3A2AC_188);
	ZZ_JUMPREGISTER(0x8003A69C,ZZ_3A2AC_3F0);
	ZZ_JUMPREGISTER(0x8003A560,ZZ_3A2AC_2B4);
	ZZ_JUMPREGISTER(0x8003A788,ZZ_3A2AC_4DC);
	ZZ_JUMPREGISTER(0x8003A82C,ZZ_3A2AC_580);
	ZZ_JUMPREGISTER(0x8003A8B8,ZZ_3A2AC_60C);
	ZZ_JUMPREGISTER(0x8003A8E0,ZZ_3A2AC_634);
	ZZ_JUMPREGISTER(0x8003ACE4,ZZ_3AC50_94);
	ZZ_JUMPREGISTER(0x8003AB3C,ZZ_3AA64_D8);
	ZZ_JUMPREGISTER(0x8003AB68,ZZ_3AA64_104);
	ZZ_JUMPREGISTER(0x8003ABB0,ZZ_3AA64_14C);
	ZZ_JUMPREGISTER(0x8003AC10,ZZ_3AA64_1AC);
	ZZ_JUMPREGISTER(0x8003AC34,ZZ_3AA64_1D0);
	ZZ_JUMPREGISTER(0x8003ACB4,ZZ_3AC50_64);
	ZZ_JUMPREGISTER(0x8003AE04,ZZ_3AC50_1B4);
	ZZ_JUMPREGISTER(0x8003ABE0,ZZ_3AA64_17C);
	ZZ_JUMPREGISTER(0x8003A7D4,ZZ_3A2AC_528);
	ZZ_JUMPREGISTER(0x8003A88C,ZZ_3A2AC_5E0);
	ZZ_JUMPREGISTER(0x8003A380,ZZ_3A2AC_D4);
	ZZ_JUMPREGISTER(0x8003A3A4,ZZ_3A2AC_F8);
	ZZ_JUMPREGISTER(0x8003A3C8,ZZ_3A2AC_11C);
	ZZ_JUMPREGISTER(0x8003A3F0,ZZ_3A2AC_144);
	ZZ_JUMPREGISTER(0x8003A4AC,ZZ_3A2AC_200);
	ZZ_JUMPREGISTER(0x8003A460,ZZ_3A2AC_1B4);
	ZZ_JUMPREGISTER(0x8003A488,ZZ_3A2AC_1DC);
	ZZ_JUMPREGISTER(0x8003A58C,ZZ_3A2AC_2E0);
	ZZ_JUMPREGISTER(0x8003A4D4,ZZ_3A2AC_228);
	ZZ_JUMPREGISTER(0x8003A4F8,ZZ_3A2AC_24C);
	ZZ_JUMPREGISTER(0x8003A520,ZZ_3A2AC_274);
	ZZ_JUMPREGISTER(0x8003A544,ZZ_3A2AC_298);
	ZZ_JUMPREGISTER(0x8003A418,ZZ_3A2AC_16C);
	ZZ_JUMPREGISTER(0x8003A5B0,ZZ_3A2AC_304);
	ZZ_JUMPREGISTER(0x8003A5D4,ZZ_3A2AC_328);
	ZZ_JUMPREGISTER(0x8003A600,ZZ_3A2AC_354);
	ZZ_JUMPREGISTER(0x8003A6A8,ZZ_3A2AC_3FC);
	ZZ_JUMPREGISTER(0x8003A838,ZZ_3A2AC_58C);
	ZZ_JUMPREGISTER(0x8003A8EC,ZZ_3A2AC_640);
	ZZ_JUMPREGISTER(0x8003ACF0,ZZ_3AC50_A0);
	ZZ_JUMPREGISTER(0x8003ABBC,ZZ_3AA64_158);
	ZZ_JUMPREGISTER(0x8003ABEC,ZZ_3AA64_188);
	ZZ_JUMPREGISTER(0x8003A6DC,ZZ_3A2AC_430);
	ZZ_JUMPREGISTER(0x8003A7E0,ZZ_3A2AC_534);
	ZZ_JUMPREGISTER(0x8003A898,ZZ_3A2AC_5EC);
	ZZ_JUMPREGISTER(0x8003AA84,ZZ_3AA64_20);
	ZZ_JUMPREGISTER(0x8003A938,ZZ_3A918_20);
	ZZ_JUMPREGISTER(0x8003A9D0,ZZ_3A9B0_20);
	ZZ_JUMPREGISTER(0x8003A964,ZZ_3A918_4C);
	ZZ_JUMPREGISTER(0x8003A9F0,ZZ_3A9B0_40);
	ZZ_JUMPREGISTER_END();
ZZ_3A118_CC:
	V0 = A0 - 2172;
	if (V0)
	{
		ZZ_CLOCKCYCLES(3,0x8003A1FC);
		goto ZZ_3A118_E4;
	}
	V0 = EMU_ReadU32(S6 - 4); //+ 0xFFFFFFFC
	ZZ_JUMPREGISTER_BEGIN(RA);
	S6 -= 4;
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x8003A374,ZZ_3A2AC_C8);
	ZZ_JUMPREGISTER(0x8003A398,ZZ_3A2AC_EC);
	ZZ_JUMPREGISTER(0x8003A3BC,ZZ_3A2AC_110);
	ZZ_JUMPREGISTER(0x8003A3E4,ZZ_3A2AC_138);
	ZZ_JUMPREGISTER(0x8003A4A0,ZZ_3A2AC_1F4);
	ZZ_JUMPREGISTER(0x8003A454,ZZ_3A2AC_1A8);
	ZZ_JUMPREGISTER(0x8003A47C,ZZ_3A2AC_1D0);
	ZZ_JUMPREGISTER(0x8003A580,ZZ_3A2AC_2D4);
	ZZ_JUMPREGISTER(0x8003A4C8,ZZ_3A2AC_21C);
	ZZ_JUMPREGISTER(0x8003A4EC,ZZ_3A2AC_240);
	ZZ_JUMPREGISTER(0x8003A514,ZZ_3A2AC_268);
	ZZ_JUMPREGISTER(0x8003A538,ZZ_3A2AC_28C);
	ZZ_JUMPREGISTER(0x8003A40C,ZZ_3A2AC_160);
	ZZ_JUMPREGISTER(0x8003A5A4,ZZ_3A2AC_2F8);
	ZZ_JUMPREGISTER(0x8003A5C8,ZZ_3A2AC_31C);
	ZZ_JUMPREGISTER(0x8003A5F4,ZZ_3A2AC_348);
	ZZ_JUMPREGISTER(0x8003A660,ZZ_3A2AC_3B4);
	ZZ_JUMPREGISTER(0x8003A434,ZZ_3A2AC_188);
	ZZ_JUMPREGISTER(0x8003A69C,ZZ_3A2AC_3F0);
	ZZ_JUMPREGISTER(0x8003A560,ZZ_3A2AC_2B4);
	ZZ_JUMPREGISTER(0x8003A788,ZZ_3A2AC_4DC);
	ZZ_JUMPREGISTER(0x8003A82C,ZZ_3A2AC_580);
	ZZ_JUMPREGISTER(0x8003A8B8,ZZ_3A2AC_60C);
	ZZ_JUMPREGISTER(0x8003A8E0,ZZ_3A2AC_634);
	ZZ_JUMPREGISTER(0x8003ACE4,ZZ_3AC50_94);
	ZZ_JUMPREGISTER(0x8003AB3C,ZZ_3AA64_D8);
	ZZ_JUMPREGISTER(0x8003AB68,ZZ_3AA64_104);
	ZZ_JUMPREGISTER(0x8003ABB0,ZZ_3AA64_14C);
	ZZ_JUMPREGISTER(0x8003AC10,ZZ_3AA64_1AC);
	ZZ_JUMPREGISTER(0x8003AC34,ZZ_3AA64_1D0);
	ZZ_JUMPREGISTER(0x8003ACB4,ZZ_3AC50_64);
	ZZ_JUMPREGISTER(0x8003AE04,ZZ_3AC50_1B4);
	ZZ_JUMPREGISTER(0x8003ABE0,ZZ_3AA64_17C);
	ZZ_JUMPREGISTER(0x8003A7D4,ZZ_3A2AC_528);
	ZZ_JUMPREGISTER(0x8003A88C,ZZ_3A2AC_5E0);
	ZZ_JUMPREGISTER(0x8003A380,ZZ_3A2AC_D4);
	ZZ_JUMPREGISTER(0x8003A3A4,ZZ_3A2AC_F8);
	ZZ_JUMPREGISTER(0x8003A3C8,ZZ_3A2AC_11C);
	ZZ_JUMPREGISTER(0x8003A3F0,ZZ_3A2AC_144);
	ZZ_JUMPREGISTER(0x8003A4AC,ZZ_3A2AC_200);
	ZZ_JUMPREGISTER(0x8003A460,ZZ_3A2AC_1B4);
	ZZ_JUMPREGISTER(0x8003A488,ZZ_3A2AC_1DC);
	ZZ_JUMPREGISTER(0x8003A58C,ZZ_3A2AC_2E0);
	ZZ_JUMPREGISTER(0x8003A4D4,ZZ_3A2AC_228);
	ZZ_JUMPREGISTER(0x8003A4F8,ZZ_3A2AC_24C);
	ZZ_JUMPREGISTER(0x8003A520,ZZ_3A2AC_274);
	ZZ_JUMPREGISTER(0x8003A544,ZZ_3A2AC_298);
	ZZ_JUMPREGISTER(0x8003A418,ZZ_3A2AC_16C);
	ZZ_JUMPREGISTER(0x8003A5B0,ZZ_3A2AC_304);
	ZZ_JUMPREGISTER(0x8003A5D4,ZZ_3A2AC_328);
	ZZ_JUMPREGISTER(0x8003A600,ZZ_3A2AC_354);
	ZZ_JUMPREGISTER(0x8003A6A8,ZZ_3A2AC_3FC);
	ZZ_JUMPREGISTER(0x8003A838,ZZ_3A2AC_58C);
	ZZ_JUMPREGISTER(0x8003A8EC,ZZ_3A2AC_640);
	ZZ_JUMPREGISTER(0x8003ACF0,ZZ_3AC50_A0);
	ZZ_JUMPREGISTER(0x8003ABBC,ZZ_3AA64_158);
	ZZ_JUMPREGISTER(0x8003ABEC,ZZ_3AA64_188);
	ZZ_JUMPREGISTER(0x8003A6DC,ZZ_3A2AC_430);
	ZZ_JUMPREGISTER(0x8003A7E0,ZZ_3A2AC_534);
	ZZ_JUMPREGISTER(0x8003A898,ZZ_3A2AC_5EC);
	ZZ_JUMPREGISTER(0x8003AA84,ZZ_3AA64_20);
	ZZ_JUMPREGISTER(0x8003A938,ZZ_3A918_20);
	ZZ_JUMPREGISTER(0x8003A9D0,ZZ_3A9B0_20);
	ZZ_JUMPREGISTER(0x8003A964,ZZ_3A918_4C);
	ZZ_JUMPREGISTER(0x8003A9F0,ZZ_3A9B0_40);
	ZZ_JUMPREGISTER_END();
ZZ_3A118_E4:
	V0 = S0 + A0;
	V0 = EMU_ReadU32(V0 - 1984); //+ 0xFFFFF840
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x8003A374,ZZ_3A2AC_C8);
	ZZ_JUMPREGISTER(0x8003A398,ZZ_3A2AC_EC);
	ZZ_JUMPREGISTER(0x8003A3BC,ZZ_3A2AC_110);
	ZZ_JUMPREGISTER(0x8003A3E4,ZZ_3A2AC_138);
	ZZ_JUMPREGISTER(0x8003A4A0,ZZ_3A2AC_1F4);
	ZZ_JUMPREGISTER(0x8003A454,ZZ_3A2AC_1A8);
	ZZ_JUMPREGISTER(0x8003A47C,ZZ_3A2AC_1D0);
	ZZ_JUMPREGISTER(0x8003A580,ZZ_3A2AC_2D4);
	ZZ_JUMPREGISTER(0x8003A4C8,ZZ_3A2AC_21C);
	ZZ_JUMPREGISTER(0x8003A4EC,ZZ_3A2AC_240);
	ZZ_JUMPREGISTER(0x8003A514,ZZ_3A2AC_268);
	ZZ_JUMPREGISTER(0x8003A538,ZZ_3A2AC_28C);
	ZZ_JUMPREGISTER(0x8003A40C,ZZ_3A2AC_160);
	ZZ_JUMPREGISTER(0x8003A5A4,ZZ_3A2AC_2F8);
	ZZ_JUMPREGISTER(0x8003A5C8,ZZ_3A2AC_31C);
	ZZ_JUMPREGISTER(0x8003A5F4,ZZ_3A2AC_348);
	ZZ_JUMPREGISTER(0x8003A660,ZZ_3A2AC_3B4);
	ZZ_JUMPREGISTER(0x8003A434,ZZ_3A2AC_188);
	ZZ_JUMPREGISTER(0x8003A69C,ZZ_3A2AC_3F0);
	ZZ_JUMPREGISTER(0x8003A560,ZZ_3A2AC_2B4);
	ZZ_JUMPREGISTER(0x8003A788,ZZ_3A2AC_4DC);
	ZZ_JUMPREGISTER(0x8003A82C,ZZ_3A2AC_580);
	ZZ_JUMPREGISTER(0x8003A8B8,ZZ_3A2AC_60C);
	ZZ_JUMPREGISTER(0x8003A8E0,ZZ_3A2AC_634);
	ZZ_JUMPREGISTER(0x8003ACE4,ZZ_3AC50_94);
	ZZ_JUMPREGISTER(0x8003AB3C,ZZ_3AA64_D8);
	ZZ_JUMPREGISTER(0x8003AB68,ZZ_3AA64_104);
	ZZ_JUMPREGISTER(0x8003ABB0,ZZ_3AA64_14C);
	ZZ_JUMPREGISTER(0x8003AC10,ZZ_3AA64_1AC);
	ZZ_JUMPREGISTER(0x8003AC34,ZZ_3AA64_1D0);
	ZZ_JUMPREGISTER(0x8003ACB4,ZZ_3AC50_64);
	ZZ_JUMPREGISTER(0x8003AE04,ZZ_3AC50_1B4);
	ZZ_JUMPREGISTER(0x8003ABE0,ZZ_3AA64_17C);
	ZZ_JUMPREGISTER(0x8003A7D4,ZZ_3A2AC_528);
	ZZ_JUMPREGISTER(0x8003A88C,ZZ_3A2AC_5E0);
	ZZ_JUMPREGISTER(0x8003A380,ZZ_3A2AC_D4);
	ZZ_JUMPREGISTER(0x8003A3A4,ZZ_3A2AC_F8);
	ZZ_JUMPREGISTER(0x8003A3C8,ZZ_3A2AC_11C);
	ZZ_JUMPREGISTER(0x8003A3F0,ZZ_3A2AC_144);
	ZZ_JUMPREGISTER(0x8003A4AC,ZZ_3A2AC_200);
	ZZ_JUMPREGISTER(0x8003A460,ZZ_3A2AC_1B4);
	ZZ_JUMPREGISTER(0x8003A488,ZZ_3A2AC_1DC);
	ZZ_JUMPREGISTER(0x8003A58C,ZZ_3A2AC_2E0);
	ZZ_JUMPREGISTER(0x8003A4D4,ZZ_3A2AC_228);
	ZZ_JUMPREGISTER(0x8003A4F8,ZZ_3A2AC_24C);
	ZZ_JUMPREGISTER(0x8003A520,ZZ_3A2AC_274);
	ZZ_JUMPREGISTER(0x8003A544,ZZ_3A2AC_298);
	ZZ_JUMPREGISTER(0x8003A418,ZZ_3A2AC_16C);
	ZZ_JUMPREGISTER(0x8003A5B0,ZZ_3A2AC_304);
	ZZ_JUMPREGISTER(0x8003A5D4,ZZ_3A2AC_328);
	ZZ_JUMPREGISTER(0x8003A600,ZZ_3A2AC_354);
	ZZ_JUMPREGISTER(0x8003A6A8,ZZ_3A2AC_3FC);
	ZZ_JUMPREGISTER(0x8003A838,ZZ_3A2AC_58C);
	ZZ_JUMPREGISTER(0x8003A8EC,ZZ_3A2AC_640);
	ZZ_JUMPREGISTER(0x8003ACF0,ZZ_3AC50_A0);
	ZZ_JUMPREGISTER(0x8003ABBC,ZZ_3AA64_158);
	ZZ_JUMPREGISTER(0x8003ABEC,ZZ_3AA64_188);
	ZZ_JUMPREGISTER(0x8003A6DC,ZZ_3A2AC_430);
	ZZ_JUMPREGISTER(0x8003A7E0,ZZ_3A2AC_534);
	ZZ_JUMPREGISTER(0x8003A898,ZZ_3A2AC_5EC);
	ZZ_JUMPREGISTER(0x8003AA84,ZZ_3AA64_20);
	ZZ_JUMPREGISTER(0x8003A938,ZZ_3A918_20);
	ZZ_JUMPREGISTER(0x8003A9D0,ZZ_3A9B0_20);
	ZZ_JUMPREGISTER(0x8003A964,ZZ_3A918_4C);
	ZZ_JUMPREGISTER(0x8003A9F0,ZZ_3A9B0_40);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003A118,ZZ_3A118);
ZZ_MARK(0x8003A11C);
ZZ_MARK(0x8003A120);
ZZ_MARK(0x8003A124);
ZZ_MARK(0x8003A128);
ZZ_MARK(0x8003A12C);
ZZ_MARK(0x8003A130);
ZZ_MARK(0x8003A134);
ZZ_MARK(0x8003A138);
ZZ_MARK(0x8003A13C);
ZZ_MARK_TARGET(0x8003A140,ZZ_3A118_28);
ZZ_MARK(0x8003A144);
ZZ_MARK(0x8003A148);
ZZ_MARK(0x8003A14C);
ZZ_MARK(0x8003A150);
ZZ_MARK_TARGET(0x8003A154,ZZ_3A118_3C);
ZZ_MARK(0x8003A158);
ZZ_MARK(0x8003A15C);
ZZ_MARK(0x8003A160);
ZZ_MARK(0x8003A164);
ZZ_MARK(0x8003A168);
ZZ_MARK_TARGET(0x8003A16C,ZZ_3A118_54);
ZZ_MARK(0x8003A170);
ZZ_MARK(0x8003A174);
ZZ_MARK(0x8003A178);
ZZ_MARK_TARGET(0x8003A17C,ZZ_3A118_64);
ZZ_MARK(0x8003A180);
ZZ_MARK(0x8003A184);
ZZ_MARK(0x8003A188);
ZZ_MARK(0x8003A18C);
ZZ_MARK(0x8003A190);
ZZ_MARK(0x8003A194);
ZZ_MARK_TARGET(0x8003A198,ZZ_3A118_80);
ZZ_MARK(0x8003A19C);
ZZ_MARK(0x8003A1A0);
ZZ_MARK(0x8003A1A4);
ZZ_MARK_TARGET(0x8003A1A8,ZZ_3A118_90);
ZZ_MARK(0x8003A1AC);
ZZ_MARK_TARGET(0x8003A1B0,ZZ_3A118_98);
ZZ_MARK(0x8003A1B4);
ZZ_MARK(0x8003A1B8);
ZZ_MARK(0x8003A1BC);
ZZ_MARK(0x8003A1C0);
ZZ_MARK(0x8003A1C4);
ZZ_MARK(0x8003A1C8);
ZZ_MARK(0x8003A1CC);
ZZ_MARK(0x8003A1D0);
ZZ_MARK(0x8003A1D4);
ZZ_MARK(0x8003A1D8);
ZZ_MARK(0x8003A1DC);
ZZ_MARK(0x8003A1E0);
ZZ_MARK_TARGET(0x8003A1E4,ZZ_3A118_CC);
ZZ_MARK(0x8003A1E8);
ZZ_MARK(0x8003A1EC);
ZZ_MARK(0x8003A1F0);
ZZ_MARK(0x8003A1F4);
ZZ_MARK(0x8003A1F8);
ZZ_MARK_TARGET(0x8003A1FC,ZZ_3A118_E4);
ZZ_MARK(0x8003A200);
ZZ_MARK(0x8003A204);
ZZ_MARK(0x8003A208);
