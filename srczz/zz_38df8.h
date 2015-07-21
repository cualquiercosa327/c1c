#ifdef ZZ_INCLUDE_CODE
ZZ_38DF8:
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
	SP = EMU_ReadU32(A2);
	FP = EMU_ReadU32(A2 + 4); //+ 0x4
	RA = EMU_ReadU32(A2 + 8); //+ 0x8
	T6 = EMU_ReadU32(A3);
	T7 = EMU_ReadU32(A3 + 4); //+ 0x4
	S0 = EMU_ReadU32(A3 + 8); //+ 0x8
	S1 = EMU_ReadU32(A3 + 12); //+ 0xC
	S2 = EMU_ReadU32(A3 + 16); //+ 0x10
	S3 = EMU_ReadU32(A3 + 20); //+ 0x14
	A3 = R0;
	A2 = R0;
	T0 -= 1;
	T0 <<= 1;
	T1 -= 1;
	T1 <<= 1;
	ZZ_CLOCKCYCLES(35,0x80038E84);
ZZ_38DF8_8C:
	AT = EMU_ReadU32(A1);
	V0 = EMU_ReadU32(A1 + 4); //+ 0x4
	GP = 0xFFFF;
	V1 = AT & GP;
	if (V1 == GP)
	{
		ZZ_CLOCKCYCLES(6,0x80038FB0);
		goto ZZ_38DF8_1B8;
	}
	if (V1)
	{
		ZZ_CLOCKCYCLES(8,0x80038ED8);
		goto ZZ_38DF8_E0;
	}
	S4 = AT >> 16;
	S4 <<= 8;
	S5 = V0 & 0xFFFF;
	S5 <<= 8;
	S6 = V0 >> 16;
	S6 <<= 8;
	AT = EMU_ReadU32(A1 + 8); //+ 0x8
	V0 = EMU_ReadU32(A1 + 12); //+ 0xC
	S7 = AT >> 16;
	T8 = V0 & 0xFFFF;
	T9 = V0 >> 16;
	A1 += 16;
	ZZ_CLOCKCYCLES(21,0x80038E84);
	goto ZZ_38DF8_8C;
ZZ_38DF8_E0:
	V1 = AT & 0xFFF8;
	V1 >>= 2;
	V1 |= 0x1;
	GP = V1 & 0xE;
	if (GP == T0)
	{
		ZZ_CLOCKCYCLES(6,0x80038EF8);
		goto ZZ_38DF8_100;
	}
	if (GP != T1)
	{
		ZZ_CLOCKCYCLES(8,0x80038FA8);
		goto ZZ_38DF8_1B0;
	}
	ZZ_CLOCKCYCLES(8,0x80038EF8);
ZZ_38DF8_100:
	GP = AT & 0x7;
	T3 = AT >> 16;
	T4 = V0 & 0xFFFF;
	T5 = V0 >> 16;
	T3 <<= 16;
	T3 = (int32_t)T3 >> 12;
	T4 <<= 16;
	T4 = (int32_t)T4 >> 12;
	T5 <<= 16;
	T5 = (int32_t)T5 >> 12;
	T3 += SP;
	T4 += FP;
	T5 += RA;
	V0 = T4;
	AT = (int32_t)S1 < (int32_t)T3;
	if (AT)
	{
		AT = (int32_t)S2 < (int32_t)T4;
		ZZ_CLOCKCYCLES(17,0x80038FA8);
		goto ZZ_38DF8_1B0;
	}
	AT = (int32_t)S2 < (int32_t)T4;
	if (AT)
	{
		AT = (int32_t)S3 < (int32_t)T5;
		ZZ_CLOCKCYCLES(19,0x80038FA8);
		goto ZZ_38DF8_1B0;
	}
	AT = (int32_t)S3 < (int32_t)T5;
	if (AT)
	{
		AT = (int32_t)S7 < (int32_t)GP;
		ZZ_CLOCKCYCLES(21,0x80038FA8);
		goto ZZ_38DF8_1B0;
	}
	AT = (int32_t)S7 < (int32_t)GP;
	if (AT)
	{
		AT = S4 >> S7;
		ZZ_CLOCKCYCLES(23,0x80038F58);
		goto ZZ_38DF8_160;
	}
	AT = S4 >> S7;
	AT = S4 >> GP;
	ZZ_CLOCKCYCLES(24,0x80038F58);
ZZ_38DF8_160:
	T3 += AT;
	AT = (int32_t)T8 < (int32_t)GP;
	if (AT)
	{
		AT = S5 >> T8;
		ZZ_CLOCKCYCLES(4,0x80038F6C);
		goto ZZ_38DF8_174;
	}
	AT = S5 >> T8;
	AT = S5 >> GP;
	ZZ_CLOCKCYCLES(5,0x80038F6C);
ZZ_38DF8_174:
	T4 += AT;
	AT = (int32_t)T9 < (int32_t)GP;
	if (AT)
	{
		AT = S6 >> T9;
		ZZ_CLOCKCYCLES(4,0x80038F80);
		goto ZZ_38DF8_188;
	}
	AT = S6 >> T9;
	AT = S6 >> GP;
	ZZ_CLOCKCYCLES(5,0x80038F80);
ZZ_38DF8_188:
	T5 += AT;
	AT = (int32_t)T3 < (int32_t)T6;
	if (AT)
	{
		AT = (int32_t)T4 < (int32_t)T7;
		ZZ_CLOCKCYCLES(4,0x80038FA8);
		goto ZZ_38DF8_1B0;
	}
	AT = (int32_t)T4 < (int32_t)T7;
	if (AT)
	{
		AT = (int32_t)T5 < (int32_t)S0;
		ZZ_CLOCKCYCLES(6,0x80038FA8);
		goto ZZ_38DF8_1B0;
	}
	AT = (int32_t)T5 < (int32_t)S0;
	if (AT)
	{
		ZZ_CLOCKCYCLES(8,0x80038FA8);
		goto ZZ_38DF8_1B0;
	}
	A2 += 1;
	A3 += V0;
	ZZ_CLOCKCYCLES(10,0x80038FA8);
ZZ_38DF8_1B0:
	A1 += 8;
	ZZ_CLOCKCYCLES(2,0x80038E84);
	goto ZZ_38DF8_8C;
ZZ_38DF8_1B8:
	if (!A2)
	{
		ZZ_CLOCKCYCLES(2,0x8003900C);
		goto ZZ_38DF8_214;
	}
	EMU_SDivide(A3,A2);
	V0 = LO;
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
	ZZ_CLOCKCYCLES_JR(23);
	ZZ_JUMPREGISTER(0x8002CFB0,ZZ_2CD9C_214);
	ZZ_JUMPREGISTER_END();
ZZ_38DF8_214:
	V0 = T2;
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
	ZZ_CLOCKCYCLES_JR(20);
	ZZ_JUMPREGISTER(0x8002CFB0,ZZ_2CD9C_214);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80038DF8,0x80038E84,ZZ_38DF8);
ZZ_MARK_TARGET(0x80038E84,0x80038ED8,ZZ_38DF8_8C);
ZZ_MARK_TARGET(0x80038ED8,0x80038EF8,ZZ_38DF8_E0);
ZZ_MARK_TARGET(0x80038EF8,0x80038F58,ZZ_38DF8_100);
ZZ_MARK_TARGET(0x80038F58,0x80038F6C,ZZ_38DF8_160);
ZZ_MARK_TARGET(0x80038F6C,0x80038F80,ZZ_38DF8_174);
ZZ_MARK_TARGET(0x80038F80,0x80038FA8,ZZ_38DF8_188);
ZZ_MARK_TARGET(0x80038FA8,0x80038FB0,ZZ_38DF8_1B0);
ZZ_MARK_TARGET(0x80038FB0,0x8003900C,ZZ_38DF8_1B8);
ZZ_MARK_TARGET(0x8003900C,0x8003905C,ZZ_38DF8_214);
