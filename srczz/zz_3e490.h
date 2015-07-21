#ifdef ZZ_INCLUDE_CODE
ZZ_3E490:
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	RA = 0x8003E4A0; //ZZ_3E490_10
	ZZ_CLOCKCYCLES(4,0x8003E4B0);
	goto ZZ_3E4B0;
ZZ_3E490_10:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x800166C8,ZZ_1668C_3C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003E490,0x8003E4A0,ZZ_3E490);
ZZ_MARK_TARGET(0x8003E4A0,0x8003E4B0,ZZ_3E490_10);
