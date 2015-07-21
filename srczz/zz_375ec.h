#ifdef ZZ_INCLUDE_CODE
ZZ_375EC:
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
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	T3 = EMU_ReadU32(T7);
	GP = 0x1F800000;
	EMU_Write32(GP + 224,A3); //+ 0xE0
	EMU_Write32(GP + 228,RA); //+ 0xE4
	T7 = 0x60;
	T5 = EMU_ReadU32(A0);
	T2 = A0 + 2;
	T2 += T5;
	T2 += T5;
	T4 = 0xFFFF;
	AT = EMU_ReadU16(T2);
	A2 <<= 2;
	V1 = 0x1FFC;
	ZZ_CLOCKCYCLES(32,0x8003766C);
ZZ_375EC_80:
	T2 -= 2;
	FP = AT >> 12;
	if (FP == T4)
	{
		AT &= 0xFFF;
		ZZ_CLOCKCYCLES(4,0x800376B8);
		goto ZZ_375EC_CC;
	}
	AT &= 0xFFF;
	T4 = FP;
	RA = T4 << 6;
	V0 = 0x1F800000;
	V0 |= 0x100;
	V0 += RA;
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
	ZZ_CLOCKCYCLES(19,0x800376B8);
ZZ_375EC_CC:
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
	AT = 0xFFF80000;
	AT |= 0xFFF8;
	SP = S0 & AT;
	FP = S1 & AT;
	RA = S2 & AT;
	GTE_SetRegister(0,SP);
	GTE_SetRegister(2,FP);
	GTE_SetRegister(4,RA);
	T1 = 0x1F800000;
	T1 |= 0x300;
	AT = T4 << 4;
	T1 += AT;
	T6 = EMU_ReadU32(T1);
	AT = SP << 16;
	AT = (int32_t)AT >> 16;
	T6 += AT;
	AT = EMU_ReadU32(GP + 72); //+ 0x48
	AT = T6 - AT;
	if ((int32_t)AT >= 0)
	{
		ZZ_CLOCKCYCLES(43,0x80037768);
		goto ZZ_375EC_17C;
	}
	AT = -AT;
	ZZ_CLOCKCYCLES(44,0x80037768);
ZZ_375EC_17C:
	A0 = AT;
	T6 = EMU_ReadU32(T1 + 4); //+ 0x4
	AT = (int32_t)SP >> 16;
	T6 += AT;
	AT = EMU_ReadU32(GP + 76); //+ 0x4C
	AT = T6 - AT;
	if ((int32_t)AT >= 0)
	{
		ZZ_CLOCKCYCLES(9,0x80037790);
		goto ZZ_375EC_1A4;
	}
	AT = -AT;
	ZZ_CLOCKCYCLES(10,0x80037790);
ZZ_375EC_1A4:
	A0 += AT;
	T6 = EMU_ReadU32(T1);
	AT = FP << 16;
	AT = (int32_t)AT >> 16;
	T6 += AT;
	AT = EMU_ReadU32(GP + 72); //+ 0x48
	AT = T6 - AT;
	if ((int32_t)AT >= 0)
	{
		ZZ_CLOCKCYCLES(10,0x800377BC);
		goto ZZ_375EC_1D0;
	}
	AT = -AT;
	ZZ_CLOCKCYCLES(11,0x800377BC);
ZZ_375EC_1D0:
	T0 = AT;
	T6 = EMU_ReadU32(T1 + 4); //+ 0x4
	AT = (int32_t)FP >> 16;
	T6 += AT;
	AT = EMU_ReadU32(GP + 76); //+ 0x4C
	AT = T6 - AT;
	if ((int32_t)AT >= 0)
	{
		ZZ_CLOCKCYCLES(9,0x800377E4);
		goto ZZ_375EC_1F8;
	}
	AT = -AT;
	ZZ_CLOCKCYCLES(10,0x800377E4);
ZZ_375EC_1F8:
	T0 += AT;
	T6 = EMU_ReadU32(T1);
	AT = RA << 16;
	AT = (int32_t)AT >> 16;
	T6 += AT;
	AT = EMU_ReadU32(GP + 72); //+ 0x48
	AT = T6 - AT;
	if ((int32_t)AT >= 0)
	{
		ZZ_CLOCKCYCLES(10,0x80037810);
		goto ZZ_375EC_224;
	}
	AT = -AT;
	ZZ_CLOCKCYCLES(11,0x80037810);
ZZ_375EC_224:
	S6 = AT;
	T6 = EMU_ReadU32(T1 + 4); //+ 0x4
	AT = (int32_t)RA >> 16;
	T6 += AT;
	AT = EMU_ReadU32(GP + 76); //+ 0x4C
	AT = T6 - AT;
	if ((int32_t)AT >= 0)
	{
		ZZ_CLOCKCYCLES(9,0x80037838);
		goto ZZ_375EC_24C;
	}
	AT = -AT;
	ZZ_CLOCKCYCLES(10,0x80037838);
ZZ_375EC_24C:
	S6 += AT;
	AT = 0x70000;
	AT |= 0x6;
	SP = S3 >> 24;
	SP <<= 3;
	T6 = S0 & AT;
	T1 = T6 << 10;
	SP |= T1;
	T1 = T6 >> 3;
	SP |= T1;
	FP = S4 >> 24;
	FP <<= 3;
	T6 = S1 & AT;
	T1 = T6 << 10;
	FP |= T1;
	T1 = T6 >> 3;
	FP |= T1;
	RA = S5 >> 24;
	RA <<= 3;
	T6 = S2 & AT;
	T1 = T6 << 10;
	RA |= T1;
	T1 = T6 >> 3;
	RA |= T1;
	GTE_SetRegister(1,SP);
	GTE_SetRegister(3,FP);
	GTE_SetRegister(5,RA);
	T1 = 0x1F800000;
	T1 |= 0x300;
	AT = T4 << 4;
	T1 += AT;
	T6 = EMU_ReadU32(T1 + 8); //+ 0x8
	AT = SP << 16;
	AT = (int32_t)AT >> 16;
	T6 += AT;
	AT = EMU_ReadU32(GP + 80); //+ 0x50
	AT = T6 - AT;
	if ((int32_t)AT >= 0)
	{
		ZZ_CLOCKCYCLES(40,0x800378DC);
		goto ZZ_375EC_2F0;
	}
	AT = -AT;
	ZZ_CLOCKCYCLES(41,0x800378DC);
ZZ_375EC_2F0:
	A0 += AT;
	T6 = EMU_ReadU32(GP + 84); //+ 0x54
	AT = EMU_ReadU32(GP + 88); //+ 0x58
	SP = A0 >> T6;
	T6 = A0 + SP;
	SP = A0 >> AT;
	A0 = T6 - SP;
	AT = S0 & 0x1;
	if (!AT)
	{
		T6 = EMU_ReadU32(GP + 92); //+ 0x5C
		ZZ_CLOCKCYCLES(10,0x8003790C);
		goto ZZ_375EC_320;
	}
	T6 = EMU_ReadU32(GP + 92); //+ 0x5C
	T6 = EMU_ReadU32(GP + 96); //+ 0x60
	ZZ_CLOCKCYCLES(12,0x8003790C);
ZZ_375EC_320:
	A0 += T6;
	SP = (int32_t)A0 < 4096;
	if (SP)
	{
		ZZ_CLOCKCYCLES(5,0x80037928);
		goto ZZ_375EC_33C;
	}
	A0 = 0xFFF;
	ZZ_CLOCKCYCLES(7,0x80037934);
	goto ZZ_375EC_348;
ZZ_375EC_33C:
	if ((int32_t)A0 >= 0)
	{
		ZZ_CLOCKCYCLES(2,0x80037934);
		goto ZZ_375EC_348;
	}
	A0 = R0;
	ZZ_CLOCKCYCLES(3,0x80037934);
ZZ_375EC_348:
	GTE_SetRegister(8,A0);
	GTE_SetRegister(6,S3);
	GTE_DepthCueSingle();
	S3 = GTE_GetRegister(22);
	T6 = EMU_ReadU32(T1 + 8); //+ 0x8
	AT = FP << 16;
	AT = (int32_t)AT >> 16;
	T6 += AT;
	AT = EMU_ReadU32(GP + 80); //+ 0x50
	AT = T6 - AT;
	if ((int32_t)AT >= 0)
	{
		ZZ_CLOCKCYCLES(17,0x8003797C);
		goto ZZ_375EC_390;
	}
	AT = -AT;
	ZZ_CLOCKCYCLES(18,0x8003797C);
ZZ_375EC_390:
	T0 += AT;
	T6 = EMU_ReadU32(GP + 84); //+ 0x54
	AT = EMU_ReadU32(GP + 88); //+ 0x58
	SP = T0 >> T6;
	T6 = T0 + SP;
	SP = T0 >> AT;
	T0 = T6 - SP;
	AT = S1 & 0x1;
	if (!AT)
	{
		T6 = EMU_ReadU32(GP + 92); //+ 0x5C
		ZZ_CLOCKCYCLES(10,0x800379AC);
		goto ZZ_375EC_3C0;
	}
	T6 = EMU_ReadU32(GP + 92); //+ 0x5C
	T6 = EMU_ReadU32(GP + 96); //+ 0x60
	ZZ_CLOCKCYCLES(12,0x800379AC);
ZZ_375EC_3C0:
	T0 += T6;
	SP = (int32_t)T0 < 4096;
	if (SP)
	{
		ZZ_CLOCKCYCLES(5,0x800379C8);
		goto ZZ_375EC_3DC;
	}
	T0 = 0xFFF;
	ZZ_CLOCKCYCLES(7,0x800379D4);
	goto ZZ_375EC_3E8;
ZZ_375EC_3DC:
	if ((int32_t)T0 >= 0)
	{
		ZZ_CLOCKCYCLES(2,0x800379D4);
		goto ZZ_375EC_3E8;
	}
	T0 = R0;
	ZZ_CLOCKCYCLES(3,0x800379D4);
ZZ_375EC_3E8:
	GTE_SetRegister(8,T0);
	GTE_SetRegister(6,S4);
	GTE_DepthCueSingle();
	S4 = GTE_GetRegister(22);
	T6 = EMU_ReadU32(T1 + 8); //+ 0x8
	AT = RA << 16;
	AT = (int32_t)AT >> 16;
	T6 += AT;
	AT = EMU_ReadU32(GP + 80); //+ 0x50
	AT = T6 - AT;
	if ((int32_t)AT >= 0)
	{
		ZZ_CLOCKCYCLES(17,0x80037A1C);
		goto ZZ_375EC_430;
	}
	AT = -AT;
	ZZ_CLOCKCYCLES(18,0x80037A1C);
ZZ_375EC_430:
	S6 += AT;
	T6 = EMU_ReadU32(GP + 84); //+ 0x54
	AT = EMU_ReadU32(GP + 88); //+ 0x58
	SP = S6 >> T6;
	T6 = S6 + SP;
	SP = S6 >> AT;
	S6 = T6 - SP;
	AT = S2 & 0x1;
	if (!AT)
	{
		T6 = EMU_ReadU32(GP + 92); //+ 0x5C
		ZZ_CLOCKCYCLES(10,0x80037A4C);
		goto ZZ_375EC_460;
	}
	T6 = EMU_ReadU32(GP + 92); //+ 0x5C
	T6 = EMU_ReadU32(GP + 96); //+ 0x60
	ZZ_CLOCKCYCLES(12,0x80037A4C);
ZZ_375EC_460:
	S6 += T6;
	SP = (int32_t)S6 < 4096;
	if (SP)
	{
		ZZ_CLOCKCYCLES(5,0x80037A68);
		goto ZZ_375EC_47C;
	}
	S6 = 0xFFF;
	ZZ_CLOCKCYCLES(7,0x80037A74);
	goto ZZ_375EC_488;
ZZ_375EC_47C:
	if ((int32_t)S6 >= 0)
	{
		ZZ_CLOCKCYCLES(2,0x80037A74);
		goto ZZ_375EC_488;
	}
	S6 = R0;
	ZZ_CLOCKCYCLES(3,0x80037A74);
ZZ_375EC_488:
	GTE_SetRegister(8,S6);
	GTE_SetRegister(6,S5);
	GTE_DepthCueSingle();
	S5 = GTE_GetRegister(22);
	FP = V0 >> 20;
	GTE_RotateTranslateProjectTriple();
	FP <<= 2;
	T6 = T9 + FP;
	T1 = EMU_ReadU32(T6);
	S2 = 0x34000000;
	T1 >>= 24;
	FP = 0xFF0000;
	FP |= 0xFFFF;
	SP = T1 & 0x80;
	if (!SP)
	{
		S3 &= FP;
		ZZ_CLOCKCYCLES(20,0x80037C54);
		goto ZZ_375EC_668;
	}
	S3 &= FP;
	EMU_Write32(T3 + 8,GTE_GetRegister(12)); //+ 0x8
	EMU_Write32(T3 + 20,GTE_GetRegister(13)); //+ 0x14
	EMU_Write32(T3 + 32,GTE_GetRegister(14)); //+ 0x20
	FP = T1 & T7;
	if (FP == T7)
	{
		S3 |= S2;
		ZZ_CLOCKCYCLES(26,0x80037AE4);
		goto ZZ_375EC_4F8;
	}
	S3 |= S2;
	RA = 0x2000000;
	S3 |= RA;
	ZZ_CLOCKCYCLES(28,0x80037AE4);
ZZ_375EC_4F8:
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
		ZZ_CLOCKCYCLES(9,0x80037B30);
		goto ZZ_375EC_544;
	}
	SP = V0 >> 5;
	FP = EMU_ReadU32(GP + 224); //+ 0xE0
	SP &= 0x7;
	FP >>= SP;
	SP = V0 >> 12;
	SP &= 0x1F;
	SP += FP;
	FP = RA | 0x1;
	SP &= FP;
	SP <<= 2;
	T6 += SP;
	ZZ_CLOCKCYCLES(19,0x80037B30);
ZZ_375EC_544:
	S3 = EMU_ReadU32(T6 + 4); //+ 0x4
	S4 = EMU_ReadU32(AT);
	FP = EMU_ReadU32(GP + 228); //+ 0xE4
	SP = S3 >> 22;
	SP <<= 3;
	T6 = FP + SP;
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
		ZZ_CLOCKCYCLES(57,0x80037C28);
		goto ZZ_375EC_63C;
	}
	T6 = A1 + V1;
	V1 = SP;
	if ((int32_t)V1 >= 0)
	{
		T6 = A1 + V1;
		ZZ_CLOCKCYCLES(60,0x80037C28);
		goto ZZ_375EC_63C;
	}
	T6 = A1 + V1;
	V1 = R0;
	T6 = A1 + V1;
	ZZ_CLOCKCYCLES(62,0x80037C28);
ZZ_375EC_63C:
	SP = EMU_ReadU32(T6);
	FP = 0xFF0000;
	FP |= 0xFFFF;
	FP &= T3;
	EMU_Write32(T6,FP);
	RA = 0x9000000;
	SP |= RA;
	EMU_Write32(T3,SP);
	T3 += 40;
	ZZ_CLOCKCYCLES(11,0x80037CDC);
	goto ZZ_375EC_6F0;
ZZ_375EC_668:
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
		ZZ_CLOCKCYCLES(20,0x80037CB8);
		goto ZZ_375EC_6CC;
	}
	T6 = A1 + V1;
	V1 = SP;
	if ((int32_t)V1 >= 0)
	{
		T6 = A1 + V1;
		ZZ_CLOCKCYCLES(23,0x80037CB8);
		goto ZZ_375EC_6CC;
	}
	T6 = A1 + V1;
	V1 = R0;
	T6 = A1 + V1;
	ZZ_CLOCKCYCLES(25,0x80037CB8);
ZZ_375EC_6CC:
	SP = EMU_ReadU32(T6);
	FP = 0xFF0000;
	FP |= 0xFFFF;
	FP &= T3;
	EMU_Write32(T6,FP);
	FP = 0x6000000;
	SP |= FP;
	EMU_Write32(T3,SP);
	T3 += 28;
	ZZ_CLOCKCYCLES(9,0x80037CDC);
ZZ_375EC_6F0:
	T5 -= 1;
	if (T5)
	{
		AT = EMU_ReadU16(T2);
		ZZ_CLOCKCYCLES(3,0x8003766C);
		goto ZZ_375EC_80;
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
	ZZ_JUMPREGISTER(0x8001A43C,ZZ_1A2E0_15C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800375EC,0x8003766C,ZZ_375EC);
ZZ_MARK_TARGET(0x8003766C,0x800376B8,ZZ_375EC_80);
ZZ_MARK_TARGET(0x800376B8,0x80037768,ZZ_375EC_CC);
ZZ_MARK_TARGET(0x80037768,0x80037790,ZZ_375EC_17C);
ZZ_MARK_TARGET(0x80037790,0x800377BC,ZZ_375EC_1A4);
ZZ_MARK_TARGET(0x800377BC,0x800377E4,ZZ_375EC_1D0);
ZZ_MARK_TARGET(0x800377E4,0x80037810,ZZ_375EC_1F8);
ZZ_MARK_TARGET(0x80037810,0x80037838,ZZ_375EC_224);
ZZ_MARK_TARGET(0x80037838,0x800378DC,ZZ_375EC_24C);
ZZ_MARK_TARGET(0x800378DC,0x8003790C,ZZ_375EC_2F0);
ZZ_MARK_TARGET(0x8003790C,0x80037928,ZZ_375EC_320);
ZZ_MARK_TARGET(0x80037928,0x80037934,ZZ_375EC_33C);
ZZ_MARK_TARGET(0x80037934,0x8003797C,ZZ_375EC_348);
ZZ_MARK_TARGET(0x8003797C,0x800379AC,ZZ_375EC_390);
ZZ_MARK_TARGET(0x800379AC,0x800379C8,ZZ_375EC_3C0);
ZZ_MARK_TARGET(0x800379C8,0x800379D4,ZZ_375EC_3DC);
ZZ_MARK_TARGET(0x800379D4,0x80037A1C,ZZ_375EC_3E8);
ZZ_MARK_TARGET(0x80037A1C,0x80037A4C,ZZ_375EC_430);
ZZ_MARK_TARGET(0x80037A4C,0x80037A68,ZZ_375EC_460);
ZZ_MARK_TARGET(0x80037A68,0x80037A74,ZZ_375EC_47C);
ZZ_MARK_TARGET(0x80037A74,0x80037AE4,ZZ_375EC_488);
ZZ_MARK_TARGET(0x80037AE4,0x80037B30,ZZ_375EC_4F8);
ZZ_MARK_TARGET(0x80037B30,0x80037C28,ZZ_375EC_544);
ZZ_MARK_TARGET(0x80037C28,0x80037C54,ZZ_375EC_63C);
ZZ_MARK_TARGET(0x80037C54,0x80037CB8,ZZ_375EC_668);
ZZ_MARK_TARGET(0x80037CB8,0x80037CDC,ZZ_375EC_6CC);
ZZ_MARK_TARGET(0x80037CDC,0x80037D50,ZZ_375EC_6F0);
