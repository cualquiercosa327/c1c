#ifdef ZZ_INCLUDE_CODE
ZZ_2F15C:
	SP -= 32;
	EMU_Write32(SP + 28,RA); //+ 0x1C
	RA = 0x8002F16C; //ZZ_2F15C_10
	EMU_Write32(SP + 24,S0); //+ 0x18
	ZZ_CLOCKCYCLES(4,0x80015A04);
	goto ZZ_15A04;
ZZ_2F15C_10:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 2428); //+ 0xFFFFF684
	AT = 0x80070000;
	EMU_Write32(AT - 12744,R0); //+ 0xFFFFCE38
	V0 = (int32_t)V1 < 40;
	if (V0)
	{
		V0 = (int32_t)V1 < 42;
		ZZ_CLOCKCYCLES(7,0x8002F1A0);
		goto ZZ_2F15C_44;
	}
	V0 = (int32_t)V1 < 42;
	if (V0)
	{
		V0 = (int32_t)V1 < 61;
		ZZ_CLOCKCYCLES(9,0x8002F2CC);
		goto ZZ_2F15C_170;
	}
	V0 = (int32_t)V1 < 61;
	if (!V0)
	{
		V0 = (int32_t)V1 < 59;
		ZZ_CLOCKCYCLES(11,0x8002F1A0);
		goto ZZ_2F15C_44;
	}
	V0 = (int32_t)V1 < 59;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(13,0x8002F2CC);
		goto ZZ_2F15C_170;
	}
	ZZ_CLOCKCYCLES(13,0x8002F1A0);
ZZ_2F15C_44:
	S0 = 0x80070000;
	S0 -= 12872;
	A0 = S0;
	A1 = 0x4;
	A2 = R0;
	A3 = R0;
	EMU_Write32(SP + 16,R0); //+ 0x10
	RA = 0x8002F1C4; //ZZ_2F15C_68
	EMU_Write32(SP + 20,R0); //+ 0x14
	ZZ_CLOCKCYCLES(9,0x80019928);
	goto ZZ_19928;
ZZ_2F15C_68:
	A0 = S0;
	A1 = 0x4;
	A2 = 0x1;
	A3 = R0;
	AT = 0x80070000;
	EMU_Write32(AT - 12764,V0); //+ 0xFFFFCE24
	EMU_Write32(SP + 16,R0); //+ 0x10
	RA = 0x8002F1E8; //ZZ_2F15C_8C
	EMU_Write32(SP + 20,R0); //+ 0x14
	ZZ_CLOCKCYCLES(9,0x80019928);
	goto ZZ_19928;
ZZ_2F15C_8C:
	A0 = S0;
	A1 = 0x4;
	A2 = 0x5;
	A3 = R0;
	AT = 0x80070000;
	EMU_Write32(AT - 12768,V0); //+ 0xFFFFCE20
	EMU_Write32(SP + 16,R0); //+ 0x10
	RA = 0x8002F20C; //ZZ_2F15C_B0
	EMU_Write32(SP + 20,R0); //+ 0x14
	ZZ_CLOCKCYCLES(9,0x80019928);
	goto ZZ_19928;
ZZ_2F15C_B0:
	A0 = S0;
	A1 = 0x4;
	A2 = 0x16;
	A3 = R0;
	AT = 0x80070000;
	EMU_Write32(AT - 12736,V0); //+ 0xFFFFCE40
	EMU_Write32(SP + 16,R0); //+ 0x10
	RA = 0x8002F230; //ZZ_2F15C_D4
	EMU_Write32(SP + 20,R0); //+ 0x14
	ZZ_CLOCKCYCLES(9,0x80019928);
	goto ZZ_19928;
ZZ_2F15C_D4:
	S0 = 0x80060000;
	S0 += 30772;
	A0 = EMU_ReadU32(S0);
	A1 = R0;
	A2 = 0x1;
	AT = 0x80070000;
	EMU_Write32(AT - 12676,V0); //+ 0xFFFFCE7C
	RA = 0x8002F254; //ZZ_2F15C_F8
	A0 += 16;
	ZZ_CLOCKCYCLES(9,0x80014364);
	goto ZZ_14364;
ZZ_2F15C_F8:
	A0 = EMU_ReadU32(S0);
	A1 = R0;
	A2 = 0x1;
	RA = 0x8002F268; //ZZ_2F15C_10C
	A0 += 36;
	ZZ_CLOCKCYCLES(5,0x80014364);
	goto ZZ_14364;
ZZ_2F15C_10C:
	A0 = EMU_ReadU32(S0);
	A1 = R0;
	A2 = 0x1;
	RA = 0x8002F27C; //ZZ_2F15C_120
	A0 += 132;
	ZZ_CLOCKCYCLES(5,0x80014364);
	goto ZZ_14364;
ZZ_2F15C_120:
	A0 = EMU_ReadU32(S0);
	A1 = R0;
	A2 = 0x1;
	RA = 0x8002F290; //ZZ_2F15C_134
	A0 += 152;
	ZZ_CLOCKCYCLES(5,0x80014364);
	goto ZZ_14364;
ZZ_2F15C_134:
	A0 = EMU_ReadU32(S0);
	A1 = R0;
	A2 = 0x1;
	RA = 0x8002F2A4; //ZZ_2F15C_148
	A0 += 28;
	ZZ_CLOCKCYCLES(5,0x80014364);
	goto ZZ_14364;
ZZ_2F15C_148:
	A0 = EMU_ReadU32(S0);
	A1 = R0;
	A2 = 0x1;
	RA = 0x8002F2B8; //ZZ_2F15C_15C
	A0 += 32;
	ZZ_CLOCKCYCLES(5,0x80014364);
	goto ZZ_14364;
ZZ_2F15C_15C:
	A0 = EMU_ReadU32(S0);
	A1 = R0;
	A2 = 0x1;
	RA = 0x8002F2CC; //ZZ_2F15C_170
	A0 += 52;
	ZZ_CLOCKCYCLES(5,0x80014364);
	goto ZZ_14364;
ZZ_2F15C_170:
	RA = 0x8002F2D4; //ZZ_2F15C_178
	A0 = 0x1;
	ZZ_CLOCKCYCLES(2,0x8002F53C);
	goto ZZ_2F53C;
ZZ_2F15C_178:
	V0 = 0x80060000;
	V0 -= 14420;
	AT = 0x1F800000;
	EMU_Write32(AT + 92,V0); //+ 0x5C
	RA = EMU_ReadU32(SP + 28); //+ 0x1C
	S0 = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(9);
	ZZ_JUMPREGISTER(0x8001183C,ZZ_11800_3C);
	ZZ_JUMPREGISTER(0x80011B20,ZZ_11800_320);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8002F15C,ZZ_2F15C);
ZZ_MARK(0x8002F160);
ZZ_MARK(0x8002F164);
ZZ_MARK(0x8002F168);
ZZ_MARK_TARGET(0x8002F16C,ZZ_2F15C_10);
ZZ_MARK(0x8002F170);
ZZ_MARK(0x8002F174);
ZZ_MARK(0x8002F178);
ZZ_MARK(0x8002F17C);
ZZ_MARK(0x8002F180);
ZZ_MARK(0x8002F184);
ZZ_MARK(0x8002F188);
ZZ_MARK(0x8002F18C);
ZZ_MARK(0x8002F190);
ZZ_MARK(0x8002F194);
ZZ_MARK(0x8002F198);
ZZ_MARK(0x8002F19C);
ZZ_MARK_TARGET(0x8002F1A0,ZZ_2F15C_44);
ZZ_MARK(0x8002F1A4);
ZZ_MARK(0x8002F1A8);
ZZ_MARK(0x8002F1AC);
ZZ_MARK(0x8002F1B0);
ZZ_MARK(0x8002F1B4);
ZZ_MARK(0x8002F1B8);
ZZ_MARK(0x8002F1BC);
ZZ_MARK(0x8002F1C0);
ZZ_MARK_TARGET(0x8002F1C4,ZZ_2F15C_68);
ZZ_MARK(0x8002F1C8);
ZZ_MARK(0x8002F1CC);
ZZ_MARK(0x8002F1D0);
ZZ_MARK(0x8002F1D4);
ZZ_MARK(0x8002F1D8);
ZZ_MARK(0x8002F1DC);
ZZ_MARK(0x8002F1E0);
ZZ_MARK(0x8002F1E4);
ZZ_MARK_TARGET(0x8002F1E8,ZZ_2F15C_8C);
ZZ_MARK(0x8002F1EC);
ZZ_MARK(0x8002F1F0);
ZZ_MARK(0x8002F1F4);
ZZ_MARK(0x8002F1F8);
ZZ_MARK(0x8002F1FC);
ZZ_MARK(0x8002F200);
ZZ_MARK(0x8002F204);
ZZ_MARK(0x8002F208);
ZZ_MARK_TARGET(0x8002F20C,ZZ_2F15C_B0);
ZZ_MARK(0x8002F210);
ZZ_MARK(0x8002F214);
ZZ_MARK(0x8002F218);
ZZ_MARK(0x8002F21C);
ZZ_MARK(0x8002F220);
ZZ_MARK(0x8002F224);
ZZ_MARK(0x8002F228);
ZZ_MARK(0x8002F22C);
ZZ_MARK_TARGET(0x8002F230,ZZ_2F15C_D4);
ZZ_MARK(0x8002F234);
ZZ_MARK(0x8002F238);
ZZ_MARK(0x8002F23C);
ZZ_MARK(0x8002F240);
ZZ_MARK(0x8002F244);
ZZ_MARK(0x8002F248);
ZZ_MARK(0x8002F24C);
ZZ_MARK(0x8002F250);
ZZ_MARK_TARGET(0x8002F254,ZZ_2F15C_F8);
ZZ_MARK(0x8002F258);
ZZ_MARK(0x8002F25C);
ZZ_MARK(0x8002F260);
ZZ_MARK(0x8002F264);
ZZ_MARK_TARGET(0x8002F268,ZZ_2F15C_10C);
ZZ_MARK(0x8002F26C);
ZZ_MARK(0x8002F270);
ZZ_MARK(0x8002F274);
ZZ_MARK(0x8002F278);
ZZ_MARK_TARGET(0x8002F27C,ZZ_2F15C_120);
ZZ_MARK(0x8002F280);
ZZ_MARK(0x8002F284);
ZZ_MARK(0x8002F288);
ZZ_MARK(0x8002F28C);
ZZ_MARK_TARGET(0x8002F290,ZZ_2F15C_134);
ZZ_MARK(0x8002F294);
ZZ_MARK(0x8002F298);
ZZ_MARK(0x8002F29C);
ZZ_MARK(0x8002F2A0);
ZZ_MARK_TARGET(0x8002F2A4,ZZ_2F15C_148);
ZZ_MARK(0x8002F2A8);
ZZ_MARK(0x8002F2AC);
ZZ_MARK(0x8002F2B0);
ZZ_MARK(0x8002F2B4);
ZZ_MARK_TARGET(0x8002F2B8,ZZ_2F15C_15C);
ZZ_MARK(0x8002F2BC);
ZZ_MARK(0x8002F2C0);
ZZ_MARK(0x8002F2C4);
ZZ_MARK(0x8002F2C8);
ZZ_MARK_TARGET(0x8002F2CC,ZZ_2F15C_170);
ZZ_MARK(0x8002F2D0);
ZZ_MARK_TARGET(0x8002F2D4,ZZ_2F15C_178);
ZZ_MARK(0x8002F2D8);
ZZ_MARK(0x8002F2DC);
ZZ_MARK(0x8002F2E0);
ZZ_MARK(0x8002F2E4);
ZZ_MARK(0x8002F2E8);
ZZ_MARK(0x8002F2EC);
ZZ_MARK(0x8002F2F0);
ZZ_MARK(0x8002F2F4);