#ifdef ZZ_INCLUDE_CODE
ZZ_13748:
	SP -= 24;
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 12376); //+ 0xFFFFCFA8
	V0 = 0x1;
	EMU_Write32(SP + 16,RA); //+ 0x10
	AT = 0x80060000;
	EMU_Write32(AT - 12352,V0); //+ 0xFFFFCFC0
	if (!V1)
	{
		ZZ_CLOCKCYCLES(9,0x80013788);
		goto ZZ_13748_40;
	}
	ZZ_CLOCKCYCLES(9,0x8001376C);
ZZ_13748_24:
	RA = 0x80013774; //ZZ_13748_2C
	A0 = -1;
	ZZ_CLOCKCYCLES(2,0x800134C8);
	goto ZZ_134C8;
ZZ_13748_2C:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 12376); //+ 0xFFFFCFA8
	if (V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001376C);
		goto ZZ_13748_24;
	}
	ZZ_CLOCKCYCLES(5,0x80013788);
ZZ_13748_40:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80025F0C,ZZ_25A60_4AC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80013748,0x8001376C,ZZ_13748);
ZZ_MARK_TARGET(0x8001376C,0x80013774,ZZ_13748_24);
ZZ_MARK_TARGET(0x80013774,0x80013788,ZZ_13748_2C);
ZZ_MARK_TARGET(0x80013788,0x80013798,ZZ_13748_40);