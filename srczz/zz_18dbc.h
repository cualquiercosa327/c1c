#ifdef ZZ_INCLUDE_CODE
ZZ_18DBC:
	T2 = A0;
	T4 = EMU_ReadU32(SP + 16); //+ 0x10
	T6 = EMU_ReadU32(SP + 20); //+ 0x14
	T5 = EMU_ReadU32(SP + 24); //+ 0x18
	V1 = EMU_ReadU32(T4 + 16); //+ 0x10
	A0 = EMU_ReadU16(T4);
	V1 <<= 16;
	T0 = A0 | V1;
	GTE_SetRegister(0,T0);
	T7 = R0;
	GTE_SetRegister(1,T7);
	V0 = EMU_ReadU16(T4 + 12); //+ 0xC
	T0 = V0 | V1;
	GTE_SetRegister(2,T0);
	GTE_SetRegister(3,T7);
	V0 = EMU_ReadU32(T4 + 4); //+ 0x4
	V0 <<= 16;
	T0 = A0 | V0;
	GTE_SetRegister(4,T0);
	GTE_SetRegister(5,T7);
	GTE_RotateTranslateProjectTriple();
	T0 = GTE_GetRegister(63);
	if ((int32_t)T0 < 0)
	{
		ZZ_CLOCKCYCLES(27,0x8001913C);
		goto ZZ_18DBC_380;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 31732); //+ 0xFFFF840C
	A0 = EMU_ReadU32(V0 + 120); //+ 0x78
	V1 = A0 + 52;
	EMU_Write32(V0 + 120,V1); //+ 0x78
	T3 = EMU_ReadU32(A1);
	if (!T5)
	{
		T1 = A0;
		ZZ_CLOCKCYCLES(37,0x80018FA4);
		goto ZZ_18DBC_1E8;
	}
	T1 = A0;
	V1 = EMU_ReadU8(A1);
	V0 = EMU_ReadS16(T2 + 72); //+ 0x48
	EMU_SMultiply(V1,V0);
	V0 = LO;
	V0 = (int32_t)V0 >> 8;
	EMU_Write8(T1 + 4,V0); //+ 0x4
	V1 = EMU_ReadU8(A1 + 1); //+ 0x1
	V0 = EMU_ReadS16(T2 + 74); //+ 0x4A
	EMU_SMultiply(V1,V0);
	V0 = LO;
	V0 = (int32_t)V0 >> 8;
	EMU_Write8(T1 + 5,V0); //+ 0x5
	V1 = EMU_ReadU8(A1 + 2); //+ 0x2
	V0 = EMU_ReadS16(T2 + 76); //+ 0x4C
	EMU_SMultiply(V1,V0);
	V0 = LO;
	V0 = (int32_t)V0 >> 8;
	EMU_Write8(T1 + 6,V0); //+ 0x6
	V1 = EMU_ReadU8(A1);
	V0 = EMU_ReadS16(T2 + 78); //+ 0x4E
	EMU_SMultiply(V1,V0);
	V0 = LO;
	V0 = (int32_t)V0 >> 8;
	EMU_Write8(T1 + 16,V0); //+ 0x10
	V1 = EMU_ReadU8(A1 + 1); //+ 0x1
	V0 = EMU_ReadS16(T2 + 80); //+ 0x50
	EMU_SMultiply(V1,V0);
	V0 = LO;
	V0 = (int32_t)V0 >> 8;
	EMU_Write8(T1 + 17,V0); //+ 0x11
	V1 = EMU_ReadU8(A1 + 2); //+ 0x2
	V0 = EMU_ReadS16(T2 + 82); //+ 0x52
	EMU_SMultiply(V1,V0);
	V0 = LO;
	V0 = (int32_t)V0 >> 8;
	EMU_Write8(T1 + 18,V0); //+ 0x12
	V1 = EMU_ReadU8(A1);
	V0 = EMU_ReadS16(T2 + 84); //+ 0x54
	EMU_SMultiply(V1,V0);
	V0 = LO;
	V0 = (int32_t)V0 >> 8;
	EMU_Write8(T1 + 28,V0); //+ 0x1C
	V1 = EMU_ReadU8(A1 + 1); //+ 0x1
	V0 = EMU_ReadS16(T2 + 86); //+ 0x56
	EMU_SMultiply(V1,V0);
	V0 = LO;
	V0 = (int32_t)V0 >> 8;
	EMU_Write8(T1 + 29,V0); //+ 0x1D
	V1 = EMU_ReadU8(A1 + 2); //+ 0x2
	V0 = EMU_ReadS16(T2 + 88); //+ 0x58
	EMU_SMultiply(V1,V0);
	V0 = LO;
	V0 = (int32_t)V0 >> 8;
	EMU_Write8(T1 + 30,V0); //+ 0x1E
	V1 = EMU_ReadU8(A1);
	V0 = EMU_ReadS16(T2 + 90); //+ 0x5A
	EMU_SMultiply(V1,V0);
	V0 = LO;
	V0 = (int32_t)V0 >> 8;
	EMU_Write8(T1 + 40,V0); //+ 0x28
	V1 = EMU_ReadU8(A1 + 1); //+ 0x1
	V0 = EMU_ReadS16(T2 + 92); //+ 0x5C
	EMU_SMultiply(V1,V0);
	V0 = LO;
	V0 = (int32_t)V0 >> 8;
	EMU_Write8(T1 + 41,V0); //+ 0x29
	V1 = EMU_ReadU8(A1 + 2); //+ 0x2
	V0 = EMU_ReadS16(T2 + 94); //+ 0x5E
	EMU_SMultiply(V1,V0);
	V0 = LO;
	V0 = (int32_t)V0 >> 8;
	EMU_Write8(T1 + 42,V0); //+ 0x2A
	ZZ_CLOCKCYCLES(122,0x80018FB4);
	goto ZZ_18DBC_1F8;
ZZ_18DBC_1E8:
	EMU_Write32(T1 + 4,T3); //+ 0x4
	EMU_Write32(T1 + 16,T3); //+ 0x10
	EMU_Write32(T1 + 28,T3); //+ 0x1C
	EMU_Write32(T1 + 40,T3); //+ 0x28
	ZZ_CLOCKCYCLES(4,0x80018FB4);
ZZ_18DBC_1F8:
	T3 >>= 24;
	T2 = GTE_GetRegister(17);
	V1 = T3 & 0x60;
	V0 = 0x60;
	if (V1 != V0)
	{
		V0 = 0x3E;
		ZZ_CLOCKCYCLES(6,0x80018FD0);
		goto ZZ_18DBC_214;
	}
	V0 = 0x3E;
	V0 = 0x3C;
	ZZ_CLOCKCYCLES(7,0x80018FD0);
ZZ_18DBC_214:
	EMU_Write8(T1 + 7,V0); //+ 0x7
	T0 = GTE_GetRegister(18);
	EMU_Write32(T1 + 32,GTE_GetRegister(14)); //+ 0x20
	T2 += T0;
	T0 = GTE_GetRegister(19);
	EMU_Write32(T1 + 20,GTE_GetRegister(13)); //+ 0x14
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 30928); //+ 0x78D0
	A0 = A2 + 2048;
	V1 = V0 >> 31;
	V0 += V1;
	V0 = (int32_t)V0 >> 1;
	A0 = A0 - V0;
	V0 = T2 + T0;
	V0 >>= 5;
	T2 = A0 - V0;
	V0 = (int32_t)T2 < 2047;
	if (!V0)
	{
		V0 = T2;
		ZZ_CLOCKCYCLES(19,0x80019034);
		goto ZZ_18DBC_278;
	}
	V0 = T2;
	if ((int32_t)V0 >= 0)
	{
		A0 = 0xFF0000;
		ZZ_CLOCKCYCLES(21,0x80019028);
		goto ZZ_18DBC_26C;
	}
	A0 = 0xFF0000;
	V0 = R0;
	ZZ_CLOCKCYCLES(22,0x80019028);
ZZ_18DBC_26C:
	V0 <<= 2;
	A2 = T6 + V0;
	ZZ_CLOCKCYCLES(3,0x8001903C);
	goto ZZ_18DBC_280;
ZZ_18DBC_278:
	A2 = T6 + 8188;
	A0 = 0xFF0000;
	ZZ_CLOCKCYCLES(2,0x8001903C);
ZZ_18DBC_280:
	A0 |= 0xFFFF;
	V1 = 0xC000000;
	V0 = EMU_ReadU32(A2);
	A0 &= T1;
	V0 |= V1;
	EMU_Write32(T1,V0);
	EMU_Write32(A2,A0);
	V0 = EMU_ReadU32(T4 + 4); //+ 0x4
	V1 = EMU_ReadU16(T4 + 12); //+ 0xC
	V0 <<= 16;
	T0 = V1 | V0;
	EMU_Write32(T1 + 8,GTE_GetRegister(12)); //+ 0x8
	GTE_SetRegister(0,T0);
	T7 = R0;
	GTE_SetRegister(1,T7);
	GTE_RotateTranslateProjectSingle();
	EMU_Write32(T1 + 44,GTE_GetRegister(14)); //+ 0x2C
	A2 = 0x30000;
	A2 |= 0xE000;
	A0 = EMU_ReadU32(A1 + 4); //+ 0x4
	V1 = A3 & 0x80;
	V0 = A0 >> 20;
	T2 = V0 & 0x3;
	A1 = T2 << 7;
	A2 &= A0;
	V0 = T2 + 10;
	A2 >>= V0;
	V0 = A0 & 0x1F;
	V0 <<= 2;
	V0 |= V1;
	V0 <<= 8;
	T2 = A2 | V0;
	V0 = A3 >> 4;
	V0 &= 0xFFF0;
	V1 = A0 & 0x1FC0;
	V0 |= V1;
	V1 = T3 & 0xF;
	V0 |= V1;
	EMU_Write16(T1 + 14,V0); //+ 0xE
	V0 = A3 & 0x1C;
	A1 |= V0;
	V0 = A0 >> 18;
	V0 &= 0x3;
	A1 |= V0;
	V0 = T3 & 0x60;
	A1 |= V0;
	A0 >>= 22;
	A0 <<= 3;
	V0 = 0x80050000;
	V0 += 6004;
	A0 += V0;
	EMU_Write16(T1 + 26,A1); //+ 0x1A
	T0 = EMU_ReadU32(A0);
	V1 = EMU_ReadU32(A0 + 4); //+ 0x4
	V0 = T0 + T2;
	EMU_Write16(T1 + 12,V0); //+ 0xC
	V0 = T0 >> 16;
	V0 += T2;
	EMU_Write16(T1 + 24,V0); //+ 0x18
	V0 = V1 + T2;
	V1 >>= 16;
	V1 += T2;
	EMU_Write16(T1 + 36,V0); //+ 0x24
	EMU_Write16(T1 + 48,V1); //+ 0x30
	ZZ_CLOCKCYCLES(64,0x8001913C);
ZZ_18DBC_380:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x8001E70C,ZZ_1E3D4_338);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80018DBC,0x80018FA4,ZZ_18DBC);
ZZ_MARK_TARGET(0x80018FA4,0x80018FB4,ZZ_18DBC_1E8);
ZZ_MARK_TARGET(0x80018FB4,0x80018FD0,ZZ_18DBC_1F8);
ZZ_MARK_TARGET(0x80018FD0,0x80019028,ZZ_18DBC_214);
ZZ_MARK_TARGET(0x80019028,0x80019034,ZZ_18DBC_26C);
ZZ_MARK_TARGET(0x80019034,0x8001903C,ZZ_18DBC_278);
ZZ_MARK_TARGET(0x8001903C,0x8001913C,ZZ_18DBC_280);
ZZ_MARK_TARGET(0x8001913C,0x80019144,ZZ_18DBC_380);
