#ifdef ZZ_INCLUDE_CODE
ZZ_39BD4:
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
	V1 = 0x80050000;
	V1 += 12396;
	GP = EMU_ReadU32(A2 + 20); //+ 0x14
	FP = EMU_ReadU32(A2 + 16); //+ 0x10
	SP = EMU_ReadU32(A2 + 12); //+ 0xC
	FP = GP - FP;
	FP = -FP;
	GP &= 0xFFF;
	SP &= 0xFFF;
	FP &= 0xFFF;
	T5 = (int32_t)GP < 2048;
	if (!T5)
	{
		T5 = (int32_t)GP < 1024;
		ZZ_CLOCKCYCLES(30,0x80039C74);
		goto ZZ_39BD4_A0;
	}
	T5 = (int32_t)GP < 1024;
	if (!T5)
	{
		T5 = GP << 1;
		ZZ_CLOCKCYCLES(32,0x80039C64);
		goto ZZ_39BD4_90;
	}
	T5 = GP << 1;
	T5 += V1;
	T5 = EMU_ReadS16(T5);
	ZZ_CLOCKCYCLES(35,0x80039CA0);
	goto ZZ_39BD4_CC;
ZZ_39BD4_90:
	T5 = V1 - T5;
	T5 = EMU_ReadS16(T5 + 4096); //+ 0x1000
	ZZ_CLOCKCYCLES(3,0x80039CA0);
	goto ZZ_39BD4_CC;
ZZ_39BD4_A0:
	T5 = (int32_t)GP < 3072;
	if (!T5)
	{
		T5 = GP << 1;
		ZZ_CLOCKCYCLES(3,0x80039C90);
		goto ZZ_39BD4_BC;
	}
	T5 = GP << 1;
	T5 += V1;
	T5 = EMU_ReadS16(T5 - 4096); //+ 0xFFFFF000
	T5 = -T5;
	ZZ_CLOCKCYCLES(7,0x80039CA0);
	goto ZZ_39BD4_CC;
ZZ_39BD4_BC:
	T5 = V1 - T5;
	T5 = EMU_ReadS16(T5 + 8192); //+ 0x2000
	T5 = -T5;
	ZZ_CLOCKCYCLES(4,0x80039CA0);
	goto ZZ_39BD4_CC;
ZZ_39BD4_CC:
	T6 = (int32_t)SP < 2048;
	if (!T6)
	{
		T6 = (int32_t)SP < 1024;
		ZZ_CLOCKCYCLES(3,0x80039CD4);
		goto ZZ_39BD4_100;
	}
	T6 = (int32_t)SP < 1024;
	if (!T6)
	{
		T6 = SP << 1;
		ZZ_CLOCKCYCLES(5,0x80039CC4);
		goto ZZ_39BD4_F0;
	}
	T6 = SP << 1;
	T6 += V1;
	T6 = EMU_ReadS16(T6);
	ZZ_CLOCKCYCLES(8,0x80039D00);
	goto ZZ_39BD4_12C;
ZZ_39BD4_F0:
	T6 = V1 - T6;
	T6 = EMU_ReadS16(T6 + 4096); //+ 0x1000
	ZZ_CLOCKCYCLES(3,0x80039D00);
	goto ZZ_39BD4_12C;
ZZ_39BD4_100:
	T6 = (int32_t)SP < 3072;
	if (!T6)
	{
		T6 = SP << 1;
		ZZ_CLOCKCYCLES(3,0x80039CF0);
		goto ZZ_39BD4_11C;
	}
	T6 = SP << 1;
	T6 += V1;
	T6 = EMU_ReadS16(T6 - 4096); //+ 0xFFFFF000
	T6 = -T6;
	ZZ_CLOCKCYCLES(7,0x80039D00);
	goto ZZ_39BD4_12C;
ZZ_39BD4_11C:
	T6 = V1 - T6;
	T6 = EMU_ReadS16(T6 + 8192); //+ 0x2000
	T6 = -T6;
	ZZ_CLOCKCYCLES(4,0x80039D00);
	goto ZZ_39BD4_12C;
ZZ_39BD4_12C:
	T7 = (int32_t)FP < 2048;
	if (!T7)
	{
		T7 = (int32_t)FP < 1024;
		ZZ_CLOCKCYCLES(3,0x80039D34);
		goto ZZ_39BD4_160;
	}
	T7 = (int32_t)FP < 1024;
	if (!T7)
	{
		T7 = FP << 1;
		ZZ_CLOCKCYCLES(5,0x80039D24);
		goto ZZ_39BD4_150;
	}
	T7 = FP << 1;
	T7 += V1;
	T7 = EMU_ReadS16(T7);
	ZZ_CLOCKCYCLES(8,0x80039D60);
	goto ZZ_39BD4_18C;
ZZ_39BD4_150:
	T7 = V1 - T7;
	T7 = EMU_ReadS16(T7 + 4096); //+ 0x1000
	ZZ_CLOCKCYCLES(3,0x80039D60);
	goto ZZ_39BD4_18C;
ZZ_39BD4_160:
	T7 = (int32_t)FP < 3072;
	if (!T7)
	{
		T7 = FP << 1;
		ZZ_CLOCKCYCLES(3,0x80039D50);
		goto ZZ_39BD4_17C;
	}
	T7 = FP << 1;
	T7 += V1;
	T7 = EMU_ReadS16(T7 - 4096); //+ 0xFFFFF000
	T7 = -T7;
	ZZ_CLOCKCYCLES(7,0x80039D60);
	goto ZZ_39BD4_18C;
ZZ_39BD4_17C:
	T7 = V1 - T7;
	T7 = EMU_ReadS16(T7 + 8192); //+ 0x2000
	T7 = -T7;
	ZZ_CLOCKCYCLES(4,0x80039D60);
	goto ZZ_39BD4_18C;
ZZ_39BD4_18C:
	T1 = (int32_t)GP < 2048;
	if (!T1)
	{
		T1 = (int32_t)GP < 1024;
		ZZ_CLOCKCYCLES(3,0x80039D94);
		goto ZZ_39BD4_1C0;
	}
	T1 = (int32_t)GP < 1024;
	if (!T1)
	{
		T1 = GP << 1;
		ZZ_CLOCKCYCLES(5,0x80039D84);
		goto ZZ_39BD4_1B0;
	}
	T1 = GP << 1;
	T1 = V1 - T1;
	T1 = EMU_ReadS16(T1 + 2048); //+ 0x800
	ZZ_CLOCKCYCLES(8,0x80039DB8);
	goto ZZ_39BD4_1E4;
ZZ_39BD4_1B0:
	T1 += V1;
	T1 = EMU_ReadS16(T1 - 2048); //+ 0xFFFFF800
	T1 = -T1;
	ZZ_CLOCKCYCLES(4,0x80039DB8);
	goto ZZ_39BD4_1E4;
ZZ_39BD4_1C0:
	T1 = (int32_t)GP < 3072;
	if (!T1)
	{
		T1 = GP << 1;
		ZZ_CLOCKCYCLES(3,0x80039DB0);
		goto ZZ_39BD4_1DC;
	}
	T1 = GP << 1;
	T1 = V1 - T1;
	T1 = EMU_ReadS16(T1 + 6144); //+ 0x1800
	T1 = -T1;
	ZZ_CLOCKCYCLES(7,0x80039DB8);
	goto ZZ_39BD4_1E4;
ZZ_39BD4_1DC:
	T1 += V1;
	T1 = EMU_ReadS16(T1 - 6144); //+ 0xFFFFE800
	ZZ_CLOCKCYCLES(2,0x80039DB8);
ZZ_39BD4_1E4:
	T2 = (int32_t)SP < 2048;
	if (!T2)
	{
		T2 = (int32_t)SP < 1024;
		ZZ_CLOCKCYCLES(3,0x80039DEC);
		goto ZZ_39BD4_218;
	}
	T2 = (int32_t)SP < 1024;
	if (!T2)
	{
		T2 = SP << 1;
		ZZ_CLOCKCYCLES(5,0x80039DDC);
		goto ZZ_39BD4_208;
	}
	T2 = SP << 1;
	T2 = V1 - T2;
	T2 = EMU_ReadS16(T2 + 2048); //+ 0x800
	ZZ_CLOCKCYCLES(8,0x80039E10);
	goto ZZ_39BD4_23C;
ZZ_39BD4_208:
	T2 += V1;
	T2 = EMU_ReadS16(T2 - 2048); //+ 0xFFFFF800
	T2 = -T2;
	ZZ_CLOCKCYCLES(4,0x80039E10);
	goto ZZ_39BD4_23C;
ZZ_39BD4_218:
	T2 = (int32_t)SP < 3072;
	if (!T2)
	{
		T2 = SP << 1;
		ZZ_CLOCKCYCLES(3,0x80039E08);
		goto ZZ_39BD4_234;
	}
	T2 = SP << 1;
	T2 = V1 - T2;
	T2 = EMU_ReadS16(T2 + 6144); //+ 0x1800
	T2 = -T2;
	ZZ_CLOCKCYCLES(7,0x80039E10);
	goto ZZ_39BD4_23C;
ZZ_39BD4_234:
	T2 += V1;
	T2 = EMU_ReadS16(T2 - 6144); //+ 0xFFFFE800
	ZZ_CLOCKCYCLES(2,0x80039E10);
ZZ_39BD4_23C:
	T4 = (int32_t)FP < 2048;
	if (!T4)
	{
		T4 = (int32_t)FP < 1024;
		ZZ_CLOCKCYCLES(3,0x80039E44);
		goto ZZ_39BD4_270;
	}
	T4 = (int32_t)FP < 1024;
	if (!T4)
	{
		T4 = FP << 1;
		ZZ_CLOCKCYCLES(5,0x80039E34);
		goto ZZ_39BD4_260;
	}
	T4 = FP << 1;
	T4 = V1 - T4;
	T4 = EMU_ReadS16(T4 + 2048); //+ 0x800
	ZZ_CLOCKCYCLES(8,0x80039E68);
	goto ZZ_39BD4_294;
ZZ_39BD4_260:
	T4 += V1;
	T4 = EMU_ReadS16(T4 - 2048); //+ 0xFFFFF800
	T4 = -T4;
	ZZ_CLOCKCYCLES(4,0x80039E68);
	goto ZZ_39BD4_294;
ZZ_39BD4_270:
	T4 = (int32_t)FP < 3072;
	if (!T4)
	{
		T4 = FP << 1;
		ZZ_CLOCKCYCLES(3,0x80039E60);
		goto ZZ_39BD4_28C;
	}
	T4 = FP << 1;
	T4 = V1 - T4;
	T4 = EMU_ReadS16(T4 + 6144); //+ 0x1800
	T4 = -T4;
	ZZ_CLOCKCYCLES(7,0x80039E68);
	goto ZZ_39BD4_294;
ZZ_39BD4_28C:
	T4 += V1;
	T4 = EMU_ReadS16(T4 - 6144); //+ 0xFFFFE800
	ZZ_CLOCKCYCLES(2,0x80039E68);
ZZ_39BD4_294:
	EMU_SMultiply(T1,T7);
	S0 = T7 & 0xFFFF;
	T1 &= 0xFFFF;
	T5 &= 0xFFFF;
	T6 &= 0xFFFF;
	T3 = T2 & 0xFFFF;
	T4 &= 0xFFFF;
	GTE_SetRegister(33,R0);
	GTE_SetRegister(35,R0);
	GTE_SetRegister(1,T6);
	AT = T4 << 16;
	AT |= T5;
	GTE_SetRegister(0,AT);
	FP = LO;
	GTE_SetRegister(32,T3);
	GTE_SetRegister(34,T1);
	GTE_SetRegister(36,T5);
	FP = (int32_t)FP >> 12;
	EMU_SMultiply(FP,T2);
	GTE_Multiply_V0_Rotation();
	GTE_SetRegister(32,T4);
	GTE_SetRegister(34,T6);
	GTE_SetRegister(36,S0);
	SP = GTE_GetRegister(9);
	T8 = LO;
	T8 = (int32_t)T8 >> 12;
	GP = GTE_GetRegister(10);
	S1 = GTE_GetRegister(11);
	EMU_SMultiply(SP,T7);
	GTE_Multiply_V0_Rotation();
	GTE_SetRegister(32,S0);
	AT = SP & 0xFFFF;
	GTE_SetRegister(34,AT);
	GTE_SetRegister(36,T1);
	AT = GTE_GetRegister(9);
	S7 = LO;
	S2 = GTE_GetRegister(10);
	S3 = GTE_GetRegister(11);
	EMU_SMultiply(GP,T2);
	GTE_Multiply_V0_Rotation();
	S7 = (int32_t)S7 >> 12;
	S4 = GTE_GetRegister(9);
	S5 = GTE_GetRegister(10);
	S6 = GTE_GetRegister(11);
	T9 = LO;
	T9 = (int32_t)T9 >> 12;
	S2 = -S2;
	S7 = GP - S7;
	S5 += FP;
	T8 += AT;
	T8 = -T8;
	T9 = T9 - S4;
	T1 = EMU_ReadU32(A0);
	T3 = EMU_ReadU32(A0 + 4); //+ 0x4
	T4 = EMU_ReadU32(A0 + 8); //+ 0x8
	T5 = EMU_ReadU32(A0 + 12); //+ 0xC
	T6 = EMU_ReadU32(A0 + 16); //+ 0x10
	GTE_SetRegister(32,T1);
	GTE_SetRegister(33,T3);
	GTE_SetRegister(34,T4);
	GTE_SetRegister(35,T5);
	GTE_SetRegister(36,T6);
	T1 = EMU_ReadU32(A2 + 24); //+ 0x18
	T3 = EMU_ReadU32(A1 + 4); //+ 0x4
	GTE_SetRegister(9,S7);
	GTE_SetRegister(10,S3);
	GTE_SetRegister(11,T8);
	EMU_SMultiply(T1,T3);
	GTE_Multiply_IR_Rotation();
	T1 = EMU_ReadU32(A2 + 28); //+ 0x1C
	T3 = EMU_ReadU32(A1 + 8); //+ 0x8
	S7 = GTE_GetRegister(9);
	S3 = GTE_GetRegister(10);
	T8 = GTE_GetRegister(11);
	T4 = LO;
	GTE_SetRegister(9,S1);
	GTE_SetRegister(10,T2);
	GTE_SetRegister(11,S6);
	EMU_SMultiply(T1,T3);
	GTE_Multiply_IR_Rotation();
	T1 = EMU_ReadU32(A2 + 32); //+ 0x20
	T3 = EMU_ReadU32(A1 + 12); //+ 0xC
	S1 = GTE_GetRegister(9);
	T2 = GTE_GetRegister(10);
	S6 = GTE_GetRegister(11);
	T4 = (int32_t)T4 >> 12;
	T5 = LO;
	GTE_SetRegister(9,S5);
	GTE_SetRegister(10,S2);
	GTE_SetRegister(11,T9);
	EMU_SMultiply(T1,T3);
	GTE_Multiply_IR_Rotation();
	T5 = (int32_t)T5 >> 12;
	S5 = GTE_GetRegister(9);
	S2 = GTE_GetRegister(10);
	T9 = GTE_GetRegister(11);
	T4 &= 0xFFFF;
	T5 &= 0xFFFF;
	T6 = LO;
	T6 = (int32_t)T6 >> 12;
	T6 &= 0xFFFF;
	GTE_SetRegister(32,T4);
	GTE_SetRegister(33,R0);
	GTE_SetRegister(34,T5);
	GTE_SetRegister(35,R0);
	GTE_SetRegister(36,T6);
	GTE_SetRegister(9,S3);
	GTE_SetRegister(10,T2);
	GTE_SetRegister(11,S2);
	GTE_Multiply_IR_Rotation();
	S3 = GTE_GetRegister(9);
	T2 = GTE_GetRegister(10);
	S2 = GTE_GetRegister(11);
	GTE_SetRegister(9,T8);
	GTE_SetRegister(10,S6);
	GTE_SetRegister(11,T9);
	T1 = S3;
	GTE_Multiply_IR_Rotation();
	T3 = T2;
	T8 = GTE_GetRegister(9);
	S6 = GTE_GetRegister(10);
	T9 = GTE_GetRegister(11);
	GTE_SetRegister(9,S7);
	GTE_SetRegister(10,S1);
	GTE_SetRegister(11,S5);
	T4 = S2;
	GTE_Multiply_IR_Rotation();
	S3 <<= 2;
	S7 = GTE_GetRegister(9);
	S1 = GTE_GetRegister(10);
	S5 = GTE_GetRegister(11);
	S3 += T1;
	S3 = (int32_t)S3 >> 3;
	S3 = -S3;
	T2 <<= 2;
	T2 += T3;
	T2 = (int32_t)T2 >> 3;
	T2 = -T2;
	S2 <<= 2;
	S2 += T4;
	S2 = (int32_t)S2 >> 3;
	S2 = -S2;
	T8 = -T8;
	S6 = -S6;
	T9 = -T9;
	AT = S7 & 0xFFFF;
	T1 = S1 << 16;
	T1 |= AT;
	AT = S5 & 0xFFFF;
	T3 = S3 << 16;
	T3 |= AT;
	AT = T2 & 0xFFFF;
	T4 = S2 << 16;
	T4 |= AT;
	AT = T8 & 0xFFFF;
	T5 = S6 << 16;
	T5 |= AT;
	GTE_SetRegister(32,T1);
	GTE_SetRegister(33,T3);
	GTE_SetRegister(34,T4);
	GTE_SetRegister(35,T5);
	GTE_SetRegister(36,T9);
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
	ZZ_CLOCKCYCLES_JR(183);
	ZZ_JUMPREGISTER(0x800188EC,ZZ_180CC_820);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80039BD4,0x80039C60,ZZ_39BD4);
ZZ_MARK_TARGET(0x80039C64,0x80039C70,ZZ_39BD4_90);
ZZ_MARK_TARGET(0x80039C74,0x80039C90,ZZ_39BD4_A0);
ZZ_MARK_TARGET(0x80039C90,0x80039CA0,ZZ_39BD4_BC);
ZZ_MARK_TARGET(0x80039CA0,0x80039CC0,ZZ_39BD4_CC);
ZZ_MARK_TARGET(0x80039CC4,0x80039CD0,ZZ_39BD4_F0);
ZZ_MARK_TARGET(0x80039CD4,0x80039CF0,ZZ_39BD4_100);
ZZ_MARK_TARGET(0x80039CF0,0x80039D00,ZZ_39BD4_11C);
ZZ_MARK_TARGET(0x80039D00,0x80039D20,ZZ_39BD4_12C);
ZZ_MARK_TARGET(0x80039D24,0x80039D30,ZZ_39BD4_150);
ZZ_MARK_TARGET(0x80039D34,0x80039D50,ZZ_39BD4_160);
ZZ_MARK_TARGET(0x80039D50,0x80039D60,ZZ_39BD4_17C);
ZZ_MARK_TARGET(0x80039D60,0x80039D80,ZZ_39BD4_18C);
ZZ_MARK_TARGET(0x80039D84,0x80039D94,ZZ_39BD4_1B0);
ZZ_MARK_TARGET(0x80039D94,0x80039DB0,ZZ_39BD4_1C0);
ZZ_MARK_TARGET(0x80039DB0,0x80039DB8,ZZ_39BD4_1DC);
ZZ_MARK_TARGET(0x80039DB8,0x80039DD8,ZZ_39BD4_1E4);
ZZ_MARK_TARGET(0x80039DDC,0x80039DEC,ZZ_39BD4_208);
ZZ_MARK_TARGET(0x80039DEC,0x80039E08,ZZ_39BD4_218);
ZZ_MARK_TARGET(0x80039E08,0x80039E10,ZZ_39BD4_234);
ZZ_MARK_TARGET(0x80039E10,0x80039E30,ZZ_39BD4_23C);
ZZ_MARK_TARGET(0x80039E34,0x80039E44,ZZ_39BD4_260);
ZZ_MARK_TARGET(0x80039E44,0x80039E60,ZZ_39BD4_270);
ZZ_MARK_TARGET(0x80039E60,0x80039E68,ZZ_39BD4_28C);
ZZ_MARK_TARGET(0x80039E68,0x8003A144,ZZ_39BD4_294);
