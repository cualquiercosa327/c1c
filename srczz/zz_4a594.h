#ifdef ZZ_INCLUDE_CODE
ZZ_4A594:
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
	V0 = EMU_ReadU8(S0 + 41); //+ 0x29
	EMU_Write8(S0 + 19,A2); //+ 0x13
	V0 += 1;
	RA = 0x8004A5F4; //ZZ_4A594_60
	EMU_Write8(S0 + 41,V0); //+ 0x29
	ZZ_CLOCKCYCLES(24,0x8004AEB8);
	goto ZZ_4AEB8;
ZZ_4A594_60:
	EMU_Write32(S0 + 136,V0); //+ 0x88
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 24;
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004A594,0x8004A5F4,ZZ_4A594);
ZZ_MARK_TARGET(0x8004A5F4,0x8004A608,ZZ_4A594_60);
