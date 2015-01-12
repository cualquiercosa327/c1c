#ifdef ZZ_INCLUDE_CODE
ZZ_19CF4:
	SP -= 40;
	EMU_Write32(SP + 28,S1); //+ 0x1C
	S1 = A0;
	EMU_Write32(SP + 32,S2); //+ 0x20
	S2 = A1;
	EMU_Write32(SP + 36,RA); //+ 0x24
	if (!S1)
	{
		EMU_Write32(SP + 24,S0); //+ 0x18
		ZZ_CLOCKCYCLES(8,0x80019E48);
		goto ZZ_19CF4_154;
	}
	EMU_Write32(SP + 24,S0); //+ 0x18
	V0 = EMU_ReadU32(GP + 528); //+ 0x210
	if (S1 == V0)
	{
		ZZ_CLOCKCYCLES(12,0x80019E48);
		goto ZZ_19CF4_154;
	}
	if (!S2)
	{
		A0 = R0;
		ZZ_CLOCKCYCLES(14,0x80019D40);
		goto ZZ_19CF4_4C;
	}
	A0 = R0;
	EMU_Write32(SP + 16,R0); //+ 0x10
	A1 = S1;
	A2 = 0x1A00;
	RA = 0x80019D40; //ZZ_19CF4_4C
	A3 = R0;
	ZZ_CLOCKCYCLES(19,0x8001CD48);
	goto ZZ_1CD48;
ZZ_19CF4_4C:
	A0 = EMU_ReadU32(S1 + 76); //+ 0x4C
	if (!A0)
	{
		ZZ_CLOCKCYCLES(4,0x80019D68);
		goto ZZ_19CF4_74;
	}
	ZZ_CLOCKCYCLES(4,0x80019D50);
ZZ_19CF4_5C:
	S0 = EMU_ReadU32(A0 + 72); //+ 0x48
	RA = 0x80019D5C; //ZZ_19CF4_68
	A1 = S2;
	ZZ_CLOCKCYCLES(3,0x80019CF4);
	goto ZZ_19CF4;
ZZ_19CF4_68:
	A0 = S0;
	if (A0)
	{
		ZZ_CLOCKCYCLES(3,0x80019D50);
		goto ZZ_19CF4_5C;
	}
	ZZ_CLOCKCYCLES(3,0x80019D68);
ZZ_19CF4_74:
	RA = 0x80019D70; //ZZ_19CF4_7C
	A0 = S1;
	ZZ_CLOCKCYCLES(2,0x80032B14);
	goto ZZ_32B14;
ZZ_19CF4_7C:
	V0 = EMU_ReadU32(S1 + 184); //+ 0xB8
	V1 = 0x80070000;
	V1 -= 19364;
	V0 = (int32_t)V0 >> 8;
	V0 <<= 2;
	V0 += V1;
	V1 = EMU_ReadU32(V0);
	A1 = EMU_ReadU32(GP + 528); //+ 0x210
	A0 = -2;
	V1 &= A0;
	EMU_Write32(V0,V1);
	if (S1 != A1)
	{
		EMU_Write32(S1,R0);
		ZZ_CLOCKCYCLES(13,0x80019E38);
		goto ZZ_19CF4_144;
	}
	EMU_Write32(S1,R0);
	V1 = 0x80070000;
	V1 = EMU_ReadU32(V1 - 12816); //+ 0xFFFFCDF0
	V0 = 0x2;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(18,0x80019DC8);
		goto ZZ_19CF4_D4;
	}
	S2 = 0x80070000;
	S2 = EMU_ReadU32(S2 - 12812); //+ 0xFFFFCDF4
	A0 = S1;
	ZZ_CLOCKCYCLES(22,0x80019DD4);
	goto ZZ_19CF4_E0;
ZZ_19CF4_D4:
	S2 = 0x80070000;
	S2 = EMU_ReadU32(S2 - 12740); //+ 0xFFFFCE3C
	A0 = S1;
	ZZ_CLOCKCYCLES(3,0x80019DD4);
ZZ_19CF4_E0:
	S0 = 0x80070000;
	S0 -= 12816;
	RA = 0x80019DE4; //ZZ_19CF4_F0
	A1 = S0;
	ZZ_CLOCKCYCLES(4,0x80018AF0);
	goto ZZ_18AF0;
ZZ_19CF4_F0:
	V1 = EMU_ReadU32(S0);
	V0 = 0x2;
	if (V1 != V0)
	{
		A0 = S0 + 76;
		ZZ_CLOCKCYCLES(4,0x80019DF8);
		goto ZZ_19CF4_104;
	}
	A0 = S0 + 76;
	A0 = S0 + 4;
	ZZ_CLOCKCYCLES(5,0x80019DF8);
ZZ_19CF4_104:
	EMU_Write32(A0,S2);
	V0 = 0x80070000;
	V0 = EMU_ReadU32(V0 - 12888); //+ 0xFFFFCDA8
	EMU_Write32(V0 + 68,R0); //+ 0x44
	V0 = 0x80070000;
	V0 = EMU_ReadU32(V0 - 12888); //+ 0xFFFFCDA8
	EMU_Write32(V0 + 76,R0); //+ 0x4C
	V0 = 0x80070000;
	V0 = EMU_ReadU32(V0 - 12888); //+ 0xFFFFCDA8
	EMU_Write32(V0 + 72,R0); //+ 0x48
	EMU_Write32(GP + 528,R0); //+ 0x210
	V0 = -255;
	ZZ_CLOCKCYCLES(16,0x80019E4C);
	goto ZZ_19CF4_158;
ZZ_19CF4_144:
	A1 = 0x80070000;
	A1 -= 12816;
	RA = 0x80019E48; //ZZ_19CF4_154
	A0 = S1;
	ZZ_CLOCKCYCLES(4,0x80018AF0);
	goto ZZ_18AF0;
ZZ_19CF4_154:
	V0 = -255;
	ZZ_CLOCKCYCLES(1,0x80019E4C);
ZZ_19CF4_158:
	RA = EMU_ReadU32(SP + 36); //+ 0x24
	S2 = EMU_ReadU32(SP + 32); //+ 0x20
	S1 = EMU_ReadU32(SP + 28); //+ 0x1C
	S0 = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 40;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x80019F50,ZZ_19F40_10);
	ZZ_JUMPREGISTER(0x80019D5C,ZZ_19CF4_68);
	ZZ_JUMPREGISTER(0x80018ED8,ZZ_18E4C_8C);
	ZZ_JUMPREGISTER(0x80018CCC,ZZ_18C74_58);
	ZZ_JUMPREGISTER(0x8001A53C,ZZ_1A374_1C8);
	ZZ_JUMPREGISTER(0x80018C10,ZZ_18BCC_44);
	ZZ_JUMPREGISTER(0x80019F1C,ZZ_19E68_B4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80019CF4,ZZ_19CF4);
ZZ_MARK(0x80019CF8);
ZZ_MARK(0x80019CFC);
ZZ_MARK(0x80019D00);
ZZ_MARK(0x80019D04);
ZZ_MARK(0x80019D08);
ZZ_MARK(0x80019D0C);
ZZ_MARK(0x80019D10);
ZZ_MARK(0x80019D14);
ZZ_MARK(0x80019D18);
ZZ_MARK(0x80019D1C);
ZZ_MARK(0x80019D20);
ZZ_MARK(0x80019D24);
ZZ_MARK(0x80019D28);
ZZ_MARK(0x80019D2C);
ZZ_MARK(0x80019D30);
ZZ_MARK(0x80019D34);
ZZ_MARK(0x80019D38);
ZZ_MARK(0x80019D3C);
ZZ_MARK_TARGET(0x80019D40,ZZ_19CF4_4C);
ZZ_MARK(0x80019D44);
ZZ_MARK(0x80019D48);
ZZ_MARK(0x80019D4C);
ZZ_MARK_TARGET(0x80019D50,ZZ_19CF4_5C);
ZZ_MARK(0x80019D54);
ZZ_MARK(0x80019D58);
ZZ_MARK_TARGET(0x80019D5C,ZZ_19CF4_68);
ZZ_MARK(0x80019D60);
ZZ_MARK(0x80019D64);
ZZ_MARK_TARGET(0x80019D68,ZZ_19CF4_74);
ZZ_MARK(0x80019D6C);
ZZ_MARK_TARGET(0x80019D70,ZZ_19CF4_7C);
ZZ_MARK(0x80019D74);
ZZ_MARK(0x80019D78);
ZZ_MARK(0x80019D7C);
ZZ_MARK(0x80019D80);
ZZ_MARK(0x80019D84);
ZZ_MARK(0x80019D88);
ZZ_MARK(0x80019D8C);
ZZ_MARK(0x80019D90);
ZZ_MARK(0x80019D94);
ZZ_MARK(0x80019D98);
ZZ_MARK(0x80019D9C);
ZZ_MARK(0x80019DA0);
ZZ_MARK(0x80019DA4);
ZZ_MARK(0x80019DA8);
ZZ_MARK(0x80019DAC);
ZZ_MARK(0x80019DB0);
ZZ_MARK(0x80019DB4);
ZZ_MARK(0x80019DB8);
ZZ_MARK(0x80019DBC);
ZZ_MARK(0x80019DC0);
ZZ_MARK(0x80019DC4);
ZZ_MARK_TARGET(0x80019DC8,ZZ_19CF4_D4);
ZZ_MARK(0x80019DCC);
ZZ_MARK(0x80019DD0);
ZZ_MARK_TARGET(0x80019DD4,ZZ_19CF4_E0);
ZZ_MARK(0x80019DD8);
ZZ_MARK(0x80019DDC);
ZZ_MARK(0x80019DE0);
ZZ_MARK_TARGET(0x80019DE4,ZZ_19CF4_F0);
ZZ_MARK(0x80019DE8);
ZZ_MARK(0x80019DEC);
ZZ_MARK(0x80019DF0);
ZZ_MARK(0x80019DF4);
ZZ_MARK_TARGET(0x80019DF8,ZZ_19CF4_104);
ZZ_MARK(0x80019DFC);
ZZ_MARK(0x80019E00);
ZZ_MARK(0x80019E04);
ZZ_MARK(0x80019E08);
ZZ_MARK(0x80019E0C);
ZZ_MARK(0x80019E10);
ZZ_MARK(0x80019E14);
ZZ_MARK(0x80019E18);
ZZ_MARK(0x80019E1C);
ZZ_MARK(0x80019E20);
ZZ_MARK(0x80019E24);
ZZ_MARK(0x80019E28);
ZZ_MARK(0x80019E2C);
ZZ_MARK(0x80019E30);
ZZ_MARK(0x80019E34);
ZZ_MARK_TARGET(0x80019E38,ZZ_19CF4_144);
ZZ_MARK(0x80019E3C);
ZZ_MARK(0x80019E40);
ZZ_MARK(0x80019E44);
ZZ_MARK_TARGET(0x80019E48,ZZ_19CF4_154);
ZZ_MARK_TARGET(0x80019E4C,ZZ_19CF4_158);
ZZ_MARK(0x80019E50);
ZZ_MARK(0x80019E54);
ZZ_MARK(0x80019E58);
ZZ_MARK(0x80019E5C);
ZZ_MARK(0x80019E60);
ZZ_MARK(0x80019E64);
