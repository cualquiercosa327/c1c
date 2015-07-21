#ifdef ZZ_INCLUDE_CODE
ZZ_3E460:
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	RA = 0x8003E470; //ZZ_3E460_10
	ZZ_CLOCKCYCLES(4,0x8003E4D0);
	goto ZZ_3E4D0;
ZZ_3E460_10:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 28756); //+ 0x7054
	V0 = ~V0;
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x8001680C,ZZ_167A4_68);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003E460,0x8003E470,ZZ_3E460);
ZZ_MARK_TARGET(0x8003E470,0x8003E490,ZZ_3E460_10);
