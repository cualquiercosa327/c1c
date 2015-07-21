#ifdef ZZ_INCLUDE_CODE
ZZ_36BF4:
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
	S6 = EMU_ReadU32(SP + 20); //+ 0x14
	AT = EMU_ReadU32(SP + 24); //+ 0x18
	RA = EMU_ReadU32(SP + 28); //+ 0x1C
	T3 = EMU_ReadU32(T7);
	SP = 0x1F800000;
	SP |= 0xE0;
	EMU_Write32(SP,A3);
	S3 = GTE_GetRegister(53);
	S4 = GTE_GetRegister(54);
	S5 = GTE_GetRegister(55);
	EMU_Write32(SP + 4,S3); //+ 0x4
	EMU_Write32(SP + 8,S4); //+ 0x8
	EMU_Write32(SP + 12,S5); //+ 0xC
	GP = 0xFF0000;
	GP |= 0xFFFF;
	T7 = 0x60;
	T0 = 0x1F800000;
	T0 |= 0x100;
	T5 = EMU_ReadU32(A0);
	T2 = A0 + 2;
	T2 += T5;
	T2 += T5;
	T4 = 0xFFFF;
	A3 = AT;
	A0 = RA;
	AT = EMU_ReadU16(T2);
	A2 <<= 2;
	V1 = 0x1FFC;
	ZZ_CLOCKCYCLES(46,0x80036CAC);
ZZ_36BF4_B8:
	T2 -= 2;
	FP = AT >> 12;
	if (FP == T4)
	{
		AT &= 0xFFF;
		ZZ_CLOCKCYCLES(4,0x80036CEC);
		goto ZZ_36BF4_F8;
	}
	AT &= 0xFFF;
	T4 = FP;
	RA = T4 << 6;
	V0 = RA + T0;
	SP = EMU_ReadU32(V0 + 4); //+ 0x4
	FP = EMU_ReadU32(V0 + 8); //+ 0x8
	RA = EMU_ReadU32(V0 + 12); //+ 0xC
	GTE_SetRegister(37,SP);
	GTE_SetRegister(38,FP);
	GTE_SetRegister(39,RA);
	S7 = EMU_ReadU32(V0 + 20); //+ 0x14
	T8 = EMU_ReadU32(V0 + 24); //+ 0x18
	T9 = EMU_ReadU32(V0 + 28); //+ 0x1C
	ZZ_CLOCKCYCLES(16,0x80036CEC);
ZZ_36BF4_F8:
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
	T1 = 0x1F800000;
	T1 |= 0x48;
	SP = EMU_ReadU32(T1);
	FP = EMU_ReadU32(T1 + 4); //+ 0x4
	RA = EMU_ReadU32(T1 + 8); //+ 0x8
	GTE_SetRegister(8,EMU_ReadU32(T1 + 12)); //+ 0xC
	GTE_SetRegister(53,SP);
	GTE_SetRegister(54,FP);
	GTE_SetRegister(55,RA);
	SP = S0 & 0x1;
	RA = S1 & 0x1;
	RA <<= 1;
	SP |= RA;
	RA = S2 & 0x1;
	RA <<= 2;
	SP |= RA;
	RA = 0x80030000;
	RA += 28060;
	SP <<= 7;
	RA += SP;
	ZZ_JUMPREGISTER_BEGIN(RA);
	FP = ~GP;
	ZZ_CLOCKCYCLES_JR(44);
	ZZ_JUMPREGISTER(0x8001A2C8,ZZ_1A0CC_1FC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80036BF4,0x80036CAC,ZZ_36BF4);
ZZ_MARK_TARGET(0x80036CAC,0x80036CEC,ZZ_36BF4_B8);
ZZ_MARK_TARGET(0x80036CEC,0x80036D9C,ZZ_36BF4_F8);
