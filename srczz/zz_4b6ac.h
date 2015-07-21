#ifdef ZZ_INCLUDE_CODE
ZZ_4B6AC:
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	A0 <<= 16;
	A0 = (int32_t)A0 >> 16;
	A1 <<= 16;
	RA = 0x8004B6C8; //ZZ_4B6AC_1C
	A1 = (int32_t)A1 >> 16;
	ZZ_CLOCKCYCLES(7,0x8004B5E0);
	goto ZZ_4B5E0;
ZZ_4B6AC_1C:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 24;
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80031AF4,ZZ_31A40_B4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004B6AC,0x8004B6C8,ZZ_4B6AC);
ZZ_MARK_TARGET(0x8004B6C8,0x8004B6D8,ZZ_4B6AC_1C);