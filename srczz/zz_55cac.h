#ifdef ZZ_INCLUDE_CODE
ZZ_55CAC:
	SP -= 32;
	V0 = A0 << 16;
	V1 = 0x80070000;
	V1 -= 15268;
	V0 = (int32_t)V0 >> 14;
	A3 = V0 + V1;
	V1 = A1 << 16;
	V1 = (int32_t)V1 >> 16;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 = V0 - V1;
	A2 = V0 << 4;
	EMU_Write32(SP + 24,S2); //+ 0x18
	S2 = A0;
	EMU_Write32(SP + 28,RA); //+ 0x1C
	EMU_Write32(SP + 20,S1); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	V1 = EMU_ReadU32(A3);
	S1 = A1;
	S0 = V1 + A2;
	V0 = EMU_ReadU8(S0 + 33); //+ 0x21
	V1 = EMU_ReadU8(S0 + 32); //+ 0x20
	V0 += 1;
	if (V1)
	{
		EMU_Write8(S0 + 33,V0); //+ 0x21
		ZZ_CLOCKCYCLES(26,0x80055D58);
		goto ZZ_55CAC_AC;
	}
	EMU_Write8(S0 + 33,V0); //+ 0x21
	EMU_Write32(S0 + 136,R0); //+ 0x88
	EMU_Write8(S0 + 28,R0); //+ 0x1C
	EMU_Write32(S0 + 144,R0); //+ 0x90
	V0 = EMU_ReadU32(A3);
	V0 += A2;
	V0 = EMU_ReadU32(V0 + 152); //+ 0x98
	V0 &= 0x400;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(37,0x80055D4C);
		goto ZZ_55CAC_A0;
	}
	V0 = EMU_ReadU32(S0 + 12); //+ 0xC
	EMU_Write32(S0,V0);
	ZZ_CLOCKCYCLES(40,0x80055ED4);
	goto ZZ_55CAC_228;
ZZ_55CAC_A0:
	V0 = EMU_ReadU32(S0 + 4); //+ 0x4
	EMU_Write32(S0,V0);
	ZZ_CLOCKCYCLES(3,0x80055ED4);
	goto ZZ_55CAC_228;
ZZ_55CAC_AC:
	V0 &= 0xFF;
	V0 = V0 < V1;
	if (!V0)
	{
		A0 = -2;
		ZZ_CLOCKCYCLES(4,0x80055DB8);
		goto ZZ_55CAC_10C;
	}
	A0 = -2;
	EMU_Write32(S0 + 136,R0); //+ 0x88
	EMU_Write8(S0 + 28,R0); //+ 0x1C
	EMU_Write32(S0 + 144,R0); //+ 0x90
	V0 = EMU_ReadU32(A3);
	V0 += A2;
	V0 = EMU_ReadU32(V0 + 152); //+ 0x98
	V0 &= 0x400;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(15,0x80055DA4);
		goto ZZ_55CAC_F8;
	}
	V0 = EMU_ReadU32(S0 + 12); //+ 0xC
	V1 = EMU_ReadU32(S0 + 12); //+ 0xC
	EMU_Write32(S0,V0);
	ZZ_CLOCKCYCLES(19,0x80055DB0);
	goto ZZ_55CAC_104;
ZZ_55CAC_F8:
	V0 = EMU_ReadU32(S0 + 4); //+ 0x4
	V1 = EMU_ReadU32(S0 + 4); //+ 0x4
	EMU_Write32(S0,V0);
	ZZ_CLOCKCYCLES(3,0x80055DB0);
ZZ_55CAC_104:
	EMU_Write32(S0 + 8,V1); //+ 0x8
	ZZ_CLOCKCYCLES(2,0x80055ED4);
	goto ZZ_55CAC_228;
ZZ_55CAC_10C:
	V1 = EMU_ReadU32(A3);
	V1 += A2;
	V0 = EMU_ReadU32(V1 + 152); //+ 0x98
	V0 &= A0;
	EMU_Write32(V1 + 152,V0); //+ 0x98
	V1 = EMU_ReadU32(A3);
	V1 += A2;
	V0 = EMU_ReadU32(V1 + 152); //+ 0x98
	A0 = -9;
	V0 &= A0;
	EMU_Write32(V1 + 152,V0); //+ 0x98
	V1 = EMU_ReadU32(A3);
	V1 += A2;
	V0 = EMU_ReadU32(V1 + 152); //+ 0x98
	A0 = -3;
	V0 &= A0;
	EMU_Write32(V1 + 152,V0); //+ 0x98
	V1 = EMU_ReadU32(A3);
	V1 += A2;
	V0 = EMU_ReadU32(V1 + 152); //+ 0x98
	V0 |= 0x200;
	EMU_Write32(V1 + 152,V0); //+ 0x98
	V1 = EMU_ReadU32(A3);
	V1 += A2;
	V0 = EMU_ReadU32(V1 + 152); //+ 0x98
	V0 |= 0x4;
	EMU_Write32(V1 + 152,V0); //+ 0x98
	EMU_Write8(S0 + 20,R0); //+ 0x14
	V0 = EMU_ReadU32(A3);
	V0 += A2;
	V0 = EMU_ReadU32(V0 + 152); //+ 0x98
	V0 &= 0x400;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(44,0x80055E74);
		goto ZZ_55CAC_1C8;
	}
	V0 = EMU_ReadU32(S0 + 12); //+ 0xC
	EMU_Write32(S0 + 8,V0); //+ 0x8
	ZZ_CLOCKCYCLES(47,0x80055E80);
	goto ZZ_55CAC_1D4;
ZZ_55CAC_1C8:
	V0 = EMU_ReadU32(S0 + 4); //+ 0x4
	EMU_Write32(S0 + 8,V0); //+ 0x8
	ZZ_CLOCKCYCLES(3,0x80055E80);
ZZ_55CAC_1D4:
	V1 = EMU_ReadU8(S0 + 34); //+ 0x22
	V0 = 255;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(4,0x80055EB4);
		goto ZZ_55CAC_208;
	}
	A0 = EMU_ReadU8(S0 + 34); //+ 0x22
	A1 = EMU_ReadU8(S0 + 35); //+ 0x23
	RA = 0x80055EA0; //ZZ_55CAC_1F4
	EMU_Write8(S0 + 20,R0); //+ 0x14
	ZZ_CLOCKCYCLES(8,0x80056294);
	goto ZZ_56294;
ZZ_55CAC_1F4:
	A0 = S1 << 8;
	A0 |= S2;
	A0 <<= 16;
	RA = 0x80055EB4; //ZZ_55CAC_208
	A0 = (int32_t)A0 >> 16;
	ZZ_CLOCKCYCLES(5,0x80059ED0);
	goto ZZ_59ED0;
ZZ_55CAC_208:
	A0 = S1 << 8;
	A0 |= S2;
	A0 <<= 16;
	RA = 0x80055EC8; //ZZ_55CAC_21C
	A0 = (int32_t)A0 >> 16;
	ZZ_CLOCKCYCLES(5,0x80059ED0);
	goto ZZ_59ED0;
ZZ_55CAC_21C:
	V0 = EMU_ReadS16(S0 + 84); //+ 0x54
	EMU_Write32(S0 + 144,V0); //+ 0x90
	ZZ_CLOCKCYCLES(3,0x80055ED4);
ZZ_55CAC_228:
	RA = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x80055FA4,ZZ_55EF0_B4);
	ZZ_JUMPREGISTER(0x80056240,ZZ_55EF0_350);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80055CAC,ZZ_55CAC);
ZZ_MARK(0x80055CB0);
ZZ_MARK(0x80055CB4);
ZZ_MARK(0x80055CB8);
ZZ_MARK(0x80055CBC);
ZZ_MARK(0x80055CC0);
ZZ_MARK(0x80055CC4);
ZZ_MARK(0x80055CC8);
ZZ_MARK(0x80055CCC);
ZZ_MARK(0x80055CD0);
ZZ_MARK(0x80055CD4);
ZZ_MARK(0x80055CD8);
ZZ_MARK(0x80055CDC);
ZZ_MARK(0x80055CE0);
ZZ_MARK(0x80055CE4);
ZZ_MARK(0x80055CE8);
ZZ_MARK(0x80055CEC);
ZZ_MARK(0x80055CF0);
ZZ_MARK(0x80055CF4);
ZZ_MARK(0x80055CF8);
ZZ_MARK(0x80055CFC);
ZZ_MARK(0x80055D00);
ZZ_MARK(0x80055D04);
ZZ_MARK(0x80055D08);
ZZ_MARK(0x80055D0C);
ZZ_MARK(0x80055D10);
ZZ_MARK(0x80055D14);
ZZ_MARK(0x80055D18);
ZZ_MARK(0x80055D1C);
ZZ_MARK(0x80055D20);
ZZ_MARK(0x80055D24);
ZZ_MARK(0x80055D28);
ZZ_MARK(0x80055D2C);
ZZ_MARK(0x80055D30);
ZZ_MARK(0x80055D34);
ZZ_MARK(0x80055D38);
ZZ_MARK(0x80055D3C);
ZZ_MARK(0x80055D40);
ZZ_MARK(0x80055D44);
ZZ_MARK(0x80055D48);
ZZ_MARK_TARGET(0x80055D4C,ZZ_55CAC_A0);
ZZ_MARK(0x80055D50);
ZZ_MARK(0x80055D54);
ZZ_MARK_TARGET(0x80055D58,ZZ_55CAC_AC);
ZZ_MARK(0x80055D5C);
ZZ_MARK(0x80055D60);
ZZ_MARK(0x80055D64);
ZZ_MARK(0x80055D68);
ZZ_MARK(0x80055D6C);
ZZ_MARK(0x80055D70);
ZZ_MARK(0x80055D74);
ZZ_MARK(0x80055D78);
ZZ_MARK(0x80055D7C);
ZZ_MARK(0x80055D80);
ZZ_MARK(0x80055D84);
ZZ_MARK(0x80055D88);
ZZ_MARK(0x80055D8C);
ZZ_MARK(0x80055D90);
ZZ_MARK(0x80055D94);
ZZ_MARK(0x80055D98);
ZZ_MARK(0x80055D9C);
ZZ_MARK(0x80055DA0);
ZZ_MARK_TARGET(0x80055DA4,ZZ_55CAC_F8);
ZZ_MARK(0x80055DA8);
ZZ_MARK(0x80055DAC);
ZZ_MARK_TARGET(0x80055DB0,ZZ_55CAC_104);
ZZ_MARK(0x80055DB4);
ZZ_MARK_TARGET(0x80055DB8,ZZ_55CAC_10C);
ZZ_MARK(0x80055DBC);
ZZ_MARK(0x80055DC0);
ZZ_MARK(0x80055DC4);
ZZ_MARK(0x80055DC8);
ZZ_MARK(0x80055DCC);
ZZ_MARK(0x80055DD0);
ZZ_MARK(0x80055DD4);
ZZ_MARK(0x80055DD8);
ZZ_MARK(0x80055DDC);
ZZ_MARK(0x80055DE0);
ZZ_MARK(0x80055DE4);
ZZ_MARK(0x80055DE8);
ZZ_MARK(0x80055DEC);
ZZ_MARK(0x80055DF0);
ZZ_MARK(0x80055DF4);
ZZ_MARK(0x80055DF8);
ZZ_MARK(0x80055DFC);
ZZ_MARK(0x80055E00);
ZZ_MARK(0x80055E04);
ZZ_MARK(0x80055E08);
ZZ_MARK(0x80055E0C);
ZZ_MARK(0x80055E10);
ZZ_MARK(0x80055E14);
ZZ_MARK(0x80055E18);
ZZ_MARK(0x80055E1C);
ZZ_MARK(0x80055E20);
ZZ_MARK(0x80055E24);
ZZ_MARK(0x80055E28);
ZZ_MARK(0x80055E2C);
ZZ_MARK(0x80055E30);
ZZ_MARK(0x80055E34);
ZZ_MARK(0x80055E38);
ZZ_MARK(0x80055E3C);
ZZ_MARK(0x80055E40);
ZZ_MARK(0x80055E44);
ZZ_MARK(0x80055E48);
ZZ_MARK(0x80055E4C);
ZZ_MARK(0x80055E50);
ZZ_MARK(0x80055E54);
ZZ_MARK(0x80055E58);
ZZ_MARK(0x80055E5C);
ZZ_MARK(0x80055E60);
ZZ_MARK(0x80055E64);
ZZ_MARK(0x80055E68);
ZZ_MARK(0x80055E6C);
ZZ_MARK(0x80055E70);
ZZ_MARK_TARGET(0x80055E74,ZZ_55CAC_1C8);
ZZ_MARK(0x80055E78);
ZZ_MARK(0x80055E7C);
ZZ_MARK_TARGET(0x80055E80,ZZ_55CAC_1D4);
ZZ_MARK(0x80055E84);
ZZ_MARK(0x80055E88);
ZZ_MARK(0x80055E8C);
ZZ_MARK(0x80055E90);
ZZ_MARK(0x80055E94);
ZZ_MARK(0x80055E98);
ZZ_MARK(0x80055E9C);
ZZ_MARK_TARGET(0x80055EA0,ZZ_55CAC_1F4);
ZZ_MARK(0x80055EA4);
ZZ_MARK(0x80055EA8);
ZZ_MARK(0x80055EAC);
ZZ_MARK(0x80055EB0);
ZZ_MARK_TARGET(0x80055EB4,ZZ_55CAC_208);
ZZ_MARK(0x80055EB8);
ZZ_MARK(0x80055EBC);
ZZ_MARK(0x80055EC0);
ZZ_MARK(0x80055EC4);
ZZ_MARK_TARGET(0x80055EC8,ZZ_55CAC_21C);
ZZ_MARK(0x80055ECC);
ZZ_MARK(0x80055ED0);
ZZ_MARK_TARGET(0x80055ED4,ZZ_55CAC_228);
ZZ_MARK(0x80055ED8);
ZZ_MARK(0x80055EDC);
ZZ_MARK(0x80055EE0);
ZZ_MARK(0x80055EE4);
ZZ_MARK(0x80055EE8);
ZZ_MARK(0x80055EEC);
