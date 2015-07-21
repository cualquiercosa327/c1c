#ifdef ZZ_INCLUDE_CODE
ZZ_36D9C:
	GTE_SetRegister(6,S3);
	GTE_DepthCueSingle();
	S3 &= FP;
	SP = GTE_GetRegister(22);
	GTE_SetRegister(6,S4);
	SP &= GP;
	S3 |= SP;
	GTE_DepthCueSingle();
	S4 &= FP;
	SP = GTE_GetRegister(22);
	GTE_SetRegister(6,S5);
	SP &= GP;
	S4 |= SP;
	GTE_DepthCueSingle();
	SP = GTE_GetRegister(22);
	S5 &= FP;
	SP &= GP;
	S5 |= SP;
	ZZ_CLOCKCYCLES(22,0x80037190);
	goto ZZ_36D9C_3F4;
ZZ_36D9C_3F4:
	SP = EMU_ReadU32(T1 + 156); //+ 0x9C
	FP = EMU_ReadU32(T1 + 160); //+ 0xA0
	RA = EMU_ReadU32(T1 + 164); //+ 0xA4
	GTE_SetRegister(53,SP);
	GTE_SetRegister(54,FP);
	GTE_SetRegister(55,RA);
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
		ZZ_CLOCKCYCLES(50,0x80037474);
		goto ZZ_36D9C_6D8;
	}
	EMU_Write32(T3 + 8,GTE_GetRegister(12)); //+ 0x8
	EMU_Write32(T3 + 20,GTE_GetRegister(13)); //+ 0x14
	EMU_Write32(T3 + 32,GTE_GetRegister(14)); //+ 0x20
	SP = GTE_GetRegister(17);
	GTE_SetRegister(6,S3);
	FP = (int32_t)A3 < (int32_t)SP;
	if (!FP)
	{
		FP = SP - A3;
		ZZ_CLOCKCYCLES(58,0x80037290);
		goto ZZ_36D9C_4F4;
	}
	FP = SP - A3;
	FP <<= A0;
	GTE_SetRegister(8,FP);
	GTE_DepthCueSingle();
	S3 = GTE_GetRegister(22);
	ZZ_CLOCKCYCLES(64,0x80037290);
ZZ_36D9C_4F4:
	RA = GTE_GetRegister(18);
	S1 = SP + RA;
	GTE_SetRegister(6,S4);
	FP = (int32_t)A3 < (int32_t)RA;
	if (!FP)
	{
		FP = RA - A3;
		ZZ_CLOCKCYCLES(7,0x800372C4);
		goto ZZ_36D9C_528;
	}
	FP = RA - A3;
	FP <<= A0;
	GTE_SetRegister(8,FP);
	GTE_DepthCueSingle();
	S4 = GTE_GetRegister(22);
	ZZ_CLOCKCYCLES(13,0x800372C4);
ZZ_36D9C_528:
	SP = GTE_GetRegister(19);
	S1 += SP;
	GTE_SetRegister(6,S5);
	FP = (int32_t)A3 < (int32_t)SP;
	if (!FP)
	{
		FP = SP - A3;
		ZZ_CLOCKCYCLES(7,0x800372F8);
		goto ZZ_36D9C_55C;
	}
	FP = SP - A3;
	FP <<= A0;
	GTE_SetRegister(8,FP);
	GTE_DepthCueSingle();
	S5 = GTE_GetRegister(22);
	ZZ_CLOCKCYCLES(13,0x800372F8);
ZZ_36D9C_55C:
	S1 >>= 5;
	S1 <<= 2;
	S3 &= GP;
	FP = T1 & T7;
	if (FP == T7)
	{
		S3 |= S2;
		ZZ_CLOCKCYCLES(6,0x80037318);
		goto ZZ_36D9C_57C;
	}
	S3 |= S2;
	FP = 0x2000000;
	S3 |= FP;
	ZZ_CLOCKCYCLES(8,0x80037318);
ZZ_36D9C_57C:
	EMU_Write32(T3 + 4,S3); //+ 0x4
	EMU_Write32(T3 + 16,S4); //+ 0x10
	EMU_Write32(T3 + 28,S5); //+ 0x1C
	RA = V0 >> 15;
	RA &= 0x1C;
	SP = T4 << 6;
	SP += T0;
	SP += 32;
	AT = RA + SP;
	RA = V0 & 0x1E;
	if (!RA)
	{
		SP = V0 >> 5;
		ZZ_CLOCKCYCLES(12,0x80037378);
		goto ZZ_36D9C_5DC;
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
	ZZ_CLOCKCYCLES(24,0x80037378);
ZZ_36D9C_5DC:
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
	SP = EMU_CheckedSubtract(A2,S1);
	SP &= 0x1FFC;
	FP = (int32_t)SP < (int32_t)V1;
	if (!FP)
	{
		T6 = A1 + V1;
		ZZ_CLOCKCYCLES(49,0x80037450);
		goto ZZ_36D9C_6B4;
	}
	T6 = A1 + V1;
	V1 = SP;
	if ((int32_t)V1 >= 0)
	{
		T6 = A1 + V1;
		ZZ_CLOCKCYCLES(52,0x80037450);
		goto ZZ_36D9C_6B4;
	}
	T6 = A1 + V1;
	V1 = R0;
	T6 = A1 + V1;
	ZZ_CLOCKCYCLES(54,0x80037450);
ZZ_36D9C_6B4:
	SP = EMU_ReadU32(T6);
	FP = T3 & GP;
	EMU_Write32(T6,FP);
	RA = 0x9000000;
	SP |= RA;
	EMU_Write32(T3,SP);
	T3 += 40;
	ZZ_CLOCKCYCLES(9,0x80037578);
	goto ZZ_36D9C_7DC;
ZZ_36D9C_6D8:
	EMU_Write32(T3 + 8,GTE_GetRegister(12)); //+ 0x8
	EMU_Write32(T3 + 16,GTE_GetRegister(13)); //+ 0x10
	EMU_Write32(T3 + 24,GTE_GetRegister(14)); //+ 0x18
	SP = GTE_GetRegister(17);
	GTE_SetRegister(6,S3);
	FP = (int32_t)A3 < (int32_t)SP;
	if (!FP)
	{
		FP = SP - A3;
		ZZ_CLOCKCYCLES(8,0x800374AC);
		goto ZZ_36D9C_710;
	}
	FP = SP - A3;
	FP <<= A0;
	GTE_SetRegister(8,FP);
	GTE_DepthCueSingle();
	S3 = GTE_GetRegister(22);
	ZZ_CLOCKCYCLES(14,0x800374AC);
ZZ_36D9C_710:
	RA = GTE_GetRegister(18);
	S1 = SP + RA;
	GTE_SetRegister(6,S4);
	FP = (int32_t)A3 < (int32_t)RA;
	if (!FP)
	{
		FP = RA - A3;
		ZZ_CLOCKCYCLES(7,0x800374E0);
		goto ZZ_36D9C_744;
	}
	FP = RA - A3;
	FP <<= A0;
	GTE_SetRegister(8,FP);
	GTE_DepthCueSingle();
	S4 = GTE_GetRegister(22);
	ZZ_CLOCKCYCLES(13,0x800374E0);
ZZ_36D9C_744:
	SP = GTE_GetRegister(19);
	S1 += SP;
	GTE_SetRegister(6,S5);
	FP = (int32_t)A3 < (int32_t)SP;
	if (!FP)
	{
		FP = SP - A3;
		ZZ_CLOCKCYCLES(7,0x80037514);
		goto ZZ_36D9C_778;
	}
	FP = SP - A3;
	FP <<= A0;
	GTE_SetRegister(8,FP);
	GTE_DepthCueSingle();
	S5 = GTE_GetRegister(22);
	ZZ_CLOCKCYCLES(13,0x80037514);
ZZ_36D9C_778:
	S1 >>= 5;
	S1 <<= 2;
	S3 &= GP;
	S2 = 0x30000000;
	S3 |= S2;
	EMU_Write32(T3 + 4,S3); //+ 0x4
	EMU_Write32(T3 + 12,S4); //+ 0xC
	EMU_Write32(T3 + 20,S5); //+ 0x14
	SP = EMU_CheckedSubtract(A2,S1);
	SP &= 0x1FFC;
	FP = (int32_t)SP < (int32_t)V1;
	if (!FP)
	{
		T6 = A1 + V1;
		ZZ_CLOCKCYCLES(13,0x8003755C);
		goto ZZ_36D9C_7C0;
	}
	T6 = A1 + V1;
	V1 = SP;
	if ((int32_t)V1 >= 0)
	{
		T6 = A1 + V1;
		ZZ_CLOCKCYCLES(16,0x8003755C);
		goto ZZ_36D9C_7C0;
	}
	T6 = A1 + V1;
	V1 = R0;
	T6 = A1 + V1;
	ZZ_CLOCKCYCLES(18,0x8003755C);
ZZ_36D9C_7C0:
	SP = EMU_ReadU32(T6);
	FP = T3 & GP;
	EMU_Write32(T6,FP);
	FP = 0x6000000;
	SP |= FP;
	EMU_Write32(T3,SP);
	T3 += 28;
	ZZ_CLOCKCYCLES(7,0x80037578);
ZZ_36D9C_7DC:
	T5 -= 1;
	if (T5)
	{
		AT = EMU_ReadU16(T2);
		ZZ_CLOCKCYCLES(3,0x80036CAC);
		goto ZZ_36BF4_B8;
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
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80036D9C,0x80036DF4,ZZ_36D9C);
ZZ_MARK_TARGET(0x80037190,0x80037290,ZZ_36D9C_3F4);
ZZ_MARK_TARGET(0x80037290,0x800372C4,ZZ_36D9C_4F4);
ZZ_MARK_TARGET(0x800372C4,0x800372F8,ZZ_36D9C_528);
ZZ_MARK_TARGET(0x800372F8,0x80037318,ZZ_36D9C_55C);
ZZ_MARK_TARGET(0x80037318,0x80037378,ZZ_36D9C_57C);
ZZ_MARK_TARGET(0x80037378,0x80037450,ZZ_36D9C_5DC);
ZZ_MARK_TARGET(0x80037450,0x80037474,ZZ_36D9C_6B4);
ZZ_MARK_TARGET(0x80037474,0x800374AC,ZZ_36D9C_6D8);
ZZ_MARK_TARGET(0x800374AC,0x800374E0,ZZ_36D9C_710);
ZZ_MARK_TARGET(0x800374E0,0x80037514,ZZ_36D9C_744);
ZZ_MARK_TARGET(0x80037514,0x8003755C,ZZ_36D9C_778);
ZZ_MARK_TARGET(0x8003755C,0x80037578,ZZ_36D9C_7C0);
ZZ_MARK_TARGET(0x80037578,0x800375EC,ZZ_36D9C_7DC);
