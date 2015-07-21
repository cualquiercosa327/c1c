#ifdef ZZ_INCLUDE_CODE
ZZ_4C300:
	SP -= 32;
	EMU_Write32(SP + 28,RA); //+ 0x1C
	EMU_Write32(SP + 24,S2); //+ 0x18
	EMU_Write32(SP + 20,S1); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	A1 <<= 16;
	A1 = (int32_t)A1 >> 16;
	S0 = A1 << 1;
	S0 += A1;
	S0 <<= 2;
	S0 = S0 - A1;
	S0 <<= 2;
	A0 <<= 16;
	A0 = (int32_t)A0 >> 16;
	V0 = 0x80060000;
	V0 += 1048;
	S2 = A0 << 2;
	S2 += V0;
	S0 = S0 - A1;
	S0 <<= 2;
	S1 = EMU_ReadU32(S2);
	A1 <<= 8;
	A0 |= A1;
	RA = 0x8004C364; //ZZ_4C300_64
	S1 += S0;
	ZZ_CLOCKCYCLES(25,0x80050060);
	goto ZZ_50060;
ZZ_4C300_64:
	EMU_Write8(S1 + 43,R0); //+ 0x2B
	V0 = EMU_ReadU32(S2);
	S0 += V0;
	V0 = EMU_ReadU32(S0 + 144); //+ 0x90
	V1 = -3;
	V0 &= V1;
	EMU_Write32(S0 + 144,V0); //+ 0x90
	RA = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 32;
	ZZ_CLOCKCYCLES_JR(14);
	ZZ_JUMPREGISTER(0x8004BCFC,ZZ_4BB7C_180);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004C300,0x8004C364,ZZ_4C300);
ZZ_MARK_TARGET(0x8004C364,0x8004C39C,ZZ_4C300_64);
