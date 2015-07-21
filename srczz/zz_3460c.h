#ifdef ZZ_INCLUDE_CODE
ZZ_3460C:
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
	T7 = EMU_ReadU32(SP + 32); //+ 0x20
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
	ZZ_CLOCKCYCLES(37,0x800346A0);
ZZ_3460C_94:
	SP = EMU_ReadU32(A2);
	FP = EMU_ReadU32(A2 + 4); //+ 0x4
	RA = SP & 0xFFFF;
	S0 = T3 + RA;
	RA = SP >> 16;
	S1 = T3 + RA;
	RA = FP & 0xFFFF;
	S2 = T3 + RA;
	RA = FP >> 16;
	T2 = RA & 0x8000;
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
	GTE_SetRegister(6,A0);
	if ((int32_t)SP < 0)
	{
		S6 = A0 >> 24;
		ZZ_CLOCKCYCLES(65,0x80034A98);
		goto ZZ_3460C_48C;
	}
	S6 = A0 >> 24;
	SP = S6 & 0x10;
	if (SP)
	{
		ZZ_CLOCKCYCLES(68,0x800347CC);
		goto ZZ_3460C_1C0;
	}
	GTE_NormalClip();
	SP = GTE_GetRegister(24);
	if (!SP)
	{
		SP ^= T0;
		ZZ_CLOCKCYCLES(73,0x80034A98);
		goto ZZ_3460C_48C;
	}
	SP ^= T0;
	if ((int32_t)SP < 0)
	{
		ZZ_CLOCKCYCLES(75,0x80034A98);
		goto ZZ_3460C_48C;
	}
	ZZ_CLOCKCYCLES(75,0x800347CC);
ZZ_3460C_1C0:
	if (!T2)
	{
		ZZ_CLOCKCYCLES(2,0x800347E8);
		goto ZZ_3460C_1DC;
	}
	GTE_SetRegister(20,A0);
	GTE_SetRegister(21,A0);
	GTE_SetRegister(22,A0);
	ZZ_CLOCKCYCLES(7,0x80034844);
	goto ZZ_3460C_238;
ZZ_3460C_1DC:
	S0 = EMU_ReadU16(S0 + 4); //+ 0x4
	S1 = EMU_ReadU16(S1 + 4); //+ 0x4
	S2 = EMU_ReadU16(S2 + 4); //+ 0x4
	SP = S3 & 0xFF00;
	FP = S0 << 24;
	SP |= FP;
	GTE_SetRegister(0,SP);
	SP = S0 & 0xFF00;
	GTE_SetRegister(1,SP);
	SP = S4 & 0xFF00;
	FP = S1 << 24;
	SP |= FP;
	GTE_SetRegister(2,SP);
	SP = S1 & 0xFF00;
	GTE_SetRegister(3,SP);
	SP = S5 & 0xFF00;
	FP = S2 << 24;
	SP |= FP;
	GTE_SetRegister(4,SP);
	SP = S2 & 0xFF00;
	GTE_SetRegister(5,SP);
	GTE_NormalColorTriple();
	ZZ_CLOCKCYCLES(23,0x80034844);
ZZ_3460C_238:
	SP = S6 & 0x80;
	if (!SP)
	{
		ZZ_CLOCKCYCLES(3,0x800349D8);
		goto ZZ_3460C_3CC;
	}
	EMU_Write32(A3 + 8,GTE_GetRegister(12)); //+ 0x8
	EMU_Write32(A3 + 20,GTE_GetRegister(13)); //+ 0x14
	EMU_Write32(A3 + 32,GTE_GetRegister(14)); //+ 0x20
	SP = GTE_GetRegister(20);
	EMU_Write32(A3 + 16,GTE_GetRegister(21)); //+ 0x10
	EMU_Write32(A3 + 28,GTE_GetRegister(22)); //+ 0x1C
	SP &= T9;
	FP = 0x34000000;
	SP |= FP;
	FP = S6 & T8;
	if (FP == T8)
	{
		S0 = EMU_ReadU32(T6 + 8); //+ 0x8
		ZZ_CLOCKCYCLES(15,0x80034888);
		goto ZZ_3460C_27C;
	}
	S0 = EMU_ReadU32(T6 + 8); //+ 0x8
	RA = 0x2000000;
	SP |= RA;
	ZZ_CLOCKCYCLES(17,0x80034888);
ZZ_3460C_27C:
	EMU_Write32(A3 + 4,SP); //+ 0x4
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
	if (!T7)
	{
		RA = GTE_GetRegister(19);
		ZZ_CLOCKCYCLES(49,0x8003499C);
		goto ZZ_3460C_390;
	}
	RA = GTE_GetRegister(19);
	S6 = (int32_t)SP < (int32_t)FP;
	if (!S6)
	{
		S4 = SP;
		ZZ_CLOCKCYCLES(52,0x8003495C);
		goto ZZ_3460C_350;
	}
	S4 = SP;
	S4 = FP;
	ZZ_CLOCKCYCLES(53,0x8003495C);
ZZ_3460C_350:
	S6 = (int32_t)S4 < (int32_t)RA;
	if (!S6)
	{
		ZZ_CLOCKCYCLES(3,0x8003496C);
		goto ZZ_3460C_360;
	}
	S4 = RA;
	ZZ_CLOCKCYCLES(4,0x8003496C);
ZZ_3460C_360:
	S6 = (int32_t)FP < (int32_t)SP;
	if (!S6)
	{
		SP = SP;
		ZZ_CLOCKCYCLES(3,0x8003497C);
		goto ZZ_3460C_370;
	}
	SP = SP;
	SP = FP;
	ZZ_CLOCKCYCLES(4,0x8003497C);
ZZ_3460C_370:
	S6 = (int32_t)RA < (int32_t)SP;
	if (!S6)
	{
		ZZ_CLOCKCYCLES(3,0x8003498C);
		goto ZZ_3460C_380;
	}
	SP = RA;
	ZZ_CLOCKCYCLES(4,0x8003498C);
ZZ_3460C_380:
	SP += S4;
	FP = SP >> 1;
	SP += FP;
	ZZ_CLOCKCYCLES(4,0x800349A4);
	goto ZZ_3460C_398;
ZZ_3460C_390:
	SP += FP;
	SP += RA;
	ZZ_CLOCKCYCLES(2,0x800349A4);
ZZ_3460C_398:
	SP >>= 5;
	SP <<= 2;
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
	ZZ_CLOCKCYCLES(13,0x80034A98);
	goto ZZ_3460C_48C;
ZZ_3460C_3CC:
	EMU_Write32(A3 + 8,GTE_GetRegister(12)); //+ 0x8
	EMU_Write32(A3 + 16,GTE_GetRegister(13)); //+ 0x10
	EMU_Write32(A3 + 24,GTE_GetRegister(14)); //+ 0x18
	SP = GTE_GetRegister(20);
	EMU_Write32(A3 + 12,GTE_GetRegister(21)); //+ 0xC
	EMU_Write32(A3 + 20,GTE_GetRegister(22)); //+ 0x14
	SP &= T9;
	RA = 0x30000000;
	SP |= RA;
	EMU_Write32(A3 + 4,SP); //+ 0x4
	SP = GTE_GetRegister(17);
	FP = GTE_GetRegister(18);
	if (!T7)
	{
		RA = GTE_GetRegister(19);
		ZZ_CLOCKCYCLES(14,0x80034A60);
		goto ZZ_3460C_454;
	}
	RA = GTE_GetRegister(19);
	S6 = (int32_t)SP < (int32_t)FP;
	if (!S6)
	{
		S4 = SP;
		ZZ_CLOCKCYCLES(17,0x80034A20);
		goto ZZ_3460C_414;
	}
	S4 = SP;
	S4 = FP;
	ZZ_CLOCKCYCLES(18,0x80034A20);
ZZ_3460C_414:
	S6 = (int32_t)S4 < (int32_t)RA;
	if (!S6)
	{
		ZZ_CLOCKCYCLES(3,0x80034A30);
		goto ZZ_3460C_424;
	}
	S4 = RA;
	ZZ_CLOCKCYCLES(4,0x80034A30);
ZZ_3460C_424:
	S6 = (int32_t)FP < (int32_t)SP;
	if (!S6)
	{
		SP = SP;
		ZZ_CLOCKCYCLES(3,0x80034A40);
		goto ZZ_3460C_434;
	}
	SP = SP;
	SP = FP;
	ZZ_CLOCKCYCLES(4,0x80034A40);
ZZ_3460C_434:
	S6 = (int32_t)RA < (int32_t)SP;
	if (!S6)
	{
		ZZ_CLOCKCYCLES(3,0x80034A50);
		goto ZZ_3460C_444;
	}
	SP = RA;
	ZZ_CLOCKCYCLES(4,0x80034A50);
ZZ_3460C_444:
	SP += S4;
	FP = SP >> 1;
	SP += FP;
	ZZ_CLOCKCYCLES(4,0x80034A68);
	goto ZZ_3460C_45C;
ZZ_3460C_454:
	SP += FP;
	SP += RA;
	ZZ_CLOCKCYCLES(2,0x80034A68);
ZZ_3460C_45C:
	SP >>= 3;
	SP = EMU_CheckedSubtract(T1,SP);
	if ((int32_t)SP >= 0)
	{
		SP &= 0x1FFC;
		ZZ_CLOCKCYCLES(4,0x80034A7C);
		goto ZZ_3460C_470;
	}
	SP &= 0x1FFC;
	SP = R0;
	ZZ_CLOCKCYCLES(5,0x80034A7C);
ZZ_3460C_470:
	T6 = A1 + SP;
	SP = EMU_ReadU32(T6);
	FP = A3 & T9;
	EMU_Write32(T6,FP);
	SP |= GP;
	EMU_Write32(A3,SP);
	A3 += 28;
	ZZ_CLOCKCYCLES(7,0x80034A98);
ZZ_3460C_48C:
	T5 -= 1;
	if (T5)
	{
		A2 += 8;
		ZZ_CLOCKCYCLES(3,0x800346A0);
		goto ZZ_3460C_94;
	}
	A2 += 8;
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
	ZZ_CLOCKCYCLES_JR(28);
	ZZ_JUMPREGISTER(0x80018A1C,ZZ_18964_B8);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003460C,0x800346A0,ZZ_3460C);
ZZ_MARK_TARGET(0x800346A0,0x800347CC,ZZ_3460C_94);
ZZ_MARK_TARGET(0x800347CC,0x800347E8,ZZ_3460C_1C0);
ZZ_MARK_TARGET(0x800347E8,0x80034844,ZZ_3460C_1DC);
ZZ_MARK_TARGET(0x80034844,0x80034888,ZZ_3460C_238);
ZZ_MARK_TARGET(0x80034888,0x8003495C,ZZ_3460C_27C);
ZZ_MARK_TARGET(0x8003495C,0x8003496C,ZZ_3460C_350);
ZZ_MARK_TARGET(0x8003496C,0x8003497C,ZZ_3460C_360);
ZZ_MARK_TARGET(0x8003497C,0x8003498C,ZZ_3460C_370);
ZZ_MARK_TARGET(0x8003498C,0x8003499C,ZZ_3460C_380);
ZZ_MARK_TARGET(0x8003499C,0x800349A4,ZZ_3460C_390);
ZZ_MARK_TARGET(0x800349A4,0x800349D8,ZZ_3460C_398);
ZZ_MARK_TARGET(0x800349D8,0x80034A20,ZZ_3460C_3CC);
ZZ_MARK_TARGET(0x80034A20,0x80034A30,ZZ_3460C_414);
ZZ_MARK_TARGET(0x80034A30,0x80034A40,ZZ_3460C_424);
ZZ_MARK_TARGET(0x80034A40,0x80034A50,ZZ_3460C_434);
ZZ_MARK_TARGET(0x80034A50,0x80034A60,ZZ_3460C_444);
ZZ_MARK_TARGET(0x80034A60,0x80034A68,ZZ_3460C_454);
ZZ_MARK_TARGET(0x80034A68,0x80034A7C,ZZ_3460C_45C);
ZZ_MARK_TARGET(0x80034A7C,0x80034A98,ZZ_3460C_470);
ZZ_MARK_TARGET(0x80034A98,0x80034B08,ZZ_3460C_48C);
