#ifdef ZZ_INCLUDE_CODE
ZZ_17790:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 15044); //+ 0xFFFFC53C
	SP -= 24;
	EMU_Write32(SP + 20,RA); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	AT = 0x80050000;
	EMU_Write32(AT + 29320,R0); //+ 0x7288
	AT = 0x80050000;
	EMU_Write32(AT + 29316,R0); //+ 0x7284
	AT = 0x80050000;
	EMU_Write32(AT + 29312,R0); //+ 0x7280
	V1 = EMU_ReadU32(V0 + 276); //+ 0x114
	V0 = 0x37;
	if (V1 == V0)
	{
		V0 = (int32_t)V1 < 56;
		ZZ_CLOCKCYCLES(15,0x80017810);
		goto ZZ_17790_80;
	}
	V0 = (int32_t)V1 < 56;
	if (!V0)
	{
		V0 = 0x1E;
		ZZ_CLOCKCYCLES(17,0x800177EC);
		goto ZZ_17790_5C;
	}
	V0 = 0x1E;
	if (V1 == V0)
	{
		V0 = 0x25;
		ZZ_CLOCKCYCLES(19,0x80017808);
		goto ZZ_17790_78;
	}
	V0 = 0x25;
	if (V1 == V0)
	{
		V0 = 0x320;
		ZZ_CLOCKCYCLES(21,0x8001781C);
		goto ZZ_17790_8C;
	}
	V0 = 0x320;
	ZZ_CLOCKCYCLES(23,0x80017824);
	goto ZZ_17790_94;
ZZ_17790_5C:
	V0 = 0x3C;
	if (V1 == V0)
	{
		V0 = 0x5A;
		ZZ_CLOCKCYCLES(3,0x80017818);
		goto ZZ_17790_88;
	}
	V0 = 0x5A;
	if (V1 == V0)
	{
		V0 = 0x120;
		ZZ_CLOCKCYCLES(5,0x8001781C);
		goto ZZ_17790_8C;
	}
	V0 = 0x120;
	ZZ_CLOCKCYCLES(7,0x80017824);
	goto ZZ_17790_94;
ZZ_17790_78:
	V0 = 0x3C0;
	ZZ_CLOCKCYCLES(2,0x8001781C);
	goto ZZ_17790_8C;
ZZ_17790_80:
	V0 = 0x1F4;
	ZZ_CLOCKCYCLES(2,0x8001781C);
	goto ZZ_17790_8C;
ZZ_17790_88:
	V0 = 0x1CC;
	ZZ_CLOCKCYCLES(1,0x8001781C);
ZZ_17790_8C:
	AT = 0x80050000;
	EMU_Write32(AT + 30928,V0); //+ 0x78D0
	ZZ_CLOCKCYCLES(2,0x80017824);
ZZ_17790_94:
	S0 = 0x80050000;
	S0 += 30928;
	A0 = EMU_ReadU32(S0);
	RA = 0x80017838; //ZZ_17790_A8
	ZZ_CLOCKCYCLES(5,0x80042FAC);
	goto ZZ_42FAC;
ZZ_17790_A8:
	A0 = R0;
	RA = 0x80017844; //ZZ_17790_B4
	A1 = R0;
	ZZ_CLOCKCYCLES(3,0x80042F8C);
	goto ZZ_42F8C;
ZZ_17790_B4:
	A0 = R0;
	A1 = R0;
	V0 = 0x1000;
	AT = 0x80050000;
	EMU_Write16(AT + 30900,V0); //+ 0x78B4
	V0 = 0x200;
	AT = 0x80050000;
	EMU_Write16(AT + 30896,R0); //+ 0x78B0
	AT = 0x80050000;
	EMU_Write16(AT + 30898,R0); //+ 0x78B2
	AT = 0x80050000;
	EMU_Write32(AT + 30916,R0); //+ 0x78C4
	AT = 0x80050000;
	EMU_Write32(AT + 30920,R0); //+ 0x78C8
	AT = 0x80050000;
	EMU_Write32(AT + 30924,R0); //+ 0x78CC
	EMU_Write16(S0 + 4,V0); //+ 0x4
	AT = 0x80050000;
	EMU_Write16(AT + 30938,V0); //+ 0x78DA
	AT = 0x80050000;
	EMU_Write16(AT + 30944,V0); //+ 0x78E0
	AT = 0x80050000;
	EMU_Write16(AT + 30934,V0); //+ 0x78D6
	AT = 0x80050000;
	EMU_Write16(AT + 30940,V0); //+ 0x78DC
	AT = 0x80050000;
	EMU_Write16(AT + 30946,V0); //+ 0x78E2
	AT = 0x80050000;
	EMU_Write16(AT + 30936,V0); //+ 0x78D8
	AT = 0x80050000;
	EMU_Write16(AT + 30942,V0); //+ 0x78DE
	AT = 0x80050000;
	EMU_Write16(AT + 30948,V0); //+ 0x78E4
	RA = 0x800178D0; //ZZ_17790_140
	A2 = R0;
	ZZ_CLOCKCYCLES(35,0x80042F6C);
	goto ZZ_42F6C;
ZZ_17790_140:
	RA = 0x800178D8; //ZZ_17790_148
	A0 = S0 + 4;
	ZZ_CLOCKCYCLES(2,0x80042EFC);
	goto ZZ_42EFC;
ZZ_17790_148:
	RA = 0x800178E0; //ZZ_17790_150
	A0 = S0 - 108;
	ZZ_CLOCKCYCLES(2,0x800180A0);
	goto ZZ_180A0;
ZZ_17790_150:
	V0 = 0x10000;
	V0 |= 0xF400;
	A0 = 0xE0000;
	A0 |= 0x1000;
	V1 = 0x5D0000;
	V1 |= 0xC000;
	EMU_Write32(S0 - 108,R0); //+ 0xFFFFFF94
	AT = 0x80050000;
	EMU_Write32(AT + 30824,R0); //+ 0x7868
	AT = 0x80050000;
	EMU_Write32(AT + 30828,V0); //+ 0x786C
	AT = 0x80050000;
	EMU_Write32(AT + 30832,R0); //+ 0x7870
	AT = 0x80050000;
	EMU_Write32(AT + 30836,R0); //+ 0x7874
	AT = 0x80050000;
	EMU_Write32(AT + 30840,R0); //+ 0x7878
	AT = 0x80050000;
	EMU_Write32(AT + 30856,R0); //+ 0x7888
	AT = 0x80050000;
	EMU_Write32(AT + 30860,A0); //+ 0x788C
	AT = 0x80050000;
	EMU_Write32(AT + 30864,V1); //+ 0x7890
	AT = 0x80050000;
	EMU_Write32(AT + 30892,R0); //+ 0x78AC
	AT = 0x80060000;
	EMU_Write32(AT + 6460,R0); //+ 0x193C
	AT = 0x80060000;
	EMU_Write32(AT + 6464,R0); //+ 0x1940
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(34);
	ZZ_JUMPREGISTER(0x8002544C,ZZ_253A0_AC);
	ZZ_JUMPREGISTER(0x80031F44,ZZ_31EB4_90);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80017790,0x800177EC,ZZ_17790);
ZZ_MARK_TARGET(0x800177EC,0x80017808,ZZ_17790_5C);
ZZ_MARK_TARGET(0x80017808,0x80017810,ZZ_17790_78);
ZZ_MARK_TARGET(0x80017810,0x80017818,ZZ_17790_80);
ZZ_MARK_TARGET(0x80017818,0x8001781C,ZZ_17790_88);
ZZ_MARK_TARGET(0x8001781C,0x80017824,ZZ_17790_8C);
ZZ_MARK_TARGET(0x80017824,0x80017838,ZZ_17790_94);
ZZ_MARK_TARGET(0x80017838,0x80017844,ZZ_17790_A8);
ZZ_MARK_TARGET(0x80017844,0x800178D0,ZZ_17790_B4);
ZZ_MARK_TARGET(0x800178D0,0x800178D8,ZZ_17790_140);
ZZ_MARK_TARGET(0x800178D8,0x800178E0,ZZ_17790_148);
ZZ_MARK_TARGET(0x800178E0,0x80017968,ZZ_17790_150);
