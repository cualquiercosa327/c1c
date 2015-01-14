#ifdef ZZ_INCLUDE_CODE
ZZ_5B290:
	SP -= 24;
	EMU_Write32(SP + 16,S0); //+ 0x10
	EMU_Write32(SP + 20,RA); //+ 0x14
	RA = 0x8005B2A4; //ZZ_5B290_14
	S0 = A0;
	ZZ_CLOCKCYCLES(5,0x8005B280);
	goto ZZ_5B280;
ZZ_5B290_14:
	A0 = S0;
	A1 = 63;
	RA = 0x8005B2B4; //ZZ_5B290_24
	A2 = R0;
	ZZ_CLOCKCYCLES(4,0x8005B260);
	goto ZZ_5B260;
ZZ_5B290_24:
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x80034ADC,ZZ_34A0C_D0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8005B290,ZZ_5B290);
ZZ_MARK(0x8005B294);
ZZ_MARK(0x8005B298);
ZZ_MARK(0x8005B29C);
ZZ_MARK(0x8005B2A0);
ZZ_MARK_TARGET(0x8005B2A4,ZZ_5B290_14);
ZZ_MARK(0x8005B2A8);
ZZ_MARK(0x8005B2AC);
ZZ_MARK(0x8005B2B0);
ZZ_MARK_TARGET(0x8005B2B4,ZZ_5B290_24);
ZZ_MARK(0x8005B2B8);
ZZ_MARK(0x8005B2BC);
ZZ_MARK(0x8005B2C0);
ZZ_MARK(0x8005B2C4);