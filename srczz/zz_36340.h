#ifdef ZZ_INCLUDE_CODE
ZZ_36340:
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
	T7 = EMU_ReadU32(SP + 16); //+ 0x10
	S6 = EMU_ReadU32(SP + 20); //+ 0x14
	T3 = EMU_ReadU32(T7);
	SP = 0x1F800000;
	SP |= 0xE0;
	EMU_Write32(SP,A3);
	GP = 0xFF0000;
	GP |= 0xFFFF;
	T7 = 0x60;
	T0 = 0x1F800000;
	T0 |= 0x100;
	T5 = EMU_ReadU32(A0);
	T2 = A0 + 2;
	T2 += T5;
	T2 += T5;
	T4 = 0xFFFF;
	A0 = 0x2000000;
	AT = EMU_ReadU16(T2);
	A2 <<= 2;
	V1 = 0x1FFC;
	ZZ_CLOCKCYCLES(37,0x800363D4);
ZZ_36340_94:
	T2 -= 2;
	FP = AT >> 12;
	if (FP == T4)
	{
		AT &= 0xFFF;
		ZZ_CLOCKCYCLES(4,0x80036418);
		goto ZZ_36340_D8;
	}
	AT &= 0xFFF;
	T4 = FP;
	RA = T4 << 6;
	V0 = RA + T0;
	SP = EMU_ReadU32(V0 + 4); //+ 0x4
	FP = EMU_ReadU32(V0 + 8); //+ 0x8
	RA = EMU_ReadU32(V0 + 12); //+ 0xC
	GTE_SetRegister(37,SP);
	GTE_SetRegister(38,FP);
	GTE_SetRegister(39,RA);
	S7 = EMU_ReadU32(V0 + 20); //+ 0x14
	T8 = EMU_ReadU32(V0 + 24); //+ 0x18
	T9 = EMU_ReadU32(V0 + 28); //+ 0x1C
	A3 = V0 + 32;
	ZZ_CLOCKCYCLES(17,0x80036418);
ZZ_36340_D8:
	AT <<= 3;
	T1 = S7 + AT;
	AT = EMU_ReadU32(T1);
	T1 = EMU_ReadU32(T1 + 4); //+ 0x4
	V0 = AT << 12;
	SP = T1 & 0xFF;
	V0 |= SP;
	S0 = T1 >> 17;
	S0 &= 0x7FF8;
	S0 += T8;
	S1 = T1 >> 5;
	S1 &= 0x7FF8;
	S1 += T8;
	S2 = AT >> 17;
	S2 &= 0x7FF8;
	S2 += T8;
	S3 = EMU_ReadU32(S0);
	S0 = EMU_ReadU32(S0 + 4); //+ 0x4
	S4 = EMU_ReadU32(S1);
	S1 = EMU_ReadU32(S1 + 4); //+ 0x4
	S5 = EMU_ReadU32(S2);
	S2 = EMU_ReadU32(S2 + 4); //+ 0x4
	T1 = 0x1F800000;
	T1 |= 0x48;
	RA = EMU_ReadU32(T1 + 12); //+ 0xC
	SP = S0 & 0x1;
	FP = S1 & 0x1;
	FP <<= 1;
	SP |= FP;
	FP = S2 & 0x1;
	FP <<= 2;
	AT = SP | FP;
	FP = AT | RA;
	if (!FP)
	{
		GTE_SetRegister(8,RA);
		ZZ_CLOCKCYCLES(35,0x800368C8);
		goto ZZ_36340_588;
	}
	GTE_SetRegister(8,RA);
	SP = EMU_ReadU32(T1);
	FP = EMU_ReadU32(T1 + 4); //+ 0x4
	RA = EMU_ReadU32(T1 + 8); //+ 0x8
	GTE_SetRegister(53,SP);
	GTE_SetRegister(54,FP);
	GTE_SetRegister(55,RA);
	RA = 0x80030000;
	RA += 25812;
	SP = AT << 7;
	RA += SP;
	ZZ_JUMPREGISTER_BEGIN(RA);
	FP = ~GP;
	ZZ_CLOCKCYCLES_JR(47);
	ZZ_JUMPREGISTER(0x8001A0B4,ZZ_19F90_124);
	ZZ_JUMPREGISTER_END();
ZZ_36340_588:
	AT = 0xFFF80000;
	AT |= 0xFFF8;
	SP = S0 & AT;
	FP = S1 & AT;
	RA = S2 & AT;
	GTE_SetRegister(0,SP);
	GTE_SetRegister(2,FP);
	GTE_SetRegister(4,RA);
	AT = 0x70000;
	AT |= 0x6;
	SP = S3 >> 24;
	SP <<= 3;
	S0 &= AT;
	T1 = S0 << 10;
	SP |= T1;
	T1 = S0 >> 3;
	SP |= T1;
	FP = S4 >> 24;
	FP <<= 3;
	S1 &= AT;
	T1 = S1 << 10;
	FP |= T1;
	T1 = S1 >> 3;
	FP |= T1;
	RA = S5 >> 24;
	RA <<= 3;
	S2 &= AT;
	T1 = S2 << 10;
	RA |= T1;
	T1 = S2 >> 3;
	RA |= T1;
	GTE_SetRegister(1,SP);
	GTE_SetRegister(3,FP);
	GTE_SetRegister(5,RA);
	FP = V0 >> 20;
	GTE_RotateTranslateProjectTriple();
	FP <<= 2;
	T6 = T9 + FP;
	T1 = EMU_ReadU32(T6);
	S2 = 0x34000000;
	T1 >>= 24;
	SP = T1 & 0x80;
	if (!SP)
	{
		S3 &= GP;
		ZZ_CLOCKCYCLES(44,0x80036B00);
		goto ZZ_36340_7C0;
	}
	S3 &= GP;
	EMU_Write32(T3 + 8,GTE_GetRegister(12)); //+ 0x8
	EMU_Write32(T3 + 20,GTE_GetRegister(13)); //+ 0x14
	EMU_Write32(T3 + 32,GTE_GetRegister(14)); //+ 0x20
	FP = T1 & T7;
	if (FP == T7)
	{
		S3 |= S2;
		ZZ_CLOCKCYCLES(50,0x80036994);
		goto ZZ_36340_654;
	}
	S3 |= S2;
	S3 |= A0;
	ZZ_CLOCKCYCLES(51,0x80036994);
ZZ_36340_654:
	EMU_Write32(T3 + 4,S3); //+ 0x4
	EMU_Write32(T3 + 16,S4); //+ 0x10
	EMU_Write32(T3 + 28,S5); //+ 0x1C
	RA = V0 >> 15;
	RA &= 0x1C;
	AT = RA + A3;
	RA = V0 & 0x1E;
	if (!RA)
	{
		SP = V0 >> 5;
		ZZ_CLOCKCYCLES(9,0x800369E8);
		goto ZZ_36340_6A8;
	}
	SP = V0 >> 5;
	FP = 0x1F800000;
	FP |= 0xE0;
	FP = EMU_ReadU32(FP);
	SP &= 0x7;
	FP >>= SP;
	SP = V0 >> 12;
	SP &= 0x1F;
	SP += FP;
	FP = RA | 0x1;
	SP &= FP;
	SP <<= 2;
	T6 += SP;
	ZZ_CLOCKCYCLES(21,0x800369E8);
ZZ_36340_6A8:
	S3 = EMU_ReadU32(T6 + 4); //+ 0x4
	S4 = EMU_ReadU32(AT);
	SP = S3 >> 22;
	SP <<= 3;
	T6 = S6 + SP;
	S0 = EMU_ReadU32(T6);
	T6 = EMU_ReadU16(T6 + 4); //+ 0x4
	S5 = S3 >> 20;
	S5 &= 0x3;
	SP = S5 << 7;
	FP = S4 & 0x1C;
	SP |= FP;
	FP = S3 >> 18;
	FP &= 0x3;
	SP |= FP;
	FP = T1 & 0x60;
	SP |= FP;
	SP <<= 16;
	FP = S3 & 0x1F;
	FP <<= 2;
	RA = S4 & 0x80;
	FP |= RA;
	RA = FP << 8;
	FP = S3 >> 10;
	FP &= 0xF8;
	FP >>= S5;
	S5 = FP | RA;
	FP = S0 >> 16;
	FP += S5;
	RA = SP | FP;
	SP = T1 & 0xF;
	FP = S3 & 0x1FC0;
	SP |= FP;
	FP = S4 >> 4;
	FP &= 0xFFF0;
	SP |= FP;
	SP <<= 16;
	FP = S0 & 0xFFFF;
	FP += S5;
	FP |= SP;
	T6 += S5;
	EMU_Write32(T3 + 12,FP); //+ 0xC
	EMU_Write32(T3 + 24,RA); //+ 0x18
	EMU_Write16(T3 + 36,T6); //+ 0x24
	SP = GTE_GetRegister(17);
	FP = GTE_GetRegister(18);
	RA = GTE_GetRegister(19);
	SP += FP;
	SP += RA;
	SP >>= 5;
	SP <<= 2;
	SP = EMU_CheckedSubtract(A2,SP);
	SP &= 0x1FFC;
	FP = (int32_t)SP < (int32_t)V1;
	if (!FP)
	{
		T6 = A1 + V1;
		ZZ_CLOCKCYCLES(56,0x80036ADC);
		goto ZZ_36340_79C;
	}
	T6 = A1 + V1;
	V1 = SP;
	if ((int32_t)V1 >= 0)
	{
		T6 = A1 + V1;
		ZZ_CLOCKCYCLES(59,0x80036ADC);
		goto ZZ_36340_79C;
	}
	T6 = A1 + V1;
	V1 = R0;
	T6 = A1 + V1;
	ZZ_CLOCKCYCLES(61,0x80036ADC);
ZZ_36340_79C:
	SP = EMU_ReadU32(T6);
	FP = T3 & GP;
	EMU_Write32(T6,FP);
	RA = 0x9000000;
	SP |= RA;
	EMU_Write32(T3,SP);
	T3 += 40;
	ZZ_CLOCKCYCLES(9,0x80036B80);
	goto ZZ_36340_840;
ZZ_36340_7C0:
	EMU_Write32(T3 + 8,GTE_GetRegister(12)); //+ 0x8
	EMU_Write32(T3 + 16,GTE_GetRegister(13)); //+ 0x10
	EMU_Write32(T3 + 24,GTE_GetRegister(14)); //+ 0x18
	S2 = 0x30000000;
	S3 |= S2;
	EMU_Write32(T3 + 4,S3); //+ 0x4
	EMU_Write32(T3 + 12,S4); //+ 0xC
	EMU_Write32(T3 + 20,S5); //+ 0x14
	SP = GTE_GetRegister(17);
	FP = GTE_GetRegister(18);
	RA = GTE_GetRegister(19);
	SP += FP;
	SP += RA;
	SP >>= 5;
	SP <<= 2;
	SP = EMU_CheckedSubtract(A2,SP);
	SP &= 0x1FFC;
	FP = (int32_t)SP < (int32_t)V1;
	if (!FP)
	{
		T6 = A1 + V1;
		ZZ_CLOCKCYCLES(20,0x80036B64);
		goto ZZ_36340_824;
	}
	T6 = A1 + V1;
	V1 = SP;
	if ((int32_t)V1 >= 0)
	{
		T6 = A1 + V1;
		ZZ_CLOCKCYCLES(23,0x80036B64);
		goto ZZ_36340_824;
	}
	T6 = A1 + V1;
	V1 = R0;
	T6 = A1 + V1;
	ZZ_CLOCKCYCLES(25,0x80036B64);
ZZ_36340_824:
	SP = EMU_ReadU32(T6);
	FP = T3 & GP;
	EMU_Write32(T6,FP);
	FP = 0x6000000;
	SP |= FP;
	EMU_Write32(T3,SP);
	T3 += 28;
	ZZ_CLOCKCYCLES(7,0x80036B80);
ZZ_36340_840:
	T5 -= 1;
	if (T5)
	{
		AT = EMU_ReadU16(T2);
		ZZ_CLOCKCYCLES(3,0x800363D4);
		goto ZZ_36340_94;
	}
	AT = EMU_ReadU16(T2);
	AT = 0x1F800000;
	SP = EMU_ReadU32(AT + 52); //+ 0x34
	AT = EMU_ReadU32(SP + 16); //+ 0x10
	EMU_Write32(AT,T3);
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
	ZZ_CLOCKCYCLES_JR(29);
	ZZ_JUMPREGISTER(0x8001A0B4,ZZ_19F90_124);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80036340,0x800363D4,ZZ_36340);
ZZ_MARK_TARGET(0x800363D4,0x80036418,ZZ_36340_94);
ZZ_MARK_TARGET(0x80036418,0x800364D4,ZZ_36340_D8);
ZZ_MARK_TARGET(0x800368C8,0x80036994,ZZ_36340_588);
ZZ_MARK_TARGET(0x80036994,0x800369E8,ZZ_36340_654);
ZZ_MARK_TARGET(0x800369E8,0x80036ADC,ZZ_36340_6A8);
ZZ_MARK_TARGET(0x80036ADC,0x80036B00,ZZ_36340_79C);
ZZ_MARK_TARGET(0x80036B00,0x80036B64,ZZ_36340_7C0);
ZZ_MARK_TARGET(0x80036B64,0x80036B80,ZZ_36340_824);
ZZ_MARK_TARGET(0x80036B80,0x80036BF4,ZZ_36340_840);
