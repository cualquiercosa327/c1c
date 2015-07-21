#ifdef ZZ_INCLUDE_CODE
ZZ_3A144:
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
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	V0 = EMU_ReadU32(SP + 20); //+ 0x14
	T9 = EMU_ReadU32(SP + 24); //+ 0x18
	GP = EMU_ReadU32(SP + 28); //+ 0x1C
	T0 = EMU_ReadU32(RA);
	T1 = EMU_ReadU32(RA + 4); //+ 0x4
	T2 = EMU_ReadU32(RA + 8); //+ 0x8
	T3 = EMU_ReadU32(RA + 12); //+ 0xC
	T4 = EMU_ReadU32(RA + 16); //+ 0x10
	GTE_SetRegister(32,T0);
	GTE_SetRegister(33,T1);
	GTE_SetRegister(34,T2);
	GTE_SetRegister(35,T3);
	GTE_SetRegister(36,T4);
	S0 = EMU_ReadU32(A0);
	if (!A2)
	{
		S1 = EMU_ReadU32(A0 + 4); //+ 0x4
		ZZ_CLOCKCYCLES(34,0x8003A1E8);
		goto ZZ_3A144_A4;
	}
	S1 = EMU_ReadU32(A0 + 4); //+ 0x4
	S0 = (int32_t)S0 >> 8;
	S1 = -S1;
	S1 = (int32_t)S1 >> 8;
	GTE_SetRegister(37,S0);
	GTE_SetRegister(38,S1);
	GTE_SetRegister(39,V0);
	ZZ_CLOCKCYCLES(41,0x8003A264);
	goto ZZ_3A144_120;
ZZ_3A144_A4:
	S2 = EMU_ReadU32(A0 + 8); //+ 0x8
	S3 = EMU_ReadU32(A1);
	S4 = EMU_ReadU32(A1 + 4); //+ 0x4
	S5 = EMU_ReadU32(A1 + 8); //+ 0x8
	S0 = S0 - S3;
	S1 = S1 - S4;
	S2 = S2 - S5;
	S0 = (int32_t)S0 >> 8;
	S1 = (int32_t)S1 >> 8;
	S2 = (int32_t)S2 >> 8;
	GTE_SetRegister(9,S0);
	GTE_SetRegister(10,S1);
	GTE_SetRegister(11,S2);
	GTE_Multiply_IR_Rotation();
	S0 = GTE_GetRegister(9);
	S1 = GTE_GetRegister(10);
	S2 = GTE_GetRegister(11);
	GTE_SetRegister(37,S0);
	GTE_SetRegister(38,S1);
	GTE_SetRegister(39,S2);
	AT = (int32_t)V0 < (int32_t)S2;
	if (!AT)
	{
		AT = 0x2EE0;
		ZZ_CLOCKCYCLES(25,0x8003A71C);
		goto ZZ_3A144_5D8;
	}
	AT = 0x2EE0;
	AT = (int32_t)AT < (int32_t)S2;
	if (AT)
	{
		AT = (int32_t)T9 < (int32_t)S2;
		ZZ_CLOCKCYCLES(28,0x8003A71C);
		goto ZZ_3A144_5D8;
	}
	AT = (int32_t)T9 < (int32_t)S2;
	if (!T9)
	{
		ZZ_CLOCKCYCLES(30,0x8003A264);
		goto ZZ_3A144_120;
	}
	if (AT)
	{
		FP = EMU_ReadU32(A0 + 16); //+ 0x10
		ZZ_CLOCKCYCLES(32,0x8003A71C);
		goto ZZ_3A144_5D8;
	}
	ZZ_CLOCKCYCLES(31,0x8003A264);
ZZ_3A144_120:
	FP = EMU_ReadU32(A0 + 16); //+ 0x10
	SP = EMU_ReadU32(A0 + 12); //+ 0xC
	if (A2)
	{
		GP = EMU_ReadU32(A0 + 20); //+ 0x14
		ZZ_CLOCKCYCLES(4,0x8003A2E4);
		goto ZZ_3A144_1A0;
	}
	GP = EMU_ReadU32(A0 + 20); //+ 0x14
	S0 = EMU_ReadU32(A1 + 12); //+ 0xC
	S1 = EMU_ReadU32(A1 + 16); //+ 0x10
	S2 = EMU_ReadU32(A1 + 20); //+ 0x14
	S0 <<= 21;
	S0 = (int32_t)S0 >> 21;
	S1 <<= 21;
	S1 = (int32_t)S1 >> 21;
	S2 <<= 20;
	S2 = (int32_t)S2 >> 20;
	S3 = -S0;
	AT = (int32_t)S0 < -170;
	if (AT)
	{
		AT = 0xAA;
		ZZ_CLOCKCYCLES(17,0x8003A2B8);
		goto ZZ_3A144_174;
	}
	AT = 0xAA;
	AT = (int32_t)S3 < -170;
	if (AT)
	{
		AT = EMU_CheckedAdd(R0,-170);
		ZZ_CLOCKCYCLES(20,0x8003A2B8);
		goto ZZ_3A144_174;
	}
	AT = EMU_CheckedAdd(R0,-170);
	AT = S3;
	ZZ_CLOCKCYCLES(21,0x8003A2B8);
ZZ_3A144_174:
	SP += AT;
	S3 = -S1;
	AT = (int32_t)S1 < -170;
	if (AT)
	{
		AT = 0xAA;
		ZZ_CLOCKCYCLES(5,0x8003A2DC);
		goto ZZ_3A144_198;
	}
	AT = 0xAA;
	AT = (int32_t)S3 < -170;
	if (AT)
	{
		AT = EMU_CheckedAdd(R0,-170);
		ZZ_CLOCKCYCLES(8,0x8003A2DC);
		goto ZZ_3A144_198;
	}
	AT = EMU_CheckedAdd(R0,-170);
	AT = S3;
	ZZ_CLOCKCYCLES(9,0x8003A2DC);
ZZ_3A144_198:
	FP += AT;
	GP = GP - S2;
	ZZ_CLOCKCYCLES(2,0x8003A2E4);
ZZ_3A144_1A0:
	FP &= 0xFFF;
	SP &= 0xFFF;
	GP &= 0xFFF;
	V1 = 0x80050000;
	V1 += 12396;
	T6 = (int32_t)GP < 2048;
	if (!T6)
	{
		T6 = (int32_t)GP < 1024;
		ZZ_CLOCKCYCLES(8,0x8003A32C);
		goto ZZ_3A144_1E8;
	}
	T6 = (int32_t)GP < 1024;
	if (!T6)
	{
		T6 = GP << 1;
		ZZ_CLOCKCYCLES(10,0x8003A31C);
		goto ZZ_3A144_1D8;
	}
	T6 = GP << 1;
	T6 += V1;
	T6 = EMU_ReadS16(T6);
	ZZ_CLOCKCYCLES(13,0x8003A358);
	goto ZZ_3A144_214;
ZZ_3A144_1D8:
	T6 = V1 - T6;
	T6 = EMU_ReadS16(T6 + 4096); //+ 0x1000
	ZZ_CLOCKCYCLES(3,0x8003A358);
	goto ZZ_3A144_214;
ZZ_3A144_1E8:
	T6 = (int32_t)GP < 3072;
	if (!T6)
	{
		T6 = GP << 1;
		ZZ_CLOCKCYCLES(3,0x8003A348);
		goto ZZ_3A144_204;
	}
	T6 = GP << 1;
	T6 += V1;
	T6 = EMU_ReadS16(T6 - 4096); //+ 0xFFFFF000
	T6 = -T6;
	ZZ_CLOCKCYCLES(7,0x8003A358);
	goto ZZ_3A144_214;
ZZ_3A144_204:
	T6 = V1 - T6;
	T6 = EMU_ReadS16(T6 + 8192); //+ 0x2000
	T6 = -T6;
	ZZ_CLOCKCYCLES(4,0x8003A358);
	goto ZZ_3A144_214;
ZZ_3A144_214:
	T5 = (int32_t)SP < 2048;
	if (!T5)
	{
		T5 = (int32_t)SP < 1024;
		ZZ_CLOCKCYCLES(3,0x8003A38C);
		goto ZZ_3A144_248;
	}
	T5 = (int32_t)SP < 1024;
	if (!T5)
	{
		T5 = SP << 1;
		ZZ_CLOCKCYCLES(5,0x8003A37C);
		goto ZZ_3A144_238;
	}
	T5 = SP << 1;
	T5 += V1;
	T5 = EMU_ReadS16(T5);
	ZZ_CLOCKCYCLES(8,0x8003A3B8);
	goto ZZ_3A144_274;
ZZ_3A144_238:
	T5 = V1 - T5;
	T5 = EMU_ReadS16(T5 + 4096); //+ 0x1000
	ZZ_CLOCKCYCLES(3,0x8003A3B8);
	goto ZZ_3A144_274;
ZZ_3A144_248:
	T5 = (int32_t)SP < 3072;
	if (!T5)
	{
		T5 = SP << 1;
		ZZ_CLOCKCYCLES(3,0x8003A3A8);
		goto ZZ_3A144_264;
	}
	T5 = SP << 1;
	T5 += V1;
	T5 = EMU_ReadS16(T5 - 4096); //+ 0xFFFFF000
	T5 = -T5;
	ZZ_CLOCKCYCLES(7,0x8003A3B8);
	goto ZZ_3A144_274;
ZZ_3A144_264:
	T5 = V1 - T5;
	T5 = EMU_ReadS16(T5 + 8192); //+ 0x2000
	T5 = -T5;
	ZZ_CLOCKCYCLES(4,0x8003A3B8);
	goto ZZ_3A144_274;
ZZ_3A144_274:
	T7 = (int32_t)FP < 2048;
	if (!T7)
	{
		T7 = (int32_t)FP < 1024;
		ZZ_CLOCKCYCLES(3,0x8003A3EC);
		goto ZZ_3A144_2A8;
	}
	T7 = (int32_t)FP < 1024;
	if (!T7)
	{
		T7 = FP << 1;
		ZZ_CLOCKCYCLES(5,0x8003A3DC);
		goto ZZ_3A144_298;
	}
	T7 = FP << 1;
	T7 += V1;
	T7 = EMU_ReadS16(T7);
	ZZ_CLOCKCYCLES(8,0x8003A418);
	goto ZZ_3A144_2D4;
ZZ_3A144_298:
	T7 = V1 - T7;
	T7 = EMU_ReadS16(T7 + 4096); //+ 0x1000
	ZZ_CLOCKCYCLES(3,0x8003A418);
	goto ZZ_3A144_2D4;
ZZ_3A144_2A8:
	T7 = (int32_t)FP < 3072;
	if (!T7)
	{
		T7 = FP << 1;
		ZZ_CLOCKCYCLES(3,0x8003A408);
		goto ZZ_3A144_2C4;
	}
	T7 = FP << 1;
	T7 += V1;
	T7 = EMU_ReadS16(T7 - 4096); //+ 0xFFFFF000
	T7 = -T7;
	ZZ_CLOCKCYCLES(7,0x8003A418);
	goto ZZ_3A144_2D4;
ZZ_3A144_2C4:
	T7 = V1 - T7;
	T7 = EMU_ReadS16(T7 + 8192); //+ 0x2000
	T7 = -T7;
	ZZ_CLOCKCYCLES(4,0x8003A418);
	goto ZZ_3A144_2D4;
ZZ_3A144_2D4:
	T0 = (int32_t)GP < 2048;
	if (!T0)
	{
		T0 = (int32_t)GP < 1024;
		ZZ_CLOCKCYCLES(3,0x8003A44C);
		goto ZZ_3A144_308;
	}
	T0 = (int32_t)GP < 1024;
	if (!T0)
	{
		T0 = GP << 1;
		ZZ_CLOCKCYCLES(5,0x8003A43C);
		goto ZZ_3A144_2F8;
	}
	T0 = GP << 1;
	T0 = V1 - T0;
	T0 = EMU_ReadS16(T0 + 2048); //+ 0x800
	ZZ_CLOCKCYCLES(8,0x8003A470);
	goto ZZ_3A144_32C;
ZZ_3A144_2F8:
	T0 += V1;
	T0 = EMU_ReadS16(T0 - 2048); //+ 0xFFFFF800
	T0 = -T0;
	ZZ_CLOCKCYCLES(4,0x8003A470);
	goto ZZ_3A144_32C;
ZZ_3A144_308:
	T0 = (int32_t)GP < 3072;
	if (!T0)
	{
		T0 = GP << 1;
		ZZ_CLOCKCYCLES(3,0x8003A468);
		goto ZZ_3A144_324;
	}
	T0 = GP << 1;
	T0 = V1 - T0;
	T0 = EMU_ReadS16(T0 + 6144); //+ 0x1800
	T0 = -T0;
	ZZ_CLOCKCYCLES(7,0x8003A470);
	goto ZZ_3A144_32C;
ZZ_3A144_324:
	T0 += V1;
	T0 = EMU_ReadS16(T0 - 6144); //+ 0xFFFFE800
	ZZ_CLOCKCYCLES(2,0x8003A470);
ZZ_3A144_32C:
	T1 = (int32_t)SP < 2048;
	if (!T1)
	{
		T1 = (int32_t)SP < 1024;
		ZZ_CLOCKCYCLES(3,0x8003A4A4);
		goto ZZ_3A144_360;
	}
	T1 = (int32_t)SP < 1024;
	if (!T1)
	{
		T1 = SP << 1;
		ZZ_CLOCKCYCLES(5,0x8003A494);
		goto ZZ_3A144_350;
	}
	T1 = SP << 1;
	T1 = V1 - T1;
	T1 = EMU_ReadS16(T1 + 2048); //+ 0x800
	ZZ_CLOCKCYCLES(8,0x8003A4C8);
	goto ZZ_3A144_384;
ZZ_3A144_350:
	T1 += V1;
	T1 = EMU_ReadS16(T1 - 2048); //+ 0xFFFFF800
	T1 = -T1;
	ZZ_CLOCKCYCLES(4,0x8003A4C8);
	goto ZZ_3A144_384;
ZZ_3A144_360:
	T1 = (int32_t)SP < 3072;
	if (!T1)
	{
		T1 = SP << 1;
		ZZ_CLOCKCYCLES(3,0x8003A4C0);
		goto ZZ_3A144_37C;
	}
	T1 = SP << 1;
	T1 = V1 - T1;
	T1 = EMU_ReadS16(T1 + 6144); //+ 0x1800
	T1 = -T1;
	ZZ_CLOCKCYCLES(7,0x8003A4C8);
	goto ZZ_3A144_384;
ZZ_3A144_37C:
	T1 += V1;
	T1 = EMU_ReadS16(T1 - 6144); //+ 0xFFFFE800
	ZZ_CLOCKCYCLES(2,0x8003A4C8);
ZZ_3A144_384:
	T3 = (int32_t)FP < 2048;
	if (!T3)
	{
		T3 = (int32_t)FP < 1024;
		ZZ_CLOCKCYCLES(3,0x8003A4FC);
		goto ZZ_3A144_3B8;
	}
	T3 = (int32_t)FP < 1024;
	if (!T3)
	{
		T3 = FP << 1;
		ZZ_CLOCKCYCLES(5,0x8003A4EC);
		goto ZZ_3A144_3A8;
	}
	T3 = FP << 1;
	T3 = V1 - T3;
	T3 = EMU_ReadS16(T3 + 2048); //+ 0x800
	ZZ_CLOCKCYCLES(8,0x8003A520);
	goto ZZ_3A144_3DC;
ZZ_3A144_3A8:
	T3 += V1;
	T3 = EMU_ReadS16(T3 - 2048); //+ 0xFFFFF800
	T3 = -T3;
	ZZ_CLOCKCYCLES(4,0x8003A520);
	goto ZZ_3A144_3DC;
ZZ_3A144_3B8:
	T3 = (int32_t)FP < 3072;
	if (!T3)
	{
		T3 = FP << 1;
		ZZ_CLOCKCYCLES(3,0x8003A518);
		goto ZZ_3A144_3D4;
	}
	T3 = FP << 1;
	T3 = V1 - T3;
	T3 = EMU_ReadS16(T3 + 6144); //+ 0x1800
	T3 = -T3;
	ZZ_CLOCKCYCLES(7,0x8003A520);
	goto ZZ_3A144_3DC;
ZZ_3A144_3D4:
	T3 += V1;
	T3 = EMU_ReadS16(T3 - 6144); //+ 0xFFFFE800
	ZZ_CLOCKCYCLES(2,0x8003A520);
ZZ_3A144_3DC:
	EMU_SMultiply(T5,T7);
	T4 = T6 & 0xFFFF;
	T5 &= 0xFFFF;
	T7 &= 0xFFFF;
	T0 &= 0xFFFF;
	T2 = T1 & 0xFFFF;
	T3 &= 0xFFFF;
	GTE_SetRegister(33,R0);
	GTE_SetRegister(35,R0);
	GTE_SetRegister(1,T0);
	AT = T3 << 16;
	AT |= T7;
	GTE_SetRegister(0,AT);
	GP = LO;
	GTE_SetRegister(32,R0);
	GTE_SetRegister(34,T5);
	GTE_SetRegister(36,T2);
	EMU_SMultiply(T6,T1);
	GP = (int32_t)GP >> 12;
	GTE_Multiply_V0_Rotation();
	GTE_SetRegister(32,T0);
	GTE_SetRegister(34,T0);
	AT = GP & 0xFFFF;
	GTE_SetRegister(36,AT);
	S7 = LO;
	SP = GTE_GetRegister(10);
	S0 = GTE_GetRegister(11);
	EMU_SMultiply(T6,GP);
	S7 = (int32_t)S7 >> 12;
	GTE_Multiply_V0_Rotation();
	GTE_SetRegister(32,T4);
	GTE_SetRegister(34,T4);
	AT = SP & 0xFFFF;
	GTE_SetRegister(36,AT);
	T8 = LO;
	S1 = GTE_GetRegister(9);
	S2 = GTE_GetRegister(10);
	S3 = GTE_GetRegister(11);
	EMU_SMultiply(T4,SP);
	GTE_Multiply_V0_Rotation();
	T8 = (int32_t)T8 >> 12;
	S4 = GTE_GetRegister(9);
	S5 = GTE_GetRegister(10);
	S6 = GTE_GetRegister(11);
	AT = LO;
	AT = (int32_t)AT >> 12;
	S2 = S2 - T8;
	S7 = -S7;
	S1 += AT;
	S3 += S5;
	S4 = S4 - S6;
	T2 = EMU_ReadU32(A0 + 24); //+ 0x18
	T3 = EMU_ReadU32(A0 + 28); //+ 0x1C
	T4 = EMU_ReadU32(A0 + 32); //+ 0x20
	T2 = (int32_t)T2 >> A3;
	T3 = (int32_t)T3 >> A3;
	T4 = (int32_t)T4 >> A3;
	GTE_SetRegister(32,T2);
	GTE_SetRegister(33,R0);
	GTE_SetRegister(34,T3);
	GTE_SetRegister(35,R0);
	GTE_SetRegister(36,T4);
	GTE_SetRegister(9,S3);
	GTE_SetRegister(10,S0);
	GTE_SetRegister(11,S4);
	GTE_Multiply_IR_Rotation();
	S3 = GTE_GetRegister(9);
	S0 = GTE_GetRegister(10);
	S4 = GTE_GetRegister(11);
	GTE_SetRegister(9,S2);
	GTE_SetRegister(10,S7);
	GTE_SetRegister(11,S1);
	T0 = S3;
	GTE_Multiply_IR_Rotation();
	T1 = S0;
	S2 = GTE_GetRegister(9);
	S7 = GTE_GetRegister(10);
	S1 = GTE_GetRegister(11);
	T2 = S4;
	S3 <<= 2;
	S3 += T0;
	S3 = (int32_t)S3 >> 3;
	S3 = -S3;
	S0 <<= 2;
	S0 += T1;
	S0 = (int32_t)S0 >> 3;
	S0 = -S0;
	S4 <<= 2;
	S4 += T2;
	S4 = (int32_t)S4 >> 3;
	S4 = -S4;
	AT = S2 & 0xFFFF;
	T0 = S7 << 16;
	T0 |= AT;
	AT = S1 & 0xFFFF;
	T1 = S3 << 16;
	T1 |= AT;
	AT = S0 & 0xFFFF;
	T2 = S4 << 16;
	T2 |= AT;
	GTE_SetRegister(32,T0);
	GTE_SetRegister(33,T1);
	GTE_SetRegister(34,T2);
	GTE_SetRegister(35,R0);
	GTE_SetRegister(36,R0);
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
	V0 = 1;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(127);
	ZZ_JUMPREGISTER(0x8001E0AC,ZZ_1DE78_234);
	ZZ_JUMPREGISTER(0x8001DFB0,ZZ_1DE78_138);
	ZZ_JUMPREGISTER(0x8001E888,ZZ_1E7D8_B0);
	ZZ_JUMPREGISTER(0x80018AE4,ZZ_18A40_A4);
	ZZ_JUMPREGISTER_END();
ZZ_3A144_5D8:
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
	V0 = R0;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(20);
	ZZ_JUMPREGISTER(0x8001E0AC,ZZ_1DE78_234);
	ZZ_JUMPREGISTER(0x8001DFB0,ZZ_1DE78_138);
	ZZ_JUMPREGISTER(0x8001E888,ZZ_1E7D8_B0);
	ZZ_JUMPREGISTER(0x80018AE4,ZZ_18A40_A4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003A144,0x8003A1E8,ZZ_3A144);
ZZ_MARK_TARGET(0x8003A1E8,0x8003A264,ZZ_3A144_A4);
ZZ_MARK_TARGET(0x8003A264,0x8003A2B8,ZZ_3A144_120);
ZZ_MARK_TARGET(0x8003A2B8,0x8003A2DC,ZZ_3A144_174);
ZZ_MARK_TARGET(0x8003A2DC,0x8003A2E4,ZZ_3A144_198);
ZZ_MARK_TARGET(0x8003A2E4,0x8003A318,ZZ_3A144_1A0);
ZZ_MARK_TARGET(0x8003A31C,0x8003A328,ZZ_3A144_1D8);
ZZ_MARK_TARGET(0x8003A32C,0x8003A348,ZZ_3A144_1E8);
ZZ_MARK_TARGET(0x8003A348,0x8003A358,ZZ_3A144_204);
ZZ_MARK_TARGET(0x8003A358,0x8003A378,ZZ_3A144_214);
ZZ_MARK_TARGET(0x8003A37C,0x8003A388,ZZ_3A144_238);
ZZ_MARK_TARGET(0x8003A38C,0x8003A3A8,ZZ_3A144_248);
ZZ_MARK_TARGET(0x8003A3A8,0x8003A3B8,ZZ_3A144_264);
ZZ_MARK_TARGET(0x8003A3B8,0x8003A3D8,ZZ_3A144_274);
ZZ_MARK_TARGET(0x8003A3DC,0x8003A3E8,ZZ_3A144_298);
ZZ_MARK_TARGET(0x8003A3EC,0x8003A408,ZZ_3A144_2A8);
ZZ_MARK_TARGET(0x8003A408,0x8003A418,ZZ_3A144_2C4);
ZZ_MARK_TARGET(0x8003A418,0x8003A438,ZZ_3A144_2D4);
ZZ_MARK_TARGET(0x8003A43C,0x8003A44C,ZZ_3A144_2F8);
ZZ_MARK_TARGET(0x8003A44C,0x8003A468,ZZ_3A144_308);
ZZ_MARK_TARGET(0x8003A468,0x8003A470,ZZ_3A144_324);
ZZ_MARK_TARGET(0x8003A470,0x8003A490,ZZ_3A144_32C);
ZZ_MARK_TARGET(0x8003A494,0x8003A4A4,ZZ_3A144_350);
ZZ_MARK_TARGET(0x8003A4A4,0x8003A4C0,ZZ_3A144_360);
ZZ_MARK_TARGET(0x8003A4C0,0x8003A4C8,ZZ_3A144_37C);
ZZ_MARK_TARGET(0x8003A4C8,0x8003A4E8,ZZ_3A144_384);
ZZ_MARK_TARGET(0x8003A4EC,0x8003A4FC,ZZ_3A144_3A8);
ZZ_MARK_TARGET(0x8003A4FC,0x8003A518,ZZ_3A144_3B8);
ZZ_MARK_TARGET(0x8003A518,0x8003A520,ZZ_3A144_3D4);
ZZ_MARK_TARGET(0x8003A520,0x8003A71C,ZZ_3A144_3DC);
ZZ_MARK_TARGET(0x8003A71C,0x8003A76C,ZZ_3A144_5D8);
