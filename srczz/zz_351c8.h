#ifdef ZZ_INCLUDE_CODE
ZZ_351C8:
	AT = 0x1F800000;
	EMU_Write32(AT,RA);
	T2 = EMU_ReadU32(A2);
	T3 = EMU_ReadU32(A2 + 4); //+ 0x4
	T4 = EMU_ReadU32(A2 + 8); //+ 0x8
	T5 = EMU_ReadU32(A1);
	T6 = EMU_ReadU32(A1 + 4); //+ 0x4
	T7 = EMU_ReadU32(A1 + 8); //+ 0x8
	AT = EMU_ReadU32(A0);
	V0 = EMU_ReadU32(A0 + 4); //+ 0x4
	V1 = EMU_ReadU32(A0 + 8); //+ 0x8
	A2 = EMU_ReadU32(A0 + 12); //+ 0xC
	A1 = EMU_ReadU32(A0 + 16); //+ 0x10
	A0 = EMU_ReadU32(A0 + 20); //+ 0x14
	T1 = EMU_ReadU32(A3);
	T0 = EMU_ReadU32(A3 + 4); //+ 0x4
	A3 = EMU_ReadU32(A3 + 8); //+ 0x8
	AT += T2;
	V0 += T3;
	V1 += T4;
	A2 += T2;
	A1 += T3;
	A0 += T4;
	T5 = T5 - T1;
	T6 = T6 - T0;
	T7 = T7 - A3;
	T2 = AT + T5;
	T3 = V0 + T6;
	T4 = V1 + T7;
	T5 += A2;
	T6 += A1;
	T7 += A0;
	T2 = (int32_t)T2 >> 8;
	T3 = (int32_t)T3 >> 8;
	T4 = (int32_t)T4 >> 8;
	T5 = (int32_t)T5 >> 8;
	T6 = (int32_t)T6 >> 8;
	T7 = (int32_t)T7 >> 8;
	T2 &= 0xFFFF;
	T5 &= 0xFFFF;
	T3 <<= 16;
	T6 <<= 16;
	T4 &= 0xFFFF;
	T7 &= 0xFFFF;
	AT = T2 | T3;
	V0 = T2 | T6;
	GTE_SetRegister(0,AT);
	GTE_SetRegister(2,AT);
	GTE_SetRegister(4,V0);
	GTE_SetRegister(1,T4);
	GTE_SetRegister(3,T7);
	GTE_SetRegister(5,T4);
	GTE_RotateTranslateProjectTriple();
	AT = GTE_GetRegister(12);
	V0 = GTE_GetRegister(13);
	V1 = GTE_GetRegister(14);
	A1 = 0x80000000;
	A3 = 0x80000000;
	A0 = ~A1;
	A2 = ~A3;
	RA = 0x800352CC; //ZZ_351C8_104
	ZZ_CLOCKCYCLES(65,0x80035370);
	goto ZZ_35370;
ZZ_351C8_104:
	AT = T2 | T6;
	V0 = T5 | T3;
	GTE_SetRegister(0,AT);
	GTE_SetRegister(2,V0);
	GTE_SetRegister(4,V0);
	GTE_SetRegister(1,T7);
	GTE_SetRegister(3,T4);
	GTE_SetRegister(5,T7);
	GTE_RotateTranslateProjectTriple();
	AT = GTE_GetRegister(12);
	V0 = GTE_GetRegister(13);
	V1 = GTE_GetRegister(14);
	RA = 0x80035310; //ZZ_351C8_148
	ZZ_CLOCKCYCLES(17,0x80035370);
	goto ZZ_35370;
ZZ_351C8_148:
	AT = T5 | T6;
	GTE_SetRegister(2,AT);
	GTE_SetRegister(4,AT);
	GTE_SetRegister(3,T4);
	GTE_SetRegister(5,T7);
	GTE_RotateTranslateProjectTriple();
	V0 = GTE_GetRegister(13);
	V1 = GTE_GetRegister(14);
	RA = 0x80035344; //ZZ_351C8_17C
	ZZ_CLOCKCYCLES(13,0x800353B0);
	goto ZZ_353B0;
ZZ_351C8_17C:
	AT = 0x1F800000;
	AT |= 0x48;
	EMU_Write32(AT,A0);
	EMU_Write32(AT + 4,A2); //+ 0x4
	EMU_Write32(AT + 8,A1); //+ 0x8
	EMU_Write32(AT + 12,A3); //+ 0xC
	AT = 0x1F800000;
	RA = EMU_ReadU32(AT);
	V0 = R0;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(11);
	ZZ_JUMPREGISTER(0x80018268,ZZ_180CC_19C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800351C8,0x800352CC,ZZ_351C8);
ZZ_MARK_TARGET(0x800352CC,0x80035310,ZZ_351C8_104);
ZZ_MARK_TARGET(0x80035310,0x80035344,ZZ_351C8_148);
ZZ_MARK_TARGET(0x80035344,0x80035370,ZZ_351C8_17C);
