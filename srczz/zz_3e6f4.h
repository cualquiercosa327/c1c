#ifdef ZZ_INCLUDE_CODE
ZZ_3E6F4:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 18876); //+ 0x49BC
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	V0 = EMU_ReadU32(V0 + 12); //+ 0xC
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x8003E714; //ZZ_3E6F4_20
	ZZ_CLOCKCYCLES_JR(8);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,8003E70C)
	ZZ_JUMPREGISTER_END();
ZZ_3E6F4_20:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80049804,ZZ_497F4_10);
	ZZ_JUMPREGISTER(0x80046FC4,ZZ_46FB0_14);
	ZZ_JUMPREGISTER(0x8001657C,ZZ_1652C_50);
	ZZ_JUMPREGISTER(0x8003FE20,ZZ_3FDC0_60);
	ZZ_JUMPREGISTER(0x8003E434,ZZ_3E410_24);
	ZZ_JUMPREGISTER(0x80044E6C,ZZ_44E1C_50);
	ZZ_JUMPREGISTER(0x80044F18,ZZ_44E8C_8C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003E6F4,0x8003E714,ZZ_3E6F4);
ZZ_MARK_TARGET(0x8003E714,0x8003E724,ZZ_3E6F4_20);
