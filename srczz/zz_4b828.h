#ifdef ZZ_INCLUDE_CODE
ZZ_4B828:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 25188); //+ 0x6264
	SP -= 24;
	if (!V0)
	{
		EMU_Write32(SP + 16,RA); //+ 0x10
		ZZ_CLOCKCYCLES(5,0x8004B844);
		goto ZZ_4B828_1C;
	}
	EMU_Write32(SP + 16,RA); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x8004B844; //ZZ_4B828_1C
	ZZ_CLOCKCYCLES_JR(7);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,8004B83C)
	ZZ_JUMPREGISTER_END();
ZZ_4B828_1C:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 25184); //+ 0x6260
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x8004B858; //ZZ_4B828_30
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x8004BB7C,ZZ_4BB7C);
	ZZ_JUMPREGISTER_END();
ZZ_4B828_30:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 24;
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004B828,0x8004B844,ZZ_4B828);
ZZ_MARK_TARGET(0x8004B844,0x8004B858,ZZ_4B828_1C);
ZZ_MARK_TARGET(0x8004B858,0x8004B868,ZZ_4B828_30);
