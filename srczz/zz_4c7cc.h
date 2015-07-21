#ifdef ZZ_INCLUDE_CODE
ZZ_4C7CC:
	SP -= 24;
	EMU_Write32(SP + 20,RA); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	A1 <<= 16;
	A1 = (int32_t)A1 >> 16;
	V1 = A1 << 1;
	V1 += A1;
	V1 <<= 2;
	V1 = V1 - A1;
	V1 <<= 2;
	A0 <<= 16;
	A0 = (int32_t)A0 >> 16;
	V0 = 0x80060000;
	V0 += 1048;
	T0 = A0 << 2;
	T0 += V0;
	V0 = EMU_ReadU32(T0);
	V1 = V1 - A1;
	V1 <<= 2;
	S0 = V1 + V0;
	V0 = EMU_ReadU32(S0 + 144); //+ 0x90
	A2 = -2;
	V0 &= A2;
	EMU_Write32(S0 + 144,V0); //+ 0x90
	A2 = EMU_ReadU32(T0);
	A2 += V1;
	V0 = EMU_ReadU32(A2 + 144); //+ 0x90
	A3 = -3;
	V0 &= A3;
	EMU_Write32(A2 + 144,V0); //+ 0x90
	A2 = EMU_ReadU32(T0);
	A2 += V1;
	V0 = EMU_ReadU32(A2 + 144); //+ 0x90
	A3 = -9;
	V0 &= A3;
	EMU_Write32(A2 + 144,V0); //+ 0x90
	V0 = EMU_ReadU32(T0);
	V1 += V0;
	V0 = EMU_ReadU32(V1 + 144); //+ 0x90
	A1 <<= 8;
	A0 |= A1;
	V0 |= 0x4;
	RA = 0x8004C888; //ZZ_4C7CC_BC
	EMU_Write32(V1 + 144,V0); //+ 0x90
	ZZ_CLOCKCYCLES(47,0x80050060);
	goto ZZ_50060;
ZZ_4C7CC_BC:
	EMU_Write8(S0 + 43,R0); //+ 0x2B
	EMU_Write32(S0 + 128,R0); //+ 0x80
	EMU_Write8(S0 + 39,R0); //+ 0x27
	EMU_Write8(S0 + 19,R0); //+ 0x13
	EMU_Write8(S0 + 20,R0); //+ 0x14
	EMU_Write8(S0 + 41,R0); //+ 0x29
	EMU_Write8(S0 + 21,R0); //+ 0x15
	EMU_Write8(S0 + 22,R0); //+ 0x16
	EMU_Write8(S0 + 42,R0); //+ 0x2A
	EMU_Write8(S0 + 18,R0); //+ 0x12
	EMU_Write16(S0 + 72,R0); //+ 0x48
	EMU_Write8(S0 + 39,R0); //+ 0x27
	EMU_Write8(S0 + 40,R0); //+ 0x28
	EMU_Write8(S0 + 16,R0); //+ 0x10
	EMU_Write8(S0 + 17,R0); //+ 0x11
	T0 = R0;
	T3 = 0x40;
	T2 = 0x7F;
	V0 = EMU_ReadU32(S0 + 124); //+ 0x7C
	V1 = EMU_ReadU32(S0 + 132); //+ 0x84
	A0 = EMU_ReadU16(S0 + 114); //+ 0x72
	A1 = EMU_ReadU32(S0 + 8); //+ 0x8
	A2 = EMU_ReadU32(S0 + 8); //+ 0x8
	T1 = S0;
	A3 = S0;
	EMU_Write32(S0 + 136,V0); //+ 0x88
	EMU_Write32(S0 + 140,V1); //+ 0x8C
	EMU_Write16(S0 + 112,A0); //+ 0x70
	EMU_Write32(S0 + 4,A1); //+ 0x4
	EMU_Write32(S0 + 12,A2); //+ 0xC
	ZZ_CLOCKCYCLES(30,0x8004C900);
ZZ_4C7CC_134:
	EMU_Write8(A3 + 44,T0); //+ 0x2C
	EMU_Write8(A3 + 23,T3); //+ 0x17
	EMU_Write16(T1 + 78,T2); //+ 0x4E
	T1 += 2;
	T0 += 1;
	V0 = (int32_t)T0 < 16;
	if (V0)
	{
		A3 += 1;
		ZZ_CLOCKCYCLES(8,0x8004C900);
		goto ZZ_4C7CC_134;
	}
	A3 += 1;
	V0 = 0x7F;
	EMU_Write16(S0 + 120,V0); //+ 0x78
	EMU_Write16(S0 + 122,V0); //+ 0x7A
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 24;
	ZZ_CLOCKCYCLES_JR(15);
	ZZ_JUMPREGISTER(0x8004BD4C,ZZ_4BB7C_1D0);
	ZZ_JUMPREGISTER(0x8004C980,ZZ_4C964_1C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004C7CC,0x8004C888,ZZ_4C7CC);
ZZ_MARK_TARGET(0x8004C888,0x8004C900,ZZ_4C7CC_BC);
ZZ_MARK_TARGET(0x8004C900,0x8004C93C,ZZ_4C7CC_134);
