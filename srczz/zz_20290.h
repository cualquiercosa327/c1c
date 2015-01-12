#ifdef ZZ_INCLUDE_CODE
ZZ_20290:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 2524); //+ 0xFFFFF624
	SP -= 24;
	EMU_Write32(SP + 20,RA); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	V0 = EMU_ReadU32(V1 + 24); //+ 0x18
	S0 = EMU_ReadU32(A0 + 16); //+ 0x10
	if (V0 != A0)
	{
		ZZ_CLOCKCYCLES(9,0x800202C4);
		goto ZZ_20290_34;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 2920); //+ 0xB68
	EMU_Write32(V1 + 24,V0); //+ 0x18
	ZZ_CLOCKCYCLES(13,0x800202C4);
ZZ_20290_34:
	V0 = EMU_ReadU32(S0 + 636); //+ 0x27C
	V0 &= 0x1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x800202F0);
		goto ZZ_20290_60;
	}
	RA = 0x800202E0; //ZZ_20290_50
	ZZ_CLOCKCYCLES(7,0x80019F60);
	goto ZZ_19F60;
ZZ_20290_50:
	V0 = EMU_ReadU32(S0 + 636); //+ 0x27C
	V1 = -4;
	V0 &= V1;
	EMU_Write32(S0 + 636,V0); //+ 0x27C
	ZZ_CLOCKCYCLES(4,0x800202F0);
ZZ_20290_60:
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x800201A4,ZZ_20178_2C);
	ZZ_JUMPREGISTER(0x8002FB7C,ZZ_2F9D4_1A8);
	ZZ_JUMPREGISTER(0x80020418,ZZ_20304_114);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80020290,ZZ_20290);
ZZ_MARK(0x80020294);
ZZ_MARK(0x80020298);
ZZ_MARK(0x8002029C);
ZZ_MARK(0x800202A0);
ZZ_MARK(0x800202A4);
ZZ_MARK(0x800202A8);
ZZ_MARK(0x800202AC);
ZZ_MARK(0x800202B0);
ZZ_MARK(0x800202B4);
ZZ_MARK(0x800202B8);
ZZ_MARK(0x800202BC);
ZZ_MARK(0x800202C0);
ZZ_MARK_TARGET(0x800202C4,ZZ_20290_34);
ZZ_MARK(0x800202C8);
ZZ_MARK(0x800202CC);
ZZ_MARK(0x800202D0);
ZZ_MARK(0x800202D4);
ZZ_MARK(0x800202D8);
ZZ_MARK(0x800202DC);
ZZ_MARK_TARGET(0x800202E0,ZZ_20290_50);
ZZ_MARK(0x800202E4);
ZZ_MARK(0x800202E8);
ZZ_MARK(0x800202EC);
ZZ_MARK_TARGET(0x800202F0,ZZ_20290_60);
ZZ_MARK(0x800202F4);
ZZ_MARK(0x800202F8);
ZZ_MARK(0x800202FC);
ZZ_MARK(0x80020300);
