#ifdef ZZ_INCLUDE_CODE
ZZ_5AF70:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5392); //+ 0xFFFFEAF0
	SP -= 40;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = A0;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = R0;
	EMU_Write32(SP + 24,S2); //+ 0x18
	S2 = -1;
	EMU_Write32(SP + 32,RA); //+ 0x20
	if (V0)
	{
		EMU_Write32(SP + 28,S3); //+ 0x1C
		ZZ_CLOCKCYCLES(12,0x8005AFA8);
		goto ZZ_5AF70_38;
	}
	EMU_Write32(SP + 28,S3); //+ 0x1C
	S3 = R0;
	ZZ_CLOCKCYCLES(14,0x8005AFC4);
	goto ZZ_5AF70_54;
ZZ_5AF70_38:
	V0 = 0x10000;
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 5388); //+ 0xFFFFEAF4
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 5488); //+ 0xFFFFEA90
	V0 = V0 - V1;
	S3 = V0 << A0;
	ZZ_CLOCKCYCLES(7,0x8005AFC4);
ZZ_5AF70_54:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 5480); //+ 0xFFFFEA98
	V0 = ~V1;
	V0 &= S1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(7,0x8005AFE4);
		goto ZZ_5AF70_74;
	}
	S1 += V1;
	ZZ_CLOCKCYCLES(8,0x8005AFE4);
ZZ_5AF70_74:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5488); //+ 0xFFFFEA90
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 5424); //+ 0xFFFFEAD0
	S1 = (int32_t)S1 >> V0;
	S1 <<= V0;
	V0 = EMU_ReadU32(V1);
	V1 = 0x40000000;
	V0 &= V1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(11,0x8005B018);
		goto ZZ_5AF70_A8;
	}
	S2 = R0;
	ZZ_CLOCKCYCLES(13,0x8005B09C);
	goto ZZ_5AF70_12C;
ZZ_5AF70_A8:
	RA = 0x8005B020; //ZZ_5AF70_B0
	ZZ_CLOCKCYCLES(2,0x8005A794);
	goto ZZ_5A794;
ZZ_5AF70_B0:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 5432); //+ 0xFFFFEAC8
	V0 = (int32_t)S0 < (int32_t)V1;
	if (!V0)
	{
		V0 = S0 << 3;
		ZZ_CLOCKCYCLES(6,0x8005B09C);
		goto ZZ_5AF70_12C;
	}
	V0 = S0 << 3;
	A3 = 0x40000000;
	A2 = 0x80000000;
	A1 = V1;
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 5424); //+ 0xFFFFEAD0
	A0 = V0 + V1;
	ZZ_CLOCKCYCLES(13,0x8005B054);
ZZ_5AF70_E4:
	V1 = EMU_ReadU32(A0);
	V0 = V1 & A3;
	if (V0)
	{
		V0 = V1 & A2;
		ZZ_CLOCKCYCLES(5,0x8005B084);
		goto ZZ_5AF70_114;
	}
	V0 = V1 & A2;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(7,0x8005B08C);
		goto ZZ_5AF70_11C;
	}
	V0 = EMU_ReadU32(A0 + 4); //+ 0x4
	V0 = V0 < S1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(12,0x8005B08C);
		goto ZZ_5AF70_11C;
	}
	ZZ_CLOCKCYCLES(12,0x8005B084);
ZZ_5AF70_114:
	S2 = S0;
	ZZ_CLOCKCYCLES(2,0x8005B09C);
	goto ZZ_5AF70_12C;
ZZ_5AF70_11C:
	S0 += 1;
	V0 = (int32_t)S0 < (int32_t)A1;
	if (V0)
	{
		A0 += 8;
		ZZ_CLOCKCYCLES(4,0x8005B054);
		goto ZZ_5AF70_E4;
	}
	A0 += 8;
	ZZ_CLOCKCYCLES(4,0x8005B09C);
ZZ_5AF70_12C:
	V0 = -1;
	if (S2 == V0)
	{
		S0 = S2 << 3;
		ZZ_CLOCKCYCLES(3,0x8005B218);
		goto ZZ_5AF70_2A8;
	}
	S0 = S2 << 3;
	A3 = 0x80060000;
	A3 = EMU_ReadU32(A3 - 5424); //+ 0xFFFFEAD0
	A2 = S0 + A3;
	V1 = EMU_ReadU32(A2);
	T0 = 0x40000000;
	V0 = V1 & T0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(12,0x8005B16C);
		goto ZZ_5AF70_1FC;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5432); //+ 0xFFFFEAC8
	V0 = (int32_t)S2 < (int32_t)V0;
	if (!V0)
	{
		V0 = -1;
		ZZ_CLOCKCYCLES(18,0x8005B218);
		goto ZZ_5AF70_2A8;
	}
	V0 = -1;
	V0 = EMU_ReadU32(A2 + 4); //+ 0x4
	V0 = V0 - S3;
	V0 = V0 < S1;
	if (V0)
	{
		V0 = -1;
		ZZ_CLOCKCYCLES(24,0x8005B218);
		goto ZZ_5AF70_2A8;
	}
	V0 = -1;
	A1 = 0xFFF0000;
	A1 |= 0xFFFF;
	A0 = S2 + 1;
	V1 = A0 << 3;
	V0 = EMU_ReadU32(A2);
	V1 += A3;
	V0 &= A1;
	V0 += S1;
	V0 |= T0;
	EMU_Write32(V1,V0);
	V0 = EMU_ReadU32(A2 + 4); //+ 0x4
	V0 = V0 - S1;
	EMU_Write32(V1 + 4,V0); //+ 0x4
	V0 = EMU_ReadU32(A2);
	AT = 0x80060000;
	EMU_Write32(AT - 5428,A0); //+ 0xFFFFEACC
	EMU_Write32(A2 + 4,S1); //+ 0x4
	V0 &= A1;
	RA = 0x8005B150; //ZZ_5AF70_1E0
	EMU_Write32(A2,V0);
	ZZ_CLOCKCYCLES(45,0x8005A794);
	goto ZZ_5A794;
ZZ_5AF70_1E0:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5424); //+ 0xFFFFEAD0
	V0 += S0;
	V0 = EMU_ReadU32(V0);
	ZZ_CLOCKCYCLES(7,0x8005B218);
	goto ZZ_5AF70_2A8;
ZZ_5AF70_1FC:
	T0 = EMU_ReadU32(A2 + 4); //+ 0x4
	V0 = S1 < T0;
	if (!V0)
	{
		A0 = 0xFFF0000;
		ZZ_CLOCKCYCLES(5,0x8005B1DC);
		goto ZZ_5AF70_26C;
	}
	A0 = 0xFFF0000;
	A2 = 0x80060000;
	A2 = EMU_ReadU32(A2 - 5428); //+ 0xFFFFEACC
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5432); //+ 0xFFFFEAC8
	V0 = (int32_t)A2 < (int32_t)V0;
	if (!V0)
	{
		V1 += S1;
		ZZ_CLOCKCYCLES(13,0x8005B1DC);
		goto ZZ_5AF70_26C;
	}
	V1 += S1;
	V0 = A2 << 3;
	V0 += A3;
	A0 = 0x80000000;
	V1 |= A0;
	A1 = EMU_ReadU32(V0);
	A0 = EMU_ReadU32(V0 + 4); //+ 0x4
	EMU_Write32(V0,V1);
	V1 = T0 - S1;
	EMU_Write32(V0 + 4,V1); //+ 0x4
	V1 = A2 + 1;
	AT = 0x80060000;
	EMU_Write32(AT - 5428,V1); //+ 0xFFFFEACC
	EMU_Write32(V0 + 8,A1); //+ 0x8
	EMU_Write32(V0 + 12,A0); //+ 0xC
	A0 = 0xFFF0000;
	ZZ_CLOCKCYCLES(28,0x8005B1DC);
ZZ_5AF70_26C:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 5424); //+ 0xFFFFEAD0
	S0 = S2 << 3;
	V1 += S0;
	V0 = EMU_ReadU32(V1);
	A0 |= 0xFFFF;
	EMU_Write32(V1 + 4,S1); //+ 0x4
	V0 &= A0;
	RA = 0x8005B204; //ZZ_5AF70_294
	EMU_Write32(V1,V0);
	ZZ_CLOCKCYCLES(10,0x8005A794);
	goto ZZ_5A794;
ZZ_5AF70_294:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5424); //+ 0xFFFFEAD0
	S0 += V0;
	V0 = EMU_ReadU32(S0);
	ZZ_CLOCKCYCLES(5,0x8005B218);
ZZ_5AF70_2A8:
	RA = EMU_ReadU32(SP + 32); //+ 0x20
	S3 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 40;
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x8005AE24,ZZ_5AB94_290);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8005AF70,ZZ_5AF70);
ZZ_MARK(0x8005AF74);
ZZ_MARK(0x8005AF78);
ZZ_MARK(0x8005AF7C);
ZZ_MARK(0x8005AF80);
ZZ_MARK(0x8005AF84);
ZZ_MARK(0x8005AF88);
ZZ_MARK(0x8005AF8C);
ZZ_MARK(0x8005AF90);
ZZ_MARK(0x8005AF94);
ZZ_MARK(0x8005AF98);
ZZ_MARK(0x8005AF9C);
ZZ_MARK(0x8005AFA0);
ZZ_MARK(0x8005AFA4);
ZZ_MARK_TARGET(0x8005AFA8,ZZ_5AF70_38);
ZZ_MARK(0x8005AFAC);
ZZ_MARK(0x8005AFB0);
ZZ_MARK(0x8005AFB4);
ZZ_MARK(0x8005AFB8);
ZZ_MARK(0x8005AFBC);
ZZ_MARK(0x8005AFC0);
ZZ_MARK_TARGET(0x8005AFC4,ZZ_5AF70_54);
ZZ_MARK(0x8005AFC8);
ZZ_MARK(0x8005AFCC);
ZZ_MARK(0x8005AFD0);
ZZ_MARK(0x8005AFD4);
ZZ_MARK(0x8005AFD8);
ZZ_MARK(0x8005AFDC);
ZZ_MARK(0x8005AFE0);
ZZ_MARK_TARGET(0x8005AFE4,ZZ_5AF70_74);
ZZ_MARK(0x8005AFE8);
ZZ_MARK(0x8005AFEC);
ZZ_MARK(0x8005AFF0);
ZZ_MARK(0x8005AFF4);
ZZ_MARK(0x8005AFF8);
ZZ_MARK(0x8005AFFC);
ZZ_MARK(0x8005B000);
ZZ_MARK(0x8005B004);
ZZ_MARK(0x8005B008);
ZZ_MARK(0x8005B00C);
ZZ_MARK(0x8005B010);
ZZ_MARK(0x8005B014);
ZZ_MARK_TARGET(0x8005B018,ZZ_5AF70_A8);
ZZ_MARK(0x8005B01C);
ZZ_MARK_TARGET(0x8005B020,ZZ_5AF70_B0);
ZZ_MARK(0x8005B024);
ZZ_MARK(0x8005B028);
ZZ_MARK(0x8005B02C);
ZZ_MARK(0x8005B030);
ZZ_MARK(0x8005B034);
ZZ_MARK(0x8005B038);
ZZ_MARK(0x8005B03C);
ZZ_MARK(0x8005B040);
ZZ_MARK(0x8005B044);
ZZ_MARK(0x8005B048);
ZZ_MARK(0x8005B04C);
ZZ_MARK(0x8005B050);
ZZ_MARK_TARGET(0x8005B054,ZZ_5AF70_E4);
ZZ_MARK(0x8005B058);
ZZ_MARK(0x8005B05C);
ZZ_MARK(0x8005B060);
ZZ_MARK(0x8005B064);
ZZ_MARK(0x8005B068);
ZZ_MARK(0x8005B06C);
ZZ_MARK(0x8005B070);
ZZ_MARK(0x8005B074);
ZZ_MARK(0x8005B078);
ZZ_MARK(0x8005B07C);
ZZ_MARK(0x8005B080);
ZZ_MARK_TARGET(0x8005B084,ZZ_5AF70_114);
ZZ_MARK(0x8005B088);
ZZ_MARK_TARGET(0x8005B08C,ZZ_5AF70_11C);
ZZ_MARK(0x8005B090);
ZZ_MARK(0x8005B094);
ZZ_MARK(0x8005B098);
ZZ_MARK_TARGET(0x8005B09C,ZZ_5AF70_12C);
ZZ_MARK(0x8005B0A0);
ZZ_MARK(0x8005B0A4);
ZZ_MARK(0x8005B0A8);
ZZ_MARK(0x8005B0AC);
ZZ_MARK(0x8005B0B0);
ZZ_MARK(0x8005B0B4);
ZZ_MARK(0x8005B0B8);
ZZ_MARK(0x8005B0BC);
ZZ_MARK(0x8005B0C0);
ZZ_MARK(0x8005B0C4);
ZZ_MARK(0x8005B0C8);
ZZ_MARK(0x8005B0CC);
ZZ_MARK(0x8005B0D0);
ZZ_MARK(0x8005B0D4);
ZZ_MARK(0x8005B0D8);
ZZ_MARK(0x8005B0DC);
ZZ_MARK(0x8005B0E0);
ZZ_MARK(0x8005B0E4);
ZZ_MARK(0x8005B0E8);
ZZ_MARK(0x8005B0EC);
ZZ_MARK(0x8005B0F0);
ZZ_MARK(0x8005B0F4);
ZZ_MARK(0x8005B0F8);
ZZ_MARK(0x8005B0FC);
ZZ_MARK(0x8005B100);
ZZ_MARK(0x8005B104);
ZZ_MARK(0x8005B108);
ZZ_MARK(0x8005B10C);
ZZ_MARK(0x8005B110);
ZZ_MARK(0x8005B114);
ZZ_MARK(0x8005B118);
ZZ_MARK(0x8005B11C);
ZZ_MARK(0x8005B120);
ZZ_MARK(0x8005B124);
ZZ_MARK(0x8005B128);
ZZ_MARK(0x8005B12C);
ZZ_MARK(0x8005B130);
ZZ_MARK(0x8005B134);
ZZ_MARK(0x8005B138);
ZZ_MARK(0x8005B13C);
ZZ_MARK(0x8005B140);
ZZ_MARK(0x8005B144);
ZZ_MARK(0x8005B148);
ZZ_MARK(0x8005B14C);
ZZ_MARK_TARGET(0x8005B150,ZZ_5AF70_1E0);
ZZ_MARK(0x8005B154);
ZZ_MARK(0x8005B158);
ZZ_MARK(0x8005B15C);
ZZ_MARK(0x8005B160);
ZZ_MARK(0x8005B164);
ZZ_MARK(0x8005B168);
ZZ_MARK_TARGET(0x8005B16C,ZZ_5AF70_1FC);
ZZ_MARK(0x8005B170);
ZZ_MARK(0x8005B174);
ZZ_MARK(0x8005B178);
ZZ_MARK(0x8005B17C);
ZZ_MARK(0x8005B180);
ZZ_MARK(0x8005B184);
ZZ_MARK(0x8005B188);
ZZ_MARK(0x8005B18C);
ZZ_MARK(0x8005B190);
ZZ_MARK(0x8005B194);
ZZ_MARK(0x8005B198);
ZZ_MARK(0x8005B19C);
ZZ_MARK(0x8005B1A0);
ZZ_MARK(0x8005B1A4);
ZZ_MARK(0x8005B1A8);
ZZ_MARK(0x8005B1AC);
ZZ_MARK(0x8005B1B0);
ZZ_MARK(0x8005B1B4);
ZZ_MARK(0x8005B1B8);
ZZ_MARK(0x8005B1BC);
ZZ_MARK(0x8005B1C0);
ZZ_MARK(0x8005B1C4);
ZZ_MARK(0x8005B1C8);
ZZ_MARK(0x8005B1CC);
ZZ_MARK(0x8005B1D0);
ZZ_MARK(0x8005B1D4);
ZZ_MARK(0x8005B1D8);
ZZ_MARK_TARGET(0x8005B1DC,ZZ_5AF70_26C);
ZZ_MARK(0x8005B1E0);
ZZ_MARK(0x8005B1E4);
ZZ_MARK(0x8005B1E8);
ZZ_MARK(0x8005B1EC);
ZZ_MARK(0x8005B1F0);
ZZ_MARK(0x8005B1F4);
ZZ_MARK(0x8005B1F8);
ZZ_MARK(0x8005B1FC);
ZZ_MARK(0x8005B200);
ZZ_MARK_TARGET(0x8005B204,ZZ_5AF70_294);
ZZ_MARK(0x8005B208);
ZZ_MARK(0x8005B20C);
ZZ_MARK(0x8005B210);
ZZ_MARK(0x8005B214);
ZZ_MARK_TARGET(0x8005B218,ZZ_5AF70_2A8);
ZZ_MARK(0x8005B21C);
ZZ_MARK(0x8005B220);
ZZ_MARK(0x8005B224);
ZZ_MARK(0x8005B228);
ZZ_MARK(0x8005B22C);
ZZ_MARK(0x8005B230);