#ifdef ZZ_INCLUDE_CODE
ZZ_3A76C:
	T0 = EMU_ReadU32(SP + 16); //+ 0x10
	T1 = EMU_ReadU32(SP + 20); //+ 0x14
	T2 = EMU_ReadU32(SP + 24); //+ 0x18
	T0 <<= 2;
	AT = -A3;
	T6 = A3 & 0xFFFF;
	T5 = AT & 0xFFFF;
	T4 = A3 << 16;
	T7 = AT << 16;
	AT = T5 | T4;
	V0 = T6 | T4;
	V1 = T5 | T7;
	T7 |= T6;
	A3 = EMU_ReadU32(T1);
	T4 = EMU_ReadU32(A1);
	GTE_SetRegister(0,AT);
	GTE_SetRegister(1,R0);
	GTE_SetRegister(2,V0);
	GTE_SetRegister(3,R0);
	GTE_SetRegister(4,V1);
	GTE_SetRegister(5,R0);
	T5 = T4 >> 24;
	GTE_RotateTranslateProjectTriple();
	AT = GTE_GetRegister(63);
	if ((int32_t)AT < 0)
	{
		GTE_SetRegister(0,T7);
		ZZ_CLOCKCYCLES(27,0x8003A944);
		goto ZZ_3A76C_1D8;
	}
	GTE_SetRegister(0,T7);
	GTE_SetRegister(1,R0);
	EMU_Write32(A3 + 8,GTE_GetRegister(12)); //+ 0x8
	EMU_Write32(A3 + 16,GTE_GetRegister(13)); //+ 0x10
	EMU_Write32(A3 + 24,GTE_GetRegister(14)); //+ 0x18
	T7 = GTE_GetRegister(17);
	V0 = GTE_GetRegister(18);
	V1 = GTE_GetRegister(19);
	T7 += V0;
	T7 += V1;
	T7 >>= 5;
	T7 <<= 2;
	GTE_RotateTranslateProjectSingle();
	AT = GTE_GetRegister(63);
	if ((int32_t)AT < 0)
	{
		ZZ_CLOCKCYCLES(43,0x8003A944);
		goto ZZ_3A76C_1D8;
	}
	EMU_Write32(A3 + 32,GTE_GetRegister(14)); //+ 0x20
	V1 = 0xFF0000;
	V1 |= 0xFFFF;
	AT = T4 & V1;
	V1 = 0x2C000000;
	AT |= V1;
	V1 = 0x60;
	V0 = T5 & V1;
	if (V0 == V1)
	{
		T3 = EMU_ReadU32(A1 + 4); //+ 0x4
		ZZ_CLOCKCYCLES(53,0x8003A848);
		goto ZZ_3A76C_DC;
	}
	T3 = EMU_ReadU32(A1 + 4); //+ 0x4
	V1 = 0x2000000;
	AT |= V1;
	ZZ_CLOCKCYCLES(55,0x8003A848);
ZZ_3A76C_DC:
	EMU_Write32(A3 + 4,AT); //+ 0x4
	A1 = T3 >> 20;
	AT = T3 >> 22;
	AT <<= 3;
	T6 = T2 + AT;
	T2 = EMU_ReadU32(T6);
	T6 = EMU_ReadU32(T6 + 4); //+ 0x4
	A1 &= 0x3;
	AT = A1 << 7;
	V1 = A2 & 0x1C;
	AT |= V1;
	V1 = T3 >> 18;
	V1 &= 0x3;
	AT |= V1;
	V1 = T5 & 0x60;
	AT |= V1;
	AT <<= 16;
	V0 = T3 & 0x1F;
	V0 <<= 2;
	V1 = A2 & 0x80;
	V0 |= V1;
	V1 = V0 << 8;
	V0 = T3 >> 10;
	V0 &= 0xF8;
	V0 >>= A1;
	A1 = V0 | V1;
	V0 = T2 >> 16;
	V0 += A1;
	V1 = AT | V0;
	AT = T5 & 0xF;
	V0 = T3 & 0x1FC0;
	AT |= V0;
	V0 = A2 >> 4;
	V0 &= 0xFFF0;
	AT |= V0;
	AT <<= 16;
	V0 = T2 & 0xFFFF;
	V0 += A1;
	V0 |= AT;
	AT = T6 & 0xFFFF;
	AT += A1;
	T6 >>= 16;
	T6 += A1;
	EMU_Write32(A3 + 12,V0); //+ 0xC
	EMU_Write32(A3 + 20,V1); //+ 0x14
	EMU_Write16(A3 + 28,AT); //+ 0x1C
	EMU_Write16(A3 + 36,T6); //+ 0x24
	T7 = EMU_CheckedSubtract(T0,T7);
	V1 = T7 & 0x1FFC;
	T7 = (int32_t)V1 < (int32_t)T7;
	if (!T7)
	{
		V1 += A0;
		ZZ_CLOCKCYCLES(52,0x8003A91C);
		goto ZZ_3A76C_1B0;
	}
	V1 += A0;
	V1 = A0 + 8188;
	ZZ_CLOCKCYCLES(53,0x8003A91C);
ZZ_3A76C_1B0:
	AT = EMU_ReadU32(V1);
	A0 = 0xFF0000;
	A0 |= 0xFFFF;
	V0 = A3 & A0;
	EMU_Write32(V1,V0);
	V1 = 0x9000000;
	AT |= V1;
	EMU_Write32(A3,AT);
	AT = A3 + 40;
	EMU_Write32(T1,AT);
	ZZ_CLOCKCYCLES(10,0x8003A944);
ZZ_3A76C_1D8:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x8001E020,ZZ_1DE78_1A8);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003A76C,0x8003A848,ZZ_3A76C);
ZZ_MARK_TARGET(0x8003A848,0x8003A91C,ZZ_3A76C_DC);
ZZ_MARK_TARGET(0x8003A91C,0x8003A944,ZZ_3A76C_1B0);
ZZ_MARK_TARGET(0x8003A944,0x8003A94C,ZZ_3A76C_1D8);
