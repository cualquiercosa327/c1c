#ifdef ZZ_INCLUDE_CODE
ZZ_5B2C8:
	SP -= 24;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0;
	EMU_Write32(SP + 20,RA); //+ 0x14
	RA = 0x8005B2E0; //ZZ_5B2C8_18
	A0 = R0;
	ZZ_CLOCKCYCLES(6,0x8004A054);
	goto ZZ_4A054;
ZZ_5B2C8_18:
	RA = 0x8005B2E8; //ZZ_5B2C8_20
	ZZ_CLOCKCYCLES(2,0x80049FB4);
	goto ZZ_49FB4;
ZZ_5B2C8_20:
	RA = 0x8005B2F0; //ZZ_5B2C8_28
	ZZ_CLOCKCYCLES(2,0x8004A1EC);
	goto ZZ_4A1EC;
ZZ_5B2C8_28:
	if (V0)
	{
		ZZ_CLOCKCYCLES(2,0x8005B2FC);
		goto ZZ_5B2C8_34;
	}
	S0 = R0;
	ZZ_CLOCKCYCLES(3,0x8005B2FC);
ZZ_5B2C8_34:
	RA = 0x8005B304; //ZZ_5B2C8_3C
	A0 = S0;
	ZZ_CLOCKCYCLES(2,0x8005B380);
	goto ZZ_5B380;
ZZ_5B2C8_3C:
	RA = 0x8005B30C; //ZZ_5B2C8_44
	ZZ_CLOCKCYCLES(2,0x80049FC4);
	goto ZZ_49FC4;
ZZ_5B2C8_44:
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x800365B0,ZZ_364A8_108);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8005B2C8,ZZ_5B2C8);
ZZ_MARK(0x8005B2CC);
ZZ_MARK(0x8005B2D0);
ZZ_MARK(0x8005B2D4);
ZZ_MARK(0x8005B2D8);
ZZ_MARK(0x8005B2DC);
ZZ_MARK_TARGET(0x8005B2E0,ZZ_5B2C8_18);
ZZ_MARK(0x8005B2E4);
ZZ_MARK_TARGET(0x8005B2E8,ZZ_5B2C8_20);
ZZ_MARK(0x8005B2EC);
ZZ_MARK_TARGET(0x8005B2F0,ZZ_5B2C8_28);
ZZ_MARK(0x8005B2F4);
ZZ_MARK(0x8005B2F8);
ZZ_MARK_TARGET(0x8005B2FC,ZZ_5B2C8_34);
ZZ_MARK(0x8005B300);
ZZ_MARK_TARGET(0x8005B304,ZZ_5B2C8_3C);
ZZ_MARK(0x8005B308);
ZZ_MARK_TARGET(0x8005B30C,ZZ_5B2C8_44);
ZZ_MARK(0x8005B310);
ZZ_MARK(0x8005B314);
ZZ_MARK(0x8005B318);
ZZ_MARK(0x8005B31C);
