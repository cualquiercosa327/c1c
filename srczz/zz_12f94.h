#ifdef ZZ_INCLUDE_CODE
ZZ_12F94:
	SP -= 24;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0 < 1;
	A0 = S0;
	EMU_Write32(SP + 20,RA); //+ 0x14
	RA = 0x80012FB0; //ZZ_12F94_1C
	A1 = R0;
	ZZ_CLOCKCYCLES(7,0x80049310);
	goto ZZ_49310;
ZZ_12F94_1C:
	if ((int32_t)V0 < 0)
	{
		ZZ_CLOCKCYCLES(2,0x80012FD0);
		goto ZZ_12F94_3C;
	}
	if (V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(4,0x80012FD4);
		goto ZZ_12F94_40;
	}
	V0 = R0;
	RA = 0x80012FC8; //ZZ_12F94_34
	A0 = S0;
	ZZ_CLOCKCYCLES(6,0x80047214);
	goto ZZ_47214;
ZZ_12F94_34:
	if ((int32_t)V0 >= 0)
	{
		V0 = V0 < 1;
		ZZ_CLOCKCYCLES(2,0x80012FD4);
		goto ZZ_12F94_40;
	}
	V0 = V0 < 1;
	ZZ_CLOCKCYCLES(2,0x80012FD0);
ZZ_12F94_3C:
	V0 = -16;
	ZZ_CLOCKCYCLES(1,0x80012FD4);
ZZ_12F94_40:
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x80015394,ZZ_15340_54);
	ZZ_JUMPREGISTER(0x80013470,ZZ_13304_16C);
	ZZ_JUMPREGISTER(0x800124DC,ZZ_123F0_EC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80012F94,ZZ_12F94);
ZZ_MARK(0x80012F98);
ZZ_MARK(0x80012F9C);
ZZ_MARK(0x80012FA0);
ZZ_MARK(0x80012FA4);
ZZ_MARK(0x80012FA8);
ZZ_MARK(0x80012FAC);
ZZ_MARK_TARGET(0x80012FB0,ZZ_12F94_1C);
ZZ_MARK(0x80012FB4);
ZZ_MARK(0x80012FB8);
ZZ_MARK(0x80012FBC);
ZZ_MARK(0x80012FC0);
ZZ_MARK(0x80012FC4);
ZZ_MARK_TARGET(0x80012FC8,ZZ_12F94_34);
ZZ_MARK(0x80012FCC);
ZZ_MARK_TARGET(0x80012FD0,ZZ_12F94_3C);
ZZ_MARK_TARGET(0x80012FD4,ZZ_12F94_40);
ZZ_MARK(0x80012FD8);
ZZ_MARK(0x80012FDC);
ZZ_MARK(0x80012FE0);
ZZ_MARK(0x80012FE4);
