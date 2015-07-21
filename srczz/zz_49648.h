#ifdef ZZ_INCLUDE_CODE
ZZ_49648:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 25180); //+ 0x625C
	SP -= 24;
	if (V0)
	{
		EMU_Write32(SP + 16,RA); //+ 0x10
		ZZ_CLOCKCYCLES(5,0x800496FC);
		goto ZZ_49648_B4;
	}
	EMU_Write32(SP + 16,RA); //+ 0x10
	V1 = 0x80050000;
	V1 = EMU_ReadU8(V1 + 25194); //+ 0x626A
	AT = 0x80050000;
	EMU_Write8(AT + 25193,R0); //+ 0x6269
	V0 = 0x7F;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(12,0x800496FC);
		goto ZZ_49648_B4;
	}
	RA = 0x80049680; //ZZ_49648_38
	ZZ_CLOCKCYCLES(14,0x8003E1F8);
	goto ZZ_3E1F8;
ZZ_49648_38:
	V0 = 0x80050000;
	V0 = EMU_ReadU8(V0 + 25192); //+ 0x6268
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x800496AC);
		goto ZZ_49648_64;
	}
	RA = 0x8004969C; //ZZ_49648_54
	A0 = R0;
	ZZ_CLOCKCYCLES(7,0x8003E784);
	goto ZZ_3E784;
ZZ_49648_54:
	AT = 0x80050000;
	EMU_Write8(AT + 25192,R0); //+ 0x6268
	ZZ_CLOCKCYCLES(4,0x800496E8);
	goto ZZ_49648_A0;
ZZ_49648_64:
	V0 = 0x80050000;
	V0 = EMU_ReadU8(V0 + 25194); //+ 0x626A
	if (V0)
	{
		A0 = 0x6;
		ZZ_CLOCKCYCLES(5,0x800496E0);
		goto ZZ_49648_98;
	}
	A0 = 0x6;
	A1 = 0x80050000;
	A1 = EMU_ReadU32(A1 + 25188); //+ 0x6264
	RA = 0x800496D0; //ZZ_49648_88
	A0 = R0;
	ZZ_CLOCKCYCLES(9,0x8003E724);
	goto ZZ_3E724;
ZZ_49648_88:
	AT = 0x80050000;
	EMU_Write32(AT + 25188,R0); //+ 0x6264
	ZZ_CLOCKCYCLES(4,0x800496E8);
	goto ZZ_49648_A0;
ZZ_49648_98:
	RA = 0x800496E8; //ZZ_49648_A0
	A1 = R0;
	ZZ_CLOCKCYCLES(2,0x8003E724);
	goto ZZ_3E724;
ZZ_49648_A0:
	RA = 0x800496F0; //ZZ_49648_A8
	ZZ_CLOCKCYCLES(2,0x8003E208);
	goto ZZ_3E208;
ZZ_49648_A8:
	V0 = 0x7F;
	AT = 0x80050000;
	EMU_Write8(AT + 25194,V0); //+ 0x626A
	ZZ_CLOCKCYCLES(3,0x800496FC);
ZZ_49648_B4:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 24;
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80031954,ZZ_31938_1C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80049648,0x80049680,ZZ_49648);
ZZ_MARK_TARGET(0x80049680,0x8004969C,ZZ_49648_38);
ZZ_MARK_TARGET(0x8004969C,0x800496AC,ZZ_49648_54);
ZZ_MARK_TARGET(0x800496AC,0x800496D0,ZZ_49648_64);
ZZ_MARK_TARGET(0x800496D0,0x800496E0,ZZ_49648_88);
ZZ_MARK_TARGET(0x800496E0,0x800496E8,ZZ_49648_98);
ZZ_MARK_TARGET(0x800496E8,0x800496F0,ZZ_49648_A0);
ZZ_MARK_TARGET(0x800496F0,0x800496FC,ZZ_49648_A8);
ZZ_MARK_TARGET(0x800496FC,0x8004970C,ZZ_49648_B4);