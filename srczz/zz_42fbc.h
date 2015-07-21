#ifdef ZZ_INCLUDE_CODE
ZZ_42FBC:
	GTE_SetRegister(0,EMU_ReadU32(A0));
	GTE_SetRegister(1,EMU_ReadU32(A0 + 4)); //+ 0x4
	GTE_RotateTranslateProjectSingle();
	EMU_Write32(A1,GTE_GetRegister(14));
	EMU_Write32(A2,GTE_GetRegister(8));
	V1 = GTE_GetRegister(63);
	V0 = GTE_GetRegister(19);
	EMU_Write32(A3,V1);
	ZZ_JUMPREGISTER_BEGIN(RA);
	V0 = (int32_t)V0 >> 2;
	ZZ_CLOCKCYCLES_JR(11);
	ZZ_JUMPREGISTER(0x80024A84,ZZ_249E0_A4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80042FBC,0x80042FE8,ZZ_42FBC);
