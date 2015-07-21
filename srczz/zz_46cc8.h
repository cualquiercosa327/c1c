#ifdef ZZ_INCLUDE_CODE
ZZ_46CC8:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 22780); //+ 0x58FC
	SP -= 32;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = A0;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A1;
	if (V0)
	{
		EMU_Write32(SP + 24,RA); //+ 0x18
		ZZ_CLOCKCYCLES(9,0x80046D28);
		goto ZZ_46CC8_60;
	}
	EMU_Write32(SP + 24,RA); //+ 0x18
	V0 = 0x80050000;
	V0 = EMU_ReadU16(V0 + 22752); //+ 0x58E0
	A1 = 0x80050000;
	A1 = EMU_ReadU32(A1 + 22792); //+ 0x5908
	A0 = 0x2;
	RA = 0x80046D08; //ZZ_46CC8_40
	A1 = V0 << A1;
	ZZ_CLOCKCYCLES(16,0x80046A20);
	goto ZZ_46A20;
ZZ_46CC8_40:
	RA = 0x80046D10; //ZZ_46CC8_48
	A0 = 0x1;
	ZZ_CLOCKCYCLES(2,0x80046A20);
	goto ZZ_46A20;
ZZ_46CC8_48:
	A0 = 0x3;
	A1 = S1;
	RA = 0x80046D20; //ZZ_46CC8_58
	A2 = S0;
	ZZ_CLOCKCYCLES(4,0x80046A20);
	goto ZZ_46A20;
ZZ_46CC8_58:
	V0 = S0;
	ZZ_CLOCKCYCLES(2,0x80046D38);
	goto ZZ_46CC8_70;
ZZ_46CC8_60:
	A0 = S1;
	RA = 0x80046D34; //ZZ_46CC8_6C
	A1 = S0;
	ZZ_CLOCKCYCLES(3,0x8004636C);
	goto ZZ_4636C;
ZZ_46CC8_6C:
	V0 = S0;
	ZZ_CLOCKCYCLES(1,0x80046D38);
ZZ_46CC8_70:
	RA = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x800489E8,ZZ_489B8_30);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80046CC8,0x80046D08,ZZ_46CC8);
ZZ_MARK_TARGET(0x80046D08,0x80046D10,ZZ_46CC8_40);
ZZ_MARK_TARGET(0x80046D10,0x80046D20,ZZ_46CC8_48);
ZZ_MARK_TARGET(0x80046D20,0x80046D28,ZZ_46CC8_58);
ZZ_MARK_TARGET(0x80046D28,0x80046D34,ZZ_46CC8_60);
ZZ_MARK_TARGET(0x80046D34,0x80046D38,ZZ_46CC8_6C);
ZZ_MARK_TARGET(0x80046D38,0x80046D50,ZZ_46CC8_70);