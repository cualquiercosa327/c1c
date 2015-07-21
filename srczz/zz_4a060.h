#ifdef ZZ_INCLUDE_CODE
ZZ_4A060:
	SP -= 48;
	EMU_Write32(SP + 44,RA); //+ 0x2C
	EMU_Write32(SP + 40,S4); //+ 0x28
	EMU_Write32(SP + 36,S3); //+ 0x24
	EMU_Write32(SP + 32,S2); //+ 0x20
	EMU_Write32(SP + 28,S1); //+ 0x1C
	EMU_Write32(SP + 24,S0); //+ 0x18
	S1 = A1 << 16;
	S1 = (int32_t)S1 >> 16;
	S0 = S1 << 1;
	S0 += S1;
	S0 <<= 2;
	S0 = S0 - S1;
	S0 <<= 2;
	S3 = A0 << 16;
	S3 = (int32_t)S3 >> 16;
	V0 = S3 << 2;
	AT = 0x80060000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 1048); //+ 0x418
	S0 = S0 - S1;
	S0 <<= 2;
	S0 += V0;
	S2 = EMU_ReadU8(S0 + 18); //+ 0x12
	S4 = A2;
	V0 = S0 + S2;
	A2 = EMU_ReadU8(V0 + 44); //+ 0x2C
	A0 = S1 << 8;
	A1 = EMU_ReadS16(S0 + 76); //+ 0x4C
	V0 = EMU_ReadU8(V0 + 23); //+ 0x17
	A0 |= S3;
	A3 = S4 & 0xFF;
	RA = 0x8004A0E8; //ZZ_4A060_88
	EMU_Write32(SP + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(34,0x800501A8);
	goto ZZ_501A8;
ZZ_4A060_88:
	S2 <<= 1;
	S2 += S0;
	S4 &= 0xFF;
	EMU_Write16(S2 + 78,S4); //+ 0x4E
	A0 = S3;
	RA = 0x8004A104; //ZZ_4A060_A4
	A1 = S1;
	ZZ_CLOCKCYCLES(7,0x8004AEB8);
	goto ZZ_4AEB8;
ZZ_4A060_A4:
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
ZZ_MARK_TARGET(0x8004A060,0x8004A0E8,ZZ_4A060);
ZZ_MARK_TARGET(0x8004A0E8,0x8004A104,ZZ_4A060_88);
ZZ_MARK_TARGET(0x8004A104,0x8004A128,ZZ_4A060_A4);
