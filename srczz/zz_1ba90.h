#ifdef ZZ_INCLUDE_CODE
ZZ_1BA90:
	V0 = A0;
	V1 = EMU_ReadU32(V0 + 216); //+ 0xD8
	if (V1 == A1)
	{
		ZZ_CLOCKCYCLES(5,0x8001BAA8);
		goto ZZ_1BA90_18;
	}
	V0 = R0;
	ZZ_CLOCKCYCLES(6,0x8001BAA8);
ZZ_1BA90_18:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x8001B7D4,ZZ_1B788_4C);
 	//ZZ_JUMPREGISTER(0x800221E0,ZZ_201DC_2004);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001BA90,0x8001BAA8,ZZ_1BA90);
ZZ_MARK_TARGET(0x8001BAA8,0x8001BAB0,ZZ_1BA90_18);
