#ifdef ZZ_INCLUDE_CODE
ZZ_4CB6C:
	SP -= 24;
	EMU_Write32(SP + 20,RA); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	RA = 0x8004CB80; //ZZ_4CB6C_14
	S0 = A0;
	ZZ_CLOCKCYCLES(5,0x8003F23C);
	goto ZZ_3F23C;
ZZ_4CB6C_14:
	A0 = V0;
	V0 = S0 & 0x1000;
	if (!V0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(4,0x8004CBAC);
		goto ZZ_4CB6C_40;
	}
	V0 = 0x1;
	AT = 0x80050000;
	EMU_Write32(AT + 25180,V0); //+ 0x625C
	V0 = S0 & 0xFFF;
	AT = 0x80050000;
	EMU_Write32(AT + 25176,V0); //+ 0x6258
	ZZ_CLOCKCYCLES(11,0x8004CBBC);
	goto ZZ_4CB6C_50;
ZZ_4CB6C_40:
	AT = 0x80050000;
	EMU_Write32(AT + 25180,R0); //+ 0x625C
	AT = 0x80050000;
	EMU_Write32(AT + 25176,S0); //+ 0x6258
	ZZ_CLOCKCYCLES(4,0x8004CBBC);
ZZ_4CB6C_50:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 25176); //+ 0x6258
	V0 = (int32_t)V1 < 6;
	if (!V0)
	{
		V0 = 0x5;
		ZZ_CLOCKCYCLES(6,0x8004CCC4);
		goto ZZ_4CB6C_158;
	}
	V0 = 0x5;
	V0 = V0 < V1;
	if (V0)
	{
		V0 = 0x3C;
		ZZ_CLOCKCYCLES(9,0x8004CCB4);
		goto ZZ_4CB6C_148;
	}
	V0 = 0x3C;
	V0 = V1 << 2;
	AT = 0x80010000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 5988); //+ 0x1764
	ZZ_JUMPREGISTER_BEGIN(V0);
	ZZ_CLOCKCYCLES_JR(16);
	ZZ_JUMPREGISTER(0x8004CBFC,ZZ_4CB6C_90);
	ZZ_JUMPREGISTER(0x8004CC24,ZZ_4CB6C_B8);
	ZZ_JUMPREGISTER(0x8004CC4C,ZZ_4CB6C_E0);
	ZZ_JUMPREGISTER(0x8004CC60,ZZ_4CB6C_F4);
	ZZ_JUMPREGISTER(0x8004CC74,ZZ_4CB6C_108);
	ZZ_JUMPREGISTER(0x8004CC8C,ZZ_4CB6C_120);
	ZZ_JUMPREGISTER(0x8004CCB0,ZZ_4CB6C_144);
	ZZ_JUMPREGISTER(0x8004CCC4,ZZ_4CB6C_158);
	ZZ_JUMPREGISTER_END();
ZZ_4CB6C_90:
	V1 = 0x32;
	AT = 0x80060000;
	EMU_Write32(AT - 180,V1); //+ 0xFFFFFF4C
	V0 = 0x1;
	if (A0 == V0)
	{
		V0 = 0x5;
		ZZ_CLOCKCYCLES(6,0x8004CC3C);
		goto ZZ_4CB6C_D0;
	}
	V0 = 0x5;
	AT = 0x80050000;
	EMU_Write32(AT + 25176,V1); //+ 0x6258
	ZZ_CLOCKCYCLES(10,0x8004CCCC);
	goto ZZ_4CB6C_160;
ZZ_4CB6C_B8:
	V0 = 0x3C;
	AT = 0x80060000;
	EMU_Write32(AT - 180,V0); //+ 0xFFFFFF4C
	if (A0)
	{
		ZZ_CLOCKCYCLES(5,0x8004CC3C);
		goto ZZ_4CB6C_D0;
	}
	V0 = 0x5;
	ZZ_CLOCKCYCLES(6,0x8004CC3C);
ZZ_4CB6C_D0:
	AT = 0x80050000;
	EMU_Write32(AT + 25176,V0); //+ 0x6258
	ZZ_CLOCKCYCLES(4,0x8004CCCC);
	goto ZZ_4CB6C_160;
ZZ_4CB6C_E0:
	V0 = 0x78;
	AT = 0x80060000;
	EMU_Write32(AT - 180,V0); //+ 0xFFFFFF4C
	ZZ_CLOCKCYCLES(5,0x8004CCCC);
	goto ZZ_4CB6C_160;
ZZ_4CB6C_F4:
	V0 = 0xF0;
	AT = 0x80060000;
	EMU_Write32(AT - 180,V0); //+ 0xFFFFFF4C
	ZZ_CLOCKCYCLES(5,0x8004CCCC);
	goto ZZ_4CB6C_160;
ZZ_4CB6C_108:
	if (!A0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(2,0x8004CCB0);
		goto ZZ_4CB6C_144;
	}
	V0 = 0x1;
	if (A0 == V0)
	{
		V0 = 0x32;
		ZZ_CLOCKCYCLES(4,0x8004CCA0);
		goto ZZ_4CB6C_134;
	}
	V0 = 0x32;
	V0 = 0x3C;
	ZZ_CLOCKCYCLES(6,0x8004CCB4);
	goto ZZ_4CB6C_148;
ZZ_4CB6C_120:
	if (!A0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(2,0x8004CCB0);
		goto ZZ_4CB6C_144;
	}
	V0 = 0x1;
	if (A0 != V0)
	{
		V0 = 0x3C;
		ZZ_CLOCKCYCLES(4,0x8004CCB4);
		goto ZZ_4CB6C_148;
	}
	V0 = 0x3C;
	V0 = 0x32;
	ZZ_CLOCKCYCLES(5,0x8004CCA0);
ZZ_4CB6C_134:
	AT = 0x80060000;
	EMU_Write32(AT - 180,V0); //+ 0xFFFFFF4C
	ZZ_CLOCKCYCLES(4,0x8004CCCC);
	goto ZZ_4CB6C_160;
ZZ_4CB6C_144:
	V0 = 0x3C;
	ZZ_CLOCKCYCLES(1,0x8004CCB4);
ZZ_4CB6C_148:
	AT = 0x80060000;
	EMU_Write32(AT - 180,V0); //+ 0xFFFFFF4C
	ZZ_CLOCKCYCLES(4,0x8004CCCC);
	goto ZZ_4CB6C_160;
ZZ_4CB6C_158:
	AT = 0x80060000;
	EMU_Write32(AT - 180,V1); //+ 0xFFFFFF4C
	ZZ_CLOCKCYCLES(2,0x8004CCCC);
ZZ_4CB6C_160:
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 24;
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80031260,ZZ_31244_1C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004CB6C,0x8004CB80,ZZ_4CB6C);
ZZ_MARK_TARGET(0x8004CB80,0x8004CBAC,ZZ_4CB6C_14);
ZZ_MARK_TARGET(0x8004CBAC,0x8004CBBC,ZZ_4CB6C_40);
ZZ_MARK_TARGET(0x8004CBBC,0x8004CBFC,ZZ_4CB6C_50);
ZZ_MARK_TARGET(0x8004CBFC,0x8004CC24,ZZ_4CB6C_90);
ZZ_MARK_TARGET(0x8004CC24,0x8004CC3C,ZZ_4CB6C_B8);
ZZ_MARK_TARGET(0x8004CC3C,0x8004CC4C,ZZ_4CB6C_D0);
ZZ_MARK_TARGET(0x8004CC4C,0x8004CC60,ZZ_4CB6C_E0);
ZZ_MARK_TARGET(0x8004CC60,0x8004CC74,ZZ_4CB6C_F4);
ZZ_MARK_TARGET(0x8004CC74,0x8004CC8C,ZZ_4CB6C_108);
ZZ_MARK_TARGET(0x8004CC8C,0x8004CCA0,ZZ_4CB6C_120);
ZZ_MARK_TARGET(0x8004CCA0,0x8004CCB0,ZZ_4CB6C_134);
ZZ_MARK_TARGET(0x8004CCB0,0x8004CCB4,ZZ_4CB6C_144);
ZZ_MARK_TARGET(0x8004CCB4,0x8004CCC4,ZZ_4CB6C_148);
ZZ_MARK_TARGET(0x8004CCC4,0x8004CCCC,ZZ_4CB6C_158);
ZZ_MARK_TARGET(0x8004CCCC,0x8004CCDC,ZZ_4CB6C_160);
