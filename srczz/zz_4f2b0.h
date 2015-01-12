#ifdef ZZ_INCLUDE_CODE
ZZ_4F2B0:
	GTE_SetDataRegister(0,EMU_ReadU32(A0));
	GTE_SetDataRegister(1,EMU_ReadU32(A0 + 4)); //+ 0x4
	GTE_Execute(1572865);
	EMU_Write32(A1,GTE_GetDataRegister(14));
	EMU_Write32(A2,GTE_GetDataRegister(8));
	V1 = GTE_GetControlRegister(31);
	V0 = GTE_GetDataRegister(19);
	EMU_Write32(A3,V1);
	ZZ_JUMPREGISTER_BEGIN(RA);
	V0 = (int32_t)V0 >> 2;
	ZZ_CLOCKCYCLES_JR(11);
	ZZ_JUMPREGISTER(0x8001F050,ZZ_1EFA8_A8);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004F2B0,ZZ_4F2B0);
ZZ_MARK(0x8004F2B4);
ZZ_MARK(0x8004F2B8);
ZZ_MARK(0x8004F2BC);
ZZ_MARK(0x8004F2C0);
ZZ_MARK(0x8004F2C4);
ZZ_MARK(0x8004F2C8);
ZZ_MARK(0x8004F2CC);
ZZ_MARK(0x8004F2D0);
ZZ_MARK(0x8004F2D4);
ZZ_MARK(0x8004F2D8);
