#ifdef ZZ_INCLUDE_CODE
ZZ_4946C:
	T2 = 160;
	ZZ_JUMPREGISTER_BEGIN(T2);
	T1 = 24;
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0xA0,ZZ_FORCEEXIT);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004946C,ZZ_4946C);
ZZ_MARK(0x80049470);
ZZ_MARK(0x80049474);
