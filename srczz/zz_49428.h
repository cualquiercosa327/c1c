#ifdef ZZ_INCLUDE_CODE
ZZ_49428:
	SP -= 32;
	EMU_Write32(SP + 24,RA); //+ 0x18
	EMU_Write32(SP + 20,S1); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	S1 = A0 << 16;
	S1 = (int32_t)S1 >> 16;
	A0 = S1;
	S0 = A1 << 16;
	S0 = (int32_t)S0 >> 16;
	A1 = S0;
	A2 <<= 16;
	RA = 0x8004945C; //ZZ_49428_34
	A2 = (int32_t)A2 >> 16;
	ZZ_CLOCKCYCLES(13,0x8004CFB0);
	goto ZZ_4CFB0;
ZZ_49428_34:
	V1 = S0 << 1;
	V1 += S0;
	V1 <<= 2;
	V1 = V1 - S0;
	V1 <<= 2;
	V0 = 0x80060000;
	V0 += 1048;
	S1 <<= 2;
	S1 += V0;
	A0 = EMU_ReadU32(S1);
	V1 = V1 - S0;
	V1 <<= 2;
	A0 += V1;
	V0 = EMU_ReadU32(A0 + 144); //+ 0x90
	V0 |= 0x10;
	EMU_Write32(A0 + 144,V0); //+ 0x90
	V0 = EMU_ReadU32(S1);
	V1 += V0;
	V0 = EMU_ReadU32(V1 + 144); //+ 0x90
	A0 = -33;
	V0 &= A0;
	EMU_Write32(V1 + 144,V0); //+ 0x90
	RA = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 32;
	ZZ_CLOCKCYCLES_JR(29);
	ZZ_JUMPREGISTER(0x80049528,ZZ_49504_24);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80049428,0x8004945C,ZZ_49428);
ZZ_MARK_TARGET(0x8004945C,0x800494D0,ZZ_49428_34);
