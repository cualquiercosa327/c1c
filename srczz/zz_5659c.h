#ifdef ZZ_INCLUDE_CODE
ZZ_5659C:
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	A0 <<= 16;
	A1 <<= 16;
	A0 = (int32_t)A0 >> 16;
	RA = 0x800565B8; //ZZ_5659C_1C
	A1 = (int32_t)A1 >> 16;
	ZZ_CLOCKCYCLES(7,0x800563F0);
	goto ZZ_563F0;
ZZ_5659C_1C:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80034854,ZZ_347D4_80);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8005659C,ZZ_5659C);
ZZ_MARK(0x800565A0);
ZZ_MARK(0x800565A4);
ZZ_MARK(0x800565A8);
ZZ_MARK(0x800565AC);
ZZ_MARK(0x800565B0);
ZZ_MARK(0x800565B4);
ZZ_MARK_TARGET(0x800565B8,ZZ_5659C_1C);
ZZ_MARK(0x800565BC);
ZZ_MARK(0x800565C0);
ZZ_MARK(0x800565C4);
