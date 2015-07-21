#ifdef ZZ_INCLUDE_CODE
ZZ_195CC:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 30996); //+ 0x7914
	SP -= 56;
	EMU_Write32(SP + 32,S2); //+ 0x20
	S2 = A0;
	EMU_Write32(SP + 24,S0); //+ 0x18
	S0 = 0x80050000;
	S0 += 30692;
	EMU_Write32(SP + 48,RA); //+ 0x30
	EMU_Write32(SP + 44,S5); //+ 0x2C
	EMU_Write32(SP + 40,S4); //+ 0x28
	EMU_Write32(SP + 36,S3); //+ 0x24
	EMU_Write32(SP + 28,S1); //+ 0x1C
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	A0 = S0;
	RA = 0x80019610; //ZZ_195CC_44
	S5 = V0 + 4;
	ZZ_CLOCKCYCLES(17,0x80042E9C);
	goto ZZ_42E9C;
ZZ_195CC_44:
	RA = 0x80019618; //ZZ_195CC_4C
	A0 = S0 + 272;
	ZZ_CLOCKCYCLES(2,0x80042ECC);
	goto ZZ_42ECC;
ZZ_195CC_4C:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 26296); //+ 0x66B8
	S0 = 0x7FF;
	V0 = EMU_ReadU16(V0);
	T6 = V0 - 1;
	if ((int32_t)T6 < 0)
	{
		T8 = -1;
		ZZ_CLOCKCYCLES(8,0x80019ACC);
		goto ZZ_195CC_500;
	}
	T8 = -1;
	T7 = -8;
	S4 = 0xE0000000;
	S3 = 0x18000000;
	T9 = 0x7F80000;
	ZZ_CLOCKCYCLES(12,0x80019648);
ZZ_195CC_7C:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 26296); //+ 0x66B8
	V0 = T6 << 1;
	V0 += V1;
	A1 = EMU_ReadU16(V0 + 4); //+ 0x4
	V0 = A1 >> 12;
	if (V0 == T8)
	{
		ZZ_CLOCKCYCLES(9,0x80019690);
		goto ZZ_195CC_C4;
	}
	T8 = V0;
	V0 = T8 << 6;
	S1 = S5 + V0;
	V0 = EMU_ReadU32(S1 + 4); //+ 0x4
	V1 = EMU_ReadU32(S1 + 8); //+ 0x8
	A0 = EMU_ReadU32(S1 + 12); //+ 0xC
	GTE_SetRegister(37,V0);
	GTE_SetRegister(38,V1);
	GTE_SetRegister(39,A0);
	ZZ_CLOCKCYCLES(18,0x80019690);
ZZ_195CC_C4:
	A1 &= 0xFFF;
	V0 = EMU_ReadU32(S1 + 20); //+ 0x14
	A1 <<= 3;
	A1 += V0;
	T5 = EMU_ReadU32(A1 + 4); //+ 0x4
	A2 = EMU_ReadU32(S1 + 24); //+ 0x18
	V0 = T5 >> 20;
	V0 <<= 3;
	T0 = V0 + A2;
	A0 = EMU_ReadU32(T0 + 4); //+ 0x4
	A1 = EMU_ReadU32(A1);
	V0 = (int32_t)A0 >> 16;
	V0 &= T7;
	V0 <<= 16;
	V1 = A0 & 0xFFF8;
	A3 = V0 | V1;
	V1 = A0 << 13;
	V1 &= S4;
	A0 <<= 26;
	A0 &= S3;
	V0 = EMU_ReadU32(T0);
	V1 |= A0;
	V0 >>= 5;
	V0 &= T9;
	V1 |= V0;
	V1 = (int32_t)V1 >> 16;
	V1 &= T7;
	GTE_SetRegister(0,A3);
	GTE_SetRegister(1,V1);
	V0 = T5 >> 5;
	V0 &= 0x7FF8;
	T4 = V0 + A2;
	A0 = EMU_ReadU32(T4 + 4); //+ 0x4
	V0 = (int32_t)A0 >> 16;
	V0 &= T7;
	V0 <<= 16;
	V1 = A0 & 0xFFF8;
	A3 = V0 | V1;
	V1 = A0 << 13;
	V1 &= S4;
	A0 <<= 26;
	A0 &= S3;
	V0 = EMU_ReadU32(T4);
	V1 |= A0;
	V0 >>= 5;
	V0 &= T9;
	V1 |= V0;
	V1 = (int32_t)V1 >> 16;
	V1 &= T7;
	GTE_SetRegister(2,A3);
	GTE_SetRegister(3,V1);
	V0 = A1 >> 20;
	V0 <<= 3;
	T1 = V0 + A2;
	A0 = EMU_ReadU32(T1 + 4); //+ 0x4
	V0 = (int32_t)A0 >> 16;
	V0 &= T7;
	V0 <<= 16;
	V1 = A0 & 0xFFF8;
	A3 = V0 | V1;
	V1 = A0 << 13;
	V1 &= S4;
	A0 <<= 26;
	A0 &= S3;
	V0 = EMU_ReadU32(T1);
	V1 |= A0;
	V0 >>= 5;
	V0 &= T9;
	V1 |= V0;
	V1 = (int32_t)V1 >> 16;
	V1 &= T7;
	GTE_SetRegister(4,A3);
	GTE_SetRegister(5,V1);
	GTE_RotateTranslateProjectTriple();
	V0 = A1 >> 6;
	V1 = EMU_ReadU32(S1 + 28); //+ 0x1C
	V0 &= 0x3FFC;
	A3 = V0 + V1;
	T2 = EMU_ReadU32(A3);
	GTE_SetRegister(6,T2);
	T2 >>= 24;
	V0 = T2 & 0x80;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(87,0x800199DC);
		goto ZZ_195CC_410;
	}
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 31732); //+ 0xFFFF840C
	A0 = EMU_ReadU32(V1 + 120); //+ 0x78
	V0 = A0 + 40;
	EMU_Write32(V1 + 120,V0); //+ 0x78
	V0 = A1 & 0xE0;
	V1 = EMU_ReadU32(S1 + 28); //+ 0x1C
	V0 >>= 3;
	V0 += V1;
	V0 = EMU_ReadU32(V0 - 32); //+ 0xFFFFFFE0
	T3 = EMU_ReadU32(V0);
	V0 = EMU_ReadU32(T0);
	T0 = A0;
	EMU_Write32(A0 + 4,V0); //+ 0x4
	V0 = EMU_ReadU32(T4);
	EMU_Write32(T0 + 16,V0); //+ 0x10
	V0 = EMU_ReadU32(T1);
	EMU_Write32(T0 + 28,V0); //+ 0x1C
	V0 = T5 & 0x1E;
	if (!V0)
	{
		A0 = V0 | 0x1;
		ZZ_CLOCKCYCLES(113,0x80019888);
		goto ZZ_195CC_2BC;
	}
	A0 = V0 | 0x1;
	V0 = T5 >> 5;
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 31072); //+ 0x7960
	V0 &= 0x7;
	V1 = (int32_t)V1 >> V0;
	V0 = A1 & 0x1F;
	V1 += V0;
	V1 &= A0;
	V1 <<= 2;
	V1 += A3;
	A2 = EMU_ReadU32(V1 + 4); //+ 0x4
	ZZ_CLOCKCYCLES(126,0x8001988C);
	goto ZZ_195CC_2C0;
ZZ_195CC_2BC:
	A2 = EMU_ReadU32(A3 + 4); //+ 0x4
	ZZ_CLOCKCYCLES(1,0x8001988C);
ZZ_195CC_2C0:
	EMU_Write32(T0 + 8,GTE_GetRegister(12)); //+ 0x8
	V0 = A2 >> 20;
	T1 = V0 & 0x3;
	A0 = 0x30000;
	A0 |= 0xE000;
	A1 = T1 << 7;
	A0 &= A2;
	V0 = T1 + 10;
	A0 >>= V0;
	V0 = A2 & 0x1F;
	V0 <<= 2;
	V1 = T3 & 0x80;
	V0 |= V1;
	V0 <<= 8;
	T1 = A0 | V0;
	V0 = T3 >> 4;
	V0 &= 0xFFF0;
	V1 = A2 & 0x1FC0;
	V0 |= V1;
	V1 = T2 & 0xF;
	V0 |= V1;
	EMU_Write16(T0 + 14,V0); //+ 0xE
	V0 = T3 & 0x1C;
	A1 |= V0;
	V0 = A2 >> 18;
	V0 &= 0x3;
	A1 |= V0;
	A0 = T2 & 0x60;
	A1 |= A0;
	V0 = A2 >> 22;
	V0 <<= 3;
	V1 = 0x80050000;
	V1 += 6004;
	V0 += V1;
	EMU_Write16(T0 + 26,A1); //+ 0x1A
	A3 = EMU_ReadU32(V0);
	V1 = EMU_ReadU16(V0 + 4); //+ 0x4
	V0 = A3 + T1;
	EMU_Write16(T0 + 12,V0); //+ 0xC
	V0 = A3 >> 16;
	V0 += T1;
	EMU_Write16(T0 + 24,V0); //+ 0x18
	V0 = V1 + T1;
	EMU_Write16(T0 + 36,V0); //+ 0x24
	A1 = GTE_GetRegister(17);
	V0 = 0x60;
	if (A0 != V0)
	{
		V0 = 0x36;
		ZZ_CLOCKCYCLES(48,0x80019950);
		goto ZZ_195CC_384;
	}
	V0 = 0x36;
	V0 = 0x34;
	ZZ_CLOCKCYCLES(49,0x80019950);
ZZ_195CC_384:
	EMU_Write8(T0 + 7,V0); //+ 0x7
	A3 = GTE_GetRegister(18);
	EMU_Write32(T0 + 20,GTE_GetRegister(13)); //+ 0x14
	A1 += A3;
	A3 = GTE_GetRegister(19);
	EMU_Write32(T0 + 32,GTE_GetRegister(14)); //+ 0x20
	V1 = A1 + A3;
	V1 >>= 5;
	A0 = 0x800;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 30928); //+ 0x78D0
	A0 = A0 - V1;
	V1 = V0 >> 31;
	V0 += V1;
	V0 = (int32_t)V0 >> 1;
	A1 = A0 - V0;
	V0 = (int32_t)A1 < (int32_t)S0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(19,0x800199A4);
		goto ZZ_195CC_3D8;
	}
	V0 = S0;
	ZZ_CLOCKCYCLES(21,0x800199B0);
	goto ZZ_195CC_3E4;
ZZ_195CC_3D8:
	if ((int32_t)A1 >= 0)
	{
		V0 = A1;
		ZZ_CLOCKCYCLES(2,0x800199B0);
		goto ZZ_195CC_3E4;
	}
	V0 = A1;
	V0 = R0;
	ZZ_CLOCKCYCLES(3,0x800199B0);
ZZ_195CC_3E4:
	S0 = V0;
	V0 = S0 << 2;
	A3 = S2 + V0;
	A0 = 0xFF0000;
	A0 |= 0xFFFF;
	V1 = 0x9000000;
	V0 = EMU_ReadU32(A3);
	A0 &= T0;
	V0 |= V1;
	EMU_Write32(T0,V0);
	ZZ_CLOCKCYCLES(11,0x80019AC0);
	goto ZZ_195CC_4F4;
ZZ_195CC_410:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 31732); //+ 0xFFFF840C
	A0 = EMU_ReadU32(V1 + 120); //+ 0x78
	V0 = A0 + 28;
	EMU_Write32(V1 + 120,V0); //+ 0x78
	V0 = EMU_ReadU32(T0);
	A2 = A0;
	EMU_Write32(A0 + 4,V0); //+ 0x4
	V0 = EMU_ReadU32(T4);
	EMU_Write32(A2 + 12,V0); //+ 0xC
	V0 = EMU_ReadU32(T1);
	EMU_Write32(A2 + 20,V0); //+ 0x14
	EMU_Write32(A2 + 8,GTE_GetRegister(12)); //+ 0x8
	A1 = GTE_GetRegister(17);
	V1 = T2 & 0x60;
	V0 = 0x60;
	if (V1 != V0)
	{
		V0 = 0x32;
		ZZ_CLOCKCYCLES(22,0x80019A38);
		goto ZZ_195CC_46C;
	}
	V0 = 0x32;
	V0 = 0x30;
	ZZ_CLOCKCYCLES(23,0x80019A38);
ZZ_195CC_46C:
	EMU_Write8(A2 + 7,V0); //+ 0x7
	A3 = GTE_GetRegister(18);
	EMU_Write32(A2 + 16,GTE_GetRegister(13)); //+ 0x10
	A1 += A3;
	A3 = GTE_GetRegister(19);
	EMU_Write32(A2 + 24,GTE_GetRegister(14)); //+ 0x18
	V1 = A1 + A3;
	V1 >>= 5;
	A0 = 0x800;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 30928); //+ 0x78D0
	A0 = A0 - V1;
	V1 = V0 >> 31;
	V0 += V1;
	V0 = (int32_t)V0 >> 1;
	A1 = A0 - V0;
	V0 = (int32_t)A1 < (int32_t)S0;
	if (V0)
	{
		V0 = A1;
		ZZ_CLOCKCYCLES(19,0x80019A8C);
		goto ZZ_195CC_4C0;
	}
	V0 = A1;
	V0 = S0;
	ZZ_CLOCKCYCLES(21,0x80019A98);
	goto ZZ_195CC_4CC;
ZZ_195CC_4C0:
	if ((int32_t)V0 >= 0)
	{
		S0 = V0;
		ZZ_CLOCKCYCLES(2,0x80019A9C);
		goto ZZ_195CC_4D0;
	}
	S0 = V0;
	V0 = R0;
	ZZ_CLOCKCYCLES(3,0x80019A98);
ZZ_195CC_4CC:
	S0 = V0;
	ZZ_CLOCKCYCLES(1,0x80019A9C);
ZZ_195CC_4D0:
	V0 = S0 << 2;
	A3 = S2 + V0;
	A0 = 0xFF0000;
	A0 |= 0xFFFF;
	V1 = 0x6000000;
	V0 = EMU_ReadU32(A3);
	A0 &= A2;
	V0 |= V1;
	EMU_Write32(A2,V0);
	ZZ_CLOCKCYCLES(9,0x80019AC0);
ZZ_195CC_4F4:
	T6 -= 1;
	if ((int32_t)T6 >= 0)
	{
		EMU_Write32(A3,A0);
		ZZ_CLOCKCYCLES(3,0x80019648);
		goto ZZ_195CC_7C;
	}
	EMU_Write32(A3,A0);
	ZZ_CLOCKCYCLES(3,0x80019ACC);
ZZ_195CC_500:
	RA = EMU_ReadU32(SP + 48); //+ 0x30
	S5 = EMU_ReadU32(SP + 44); //+ 0x2C
	S4 = EMU_ReadU32(SP + 40); //+ 0x28
	S3 = EMU_ReadU32(SP + 36); //+ 0x24
	S2 = EMU_ReadU32(SP + 32); //+ 0x20
	S1 = EMU_ReadU32(SP + 28); //+ 0x1C
	S0 = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 56;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(10);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800195CC,0x80019610,ZZ_195CC);
ZZ_MARK_TARGET(0x80019610,0x80019618,ZZ_195CC_44);
ZZ_MARK_TARGET(0x80019618,0x80019648,ZZ_195CC_4C);
ZZ_MARK_TARGET(0x80019648,0x80019690,ZZ_195CC_7C);
ZZ_MARK_TARGET(0x80019690,0x80019888,ZZ_195CC_C4);
ZZ_MARK_TARGET(0x80019888,0x8001988C,ZZ_195CC_2BC);
ZZ_MARK_TARGET(0x8001988C,0x80019950,ZZ_195CC_2C0);
ZZ_MARK_TARGET(0x80019950,0x800199A4,ZZ_195CC_384);
ZZ_MARK_TARGET(0x800199A4,0x800199B0,ZZ_195CC_3D8);
ZZ_MARK_TARGET(0x800199B0,0x800199DC,ZZ_195CC_3E4);
ZZ_MARK_TARGET(0x800199DC,0x80019A38,ZZ_195CC_410);
ZZ_MARK_TARGET(0x80019A38,0x80019A8C,ZZ_195CC_46C);
ZZ_MARK_TARGET(0x80019A8C,0x80019A98,ZZ_195CC_4C0);
ZZ_MARK_TARGET(0x80019A98,0x80019A9C,ZZ_195CC_4CC);
ZZ_MARK_TARGET(0x80019A9C,0x80019AC0,ZZ_195CC_4D0);
ZZ_MARK_TARGET(0x80019AC0,0x80019ACC,ZZ_195CC_4F4);
ZZ_MARK_TARGET(0x80019ACC,0x80019AF4,ZZ_195CC_500);
