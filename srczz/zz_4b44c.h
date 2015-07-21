#ifdef ZZ_INCLUDE_CODE
ZZ_4B44C:
	SP -= 32;
	EMU_Write32(SP + 24,RA); //+ 0x18
	EMU_Write32(SP + 20,S1); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	A1 <<= 16;
	A1 = (int32_t)A1 >> 16;
	S0 = A1 << 1;
	S0 += A1;
	S0 <<= 2;
	S0 = S0 - A1;
	S0 <<= 2;
	S0 = S0 - A1;
	A0 <<= 16;
	A0 = (int32_t)A0 >> 16;
	V0 = 0x80060000;
	V0 += 1048;
	S1 = A0 << 2;
	S1 += V0;
	A1 <<= 8;
	A2 = EMU_ReadU32(S1);
	A0 |= A1;
	S0 <<= 2;
	A2 += S0;
	A1 = A2 + 120;
	RA = 0x8004B4B4; //ZZ_4B44C_68
	A2 += 122;
	ZZ_CLOCKCYCLES(26,0x8004FF54);
	goto ZZ_4FF54;
ZZ_4B44C_68:
	V1 = EMU_ReadU32(S1);
	V1 += S0;
	V0 = EMU_ReadU32(V1 + 144); //+ 0x90
	A0 = -2;
	V0 &= A0;
	EMU_Write32(V1 + 144,V0); //+ 0x90
	V1 = EMU_ReadU32(S1);
	V1 += S0;
	V0 = EMU_ReadU32(V1 + 144); //+ 0x90
	A0 = -9;
	V0 &= A0;
	EMU_Write32(V1 + 144,V0); //+ 0x90
	V0 = EMU_ReadU32(S1);
	S0 += V0;
	V0 = EMU_ReadU32(S0 + 144); //+ 0x90
	V0 |= 0x2;
	EMU_Write32(S0 + 144,V0); //+ 0x90
	RA = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 32;
	ZZ_CLOCKCYCLES_JR(26);
	ZZ_JUMPREGISTER(0x8004B560,ZZ_4B544_1C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004B44C,0x8004B4B4,ZZ_4B44C);
ZZ_MARK_TARGET(0x8004B4B4,0x8004B51C,ZZ_4B44C_68);
