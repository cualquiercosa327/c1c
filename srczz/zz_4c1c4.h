#ifdef ZZ_INCLUDE_CODE
ZZ_4C1C4:
	V0 = 0x80060000;
	V0 = EMU_ReadU8(V0 - 8268); //+ 0xFFFFDFB4
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80015894,ZZ_15738_15C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004C1C4,ZZ_4C1C4);
ZZ_MARK(0x8004C1C8);
ZZ_MARK(0x8004C1CC);
ZZ_MARK(0x8004C1D0);
