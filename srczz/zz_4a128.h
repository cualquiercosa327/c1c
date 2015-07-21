#ifdef ZZ_INCLUDE_CODE
ZZ_4A128:
	SP -= 48;
	EMU_Write32(SP + 44,RA); //+ 0x2C
	EMU_Write32(SP + 40,S4); //+ 0x28
	EMU_Write32(SP + 36,S3); //+ 0x24
	EMU_Write32(SP + 32,S2); //+ 0x20
	EMU_Write32(SP + 28,S1); //+ 0x1C
	EMU_Write32(SP + 24,S0); //+ 0x18
	S4 = A2;
	S1 = A1 << 16;
	S1 = (int32_t)S1 >> 16;
	S0 = S1 << 1;
	S0 += S1;
	S0 <<= 2;
	S0 = S0 - S1;
	S0 <<= 2;
	S2 = A0 << 16;
	S2 = (int32_t)S2 >> 16;
	V0 = S2 << 2;
	AT = 0x80060000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 1048); //+ 0x418
	S0 = S0 - S1;
	S0 <<= 2;
	S0 += V0;
	V0 = EMU_ReadU8(S0 + 18); //+ 0x12
	A0 = S1 << 8;
	A1 = EMU_ReadS16(S0 + 76); //+ 0x4C
	S3 = S0 + V0;
	V0 <<= 1;
	V0 += S0;
	A3 = EMU_ReadS16(V0 + 78); //+ 0x4E
	A2 = EMU_ReadU8(S3 + 44); //+ 0x2C
	A0 |= S2;
	V0 = S4 & 0xFF;
	RA = 0x8004A1B8; //ZZ_4A128_90
	EMU_Write32(SP + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(36,0x800501A8);
	goto ZZ_501A8;
ZZ_4A128_90:
	EMU_Write8(S3 + 23,S4); //+ 0x17
	A0 = S2;
	RA = 0x8004A1C8; //ZZ_4A128_A0
	A1 = S1;
	ZZ_CLOCKCYCLES(4,0x8004AEB8);
	goto ZZ_4AEB8;
ZZ_4A128_A0:
	EMU_Write32(S0 + 136,V0); //+ 0x88
	RA = EMU_ReadU32(SP + 44); //+ 0x2C
	S4 = EMU_ReadU32(SP + 40); //+ 0x28
	S3 = EMU_ReadU32(SP + 36); //+ 0x24
	S2 = EMU_ReadU32(SP + 32); //+ 0x20
	S1 = EMU_ReadU32(SP + 28); //+ 0x1C
	S0 = EMU_ReadU32(SP + 24); //+ 0x18
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 48;
	ZZ_CLOCKCYCLES_JR(9);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004A128,0x8004A1B8,ZZ_4A128);
ZZ_MARK_TARGET(0x8004A1B8,0x8004A1C8,ZZ_4A128_90);
ZZ_MARK_TARGET(0x8004A1C8,0x8004A1EC,ZZ_4A128_A0);
