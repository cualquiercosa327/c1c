#ifdef ZZ_INCLUDE_CODE
ZZ_49BA0:
	SP -= 24;
	EMU_Write32(SP + 20,RA); //+ 0x14
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
	V0 = A0 << 2;
	AT = 0x80060000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 1048); //+ 0x418
	S0 = S0 - A1;
	S0 <<= 2;
	S0 += V0;
	V1 = EMU_ReadU32(S0 + 4); //+ 0x4
	V0 = V1 + 1;
	EMU_Write32(S0 + 4,V0); //+ 0x4
	V0 = EMU_ReadU8(V1);
	RA = 0x80049C0C; //ZZ_49BA0_6C
	EMU_Write16(S0 + 76,V0); //+ 0x4C
	ZZ_CLOCKCYCLES(27,0x8004AEB8);
	goto ZZ_4AEB8;
ZZ_49BA0_6C:
	EMU_Write32(S0 + 136,V0); //+ 0x88
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 24;
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80049BA0,0x80049C0C,ZZ_49BA0);
ZZ_MARK_TARGET(0x80049C0C,0x80049C20,ZZ_49BA0_6C);
