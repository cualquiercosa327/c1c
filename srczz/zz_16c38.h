#ifdef ZZ_INCLUDE_CODE
ZZ_16C38:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 14064); //+ 0x36F0
	SP -= 40;
	EMU_Write32(SP + 36,RA); //+ 0x24
	EMU_Write32(SP + 32,S2); //+ 0x20
	EMU_Write32(SP + 28,S1); //+ 0x1C
	EMU_Write32(SP + 24,S0); //+ 0x18
	S1 = EMU_ReadU32(V1 + 8); //+ 0x8
	V0 = S1 + 12;
	EMU_Write32(V1 + 8,V0); //+ 0x8
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 14064); //+ 0x36F0
	S0 = EMU_ReadU32(V1 + 8); //+ 0x8
	A2 = A0;
	V0 = S0 + 24;
	if (!A2)
	{
		EMU_Write32(V1 + 8,V0); //+ 0x8
		ZZ_CLOCKCYCLES(19,0x80016D68);
		goto ZZ_16C38_130;
	}
	EMU_Write32(V1 + 8,V0); //+ 0x8
	V0 = A2 >> 4;
	V1 = 0x80060000;
	V1 -= 18536;
	V0 += V1;
	A1 = EMU_ReadU8(V0);
	V0 = EMU_ReadU8(V0 + 1); //+ 0x1
	V1 = A2 & 0xF;
	V0 = V0 - A1;
	EMU_SMultiply(V0,V1);
	A0 = S0;
	EMU_Write16(S0 + 8,R0); //+ 0x8
	EMU_Write16(S0 + 10,R0); //+ 0xA
	EMU_Write16(S0 + 14,R0); //+ 0xE
	EMU_Write16(S0 + 16,R0); //+ 0x10
	V1 = 0x200;
	V0 = 0x100;
	EMU_Write16(S0 + 12,V1); //+ 0xC
	EMU_Write16(S0 + 18,V0); //+ 0x12
	EMU_Write16(S0 + 20,V1); //+ 0x14
	EMU_Write16(S0 + 22,V0); //+ 0x16
	T0 = LO;
	V0 = T0 >> 4;
	A2 = V0 + A1;
	EMU_Write8(S0 + 4,A2); //+ 0x4
	EMU_Write8(S0 + 5,A2); //+ 0x5
	RA = 0x80016CF0; //ZZ_16C38_B8
	EMU_Write8(S0 + 6,A2); //+ 0x6
	ZZ_CLOCKCYCLES(46,0x8004B9A8);
	goto ZZ_4B9A8;
ZZ_16C38_B8:
	A0 = S0;
	RA = 0x80016CFC; //ZZ_16C38_C4
	A1 = 0x1;
	ZZ_CLOCKCYCLES(3,0x8004B908);
	goto ZZ_4B908;
ZZ_16C38_C4:
	S2 = 0x80060000;
	S2 += 14064;
	A0 = EMU_ReadU32(S2);
	A1 = S0;
	RA = 0x80016D14; //ZZ_16C38_DC
	A0 += 8212;
	ZZ_CLOCKCYCLES(6,0x8004B854);
	goto ZZ_4B854;
ZZ_16C38_DC:
	V0 = 0x80070000;
	V0 = EMU_ReadU32(V0 - 12756); //+ 0xFFFFCE2C
	V1 = 0x800000;
	V0 &= V1;
	if (!V0)
	{
		A1 = 0x2;
		ZZ_CLOCKCYCLES(6,0x80016D30);
		goto ZZ_16C38_F8;
	}
	A1 = 0x2;
	A1 = 0x1;
	ZZ_CLOCKCYCLES(7,0x80016D30);
ZZ_16C38_F8:
	A0 = R0;
	A2 = R0;
	RA = 0x80016D40; //ZZ_16C38_108
	A3 = R0;
	ZZ_CLOCKCYCLES(4,0x8004B728);
	goto ZZ_4B728;
ZZ_16C38_108:
	A0 = S1;
	A1 = 0x1;
	A2 = R0;
	A3 = V0 & 0xFFFF;
	RA = 0x80016D58; //ZZ_16C38_120
	EMU_Write32(SP + 16,R0); //+ 0x10
	ZZ_CLOCKCYCLES(6,0x8004D1E8);
	goto ZZ_4D1E8;
ZZ_16C38_120:
	A0 = EMU_ReadU32(S2);
	A1 = S1;
	RA = 0x80016D68; //ZZ_16C38_130
	A0 += 8212;
	ZZ_CLOCKCYCLES(4,0x8004B854);
	goto ZZ_4B854;
ZZ_16C38_130:
	RA = EMU_ReadU32(SP + 36); //+ 0x24
	S2 = EMU_ReadU32(SP + 32); //+ 0x20
	S1 = EMU_ReadU32(SP + 28); //+ 0x1C
	S0 = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 40;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x80016654,ZZ_1658C_C8);
	ZZ_JUMPREGISTER(0x80016678,ZZ_1658C_EC);
	ZZ_JUMPREGISTER(0x8001663C,ZZ_1658C_B0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80016C38,ZZ_16C38);
ZZ_MARK(0x80016C3C);
ZZ_MARK(0x80016C40);
ZZ_MARK(0x80016C44);
ZZ_MARK(0x80016C48);
ZZ_MARK(0x80016C4C);
ZZ_MARK(0x80016C50);
ZZ_MARK(0x80016C54);
ZZ_MARK(0x80016C58);
ZZ_MARK(0x80016C5C);
ZZ_MARK(0x80016C60);
ZZ_MARK(0x80016C64);
ZZ_MARK(0x80016C68);
ZZ_MARK(0x80016C6C);
ZZ_MARK(0x80016C70);
ZZ_MARK(0x80016C74);
ZZ_MARK(0x80016C78);
ZZ_MARK(0x80016C7C);
ZZ_MARK(0x80016C80);
ZZ_MARK(0x80016C84);
ZZ_MARK(0x80016C88);
ZZ_MARK(0x80016C8C);
ZZ_MARK(0x80016C90);
ZZ_MARK(0x80016C94);
ZZ_MARK(0x80016C98);
ZZ_MARK(0x80016C9C);
ZZ_MARK(0x80016CA0);
ZZ_MARK(0x80016CA4);
ZZ_MARK(0x80016CA8);
ZZ_MARK(0x80016CAC);
ZZ_MARK(0x80016CB0);
ZZ_MARK(0x80016CB4);
ZZ_MARK(0x80016CB8);
ZZ_MARK(0x80016CBC);
ZZ_MARK(0x80016CC0);
ZZ_MARK(0x80016CC4);
ZZ_MARK(0x80016CC8);
ZZ_MARK(0x80016CCC);
ZZ_MARK(0x80016CD0);
ZZ_MARK(0x80016CD4);
ZZ_MARK(0x80016CD8);
ZZ_MARK(0x80016CDC);
ZZ_MARK(0x80016CE0);
ZZ_MARK(0x80016CE4);
ZZ_MARK(0x80016CE8);
ZZ_MARK(0x80016CEC);
ZZ_MARK_TARGET(0x80016CF0,ZZ_16C38_B8);
ZZ_MARK(0x80016CF4);
ZZ_MARK(0x80016CF8);
ZZ_MARK_TARGET(0x80016CFC,ZZ_16C38_C4);
ZZ_MARK(0x80016D00);
ZZ_MARK(0x80016D04);
ZZ_MARK(0x80016D08);
ZZ_MARK(0x80016D0C);
ZZ_MARK(0x80016D10);
ZZ_MARK_TARGET(0x80016D14,ZZ_16C38_DC);
ZZ_MARK(0x80016D18);
ZZ_MARK(0x80016D1C);
ZZ_MARK(0x80016D20);
ZZ_MARK(0x80016D24);
ZZ_MARK(0x80016D28);
ZZ_MARK(0x80016D2C);
ZZ_MARK_TARGET(0x80016D30,ZZ_16C38_F8);
ZZ_MARK(0x80016D34);
ZZ_MARK(0x80016D38);
ZZ_MARK(0x80016D3C);
ZZ_MARK_TARGET(0x80016D40,ZZ_16C38_108);
ZZ_MARK(0x80016D44);
ZZ_MARK(0x80016D48);
ZZ_MARK(0x80016D4C);
ZZ_MARK(0x80016D50);
ZZ_MARK(0x80016D54);
ZZ_MARK_TARGET(0x80016D58,ZZ_16C38_120);
ZZ_MARK(0x80016D5C);
ZZ_MARK(0x80016D60);
ZZ_MARK(0x80016D64);
ZZ_MARK_TARGET(0x80016D68,ZZ_16C38_130);
ZZ_MARK(0x80016D6C);
ZZ_MARK(0x80016D70);
ZZ_MARK(0x80016D74);
ZZ_MARK(0x80016D78);
ZZ_MARK(0x80016D7C);
ZZ_MARK(0x80016D80);
