#ifdef ZZ_INCLUDE_CODE
ZZ_42C2C:
	T0 = EMU_ReadU32(A0);
	T1 = EMU_ReadU32(A0 + 4); //+ 0x4
	T2 = EMU_ReadU32(A0 + 8); //+ 0x8
	T3 = EMU_ReadU32(A0 + 12); //+ 0xC
	T4 = EMU_ReadU32(A0 + 16); //+ 0x10
	GTE_SetRegister(32,T0);
	GTE_SetRegister(33,T1);
	GTE_SetRegister(34,T2);
	GTE_SetRegister(35,T3);
	GTE_SetRegister(36,T4);
	T0 = EMU_ReadU16(A1);
	T1 = EMU_ReadU32(A1 + 4); //+ 0x4
	T2 = EMU_ReadU32(A1 + 12); //+ 0xC
	AT = 0xFFFF0000;
	T1 &= AT;
	T0 |= T1;
	GTE_SetRegister(0,T0);
	GTE_SetRegister(1,T2);
	GTE_Multiply_V0_Rotation();
	T0 = EMU_ReadU16(A1 + 2); //+ 0x2
	T1 = EMU_ReadU32(A1 + 8); //+ 0x8
	T2 = EMU_ReadS16(A1 + 14); //+ 0xE
	T1 <<= 16;
	T0 |= T1;
	T3 = GTE_GetRegister(9);
	T4 = GTE_GetRegister(10);
	T5 = GTE_GetRegister(11);
	GTE_SetRegister(0,T0);
	GTE_SetRegister(1,T2);
	GTE_Multiply_V0_Rotation();
	T0 = EMU_ReadU16(A1 + 4); //+ 0x4
	T1 = EMU_ReadU32(A1 + 8); //+ 0x8
	T2 = EMU_ReadU32(A1 + 16); //+ 0x10
	AT = 0xFFFF0000;
	T1 &= AT;
	T0 |= T1;
	T6 = GTE_GetRegister(9);
	T7 = GTE_GetRegister(10);
	T8 = GTE_GetRegister(11);
	GTE_SetRegister(0,T0);
	GTE_SetRegister(1,T2);
	GTE_Multiply_V0_Rotation();
	T3 &= 0xFFFF;
	T6 <<= 16;
	T6 |= T3;
	EMU_Write32(A0,T6);
	T5 &= 0xFFFF;
	T8 <<= 16;
	T8 |= T5;
	EMU_Write32(A0 + 12,T8); //+ 0xC
	T0 = GTE_GetRegister(9);
	T1 = GTE_GetRegister(10);
	T0 &= 0xFFFF;
	T4 <<= 16;
	T0 |= T4;
	EMU_Write32(A0 + 4,T0); //+ 0x4
	T7 &= 0xFFFF;
	T1 <<= 16;
	T1 |= T7;
	EMU_Write32(A0 + 8,T1); //+ 0x8
	EMU_Write32(A0 + 16,GTE_GetRegister(11)); //+ 0x10
	V0 = A0;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(67);
	ZZ_JUMPREGISTER(0x80024734,ZZ_2465C_D8);
	ZZ_JUMPREGISTER(0x800247A4,ZZ_2465C_148);
	ZZ_JUMPREGISTER(0x80017B04,ZZ_17A14_F0);
	ZZ_JUMPREGISTER(0x80017B60,ZZ_17A14_14C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80042C2C,0x80042D38,ZZ_42C2C);
