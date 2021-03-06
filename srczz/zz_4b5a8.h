#ifdef ZZ_INCLUDE_CODE
ZZ_4B5A8:
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	A0 <<= 16;
	A0 = (int32_t)A0 >> 16;
	A1 <<= 16;
	A1 = (int32_t)A1 >> 16;
	A2 &= 0xFF;
	A3 <<= 16;
	RA = 0x8004B5D0; //ZZ_4B5A8_28
	A3 = (int32_t)A3 >> 16;
	ZZ_CLOCKCYCLES(10,0x8004B6D8);
	goto ZZ_4B6D8;
ZZ_4B5A8_28:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 24;
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80031AA4,ZZ_31A40_64);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004B5A8,0x8004B5D0,ZZ_4B5A8);
ZZ_MARK_TARGET(0x8004B5D0,0x8004B5E0,ZZ_4B5A8_28);
