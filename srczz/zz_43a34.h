#ifdef ZZ_INCLUDE_CODE
ZZ_43A34:
	A0 = EMU_ReadU32(SP + 76); //+ 0x4C
	A2 = 1904;
	T9 += A2;
	A0 += A2;
	EMU_Write32(V1 + 240,T9); //+ 0xF0
	EMU_Write32(V1 + 244,T9); //+ 0xF4
	ZZ_JUMPREGISTER_BEGIN(RA);
	EMU_Write32(V1 + 248,A0); //+ 0xF8
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x8004040C,ZZ_3FFAC_460);
	ZZ_JUMPREGISTER(0x80041A54,ZZ_41A1C_38);
	ZZ_JUMPREGISTER(0x8003E184,ZZ_3DFAC_1D8);
	ZZ_JUMPREGISTER(0x800401C4,ZZ_3FFAC_218);
	ZZ_JUMPREGISTER(0x80041274,ZZ_40FAC_2C8);
	ZZ_JUMPREGISTER(0x8003F234,ZZ_3EFAC_288);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80043A34,ZZ_43A34);
ZZ_MARK(0x80043A38);
ZZ_MARK(0x80043A3C);
ZZ_MARK(0x80043A40);
ZZ_MARK(0x80043A44);
ZZ_MARK(0x80043A48);
ZZ_MARK(0x80043A4C);
ZZ_MARK(0x80043A50);
