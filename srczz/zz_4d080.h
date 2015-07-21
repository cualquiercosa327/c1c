#ifdef ZZ_INCLUDE_CODE
ZZ_4D080:
	SP -= 32;
	EMU_Write32(SP + 24,RA); //+ 0x18
	EMU_Write32(SP + 20,S1); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	A0 <<= 16;
	A0 = (int32_t)A0 >> 16;
	AT = 0x80060000;
	AT += A0;
	V1 = EMU_ReadU8(AT - 6792); //+ 0xFFFFE578
	V0 = 0x1;
	if (V1 == V0)
	{
		S1 = A2;
		ZZ_CLOCKCYCLES(12,0x8004D0B8);
		goto ZZ_4D080_38;
	}
	S1 = A2;
	V0 = -1;
	ZZ_CLOCKCYCLES(14,0x8004D170);
	goto ZZ_4D080_F0;
ZZ_4D080_38:
	S0 = A1 << 16;
	S0 = (int32_t)S0 >> 16;
	RA = 0x8004D0C8; //ZZ_4D080_48
	A1 = S0;
	ZZ_CLOCKCYCLES(4,0x80050728);
	goto ZZ_50728;
ZZ_4D080_48:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 12340); //+ 0xFFFFCFCC
	S0 <<= 4;
	V0 += S0;
	V0 = EMU_ReadU8(V0);
	EMU_Write8(S1,V0);
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 12340); //+ 0xFFFFCFCC
	V0 += S0;
	V0 = EMU_ReadU8(V0 + 1); //+ 0x1
	EMU_Write8(S1 + 1,V0); //+ 0x1
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 12340); //+ 0xFFFFCFCC
	V0 += S0;
	V0 = EMU_ReadU8(V0 + 2); //+ 0x2
	EMU_Write8(S1 + 2,V0); //+ 0x2
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 12340); //+ 0xFFFFCFCC
	V0 += S0;
	V0 = EMU_ReadU8(V0 + 3); //+ 0x3
	EMU_Write8(S1 + 3,V0); //+ 0x3
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 12340); //+ 0xFFFFCFCC
	V0 += S0;
	V0 = EMU_ReadU8(V0 + 4); //+ 0x4
	EMU_Write8(S1 + 4,V0); //+ 0x4
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 12340); //+ 0xFFFFCFCC
	S0 += V0;
	V1 = EMU_ReadU16(S0 + 6); //+ 0x6
	V0 = R0;
	EMU_Write16(S1 + 6,V1); //+ 0x6
	ZZ_CLOCKCYCLES(42,0x8004D170);
ZZ_4D080_F0:
	RA = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 32;
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x80049CB8,ZZ_49C20_98);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004D080,0x8004D0B8,ZZ_4D080);
ZZ_MARK_TARGET(0x8004D0B8,0x8004D0C8,ZZ_4D080_38);
ZZ_MARK_TARGET(0x8004D0C8,0x8004D170,ZZ_4D080_48);
ZZ_MARK_TARGET(0x8004D170,0x8004D184,ZZ_4D080_F0);