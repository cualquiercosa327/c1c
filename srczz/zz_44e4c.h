#ifdef ZZ_INCLUDE_CODE
ZZ_44E4C:
	T3 = EMU_ReadU32(V1 + 124); //+ 0x7C
	S2 = EMU_ReadU32(V1 + 136); //+ 0x88
	T0 = EMU_ReadU32(V1 + 128); //+ 0x80
	AT = EMU_ReadU32(V1 + 140); //+ 0x8C
	A2 = A0 - T0;
	A3 = 5600;
	if ((int32_t)A2 >= 0)
	{
		S6 = T8 - T3;
		ZZ_CLOCKCYCLES(8,0x80044E70);
		goto ZZ_44E4C_24;
	}
	S6 = T8 - T3;
	A2 = -A2;
	ZZ_CLOCKCYCLES(9,0x80044E70);
ZZ_44E4C_24:
	A3 = A3 - A2;
	if ((int32_t)A3 < 0)
	{
		A2 = (int32_t)S6 >> 16;
		ZZ_CLOCKCYCLES(3,0x80044F90);
		goto ZZ_44E4C_144;
	}
	A2 = (int32_t)S6 >> 16;
	if ((int32_t)A2 >= 0)
	{
		S6 <<= 16;
		ZZ_CLOCKCYCLES(5,0x80044E88);
		goto ZZ_44E4C_3C;
	}
	S6 <<= 16;
	A2 = -A2;
	ZZ_CLOCKCYCLES(6,0x80044E88);
ZZ_44E4C_3C:
	A3 = A3 - A2;
	if ((int32_t)A3 < 0)
	{
		A2 = (int32_t)S6 >> 16;
		ZZ_CLOCKCYCLES(3,0x80044F90);
		goto ZZ_44E4C_144;
	}
	A2 = (int32_t)S6 >> 16;
	if ((int32_t)A2 >= 0)
	{
		ZZ_CLOCKCYCLES(5,0x80044EA0);
		goto ZZ_44E4C_54;
	}
	A2 = -A2;
	ZZ_CLOCKCYCLES(6,0x80044EA0);
ZZ_44E4C_54:
	A3 = A3 - A2;
	if ((int32_t)A3 < 0)
	{
		ZZ_CLOCKCYCLES(3,0x80044F90);
		goto ZZ_44E4C_144;
	}
	A0 = A0 - AT;
	A2 = 5600;
	if ((int32_t)A0 >= 0)
	{
		S6 = T8 - S2;
		ZZ_CLOCKCYCLES(7,0x80044EC0);
		goto ZZ_44E4C_74;
	}
	S6 = T8 - S2;
	A0 = -A0;
	ZZ_CLOCKCYCLES(8,0x80044EC0);
ZZ_44E4C_74:
	A2 = A2 - A0;
	if ((int32_t)A2 < 0)
	{
		A0 = (int32_t)S6 >> 16;
		ZZ_CLOCKCYCLES(3,0x800450C4);
		goto ZZ_44E4C_278;
	}
	A0 = (int32_t)S6 >> 16;
	if ((int32_t)A0 >= 0)
	{
		S6 <<= 16;
		ZZ_CLOCKCYCLES(5,0x80044ED8);
		goto ZZ_44E4C_8C;
	}
	S6 <<= 16;
	A0 = -A0;
	ZZ_CLOCKCYCLES(6,0x80044ED8);
ZZ_44E4C_8C:
	A2 = A2 - A0;
	if ((int32_t)A2 < 0)
	{
		A0 = (int32_t)S6 >> 16;
		ZZ_CLOCKCYCLES(3,0x800450C4);
		goto ZZ_44E4C_278;
	}
	A0 = (int32_t)S6 >> 16;
	if ((int32_t)A0 >= 0)
	{
		ZZ_CLOCKCYCLES(5,0x80044EF0);
		goto ZZ_44E4C_A4;
	}
	A0 = -A0;
	ZZ_CLOCKCYCLES(6,0x80044EF0);
ZZ_44E4C_A4:
	A2 = A2 - A0;
	if ((int32_t)A2 < 0)
	{
		ZZ_CLOCKCYCLES(3,0x800450C4);
		goto ZZ_44E4C_278;
	}
	T2 = 0x80040000;
	T2 += 19864;
	A3 = EMU_CheckedAdd(A3,-800);
	if ((int32_t)A3 >= 0)
	{
		A2 = EMU_CheckedAdd(A2,-800);
		ZZ_CLOCKCYCLES(8,0x80044F14);
		goto ZZ_44E4C_C8;
	}
	A2 = EMU_CheckedAdd(A2,-800);
	A3 = 0;
	ZZ_CLOCKCYCLES(9,0x80044F14);
ZZ_44E4C_C8:
	if ((int32_t)A2 >= 0)
	{
		A2 = EMU_CheckedAdd(A3,A2);
		ZZ_CLOCKCYCLES(2,0x80044F20);
		goto ZZ_44E4C_D4;
	}
	A2 = EMU_CheckedAdd(A3,A2);
	A2 = A3;
	ZZ_CLOCKCYCLES(3,0x80044F20);
ZZ_44E4C_D4:
	T8 = T9 << 12;
	if ((int32_t)T8 < 0)
	{
		T8 = T9 << 13;
		ZZ_CLOCKCYCLES(3,0x80044F40);
		goto ZZ_44E4C_F4;
	}
	T8 = T9 << 13;
	if ((int32_t)T8 >= 0)
	{
		ZZ_CLOCKCYCLES(5,0x80044F50);
		goto ZZ_44E4C_104;
	}
	GTE_SetDataRegister(22,EMU_ReadU32(V1 + 200)); //+ 0xC8
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x8004510C,ZZ_44E4C_2C0);
	ZZ_JUMPREGISTER(0x80045188,ZZ_44E4C_33C);
	ZZ_JUMPREGISTER_END();
ZZ_44E4C_F4:
	A2 = EMU_CheckedAdd(A2,409);
	T8 = T9 << 13;
	if ((int32_t)T8 >= 0)
	{
		A2 = EMU_CheckedAdd(A2,818);
		ZZ_CLOCKCYCLES(4,0x80044F50);
		goto ZZ_44E4C_104;
	}
	A2 = EMU_CheckedAdd(A2,818);
	ZZ_CLOCKCYCLES(4,0x80044F50);
ZZ_44E4C_104:
	if (!A2)
	{
		T8 = 4096;
		ZZ_CLOCKCYCLES(2,0x80044F84);
		goto ZZ_44E4C_138;
	}
	T8 = 4096;
	A2 = T8 - A2;
	GTE_SetDataRegister(8,A2);
	GTE_SetDataRegister(6,EMU_ReadU32(V1 + 200)); //+ 0xC8
	if ((int32_t)A2 <= 0)
	{
		ZZ_CLOCKCYCLES(7,0x80044F78);
		goto ZZ_44E4C_12C;
	}
	GTE_Execute(7864336);
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(10);
	ZZ_JUMPREGISTER(0x8004510C,ZZ_44E4C_2C0);
	ZZ_JUMPREGISTER(0x80045188,ZZ_44E4C_33C);
	ZZ_JUMPREGISTER_END();
ZZ_44E4C_12C:
	GTE_SetDataRegister(22,EMU_ReadU32(V1 + 200)); //+ 0xC8
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0x8004510C,ZZ_44E4C_2C0);
	ZZ_JUMPREGISTER(0x80045188,ZZ_44E4C_33C);
	ZZ_JUMPREGISTER_END();
ZZ_44E4C_138:
	GTE_SetDataRegister(22,R0);
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0x8004510C,ZZ_44E4C_2C0);
	ZZ_JUMPREGISTER(0x80045188,ZZ_44E4C_33C);
	ZZ_JUMPREGISTER_END();
ZZ_44E4C_144:
	A0 = A0 - AT;
	A2 = 5600;
	if ((int32_t)A0 >= 0)
	{
		S6 = T8 - S2;
		ZZ_CLOCKCYCLES(4,0x80044FA4);
		goto ZZ_44E4C_158;
	}
	S6 = T8 - S2;
	A0 = -A0;
	ZZ_CLOCKCYCLES(5,0x80044FA4);
ZZ_44E4C_158:
	A2 = A2 - A0;
	if ((int32_t)A2 < 0)
	{
		A0 = (int32_t)S6 >> 16;
		ZZ_CLOCKCYCLES(3,0x80045000);
		goto ZZ_44E4C_1B4;
	}
	A0 = (int32_t)S6 >> 16;
	if ((int32_t)A0 >= 0)
	{
		S6 <<= 16;
		ZZ_CLOCKCYCLES(5,0x80044FBC);
		goto ZZ_44E4C_170;
	}
	S6 <<= 16;
	A0 = -A0;
	ZZ_CLOCKCYCLES(6,0x80044FBC);
ZZ_44E4C_170:
	A2 = A2 - A0;
	if ((int32_t)A2 < 0)
	{
		A0 = (int32_t)S6 >> 16;
		ZZ_CLOCKCYCLES(3,0x80045000);
		goto ZZ_44E4C_1B4;
	}
	A0 = (int32_t)S6 >> 16;
	if ((int32_t)A0 >= 0)
	{
		ZZ_CLOCKCYCLES(5,0x80044FD4);
		goto ZZ_44E4C_188;
	}
	A0 = -A0;
	ZZ_CLOCKCYCLES(6,0x80044FD4);
ZZ_44E4C_188:
	A2 = A2 - A0;
	if ((int32_t)A2 < 0)
	{
		A2 = EMU_CheckedAdd(A2,-800);
		ZZ_CLOCKCYCLES(3,0x80045000);
		goto ZZ_44E4C_1B4;
	}
	A2 = EMU_CheckedAdd(A2,-800);
	T2 = 0x80040000;
	T2 += 19776;
	T3 = S2;
	T0 = AT;
	if ((int32_t)A2 >= 0)
	{
		ZZ_CLOCKCYCLES(9,0x80044F20);
		goto ZZ_44E4C_D4;
	}
	A2 = 0;
	ZZ_CLOCKCYCLES(11,0x80044F20);
	goto ZZ_44E4C_D4;
ZZ_44E4C_1B4:
	if (T2)
	{
		T2 = 0x80040000;
		ZZ_CLOCKCYCLES(2,0x80045060);
		goto ZZ_44E4C_214;
	}
	T2 = 0x80040000;
	T2 += 19768;
	T8 = EMU_ReadU32(V1 + 176); //+ 0xB0
	A0 = EMU_ReadU32(V1 + 180); //+ 0xB4
	S6 = EMU_ReadU32(V1 + 184); //+ 0xB8
	T8 |= A0;
	T8 |= S6;
	T8 <<= 12;
	T8 >>= 30;
	if (T8)
	{
		A2 = 0;
		ZZ_CLOCKCYCLES(12,0x80044F20);
		goto ZZ_44E4C_D4;
	}
	A2 = 0;
	T3 = EMU_ReadU32(V1 + 120); //+ 0x78
	S6 = EMU_ReadU32(V1 + 472); //+ 0x1D8
	T2 = EMU_ReadU32(V1 + 476); //+ 0x1DC
	S2 = EMU_ReadU32(S4 + 660); //+ 0x294
	EMU_Write32(S7 + 8,GTE_GetDataRegister(12)); //+ 0x8
	EMU_Write32(S7 + 12,GTE_GetDataRegister(13)); //+ 0xC
	EMU_Write32(S7 + 16,GTE_GetDataRegister(14)); //+ 0x10
	T8 = 0x20000000;
	EMU_Write32(S7 + 4,T8); //+ 0x4
	A0 = 20;
	T9 = 0x4000000;
	ZZ_CLOCKCYCLES(24,0x80042BE0);
	goto ZZ_420F4_AEC;
ZZ_44E4C_214:
	T2 = 0x80040000;
	T2 += 19768;
	T8 = EMU_ReadU32(V1 + 176); //+ 0xB0
	A0 = EMU_ReadU32(V1 + 180); //+ 0xB4
	S6 = EMU_ReadU32(V1 + 184); //+ 0xB8
	T8 |= A0;
	A0 = EMU_ReadU32(V1 + 188); //+ 0xBC
	T8 |= S6;
	T8 |= A0;
	T8 <<= 12;
	T8 >>= 30;
	if (T8)
	{
		A2 = 0;
		ZZ_CLOCKCYCLES(13,0x80044F20);
		goto ZZ_44E4C_D4;
	}
	A2 = 0;
	T3 = EMU_ReadU32(V1 + 120); //+ 0x78
	S6 = EMU_ReadU32(V1 + 472); //+ 0x1D8
	T2 = EMU_ReadU32(V1 + 476); //+ 0x1DC
	S2 = EMU_ReadU32(S4 + 660); //+ 0x294
	EMU_Write32(S7 + 12,GTE_GetDataRegister(12)); //+ 0xC
	EMU_Write32(S7 + 16,GTE_GetDataRegister(13)); //+ 0x10
	EMU_Write32(S7 + 20,GTE_GetDataRegister(14)); //+ 0x14
	T8 = 0x28000000;
	EMU_Write32(S7 + 4,T8); //+ 0x4
	A0 = 24;
	T9 = 0x5000000;
	ZZ_CLOCKCYCLES(25,0x80042BE0);
	goto ZZ_420F4_AEC;
ZZ_44E4C_278:
	T2 = 0x80040000;
	T2 += 19776;
	A2 = EMU_CheckedAdd(A3,-800);
	if ((int32_t)A2 >= 0)
	{
		ZZ_CLOCKCYCLES(5,0x80044F20);
		goto ZZ_44E4C_D4;
	}
	A2 = 0;
	ZZ_CLOCKCYCLES(7,0x80044F20);
	goto ZZ_44E4C_D4;
ZZ_44E4C_294:
	EMU_Write32(V1 + 176,AT); //+ 0xB0
	EMU_Write32(V1 + 180,A3); //+ 0xB4
	EMU_Write32(V1 + 184,T0); //+ 0xB8
	EMU_Write32(V1 + 120,T3); //+ 0x78
	EMU_Write32(V1 + 392,RA); //+ 0x188
	T2 = 0;
	T8 = GTE_GetDataRegister(0);
	A0 = GTE_GetDataRegister(1);
	T9 = EMU_ReadU32(V1 + 176); //+ 0xB0
	RA = 0x8004510C; //ZZ_44E4C_2C0
	EMU_Write32(V1 + 200,T5); //+ 0xC8
	ZZ_CLOCKCYCLES(11,0x80044E4C);
	goto ZZ_44E4C;
ZZ_44E4C_2C0:
	T8 = GTE_GetDataRegister(2);
	A0 = GTE_GetDataRegister(3);
	T5 = GTE_GetDataRegister(22);
	T9 = EMU_ReadU32(V1 + 180); //+ 0xB4
	ZZ_JUMPREGISTER_BEGIN(T2);
	RA = 0x80045124; //ZZ_44E4C_2D8
	EMU_Write32(V1 + 200,T6); //+ 0xC8
	ZZ_CLOCKCYCLES_JR(6);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (T2,8004511C)
	ZZ_JUMPREGISTER_END();
ZZ_44E4C_2D8:
	T8 = GTE_GetDataRegister(4);
	A0 = GTE_GetDataRegister(5);
	T6 = GTE_GetDataRegister(22);
	T9 = EMU_ReadU32(V1 + 184); //+ 0xB8
	ZZ_JUMPREGISTER_BEGIN(T2);
	RA = 0x8004513C; //ZZ_44E4C_2F0
	EMU_Write32(V1 + 200,T7); //+ 0xC8
	ZZ_CLOCKCYCLES_JR(6);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (T2,80045134)
	ZZ_JUMPREGISTER_END();
ZZ_44E4C_2F0:
	T7 = GTE_GetDataRegister(22);
	T3 = EMU_ReadU32(V1 + 120); //+ 0x78
	S6 = EMU_ReadU32(V1 + 472); //+ 0x1D8
	T2 = EMU_ReadU32(V1 + 476); //+ 0x1DC
	RA = EMU_ReadU32(V1 + 392); //+ 0x188
	ZZ_CLOCKCYCLES(7,0x800427E0);
	goto ZZ_420F4_6EC;
ZZ_44E4C_30C:
	EMU_Write32(V1 + 176,AT); //+ 0xB0
	EMU_Write32(V1 + 180,A3); //+ 0xB4
	EMU_Write32(V1 + 184,T0); //+ 0xB8
	EMU_Write32(V1 + 188,A0); //+ 0xBC
	EMU_Write32(V1 + 120,T3); //+ 0x78
	EMU_Write32(V1 + 392,RA); //+ 0x188
	T2 = 1;
	T8 = EMU_ReadU32(V1 + 436); //+ 0x1B4
	A0 = EMU_ReadU32(V1 + 440); //+ 0x1B8
	T9 = EMU_ReadU32(V1 + 176); //+ 0xB0
	RA = 0x80045188; //ZZ_44E4C_33C
	EMU_Write32(V1 + 200,T5); //+ 0xC8
	ZZ_CLOCKCYCLES(12,0x80044E4C);
	goto ZZ_44E4C;
ZZ_44E4C_33C:
	T8 = GTE_GetDataRegister(2);
	A0 = GTE_GetDataRegister(3);
	T5 = GTE_GetDataRegister(22);
	T9 = EMU_ReadU32(V1 + 180); //+ 0xB4
	ZZ_JUMPREGISTER_BEGIN(T2);
	RA = 0x800451A0; //ZZ_44E4C_354
	EMU_Write32(V1 + 200,T6); //+ 0xC8
	ZZ_CLOCKCYCLES_JR(6);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (T2,80045198)
	ZZ_JUMPREGISTER_END();
ZZ_44E4C_354:
	T8 = GTE_GetDataRegister(4);
	A0 = GTE_GetDataRegister(5);
	T6 = GTE_GetDataRegister(22);
	T9 = EMU_ReadU32(V1 + 184); //+ 0xB8
	ZZ_JUMPREGISTER_BEGIN(T2);
	RA = 0x800451B8; //ZZ_44E4C_36C
	EMU_Write32(V1 + 200,T7); //+ 0xC8
	ZZ_CLOCKCYCLES_JR(6);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (T2,800451B0)
	ZZ_JUMPREGISTER_END();
ZZ_44E4C_36C:
	T8 = GTE_GetDataRegister(0);
	A0 = GTE_GetDataRegister(1);
	T7 = GTE_GetDataRegister(22);
	T9 = EMU_ReadU32(V1 + 188); //+ 0xBC
	ZZ_JUMPREGISTER_BEGIN(T2);
	RA = 0x800451D0; //ZZ_44E4C_384
	EMU_Write32(V1 + 200,A1); //+ 0xC8
	ZZ_CLOCKCYCLES_JR(6);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (T2,800451C8)
	ZZ_JUMPREGISTER_END();
ZZ_44E4C_384:
	A1 = GTE_GetDataRegister(22);
	T3 = EMU_ReadU32(V1 + 120); //+ 0x78
	S6 = EMU_ReadU32(V1 + 472); //+ 0x1D8
	T2 = EMU_ReadU32(V1 + 476); //+ 0x1DC
	RA = EMU_ReadU32(V1 + 392); //+ 0x188
	ZZ_CLOCKCYCLES(7,0x80042AB0);
	goto ZZ_420F4_9BC;
#endif
ZZ_MARK_TARGET(0x80044E4C,ZZ_44E4C);
ZZ_MARK(0x80044E50);
ZZ_MARK(0x80044E54);
ZZ_MARK(0x80044E58);
ZZ_MARK(0x80044E5C);
ZZ_MARK(0x80044E60);
ZZ_MARK(0x80044E64);
ZZ_MARK(0x80044E68);
ZZ_MARK(0x80044E6C);
ZZ_MARK_TARGET(0x80044E70,ZZ_44E4C_24);
ZZ_MARK(0x80044E74);
ZZ_MARK(0x80044E78);
ZZ_MARK(0x80044E7C);
ZZ_MARK(0x80044E80);
ZZ_MARK(0x80044E84);
ZZ_MARK_TARGET(0x80044E88,ZZ_44E4C_3C);
ZZ_MARK(0x80044E8C);
ZZ_MARK(0x80044E90);
ZZ_MARK(0x80044E94);
ZZ_MARK(0x80044E98);
ZZ_MARK(0x80044E9C);
ZZ_MARK_TARGET(0x80044EA0,ZZ_44E4C_54);
ZZ_MARK(0x80044EA4);
ZZ_MARK(0x80044EA8);
ZZ_MARK(0x80044EAC);
ZZ_MARK(0x80044EB0);
ZZ_MARK(0x80044EB4);
ZZ_MARK(0x80044EB8);
ZZ_MARK(0x80044EBC);
ZZ_MARK_TARGET(0x80044EC0,ZZ_44E4C_74);
ZZ_MARK(0x80044EC4);
ZZ_MARK(0x80044EC8);
ZZ_MARK(0x80044ECC);
ZZ_MARK(0x80044ED0);
ZZ_MARK(0x80044ED4);
ZZ_MARK_TARGET(0x80044ED8,ZZ_44E4C_8C);
ZZ_MARK(0x80044EDC);
ZZ_MARK(0x80044EE0);
ZZ_MARK(0x80044EE4);
ZZ_MARK(0x80044EE8);
ZZ_MARK(0x80044EEC);
ZZ_MARK_TARGET(0x80044EF0,ZZ_44E4C_A4);
ZZ_MARK(0x80044EF4);
ZZ_MARK(0x80044EF8);
ZZ_MARK(0x80044EFC);
ZZ_MARK(0x80044F00);
ZZ_MARK(0x80044F04);
ZZ_MARK(0x80044F08);
ZZ_MARK(0x80044F0C);
ZZ_MARK(0x80044F10);
ZZ_MARK_TARGET(0x80044F14,ZZ_44E4C_C8);
ZZ_MARK(0x80044F18);
ZZ_MARK(0x80044F1C);
ZZ_MARK_TARGET(0x80044F20,ZZ_44E4C_D4);
ZZ_MARK(0x80044F24);
ZZ_MARK(0x80044F28);
ZZ_MARK(0x80044F2C);
ZZ_MARK(0x80044F30);
ZZ_MARK(0x80044F34);
ZZ_MARK(0x80044F38);
ZZ_MARK(0x80044F3C);
ZZ_MARK_TARGET(0x80044F40,ZZ_44E4C_F4);
ZZ_MARK(0x80044F44);
ZZ_MARK(0x80044F48);
ZZ_MARK(0x80044F4C);
ZZ_MARK_TARGET(0x80044F50,ZZ_44E4C_104);
ZZ_MARK(0x80044F54);
ZZ_MARK(0x80044F58);
ZZ_MARK(0x80044F5C);
ZZ_MARK(0x80044F60);
ZZ_MARK(0x80044F64);
ZZ_MARK(0x80044F68);
ZZ_MARK(0x80044F6C);
ZZ_MARK(0x80044F70);
ZZ_MARK(0x80044F74);
ZZ_MARK_TARGET(0x80044F78,ZZ_44E4C_12C);
ZZ_MARK(0x80044F7C);
ZZ_MARK(0x80044F80);
ZZ_MARK_TARGET(0x80044F84,ZZ_44E4C_138);
ZZ_MARK(0x80044F88);
ZZ_MARK(0x80044F8C);
ZZ_MARK_TARGET(0x80044F90,ZZ_44E4C_144);
ZZ_MARK(0x80044F94);
ZZ_MARK(0x80044F98);
ZZ_MARK(0x80044F9C);
ZZ_MARK(0x80044FA0);
ZZ_MARK_TARGET(0x80044FA4,ZZ_44E4C_158);
ZZ_MARK(0x80044FA8);
ZZ_MARK(0x80044FAC);
ZZ_MARK(0x80044FB0);
ZZ_MARK(0x80044FB4);
ZZ_MARK(0x80044FB8);
ZZ_MARK_TARGET(0x80044FBC,ZZ_44E4C_170);
ZZ_MARK(0x80044FC0);
ZZ_MARK(0x80044FC4);
ZZ_MARK(0x80044FC8);
ZZ_MARK(0x80044FCC);
ZZ_MARK(0x80044FD0);
ZZ_MARK_TARGET(0x80044FD4,ZZ_44E4C_188);
ZZ_MARK(0x80044FD8);
ZZ_MARK(0x80044FDC);
ZZ_MARK(0x80044FE0);
ZZ_MARK(0x80044FE4);
ZZ_MARK(0x80044FE8);
ZZ_MARK(0x80044FEC);
ZZ_MARK(0x80044FF0);
ZZ_MARK(0x80044FF4);
ZZ_MARK(0x80044FF8);
ZZ_MARK(0x80044FFC);
ZZ_MARK_TARGET(0x80045000,ZZ_44E4C_1B4);
ZZ_MARK(0x80045004);
ZZ_MARK(0x80045008);
ZZ_MARK(0x8004500C);
ZZ_MARK(0x80045010);
ZZ_MARK(0x80045014);
ZZ_MARK(0x80045018);
ZZ_MARK(0x8004501C);
ZZ_MARK(0x80045020);
ZZ_MARK(0x80045024);
ZZ_MARK(0x80045028);
ZZ_MARK(0x8004502C);
ZZ_MARK(0x80045030);
ZZ_MARK(0x80045034);
ZZ_MARK(0x80045038);
ZZ_MARK(0x8004503C);
ZZ_MARK(0x80045040);
ZZ_MARK(0x80045044);
ZZ_MARK(0x80045048);
ZZ_MARK(0x8004504C);
ZZ_MARK(0x80045050);
ZZ_MARK(0x80045054);
ZZ_MARK(0x80045058);
ZZ_MARK(0x8004505C);
ZZ_MARK_TARGET(0x80045060,ZZ_44E4C_214);
ZZ_MARK(0x80045064);
ZZ_MARK(0x80045068);
ZZ_MARK(0x8004506C);
ZZ_MARK(0x80045070);
ZZ_MARK(0x80045074);
ZZ_MARK(0x80045078);
ZZ_MARK(0x8004507C);
ZZ_MARK(0x80045080);
ZZ_MARK(0x80045084);
ZZ_MARK(0x80045088);
ZZ_MARK(0x8004508C);
ZZ_MARK(0x80045090);
ZZ_MARK(0x80045094);
ZZ_MARK(0x80045098);
ZZ_MARK(0x8004509C);
ZZ_MARK(0x800450A0);
ZZ_MARK(0x800450A4);
ZZ_MARK(0x800450A8);
ZZ_MARK(0x800450AC);
ZZ_MARK(0x800450B0);
ZZ_MARK(0x800450B4);
ZZ_MARK(0x800450B8);
ZZ_MARK(0x800450BC);
ZZ_MARK(0x800450C0);
ZZ_MARK_TARGET(0x800450C4,ZZ_44E4C_278);
ZZ_MARK(0x800450C8);
ZZ_MARK(0x800450CC);
ZZ_MARK(0x800450D0);
ZZ_MARK(0x800450D4);
ZZ_MARK(0x800450D8);
ZZ_MARK(0x800450DC);
ZZ_MARK_TARGET(0x800450E0,ZZ_44E4C_294);
ZZ_MARK(0x800450E4);
ZZ_MARK(0x800450E8);
ZZ_MARK(0x800450EC);
ZZ_MARK(0x800450F0);
ZZ_MARK(0x800450F4);
ZZ_MARK(0x800450F8);
ZZ_MARK(0x800450FC);
ZZ_MARK(0x80045100);
ZZ_MARK(0x80045104);
ZZ_MARK(0x80045108);
ZZ_MARK_TARGET(0x8004510C,ZZ_44E4C_2C0);
ZZ_MARK(0x80045110);
ZZ_MARK(0x80045114);
ZZ_MARK(0x80045118);
ZZ_MARK(0x8004511C);
ZZ_MARK(0x80045120);
ZZ_MARK_TARGET(0x80045124,ZZ_44E4C_2D8);
ZZ_MARK(0x80045128);
ZZ_MARK(0x8004512C);
ZZ_MARK(0x80045130);
ZZ_MARK(0x80045134);
ZZ_MARK(0x80045138);
ZZ_MARK_TARGET(0x8004513C,ZZ_44E4C_2F0);
ZZ_MARK(0x80045140);
ZZ_MARK(0x80045144);
ZZ_MARK(0x80045148);
ZZ_MARK(0x8004514C);
ZZ_MARK(0x80045150);
ZZ_MARK(0x80045154);
ZZ_MARK_TARGET(0x80045158,ZZ_44E4C_30C);
ZZ_MARK(0x8004515C);
ZZ_MARK(0x80045160);
ZZ_MARK(0x80045164);
ZZ_MARK(0x80045168);
ZZ_MARK(0x8004516C);
ZZ_MARK(0x80045170);
ZZ_MARK(0x80045174);
ZZ_MARK(0x80045178);
ZZ_MARK(0x8004517C);
ZZ_MARK(0x80045180);
ZZ_MARK(0x80045184);
ZZ_MARK_TARGET(0x80045188,ZZ_44E4C_33C);
ZZ_MARK(0x8004518C);
ZZ_MARK(0x80045190);
ZZ_MARK(0x80045194);
ZZ_MARK(0x80045198);
ZZ_MARK(0x8004519C);
ZZ_MARK_TARGET(0x800451A0,ZZ_44E4C_354);
ZZ_MARK(0x800451A4);
ZZ_MARK(0x800451A8);
ZZ_MARK(0x800451AC);
ZZ_MARK(0x800451B0);
ZZ_MARK(0x800451B4);
ZZ_MARK_TARGET(0x800451B8,ZZ_44E4C_36C);
ZZ_MARK(0x800451BC);
ZZ_MARK(0x800451C0);
ZZ_MARK(0x800451C4);
ZZ_MARK(0x800451C8);
ZZ_MARK(0x800451CC);
ZZ_MARK_TARGET(0x800451D0,ZZ_44E4C_384);
ZZ_MARK(0x800451D4);
ZZ_MARK(0x800451D8);
ZZ_MARK(0x800451DC);
ZZ_MARK(0x800451E0);
ZZ_MARK(0x800451E4);
ZZ_MARK(0x800451E8);
