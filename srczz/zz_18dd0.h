#ifdef ZZ_INCLUDE_CODE
ZZ_18DD0:
	SP -= 32;
	EMU_Write32(SP + 28,RA); //+ 0x1C
	EMU_Write32(SP + 24,S2); //+ 0x18
	EMU_Write32(SP + 20,S1); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	V1 = EMU_ReadU32(A0);
	S1 = A1;
	V0 = 0x2;
	if (V1 != V0)
	{
		S2 = A2;
		ZZ_CLOCKCYCLES(10,0x80018E04);
		goto ZZ_18DD0_34;
	}
	S2 = A2;
	A0 = EMU_ReadU32(A0 + 4); //+ 0x4
	ZZ_CLOCKCYCLES(13,0x80018E08);
	goto ZZ_18DD0_38;
ZZ_18DD0_34:
	A0 = EMU_ReadU32(A0 + 76); //+ 0x4C
	ZZ_CLOCKCYCLES(1,0x80018E08);
ZZ_18DD0_38:
	if (!A0)
	{
		V0 = -255;
		ZZ_CLOCKCYCLES(3,0x80018E30);
		goto ZZ_18DD0_60;
	}
	V0 = -255;
	ZZ_CLOCKCYCLES(3,0x80018E14);
ZZ_18DD0_44:
	S0 = EMU_ReadU32(A0 + 72); //+ 0x48
	A1 = S1;
	RA = 0x80018E24; //ZZ_18DD0_54
	A2 = S2;
	ZZ_CLOCKCYCLES(4,0x80018BCC);
	goto ZZ_18BCC;
ZZ_18DD0_54:
	A0 = S0;
	if (A0)
	{
		V0 = -255;
		ZZ_CLOCKCYCLES(3,0x80018E14);
		goto ZZ_18DD0_44;
	}
	V0 = -255;
	ZZ_CLOCKCYCLES(3,0x80018E30);
ZZ_18DD0_60:
	RA = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80018DD0,ZZ_18DD0);
ZZ_MARK(0x80018DD4);
ZZ_MARK(0x80018DD8);
ZZ_MARK(0x80018DDC);
ZZ_MARK(0x80018DE0);
ZZ_MARK(0x80018DE4);
ZZ_MARK(0x80018DE8);
ZZ_MARK(0x80018DEC);
ZZ_MARK(0x80018DF0);
ZZ_MARK(0x80018DF4);
ZZ_MARK(0x80018DF8);
ZZ_MARK(0x80018DFC);
ZZ_MARK(0x80018E00);
ZZ_MARK_TARGET(0x80018E04,ZZ_18DD0_34);
ZZ_MARK_TARGET(0x80018E08,ZZ_18DD0_38);
ZZ_MARK(0x80018E0C);
ZZ_MARK(0x80018E10);
ZZ_MARK_TARGET(0x80018E14,ZZ_18DD0_44);
ZZ_MARK(0x80018E18);
ZZ_MARK(0x80018E1C);
ZZ_MARK(0x80018E20);
ZZ_MARK_TARGET(0x80018E24,ZZ_18DD0_54);
ZZ_MARK(0x80018E28);
ZZ_MARK(0x80018E2C);
ZZ_MARK_TARGET(0x80018E30,ZZ_18DD0_60);
ZZ_MARK(0x80018E34);
ZZ_MARK(0x80018E38);
ZZ_MARK(0x80018E3C);
ZZ_MARK(0x80018E40);
ZZ_MARK(0x80018E44);
ZZ_MARK(0x80018E48);
