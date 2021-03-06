#ifdef ZZ_INCLUDE_CODE
ZZ_3AE08:
	SP -= 40;
	EMU_Write32(SP + 24,S2); //+ 0x18
	S2 = A0;
	EMU_Write32(SP + 32,RA); //+ 0x20
	EMU_Write32(SP + 28,S3); //+ 0x1C
	EMU_Write32(SP + 20,S1); //+ 0x14
	RA = 0x8003AE28; //ZZ_3AE08_20
	EMU_Write32(SP + 16,S0); //+ 0x10
	ZZ_CLOCKCYCLES(8,0x8003C3FC);
	goto ZZ_3C3FC;
ZZ_3AE08_20:
	if (!V0)
	{
		ZZ_CLOCKCYCLES(2,0x8003AE40);
		goto ZZ_3AE08_38;
	}
	RA = 0x8003AE38; //ZZ_3AE08_30
	A0 = 0x2;
	ZZ_CLOCKCYCLES(4,0x8003CAB0);
	goto ZZ_3CAB0;
ZZ_3AE08_30:
	RA = 0x8003AE40; //ZZ_3AE08_38
	A0 = R0;
	ZZ_CLOCKCYCLES(2,0x8003CAF8);
	goto ZZ_3CAF8;
ZZ_3AE08_38:
	A0 = EMU_ReadU32(S2);
	RA = 0x8003AE4C; //ZZ_3AE08_44
	ZZ_CLOCKCYCLES(3,0x8003C900);
	goto ZZ_3C900;
ZZ_3AE08_44:
	V0 = EMU_ReadU32(S2 + 4); //+ 0x4
	V0 = EMU_ReadU32(V0);
	if (!V0)
	{
		ZZ_CLOCKCYCLES(6,0x8003AEB8);
		goto ZZ_3AE08_B0;
	}
	RA = 0x8003AE6C; //ZZ_3AE08_64
	A0 = 0x3C;
	ZZ_CLOCKCYCLES(8,0x8003E4F0);
	goto ZZ_3E4F0;
ZZ_3AE08_64:
	S1 = R0;
	S3 = 0x1;
	ZZ_CLOCKCYCLES(2,0x8003AE74);
ZZ_3AE08_6C:
	A0 = EMU_ReadU32(S2 + 8); //+ 0x8
	RA = 0x8003AE80; //ZZ_3AE08_78
	ZZ_CLOCKCYCLES(3,0x8003E288);
	goto ZZ_3E288;
ZZ_3AE08_78:
	A0 = 0x14;
	RA = 0x8003AE8C; //ZZ_3AE08_84
	S0 = V0;
	ZZ_CLOCKCYCLES(3,0x8003E4F0);
	goto ZZ_3E4F0;
ZZ_3AE08_84:
	if (S0 == S3)
	{
		V0 = (int32_t)S1 < 3;
		ZZ_CLOCKCYCLES(2,0x8003AEA4);
		goto ZZ_3AE08_9C;
	}
	V0 = (int32_t)S1 < 3;
	S1 += 1;
	V0 = (int32_t)S1 < 9;
	if (V0)
	{
		V0 = (int32_t)S1 < 3;
		ZZ_CLOCKCYCLES(6,0x8003AE74);
		goto ZZ_3AE08_6C;
	}
	V0 = (int32_t)S1 < 3;
	ZZ_CLOCKCYCLES(6,0x8003AEA4);
ZZ_3AE08_9C:
	if (!V0)
	{
		ZZ_CLOCKCYCLES(2,0x8003AEB8);
		goto ZZ_3AE08_B0;
	}
	V0 = EMU_ReadU32(S2 + 4); //+ 0x4
	EMU_Write32(V0,R0);
	ZZ_CLOCKCYCLES(5,0x8003AEB8);
ZZ_3AE08_B0:
	RA = EMU_ReadU32(SP + 32); //+ 0x20
	S3 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 40;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x8003B9F0,ZZ_3B8B8_138);
	ZZ_JUMPREGISTER(0x8003BC0C,ZZ_3B8B8_354);
	ZZ_JUMPREGISTER(0x8003BB80,ZZ_3B8B8_2C8);
	ZZ_JUMPREGISTER(0x8003BD14,ZZ_3B8B8_45C);
	ZZ_JUMPREGISTER(0x8003BD68,ZZ_3B8B8_4B0);
	ZZ_JUMPREGISTER(0x8003BDCC,ZZ_3B8B8_514);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003AE08,0x8003AE28,ZZ_3AE08);
ZZ_MARK_TARGET(0x8003AE28,0x8003AE38,ZZ_3AE08_20);
ZZ_MARK_TARGET(0x8003AE38,0x8003AE40,ZZ_3AE08_30);
ZZ_MARK_TARGET(0x8003AE40,0x8003AE4C,ZZ_3AE08_38);
ZZ_MARK_TARGET(0x8003AE4C,0x8003AE6C,ZZ_3AE08_44);
ZZ_MARK_TARGET(0x8003AE6C,0x8003AE74,ZZ_3AE08_64);
ZZ_MARK_TARGET(0x8003AE74,0x8003AE80,ZZ_3AE08_6C);
ZZ_MARK_TARGET(0x8003AE80,0x8003AE8C,ZZ_3AE08_78);
ZZ_MARK_TARGET(0x8003AE8C,0x8003AEA4,ZZ_3AE08_84);
ZZ_MARK_TARGET(0x8003AEA4,0x8003AEB8,ZZ_3AE08_9C);
ZZ_MARK_TARGET(0x8003AEB8,0x8003AED8,ZZ_3AE08_B0);
