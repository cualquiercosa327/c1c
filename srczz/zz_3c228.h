#ifdef ZZ_INCLUDE_CODE
ZZ_3C228:
	AT = 0x1F800000;
	EMU_Write32(AT,S0);
	EMU_Write32(AT + 4,S1); //+ 0x4
	EMU_Write32(AT + 8,S2); //+ 0x8
	EMU_Write32(AT + 12,S3); //+ 0xC
	EMU_Write32(AT + 16,S4); //+ 0x10
	EMU_Write32(AT + 20,S5); //+ 0x14
	EMU_Write32(AT + 24,S6); //+ 0x18
	EMU_Write32(AT + 28,S7); //+ 0x1C
	EMU_Write32(AT + 32,T8); //+ 0x20
	EMU_Write32(AT + 36,T9); //+ 0x24
	EMU_Write32(AT + 40,K0); //+ 0x28
	EMU_Write32(AT + 44,K1); //+ 0x2C
	EMU_Write32(AT + 48,GP); //+ 0x30
	EMU_Write32(AT + 52,SP); //+ 0x34
	EMU_Write32(AT + 56,FP); //+ 0x38
	EMU_Write32(AT + 60,RA); //+ 0x3C
	S6 = EMU_ReadU32(A1);
	T0 = EMU_ReadU32(A1 + 4); //+ 0x4
	T1 = EMU_ReadU32(A1 + 8); //+ 0x8
	T2 = EMU_ReadU32(A1 + 12); //+ 0xC
	T3 = EMU_ReadU32(A1 + 16); //+ 0x10
	T4 = EMU_ReadU32(A1 + 20); //+ 0x14
	T5 = EMU_ReadU32(A0);
	T6 = EMU_ReadU32(A0 + 4); //+ 0x4
	T7 = EMU_ReadU32(A0 + 8); //+ 0x8
	S0 = EMU_ReadU32(A0 + 12); //+ 0xC
	S1 = EMU_ReadU32(A0 + 16); //+ 0x10
	S2 = EMU_ReadU32(A0 + 20); //+ 0x14
	V1 = EMU_ReadU16(A0 + 28); //+ 0x1C
	S3 = EMU_ReadU16(A0 + 30); //+ 0x1E
	S4 = EMU_ReadU16(A0 + 32); //+ 0x20
	S5 = EMU_ReadU16(A0 + 34); //+ 0x22
	EMU_Write16(A2,R0);
	EMU_Write16(A2 + 2,S0); //+ 0x2
	EMU_Write16(A2 + 4,S1); //+ 0x4
	EMU_Write16(A2 + 6,S2); //+ 0x6
	A2 += 8;
	EMU_Write16(A2,R0);
	EMU_Write16(A2 + 2,S3); //+ 0x2
	EMU_Write16(A2 + 4,S4); //+ 0x4
	EMU_Write16(A2 + 6,S5); //+ 0x6
	A2 += 8;
	T5 <<= 8;
	T6 <<= 8;
	T7 <<= 8;
	S0 <<= 8;
	S1 <<= 8;
	S2 <<= 8;
	T5 = T5 - S6;
	T6 = T6 - T0;
	T7 = T7 - T1;
	T2 = T2 - S6;
	T3 = T3 - T0;
	T4 = T4 - T1;
	A3 += 2;
	FP = R0;
	ZZ_CLOCKCYCLES(58,0x8003C360);
	goto ZZ_3C228_138;
ZZ_3C228_E8:
	V0 = A3;
	AT = 0x1F800000;
	S0 = EMU_ReadU32(AT);
	S1 = EMU_ReadU32(AT + 4); //+ 0x4
	S2 = EMU_ReadU32(AT + 8); //+ 0x8
	S3 = EMU_ReadU32(AT + 12); //+ 0xC
	S4 = EMU_ReadU32(AT + 16); //+ 0x10
	S5 = EMU_ReadU32(AT + 20); //+ 0x14
	S6 = EMU_ReadU32(AT + 24); //+ 0x18
	S7 = EMU_ReadU32(AT + 28); //+ 0x1C
	T8 = EMU_ReadU32(AT + 32); //+ 0x20
	T9 = EMU_ReadU32(AT + 36); //+ 0x24
	K0 = EMU_ReadU32(AT + 40); //+ 0x28
	K1 = EMU_ReadU32(AT + 44); //+ 0x2C
	GP = EMU_ReadU32(AT + 48); //+ 0x30
	SP = EMU_ReadU32(AT + 52); //+ 0x34
	RA = EMU_ReadU32(AT + 60); //+ 0x3C
	FP = EMU_ReadU32(AT + 56); //+ 0x38
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(20);
	ZZ_JUMPREGISTER(0x80029950,ZZ_297AC_1A4);
	ZZ_JUMPREGISTER_END();
ZZ_3C228_138:
	RA = V1;
	A1 = RA & 0xFFFF;
	if (!A1)
	{
		AT = A1 & 0x1;
		ZZ_CLOCKCYCLES(4,0x8003C3E4);
		goto ZZ_3C228_1BC;
	}
	AT = A1 & 0x1;
	if (AT)
	{
		V0 = (int32_t)FP < (int32_t)S3;
		ZZ_CLOCKCYCLES(6,0x8003CADC);
		goto ZZ_3C228_8B4;
	}
	V0 = (int32_t)FP < (int32_t)S3;
	V1 = (int32_t)FP < (int32_t)S4;
	V1 <<= 1;
	V0 |= V1;
	V1 = (int32_t)FP < (int32_t)S5;
	V1 <<= 2;
	V0 |= V1;
	V0 -= 1;
	AT = 0x80040000;
	AT -= 15444;
	V0 <<= 3;
	AT += V0;
	ZZ_JUMPREGISTER_BEGIN(AT);
	A1 += A0;
	ZZ_CLOCKCYCLES_JR(19);
	ZZ_JUMPREGISTER(0x8003C3AC,ZZ_3C228_184);
	ZZ_JUMPREGISTER(0x8003C3B4,ZZ_3C228_18C);
	ZZ_JUMPREGISTER(0x8003C3BC,ZZ_3C228_194);
	ZZ_JUMPREGISTER(0x8003C3C4,ZZ_3C228_19C);
	ZZ_JUMPREGISTER(0x8003C3CC,ZZ_3C228_1A4);
	ZZ_JUMPREGISTER(0x8003C3D4,ZZ_3C228_1AC);
	ZZ_JUMPREGISTER(0x8003C3DC,ZZ_3C228_1B4);
	ZZ_JUMPREGISTER_END();
ZZ_3C228_184:
	ZZ_CLOCKCYCLES(2,0x8003C578);
	goto ZZ_3C228_350;
ZZ_3C228_18C:
	ZZ_CLOCKCYCLES(2,0x8003C5C0);
	goto ZZ_3C228_398;
ZZ_3C228_194:
	ZZ_CLOCKCYCLES(2,0x8003C650);
	goto ZZ_3C228_428;
ZZ_3C228_19C:
	ZZ_CLOCKCYCLES(2,0x8003C608);
	goto ZZ_3C228_3E0;
ZZ_3C228_1A4:
	ZZ_CLOCKCYCLES(2,0x8003C73C);
	goto ZZ_3C228_514;
ZZ_3C228_1AC:
	ZZ_CLOCKCYCLES(2,0x8003C828);
	goto ZZ_3C228_600;
ZZ_3C228_1B4:
	ZZ_CLOCKCYCLES(2,0x8003C914);
	goto ZZ_3C228_6EC;
ZZ_3C228_1BC:
	V0 = 0x80040000;
	V0 -= 15360;
	AT = FP << 3;
	V0 += AT;
	AT = RA >> 24;
	ZZ_JUMPREGISTER_BEGIN(V0);
	FP -= 1;
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x8003C400,ZZ_3C228_1D8);
	ZZ_JUMPREGISTER(0x8003C408,ZZ_3C228_1E0);
	ZZ_JUMPREGISTER(0x8003C410,ZZ_3C228_1E8);
	ZZ_JUMPREGISTER(0x8003C418,ZZ_3C228_1F0);
	ZZ_JUMPREGISTER(0x8003C420,ZZ_3C228_1F8);
	ZZ_JUMPREGISTER(0x8003C428,ZZ_3C228_200);
	ZZ_JUMPREGISTER(0x8003C430,ZZ_3C228_208);
	ZZ_JUMPREGISTER(0x8003C438,ZZ_3C228_210);
	ZZ_JUMPREGISTER_END();
ZZ_3C228_1D8:
	ZZ_CLOCKCYCLES(2,0x8003C310);
	goto ZZ_3C228_E8;
ZZ_3C228_1E0:
	RA = S7;
	ZZ_CLOCKCYCLES(2,0x8003C43C);
	goto ZZ_3C228_214;
ZZ_3C228_1E8:
	RA = T8;
	ZZ_CLOCKCYCLES(2,0x8003C43C);
	goto ZZ_3C228_214;
ZZ_3C228_1F0:
	RA = T9;
	ZZ_CLOCKCYCLES(2,0x8003C43C);
	goto ZZ_3C228_214;
ZZ_3C228_1F8:
	RA = GP;
	ZZ_CLOCKCYCLES(2,0x8003C43C);
	goto ZZ_3C228_214;
ZZ_3C228_200:
	RA = SP;
	ZZ_CLOCKCYCLES(2,0x8003C43C);
	goto ZZ_3C228_214;
ZZ_3C228_208:
	RA = S6;
	ZZ_CLOCKCYCLES(2,0x8003C43C);
	goto ZZ_3C228_214;
ZZ_3C228_210:
	RA = T0;
	ZZ_CLOCKCYCLES(1,0x8003C43C);
ZZ_3C228_214:
	V0 = 0x80040000;
	V0 -= 15280;
	AT += V0;
	ZZ_JUMPREGISTER_BEGIN(AT);
	A1 = RA & 0xFFFF;
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x8003C450,ZZ_3C228_228);
	ZZ_JUMPREGISTER(0x8003C458,ZZ_3C228_230);
	ZZ_JUMPREGISTER(0x8003C460,ZZ_3C228_238);
	ZZ_JUMPREGISTER(0x8003C468,ZZ_3C228_240);
	ZZ_JUMPREGISTER(0x8003C470,ZZ_3C228_248);
	ZZ_JUMPREGISTER(0x8003C478,ZZ_3C228_250);
	ZZ_JUMPREGISTER(0x8003C480,ZZ_3C228_258);
	ZZ_JUMPREGISTER(0x8003C488,ZZ_3C228_260);
	ZZ_JUMPREGISTER(0x8003C490,ZZ_3C228_268);
	ZZ_JUMPREGISTER(0x8003C498,ZZ_3C228_270);
	ZZ_JUMPREGISTER(0x8003C4A0,ZZ_3C228_278);
	ZZ_JUMPREGISTER(0x8003C4A8,ZZ_3C228_280);
	ZZ_JUMPREGISTER(0x8003C4B0,ZZ_3C228_288);
	ZZ_JUMPREGISTER(0x8003C4B8,ZZ_3C228_290);
	ZZ_JUMPREGISTER(0x8003C4C0,ZZ_3C228_298);
	ZZ_JUMPREGISTER(0x8003C4C8,ZZ_3C228_2A0);
	ZZ_JUMPREGISTER(0x8003C4D0,ZZ_3C228_2A8);
	ZZ_JUMPREGISTER(0x8003C4D8,ZZ_3C228_2B0);
	ZZ_JUMPREGISTER(0x8003C4E0,ZZ_3C228_2B8);
	ZZ_JUMPREGISTER(0x8003C4E8,ZZ_3C228_2C0);
	ZZ_JUMPREGISTER(0x8003C4F0,ZZ_3C228_2C8);
	ZZ_JUMPREGISTER(0x8003C4F8,ZZ_3C228_2D0);
	ZZ_JUMPREGISTER(0x8003C500,ZZ_3C228_2D8);
	ZZ_JUMPREGISTER(0x8003C508,ZZ_3C228_2E0);
	ZZ_JUMPREGISTER(0x8003C510,ZZ_3C228_2E8);
	ZZ_JUMPREGISTER(0x8003C518,ZZ_3C228_2F0);
	ZZ_JUMPREGISTER_END();
ZZ_3C228_228:
	A1 += A0;
	ZZ_CLOCKCYCLES(2,0x8003C598);
	goto ZZ_3C228_370;
ZZ_3C228_230:
	A1 += A0;
	ZZ_CLOCKCYCLES(2,0x8003C5B4);
	goto ZZ_3C228_38C;
ZZ_3C228_238:
	A1 += A0;
	ZZ_CLOCKCYCLES(2,0x8003C5E0);
	goto ZZ_3C228_3B8;
ZZ_3C228_240:
	A1 += A0;
	ZZ_CLOCKCYCLES(2,0x8003C5FC);
	goto ZZ_3C228_3D4;
ZZ_3C228_248:
	A1 += A0;
	ZZ_CLOCKCYCLES(2,0x8003C628);
	goto ZZ_3C228_400;
ZZ_3C228_250:
	A1 += A0;
	ZZ_CLOCKCYCLES(2,0x8003C644);
	goto ZZ_3C228_41C;
ZZ_3C228_258:
	A1 += A0;
	ZZ_CLOCKCYCLES(2,0x8003C6BC);
	goto ZZ_3C228_494;
ZZ_3C228_260:
	A1 += A0;
	ZZ_CLOCKCYCLES(2,0x8003C6DC);
	goto ZZ_3C228_4B4;
ZZ_3C228_268:
	A1 += A0;
	ZZ_CLOCKCYCLES(2,0x8003C700);
	goto ZZ_3C228_4D8;
ZZ_3C228_270:
	A1 += A0;
	ZZ_CLOCKCYCLES(2,0x8003C728);
	goto ZZ_3C228_500;
ZZ_3C228_278:
	A1 += A0;
	ZZ_CLOCKCYCLES(2,0x8003C7A8);
	goto ZZ_3C228_580;
ZZ_3C228_280:
	A1 += A0;
	ZZ_CLOCKCYCLES(2,0x8003C7C8);
	goto ZZ_3C228_5A0;
ZZ_3C228_288:
	A1 += A0;
	ZZ_CLOCKCYCLES(2,0x8003C7EC);
	goto ZZ_3C228_5C4;
ZZ_3C228_290:
	A1 += A0;
	ZZ_CLOCKCYCLES(2,0x8003C814);
	goto ZZ_3C228_5EC;
ZZ_3C228_298:
	A1 += A0;
	ZZ_CLOCKCYCLES(2,0x8003C894);
	goto ZZ_3C228_66C;
ZZ_3C228_2A0:
	A1 += A0;
	ZZ_CLOCKCYCLES(2,0x8003C8B4);
	goto ZZ_3C228_68C;
ZZ_3C228_2A8:
	A1 += A0;
	ZZ_CLOCKCYCLES(2,0x8003C8D8);
	goto ZZ_3C228_6B0;
ZZ_3C228_2B0:
	A1 += A0;
	ZZ_CLOCKCYCLES(2,0x8003C900);
	goto ZZ_3C228_6D8;
ZZ_3C228_2B8:
	A1 += A0;
	ZZ_CLOCKCYCLES(2,0x8003C9A8);
	goto ZZ_3C228_780;
ZZ_3C228_2C0:
	A1 += A0;
	ZZ_CLOCKCYCLES(2,0x8003C9C8);
	goto ZZ_3C228_7A0;
ZZ_3C228_2C8:
	A1 += A0;
	ZZ_CLOCKCYCLES(2,0x8003C9EC);
	goto ZZ_3C228_7C4;
ZZ_3C228_2D0:
	A1 += A0;
	ZZ_CLOCKCYCLES(2,0x8003CA14);
	goto ZZ_3C228_7EC;
ZZ_3C228_2D8:
	A1 += A0;
	ZZ_CLOCKCYCLES(2,0x8003CA3C);
	goto ZZ_3C228_814;
ZZ_3C228_2E0:
	A1 += A0;
	ZZ_CLOCKCYCLES(2,0x8003CA64);
	goto ZZ_3C228_83C;
ZZ_3C228_2E8:
	A1 += A0;
	ZZ_CLOCKCYCLES(2,0x8003CA90);
	goto ZZ_3C228_868;
ZZ_3C228_2F0:
	A1 += A0;
	ZZ_CLOCKCYCLES(2,0x8003CAC0);
	goto ZZ_3C228_898;
ZZ_3C228_2F8:
	AT = 0x80040000;
	AT -= 15048;
	V0 = FP << 3;
	AT += V0;
	ZZ_JUMPREGISTER_BEGIN(AT);
	FP += 1;
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x8003C538,ZZ_3C228_310);
	ZZ_JUMPREGISTER(0x8003C540,ZZ_3C228_318);
	ZZ_JUMPREGISTER(0x8003C548,ZZ_3C228_320);
	ZZ_JUMPREGISTER(0x8003C550,ZZ_3C228_328);
	ZZ_JUMPREGISTER(0x8003C558,ZZ_3C228_330);
	ZZ_JUMPREGISTER(0x8003C560,ZZ_3C228_338);
	ZZ_JUMPREGISTER(0x8003C568,ZZ_3C228_340);
	ZZ_JUMPREGISTER_END();
ZZ_3C228_310:
	S7 = RA;
	ZZ_CLOCKCYCLES(2,0x8003C360);
	goto ZZ_3C228_138;
ZZ_3C228_318:
	T8 = RA;
	ZZ_CLOCKCYCLES(2,0x8003C360);
	goto ZZ_3C228_138;
ZZ_3C228_320:
	T9 = RA;
	ZZ_CLOCKCYCLES(2,0x8003C360);
	goto ZZ_3C228_138;
ZZ_3C228_328:
	GP = RA;
	ZZ_CLOCKCYCLES(2,0x8003C360);
	goto ZZ_3C228_138;
ZZ_3C228_330:
	SP = RA;
	ZZ_CLOCKCYCLES(2,0x8003C360);
	goto ZZ_3C228_138;
ZZ_3C228_338:
	S6 = RA;
	ZZ_CLOCKCYCLES(2,0x8003C360);
	goto ZZ_3C228_138;
ZZ_3C228_340:
	T0 = RA;
	ZZ_CLOCKCYCLES(2,0x8003C360);
	goto ZZ_3C228_138;
ZZ_3C228_350:
	S0 >>= 1;
	AT = T5 + S0;
	AT = (int32_t)AT < (int32_t)R0;
	if (AT)
	{
		V1 = 0;
		ZZ_CLOCKCYCLES(5,0x8003C598);
		goto ZZ_3C228_370;
	}
	V1 = 0;
	AT = EMU_ReadU16(A1);
	V1 |= AT;
	ZZ_CLOCKCYCLES(8,0x8003C520);
	goto ZZ_3C228_2F8;
ZZ_3C228_370:
	T5 += S0;
	AT = (int32_t)T2 < (int32_t)T5;
	if (AT)
	{
		V1 = 0x8000000;
		ZZ_CLOCKCYCLES(4,0x8003C5B4);
		goto ZZ_3C228_38C;
	}
	V1 = 0x8000000;
	AT = EMU_ReadU16(A1 + 2); //+ 0x2
	V1 |= AT;
	ZZ_CLOCKCYCLES(7,0x8003C520);
	goto ZZ_3C228_2F8;
ZZ_3C228_38C:
	T5 = T5 - S0;
	S0 <<= 1;
	ZZ_CLOCKCYCLES(3,0x8003C3E4);
	goto ZZ_3C228_1BC;
ZZ_3C228_398:
	S1 >>= 1;
	AT = T6 + S1;
	AT = (int32_t)AT < (int32_t)R0;
	if (AT)
	{
		V1 = 0x10000000;
		ZZ_CLOCKCYCLES(5,0x8003C5E0);
		goto ZZ_3C228_3B8;
	}
	V1 = 0x10000000;
	AT = EMU_ReadU16(A1);
	V1 |= AT;
	ZZ_CLOCKCYCLES(8,0x8003C520);
	goto ZZ_3C228_2F8;
ZZ_3C228_3B8:
	T6 += S1;
	AT = (int32_t)T3 < (int32_t)T6;
	if (AT)
	{
		V1 = 0x18000000;
		ZZ_CLOCKCYCLES(4,0x8003C5FC);
		goto ZZ_3C228_3D4;
	}
	V1 = 0x18000000;
	AT = EMU_ReadU16(A1 + 2); //+ 0x2
	V1 |= AT;
	ZZ_CLOCKCYCLES(7,0x8003C520);
	goto ZZ_3C228_2F8;
ZZ_3C228_3D4:
	T6 = T6 - S1;
	S1 <<= 1;
	ZZ_CLOCKCYCLES(3,0x8003C3E4);
	goto ZZ_3C228_1BC;
ZZ_3C228_3E0:
	S2 >>= 1;
	AT = T7 + S2;
	AT = (int32_t)AT < (int32_t)R0;
	if (AT)
	{
		V1 = 0x20000000;
		ZZ_CLOCKCYCLES(5,0x8003C628);
		goto ZZ_3C228_400;
	}
	V1 = 0x20000000;
	AT = EMU_ReadU16(A1);
	V1 |= AT;
	ZZ_CLOCKCYCLES(8,0x8003C520);
	goto ZZ_3C228_2F8;
ZZ_3C228_400:
	T7 += S2;
	AT = (int32_t)T4 < (int32_t)T7;
	if (AT)
	{
		V1 = 0x28000000;
		ZZ_CLOCKCYCLES(4,0x8003C644);
		goto ZZ_3C228_41C;
	}
	V1 = 0x28000000;
	AT = EMU_ReadU16(A1 + 2); //+ 0x2
	V1 |= AT;
	ZZ_CLOCKCYCLES(7,0x8003C520);
	goto ZZ_3C228_2F8;
ZZ_3C228_41C:
	T7 = T7 - S2;
	S2 <<= 1;
	ZZ_CLOCKCYCLES(3,0x8003C3E4);
	goto ZZ_3C228_1BC;
ZZ_3C228_428:
	S0 >>= 1;
	S1 >>= 1;
	AT = T5 + S0;
	V0 = (int32_t)AT < (int32_t)R0;
	if (V0)
	{
		AT = (int32_t)T2 < (int32_t)AT;
		ZZ_CLOCKCYCLES(6,0x8003C670);
		goto ZZ_3C228_448;
	}
	AT = (int32_t)T2 < (int32_t)AT;
	V1 = 0x10000;
	RA |= V1;
	ZZ_CLOCKCYCLES(8,0x8003C670);
ZZ_3C228_448:
	if (AT)
	{
		AT = T6 + S1;
		ZZ_CLOCKCYCLES(2,0x8003C680);
		goto ZZ_3C228_458;
	}
	AT = T6 + S1;
	V1 = 0x20000;
	RA |= V1;
	ZZ_CLOCKCYCLES(4,0x8003C680);
ZZ_3C228_458:
	V0 = (int32_t)AT < (int32_t)R0;
	if (V0)
	{
		AT = (int32_t)T3 < (int32_t)AT;
		ZZ_CLOCKCYCLES(3,0x8003C694);
		goto ZZ_3C228_46C;
	}
	AT = (int32_t)T3 < (int32_t)AT;
	V1 = 0x40000;
	RA |= V1;
	ZZ_CLOCKCYCLES(5,0x8003C694);
ZZ_3C228_46C:
	if (AT)
	{
		AT = 0x50000;
		ZZ_CLOCKCYCLES(2,0x8003C6A4);
		goto ZZ_3C228_47C;
	}
	AT = 0x50000;
	V1 = 0x80000;
	RA |= V1;
	ZZ_CLOCKCYCLES(4,0x8003C6A4);
ZZ_3C228_47C:
	V0 = AT & RA;
	if (AT != V0)
	{
		V1 = 0x30000000;
		ZZ_CLOCKCYCLES(3,0x8003C6BC);
		goto ZZ_3C228_494;
	}
	V1 = 0x30000000;
	AT = EMU_ReadU16(A1);
	V1 |= AT;
	ZZ_CLOCKCYCLES(6,0x8003C520);
	goto ZZ_3C228_2F8;
ZZ_3C228_494:
	AT = 0x90000;
	V0 = AT & RA;
	if (AT != V0)
	{
		V1 = 0x38000000;
		ZZ_CLOCKCYCLES(4,0x8003C6E0);
		goto ZZ_3C228_4B8;
	}
	V1 = 0x38000000;
	AT = EMU_ReadU16(A1 + 2); //+ 0x2
	T6 += S1;
	V1 |= AT;
	ZZ_CLOCKCYCLES(8,0x8003C520);
	goto ZZ_3C228_2F8;
ZZ_3C228_4B4:
	T6 = T6 - S1;
	ZZ_CLOCKCYCLES(1,0x8003C6E0);
ZZ_3C228_4B8:
	AT = 0x60000;
	V0 = AT & RA;
	if (AT != V0)
	{
		V1 = 0x40000000;
		ZZ_CLOCKCYCLES(4,0x8003C704);
		goto ZZ_3C228_4DC;
	}
	V1 = 0x40000000;
	AT = EMU_ReadU16(A1 + 4); //+ 0x4
	T5 += S0;
	V1 |= AT;
	ZZ_CLOCKCYCLES(8,0x8003C520);
	goto ZZ_3C228_2F8;
ZZ_3C228_4D8:
	T5 = T5 - S0;
	ZZ_CLOCKCYCLES(1,0x8003C704);
ZZ_3C228_4DC:
	AT = 0xA0000;
	V0 = AT & RA;
	if (AT != V0)
	{
		V1 = 0x48000000;
		ZZ_CLOCKCYCLES(4,0x8003C730);
		goto ZZ_3C228_508;
	}
	V1 = 0x48000000;
	AT = EMU_ReadU16(A1 + 6); //+ 0x6
	T5 += S0;
	T6 += S1;
	V1 |= AT;
	ZZ_CLOCKCYCLES(9,0x8003C520);
	goto ZZ_3C228_2F8;
ZZ_3C228_500:
	T5 = T5 - S0;
	T6 = T6 - S1;
	ZZ_CLOCKCYCLES(2,0x8003C730);
ZZ_3C228_508:
	S0 <<= 1;
	S1 <<= 1;
	ZZ_CLOCKCYCLES(3,0x8003C3E4);
	goto ZZ_3C228_1BC;
ZZ_3C228_514:
	S0 >>= 1;
	S2 >>= 1;
	AT = T5 + S0;
	V0 = (int32_t)AT < (int32_t)R0;
	if (V0)
	{
		AT = (int32_t)T2 < (int32_t)AT;
		ZZ_CLOCKCYCLES(6,0x8003C75C);
		goto ZZ_3C228_534;
	}
	AT = (int32_t)T2 < (int32_t)AT;
	V1 = 0x10000;
	RA |= V1;
	ZZ_CLOCKCYCLES(8,0x8003C75C);
ZZ_3C228_534:
	if (AT)
	{
		AT = T7 + S2;
		ZZ_CLOCKCYCLES(2,0x8003C76C);
		goto ZZ_3C228_544;
	}
	AT = T7 + S2;
	V1 = 0x20000;
	RA |= V1;
	ZZ_CLOCKCYCLES(4,0x8003C76C);
ZZ_3C228_544:
	V0 = (int32_t)AT < (int32_t)R0;
	if (V0)
	{
		AT = (int32_t)T4 < (int32_t)AT;
		ZZ_CLOCKCYCLES(3,0x8003C780);
		goto ZZ_3C228_558;
	}
	AT = (int32_t)T4 < (int32_t)AT;
	V1 = 0x100000;
	RA |= V1;
	ZZ_CLOCKCYCLES(5,0x8003C780);
ZZ_3C228_558:
	if (AT)
	{
		AT = 0x110000;
		ZZ_CLOCKCYCLES(2,0x8003C790);
		goto ZZ_3C228_568;
	}
	AT = 0x110000;
	V1 = 0x200000;
	RA |= V1;
	ZZ_CLOCKCYCLES(4,0x8003C790);
ZZ_3C228_568:
	V0 = AT & RA;
	if (AT != V0)
	{
		V1 = 0x50000000;
		ZZ_CLOCKCYCLES(3,0x8003C7A8);
		goto ZZ_3C228_580;
	}
	V1 = 0x50000000;
	AT = EMU_ReadU16(A1);
	V1 |= AT;
	ZZ_CLOCKCYCLES(6,0x8003C520);
	goto ZZ_3C228_2F8;
ZZ_3C228_580:
	AT = 0x210000;
	V0 = AT & RA;
	if (AT != V0)
	{
		V1 = 0x58000000;
		ZZ_CLOCKCYCLES(4,0x8003C7CC);
		goto ZZ_3C228_5A4;
	}
	V1 = 0x58000000;
	AT = EMU_ReadU16(A1 + 2); //+ 0x2
	T7 += S2;
	V1 |= AT;
	ZZ_CLOCKCYCLES(8,0x8003C520);
	goto ZZ_3C228_2F8;
ZZ_3C228_5A0:
	T7 = T7 - S2;
	ZZ_CLOCKCYCLES(1,0x8003C7CC);
ZZ_3C228_5A4:
	AT = 0x120000;
	V0 = AT & RA;
	if (AT != V0)
	{
		V1 = 0x60000000;
		ZZ_CLOCKCYCLES(4,0x8003C7F0);
		goto ZZ_3C228_5C8;
	}
	V1 = 0x60000000;
	AT = EMU_ReadU16(A1 + 4); //+ 0x4
	T5 += S0;
	V1 |= AT;
	ZZ_CLOCKCYCLES(8,0x8003C520);
	goto ZZ_3C228_2F8;
ZZ_3C228_5C4:
	T5 = T5 - S0;
	ZZ_CLOCKCYCLES(1,0x8003C7F0);
ZZ_3C228_5C8:
	AT = 0x220000;
	V0 = AT & RA;
	if (AT != V0)
	{
		V1 = 0x68000000;
		ZZ_CLOCKCYCLES(4,0x8003C81C);
		goto ZZ_3C228_5F4;
	}
	V1 = 0x68000000;
	AT = EMU_ReadU16(A1 + 6); //+ 0x6
	T5 += S0;
	T7 += S2;
	V1 |= AT;
	ZZ_CLOCKCYCLES(9,0x8003C520);
	goto ZZ_3C228_2F8;
ZZ_3C228_5EC:
	T5 = T5 - S0;
	T7 = T7 - S2;
	ZZ_CLOCKCYCLES(2,0x8003C81C);
ZZ_3C228_5F4:
	S0 <<= 1;
	S2 <<= 1;
	ZZ_CLOCKCYCLES(3,0x8003C3E4);
	goto ZZ_3C228_1BC;
ZZ_3C228_600:
	S1 >>= 1;
	S2 >>= 1;
	AT = T6 + S1;
	V0 = (int32_t)AT < (int32_t)R0;
	if (V0)
	{
		AT = (int32_t)T3 < (int32_t)AT;
		ZZ_CLOCKCYCLES(6,0x8003C848);
		goto ZZ_3C228_620;
	}
	AT = (int32_t)T3 < (int32_t)AT;
	V1 = 0x40000;
	RA |= V1;
	ZZ_CLOCKCYCLES(8,0x8003C848);
ZZ_3C228_620:
	if (AT)
	{
		AT = T7 + S2;
		ZZ_CLOCKCYCLES(2,0x8003C858);
		goto ZZ_3C228_630;
	}
	AT = T7 + S2;
	V1 = 0x80000;
	RA |= V1;
	ZZ_CLOCKCYCLES(4,0x8003C858);
ZZ_3C228_630:
	V0 = (int32_t)AT < (int32_t)R0;
	if (V0)
	{
		AT = (int32_t)T4 < (int32_t)AT;
		ZZ_CLOCKCYCLES(3,0x8003C86C);
		goto ZZ_3C228_644;
	}
	AT = (int32_t)T4 < (int32_t)AT;
	V1 = 0x100000;
	RA |= V1;
	ZZ_CLOCKCYCLES(5,0x8003C86C);
ZZ_3C228_644:
	if (AT)
	{
		AT = 0x140000;
		ZZ_CLOCKCYCLES(2,0x8003C87C);
		goto ZZ_3C228_654;
	}
	AT = 0x140000;
	V1 = 0x200000;
	RA |= V1;
	ZZ_CLOCKCYCLES(4,0x8003C87C);
ZZ_3C228_654:
	V0 = AT & RA;
	if (AT != V0)
	{
		V1 = 0x70000000;
		ZZ_CLOCKCYCLES(3,0x8003C894);
		goto ZZ_3C228_66C;
	}
	V1 = 0x70000000;
	AT = EMU_ReadU16(A1);
	V1 |= AT;
	ZZ_CLOCKCYCLES(6,0x8003C520);
	goto ZZ_3C228_2F8;
ZZ_3C228_66C:
	AT = 0x240000;
	V0 = AT & RA;
	if (AT != V0)
	{
		V1 = 0x78000000;
		ZZ_CLOCKCYCLES(4,0x8003C8B8);
		goto ZZ_3C228_690;
	}
	V1 = 0x78000000;
	AT = EMU_ReadU16(A1 + 2); //+ 0x2
	T7 += S2;
	V1 |= AT;
	ZZ_CLOCKCYCLES(8,0x8003C520);
	goto ZZ_3C228_2F8;
ZZ_3C228_68C:
	T7 = T7 - S2;
	ZZ_CLOCKCYCLES(1,0x8003C8B8);
ZZ_3C228_690:
	AT = 0x180000;
	V0 = AT & RA;
	if (AT != V0)
	{
		V1 = 0x80000000;
		ZZ_CLOCKCYCLES(4,0x8003C8DC);
		goto ZZ_3C228_6B4;
	}
	V1 = 0x80000000;
	AT = EMU_ReadU16(A1 + 4); //+ 0x4
	T6 += S1;
	V1 |= AT;
	ZZ_CLOCKCYCLES(8,0x8003C520);
	goto ZZ_3C228_2F8;
ZZ_3C228_6B0:
	T6 = T6 - S1;
	ZZ_CLOCKCYCLES(1,0x8003C8DC);
ZZ_3C228_6B4:
	AT = 0x280000;
	V0 = AT & RA;
	if (AT != V0)
	{
		V1 = 0x88000000;
		ZZ_CLOCKCYCLES(4,0x8003C908);
		goto ZZ_3C228_6E0;
	}
	V1 = 0x88000000;
	AT = EMU_ReadU16(A1 + 6); //+ 0x6
	T6 += S1;
	T7 += S2;
	V1 |= AT;
	ZZ_CLOCKCYCLES(9,0x8003C520);
	goto ZZ_3C228_2F8;
ZZ_3C228_6D8:
	T6 = T6 - S1;
	T7 = T7 - S2;
	ZZ_CLOCKCYCLES(2,0x8003C908);
ZZ_3C228_6E0:
	S1 <<= 1;
	S2 <<= 1;
	ZZ_CLOCKCYCLES(3,0x8003C3E4);
	goto ZZ_3C228_1BC;
ZZ_3C228_6EC:
	S0 >>= 1;
	S1 >>= 1;
	S2 >>= 1;
	AT = T5 + S0;
	V0 = (int32_t)AT < (int32_t)R0;
	if (V0)
	{
		AT = (int32_t)T2 < (int32_t)AT;
		ZZ_CLOCKCYCLES(7,0x8003C938);
		goto ZZ_3C228_710;
	}
	AT = (int32_t)T2 < (int32_t)AT;
	V1 = 0x10000;
	RA |= V1;
	ZZ_CLOCKCYCLES(9,0x8003C938);
ZZ_3C228_710:
	if (AT)
	{
		AT = T6 + S1;
		ZZ_CLOCKCYCLES(2,0x8003C948);
		goto ZZ_3C228_720;
	}
	AT = T6 + S1;
	V1 = 0x20000;
	RA |= V1;
	ZZ_CLOCKCYCLES(4,0x8003C948);
ZZ_3C228_720:
	V0 = (int32_t)AT < (int32_t)R0;
	if (V0)
	{
		AT = (int32_t)T3 < (int32_t)AT;
		ZZ_CLOCKCYCLES(3,0x8003C95C);
		goto ZZ_3C228_734;
	}
	AT = (int32_t)T3 < (int32_t)AT;
	V1 = 0x40000;
	RA |= V1;
	ZZ_CLOCKCYCLES(5,0x8003C95C);
ZZ_3C228_734:
	if (AT)
	{
		AT = T7 + S2;
		ZZ_CLOCKCYCLES(2,0x8003C96C);
		goto ZZ_3C228_744;
	}
	AT = T7 + S2;
	V1 = 0x80000;
	RA |= V1;
	ZZ_CLOCKCYCLES(4,0x8003C96C);
ZZ_3C228_744:
	V0 = (int32_t)AT < (int32_t)R0;
	if (V0)
	{
		AT = (int32_t)T4 < (int32_t)AT;
		ZZ_CLOCKCYCLES(3,0x8003C980);
		goto ZZ_3C228_758;
	}
	AT = (int32_t)T4 < (int32_t)AT;
	V1 = 0x100000;
	RA |= V1;
	ZZ_CLOCKCYCLES(5,0x8003C980);
ZZ_3C228_758:
	if (AT)
	{
		AT = 0x150000;
		ZZ_CLOCKCYCLES(2,0x8003C990);
		goto ZZ_3C228_768;
	}
	AT = 0x150000;
	V1 = 0x200000;
	RA |= V1;
	ZZ_CLOCKCYCLES(4,0x8003C990);
ZZ_3C228_768:
	V0 = AT & RA;
	if (AT != V0)
	{
		V1 = 0x90000000;
		ZZ_CLOCKCYCLES(3,0x8003C9A8);
		goto ZZ_3C228_780;
	}
	V1 = 0x90000000;
	AT = EMU_ReadU16(A1);
	V1 |= AT;
	ZZ_CLOCKCYCLES(6,0x8003C520);
	goto ZZ_3C228_2F8;
ZZ_3C228_780:
	AT = 0x250000;
	V0 = AT & RA;
	if (AT != V0)
	{
		V1 = 0x98000000;
		ZZ_CLOCKCYCLES(4,0x8003C9CC);
		goto ZZ_3C228_7A4;
	}
	V1 = 0x98000000;
	AT = EMU_ReadU16(A1 + 2); //+ 0x2
	T7 += S2;
	V1 |= AT;
	ZZ_CLOCKCYCLES(8,0x8003C520);
	goto ZZ_3C228_2F8;
ZZ_3C228_7A0:
	T7 = T7 - S2;
	ZZ_CLOCKCYCLES(1,0x8003C9CC);
ZZ_3C228_7A4:
	AT = 0x190000;
	V0 = AT & RA;
	if (AT != V0)
	{
		V1 = 0xA0000000;
		ZZ_CLOCKCYCLES(4,0x8003C9F0);
		goto ZZ_3C228_7C8;
	}
	V1 = 0xA0000000;
	AT = EMU_ReadU16(A1 + 4); //+ 0x4
	T6 += S1;
	V1 |= AT;
	ZZ_CLOCKCYCLES(8,0x8003C520);
	goto ZZ_3C228_2F8;
ZZ_3C228_7C4:
	T6 = T6 - S1;
	ZZ_CLOCKCYCLES(1,0x8003C9F0);
ZZ_3C228_7C8:
	AT = 0x290000;
	V0 = AT & RA;
	if (AT != V0)
	{
		V1 = 0xA8000000;
		ZZ_CLOCKCYCLES(4,0x8003CA1C);
		goto ZZ_3C228_7F4;
	}
	V1 = 0xA8000000;
	AT = EMU_ReadU16(A1 + 6); //+ 0x6
	T6 += S1;
	T7 += S2;
	V1 |= AT;
	ZZ_CLOCKCYCLES(9,0x8003C520);
	goto ZZ_3C228_2F8;
ZZ_3C228_7EC:
	T6 = T6 - S1;
	T7 = T7 - S2;
	ZZ_CLOCKCYCLES(2,0x8003CA1C);
ZZ_3C228_7F4:
	AT = 0x160000;
	V0 = AT & RA;
	if (AT != V0)
	{
		V1 = 0xB0000000;
		ZZ_CLOCKCYCLES(4,0x8003CA40);
		goto ZZ_3C228_818;
	}
	V1 = 0xB0000000;
	AT = EMU_ReadU16(A1 + 8); //+ 0x8
	T5 += S0;
	V1 |= AT;
	ZZ_CLOCKCYCLES(8,0x8003C520);
	goto ZZ_3C228_2F8;
ZZ_3C228_814:
	T5 = T5 - S0;
	ZZ_CLOCKCYCLES(1,0x8003CA40);
ZZ_3C228_818:
	AT = 0x260000;
	V0 = AT & RA;
	if (AT != V0)
	{
		V1 = 0xB8000000;
		ZZ_CLOCKCYCLES(4,0x8003CA6C);
		goto ZZ_3C228_844;
	}
	V1 = 0xB8000000;
	AT = EMU_ReadU16(A1 + 10); //+ 0xA
	T5 += S0;
	T7 += S2;
	V1 |= AT;
	ZZ_CLOCKCYCLES(9,0x8003C520);
	goto ZZ_3C228_2F8;
ZZ_3C228_83C:
	T5 = T5 - S0;
	T7 = T7 - S2;
	ZZ_CLOCKCYCLES(2,0x8003CA6C);
ZZ_3C228_844:
	AT = 0x1A0000;
	V0 = AT & RA;
	if (AT != V0)
	{
		V1 = 0xC0000000;
		ZZ_CLOCKCYCLES(4,0x8003CA98);
		goto ZZ_3C228_870;
	}
	V1 = 0xC0000000;
	AT = EMU_ReadU16(A1 + 12); //+ 0xC
	T5 += S0;
	T6 += S1;
	V1 |= AT;
	ZZ_CLOCKCYCLES(9,0x8003C520);
	goto ZZ_3C228_2F8;
ZZ_3C228_868:
	T5 = T5 - S0;
	T6 = T6 - S1;
	ZZ_CLOCKCYCLES(2,0x8003CA98);
ZZ_3C228_870:
	AT = 0x2A0000;
	V0 = AT & RA;
	if (AT != V0)
	{
		V1 = 0xC8000000;
		ZZ_CLOCKCYCLES(4,0x8003CACC);
		goto ZZ_3C228_8A4;
	}
	V1 = 0xC8000000;
	AT = EMU_ReadU16(A1 + 14); //+ 0xE
	T5 += S0;
	T6 += S1;
	T7 += S2;
	V1 |= AT;
	ZZ_CLOCKCYCLES(10,0x8003C520);
	goto ZZ_3C228_2F8;
ZZ_3C228_898:
	T5 = T5 - S0;
	T6 = T6 - S1;
	T7 = T7 - S2;
	ZZ_CLOCKCYCLES(3,0x8003CACC);
ZZ_3C228_8A4:
	S0 <<= 1;
	S1 <<= 1;
	S2 <<= 1;
	ZZ_CLOCKCYCLES(4,0x8003C3E4);
	goto ZZ_3C228_1BC;
ZZ_3C228_8B4:
	AT = (int32_t)A3 < 512;
	if (!AT)
	{
		AT = A1 << 2;
		ZZ_CLOCKCYCLES(3,0x8003C3E4);
		goto ZZ_3C228_1BC;
	}
	AT = A1 << 2;
	AT &= 0xFFF8;
	AT |= FP;
	V0 = T5 >> 4;
	V0 <<= 16;
	AT |= V0;
	V0 = T7 >> 4;
	V0 <<= 16;
	V1 = T6 >> 4;
	V1 &= 0xFFFF;
	V0 |= V1;
	EMU_Write32(A2,AT);
	EMU_Write32(A2 + 4,V0); //+ 0x4
	A3 += 1;
	A2 += 8;
	ZZ_CLOCKCYCLES(18,0x8003C3E4);
	goto ZZ_3C228_1BC;
#endif
ZZ_MARK_TARGET(0x8003C228,ZZ_3C228);
ZZ_MARK(0x8003C22C);
ZZ_MARK(0x8003C230);
ZZ_MARK(0x8003C234);
ZZ_MARK(0x8003C238);
ZZ_MARK(0x8003C23C);
ZZ_MARK(0x8003C240);
ZZ_MARK(0x8003C244);
ZZ_MARK(0x8003C248);
ZZ_MARK(0x8003C24C);
ZZ_MARK(0x8003C250);
ZZ_MARK(0x8003C254);
ZZ_MARK(0x8003C258);
ZZ_MARK(0x8003C25C);
ZZ_MARK(0x8003C260);
ZZ_MARK(0x8003C264);
ZZ_MARK(0x8003C268);
ZZ_MARK(0x8003C26C);
ZZ_MARK(0x8003C270);
ZZ_MARK(0x8003C274);
ZZ_MARK(0x8003C278);
ZZ_MARK(0x8003C27C);
ZZ_MARK(0x8003C280);
ZZ_MARK(0x8003C284);
ZZ_MARK(0x8003C288);
ZZ_MARK(0x8003C28C);
ZZ_MARK(0x8003C290);
ZZ_MARK(0x8003C294);
ZZ_MARK(0x8003C298);
ZZ_MARK(0x8003C29C);
ZZ_MARK(0x8003C2A0);
ZZ_MARK(0x8003C2A4);
ZZ_MARK(0x8003C2A8);
ZZ_MARK(0x8003C2AC);
ZZ_MARK(0x8003C2B0);
ZZ_MARK(0x8003C2B4);
ZZ_MARK(0x8003C2B8);
ZZ_MARK(0x8003C2BC);
ZZ_MARK(0x8003C2C0);
ZZ_MARK(0x8003C2C4);
ZZ_MARK(0x8003C2C8);
ZZ_MARK(0x8003C2CC);
ZZ_MARK(0x8003C2D0);
ZZ_MARK(0x8003C2D4);
ZZ_MARK(0x8003C2D8);
ZZ_MARK(0x8003C2DC);
ZZ_MARK(0x8003C2E0);
ZZ_MARK(0x8003C2E4);
ZZ_MARK(0x8003C2E8);
ZZ_MARK(0x8003C2EC);
ZZ_MARK(0x8003C2F0);
ZZ_MARK(0x8003C2F4);
ZZ_MARK(0x8003C2F8);
ZZ_MARK(0x8003C2FC);
ZZ_MARK(0x8003C300);
ZZ_MARK(0x8003C304);
ZZ_MARK(0x8003C308);
ZZ_MARK(0x8003C30C);
ZZ_MARK_TARGET(0x8003C310,ZZ_3C228_E8);
ZZ_MARK(0x8003C314);
ZZ_MARK(0x8003C318);
ZZ_MARK(0x8003C31C);
ZZ_MARK(0x8003C320);
ZZ_MARK(0x8003C324);
ZZ_MARK(0x8003C328);
ZZ_MARK(0x8003C32C);
ZZ_MARK(0x8003C330);
ZZ_MARK(0x8003C334);
ZZ_MARK(0x8003C338);
ZZ_MARK(0x8003C33C);
ZZ_MARK(0x8003C340);
ZZ_MARK(0x8003C344);
ZZ_MARK(0x8003C348);
ZZ_MARK(0x8003C34C);
ZZ_MARK(0x8003C350);
ZZ_MARK(0x8003C354);
ZZ_MARK(0x8003C358);
ZZ_MARK(0x8003C35C);
ZZ_MARK_TARGET(0x8003C360,ZZ_3C228_138);
ZZ_MARK(0x8003C364);
ZZ_MARK(0x8003C368);
ZZ_MARK(0x8003C36C);
ZZ_MARK(0x8003C370);
ZZ_MARK(0x8003C374);
ZZ_MARK(0x8003C378);
ZZ_MARK(0x8003C37C);
ZZ_MARK(0x8003C380);
ZZ_MARK(0x8003C384);
ZZ_MARK(0x8003C388);
ZZ_MARK(0x8003C38C);
ZZ_MARK(0x8003C390);
ZZ_MARK(0x8003C394);
ZZ_MARK(0x8003C398);
ZZ_MARK(0x8003C39C);
ZZ_MARK(0x8003C3A0);
ZZ_MARK(0x8003C3A4);
ZZ_MARK(0x8003C3A8);
ZZ_MARK_TARGET(0x8003C3AC,ZZ_3C228_184);
ZZ_MARK(0x8003C3B0);
ZZ_MARK_TARGET(0x8003C3B4,ZZ_3C228_18C);
ZZ_MARK(0x8003C3B8);
ZZ_MARK_TARGET(0x8003C3BC,ZZ_3C228_194);
ZZ_MARK(0x8003C3C0);
ZZ_MARK_TARGET(0x8003C3C4,ZZ_3C228_19C);
ZZ_MARK(0x8003C3C8);
ZZ_MARK_TARGET(0x8003C3CC,ZZ_3C228_1A4);
ZZ_MARK(0x8003C3D0);
ZZ_MARK_TARGET(0x8003C3D4,ZZ_3C228_1AC);
ZZ_MARK(0x8003C3D8);
ZZ_MARK_TARGET(0x8003C3DC,ZZ_3C228_1B4);
ZZ_MARK(0x8003C3E0);
ZZ_MARK_TARGET(0x8003C3E4,ZZ_3C228_1BC);
ZZ_MARK(0x8003C3E8);
ZZ_MARK(0x8003C3EC);
ZZ_MARK(0x8003C3F0);
ZZ_MARK(0x8003C3F4);
ZZ_MARK(0x8003C3F8);
ZZ_MARK(0x8003C3FC);
ZZ_MARK_TARGET(0x8003C400,ZZ_3C228_1D8);
ZZ_MARK(0x8003C404);
ZZ_MARK_TARGET(0x8003C408,ZZ_3C228_1E0);
ZZ_MARK(0x8003C40C);
ZZ_MARK_TARGET(0x8003C410,ZZ_3C228_1E8);
ZZ_MARK(0x8003C414);
ZZ_MARK_TARGET(0x8003C418,ZZ_3C228_1F0);
ZZ_MARK(0x8003C41C);
ZZ_MARK_TARGET(0x8003C420,ZZ_3C228_1F8);
ZZ_MARK(0x8003C424);
ZZ_MARK_TARGET(0x8003C428,ZZ_3C228_200);
ZZ_MARK(0x8003C42C);
ZZ_MARK_TARGET(0x8003C430,ZZ_3C228_208);
ZZ_MARK(0x8003C434);
ZZ_MARK_TARGET(0x8003C438,ZZ_3C228_210);
ZZ_MARK_TARGET(0x8003C43C,ZZ_3C228_214);
ZZ_MARK(0x8003C440);
ZZ_MARK(0x8003C444);
ZZ_MARK(0x8003C448);
ZZ_MARK(0x8003C44C);
ZZ_MARK_TARGET(0x8003C450,ZZ_3C228_228);
ZZ_MARK(0x8003C454);
ZZ_MARK_TARGET(0x8003C458,ZZ_3C228_230);
ZZ_MARK(0x8003C45C);
ZZ_MARK_TARGET(0x8003C460,ZZ_3C228_238);
ZZ_MARK(0x8003C464);
ZZ_MARK_TARGET(0x8003C468,ZZ_3C228_240);
ZZ_MARK(0x8003C46C);
ZZ_MARK_TARGET(0x8003C470,ZZ_3C228_248);
ZZ_MARK(0x8003C474);
ZZ_MARK_TARGET(0x8003C478,ZZ_3C228_250);
ZZ_MARK(0x8003C47C);
ZZ_MARK_TARGET(0x8003C480,ZZ_3C228_258);
ZZ_MARK(0x8003C484);
ZZ_MARK_TARGET(0x8003C488,ZZ_3C228_260);
ZZ_MARK(0x8003C48C);
ZZ_MARK_TARGET(0x8003C490,ZZ_3C228_268);
ZZ_MARK(0x8003C494);
ZZ_MARK_TARGET(0x8003C498,ZZ_3C228_270);
ZZ_MARK(0x8003C49C);
ZZ_MARK_TARGET(0x8003C4A0,ZZ_3C228_278);
ZZ_MARK(0x8003C4A4);
ZZ_MARK_TARGET(0x8003C4A8,ZZ_3C228_280);
ZZ_MARK(0x8003C4AC);
ZZ_MARK_TARGET(0x8003C4B0,ZZ_3C228_288);
ZZ_MARK(0x8003C4B4);
ZZ_MARK_TARGET(0x8003C4B8,ZZ_3C228_290);
ZZ_MARK(0x8003C4BC);
ZZ_MARK_TARGET(0x8003C4C0,ZZ_3C228_298);
ZZ_MARK(0x8003C4C4);
ZZ_MARK_TARGET(0x8003C4C8,ZZ_3C228_2A0);
ZZ_MARK(0x8003C4CC);
ZZ_MARK_TARGET(0x8003C4D0,ZZ_3C228_2A8);
ZZ_MARK(0x8003C4D4);
ZZ_MARK_TARGET(0x8003C4D8,ZZ_3C228_2B0);
ZZ_MARK(0x8003C4DC);
ZZ_MARK_TARGET(0x8003C4E0,ZZ_3C228_2B8);
ZZ_MARK(0x8003C4E4);
ZZ_MARK_TARGET(0x8003C4E8,ZZ_3C228_2C0);
ZZ_MARK(0x8003C4EC);
ZZ_MARK_TARGET(0x8003C4F0,ZZ_3C228_2C8);
ZZ_MARK(0x8003C4F4);
ZZ_MARK_TARGET(0x8003C4F8,ZZ_3C228_2D0);
ZZ_MARK(0x8003C4FC);
ZZ_MARK_TARGET(0x8003C500,ZZ_3C228_2D8);
ZZ_MARK(0x8003C504);
ZZ_MARK_TARGET(0x8003C508,ZZ_3C228_2E0);
ZZ_MARK(0x8003C50C);
ZZ_MARK_TARGET(0x8003C510,ZZ_3C228_2E8);
ZZ_MARK(0x8003C514);
ZZ_MARK_TARGET(0x8003C518,ZZ_3C228_2F0);
ZZ_MARK(0x8003C51C);
ZZ_MARK_TARGET(0x8003C520,ZZ_3C228_2F8);
ZZ_MARK(0x8003C524);
ZZ_MARK(0x8003C528);
ZZ_MARK(0x8003C52C);
ZZ_MARK(0x8003C530);
ZZ_MARK(0x8003C534);
ZZ_MARK_TARGET(0x8003C538,ZZ_3C228_310);
ZZ_MARK(0x8003C53C);
ZZ_MARK_TARGET(0x8003C540,ZZ_3C228_318);
ZZ_MARK(0x8003C544);
ZZ_MARK_TARGET(0x8003C548,ZZ_3C228_320);
ZZ_MARK(0x8003C54C);
ZZ_MARK_TARGET(0x8003C550,ZZ_3C228_328);
ZZ_MARK(0x8003C554);
ZZ_MARK_TARGET(0x8003C558,ZZ_3C228_330);
ZZ_MARK(0x8003C55C);
ZZ_MARK_TARGET(0x8003C560,ZZ_3C228_338);
ZZ_MARK(0x8003C564);
ZZ_MARK_TARGET(0x8003C568,ZZ_3C228_340);
ZZ_MARK(0x8003C56C);
ZZ_MARK_TARGET(0x8003C578,ZZ_3C228_350);
ZZ_MARK(0x8003C57C);
ZZ_MARK(0x8003C580);
ZZ_MARK(0x8003C584);
ZZ_MARK(0x8003C588);
ZZ_MARK(0x8003C58C);
ZZ_MARK(0x8003C590);
ZZ_MARK(0x8003C594);
ZZ_MARK_TARGET(0x8003C598,ZZ_3C228_370);
ZZ_MARK(0x8003C59C);
ZZ_MARK(0x8003C5A0);
ZZ_MARK(0x8003C5A4);
ZZ_MARK(0x8003C5A8);
ZZ_MARK(0x8003C5AC);
ZZ_MARK(0x8003C5B0);
ZZ_MARK_TARGET(0x8003C5B4,ZZ_3C228_38C);
ZZ_MARK(0x8003C5B8);
ZZ_MARK(0x8003C5BC);
ZZ_MARK_TARGET(0x8003C5C0,ZZ_3C228_398);
ZZ_MARK(0x8003C5C4);
ZZ_MARK(0x8003C5C8);
ZZ_MARK(0x8003C5CC);
ZZ_MARK(0x8003C5D0);
ZZ_MARK(0x8003C5D4);
ZZ_MARK(0x8003C5D8);
ZZ_MARK(0x8003C5DC);
ZZ_MARK_TARGET(0x8003C5E0,ZZ_3C228_3B8);
ZZ_MARK(0x8003C5E4);
ZZ_MARK(0x8003C5E8);
ZZ_MARK(0x8003C5EC);
ZZ_MARK(0x8003C5F0);
ZZ_MARK(0x8003C5F4);
ZZ_MARK(0x8003C5F8);
ZZ_MARK_TARGET(0x8003C5FC,ZZ_3C228_3D4);
ZZ_MARK(0x8003C600);
ZZ_MARK(0x8003C604);
ZZ_MARK_TARGET(0x8003C608,ZZ_3C228_3E0);
ZZ_MARK(0x8003C60C);
ZZ_MARK(0x8003C610);
ZZ_MARK(0x8003C614);
ZZ_MARK(0x8003C618);
ZZ_MARK(0x8003C61C);
ZZ_MARK(0x8003C620);
ZZ_MARK(0x8003C624);
ZZ_MARK_TARGET(0x8003C628,ZZ_3C228_400);
ZZ_MARK(0x8003C62C);
ZZ_MARK(0x8003C630);
ZZ_MARK(0x8003C634);
ZZ_MARK(0x8003C638);
ZZ_MARK(0x8003C63C);
ZZ_MARK(0x8003C640);
ZZ_MARK_TARGET(0x8003C644,ZZ_3C228_41C);
ZZ_MARK(0x8003C648);
ZZ_MARK(0x8003C64C);
ZZ_MARK_TARGET(0x8003C650,ZZ_3C228_428);
ZZ_MARK(0x8003C654);
ZZ_MARK(0x8003C658);
ZZ_MARK(0x8003C65C);
ZZ_MARK(0x8003C660);
ZZ_MARK(0x8003C664);
ZZ_MARK(0x8003C668);
ZZ_MARK(0x8003C66C);
ZZ_MARK_TARGET(0x8003C670,ZZ_3C228_448);
ZZ_MARK(0x8003C674);
ZZ_MARK(0x8003C678);
ZZ_MARK(0x8003C67C);
ZZ_MARK_TARGET(0x8003C680,ZZ_3C228_458);
ZZ_MARK(0x8003C684);
ZZ_MARK(0x8003C688);
ZZ_MARK(0x8003C68C);
ZZ_MARK(0x8003C690);
ZZ_MARK_TARGET(0x8003C694,ZZ_3C228_46C);
ZZ_MARK(0x8003C698);
ZZ_MARK(0x8003C69C);
ZZ_MARK(0x8003C6A0);
ZZ_MARK_TARGET(0x8003C6A4,ZZ_3C228_47C);
ZZ_MARK(0x8003C6A8);
ZZ_MARK(0x8003C6AC);
ZZ_MARK(0x8003C6B0);
ZZ_MARK(0x8003C6B4);
ZZ_MARK(0x8003C6B8);
ZZ_MARK_TARGET(0x8003C6BC,ZZ_3C228_494);
ZZ_MARK(0x8003C6C0);
ZZ_MARK(0x8003C6C4);
ZZ_MARK(0x8003C6C8);
ZZ_MARK(0x8003C6CC);
ZZ_MARK(0x8003C6D0);
ZZ_MARK(0x8003C6D4);
ZZ_MARK(0x8003C6D8);
ZZ_MARK_TARGET(0x8003C6DC,ZZ_3C228_4B4);
ZZ_MARK_TARGET(0x8003C6E0,ZZ_3C228_4B8);
ZZ_MARK(0x8003C6E4);
ZZ_MARK(0x8003C6E8);
ZZ_MARK(0x8003C6EC);
ZZ_MARK(0x8003C6F0);
ZZ_MARK(0x8003C6F4);
ZZ_MARK(0x8003C6F8);
ZZ_MARK(0x8003C6FC);
ZZ_MARK_TARGET(0x8003C700,ZZ_3C228_4D8);
ZZ_MARK_TARGET(0x8003C704,ZZ_3C228_4DC);
ZZ_MARK(0x8003C708);
ZZ_MARK(0x8003C70C);
ZZ_MARK(0x8003C710);
ZZ_MARK(0x8003C714);
ZZ_MARK(0x8003C718);
ZZ_MARK(0x8003C71C);
ZZ_MARK(0x8003C720);
ZZ_MARK(0x8003C724);
ZZ_MARK_TARGET(0x8003C728,ZZ_3C228_500);
ZZ_MARK(0x8003C72C);
ZZ_MARK_TARGET(0x8003C730,ZZ_3C228_508);
ZZ_MARK(0x8003C734);
ZZ_MARK(0x8003C738);
ZZ_MARK_TARGET(0x8003C73C,ZZ_3C228_514);
ZZ_MARK(0x8003C740);
ZZ_MARK(0x8003C744);
ZZ_MARK(0x8003C748);
ZZ_MARK(0x8003C74C);
ZZ_MARK(0x8003C750);
ZZ_MARK(0x8003C754);
ZZ_MARK(0x8003C758);
ZZ_MARK_TARGET(0x8003C75C,ZZ_3C228_534);
ZZ_MARK(0x8003C760);
ZZ_MARK(0x8003C764);
ZZ_MARK(0x8003C768);
ZZ_MARK_TARGET(0x8003C76C,ZZ_3C228_544);
ZZ_MARK(0x8003C770);
ZZ_MARK(0x8003C774);
ZZ_MARK(0x8003C778);
ZZ_MARK(0x8003C77C);
ZZ_MARK_TARGET(0x8003C780,ZZ_3C228_558);
ZZ_MARK(0x8003C784);
ZZ_MARK(0x8003C788);
ZZ_MARK(0x8003C78C);
ZZ_MARK_TARGET(0x8003C790,ZZ_3C228_568);
ZZ_MARK(0x8003C794);
ZZ_MARK(0x8003C798);
ZZ_MARK(0x8003C79C);
ZZ_MARK(0x8003C7A0);
ZZ_MARK(0x8003C7A4);
ZZ_MARK_TARGET(0x8003C7A8,ZZ_3C228_580);
ZZ_MARK(0x8003C7AC);
ZZ_MARK(0x8003C7B0);
ZZ_MARK(0x8003C7B4);
ZZ_MARK(0x8003C7B8);
ZZ_MARK(0x8003C7BC);
ZZ_MARK(0x8003C7C0);
ZZ_MARK(0x8003C7C4);
ZZ_MARK_TARGET(0x8003C7C8,ZZ_3C228_5A0);
ZZ_MARK_TARGET(0x8003C7CC,ZZ_3C228_5A4);
ZZ_MARK(0x8003C7D0);
ZZ_MARK(0x8003C7D4);
ZZ_MARK(0x8003C7D8);
ZZ_MARK(0x8003C7DC);
ZZ_MARK(0x8003C7E0);
ZZ_MARK(0x8003C7E4);
ZZ_MARK(0x8003C7E8);
ZZ_MARK_TARGET(0x8003C7EC,ZZ_3C228_5C4);
ZZ_MARK_TARGET(0x8003C7F0,ZZ_3C228_5C8);
ZZ_MARK(0x8003C7F4);
ZZ_MARK(0x8003C7F8);
ZZ_MARK(0x8003C7FC);
ZZ_MARK(0x8003C800);
ZZ_MARK(0x8003C804);
ZZ_MARK(0x8003C808);
ZZ_MARK(0x8003C80C);
ZZ_MARK(0x8003C810);
ZZ_MARK_TARGET(0x8003C814,ZZ_3C228_5EC);
ZZ_MARK(0x8003C818);
ZZ_MARK_TARGET(0x8003C81C,ZZ_3C228_5F4);
ZZ_MARK(0x8003C820);
ZZ_MARK(0x8003C824);
ZZ_MARK_TARGET(0x8003C828,ZZ_3C228_600);
ZZ_MARK(0x8003C82C);
ZZ_MARK(0x8003C830);
ZZ_MARK(0x8003C834);
ZZ_MARK(0x8003C838);
ZZ_MARK(0x8003C83C);
ZZ_MARK(0x8003C840);
ZZ_MARK(0x8003C844);
ZZ_MARK_TARGET(0x8003C848,ZZ_3C228_620);
ZZ_MARK(0x8003C84C);
ZZ_MARK(0x8003C850);
ZZ_MARK(0x8003C854);
ZZ_MARK_TARGET(0x8003C858,ZZ_3C228_630);
ZZ_MARK(0x8003C85C);
ZZ_MARK(0x8003C860);
ZZ_MARK(0x8003C864);
ZZ_MARK(0x8003C868);
ZZ_MARK_TARGET(0x8003C86C,ZZ_3C228_644);
ZZ_MARK(0x8003C870);
ZZ_MARK(0x8003C874);
ZZ_MARK(0x8003C878);
ZZ_MARK_TARGET(0x8003C87C,ZZ_3C228_654);
ZZ_MARK(0x8003C880);
ZZ_MARK(0x8003C884);
ZZ_MARK(0x8003C888);
ZZ_MARK(0x8003C88C);
ZZ_MARK(0x8003C890);
ZZ_MARK_TARGET(0x8003C894,ZZ_3C228_66C);
ZZ_MARK(0x8003C898);
ZZ_MARK(0x8003C89C);
ZZ_MARK(0x8003C8A0);
ZZ_MARK(0x8003C8A4);
ZZ_MARK(0x8003C8A8);
ZZ_MARK(0x8003C8AC);
ZZ_MARK(0x8003C8B0);
ZZ_MARK_TARGET(0x8003C8B4,ZZ_3C228_68C);
ZZ_MARK_TARGET(0x8003C8B8,ZZ_3C228_690);
ZZ_MARK(0x8003C8BC);
ZZ_MARK(0x8003C8C0);
ZZ_MARK(0x8003C8C4);
ZZ_MARK(0x8003C8C8);
ZZ_MARK(0x8003C8CC);
ZZ_MARK(0x8003C8D0);
ZZ_MARK(0x8003C8D4);
ZZ_MARK_TARGET(0x8003C8D8,ZZ_3C228_6B0);
ZZ_MARK_TARGET(0x8003C8DC,ZZ_3C228_6B4);
ZZ_MARK(0x8003C8E0);
ZZ_MARK(0x8003C8E4);
ZZ_MARK(0x8003C8E8);
ZZ_MARK(0x8003C8EC);
ZZ_MARK(0x8003C8F0);
ZZ_MARK(0x8003C8F4);
ZZ_MARK(0x8003C8F8);
ZZ_MARK(0x8003C8FC);
ZZ_MARK_TARGET(0x8003C900,ZZ_3C228_6D8);
ZZ_MARK(0x8003C904);
ZZ_MARK_TARGET(0x8003C908,ZZ_3C228_6E0);
ZZ_MARK(0x8003C90C);
ZZ_MARK(0x8003C910);
ZZ_MARK_TARGET(0x8003C914,ZZ_3C228_6EC);
ZZ_MARK(0x8003C918);
ZZ_MARK(0x8003C91C);
ZZ_MARK(0x8003C920);
ZZ_MARK(0x8003C924);
ZZ_MARK(0x8003C928);
ZZ_MARK(0x8003C92C);
ZZ_MARK(0x8003C930);
ZZ_MARK(0x8003C934);
ZZ_MARK_TARGET(0x8003C938,ZZ_3C228_710);
ZZ_MARK(0x8003C93C);
ZZ_MARK(0x8003C940);
ZZ_MARK(0x8003C944);
ZZ_MARK_TARGET(0x8003C948,ZZ_3C228_720);
ZZ_MARK(0x8003C94C);
ZZ_MARK(0x8003C950);
ZZ_MARK(0x8003C954);
ZZ_MARK(0x8003C958);
ZZ_MARK_TARGET(0x8003C95C,ZZ_3C228_734);
ZZ_MARK(0x8003C960);
ZZ_MARK(0x8003C964);
ZZ_MARK(0x8003C968);
ZZ_MARK_TARGET(0x8003C96C,ZZ_3C228_744);
ZZ_MARK(0x8003C970);
ZZ_MARK(0x8003C974);
ZZ_MARK(0x8003C978);
ZZ_MARK(0x8003C97C);
ZZ_MARK_TARGET(0x8003C980,ZZ_3C228_758);
ZZ_MARK(0x8003C984);
ZZ_MARK(0x8003C988);
ZZ_MARK(0x8003C98C);
ZZ_MARK_TARGET(0x8003C990,ZZ_3C228_768);
ZZ_MARK(0x8003C994);
ZZ_MARK(0x8003C998);
ZZ_MARK(0x8003C99C);
ZZ_MARK(0x8003C9A0);
ZZ_MARK(0x8003C9A4);
ZZ_MARK_TARGET(0x8003C9A8,ZZ_3C228_780);
ZZ_MARK(0x8003C9AC);
ZZ_MARK(0x8003C9B0);
ZZ_MARK(0x8003C9B4);
ZZ_MARK(0x8003C9B8);
ZZ_MARK(0x8003C9BC);
ZZ_MARK(0x8003C9C0);
ZZ_MARK(0x8003C9C4);
ZZ_MARK_TARGET(0x8003C9C8,ZZ_3C228_7A0);
ZZ_MARK_TARGET(0x8003C9CC,ZZ_3C228_7A4);
ZZ_MARK(0x8003C9D0);
ZZ_MARK(0x8003C9D4);
ZZ_MARK(0x8003C9D8);
ZZ_MARK(0x8003C9DC);
ZZ_MARK(0x8003C9E0);
ZZ_MARK(0x8003C9E4);
ZZ_MARK(0x8003C9E8);
ZZ_MARK_TARGET(0x8003C9EC,ZZ_3C228_7C4);
ZZ_MARK_TARGET(0x8003C9F0,ZZ_3C228_7C8);
ZZ_MARK(0x8003C9F4);
ZZ_MARK(0x8003C9F8);
ZZ_MARK(0x8003C9FC);
ZZ_MARK(0x8003CA00);
ZZ_MARK(0x8003CA04);
ZZ_MARK(0x8003CA08);
ZZ_MARK(0x8003CA0C);
ZZ_MARK(0x8003CA10);
ZZ_MARK_TARGET(0x8003CA14,ZZ_3C228_7EC);
ZZ_MARK(0x8003CA18);
ZZ_MARK_TARGET(0x8003CA1C,ZZ_3C228_7F4);
ZZ_MARK(0x8003CA20);
ZZ_MARK(0x8003CA24);
ZZ_MARK(0x8003CA28);
ZZ_MARK(0x8003CA2C);
ZZ_MARK(0x8003CA30);
ZZ_MARK(0x8003CA34);
ZZ_MARK(0x8003CA38);
ZZ_MARK_TARGET(0x8003CA3C,ZZ_3C228_814);
ZZ_MARK_TARGET(0x8003CA40,ZZ_3C228_818);
ZZ_MARK(0x8003CA44);
ZZ_MARK(0x8003CA48);
ZZ_MARK(0x8003CA4C);
ZZ_MARK(0x8003CA50);
ZZ_MARK(0x8003CA54);
ZZ_MARK(0x8003CA58);
ZZ_MARK(0x8003CA5C);
ZZ_MARK(0x8003CA60);
ZZ_MARK_TARGET(0x8003CA64,ZZ_3C228_83C);
ZZ_MARK(0x8003CA68);
ZZ_MARK_TARGET(0x8003CA6C,ZZ_3C228_844);
ZZ_MARK(0x8003CA70);
ZZ_MARK(0x8003CA74);
ZZ_MARK(0x8003CA78);
ZZ_MARK(0x8003CA7C);
ZZ_MARK(0x8003CA80);
ZZ_MARK(0x8003CA84);
ZZ_MARK(0x8003CA88);
ZZ_MARK(0x8003CA8C);
ZZ_MARK_TARGET(0x8003CA90,ZZ_3C228_868);
ZZ_MARK(0x8003CA94);
ZZ_MARK_TARGET(0x8003CA98,ZZ_3C228_870);
ZZ_MARK(0x8003CA9C);
ZZ_MARK(0x8003CAA0);
ZZ_MARK(0x8003CAA4);
ZZ_MARK(0x8003CAA8);
ZZ_MARK(0x8003CAAC);
ZZ_MARK(0x8003CAB0);
ZZ_MARK(0x8003CAB4);
ZZ_MARK(0x8003CAB8);
ZZ_MARK(0x8003CABC);
ZZ_MARK_TARGET(0x8003CAC0,ZZ_3C228_898);
ZZ_MARK(0x8003CAC4);
ZZ_MARK(0x8003CAC8);
ZZ_MARK_TARGET(0x8003CACC,ZZ_3C228_8A4);
ZZ_MARK(0x8003CAD0);
ZZ_MARK(0x8003CAD4);
ZZ_MARK(0x8003CAD8);
ZZ_MARK_TARGET(0x8003CADC,ZZ_3C228_8B4);
ZZ_MARK(0x8003CAE0);
ZZ_MARK(0x8003CAE4);
ZZ_MARK(0x8003CAE8);
ZZ_MARK(0x8003CAEC);
ZZ_MARK(0x8003CAF0);
ZZ_MARK(0x8003CAF4);
ZZ_MARK(0x8003CAF8);
ZZ_MARK(0x8003CAFC);
ZZ_MARK(0x8003CB00);
ZZ_MARK(0x8003CB04);
ZZ_MARK(0x8003CB08);
ZZ_MARK(0x8003CB0C);
ZZ_MARK(0x8003CB10);
ZZ_MARK(0x8003CB14);
ZZ_MARK(0x8003CB18);
ZZ_MARK(0x8003CB1C);
ZZ_MARK(0x8003CB20);
