#ifdef ZZ_INCLUDE_CODE
ZZ_3F890:
	V0 = 0x5;
	EMU_Write8(A0 + 3,V0); //+ 0x3
	V0 = 0x28;
	ZZ_JUMPREGISTER_BEGIN(RA);
	EMU_Write8(A0 + 7,V0); //+ 0x7
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x8001754C,ZZ_17448_104);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003F890,0x8003F8A4,ZZ_3F890);
