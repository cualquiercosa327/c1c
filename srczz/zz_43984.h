#ifdef ZZ_INCLUDE_CODE
ZZ_43984:
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	RA = 0x80043994; //ZZ_43984_10
	ZZ_CLOCKCYCLES(4,0x80045610);
	goto ZZ_45610;
ZZ_43984_10:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80013DD4,ZZ_13D48_8C);
	ZZ_JUMPREGISTER(0x80015C9C,ZZ_15B58_144);
	ZZ_JUMPREGISTER(0x8002F92C,ZZ_2F8C4_68);
	ZZ_JUMPREGISTER(0x80013FBC,ZZ_13D48_274);
	ZZ_JUMPREGISTER(0x80013F98,ZZ_13D48_250);
	ZZ_JUMPREGISTER(0x8002F9AC,ZZ_2F8C4_E8);
	ZZ_JUMPREGISTER(0x8002FAF4,ZZ_2F8C4_230);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80043984,0x80043994,ZZ_43984);
ZZ_MARK_TARGET(0x80043994,0x800439A4,ZZ_43984_10);
