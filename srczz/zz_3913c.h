#ifdef ZZ_INCLUDE_CODE
ZZ_3913C:
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
		ZZ_CLOCKCYCLES(30,0x800391DC);
		goto ZZ_3913C_A0;
	}
	T5 = (int32_t)GP < 1024;
	if (!T5)
	{
		T5 = GP << 1;
		ZZ_CLOCKCYCLES(32,0x800391CC);
		goto ZZ_3913C_90;
	}
	T5 = GP << 1;
	T5 += V1;
	T5 = EMU_ReadS16(T5);
	ZZ_CLOCKCYCLES(35,0x80039208);
	goto ZZ_3913C_CC;
ZZ_3913C_90:
	T5 = V1 - T5;
	T5 = EMU_ReadS16(T5 + 4096); //+ 0x1000
	ZZ_CLOCKCYCLES(3,0x80039208);
	goto ZZ_3913C_CC;
ZZ_3913C_A0:
	T5 = (int32_t)GP < 3072;
	if (!T5)
	{
		T5 = GP << 1;
		ZZ_CLOCKCYCLES(3,0x800391F8);
		goto ZZ_3913C_BC;
	}
	T5 = GP << 1;
	T5 += V1;
	T5 = EMU_ReadS16(T5 - 4096); //+ 0xFFFFF000
	T5 = -T5;
	ZZ_CLOCKCYCLES(7,0x80039208);
	goto ZZ_3913C_CC;
ZZ_3913C_BC:
	T5 = V1 - T5;
	T5 = EMU_ReadS16(T5 + 8192); //+ 0x2000
	T5 = -T5;
	ZZ_CLOCKCYCLES(4,0x80039208);
	goto ZZ_3913C_CC;
ZZ_3913C_CC:
	T6 = (int32_t)SP < 2048;
	if (!T6)
	{
		T6 = (int32_t)SP < 1024;
		ZZ_CLOCKCYCLES(3,0x8003923C);
		goto ZZ_3913C_100;
	}
	T6 = (int32_t)SP < 1024;
	if (!T6)
	{
		T6 = SP << 1;
		ZZ_CLOCKCYCLES(5,0x8003922C);
		goto ZZ_3913C_F0;
	}
	T6 = SP << 1;
	T6 += V1;
	T6 = EMU_ReadS16(T6);
	ZZ_CLOCKCYCLES(8,0x80039268);
	goto ZZ_3913C_12C;
ZZ_3913C_F0:
	T6 = V1 - T6;
	T6 = EMU_ReadS16(T6 + 4096); //+ 0x1000
	ZZ_CLOCKCYCLES(3,0x80039268);
	goto ZZ_3913C_12C;
ZZ_3913C_100:
	T6 = (int32_t)SP < 3072;
	if (!T6)
	{
		T6 = SP << 1;
		ZZ_CLOCKCYCLES(3,0x80039258);
		goto ZZ_3913C_11C;
	}
	T6 = SP << 1;
	T6 += V1;
	T6 = EMU_ReadS16(T6 - 4096); //+ 0xFFFFF000
	T6 = -T6;
	ZZ_CLOCKCYCLES(7,0x80039268);
	goto ZZ_3913C_12C;
ZZ_3913C_11C:
	T6 = V1 - T6;
	T6 = EMU_ReadS16(T6 + 8192); //+ 0x2000
	T6 = -T6;
	ZZ_CLOCKCYCLES(4,0x80039268);
	goto ZZ_3913C_12C;
ZZ_3913C_12C:
	T7 = (int32_t)FP < 2048;
	if (!T7)
	{
		T7 = (int32_t)FP < 1024;
		ZZ_CLOCKCYCLES(3,0x8003929C);
		goto ZZ_3913C_160;
	}
	T7 = (int32_t)FP < 1024;
	if (!T7)
	{
		T7 = FP << 1;
		ZZ_CLOCKCYCLES(5,0x8003928C);
		goto ZZ_3913C_150;
	}
	T7 = FP << 1;
	T7 += V1;
	T7 = EMU_ReadS16(T7);
	ZZ_CLOCKCYCLES(8,0x800392C8);
	goto ZZ_3913C_18C;
ZZ_3913C_150:
	T7 = V1 - T7;
	T7 = EMU_ReadS16(T7 + 4096); //+ 0x1000
	ZZ_CLOCKCYCLES(3,0x800392C8);
	goto ZZ_3913C_18C;
ZZ_3913C_160:
	T7 = (int32_t)FP < 3072;
	if (!T7)
	{
		T7 = FP << 1;
		ZZ_CLOCKCYCLES(3,0x800392B8);
		goto ZZ_3913C_17C;
	}
	T7 = FP << 1;
	T7 += V1;
	T7 = EMU_ReadS16(T7 - 4096); //+ 0xFFFFF000
	T7 = -T7;
	ZZ_CLOCKCYCLES(7,0x800392C8);
	goto ZZ_3913C_18C;
ZZ_3913C_17C:
	T7 = V1 - T7;
	T7 = EMU_ReadS16(T7 + 8192); //+ 0x2000
	T7 = -T7;
	ZZ_CLOCKCYCLES(4,0x800392C8);
	goto ZZ_3913C_18C;
ZZ_3913C_18C:
	T1 = (int32_t)GP < 2048;
	if (!T1)
	{
		T1 = (int32_t)GP < 1024;
		ZZ_CLOCKCYCLES(3,0x800392FC);
		goto ZZ_3913C_1C0;
	}
	T1 = (int32_t)GP < 1024;
	if (!T1)
	{
		T1 = GP << 1;
		ZZ_CLOCKCYCLES(5,0x800392EC);
		goto ZZ_3913C_1B0;
	}
	T1 = GP << 1;
	T1 = V1 - T1;
	T1 = EMU_ReadS16(T1 + 2048); //+ 0x800
	ZZ_CLOCKCYCLES(8,0x80039320);
	goto ZZ_3913C_1E4;
ZZ_3913C_1B0:
	T1 += V1;
	T1 = EMU_ReadS16(T1 - 2048); //+ 0xFFFFF800
	T1 = -T1;
	ZZ_CLOCKCYCLES(4,0x80039320);
	goto ZZ_3913C_1E4;
ZZ_3913C_1C0:
	T1 = (int32_t)GP < 3072;
	if (!T1)
	{
		T1 = GP << 1;
		ZZ_CLOCKCYCLES(3,0x80039318);
		goto ZZ_3913C_1DC;
	}
	T1 = GP << 1;
	T1 = V1 - T1;
	T1 = EMU_ReadS16(T1 + 6144); //+ 0x1800
	T1 = -T1;
	ZZ_CLOCKCYCLES(7,0x80039320);
	goto ZZ_3913C_1E4;
ZZ_3913C_1DC:
	T1 += V1;
	T1 = EMU_ReadS16(T1 - 6144); //+ 0xFFFFE800
	ZZ_CLOCKCYCLES(2,0x80039320);
ZZ_3913C_1E4:
	T2 = (int32_t)SP < 2048;
	if (!T2)
	{
		T2 = (int32_t)SP < 1024;
		ZZ_CLOCKCYCLES(3,0x80039354);
		goto ZZ_3913C_218;
	}
	T2 = (int32_t)SP < 1024;
	if (!T2)
	{
		T2 = SP << 1;
		ZZ_CLOCKCYCLES(5,0x80039344);
		goto ZZ_3913C_208;
	}
	T2 = SP << 1;
	T2 = V1 - T2;
	T2 = EMU_ReadS16(T2 + 2048); //+ 0x800
	ZZ_CLOCKCYCLES(8,0x80039378);
	goto ZZ_3913C_23C;
ZZ_3913C_208:
	T2 += V1;
	T2 = EMU_ReadS16(T2 - 2048); //+ 0xFFFFF800
	T2 = -T2;
	ZZ_CLOCKCYCLES(4,0x80039378);
	goto ZZ_3913C_23C;
ZZ_3913C_218:
	T2 = (int32_t)SP < 3072;
	if (!T2)
	{
		T2 = SP << 1;
		ZZ_CLOCKCYCLES(3,0x80039370);
		goto ZZ_3913C_234;
	}
	T2 = SP << 1;
	T2 = V1 - T2;
	T2 = EMU_ReadS16(T2 + 6144); //+ 0x1800
	T2 = -T2;
	ZZ_CLOCKCYCLES(7,0x80039378);
	goto ZZ_3913C_23C;
ZZ_3913C_234:
	T2 += V1;
	T2 = EMU_ReadS16(T2 - 6144); //+ 0xFFFFE800
	ZZ_CLOCKCYCLES(2,0x80039378);
ZZ_3913C_23C:
	T4 = (int32_t)FP < 2048;
	if (!T4)
	{
		T4 = (int32_t)FP < 1024;
		ZZ_CLOCKCYCLES(3,0x800393AC);
		goto ZZ_3913C_270;
	}
	T4 = (int32_t)FP < 1024;
	if (!T4)
	{
		T4 = FP << 1;
		ZZ_CLOCKCYCLES(5,0x8003939C);
		goto ZZ_3913C_260;
	}
	T4 = FP << 1;
	T4 = V1 - T4;
	T4 = EMU_ReadS16(T4 + 2048); //+ 0x800
	ZZ_CLOCKCYCLES(8,0x800393D0);
	goto ZZ_3913C_294;
ZZ_3913C_260:
	T4 += V1;
	T4 = EMU_ReadS16(T4 - 2048); //+ 0xFFFFF800
	T4 = -T4;
	ZZ_CLOCKCYCLES(4,0x800393D0);
	goto ZZ_3913C_294;
ZZ_3913C_270:
	T4 = (int32_t)FP < 3072;
	if (!T4)
	{
		T4 = FP << 1;
		ZZ_CLOCKCYCLES(3,0x800393C8);
		goto ZZ_3913C_28C;
	}
	T4 = FP << 1;
	T4 = V1 - T4;
	T4 = EMU_ReadS16(T4 + 6144); //+ 0x1800
	T4 = -T4;
	ZZ_CLOCKCYCLES(7,0x800393D0);
	goto ZZ_3913C_294;
ZZ_3913C_28C:
	T4 += V1;
	T4 = EMU_ReadS16(T4 - 6144); //+ 0xFFFFE800
	ZZ_CLOCKCYCLES(2,0x800393D0);
ZZ_3913C_294:
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
	AT = EMU_ReadU32(A2 + 24); //+ 0x18
	FP = EMU_ReadU32(A2 + 20); //+ 0x14
	GP = EMU_ReadU32(A2 + 16); //+ 0x10
	A0 = (int32_t)AT < (int32_t)R0;
	if (A0)
	{
		SP = EMU_ReadU32(A2 + 12); //+ 0xC
		ZZ_CLOCKCYCLES(170,0x80039680);
		goto ZZ_3913C_544;
	}
	SP = EMU_ReadU32(A2 + 12); //+ 0xC
	GP = FP - GP;
	ZZ_CLOCKCYCLES(172,0x80039684);
	goto ZZ_3913C_548;
ZZ_3913C_544:
	GP += FP;
	ZZ_CLOCKCYCLES(1,0x80039684);
ZZ_3913C_548:
	FP = -FP;
	SP = -SP;
	GP &= 0xFFF;
	SP &= 0xFFF;
	FP &= 0xFFF;
	T5 = (int32_t)GP < 2048;
	if (!T5)
	{
		T5 = (int32_t)GP < 1024;
		ZZ_CLOCKCYCLES(8,0x800396CC);
		goto ZZ_3913C_590;
	}
	T5 = (int32_t)GP < 1024;
	if (!T5)
	{
		T5 = GP << 1;
		ZZ_CLOCKCYCLES(10,0x800396BC);
		goto ZZ_3913C_580;
	}
	T5 = GP << 1;
	T5 += V1;
	T5 = EMU_ReadS16(T5);
	ZZ_CLOCKCYCLES(13,0x800396F8);
	goto ZZ_3913C_5BC;
ZZ_3913C_580:
	T5 = V1 - T5;
	T5 = EMU_ReadS16(T5 + 4096); //+ 0x1000
	ZZ_CLOCKCYCLES(3,0x800396F8);
	goto ZZ_3913C_5BC;
ZZ_3913C_590:
	T5 = (int32_t)GP < 3072;
	if (!T5)
	{
		T5 = GP << 1;
		ZZ_CLOCKCYCLES(3,0x800396E8);
		goto ZZ_3913C_5AC;
	}
	T5 = GP << 1;
	T5 += V1;
	T5 = EMU_ReadS16(T5 - 4096); //+ 0xFFFFF000
	T5 = -T5;
	ZZ_CLOCKCYCLES(7,0x800396F8);
	goto ZZ_3913C_5BC;
ZZ_3913C_5AC:
	T5 = V1 - T5;
	T5 = EMU_ReadS16(T5 + 8192); //+ 0x2000
	T5 = -T5;
	ZZ_CLOCKCYCLES(4,0x800396F8);
	goto ZZ_3913C_5BC;
ZZ_3913C_5BC:
	T6 = (int32_t)SP < 2048;
	if (!T6)
	{
		T6 = (int32_t)SP < 1024;
		ZZ_CLOCKCYCLES(3,0x8003972C);
		goto ZZ_3913C_5F0;
	}
	T6 = (int32_t)SP < 1024;
	if (!T6)
	{
		T6 = SP << 1;
		ZZ_CLOCKCYCLES(5,0x8003971C);
		goto ZZ_3913C_5E0;
	}
	T6 = SP << 1;
	T6 += V1;
	T6 = EMU_ReadS16(T6);
	ZZ_CLOCKCYCLES(8,0x80039758);
	goto ZZ_3913C_61C;
ZZ_3913C_5E0:
	T6 = V1 - T6;
	T6 = EMU_ReadS16(T6 + 4096); //+ 0x1000
	ZZ_CLOCKCYCLES(3,0x80039758);
	goto ZZ_3913C_61C;
ZZ_3913C_5F0:
	T6 = (int32_t)SP < 3072;
	if (!T6)
	{
		T6 = SP << 1;
		ZZ_CLOCKCYCLES(3,0x80039748);
		goto ZZ_3913C_60C;
	}
	T6 = SP << 1;
	T6 += V1;
	T6 = EMU_ReadS16(T6 - 4096); //+ 0xFFFFF000
	T6 = -T6;
	ZZ_CLOCKCYCLES(7,0x80039758);
	goto ZZ_3913C_61C;
ZZ_3913C_60C:
	T6 = V1 - T6;
	T6 = EMU_ReadS16(T6 + 8192); //+ 0x2000
	T6 = -T6;
	ZZ_CLOCKCYCLES(4,0x80039758);
	goto ZZ_3913C_61C;
ZZ_3913C_61C:
	T7 = (int32_t)FP < 2048;
	if (!T7)
	{
		T7 = (int32_t)FP < 1024;
		ZZ_CLOCKCYCLES(3,0x8003978C);
		goto ZZ_3913C_650;
	}
	T7 = (int32_t)FP < 1024;
	if (!T7)
	{
		T7 = FP << 1;
		ZZ_CLOCKCYCLES(5,0x8003977C);
		goto ZZ_3913C_640;
	}
	T7 = FP << 1;
	T7 += V1;
	T7 = EMU_ReadS16(T7);
	ZZ_CLOCKCYCLES(8,0x800397B8);
	goto ZZ_3913C_67C;
ZZ_3913C_640:
	T7 = V1 - T7;
	T7 = EMU_ReadS16(T7 + 4096); //+ 0x1000
	ZZ_CLOCKCYCLES(3,0x800397B8);
	goto ZZ_3913C_67C;
ZZ_3913C_650:
	T7 = (int32_t)FP < 3072;
	if (!T7)
	{
		T7 = FP << 1;
		ZZ_CLOCKCYCLES(3,0x800397A8);
		goto ZZ_3913C_66C;
	}
	T7 = FP << 1;
	T7 += V1;
	T7 = EMU_ReadS16(T7 - 4096); //+ 0xFFFFF000
	T7 = -T7;
	ZZ_CLOCKCYCLES(7,0x800397B8);
	goto ZZ_3913C_67C;
ZZ_3913C_66C:
	T7 = V1 - T7;
	T7 = EMU_ReadS16(T7 + 8192); //+ 0x2000
	T7 = -T7;
	ZZ_CLOCKCYCLES(4,0x800397B8);
	goto ZZ_3913C_67C;
ZZ_3913C_67C:
	T1 = (int32_t)GP < 2048;
	if (!T1)
	{
		T1 = (int32_t)GP < 1024;
		ZZ_CLOCKCYCLES(3,0x800397EC);
		goto ZZ_3913C_6B0;
	}
	T1 = (int32_t)GP < 1024;
	if (!T1)
	{
		T1 = GP << 1;
		ZZ_CLOCKCYCLES(5,0x800397DC);
		goto ZZ_3913C_6A0;
	}
	T1 = GP << 1;
	T1 = V1 - T1;
	T1 = EMU_ReadS16(T1 + 2048); //+ 0x800
	ZZ_CLOCKCYCLES(8,0x80039810);
	goto ZZ_3913C_6D4;
ZZ_3913C_6A0:
	T1 += V1;
	T1 = EMU_ReadS16(T1 - 2048); //+ 0xFFFFF800
	T1 = -T1;
	ZZ_CLOCKCYCLES(4,0x80039810);
	goto ZZ_3913C_6D4;
ZZ_3913C_6B0:
	T1 = (int32_t)GP < 3072;
	if (!T1)
	{
		T1 = GP << 1;
		ZZ_CLOCKCYCLES(3,0x80039808);
		goto ZZ_3913C_6CC;
	}
	T1 = GP << 1;
	T1 = V1 - T1;
	T1 = EMU_ReadS16(T1 + 6144); //+ 0x1800
	T1 = -T1;
	ZZ_CLOCKCYCLES(7,0x80039810);
	goto ZZ_3913C_6D4;
ZZ_3913C_6CC:
	T1 += V1;
	T1 = EMU_ReadS16(T1 - 6144); //+ 0xFFFFE800
	ZZ_CLOCKCYCLES(2,0x80039810);
ZZ_3913C_6D4:
	T2 = (int32_t)SP < 2048;
	if (!T2)
	{
		T2 = (int32_t)SP < 1024;
		ZZ_CLOCKCYCLES(3,0x80039844);
		goto ZZ_3913C_708;
	}
	T2 = (int32_t)SP < 1024;
	if (!T2)
	{
		T2 = SP << 1;
		ZZ_CLOCKCYCLES(5,0x80039834);
		goto ZZ_3913C_6F8;
	}
	T2 = SP << 1;
	T2 = V1 - T2;
	T2 = EMU_ReadS16(T2 + 2048); //+ 0x800
	ZZ_CLOCKCYCLES(8,0x80039868);
	goto ZZ_3913C_72C;
ZZ_3913C_6F8:
	T2 += V1;
	T2 = EMU_ReadS16(T2 - 2048); //+ 0xFFFFF800
	T2 = -T2;
	ZZ_CLOCKCYCLES(4,0x80039868);
	goto ZZ_3913C_72C;
ZZ_3913C_708:
	T2 = (int32_t)SP < 3072;
	if (!T2)
	{
		T2 = SP << 1;
		ZZ_CLOCKCYCLES(3,0x80039860);
		goto ZZ_3913C_724;
	}
	T2 = SP << 1;
	T2 = V1 - T2;
	T2 = EMU_ReadS16(T2 + 6144); //+ 0x1800
	T2 = -T2;
	ZZ_CLOCKCYCLES(7,0x80039868);
	goto ZZ_3913C_72C;
ZZ_3913C_724:
	T2 += V1;
	T2 = EMU_ReadS16(T2 - 6144); //+ 0xFFFFE800
	ZZ_CLOCKCYCLES(2,0x80039868);
ZZ_3913C_72C:
	T4 = (int32_t)FP < 2048;
	if (!T4)
	{
		T4 = (int32_t)FP < 1024;
		ZZ_CLOCKCYCLES(3,0x8003989C);
		goto ZZ_3913C_760;
	}
	T4 = (int32_t)FP < 1024;
	if (!T4)
	{
		T4 = FP << 1;
		ZZ_CLOCKCYCLES(5,0x8003988C);
		goto ZZ_3913C_750;
	}
	T4 = FP << 1;
	T4 = V1 - T4;
	T4 = EMU_ReadS16(T4 + 2048); //+ 0x800
	ZZ_CLOCKCYCLES(8,0x800398C0);
	goto ZZ_3913C_784;
ZZ_3913C_750:
	T4 += V1;
	T4 = EMU_ReadS16(T4 - 2048); //+ 0xFFFFF800
	T4 = -T4;
	ZZ_CLOCKCYCLES(4,0x800398C0);
	goto ZZ_3913C_784;
ZZ_3913C_760:
	T4 = (int32_t)FP < 3072;
	if (!T4)
	{
		T4 = FP << 1;
		ZZ_CLOCKCYCLES(3,0x800398B8);
		goto ZZ_3913C_77C;
	}
	T4 = FP << 1;
	T4 = V1 - T4;
	T4 = EMU_ReadS16(T4 + 6144); //+ 0x1800
	T4 = -T4;
	ZZ_CLOCKCYCLES(7,0x800398C0);
	goto ZZ_3913C_784;
ZZ_3913C_77C:
	T4 += V1;
	T4 = EMU_ReadS16(T4 - 6144); //+ 0xFFFFE800
	ZZ_CLOCKCYCLES(2,0x800398C0);
ZZ_3913C_784:
	EMU_SMultiply(T1,T7);
	S0 = T7 & 0xFFFF;
	T1 &= 0xFFFF;
	T5 &= 0xFFFF;
	T6 &= 0xFFFF;
	T3 = T2 & 0xFFFF;
	T4 &= 0xFFFF;
	GTE_SetRegister(41,R0);
	GTE_SetRegister(43,R0);
	GTE_SetRegister(1,T6);
	AT = T4 << 16;
	AT |= T5;
	GTE_SetRegister(0,AT);
	FP = LO;
	GTE_SetRegister(40,T3);
	GTE_SetRegister(42,T1);
	GTE_SetRegister(44,T5);
	FP = (int32_t)FP >> 12;
	EMU_SMultiply(FP,T2);
	GTE_Multiply_V0_Light();
	GTE_SetRegister(40,T4);
	GTE_SetRegister(42,T6);
	GTE_SetRegister(44,S0);
	SP = GTE_GetRegister(9);
	T8 = LO;
	T8 = (int32_t)T8 >> 12;
	GP = GTE_GetRegister(10);
	S1 = GTE_GetRegister(11);
	EMU_SMultiply(SP,T7);
	GTE_Multiply_V0_Light();
	GTE_SetRegister(40,S0);
	AT = SP & 0xFFFF;
	GTE_SetRegister(42,AT);
	GTE_SetRegister(44,T1);
	AT = GTE_GetRegister(9);
	S7 = LO;
	S2 = GTE_GetRegister(10);
	S3 = GTE_GetRegister(11);
	EMU_SMultiply(GP,T2);
	GTE_Multiply_V0_Light();
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
	GTE_SetRegister(40,T1);
	GTE_SetRegister(41,T3);
	GTE_SetRegister(42,T4);
	GTE_SetRegister(43,T5);
	GTE_SetRegister(44,T9);
	T1 = EMU_ReadU32(A3);
	T3 = EMU_ReadU32(A3 + 4); //+ 0x4
	T4 = EMU_ReadU32(A3 + 8); //+ 0x8
	T5 = EMU_ReadU32(A3 + 12); //+ 0xC
	T6 = EMU_ReadU32(A3 + 16); //+ 0x10
	T7 = EMU_ReadU32(A3 + 20); //+ 0x14
	S0 = EMU_ReadU32(A3 + 24); //+ 0x18
	S4 = EMU_ReadU32(A3 + 28); //+ 0x1C
	GP = EMU_ReadU32(A3 + 32); //+ 0x20
	SP = EMU_ReadU32(A3 + 36); //+ 0x24
	FP = EMU_ReadU32(A3 + 40); //+ 0x28
	V1 = EMU_ReadU32(A3 + 44); //+ 0x2C
	S7 = T1 << 16;
	if (!A0)
	{
		S7 = (int32_t)S7 >> 16;
		ZZ_CLOCKCYCLES(84,0x80039A14);
		goto ZZ_3913C_8D8;
	}
	S7 = (int32_t)S7 >> 16;
	S7 = -S7;
	ZZ_CLOCKCYCLES(85,0x80039A14);
ZZ_3913C_8D8:
	S1 = (int32_t)T1 >> 16;
	S5 = T3 << 16;
	S5 = (int32_t)S5 >> 16;
	GTE_SetRegister(9,S7);
	GTE_SetRegister(10,S1);
	GTE_SetRegister(11,S5);
	V0 = (int32_t)FP >> 16;
	T0 = (int32_t)T6 >> 16;
	EMU_SMultiply(V0,T0);
	GTE_Multiply_IR_Light();
	V0 = V1 << 16;
	V0 = (int32_t)V0 >> 16;
	T0 = T7 << 16;
	T0 = (int32_t)T0 >> 16;
	S7 = GTE_GetRegister(9);
	S1 = GTE_GetRegister(10);
	S5 = GTE_GetRegister(11);
	RA = LO;
	RA = (int32_t)RA >> 8;
	GTE_SetRegister(45,RA);
	if (!A0)
	{
		S3 = (int32_t)T3 >> 16;
		ZZ_CLOCKCYCLES(22,0x80039A70);
		goto ZZ_3913C_934;
	}
	S3 = (int32_t)T3 >> 16;
	S3 = -S3;
	ZZ_CLOCKCYCLES(23,0x80039A70);
ZZ_3913C_934:
	T2 = T4 << 16;
	T2 = (int32_t)T2 >> 16;
	S2 = (int32_t)T4 >> 16;
	GTE_SetRegister(9,S3);
	GTE_SetRegister(10,T2);
	GTE_SetRegister(11,S2);
	EMU_SMultiply(V0,T0);
	GTE_Multiply_IR_Light();
	V0 = (int32_t)V1 >> 16;
	T0 = (int32_t)T7 >> 16;
	S3 = GTE_GetRegister(9);
	T2 = GTE_GetRegister(10);
	S2 = GTE_GetRegister(11);
	RA = LO;
	RA = (int32_t)RA >> 8;
	GTE_SetRegister(46,RA);
	T8 = T5 << 16;
	if (!A0)
	{
		T8 = (int32_t)T8 >> 16;
		ZZ_CLOCKCYCLES(19,0x80039AC0);
		goto ZZ_3913C_984;
	}
	T8 = (int32_t)T8 >> 16;
	T8 = -T8;
	ZZ_CLOCKCYCLES(20,0x80039AC0);
ZZ_3913C_984:
	S6 = (int32_t)T5 >> 16;
	T9 = T6 << 16;
	T9 = (int32_t)T9 >> 16;
	GTE_SetRegister(9,T8);
	GTE_SetRegister(10,S6);
	GTE_SetRegister(11,T9);
	EMU_SMultiply(V0,T0);
	GTE_Multiply_IR_Light();
	T8 = GTE_GetRegister(9);
	S6 = GTE_GetRegister(10);
	T9 = GTE_GetRegister(11);
	RA = LO;
	RA = (int32_t)RA >> 8;
	GTE_SetRegister(47,RA);
	AT = S7 & 0xFFFF;
	T1 = S1 << 16;
	T1 |= AT;
	GTE_SetRegister(40,T1);
	AT = S5 & 0xFFFF;
	T1 = S3 << 16;
	T1 |= AT;
	GTE_SetRegister(41,T1);
	AT = T2 & 0xFFFF;
	T1 = S2 << 16;
	T1 |= AT;
	GTE_SetRegister(42,T1);
	AT = T8 & 0xFFFF;
	T1 = S6 << 16;
	T1 |= AT;
	GTE_SetRegister(43,T1);
	GTE_SetRegister(44,T9);
	AT = 0xFFFF0000;
	T1 = S4 & AT;
	T3 = S0 & 0xFFFF;
	T1 |= T3;
	GTE_SetRegister(48,T1);
	T1 = S0 & AT;
	T3 = SP & 0xFFFF;
	T1 |= T3;
	GTE_SetRegister(49,T1);
	T1 = SP & AT;
	T3 = GP & 0xFFFF;
	T1 |= T3;
	GTE_SetRegister(50,T1);
	T1 = GP & AT;
	T3 = S4 & 0xFFFF;
	T1 |= T3;
	GTE_SetRegister(51,T1);
	GTE_SetRegister(52,FP);
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
	ZZ_CLOCKCYCLES_JR(69);
	ZZ_JUMPREGISTER(0x800188D0,ZZ_180CC_804);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003913C,0x800391C8,ZZ_3913C);
ZZ_MARK_TARGET(0x800391CC,0x800391D8,ZZ_3913C_90);
ZZ_MARK_TARGET(0x800391DC,0x800391F8,ZZ_3913C_A0);
ZZ_MARK_TARGET(0x800391F8,0x80039208,ZZ_3913C_BC);
ZZ_MARK_TARGET(0x80039208,0x80039228,ZZ_3913C_CC);
ZZ_MARK_TARGET(0x8003922C,0x80039238,ZZ_3913C_F0);
ZZ_MARK_TARGET(0x8003923C,0x80039258,ZZ_3913C_100);
ZZ_MARK_TARGET(0x80039258,0x80039268,ZZ_3913C_11C);
ZZ_MARK_TARGET(0x80039268,0x80039288,ZZ_3913C_12C);
ZZ_MARK_TARGET(0x8003928C,0x80039298,ZZ_3913C_150);
ZZ_MARK_TARGET(0x8003929C,0x800392B8,ZZ_3913C_160);
ZZ_MARK_TARGET(0x800392B8,0x800392C8,ZZ_3913C_17C);
ZZ_MARK_TARGET(0x800392C8,0x800392E8,ZZ_3913C_18C);
ZZ_MARK_TARGET(0x800392EC,0x800392FC,ZZ_3913C_1B0);
ZZ_MARK_TARGET(0x800392FC,0x80039318,ZZ_3913C_1C0);
ZZ_MARK_TARGET(0x80039318,0x80039320,ZZ_3913C_1DC);
ZZ_MARK_TARGET(0x80039320,0x80039340,ZZ_3913C_1E4);
ZZ_MARK_TARGET(0x80039344,0x80039354,ZZ_3913C_208);
ZZ_MARK_TARGET(0x80039354,0x80039370,ZZ_3913C_218);
ZZ_MARK_TARGET(0x80039370,0x80039378,ZZ_3913C_234);
ZZ_MARK_TARGET(0x80039378,0x80039398,ZZ_3913C_23C);
ZZ_MARK_TARGET(0x8003939C,0x800393AC,ZZ_3913C_260);
ZZ_MARK_TARGET(0x800393AC,0x800393C8,ZZ_3913C_270);
ZZ_MARK_TARGET(0x800393C8,0x800393D0,ZZ_3913C_28C);
ZZ_MARK_TARGET(0x800393D0,0x80039680,ZZ_3913C_294);
ZZ_MARK_TARGET(0x80039680,0x80039684,ZZ_3913C_544);
ZZ_MARK_TARGET(0x80039684,0x800396B8,ZZ_3913C_548);
ZZ_MARK_TARGET(0x800396BC,0x800396C8,ZZ_3913C_580);
ZZ_MARK_TARGET(0x800396CC,0x800396E8,ZZ_3913C_590);
ZZ_MARK_TARGET(0x800396E8,0x800396F8,ZZ_3913C_5AC);
ZZ_MARK_TARGET(0x800396F8,0x80039718,ZZ_3913C_5BC);
ZZ_MARK_TARGET(0x8003971C,0x80039728,ZZ_3913C_5E0);
ZZ_MARK_TARGET(0x8003972C,0x80039748,ZZ_3913C_5F0);
ZZ_MARK_TARGET(0x80039748,0x80039758,ZZ_3913C_60C);
ZZ_MARK_TARGET(0x80039758,0x80039778,ZZ_3913C_61C);
ZZ_MARK_TARGET(0x8003977C,0x80039788,ZZ_3913C_640);
ZZ_MARK_TARGET(0x8003978C,0x800397A8,ZZ_3913C_650);
ZZ_MARK_TARGET(0x800397A8,0x800397B8,ZZ_3913C_66C);
ZZ_MARK_TARGET(0x800397B8,0x800397D8,ZZ_3913C_67C);
ZZ_MARK_TARGET(0x800397DC,0x800397EC,ZZ_3913C_6A0);
ZZ_MARK_TARGET(0x800397EC,0x80039808,ZZ_3913C_6B0);
ZZ_MARK_TARGET(0x80039808,0x80039810,ZZ_3913C_6CC);
ZZ_MARK_TARGET(0x80039810,0x80039830,ZZ_3913C_6D4);
ZZ_MARK_TARGET(0x80039834,0x80039844,ZZ_3913C_6F8);
ZZ_MARK_TARGET(0x80039844,0x80039860,ZZ_3913C_708);
ZZ_MARK_TARGET(0x80039860,0x80039868,ZZ_3913C_724);
ZZ_MARK_TARGET(0x80039868,0x80039888,ZZ_3913C_72C);
ZZ_MARK_TARGET(0x8003988C,0x8003989C,ZZ_3913C_750);
ZZ_MARK_TARGET(0x8003989C,0x800398B8,ZZ_3913C_760);
ZZ_MARK_TARGET(0x800398B8,0x800398C0,ZZ_3913C_77C);
ZZ_MARK_TARGET(0x800398C0,0x80039A14,ZZ_3913C_784);
ZZ_MARK_TARGET(0x80039A14,0x80039A70,ZZ_3913C_8D8);
ZZ_MARK_TARGET(0x80039A70,0x80039AC0,ZZ_3913C_934);
ZZ_MARK_TARGET(0x80039AC0,0x80039BD4,ZZ_3913C_984);
