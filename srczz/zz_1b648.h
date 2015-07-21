#ifdef ZZ_INCLUDE_CODE
ZZ_1B648:
	SP -= 40;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = A1;
	EMU_Write32(SP + 24,S2); //+ 0x18
	S2 = A2;
	A1 = S2;
	EMU_Write32(SP + 32,RA); //+ 0x20
	ZZ_JUMPREGISTER_BEGIN(S1);
	RA = 0x8001B674; //ZZ_1B648_2C
	EMU_Write32(SP + 28,S3); //+ 0x1C
	ZZ_CLOCKCYCLES_JR(11);
	ZZ_JUMPREGISTER(0x8001DA0C,ZZ_1DA0C);
	ZZ_JUMPREGISTER_END();
ZZ_1B648_2C:
	S3 = V0;
	V0 = -25;
	if (S3 != V0)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(4,0x8001B694);
		goto ZZ_1B648_4C;
	}
	A0 = S0;
	RA = 0x8001B68C; //ZZ_1B648_44
	A1 = R0;
	ZZ_CLOCKCYCLES(6,0x8001CDD0);
	goto ZZ_1CDD0;
ZZ_1B648_44:
	V0 = -25;
	ZZ_CLOCKCYCLES(2,0x8001B6D0);
	goto ZZ_1B648_88;
ZZ_1B648_4C:
	A0 = EMU_ReadU32(S0 + 108); //+ 0x6C
	if (!A0)
	{
		V0 = S3;
		ZZ_CLOCKCYCLES(4,0x8001B6D0);
		goto ZZ_1B648_88;
	}
	V0 = S3;
	ZZ_CLOCKCYCLES(4,0x8001B6A4);
ZZ_1B648_5C:
	V0 = EMU_ReadU32(A0);
	if (!V0)
	{
		A1 = S1;
		ZZ_CLOCKCYCLES(4,0x8001B6CC);
		goto ZZ_1B648_84;
	}
	A1 = S1;
	S0 = EMU_ReadU32(A0 + 104); //+ 0x68
	RA = 0x8001B6C0; //ZZ_1B648_78
	A2 = S2;
	ZZ_CLOCKCYCLES(7,0x8001B648);
	goto ZZ_1B648;
ZZ_1B648_78:
	A0 = S0;
	if (A0)
	{
		ZZ_CLOCKCYCLES(3,0x8001B6A4);
		goto ZZ_1B648_5C;
	}
	ZZ_CLOCKCYCLES(3,0x8001B6CC);
ZZ_1B648_84:
	V0 = S3;
	ZZ_CLOCKCYCLES(1,0x8001B6D0);
ZZ_1B648_88:
	RA = EMU_ReadU32(SP + 32); //+ 0x20
	S3 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 40;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x8001B8F0,ZZ_1B84C_A4);
	ZZ_JUMPREGISTER(0x8001B6C0,ZZ_1B648_78);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001B648,0x8001B674,ZZ_1B648);
ZZ_MARK_TARGET(0x8001B674,0x8001B68C,ZZ_1B648_2C);
ZZ_MARK_TARGET(0x8001B68C,0x8001B694,ZZ_1B648_44);
ZZ_MARK_TARGET(0x8001B694,0x8001B6A4,ZZ_1B648_4C);
ZZ_MARK_TARGET(0x8001B6A4,0x8001B6C0,ZZ_1B648_5C);
ZZ_MARK_TARGET(0x8001B6C0,0x8001B6CC,ZZ_1B648_78);
ZZ_MARK_TARGET(0x8001B6CC,0x8001B6D0,ZZ_1B648_84);
ZZ_MARK_TARGET(0x8001B6D0,0x8001B6F0,ZZ_1B648_88);
