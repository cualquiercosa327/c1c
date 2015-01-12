#ifdef ZZ_INCLUDE_CODE
ZZ_55B78:
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	A0 <<= 16;
	A1 <<= 16;
	A0 = (int32_t)A0 >> 16;
	RA = 0x80055B94; //ZZ_55B78_1C
	A1 = (int32_t)A1 >> 16;
	ZZ_CLOCKCYCLES(7,0x80055BA4);
	goto ZZ_55BA4;
ZZ_55B78_1C:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80055274,ZZ_5519C_D8);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80055B78,ZZ_55B78);
ZZ_MARK(0x80055B7C);
ZZ_MARK(0x80055B80);
ZZ_MARK(0x80055B84);
ZZ_MARK(0x80055B88);
ZZ_MARK(0x80055B8C);
ZZ_MARK(0x80055B90);
ZZ_MARK_TARGET(0x80055B94,ZZ_55B78_1C);
ZZ_MARK(0x80055B98);
ZZ_MARK(0x80055B9C);
ZZ_MARK(0x80055BA0);
