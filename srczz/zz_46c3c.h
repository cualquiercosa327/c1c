#ifdef ZZ_INCLUDE_CODE
ZZ_46C3C:
	V0 = 0x80060000;
	V0 = EMU_ReadU8(V0 - 13692); //+ 0xFFFFCA84
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80049088,ZZ_48F5C_12C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80046C3C,ZZ_46C3C);
ZZ_MARK(0x80046C40);
ZZ_MARK(0x80046C44);
ZZ_MARK(0x80046C48);
