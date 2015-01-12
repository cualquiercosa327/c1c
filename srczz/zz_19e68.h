#ifdef ZZ_INCLUDE_CODE
ZZ_19E68:
	SP -= 40;
	EMU_Write32(SP + 24,S0); //+ 0x18
	S0 = A0;
	EMU_Write32(SP + 32,RA); //+ 0x20
	EMU_Write32(SP + 28,S1); //+ 0x1C
	V0 = EMU_ReadU32(S0 + 184); //+ 0xB8
	if (V0)
	{
		S1 = A1;
		ZZ_CLOCKCYCLES(9,0x80019F24);
		goto ZZ_19E68_BC;
	}
	S1 = A1;
	V0 = EMU_ReadU32(S0);
	if (!V0)
	{
		V0 = -255;
		ZZ_CLOCKCYCLES(13,0x80019F28);
		goto ZZ_19E68_C0;
	}
	V0 = -255;
	V0 = EMU_ReadU32(S0 + 24); //+ 0x18
	if (V0 != S1)
	{
		V0 = -255;
		ZZ_CLOCKCYCLES(17,0x80019F28);
		goto ZZ_19E68_C0;
	}
	V0 = -255;
	V0 = EMU_ReadU32(S0 + 172); //+ 0xAC
	V1 = 0x1000000;
	V0 &= V1;
	if (V0)
	{
		V0 = -255;
		ZZ_CLOCKCYCLES(22,0x80019F28);
		goto ZZ_19E68_C0;
	}
	V0 = -255;
	V0 = EMU_ReadU32(S0 + 256); //+ 0x100
	V1 = 0x40000;
	V0 &= V1;
	if (V0)
	{
		V0 = -255;
		ZZ_CLOCKCYCLES(27,0x80019F28);
		goto ZZ_19E68_C0;
	}
	V0 = -255;
	A0 = R0;
	A1 = S0;
	A2 = 0x1A00;
	A3 = R0;
	RA = 0x80019EEC; //ZZ_19E68_84
	EMU_Write32(SP + 16,R0); //+ 0x10
	ZZ_CLOCKCYCLES(33,0x8001CD48);
	goto ZZ_1CD48;
ZZ_19E68_84:
	V0 = EMU_ReadU32(S0 + 24); //+ 0x18
	if (V0 == S1)
	{
		V0 = -1;
		ZZ_CLOCKCYCLES(4,0x80019F10);
		goto ZZ_19E68_A8;
	}
	V0 = -1;
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 2920); //+ 0xB68
	if (V1 != V0)
	{
		V0 = -255;
		ZZ_CLOCKCYCLES(9,0x80019F28);
		goto ZZ_19E68_C0;
	}
	V0 = -255;
	ZZ_CLOCKCYCLES(9,0x80019F10);
ZZ_19E68_A8:
	A0 = S0;
	RA = 0x80019F1C; //ZZ_19E68_B4
	A1 = R0;
	ZZ_CLOCKCYCLES(3,0x80019CF4);
	goto ZZ_19CF4;
ZZ_19E68_B4:
	ZZ_CLOCKCYCLES(2,0x80019F28);
	goto ZZ_19E68_C0;
ZZ_19E68_BC:
	V0 = -255;
	ZZ_CLOCKCYCLES(1,0x80019F28);
ZZ_19E68_C0:
	RA = EMU_ReadU32(SP + 32); //+ 0x20
	S1 = EMU_ReadU32(SP + 28); //+ 0x1C
	S0 = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 40;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80019E68,ZZ_19E68);
ZZ_MARK(0x80019E6C);
ZZ_MARK(0x80019E70);
ZZ_MARK(0x80019E74);
ZZ_MARK(0x80019E78);
ZZ_MARK(0x80019E7C);
ZZ_MARK(0x80019E80);
ZZ_MARK(0x80019E84);
ZZ_MARK(0x80019E88);
ZZ_MARK(0x80019E8C);
ZZ_MARK(0x80019E90);
ZZ_MARK(0x80019E94);
ZZ_MARK(0x80019E98);
ZZ_MARK(0x80019E9C);
ZZ_MARK(0x80019EA0);
ZZ_MARK(0x80019EA4);
ZZ_MARK(0x80019EA8);
ZZ_MARK(0x80019EAC);
ZZ_MARK(0x80019EB0);
ZZ_MARK(0x80019EB4);
ZZ_MARK(0x80019EB8);
ZZ_MARK(0x80019EBC);
ZZ_MARK(0x80019EC0);
ZZ_MARK(0x80019EC4);
ZZ_MARK(0x80019EC8);
ZZ_MARK(0x80019ECC);
ZZ_MARK(0x80019ED0);
ZZ_MARK(0x80019ED4);
ZZ_MARK(0x80019ED8);
ZZ_MARK(0x80019EDC);
ZZ_MARK(0x80019EE0);
ZZ_MARK(0x80019EE4);
ZZ_MARK(0x80019EE8);
ZZ_MARK_TARGET(0x80019EEC,ZZ_19E68_84);
ZZ_MARK(0x80019EF0);
ZZ_MARK(0x80019EF4);
ZZ_MARK(0x80019EF8);
ZZ_MARK(0x80019EFC);
ZZ_MARK(0x80019F00);
ZZ_MARK(0x80019F04);
ZZ_MARK(0x80019F08);
ZZ_MARK(0x80019F0C);
ZZ_MARK_TARGET(0x80019F10,ZZ_19E68_A8);
ZZ_MARK(0x80019F14);
ZZ_MARK(0x80019F18);
ZZ_MARK_TARGET(0x80019F1C,ZZ_19E68_B4);
ZZ_MARK(0x80019F20);
ZZ_MARK_TARGET(0x80019F24,ZZ_19E68_BC);
ZZ_MARK_TARGET(0x80019F28,ZZ_19E68_C0);
ZZ_MARK(0x80019F2C);
ZZ_MARK(0x80019F30);
ZZ_MARK(0x80019F34);
ZZ_MARK(0x80019F38);
ZZ_MARK(0x80019F3C);
