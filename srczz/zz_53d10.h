#ifdef ZZ_INCLUDE_CODE
ZZ_53D10:
	SP -= 24;
	A3 = A0;
	T0 = A1;
	A0 <<= 16;
	A0 = (int32_t)A0 >> 16;
	V1 = A0 << 2;
	A1 <<= 16;
	A1 = (int32_t)A1 >> 16;
	V0 = A1 << 1;
	V0 += A1;
	V0 <<= 2;
	V0 = V0 - A1;
	EMU_Write32(SP + 20,RA); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	AT = 0x80070000;
	AT += V1;
	V1 = EMU_ReadU32(AT - 15268); //+ 0xFFFFC45C
	V0 <<= 4;
	S0 = V1 + V0;
	V1 = A2 & 0xFF;
	V0 = 20;
	if (V1 == V0)
	{
		V0 = 30;
		ZZ_CLOCKCYCLES(23,0x80053D7C);
		goto ZZ_53D10_6C;
	}
	V0 = 30;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(25,0x80053D9C);
		goto ZZ_53D10_8C;
	}
	A0 = A3 << 16;
	ZZ_CLOCKCYCLES(27,0x80053E08);
	goto ZZ_53D10_F8;
ZZ_53D10_6C:
	V0 = 1;
	EMU_Write8(S0 + 27,A2); //+ 0x1B
	RA = 0x80053D8C; //ZZ_53D10_7C
	EMU_Write8(S0 + 28,V0); //+ 0x1C
	ZZ_CLOCKCYCLES(4,0x800545DC);
	goto ZZ_545DC;
ZZ_53D10_7C:
	V1 = EMU_ReadU32(S0);
	EMU_Write32(S0 + 144,V0); //+ 0x90
	EMU_Write32(S0 + 8,V1); //+ 0x8
	ZZ_CLOCKCYCLES(4,0x80053E30);
	goto ZZ_53D10_120;
ZZ_53D10_8C:
	V1 = EMU_ReadU8(S0 + 29); //+ 0x1D
	V0 = V1 & 0xFF;
	if (V0)
	{
		EMU_Write8(S0 + 27,A2); //+ 0x1B
		ZZ_CLOCKCYCLES(5,0x80053DB8);
		goto ZZ_53D10_A8;
	}
	EMU_Write8(S0 + 27,A2); //+ 0x1B
	EMU_Write8(S0 + 21,R0); //+ 0x15
	ZZ_CLOCKCYCLES(7,0x80053E24);
	goto ZZ_53D10_114;
ZZ_53D10_A8:
	V0 = V0 < 127;
	if (!V0)
	{
		V0 = V1 - 1;
		ZZ_CLOCKCYCLES(3,0x80053DF0);
		goto ZZ_53D10_E0;
	}
	V0 = V1 - 1;
	RA = 0x80053DCC; //ZZ_53D10_BC
	EMU_Write8(S0 + 29,V0); //+ 0x1D
	ZZ_CLOCKCYCLES(5,0x800545DC);
	goto ZZ_545DC;
ZZ_53D10_BC:
	V1 = EMU_ReadU8(S0 + 29); //+ 0x1D
	if (!V1)
	{
		EMU_Write32(S0 + 144,V0); //+ 0x90
		ZZ_CLOCKCYCLES(4,0x80053DE8);
		goto ZZ_53D10_D8;
	}
	EMU_Write32(S0 + 144,V0); //+ 0x90
	V0 = EMU_ReadU32(S0 + 8); //+ 0x8
	EMU_Write32(S0,V0);
	ZZ_CLOCKCYCLES(7,0x80053E30);
	goto ZZ_53D10_120;
ZZ_53D10_D8:
	EMU_Write8(S0 + 21,R0); //+ 0x15
	ZZ_CLOCKCYCLES(2,0x80053E30);
	goto ZZ_53D10_120;
ZZ_53D10_E0:
	RA = 0x80053DF8; //ZZ_53D10_E8
	ZZ_CLOCKCYCLES(2,0x800545DC);
	goto ZZ_545DC;
ZZ_53D10_E8:
	V0 = EMU_ReadU32(S0 + 8); //+ 0x8
	EMU_Write32(S0 + 144,R0); //+ 0x90
	EMU_Write32(S0,V0);
	ZZ_CLOCKCYCLES(4,0x80053E30);
	goto ZZ_53D10_120;
ZZ_53D10_F8:
	A0 = (int32_t)A0 >> 16;
	A1 = T0 << 16;
	V0 = EMU_ReadU8(S0 + 31); //+ 0x1F
	A1 = (int32_t)A1 >> 16;
	EMU_Write8(S0 + 27,A2); //+ 0x1B
	V0 += 1;
	EMU_Write8(S0 + 31,V0); //+ 0x1F
	ZZ_CLOCKCYCLES(7,0x80053E24);
ZZ_53D10_114:
	RA = 0x80053E2C; //ZZ_53D10_11C
	ZZ_CLOCKCYCLES(2,0x800545DC);
	goto ZZ_545DC;
ZZ_53D10_11C:
	EMU_Write32(S0 + 144,V0); //+ 0x90
	ZZ_CLOCKCYCLES(1,0x80053E30);
ZZ_53D10_120:
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80053D10,ZZ_53D10);
ZZ_MARK(0x80053D14);
ZZ_MARK(0x80053D18);
ZZ_MARK(0x80053D1C);
ZZ_MARK(0x80053D20);
ZZ_MARK(0x80053D24);
ZZ_MARK(0x80053D28);
ZZ_MARK(0x80053D2C);
ZZ_MARK(0x80053D30);
ZZ_MARK(0x80053D34);
ZZ_MARK(0x80053D38);
ZZ_MARK(0x80053D3C);
ZZ_MARK(0x80053D40);
ZZ_MARK(0x80053D44);
ZZ_MARK(0x80053D48);
ZZ_MARK(0x80053D4C);
ZZ_MARK(0x80053D50);
ZZ_MARK(0x80053D54);
ZZ_MARK(0x80053D58);
ZZ_MARK(0x80053D5C);
ZZ_MARK(0x80053D60);
ZZ_MARK(0x80053D64);
ZZ_MARK(0x80053D68);
ZZ_MARK(0x80053D6C);
ZZ_MARK(0x80053D70);
ZZ_MARK(0x80053D74);
ZZ_MARK(0x80053D78);
ZZ_MARK_TARGET(0x80053D7C,ZZ_53D10_6C);
ZZ_MARK(0x80053D80);
ZZ_MARK(0x80053D84);
ZZ_MARK(0x80053D88);
ZZ_MARK_TARGET(0x80053D8C,ZZ_53D10_7C);
ZZ_MARK(0x80053D90);
ZZ_MARK(0x80053D94);
ZZ_MARK(0x80053D98);
ZZ_MARK_TARGET(0x80053D9C,ZZ_53D10_8C);
ZZ_MARK(0x80053DA0);
ZZ_MARK(0x80053DA4);
ZZ_MARK(0x80053DA8);
ZZ_MARK(0x80053DAC);
ZZ_MARK(0x80053DB0);
ZZ_MARK(0x80053DB4);
ZZ_MARK_TARGET(0x80053DB8,ZZ_53D10_A8);
ZZ_MARK(0x80053DBC);
ZZ_MARK(0x80053DC0);
ZZ_MARK(0x80053DC4);
ZZ_MARK(0x80053DC8);
ZZ_MARK_TARGET(0x80053DCC,ZZ_53D10_BC);
ZZ_MARK(0x80053DD0);
ZZ_MARK(0x80053DD4);
ZZ_MARK(0x80053DD8);
ZZ_MARK(0x80053DDC);
ZZ_MARK(0x80053DE0);
ZZ_MARK(0x80053DE4);
ZZ_MARK_TARGET(0x80053DE8,ZZ_53D10_D8);
ZZ_MARK(0x80053DEC);
ZZ_MARK_TARGET(0x80053DF0,ZZ_53D10_E0);
ZZ_MARK(0x80053DF4);
ZZ_MARK_TARGET(0x80053DF8,ZZ_53D10_E8);
ZZ_MARK(0x80053DFC);
ZZ_MARK(0x80053E00);
ZZ_MARK(0x80053E04);
ZZ_MARK_TARGET(0x80053E08,ZZ_53D10_F8);
ZZ_MARK(0x80053E0C);
ZZ_MARK(0x80053E10);
ZZ_MARK(0x80053E14);
ZZ_MARK(0x80053E18);
ZZ_MARK(0x80053E1C);
ZZ_MARK(0x80053E20);
ZZ_MARK_TARGET(0x80053E24,ZZ_53D10_114);
ZZ_MARK(0x80053E28);
ZZ_MARK_TARGET(0x80053E2C,ZZ_53D10_11C);
ZZ_MARK_TARGET(0x80053E30,ZZ_53D10_120);
ZZ_MARK(0x80053E34);
ZZ_MARK(0x80053E38);
ZZ_MARK(0x80053E3C);
ZZ_MARK(0x80053E40);
