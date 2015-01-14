#ifdef ZZ_INCLUDE_CODE
ZZ_3ED6C:
	T0 = EMU_ReadU32(A2);
	T1 = EMU_ReadU32(A2 + 4); //+ 0x4
	T2 = EMU_ReadU32(A2 + 8); //+ 0x8
	T3 = EMU_ReadU32(A2 + 12); //+ 0xC
	T4 = EMU_ReadU32(A2 + 16); //+ 0x10
	T5 = EMU_ReadU32(A3);
	T6 = EMU_ReadU32(A3 + 4); //+ 0x4
	T7 = EMU_ReadU32(A3 + 8); //+ 0x8
	GTE_SetControlRegister(0,T0);
	GTE_SetControlRegister(1,T1);
	GTE_SetControlRegister(2,T2);
	GTE_SetControlRegister(3,T3);
	GTE_SetControlRegister(4,T4);
	A3 = EMU_ReadU32(SP + 16); //+ 0x10
	T3 = EMU_ReadU32(SP + 20); //+ 0x14
	ZZ_CLOCKCYCLES(16,0x8003EE14);
	goto ZZ_3ED6C_A8;
ZZ_3ED6C_40:
	T0 = EMU_ReadU32(A1);
	T1 = EMU_ReadU32(A1 + 4); //+ 0x4
	T2 = EMU_ReadU32(A1 + 8); //+ 0x8
	T0 = (int32_t)T0 >> T3;
	T1 = (int32_t)T1 >> T3;
	T2 = (int32_t)T2 >> T3;
	T1 <<= 16;
	T0 &= 0xFFFF;
	T0 |= T1;
	GTE_SetDataRegister(0,T0);
	GTE_SetDataRegister(1,T2);
	A1 = EMU_CheckedAdd(A1,12);
	A0 = EMU_CheckedAdd(A0,12);
	GTE_Execute(4743186);
	T0 = GTE_GetDataRegister(9);
	T1 = GTE_GetDataRegister(10);
	T2 = GTE_GetDataRegister(11);
	T0 <<= T3;
	T1 <<= T3;
	T2 <<= T3;
	T0 += T5;
	T1 += T6;
	T2 += T7;
	EMU_Write32(A0 - 12,T0); //+ 0xFFFFFFF4
	EMU_Write32(A0 - 8,T1); //+ 0xFFFFFFF8
	EMU_Write32(A0 - 4,T2); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(26,0x8003EE14);
ZZ_3ED6C_A8:
	if ((int32_t)A3 > 0)
	{
		A3 = EMU_CheckedAdd(A3,-1);
		ZZ_CLOCKCYCLES(2,0x8003EDAC);
		goto ZZ_3ED6C_40;
	}
	A3 = EMU_CheckedAdd(A3,-1);
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x8002AFC0,ZZ_2ABE4_3DC);
	ZZ_JUMPREGISTER(0x8002D068,ZZ_2CF64_104);
	ZZ_JUMPREGISTER_END();
ZZ_3ED6C_F0:
	V0 = GTE_GetDataRegister(17);
	T8 = GTE_GetDataRegister(18);
	T9 = GTE_GetDataRegister(19);
	if ((int32_t)V0 <= 0)
	{
		V0 += T8;
		ZZ_CLOCKCYCLES(5,0x8003EFA4);
		goto ZZ_3ED6C_238;
	}
	V0 += T8;
	if ((int32_t)T8 <= 0)
	{
		V0 += T9;
		ZZ_CLOCKCYCLES(7,0x8003EFA4);
		goto ZZ_3ED6C_238;
	}
	V0 += T9;
	GTE_Execute(20971526);
	if ((int32_t)T9 <= 0)
	{
		V0 >>= 5;
		ZZ_CLOCKCYCLES(10,0x8003EFA4);
		goto ZZ_3ED6C_238;
	}
	V0 >>= 5;
	A3 = EMU_ReadU32(V1 + 236); //+ 0xEC
	T8 = EMU_ReadU32(V1 + 240); //+ 0xF0
	A1 = A3 & 0xFFFF;
	V0 = T8 - V0;
	T9 = T0 << 2;
	T8 = GTE_GetDataRegister(24);
	T9 ^= A3;
	if (!T8)
	{
		T9 ^= T8;
		ZZ_CLOCKCYCLES(19,0x8003EFA4);
		goto ZZ_3ED6C_238;
	}
	T9 ^= T8;
	T8 = T0 << 3;
	if ((int32_t)T8 >= 0)
	{
		ZZ_CLOCKCYCLES(22,0x8003EEBC);
		goto ZZ_3ED6C_150;
	}
	if ((int32_t)T9 <= 0)
	{
		ZZ_CLOCKCYCLES(24,0x8003EFA4);
		goto ZZ_3ED6C_238;
	}
	ZZ_CLOCKCYCLES(24,0x8003EEBC);
ZZ_3ED6C_150:
	GTE_SetDataRegister(20,T5);
	GTE_SetDataRegister(21,T6);
	GTE_SetDataRegister(22,T7);
	GTE_SetDataRegister(8,A1);
	T9 = T0 << 7;
	if ((int32_t)T9 < 0)
	{
		A0 = EMU_ReadU32(V1 + 112); //+ 0x70
		ZZ_CLOCKCYCLES(7,0x8003EEE4);
		goto ZZ_3ED6C_178;
	}
	A0 = EMU_ReadU32(V1 + 112); //+ 0x70
	if (!A1)
	{
		ZZ_CLOCKCYCLES(9,0x8003EEE4);
		goto ZZ_3ED6C_178;
	}
	GTE_Execute(16252970);
	ZZ_CLOCKCYCLES(10,0x8003EEE4);
ZZ_3ED6C_178:
	if ((int32_t)V0 >= 0)
	{
		V0 <<= 2;
		ZZ_CLOCKCYCLES(2,0x8003EEF0);
		goto ZZ_3ED6C_184;
	}
	V0 <<= 2;
	V0 = 0;
	ZZ_CLOCKCYCLES(3,0x8003EEF0);
ZZ_3ED6C_184:
	T8 = EMU_CheckedAdd(V0,-8188);
	if ((int32_t)T8 <= 0)
	{
		V0 += FP;
		ZZ_CLOCKCYCLES(3,0x8003EF00);
		goto ZZ_3ED6C_194;
	}
	V0 += FP;
	V0 = EMU_CheckedAdd(FP,8188);
	ZZ_CLOCKCYCLES(4,0x8003EF00);
ZZ_3ED6C_194:
	if (A2)
	{
		T8 = 0x30000000;
		ZZ_CLOCKCYCLES(2,0x8003EF34);
		goto ZZ_3ED6C_1C8;
	}
	T8 = 0x30000000;
	EMU_Write32(S7 + 8,GTE_GetDataRegister(12)); //+ 0x8
	EMU_Write32(S7 + 16,GTE_GetDataRegister(13)); //+ 0x10
	EMU_Write32(S7 + 24,GTE_GetDataRegister(14)); //+ 0x18
	T9 = GTE_GetDataRegister(20);
	A0 = 28;
	T8 |= T9;
	EMU_Write32(S7 + 4,T8); //+ 0x4
	EMU_Write32(S7 + 12,GTE_GetDataRegister(21)); //+ 0xC
	EMU_Write32(S7 + 20,GTE_GetDataRegister(22)); //+ 0x14
	T9 = 0x6000000;
	ZZ_CLOCKCYCLES(13,0x8003EF88);
	goto ZZ_3ED6C_21C;
ZZ_3ED6C_1C8:
	T8 = EMU_ReadU32(A0 - 12); //+ 0xFFFFFFF4
	T9 = EMU_ReadU32(A0 - 8); //+ 0xFFFFFFF8
	A0 = EMU_ReadU32(A0 - 4); //+ 0xFFFFFFFC
	EMU_Write32(S7 + 8,GTE_GetDataRegister(12)); //+ 0x8
	EMU_Write32(S7 + 20,GTE_GetDataRegister(13)); //+ 0x14
	EMU_Write32(S7 + 32,GTE_GetDataRegister(14)); //+ 0x20
	EMU_Write32(S7 + 12,T8); //+ 0xC
	EMU_Write32(S7 + 24,T9); //+ 0x18
	EMU_Write32(S7 + 36,A0); //+ 0x24
	A0 = GTE_GetDataRegister(20);
	T8 = 0x600000;
	T9 &= T8;
	if (T8 == T9)
	{
		T8 = 0x34000000;
		ZZ_CLOCKCYCLES(14,0x8003EF70);
		goto ZZ_3ED6C_204;
	}
	T8 = 0x34000000;
	T8 = 0x36000000;
	ZZ_CLOCKCYCLES(15,0x8003EF70);
ZZ_3ED6C_204:
	T8 |= A0;
	EMU_Write32(S7 + 4,T8); //+ 0x4
	EMU_Write32(S7 + 16,GTE_GetDataRegister(21)); //+ 0x10
	EMU_Write32(S7 + 28,GTE_GetDataRegister(22)); //+ 0x1C
	A0 = 40;
	T9 = 0x9000000;
	ZZ_CLOCKCYCLES(6,0x8003EF88);
ZZ_3ED6C_21C:
	T8 = EMU_ReadU32(V0 + 24); //+ 0x18
	A1 = S7 << 8;
	T8 |= T9;
	EMU_Write32(S7,T8);
	A1 >>= 8;
	EMU_Write32(V0 + 24,A1); //+ 0x18
	S7 += A0;
	ZZ_CLOCKCYCLES(7,0x8003EFA4);
ZZ_3ED6C_238:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x8002AFC0,ZZ_2ABE4_3DC);
	ZZ_JUMPREGISTER(0x8002D068,ZZ_2CF64_104);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003ED6C,ZZ_3ED6C);
ZZ_MARK(0x8003ED70);
ZZ_MARK(0x8003ED74);
ZZ_MARK(0x8003ED78);
ZZ_MARK(0x8003ED7C);
ZZ_MARK(0x8003ED80);
ZZ_MARK(0x8003ED84);
ZZ_MARK(0x8003ED88);
ZZ_MARK(0x8003ED8C);
ZZ_MARK(0x8003ED90);
ZZ_MARK(0x8003ED94);
ZZ_MARK(0x8003ED98);
ZZ_MARK(0x8003ED9C);
ZZ_MARK(0x8003EDA0);
ZZ_MARK(0x8003EDA4);
ZZ_MARK(0x8003EDA8);
ZZ_MARK_TARGET(0x8003EDAC,ZZ_3ED6C_40);
ZZ_MARK(0x8003EDB0);
ZZ_MARK(0x8003EDB4);
ZZ_MARK(0x8003EDB8);
ZZ_MARK(0x8003EDBC);
ZZ_MARK(0x8003EDC0);
ZZ_MARK(0x8003EDC4);
ZZ_MARK(0x8003EDC8);
ZZ_MARK(0x8003EDCC);
ZZ_MARK(0x8003EDD0);
ZZ_MARK(0x8003EDD4);
ZZ_MARK(0x8003EDD8);
ZZ_MARK(0x8003EDDC);
ZZ_MARK(0x8003EDE0);
ZZ_MARK(0x8003EDE4);
ZZ_MARK(0x8003EDE8);
ZZ_MARK(0x8003EDEC);
ZZ_MARK(0x8003EDF0);
ZZ_MARK(0x8003EDF4);
ZZ_MARK(0x8003EDF8);
ZZ_MARK(0x8003EDFC);
ZZ_MARK(0x8003EE00);
ZZ_MARK(0x8003EE04);
ZZ_MARK(0x8003EE08);
ZZ_MARK(0x8003EE0C);
ZZ_MARK(0x8003EE10);
ZZ_MARK_TARGET(0x8003EE14,ZZ_3ED6C_A8);
ZZ_MARK(0x8003EE18);
ZZ_MARK(0x8003EE1C);
ZZ_MARK(0x8003EE20);
ZZ_MARK_TARGET(0x8003EE5C,ZZ_3ED6C_F0);
ZZ_MARK(0x8003EE60);
ZZ_MARK(0x8003EE64);
ZZ_MARK(0x8003EE68);
ZZ_MARK(0x8003EE6C);
ZZ_MARK(0x8003EE70);
ZZ_MARK(0x8003EE74);
ZZ_MARK(0x8003EE78);
ZZ_MARK(0x8003EE7C);
ZZ_MARK(0x8003EE80);
ZZ_MARK(0x8003EE84);
ZZ_MARK(0x8003EE88);
ZZ_MARK(0x8003EE8C);
ZZ_MARK(0x8003EE90);
ZZ_MARK(0x8003EE94);
ZZ_MARK(0x8003EE98);
ZZ_MARK(0x8003EE9C);
ZZ_MARK(0x8003EEA0);
ZZ_MARK(0x8003EEA4);
ZZ_MARK(0x8003EEA8);
ZZ_MARK(0x8003EEAC);
ZZ_MARK(0x8003EEB0);
ZZ_MARK(0x8003EEB4);
ZZ_MARK(0x8003EEB8);
ZZ_MARK_TARGET(0x8003EEBC,ZZ_3ED6C_150);
ZZ_MARK(0x8003EEC0);
ZZ_MARK(0x8003EEC4);
ZZ_MARK(0x8003EEC8);
ZZ_MARK(0x8003EECC);
ZZ_MARK(0x8003EED0);
ZZ_MARK(0x8003EED4);
ZZ_MARK(0x8003EED8);
ZZ_MARK(0x8003EEDC);
ZZ_MARK(0x8003EEE0);
ZZ_MARK_TARGET(0x8003EEE4,ZZ_3ED6C_178);
ZZ_MARK(0x8003EEE8);
ZZ_MARK(0x8003EEEC);
ZZ_MARK_TARGET(0x8003EEF0,ZZ_3ED6C_184);
ZZ_MARK(0x8003EEF4);
ZZ_MARK(0x8003EEF8);
ZZ_MARK(0x8003EEFC);
ZZ_MARK_TARGET(0x8003EF00,ZZ_3ED6C_194);
ZZ_MARK(0x8003EF04);
ZZ_MARK(0x8003EF08);
ZZ_MARK(0x8003EF0C);
ZZ_MARK(0x8003EF10);
ZZ_MARK(0x8003EF14);
ZZ_MARK(0x8003EF18);
ZZ_MARK(0x8003EF1C);
ZZ_MARK(0x8003EF20);
ZZ_MARK(0x8003EF24);
ZZ_MARK(0x8003EF28);
ZZ_MARK(0x8003EF2C);
ZZ_MARK(0x8003EF30);
ZZ_MARK_TARGET(0x8003EF34,ZZ_3ED6C_1C8);
ZZ_MARK(0x8003EF38);
ZZ_MARK(0x8003EF3C);
ZZ_MARK(0x8003EF40);
ZZ_MARK(0x8003EF44);
ZZ_MARK(0x8003EF48);
ZZ_MARK(0x8003EF4C);
ZZ_MARK(0x8003EF50);
ZZ_MARK(0x8003EF54);
ZZ_MARK(0x8003EF58);
ZZ_MARK(0x8003EF5C);
ZZ_MARK(0x8003EF60);
ZZ_MARK(0x8003EF64);
ZZ_MARK(0x8003EF68);
ZZ_MARK(0x8003EF6C);
ZZ_MARK_TARGET(0x8003EF70,ZZ_3ED6C_204);
ZZ_MARK(0x8003EF74);
ZZ_MARK(0x8003EF78);
ZZ_MARK(0x8003EF7C);
ZZ_MARK(0x8003EF80);
ZZ_MARK(0x8003EF84);
ZZ_MARK_TARGET(0x8003EF88,ZZ_3ED6C_21C);
ZZ_MARK(0x8003EF8C);
ZZ_MARK(0x8003EF90);
ZZ_MARK(0x8003EF94);
ZZ_MARK(0x8003EF98);
ZZ_MARK(0x8003EF9C);
ZZ_MARK(0x8003EFA0);
ZZ_MARK_TARGET(0x8003EFA4,ZZ_3ED6C_238);
ZZ_MARK(0x8003EFA8);