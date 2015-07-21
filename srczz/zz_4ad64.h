#ifdef ZZ_INCLUDE_CODE
ZZ_4AD64:
	SP -= 40;
	EMU_Write32(SP + 32,RA); //+ 0x20
	EMU_Write32(SP + 28,S1); //+ 0x1C
	EMU_Write32(SP + 24,S0); //+ 0x18
	T3 = A2;
	A1 <<= 16;
	T0 = (int32_t)A1 >> 16;
	V0 = T0 << 1;
	V0 += T0;
	V0 <<= 2;
	V0 = V0 - T0;
	V0 <<= 2;
	A0 <<= 16;
	T1 = (int32_t)A0 >> 16;
	V1 = T1 << 2;
	AT = 0x80060000;
	AT += V1;
	V1 = EMU_ReadU32(AT + 1048); //+ 0x418
	V0 = V0 - T0;
	V0 <<= 2;
	S0 = V0 + V1;
	V1 = EMU_ReadU8(S0 + 18); //+ 0x12
	V0 = EMU_ReadS16(S0 + 170); //+ 0xAA
	A0 = S0 + V1;
	T2 = EMU_ReadU8(A0 + 23); //+ 0x17
	V0 = (int32_t)V0 >> V1;
	V0 &= 0x1;
	if (V0)
	{
		S1 = A3 & 0xFF;
		ZZ_CLOCKCYCLES(29,0x8004AE30);
		goto ZZ_4AD64_CC;
	}
	S1 = A3 & 0xFF;
	V0 = EMU_ReadU16(S0 + 116); //+ 0x74
	if (!V0)
	{
		V0 = A3 & 0xFF;
		ZZ_CLOCKCYCLES(33,0x8004AE30);
		goto ZZ_4AD64_CC;
	}
	V0 = A3 & 0xFF;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(35,0x8004AE18);
		goto ZZ_4AD64_B4;
	}
	A1 = EMU_ReadS16(S0 + 76); //+ 0x4C
	A2 = EMU_ReadU8(A0 + 44); //+ 0x2C
	EMU_Write32(SP + 16,S1); //+ 0x10
	EMU_Write32(SP + 20,T2); //+ 0x14
	A0 = T0 << 8;
	A0 |= T1;
	RA = 0x8004AE10; //ZZ_4AD64_AC
	A3 = T3 & 0xFF;
	ZZ_CLOCKCYCLES(43,0x8004DDE4);
	goto ZZ_4DDE4;
ZZ_4AD64_AC:
	EMU_Write16(S0 + 168,S1); //+ 0xA8
	ZZ_CLOCKCYCLES(2,0x8004AE30);
	goto ZZ_4AD64_CC;
ZZ_4AD64_B4:
	A2 = EMU_ReadU8(A0 + 44); //+ 0x2C
	A0 = T0 << 8;
	A1 = EMU_ReadS16(S0 + 76); //+ 0x4C
	A0 |= T1;
	RA = 0x8004AE30; //ZZ_4AD64_CC
	A3 = T3 & 0xFF;
	ZZ_CLOCKCYCLES(6,0x8004E330);
	goto ZZ_4E330;
ZZ_4AD64_CC:
	RA = EMU_ReadU32(SP + 32); //+ 0x20
	S1 = EMU_ReadU32(SP + 28); //+ 0x1C
	S0 = EMU_ReadU32(SP + 24); //+ 0x18
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 40;
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004AD64,0x8004AE10,ZZ_4AD64);
ZZ_MARK_TARGET(0x8004AE10,0x8004AE18,ZZ_4AD64_AC);
ZZ_MARK_TARGET(0x8004AE18,0x8004AE30,ZZ_4AD64_B4);
ZZ_MARK_TARGET(0x8004AE30,0x8004AE44,ZZ_4AD64_CC);