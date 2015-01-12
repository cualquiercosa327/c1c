#ifdef ZZ_INCLUDE_CODE
ZZ_4F1F0:
	T0 = EMU_ReadU32(A0);
	T1 = EMU_ReadU32(A0 + 4); //+ 0x4
	T2 = EMU_ReadU32(A0 + 8); //+ 0x8
	T3 = EMU_ReadU32(A0 + 12); //+ 0xC
	T4 = EMU_ReadU32(A0 + 16); //+ 0x10
	GTE_SetControlRegister(16,T0);
	GTE_SetControlRegister(17,T1);
	GTE_SetControlRegister(18,T2);
	GTE_SetControlRegister(19,T3);
	GTE_SetControlRegister(20,T4);
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(12);
	ZZ_JUMPREGISTER(0x80017B8C,ZZ_17AB0_DC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004F1F0,ZZ_4F1F0);
ZZ_MARK(0x8004F1F4);
ZZ_MARK(0x8004F1F8);
ZZ_MARK(0x8004F1FC);
ZZ_MARK(0x8004F200);
ZZ_MARK(0x8004F204);
ZZ_MARK(0x8004F208);
ZZ_MARK(0x8004F20C);
ZZ_MARK(0x8004F210);
ZZ_MARK(0x8004F214);
ZZ_MARK(0x8004F218);
ZZ_MARK(0x8004F21C);
