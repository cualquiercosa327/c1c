#ifdef ZZ_INCLUDE_CODE
ZZ_4D65C:
	AT = 0x80050000;
	EMU_Write16(AT + 32496,R0); //+ 0x7EF0
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x8004A6DC,ZZ_4A67C_60);
	ZZ_JUMPREGISTER(0x8004A258,ZZ_4A1EC_6C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004D65C,0x8004D66C,ZZ_4D65C);
