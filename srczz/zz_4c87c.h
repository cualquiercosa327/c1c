#ifdef ZZ_INCLUDE_CODE
ZZ_4C87C:
	SP -= 32;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8276); //+ 0xFFFFDFAC
	EMU_Write32(SP + 24,RA); //+ 0x18
	EMU_Write32(SP + 20,S1); //+ 0x14
	V0 = EMU_ReadU32(V0 + 60); //+ 0x3C
	S1 = EMU_ReadU8(S0 + 3); //+ 0x3
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x8004C8A8; //ZZ_4C87C_2C
	A0 = R0;
	ZZ_CLOCKCYCLES_JR(11);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,8004C8A0)
	ZZ_JUMPREGISTER_END();
ZZ_4C87C_2C:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8276); //+ 0xFFFFDFAC
	A0 = S0 + 4;
	V0 = EMU_ReadU32(V0 + 20); //+ 0x14
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x8004C8C4; //ZZ_4C87C_48
	A1 = S1;
	ZZ_CLOCKCYCLES_JR(7);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,8004C8BC)
	ZZ_JUMPREGISTER_END();
ZZ_4C87C_48:
	RA = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x800161C0,ZZ_16140_80);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004C87C,ZZ_4C87C);
ZZ_MARK(0x8004C880);
ZZ_MARK(0x8004C884);
ZZ_MARK(0x8004C888);
ZZ_MARK(0x8004C88C);
ZZ_MARK(0x8004C890);
ZZ_MARK(0x8004C894);
ZZ_MARK(0x8004C898);
ZZ_MARK(0x8004C89C);
ZZ_MARK(0x8004C8A0);
ZZ_MARK(0x8004C8A4);
ZZ_MARK_TARGET(0x8004C8A8,ZZ_4C87C_2C);
ZZ_MARK(0x8004C8AC);
ZZ_MARK(0x8004C8B0);
ZZ_MARK(0x8004C8B4);
ZZ_MARK(0x8004C8B8);
ZZ_MARK(0x8004C8BC);
ZZ_MARK(0x8004C8C0);
ZZ_MARK_TARGET(0x8004C8C4,ZZ_4C87C_48);
ZZ_MARK(0x8004C8C8);
ZZ_MARK(0x8004C8CC);
ZZ_MARK(0x8004C8D0);
ZZ_MARK(0x8004C8D4);
ZZ_MARK(0x8004C8D8);
