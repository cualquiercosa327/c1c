#ifdef ZZ_INCLUDE_CODE
ZZ_4F280:
	A0 <<= 16;
	A1 <<= 16;
	GTE_SetControlRegister(24,A0);
	GTE_SetControlRegister(25,A1);
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x80017AF8,ZZ_17AB0_48);
	ZZ_JUMPREGISTER(0x8001809C,ZZ_17CE8_3B4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004F280,ZZ_4F280);
ZZ_MARK(0x8004F284);
ZZ_MARK(0x8004F288);
ZZ_MARK(0x8004F28C);
ZZ_MARK(0x8004F290);
ZZ_MARK(0x8004F294);