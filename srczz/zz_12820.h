#ifdef ZZ_INCLUDE_CODE
ZZ_12820:
	AT = 0x80050000;
	AT += A0;
	V0 = EMU_ReadU8(AT + 5928); //+ 0x1728
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x80032124,ZZ_31EB4_270);
	ZZ_JUMPREGISTER(0x8002EB70,ZZ_2EABC_B4);
	ZZ_JUMPREGISTER(0x80033040,ZZ_32FDC_64);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80012820,0x80012834,ZZ_12820);
