#ifdef ZZ_INCLUDE_CODE
ZZ_4A9A0:
	SP -= 24;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8452); //+ 0xFFFFDEFC
	A1 = A0;
	EMU_Write32(SP + 16,RA); //+ 0x10
	V0 = EMU_ReadU32(V0 + 20); //+ 0x14
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x8004A9C4; //ZZ_4A9A0_24
	A0 = 4;
	ZZ_CLOCKCYCLES_JR(9);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,8004A9BC)
	ZZ_JUMPREGISTER_END();
ZZ_4A9A0_24:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80052E6C,ZZ_52E18_54);
	ZZ_JUMPREGISTER(0x8005501C,ZZ_54E64_1B8);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004A9A0,ZZ_4A9A0);
ZZ_MARK(0x8004A9A4);
ZZ_MARK(0x8004A9A8);
ZZ_MARK(0x8004A9AC);
ZZ_MARK(0x8004A9B0);
ZZ_MARK(0x8004A9B4);
ZZ_MARK(0x8004A9B8);
ZZ_MARK(0x8004A9BC);
ZZ_MARK(0x8004A9C0);
ZZ_MARK_TARGET(0x8004A9C4,ZZ_4A9A0_24);
ZZ_MARK(0x8004A9C8);
ZZ_MARK(0x8004A9CC);
ZZ_MARK(0x8004A9D0);
