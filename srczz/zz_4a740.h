#ifdef ZZ_INCLUDE_CODE
ZZ_4A740:
	SP -= 32;
	EMU_Write32(SP + 28,RA); //+ 0x1C
	EMU_Write32(SP + 24,S2); //+ 0x18
	EMU_Write32(SP + 20,S1); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
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
	A1 = EMU_ReadS16(S0 + 76); //+ 0x4C
	A0 = EMU_ReadU32(S0 + 4); //+ 0x4
	V0 = EMU_ReadU8(S0 + 18); //+ 0x12
	V1 = A0 + 1;
	EMU_Write32(S0 + 4,V1); //+ 0x4
	A3 = EMU_ReadU8(A0);
	V0 += S0;
	A2 = EMU_ReadU8(V0 + 44); //+ 0x2C
	A0 = S1 << 8;
	RA = 0x8004A7C0; //ZZ_4A740_80
	A0 |= S2;
	ZZ_CLOCKCYCLES(32,0x8004F8AC);
	goto ZZ_4F8AC;
ZZ_4A740_80:
	A0 = S2;
	RA = 0x8004A7CC; //ZZ_4A740_8C
	A1 = S1;
	ZZ_CLOCKCYCLES(3,0x8004AEB8);
	goto ZZ_4AEB8;
ZZ_4A740_8C:
	EMU_Write32(S0 + 136,V0); //+ 0x88
	RA = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 32;
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004A740,0x8004A7C0,ZZ_4A740);
ZZ_MARK_TARGET(0x8004A7C0,0x8004A7CC,ZZ_4A740_80);
ZZ_MARK_TARGET(0x8004A7CC,0x8004A7E8,ZZ_4A740_8C);
