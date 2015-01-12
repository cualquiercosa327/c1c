#ifdef ZZ_INCLUDE_CODE
ZZ_500D0:
	SP -= 24;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0;
	if (!S0)
	{
		EMU_Write32(SP + 20,RA); //+ 0x14
		ZZ_CLOCKCYCLES(5,0x800500F8);
		goto ZZ_500D0_28;
	}
	EMU_Write32(SP + 20,RA); //+ 0x14
	V0 = 1;
	if (S0 == V0)
	{
		ZZ_CLOCKCYCLES(8,0x80050118);
		goto ZZ_500D0_48;
	}
	ZZ_CLOCKCYCLES(10,0x80050184);
	goto ZZ_500D0_B4;
ZZ_500D0_28:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 5528); //+ 0xFFFFEA68
	V0 = EMU_ReadU16(V1 + 426); //+ 0x1AA
	AT = 0x80060000;
	EMU_Write32(AT - 5396,R0); //+ 0xFFFFEAEC
	V0 &= 0xFF7F;
	ZZ_CLOCKCYCLES(8,0x80050180);
	goto ZZ_500D0_B0;
ZZ_500D0_48:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5392); //+ 0xFFFFEAF0
	if (V0 == S0)
	{
		ZZ_CLOCKCYCLES(5,0x80050164);
		goto ZZ_500D0_94;
	}
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 5388); //+ 0xFFFFEAF4
	RA = 0x8005013C; //ZZ_500D0_6C
	ZZ_CLOCKCYCLES(9,0x800503B0);
	goto ZZ_503B0;
ZZ_500D0_6C:
	if (!V0)
	{
		ZZ_CLOCKCYCLES(2,0x80050164);
		goto ZZ_500D0_94;
	}
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 5528); //+ 0xFFFFEA68
	V0 = EMU_ReadU16(V1 + 426); //+ 0x1AA
	AT = 0x80060000;
	EMU_Write32(AT - 5396,R0); //+ 0xFFFFEAEC
	V0 &= 0xFF7F;
	ZZ_CLOCKCYCLES(10,0x80050180);
	goto ZZ_500D0_B0;
ZZ_500D0_94:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 5528); //+ 0xFFFFEA68
	V0 = EMU_ReadU16(V1 + 426); //+ 0x1AA
	AT = 0x80060000;
	EMU_Write32(AT - 5396,S0); //+ 0xFFFFEAEC
	V0 |= 0x80;
	ZZ_CLOCKCYCLES(7,0x80050180);
ZZ_500D0_B0:
	EMU_Write16(V1 + 426,V0); //+ 0x1AA
	ZZ_CLOCKCYCLES(1,0x80050184);
ZZ_500D0_B4:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5396); //+ 0xFFFFEAEC
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 24;
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x800328C8,ZZ_32894_34);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800500D0,ZZ_500D0);
ZZ_MARK(0x800500D4);
ZZ_MARK(0x800500D8);
ZZ_MARK(0x800500DC);
ZZ_MARK(0x800500E0);
ZZ_MARK(0x800500E4);
ZZ_MARK(0x800500E8);
ZZ_MARK(0x800500EC);
ZZ_MARK(0x800500F0);
ZZ_MARK(0x800500F4);
ZZ_MARK_TARGET(0x800500F8,ZZ_500D0_28);
ZZ_MARK(0x800500FC);
ZZ_MARK(0x80050100);
ZZ_MARK(0x80050104);
ZZ_MARK(0x80050108);
ZZ_MARK(0x8005010C);
ZZ_MARK(0x80050110);
ZZ_MARK(0x80050114);
ZZ_MARK_TARGET(0x80050118,ZZ_500D0_48);
ZZ_MARK(0x8005011C);
ZZ_MARK(0x80050120);
ZZ_MARK(0x80050124);
ZZ_MARK(0x80050128);
ZZ_MARK(0x8005012C);
ZZ_MARK(0x80050130);
ZZ_MARK(0x80050134);
ZZ_MARK(0x80050138);
ZZ_MARK_TARGET(0x8005013C,ZZ_500D0_6C);
ZZ_MARK(0x80050140);
ZZ_MARK(0x80050144);
ZZ_MARK(0x80050148);
ZZ_MARK(0x8005014C);
ZZ_MARK(0x80050150);
ZZ_MARK(0x80050154);
ZZ_MARK(0x80050158);
ZZ_MARK(0x8005015C);
ZZ_MARK(0x80050160);
ZZ_MARK_TARGET(0x80050164,ZZ_500D0_94);
ZZ_MARK(0x80050168);
ZZ_MARK(0x8005016C);
ZZ_MARK(0x80050170);
ZZ_MARK(0x80050174);
ZZ_MARK(0x80050178);
ZZ_MARK(0x8005017C);
ZZ_MARK_TARGET(0x80050180,ZZ_500D0_B0);
ZZ_MARK_TARGET(0x80050184,ZZ_500D0_B4);
ZZ_MARK(0x80050188);
ZZ_MARK(0x8005018C);
ZZ_MARK(0x80050190);
ZZ_MARK(0x80050194);
ZZ_MARK(0x80050198);
