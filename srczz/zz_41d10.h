#ifdef ZZ_INCLUDE_CODE
ZZ_41D10:
	if (!A0)
	{
		V0 = 0;
		ZZ_CLOCKCYCLES(2,0x80041D58);
		goto ZZ_41D10_48;
	}
	V0 = 0;
	T8 = 0;
	A2 = 16;
	ZZ_CLOCKCYCLES(5,0x80041D50);
	goto ZZ_41D10_40;
ZZ_41D10_14:
	A1 = A0 >> 30;
	T8 |= A1;
	T9 = V0 << 2;
	T9 = EMU_CheckedAdd(T9,1);
	V0 <<= 1;
	T9 = T8 - T9;
	if ((int32_t)T9 < 0)
	{
		A0 <<= 2;
		ZZ_CLOCKCYCLES(8,0x80041D4C);
		goto ZZ_41D10_3C;
	}
	A0 <<= 2;
	V0 = EMU_CheckedAdd(V0,1);
	T8 = T9;
	ZZ_CLOCKCYCLES(10,0x80041D4C);
ZZ_41D10_3C:
	T8 <<= 2;
	ZZ_CLOCKCYCLES(1,0x80041D50);
ZZ_41D10_40:
	if (A2)
	{
		A2 = EMU_CheckedAdd(A2,-1);
		ZZ_CLOCKCYCLES(2,0x80041D24);
		goto ZZ_41D10_14;
	}
	A2 = EMU_CheckedAdd(A2,-1);
	ZZ_CLOCKCYCLES(2,0x80041D58);
ZZ_41D10_48:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80015C4C,ZZ_15A04_248);
	ZZ_JUMPREGISTER(0x8001F4C0,ZZ_1F29C_224);
	ZZ_JUMPREGISTER(0x80031560,ZZ_31514_4C);
	ZZ_JUMPREGISTER(0x80031504,ZZ_31498_6C);
	ZZ_JUMPREGISTER(0x8002A0C4,ZZ_29FA4_120);
	ZZ_JUMPREGISTER(0x80021D40,ZZ_21C64_DC);
	ZZ_JUMPREGISTER(0x800220C0,ZZ_21C64_45C);
	ZZ_JUMPREGISTER(0x8001B510,ZZ_1AD30_7E0);
	ZZ_JUMPREGISTER(0x8001D7E8,ZZ_1D4E0_308);
	ZZ_JUMPREGISTER(0x8001B330,ZZ_1AD30_600);
	ZZ_JUMPREGISTER_END();
ZZ_41D10_108:
	V0 = GTE_GetDataRegister(17);
	T8 = GTE_GetDataRegister(18);
	T9 = GTE_GetDataRegister(19);
	if ((int32_t)V0 <= 0)
	{
		V0 += T8;
		ZZ_CLOCKCYCLES(5,0x80041FA4);
		goto ZZ_41D10_294;
	}
	V0 += T8;
	if ((int32_t)T8 <= 0)
	{
		V0 += T9;
		ZZ_CLOCKCYCLES(7,0x80041FA4);
		goto ZZ_41D10_294;
	}
	V0 += T9;
	GTE_Execute(20971526);
	if ((int32_t)T9 <= 0)
	{
		A3 = EMU_ReadU32(V1 + 236); //+ 0xEC
		ZZ_CLOCKCYCLES(10,0x80041FA4);
		goto ZZ_41D10_294;
	}
	A3 = EMU_ReadU32(V1 + 236); //+ 0xEC
	T8 = EMU_ReadU32(V1 + 240); //+ 0xF0
	V0 >>= 5;
	V0 = T8 - V0;
	T9 = T0 << 2;
	T8 = GTE_GetDataRegister(24);
	T9 ^= A3;
	if (!T8)
	{
		T9 ^= T8;
		ZZ_CLOCKCYCLES(18,0x80041FA4);
		goto ZZ_41D10_294;
	}
	T9 ^= T8;
	T8 = T0 << 3;
	if ((int32_t)T8 >= 0)
	{
		ZZ_CLOCKCYCLES(21,0x80041E70);
		goto ZZ_41D10_160;
	}
	if ((int32_t)T9 <= 0)
	{
		EMU_Write32(V1 + 268,A2); //+ 0x10C
		ZZ_CLOCKCYCLES(23,0x80041FA4);
		goto ZZ_41D10_294;
	}
	ZZ_CLOCKCYCLES(22,0x80041E70);
ZZ_41D10_160:
	EMU_Write32(V1 + 268,A2); //+ 0x10C
	T9 = GTE_GetDataRegister(12);
	A0 = GTE_GetDataRegister(13);
	A1 = GTE_GetDataRegister(14);
	T8 = T9 & A0;
	A2 = T8 & A1;
	T8 = 0x1010000;
	T8 |= 0x200;
	T9 = T9 - T8;
	A0 = A0 - T8;
	A1 = A1 - T8;
	T8 = T9 | A0;
	T8 = ~(T8 | A1);
	T8 |= A2;
	if ((int32_t)T8 < 0)
	{
		T8 <<= 16;
		ZZ_CLOCKCYCLES(16,0x80041FA4);
		goto ZZ_41D10_294;
	}
	T8 <<= 16;
	if ((int32_t)T8 < 0)
	{
		A2 = EMU_ReadU32(V1 + 268); //+ 0x10C
		ZZ_CLOCKCYCLES(18,0x80041FA4);
		goto ZZ_41D10_294;
	}
	A2 = EMU_ReadU32(V1 + 268); //+ 0x10C
	A1 = A3 & 0xFFFF;
	GTE_SetDataRegister(20,T5);
	GTE_SetDataRegister(21,T6);
	GTE_SetDataRegister(22,T7);
	GTE_SetDataRegister(8,A1);
	T9 = T0 << 7;
	if ((int32_t)T9 < 0)
	{
		A0 = EMU_ReadU32(V1 + 112); //+ 0x70
		ZZ_CLOCKCYCLES(26,0x80041EE4);
		goto ZZ_41D10_1D4;
	}
	A0 = EMU_ReadU32(V1 + 112); //+ 0x70
	if (!A1)
	{
		ZZ_CLOCKCYCLES(28,0x80041EE4);
		goto ZZ_41D10_1D4;
	}
	GTE_Execute(16252970);
	ZZ_CLOCKCYCLES(29,0x80041EE4);
ZZ_41D10_1D4:
	if ((int32_t)V0 >= 0)
	{
		V0 <<= 2;
		ZZ_CLOCKCYCLES(2,0x80041EF0);
		goto ZZ_41D10_1E0;
	}
	V0 <<= 2;
	V0 = 0;
	ZZ_CLOCKCYCLES(3,0x80041EF0);
ZZ_41D10_1E0:
	T8 = EMU_CheckedAdd(V0,-8188);
	if ((int32_t)T8 <= 0)
	{
		V0 += FP;
		ZZ_CLOCKCYCLES(3,0x80041F00);
		goto ZZ_41D10_1F0;
	}
	V0 += FP;
	V0 = EMU_CheckedAdd(FP,8188);
	ZZ_CLOCKCYCLES(4,0x80041F00);
ZZ_41D10_1F0:
	if (A2)
	{
		T8 = 0x30000000;
		ZZ_CLOCKCYCLES(2,0x80041F34);
		goto ZZ_41D10_224;
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
	ZZ_CLOCKCYCLES(13,0x80041F88);
	goto ZZ_41D10_278;
ZZ_41D10_224:
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
		ZZ_CLOCKCYCLES(14,0x80041F70);
		goto ZZ_41D10_260;
	}
	T8 = 0x34000000;
	T8 = 0x36000000;
	ZZ_CLOCKCYCLES(15,0x80041F70);
ZZ_41D10_260:
	T8 |= A0;
	EMU_Write32(S7 + 4,T8); //+ 0x4
	EMU_Write32(S7 + 16,GTE_GetDataRegister(21)); //+ 0x10
	EMU_Write32(S7 + 28,GTE_GetDataRegister(22)); //+ 0x1C
	A0 = 40;
	T9 = 0x9000000;
	ZZ_CLOCKCYCLES(6,0x80041F88);
ZZ_41D10_278:
	T8 = EMU_ReadU32(V0 + 24); //+ 0x18
	A1 = S7 << 8;
	T8 |= T9;
	EMU_Write32(S7,T8);
	A1 >>= 8;
	EMU_Write32(V0 + 24,A1); //+ 0x18
	S7 += A0;
	ZZ_CLOCKCYCLES(7,0x80041FA4);
ZZ_41D10_294:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80015C4C,ZZ_15A04_248);
	ZZ_JUMPREGISTER(0x8001F4C0,ZZ_1F29C_224);
	ZZ_JUMPREGISTER(0x80031560,ZZ_31514_4C);
	ZZ_JUMPREGISTER(0x80031504,ZZ_31498_6C);
	ZZ_JUMPREGISTER(0x8002A0C4,ZZ_29FA4_120);
	ZZ_JUMPREGISTER(0x80021D40,ZZ_21C64_DC);
	ZZ_JUMPREGISTER(0x800220C0,ZZ_21C64_45C);
	ZZ_JUMPREGISTER(0x8001B510,ZZ_1AD30_7E0);
	ZZ_JUMPREGISTER(0x8001D7E8,ZZ_1D4E0_308);
	ZZ_JUMPREGISTER(0x8001B330,ZZ_1AD30_600);
	ZZ_JUMPREGISTER_END();
ZZ_41D10_29C:
	EMU_Write32(V1 + 100,RA); //+ 0x64
	A3 = EMU_ReadU32(V1 + 280); //+ 0x118
	V0 = EMU_ReadU32(V1 + 284); //+ 0x11C
	GTE_SetDataRegister(0,A3);
	GTE_SetDataRegister(1,V0);
	T8 = EMU_CheckedAdd(A3,1020);
	T8 &= T2;
	GTE_SetDataRegister(2,T8);
	GTE_SetDataRegister(3,V0);
	T9 = 0x3FC0000;
	T8 += T9;
	GTE_SetDataRegister(4,T8);
	GTE_SetDataRegister(5,V0);
	T8 = A3 + T9;
	GTE_Execute(2621488);
	A0 = GTE_GetDataRegister(12);
	A1 = GTE_GetDataRegister(17);
	RA = 0x80041FFC; //ZZ_41D10_2EC
	ZZ_CLOCKCYCLES(20,0x800420B8);
	goto ZZ_420B8;
ZZ_41D10_2EC:
	A0 = GTE_GetDataRegister(13);
	A1 = GTE_GetDataRegister(18);
	RA = 0x8004200C; //ZZ_41D10_2FC
	ZZ_CLOCKCYCLES(4,0x800420B8);
	goto ZZ_420B8;
ZZ_41D10_2FC:
	A0 = GTE_GetDataRegister(14);
	A1 = GTE_GetDataRegister(19);
	RA = 0x8004201C; //ZZ_41D10_30C
	ZZ_CLOCKCYCLES(4,0x800420B8);
	goto ZZ_420B8;
ZZ_41D10_30C:
	GTE_SetDataRegister(0,T8);
	GTE_SetDataRegister(2,T8);
	T8 = EMU_CheckedAdd(V0,1020);
	GTE_SetDataRegister(3,T8);
	GTE_SetDataRegister(4,A3);
	GTE_SetDataRegister(5,T8);
	T8 = EMU_CheckedAdd(A3,1020);
	T8 &= T2;
	GTE_Execute(2621488);
	A0 = GTE_GetDataRegister(12);
	A1 = GTE_GetDataRegister(17);
	RA = 0x80042050; //ZZ_41D10_340
	ZZ_CLOCKCYCLES(13,0x800420B8);
	goto ZZ_420B8;
ZZ_41D10_340:
	A0 = GTE_GetDataRegister(13);
	A1 = GTE_GetDataRegister(18);
	RA = 0x80042060; //ZZ_41D10_350
	ZZ_CLOCKCYCLES(4,0x800420B8);
	goto ZZ_420B8;
ZZ_41D10_350:
	A0 = GTE_GetDataRegister(14);
	A1 = GTE_GetDataRegister(19);
	RA = 0x80042070; //ZZ_41D10_360
	ZZ_CLOCKCYCLES(4,0x800420B8);
	goto ZZ_420B8;
ZZ_41D10_360:
	GTE_SetDataRegister(2,T8);
	T8 += T9;
	GTE_SetDataRegister(4,T8);
	GTE_Execute(2621488);
	A0 = GTE_GetDataRegister(13);
	A1 = GTE_GetDataRegister(18);
	RA = 0x80042098; //ZZ_41D10_388
	ZZ_CLOCKCYCLES(10,0x800420B8);
	goto ZZ_420B8;
ZZ_41D10_388:
	A0 = GTE_GetDataRegister(14);
	A1 = GTE_GetDataRegister(19);
	RA = 0x800420A8; //ZZ_41D10_398
	ZZ_CLOCKCYCLES(4,0x800420B8);
	goto ZZ_420B8;
ZZ_41D10_398:
	RA = EMU_ReadU32(V1 + 100); //+ 0x64
	T8 = -1;
	ZZ_CLOCKCYCLES(2,0x800420B0);
ZZ_41D10_3A0:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80015C4C,ZZ_15A04_248);
	ZZ_JUMPREGISTER(0x8001F4C0,ZZ_1F29C_224);
	ZZ_JUMPREGISTER(0x80031560,ZZ_31514_4C);
	ZZ_JUMPREGISTER(0x80031504,ZZ_31498_6C);
	ZZ_JUMPREGISTER(0x8002A0C4,ZZ_29FA4_120);
	ZZ_JUMPREGISTER(0x80021D40,ZZ_21C64_DC);
	ZZ_JUMPREGISTER(0x800220C0,ZZ_21C64_45C);
	ZZ_JUMPREGISTER(0x8001B510,ZZ_1AD30_7E0);
	ZZ_JUMPREGISTER(0x8001D7E8,ZZ_1D4E0_308);
	ZZ_JUMPREGISTER(0x8001B330,ZZ_1AD30_600);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80041D10,ZZ_41D10);
ZZ_MARK(0x80041D14);
ZZ_MARK(0x80041D18);
ZZ_MARK(0x80041D1C);
ZZ_MARK(0x80041D20);
ZZ_MARK_TARGET(0x80041D24,ZZ_41D10_14);
ZZ_MARK(0x80041D28);
ZZ_MARK(0x80041D2C);
ZZ_MARK(0x80041D30);
ZZ_MARK(0x80041D34);
ZZ_MARK(0x80041D38);
ZZ_MARK(0x80041D3C);
ZZ_MARK(0x80041D40);
ZZ_MARK(0x80041D44);
ZZ_MARK(0x80041D48);
ZZ_MARK_TARGET(0x80041D4C,ZZ_41D10_3C);
ZZ_MARK_TARGET(0x80041D50,ZZ_41D10_40);
ZZ_MARK(0x80041D54);
ZZ_MARK_TARGET(0x80041D58,ZZ_41D10_48);
ZZ_MARK(0x80041D5C);
ZZ_MARK_TARGET(0x80041E18,ZZ_41D10_108);
ZZ_MARK(0x80041E1C);
ZZ_MARK(0x80041E20);
ZZ_MARK(0x80041E24);
ZZ_MARK(0x80041E28);
ZZ_MARK(0x80041E2C);
ZZ_MARK(0x80041E30);
ZZ_MARK(0x80041E34);
ZZ_MARK(0x80041E38);
ZZ_MARK(0x80041E3C);
ZZ_MARK(0x80041E40);
ZZ_MARK(0x80041E44);
ZZ_MARK(0x80041E48);
ZZ_MARK(0x80041E4C);
ZZ_MARK(0x80041E50);
ZZ_MARK(0x80041E54);
ZZ_MARK(0x80041E58);
ZZ_MARK(0x80041E5C);
ZZ_MARK(0x80041E60);
ZZ_MARK(0x80041E64);
ZZ_MARK(0x80041E68);
ZZ_MARK(0x80041E6C);
ZZ_MARK_TARGET(0x80041E70,ZZ_41D10_160);
ZZ_MARK(0x80041E74);
ZZ_MARK(0x80041E78);
ZZ_MARK(0x80041E7C);
ZZ_MARK(0x80041E80);
ZZ_MARK(0x80041E84);
ZZ_MARK(0x80041E88);
ZZ_MARK(0x80041E8C);
ZZ_MARK(0x80041E90);
ZZ_MARK(0x80041E94);
ZZ_MARK(0x80041E98);
ZZ_MARK(0x80041E9C);
ZZ_MARK(0x80041EA0);
ZZ_MARK(0x80041EA4);
ZZ_MARK(0x80041EA8);
ZZ_MARK(0x80041EAC);
ZZ_MARK(0x80041EB0);
ZZ_MARK(0x80041EB4);
ZZ_MARK(0x80041EB8);
ZZ_MARK(0x80041EBC);
ZZ_MARK(0x80041EC0);
ZZ_MARK(0x80041EC4);
ZZ_MARK(0x80041EC8);
ZZ_MARK(0x80041ECC);
ZZ_MARK(0x80041ED0);
ZZ_MARK(0x80041ED4);
ZZ_MARK(0x80041ED8);
ZZ_MARK(0x80041EDC);
ZZ_MARK(0x80041EE0);
ZZ_MARK_TARGET(0x80041EE4,ZZ_41D10_1D4);
ZZ_MARK(0x80041EE8);
ZZ_MARK(0x80041EEC);
ZZ_MARK_TARGET(0x80041EF0,ZZ_41D10_1E0);
ZZ_MARK(0x80041EF4);
ZZ_MARK(0x80041EF8);
ZZ_MARK(0x80041EFC);
ZZ_MARK_TARGET(0x80041F00,ZZ_41D10_1F0);
ZZ_MARK(0x80041F04);
ZZ_MARK(0x80041F08);
ZZ_MARK(0x80041F0C);
ZZ_MARK(0x80041F10);
ZZ_MARK(0x80041F14);
ZZ_MARK(0x80041F18);
ZZ_MARK(0x80041F1C);
ZZ_MARK(0x80041F20);
ZZ_MARK(0x80041F24);
ZZ_MARK(0x80041F28);
ZZ_MARK(0x80041F2C);
ZZ_MARK(0x80041F30);
ZZ_MARK_TARGET(0x80041F34,ZZ_41D10_224);
ZZ_MARK(0x80041F38);
ZZ_MARK(0x80041F3C);
ZZ_MARK(0x80041F40);
ZZ_MARK(0x80041F44);
ZZ_MARK(0x80041F48);
ZZ_MARK(0x80041F4C);
ZZ_MARK(0x80041F50);
ZZ_MARK(0x80041F54);
ZZ_MARK(0x80041F58);
ZZ_MARK(0x80041F5C);
ZZ_MARK(0x80041F60);
ZZ_MARK(0x80041F64);
ZZ_MARK(0x80041F68);
ZZ_MARK(0x80041F6C);
ZZ_MARK_TARGET(0x80041F70,ZZ_41D10_260);
ZZ_MARK(0x80041F74);
ZZ_MARK(0x80041F78);
ZZ_MARK(0x80041F7C);
ZZ_MARK(0x80041F80);
ZZ_MARK(0x80041F84);
ZZ_MARK_TARGET(0x80041F88,ZZ_41D10_278);
ZZ_MARK(0x80041F8C);
ZZ_MARK(0x80041F90);
ZZ_MARK(0x80041F94);
ZZ_MARK(0x80041F98);
ZZ_MARK(0x80041F9C);
ZZ_MARK(0x80041FA0);
ZZ_MARK_TARGET(0x80041FA4,ZZ_41D10_294);
ZZ_MARK(0x80041FA8);
ZZ_MARK_TARGET(0x80041FAC,ZZ_41D10_29C);
ZZ_MARK(0x80041FB0);
ZZ_MARK(0x80041FB4);
ZZ_MARK(0x80041FB8);
ZZ_MARK(0x80041FBC);
ZZ_MARK(0x80041FC0);
ZZ_MARK(0x80041FC4);
ZZ_MARK(0x80041FC8);
ZZ_MARK(0x80041FCC);
ZZ_MARK(0x80041FD0);
ZZ_MARK(0x80041FD4);
ZZ_MARK(0x80041FD8);
ZZ_MARK(0x80041FDC);
ZZ_MARK(0x80041FE0);
ZZ_MARK(0x80041FE4);
ZZ_MARK(0x80041FE8);
ZZ_MARK(0x80041FEC);
ZZ_MARK(0x80041FF0);
ZZ_MARK(0x80041FF4);
ZZ_MARK(0x80041FF8);
ZZ_MARK_TARGET(0x80041FFC,ZZ_41D10_2EC);
ZZ_MARK(0x80042000);
ZZ_MARK(0x80042004);
ZZ_MARK(0x80042008);
ZZ_MARK_TARGET(0x8004200C,ZZ_41D10_2FC);
ZZ_MARK(0x80042010);
ZZ_MARK(0x80042014);
ZZ_MARK(0x80042018);
ZZ_MARK_TARGET(0x8004201C,ZZ_41D10_30C);
ZZ_MARK(0x80042020);
ZZ_MARK(0x80042024);
ZZ_MARK(0x80042028);
ZZ_MARK(0x8004202C);
ZZ_MARK(0x80042030);
ZZ_MARK(0x80042034);
ZZ_MARK(0x80042038);
ZZ_MARK(0x8004203C);
ZZ_MARK(0x80042040);
ZZ_MARK(0x80042044);
ZZ_MARK(0x80042048);
ZZ_MARK(0x8004204C);
ZZ_MARK_TARGET(0x80042050,ZZ_41D10_340);
ZZ_MARK(0x80042054);
ZZ_MARK(0x80042058);
ZZ_MARK(0x8004205C);
ZZ_MARK_TARGET(0x80042060,ZZ_41D10_350);
ZZ_MARK(0x80042064);
ZZ_MARK(0x80042068);
ZZ_MARK(0x8004206C);
ZZ_MARK_TARGET(0x80042070,ZZ_41D10_360);
ZZ_MARK(0x80042074);
ZZ_MARK(0x80042078);
ZZ_MARK(0x8004207C);
ZZ_MARK(0x80042080);
ZZ_MARK(0x80042084);
ZZ_MARK(0x80042088);
ZZ_MARK(0x8004208C);
ZZ_MARK(0x80042090);
ZZ_MARK(0x80042094);
ZZ_MARK_TARGET(0x80042098,ZZ_41D10_388);
ZZ_MARK(0x8004209C);
ZZ_MARK(0x800420A0);
ZZ_MARK(0x800420A4);
ZZ_MARK_TARGET(0x800420A8,ZZ_41D10_398);
ZZ_MARK(0x800420AC);
ZZ_MARK_TARGET(0x800420B0,ZZ_41D10_3A0);
ZZ_MARK(0x800420B4);
