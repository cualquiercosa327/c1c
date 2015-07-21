#ifdef ZZ_INCLUDE_CODE
ZZ_34B08:
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
	T0 = EMU_ReadU32(SP + 16); //+ 0x10
	T1 = EMU_ReadU32(SP + 20); //+ 0x14
	T2 = EMU_ReadU32(SP + 24); //+ 0x18
	S7 = EMU_ReadU32(SP + 28); //+ 0x1C
	FP = EMU_ReadU32(SP + 32); //+ 0x20
	AT = 0x1F800000;
	AT |= 0xE0;
	EMU_Write32(AT + 12,FP); //+ 0xC
	RA = 0xFF;
	FP = RA >> FP;
	RA = FP << 8;
	FP |= RA;
	RA <<= 8;
	FP |= RA;
	EMU_Write32(AT + 16,FP); //+ 0x10
	SP = GTE_GetRegister(53);
	FP = GTE_GetRegister(54);
	RA = GTE_GetRegister(55);
	EMU_Write32(AT,SP);
	EMU_Write32(AT + 4,FP); //+ 0x4
	EMU_Write32(AT + 8,RA); //+ 0x8
	T1 <<= 2;
	T9 = 0xFF0000;
	T9 |= 0xFFFF;
	T8 = 0x60;
	GP = 0x6000000;
	AT = EMU_ReadU32(A0 + 8); //+ 0x8
	V0 = EMU_ReadU32(A0 + 12); //+ 0xC
	V1 = EMU_ReadU32(A0 + 16); //+ 0x10
	AT -= 128;
	V0 -= 128;
	V1 -= 128;
	T3 = A0 + 56;
	T4 = A3 + 20;
	T5 = EMU_ReadU32(A3);
	A3 = EMU_ReadU32(T2);
	ZZ_CLOCKCYCLES(53,0x80034BDC);
ZZ_34B08_D4:
	T7 = R0;
	SP = EMU_ReadU32(A2);
	FP = EMU_ReadU32(A2 + 4); //+ 0x4
	RA = SP & 0xFFFF;
	S0 = T3 + RA;
	RA = SP >> 16;
	S1 = T3 + RA;
	RA = FP & 0xFFFF;
	S2 = T3 + RA;
	RA = FP >> 16;
	RA &= 0x7FFF;
	RA <<= 2;
	T6 = T4 + RA;
	S6 = EMU_ReadU16(S0);
	S3 = EMU_ReadU16(S0 + 2); //+ 0x2
	FP = S6 >> 8;
	FP += V0;
	FP <<= 18;
	SP = S6 & 0xFF;
	SP += AT;
	SP <<= 2;
	SP &= 0xFFFF;
	FP |= SP;
	GTE_SetRegister(0,FP);
	SP = S3 & 0xFF;
	SP += V1;
	SP <<= 2;
	GTE_SetRegister(1,SP);
	S6 = EMU_ReadU16(S1);
	S4 = EMU_ReadU16(S1 + 2); //+ 0x2
	FP = S6 >> 8;
	FP += V0;
	FP <<= 18;
	SP = S6 & 0xFF;
	SP += AT;
	SP <<= 2;
	SP &= 0xFFFF;
	FP |= SP;
	GTE_SetRegister(2,FP);
	SP = S4 & 0xFF;
	SP += V1;
	SP <<= 2;
	GTE_SetRegister(3,SP);
	S6 = EMU_ReadU16(S2);
	S5 = EMU_ReadU16(S2 + 2); //+ 0x2
	FP = S6 >> 8;
	FP += V0;
	FP <<= 18;
	SP = S6 & 0xFF;
	SP += AT;
	SP <<= 2;
	SP &= 0xFFFF;
	FP |= SP;
	GTE_SetRegister(4,FP);
	SP = S5 & 0xFF;
	SP += V1;
	SP <<= 2;
	GTE_SetRegister(5,SP);
	A0 = EMU_ReadU32(T6);
	GTE_RotateTranslateProjectTriple();
	SP = GTE_GetRegister(63);
	if ((int32_t)SP < 0)
	{
		S6 = A0 >> 24;
		ZZ_CLOCKCYCLES(65,0x80035100);
		goto ZZ_34B08_5F8;
	}
	S6 = A0 >> 24;
	SP = S6 & 0x10;
	if (SP)
	{
		ZZ_CLOCKCYCLES(68,0x80035190);
		goto ZZ_34B08_688;
	}
	GTE_NormalClip();
	SP = GTE_GetRegister(24);
	if (!SP)
	{
		SP ^= T0;
		ZZ_CLOCKCYCLES(73,0x80035100);
		goto ZZ_34B08_5F8;
	}
	SP ^= T0;
	if ((int32_t)SP < 0)
	{
		ZZ_CLOCKCYCLES(75,0x80035100);
		goto ZZ_34B08_5F8;
	}
	ZZ_CLOCKCYCLES(75,0x80034D08);
ZZ_34B08_200:
	S0 = EMU_ReadU16(S0 + 4); //+ 0x4
	S1 = EMU_ReadU16(S1 + 4); //+ 0x4
	S2 = EMU_ReadU16(S2 + 4); //+ 0x4
	SP = A0 & 0xFF;
	FP = SP < 128;
	if (!FP)
	{
		ZZ_CLOCKCYCLES(7,0x80034D3C);
		goto ZZ_34B08_234;
	}
	GTE_SetRegister(53,R0);
	GTE_SetRegister(54,R0);
	GTE_SetRegister(55,R0);
	FP = 0x7F;
	SP = FP - SP;
	ZZ_CLOCKCYCLES(13,0x80034D50);
	goto ZZ_34B08_248;
ZZ_34B08_234:
	FP = 0xFF0;
	GTE_SetRegister(53,FP);
	GTE_SetRegister(54,FP);
	GTE_SetRegister(55,FP);
	SP -= 128;
	ZZ_CLOCKCYCLES(5,0x80034D50);
ZZ_34B08_248:
	SP <<= 5;
	GTE_SetRegister(8,SP);
	S3 >>= 8;
	S4 >>= 8;
	S5 >>= 8;
	FP = S4 << 8;
	SP = S3 | FP;
	FP = S5 << 16;
	SP |= FP;
	GTE_SetRegister(6,SP);
	GTE_DepthCueSingle();
	SP = GTE_GetRegister(22);
	S3 = SP & 0xFF;
	S4 = SP >> 8;
	S4 &= 0xFF;
	S5 = SP >> 16;
	S5 &= 0xFF;
	SP = A0 >> 8;
	SP &= 0xFF;
	FP = SP < 128;
	if (!FP)
	{
		ZZ_CLOCKCYCLES(28,0x80034DD8);
		goto ZZ_34B08_2D0;
	}
	GTE_SetRegister(53,R0);
	GTE_SetRegister(54,R0);
	GTE_SetRegister(55,R0);
	FP = 0x7F;
	SP = FP - SP;
	ZZ_CLOCKCYCLES(34,0x80034DEC);
	goto ZZ_34B08_2E4;
ZZ_34B08_2D0:
	FP = 0xFF0;
	GTE_SetRegister(53,FP);
	GTE_SetRegister(54,FP);
	GTE_SetRegister(55,FP);
	SP -= 128;
	ZZ_CLOCKCYCLES(5,0x80034DEC);
ZZ_34B08_2E4:
	SP <<= 5;
	GTE_SetRegister(8,SP);
	SP = S0 & 0xFF;
	FP = S1 & 0xFF;
	FP <<= 8;
	RA = S2 & 0xFF;
	RA <<= 16;
	SP |= FP;
	SP |= RA;
	GTE_SetRegister(6,SP);
	GTE_DepthCueSingle();
	SP = S0 >> 8;
	FP = S1 & 0xFF00;
	RA = S2 & 0xFF00;
	RA <<= 8;
	SP |= FP;
	SP |= RA;
	GTE_SetRegister(6,SP);
	S0 = GTE_GetRegister(22);
	S1 = S0 & 0xFF00;
	S2 = S0 >> 8;
	S2 &= 0xFF00;
	S0 <<= 8;
	S0 &= 0xFF00;
	S3 |= S0;
	S4 |= S1;
	S5 |= S2;
	SP = A0 >> 16;
	SP &= 0xFF;
	FP = SP < 128;
	if (!FP)
	{
		ZZ_CLOCKCYCLES(38,0x80034E9C);
		goto ZZ_34B08_394;
	}
	GTE_SetRegister(53,R0);
	GTE_SetRegister(54,R0);
	GTE_SetRegister(55,R0);
	FP = 0x7F;
	SP = FP - SP;
	ZZ_CLOCKCYCLES(44,0x80034EB0);
	goto ZZ_34B08_3A8;
ZZ_34B08_394:
	FP = 0xFF0;
	GTE_SetRegister(53,FP);
	GTE_SetRegister(54,FP);
	GTE_SetRegister(55,FP);
	SP -= 128;
	ZZ_CLOCKCYCLES(5,0x80034EB0);
ZZ_34B08_3A8:
	SP <<= 5;
	GTE_SetRegister(8,SP);
	GTE_DepthCueSingle();
	SP = GTE_GetRegister(22);
	S0 = SP & 0xFF;
	S0 <<= 16;
	S1 = SP & 0xFF00;
	S1 <<= 8;
	FP = 0xFF0000;
	S2 = SP & FP;
	S3 |= S0;
	S4 |= S1;
	S5 |= S2;
	SP = S6 & 0x80;
	if (!SP)
	{
		ZZ_CLOCKCYCLES(22,0x80035068);
		goto ZZ_34B08_560;
	}
	EMU_Write32(A3 + 8,GTE_GetRegister(12)); //+ 0x8
	EMU_Write32(A3 + 20,GTE_GetRegister(13)); //+ 0x14
	EMU_Write32(A3 + 32,GTE_GetRegister(14)); //+ 0x20
	SP = 0x1F800000;
	SP |= 0xEC;
	FP = EMU_ReadU32(SP);
	if (!FP)
	{
		S3 >>= FP;
		ZZ_CLOCKCYCLES(31,0x80034F44);
		goto ZZ_34B08_43C;
	}
	S3 >>= FP;
	S4 >>= FP;
	SP = EMU_ReadU32(SP + 4); //+ 0x4
	S5 >>= FP;
	S3 &= SP;
	S4 &= SP;
	S5 &= SP;
	ZZ_CLOCKCYCLES(37,0x80034F44);
ZZ_34B08_43C:
	FP = 0x34000000;
	S3 |= FP;
	FP = S6 & T8;
	if (FP == T8)
	{
		S0 = EMU_ReadU32(T6 + 8); //+ 0x8
		ZZ_CLOCKCYCLES(5,0x80034F60);
		goto ZZ_34B08_458;
	}
	S0 = EMU_ReadU32(T6 + 8); //+ 0x8
	SP = 0x2000000;
	S3 |= SP;
	ZZ_CLOCKCYCLES(7,0x80034F60);
ZZ_34B08_458:
	EMU_Write32(A3 + 4,S3); //+ 0x4
	EMU_Write32(A3 + 16,S4); //+ 0x10
	EMU_Write32(A3 + 28,S5); //+ 0x1C
	SP = EMU_ReadU32(T6 + 4); //+ 0x4
	S2 = S0 >> 20;
	S1 = EMU_ReadU32(SP);
	SP = S0 >> 22;
	SP <<= 3;
	T6 = S7 + SP;
	S3 = EMU_ReadU32(T6);
	T6 = EMU_ReadU16(T6 + 4); //+ 0x4
	S2 &= 0x3;
	SP = S2 << 7;
	RA = S1 & 0x1C;
	SP |= RA;
	RA = S0 >> 18;
	RA &= 0x3;
	SP |= RA;
	RA = S6 & 0x60;
	SP |= RA;
	SP <<= 16;
	FP = S0 & 0x1F;
	FP <<= 2;
	RA = S1 & 0x80;
	FP |= RA;
	RA = FP << 8;
	FP = S0 >> 10;
	FP &= 0xF8;
	FP >>= S2;
	S2 = FP | RA;
	FP = S3 >> 16;
	FP += S2;
	RA = SP | FP;
	SP = S6 & 0xF;
	FP = S0 & 0x1FC0;
	SP |= FP;
	FP = S1 >> 4;
	FP &= 0xFFF0;
	SP |= FP;
	SP <<= 16;
	FP = S3 & 0xFFFF;
	FP += S2;
	FP |= SP;
	T6 += S2;
	EMU_Write32(A3 + 12,FP); //+ 0xC
	EMU_Write32(A3 + 24,RA); //+ 0x18
	EMU_Write16(A3 + 36,T6); //+ 0x24
	SP = GTE_GetRegister(17);
	FP = GTE_GetRegister(18);
	RA = GTE_GetRegister(19);
	SP += FP;
	SP += RA;
	SP >>= 5;
	SP <<= 2;
	SP = EMU_CheckedAdd(SP,T7);
	SP = EMU_CheckedSubtract(T1,SP);
	SP &= 0x1FFC;
	T6 = A1 + SP;
	SP = EMU_ReadU32(T6);
	FP = A3 & T9;
	EMU_Write32(T6,FP);
	RA = 0x9000000;
	SP |= RA;
	EMU_Write32(A3,SP);
	A3 += 40;
	ZZ_CLOCKCYCLES(66,0x80035100);
	goto ZZ_34B08_5F8;
ZZ_34B08_560:
	EMU_Write32(A3 + 8,GTE_GetRegister(12)); //+ 0x8
	EMU_Write32(A3 + 16,GTE_GetRegister(13)); //+ 0x10
	EMU_Write32(A3 + 24,GTE_GetRegister(14)); //+ 0x18
	SP = 0x1F800000;
	SP |= 0xEC;
	FP = EMU_ReadU32(SP);
	if (!FP)
	{
		S3 >>= FP;
		ZZ_CLOCKCYCLES(9,0x800350A4);
		goto ZZ_34B08_59C;
	}
	S3 >>= FP;
	S4 >>= FP;
	SP = EMU_ReadU32(SP + 4); //+ 0x4
	S5 >>= FP;
	S3 &= SP;
	S4 &= SP;
	S5 &= SP;
	ZZ_CLOCKCYCLES(15,0x800350A4);
ZZ_34B08_59C:
	RA = 0x30000000;
	S3 |= RA;
	EMU_Write32(A3 + 4,S3); //+ 0x4
	EMU_Write32(A3 + 12,S4); //+ 0xC
	EMU_Write32(A3 + 20,S5); //+ 0x14
	SP = GTE_GetRegister(17);
	FP = GTE_GetRegister(18);
	RA = GTE_GetRegister(19);
	SP += FP;
	SP += RA;
	SP >>= 3;
	SP = EMU_CheckedAdd(SP,T7);
	SP = EMU_CheckedSubtract(T1,SP);
	if ((int32_t)SP >= 0)
	{
		SP &= 0x1FFC;
		ZZ_CLOCKCYCLES(15,0x800350E4);
		goto ZZ_34B08_5DC;
	}
	SP &= 0x1FFC;
	SP = R0;
	ZZ_CLOCKCYCLES(16,0x800350E4);
ZZ_34B08_5DC:
	T6 = A1 + SP;
	SP = EMU_ReadU32(T6);
	FP = A3 & T9;
	EMU_Write32(T6,FP);
	SP |= GP;
	EMU_Write32(A3,SP);
	A3 += 28;
	ZZ_CLOCKCYCLES(7,0x80035100);
ZZ_34B08_5F8:
	T5 -= 1;
	if (T5)
	{
		A2 += 8;
		ZZ_CLOCKCYCLES(3,0x80034BDC);
		goto ZZ_34B08_D4;
	}
	A2 += 8;
	AT = 0x1F800000;
	AT |= 0xE0;
	SP = EMU_ReadU32(AT);
	FP = EMU_ReadU32(AT + 4); //+ 0x4
	RA = EMU_ReadU32(AT + 8); //+ 0x8
	GTE_SetRegister(53,SP);
	GTE_SetRegister(54,FP);
	GTE_SetRegister(55,RA);
	AT = 0x1F800000;
	SP = EMU_ReadU32(AT + 52); //+ 0x34
	AT = EMU_ReadU32(SP + 24); //+ 0x18
	EMU_Write32(AT,A3);
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
	ZZ_CLOCKCYCLES_JR(36);
	ZZ_JUMPREGISTER(0x80018B74,ZZ_18A40_134);
	ZZ_JUMPREGISTER_END();
ZZ_34B08_688:
	GTE_NormalClip();
	SP = GTE_GetRegister(24);
	if (!SP)
	{
		SP ^= T0;
		ZZ_CLOCKCYCLES(5,0x800351B4);
		goto ZZ_34B08_6AC;
	}
	SP ^= T0;
	if ((int32_t)SP < 0)
	{
		ZZ_CLOCKCYCLES(7,0x800351B4);
		goto ZZ_34B08_6AC;
	}
	ZZ_CLOCKCYCLES(9,0x80034D08);
	goto ZZ_34B08_200;
ZZ_34B08_6AC:
	SP = -33;
	S6 &= SP;
	T7 = 0x30;
	ZZ_CLOCKCYCLES(4,0x80034D08);
	goto ZZ_34B08_200;
#endif
ZZ_MARK_TARGET(0x80034B08,0x80034BDC,ZZ_34B08);
ZZ_MARK_TARGET(0x80034BDC,0x80034D08,ZZ_34B08_D4);
ZZ_MARK_TARGET(0x80034D08,0x80034D3C,ZZ_34B08_200);
ZZ_MARK_TARGET(0x80034D3C,0x80034D50,ZZ_34B08_234);
ZZ_MARK_TARGET(0x80034D50,0x80034DD8,ZZ_34B08_248);
ZZ_MARK_TARGET(0x80034DD8,0x80034DEC,ZZ_34B08_2D0);
ZZ_MARK_TARGET(0x80034DEC,0x80034E9C,ZZ_34B08_2E4);
ZZ_MARK_TARGET(0x80034E9C,0x80034EB0,ZZ_34B08_394);
ZZ_MARK_TARGET(0x80034EB0,0x80034F44,ZZ_34B08_3A8);
ZZ_MARK_TARGET(0x80034F44,0x80034F60,ZZ_34B08_43C);
ZZ_MARK_TARGET(0x80034F60,0x80035068,ZZ_34B08_458);
ZZ_MARK_TARGET(0x80035068,0x800350A4,ZZ_34B08_560);
ZZ_MARK_TARGET(0x800350A4,0x800350E4,ZZ_34B08_59C);
ZZ_MARK_TARGET(0x800350E4,0x80035100,ZZ_34B08_5DC);
ZZ_MARK_TARGET(0x80035100,0x80035190,ZZ_34B08_5F8);
ZZ_MARK_TARGET(0x80035190,0x800351B4,ZZ_34B08_688);
ZZ_MARK_TARGET(0x800351B4,0x800351C4,ZZ_34B08_6AC);
