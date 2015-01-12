#ifdef ZZ_INCLUDE_CODE
ZZ_4B1A8:
	SP -= 24;
	A0 = 0x80060000;
	A0 -= 8388;
	EMU_Write32(SP + 16,RA); //+ 0x10
	RA = 0x8004B1C0; //ZZ_4B1A8_18
	A1 = 8;
	ZZ_CLOCKCYCLES(6,0x8004B424);
	goto ZZ_4B424;
ZZ_4B1A8_18:
	A0 = 3;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8392); //+ 0xFFFFDF38
	A1 = 0x80050000;
	A1 -= 19976;
	EMU_Write32(V0,R0);
	RA = 0x8004B1E0; //ZZ_4B1A8_38
	ZZ_CLOCKCYCLES(8,0x8004A940);
	goto ZZ_4A940;
ZZ_4B1A8_38:
	V0 = 0x80050000;
	V0 -= 19588;
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x8004AB54,ZZ_4AAA8_AC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004B1A8,ZZ_4B1A8);
ZZ_MARK(0x8004B1AC);
ZZ_MARK(0x8004B1B0);
ZZ_MARK(0x8004B1B4);
ZZ_MARK(0x8004B1B8);
ZZ_MARK(0x8004B1BC);
ZZ_MARK_TARGET(0x8004B1C0,ZZ_4B1A8_18);
ZZ_MARK(0x8004B1C4);
ZZ_MARK(0x8004B1C8);
ZZ_MARK(0x8004B1CC);
ZZ_MARK(0x8004B1D0);
ZZ_MARK(0x8004B1D4);
ZZ_MARK(0x8004B1D8);
ZZ_MARK(0x8004B1DC);
ZZ_MARK_TARGET(0x8004B1E0,ZZ_4B1A8_38);
ZZ_MARK(0x8004B1E4);
ZZ_MARK(0x8004B1E8);
ZZ_MARK(0x8004B1EC);
ZZ_MARK(0x8004B1F0);
ZZ_MARK(0x8004B1F4);
