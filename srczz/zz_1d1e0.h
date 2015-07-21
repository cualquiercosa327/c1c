#ifdef ZZ_INCLUDE_CODE
ZZ_1D1E0:
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	RA = 0x8001D1F0; //ZZ_1D1E0_10
	A1 = 0x1;
	ZZ_CLOCKCYCLES(4,0x8001CDD0);
	goto ZZ_1CDD0;
ZZ_1D1E0_10:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x8001B9D0,ZZ_1B92C_A4);
	ZZ_JUMPREGISTER(0x8001C024,ZZ_1BCC8_35C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001D1E0,0x8001D1F0,ZZ_1D1E0);
ZZ_MARK_TARGET(0x8001D1F0,0x8001D200,ZZ_1D1E0_10);
