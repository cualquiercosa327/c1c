#ifdef ZZ_INCLUDE_CODE
ZZ_4D66C:
	V0 = 0x2;
	AT = 0x80050000;
	EMU_Write16(AT + 32496,V0); //+ 0x7EF0
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x8004A268,ZZ_4A1EC_7C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004D66C,0x8004D680,ZZ_4D66C);
