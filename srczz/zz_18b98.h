#ifdef ZZ_INCLUDE_CODE
ZZ_18B98:
	T3 = A1;
	T2 = A2;
	T4 = A0;
	V1 = EMU_ReadU32(A3 + 16); //+ 0x10
	A1 = EMU_ReadU16(A3);
	T5 = EMU_ReadU32(SP + 16); //+ 0x10
	V1 <<= 16;
	A2 = A1 | V1;
	GTE_SetRegister(0,A2);
	T6 = R0;
	GTE_SetRegister(1,T6);
	V0 = EMU_ReadU16(A3 + 12); //+ 0xC
	A2 = V0 | V1;
	GTE_SetRegister(2,A2);
	GTE_SetRegister(3,T6);
	V0 = EMU_ReadU32(A3 + 4); //+ 0x4
	V0 <<= 16;
	A2 = A1 | V0;
	GTE_SetRegister(4,A2);
	GTE_SetRegister(5,T6);
	GTE_RotateTranslateProjectTriple();
	A2 = GTE_GetRegister(63);
	if ((int32_t)A2 < 0)
	{
		ZZ_CLOCKCYCLES(27,0x80018DB4);
		goto ZZ_18B98_21C;
	}
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 31732); //+ 0xFFFF840C
	A0 = EMU_ReadU32(V1 + 120); //+ 0x78
	V0 = A0 + 40;
	EMU_Write32(V1 + 120,V0); //+ 0x78
	T1 = EMU_ReadU32(T4);
	T0 = A0;
	EMU_Write32(A0 + 4,T1); //+ 0x4
	T1 >>= 24;
	A1 = GTE_GetRegister(17);
	V1 = T1 & 0x60;
	V0 = 0x60;
	if (V1 != V0)
	{
		V0 = 0x2E;
		ZZ_CLOCKCYCLES(43,0x80018C48);
		goto ZZ_18B98_B0;
	}
	V0 = 0x2E;
	V0 = 0x2C;
	ZZ_CLOCKCYCLES(44,0x80018C48);
ZZ_18B98_B0:
	EMU_Write8(T0 + 7,V0); //+ 0x7
	A2 = GTE_GetRegister(18);
	EMU_Write32(T0 + 24,GTE_GetRegister(14)); //+ 0x18
	A1 += A2;
	A2 = GTE_GetRegister(19);
	EMU_Write32(T0 + 16,GTE_GetRegister(13)); //+ 0x10
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 30928); //+ 0x78D0
	A0 = T3 + 2048;
	V1 = V0 >> 31;
	V0 += V1;
	V0 = (int32_t)V0 >> 1;
	A0 = A0 - V0;
	V0 = A1 + A2;
	V0 >>= 5;
	A1 = A0 - V0;
	V0 = (int32_t)A1 < 2047;
	if (!V0)
	{
		V0 = A1;
		ZZ_CLOCKCYCLES(19,0x80018CAC);
		goto ZZ_18B98_114;
	}
	V0 = A1;
	if ((int32_t)V0 >= 0)
	{
		A0 = 0xFF0000;
		ZZ_CLOCKCYCLES(21,0x80018CA0);
		goto ZZ_18B98_108;
	}
	A0 = 0xFF0000;
	V0 = R0;
	ZZ_CLOCKCYCLES(22,0x80018CA0);
ZZ_18B98_108:
	V0 <<= 2;
	A1 = T5 + V0;
	ZZ_CLOCKCYCLES(3,0x80018CB4);
	goto ZZ_18B98_11C;
ZZ_18B98_114:
	A1 = T5 + 8188;
	A0 = 0xFF0000;
	ZZ_CLOCKCYCLES(2,0x80018CB4);
ZZ_18B98_11C:
	A0 |= 0xFFFF;
	V1 = 0x9000000;
	V0 = EMU_ReadU32(A1);
	A0 &= T0;
	V0 |= V1;
	EMU_Write32(T0,V0);
	EMU_Write32(A1,A0);
	V0 = EMU_ReadU32(A3 + 4); //+ 0x4
	V1 = EMU_ReadU16(A3 + 12); //+ 0xC
	V0 <<= 16;
	A2 = V1 | V0;
	EMU_Write32(T0 + 8,GTE_GetRegister(12)); //+ 0x8
	GTE_SetRegister(0,A2);
	T6 = R0;
	GTE_SetRegister(1,T6);
	GTE_RotateTranslateProjectSingle();
	EMU_Write32(T0 + 32,GTE_GetRegister(14)); //+ 0x20
	A2 = 0x30000;
	A2 |= 0xE000;
	A0 = EMU_ReadU32(T4 + 4); //+ 0x4
	V1 = T2 & 0x80;
	V0 = A0 >> 20;
	A3 = V0 & 0x3;
	A1 = A3 << 7;
	A2 &= A0;
	V0 = A3 + 10;
	A2 >>= V0;
	V0 = A0 & 0x1F;
	V0 <<= 2;
	V0 |= V1;
	V0 <<= 8;
	A3 = A2 | V0;
	V0 = T2 >> 4;
	V0 &= 0xFFF0;
	V1 = A0 & 0x1FC0;
	V0 |= V1;
	V1 = T1 & 0xF;
	V0 |= V1;
	EMU_Write16(T0 + 14,V0); //+ 0xE
	V0 = T2 & 0x1C;
	A1 |= V0;
	V0 = A0 >> 18;
	V0 &= 0x3;
	A1 |= V0;
	V0 = T1 & 0x60;
	A1 |= V0;
	A0 >>= 22;
	A0 <<= 3;
	V0 = 0x80050000;
	V0 += 6004;
	A0 += V0;
	EMU_Write16(T0 + 22,A1); //+ 0x16
	A2 = EMU_ReadU32(A0);
	V1 = EMU_ReadU32(A0 + 4); //+ 0x4
	V0 = A2 + A3;
	EMU_Write16(T0 + 12,V0); //+ 0xC
	V0 = A2 >> 16;
	V0 += A3;
	EMU_Write16(T0 + 20,V0); //+ 0x14
	V0 = V1 + A3;
	V1 >>= 16;
	V1 += A3;
	EMU_Write16(T0 + 28,V0); //+ 0x1C
	EMU_Write16(T0 + 36,V1); //+ 0x24
	ZZ_CLOCKCYCLES(64,0x80018DB4);
ZZ_18B98_21C:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x8001E14C,ZZ_1DE78_2D4);
	ZZ_JUMPREGISTER(0x8001E7A0,ZZ_1E3D4_3CC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80018B98,0x80018C48,ZZ_18B98);
ZZ_MARK_TARGET(0x80018C48,0x80018CA0,ZZ_18B98_B0);
ZZ_MARK_TARGET(0x80018CA0,0x80018CAC,ZZ_18B98_108);
ZZ_MARK_TARGET(0x80018CAC,0x80018CB4,ZZ_18B98_114);
ZZ_MARK_TARGET(0x80018CB4,0x80018DB4,ZZ_18B98_11C);
ZZ_MARK_TARGET(0x80018DB4,0x80018DBC,ZZ_18B98_21C);
