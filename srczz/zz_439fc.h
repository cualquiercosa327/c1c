#ifdef ZZ_INCLUDE_CODE
ZZ_439FC:
	T1 = 0xFF0000;
	T1 |= 0xFF;
	T2 = 0xFFFE0000;
	ZZ_JUMPREGISTER_BEGIN(RA);
	T2 |= 0xFFFF;
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x800412FC,ZZ_40FAC_350);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800439FC,ZZ_439FC);
ZZ_MARK(0x80043A00);
ZZ_MARK(0x80043A04);
ZZ_MARK(0x80043A08);
ZZ_MARK(0x80043A0C);
