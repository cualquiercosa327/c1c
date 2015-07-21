#ifdef ZZ_INCLUDE_CODE
ZZ_44B30:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 22696); //+ 0x58A8
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 21944); //+ 0x55B8
	SP -= 32;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = R0;
	EMU_Write32(SP + 24,RA); //+ 0x18
	V0 = (int32_t)V0 < (int32_t)V1;
	if (!V0)
	{
		EMU_Write32(SP + 20,S1); //+ 0x14
		ZZ_CLOCKCYCLES(11,0x80044C28);
		goto ZZ_44B30_F8;
	}
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = 0x80050000;
	S1 = EMU_ReadU32(S1 + 21920); //+ 0x55A0
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 21936); //+ 0x55B0
	AT = 0x80050000;
	EMU_Write32(AT + 21920,R0); //+ 0x55A0
	V0 &= 0x10;
	if (!V0)
	{
		A0 = 0x16;
		ZZ_CLOCKCYCLES(20,0x80044BCC);
		goto ZZ_44B30_9C;
	}
	A0 = 0x16;
	V0 = S0 & 0xFF;
	ZZ_CLOCKCYCLES(21,0x80044B84);
ZZ_44B30_54:
	if (V0)
	{
		S0 += 1;
		ZZ_CLOCKCYCLES(2,0x80044B9C);
		goto ZZ_44B30_6C;
	}
	S0 += 1;
	A0 = 0x80010000;
	A0 += 5556;
	RA = 0x80044B9C; //ZZ_44B30_6C
	ZZ_CLOCKCYCLES(6,0x8003E6D4);
	goto ZZ_3E6D4;
ZZ_44B30_6C:
	A0 = 0x1;
	A1 = R0;
	A2 = R0;
	RA = 0x80044BB0; //ZZ_44B30_80
	A3 = R0;
	ZZ_CLOCKCYCLES(5,0x80044640);
	goto ZZ_44640;
ZZ_44B30_80:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 21936); //+ 0x55B0
	V0 &= 0x10;
	if (V0)
	{
		V0 = S0 & 0xFF;
		ZZ_CLOCKCYCLES(6,0x80044B84);
		goto ZZ_44B30_54;
	}
	V0 = S0 & 0xFF;
	A0 = 0x16;
	ZZ_CLOCKCYCLES(7,0x80044BCC);
ZZ_44B30_9C:
	A1 = 0x80050000;
	A1 += 22700;
	A2 = R0;
	RA = 0x80044BE0; //ZZ_44B30_B0
	A3 = R0;
	ZZ_CLOCKCYCLES(5,0x80044640);
	goto ZZ_44640;
ZZ_44B30_B0:
	if (!V0)
	{
		A0 = 0x1;
		ZZ_CLOCKCYCLES(2,0x80044C10);
		goto ZZ_44B30_E0;
	}
	A0 = 0x1;
	A1 = R0;
	A2 = R0;
	RA = 0x80044BF8; //ZZ_44B30_C8
	A3 = R0;
	ZZ_CLOCKCYCLES(6,0x80044640);
	goto ZZ_44640;
ZZ_44B30_C8:
	A0 = 0x80010000;
	A0 += 5572;
	RA = 0x80044C08; //ZZ_44B30_D8
	ZZ_CLOCKCYCLES(4,0x8003E6D4);
	goto ZZ_3E6D4;
ZZ_44B30_D8:
	A0 = 0x16;
	ZZ_CLOCKCYCLES(2,0x80044BCC);
	goto ZZ_44B30_9C;
ZZ_44B30_E0:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 21944); //+ 0x55B8
	AT = 0x80050000;
	EMU_Write32(AT + 21920,S1); //+ 0x55A0
	AT = 0x80050000;
	EMU_Write32(AT + 22696,V0); //+ 0x58A8
	ZZ_CLOCKCYCLES(6,0x80044C28);
ZZ_44B30_F8:
	RA = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x800435C4,ZZ_43520_A4);
	ZZ_JUMPREGISTER(0x800435A4,ZZ_43520_84);
	ZZ_JUMPREGISTER(0x80043704,ZZ_43668_9C);
	ZZ_JUMPREGISTER(0x800436E4,ZZ_43668_7C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80044B30,0x80044B84,ZZ_44B30);
ZZ_MARK_TARGET(0x80044B84,0x80044B9C,ZZ_44B30_54);
ZZ_MARK_TARGET(0x80044B9C,0x80044BB0,ZZ_44B30_6C);
ZZ_MARK_TARGET(0x80044BB0,0x80044BCC,ZZ_44B30_80);
ZZ_MARK_TARGET(0x80044BCC,0x80044BE0,ZZ_44B30_9C);
ZZ_MARK_TARGET(0x80044BE0,0x80044BF8,ZZ_44B30_B0);
ZZ_MARK_TARGET(0x80044BF8,0x80044C08,ZZ_44B30_C8);
ZZ_MARK_TARGET(0x80044C08,0x80044C10,ZZ_44B30_D8);
ZZ_MARK_TARGET(0x80044C10,0x80044C28,ZZ_44B30_E0);
ZZ_MARK_TARGET(0x80044C28,0x80044C40,ZZ_44B30_F8);