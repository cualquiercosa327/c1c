#ifdef ZZ_INCLUDE_CODE
ZZ_3E858:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 18884); //+ 0x49C4
	V0 = EMU_ReadU16(V0);
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003E858,0x8003E870,ZZ_3E858);
