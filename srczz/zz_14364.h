#ifdef ZZ_INCLUDE_CODE
ZZ_14364:
	SP -= 32;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = A1;
	EMU_Write32(SP + 24,S2); //+ 0x18
	S2 = A2;
	V0 = S1 & 0x2;
	if (V0)
	{
		EMU_Write32(SP + 28,RA); //+ 0x1C
		ZZ_CLOCKCYCLES(10,0x800143C8);
		goto ZZ_14364_64;
	}
	EMU_Write32(SP + 28,RA); //+ 0x1C
	A0 = EMU_ReadU32(S0);
	V0 = 0x63960000;
	V0 |= 0x347F;
	if (A0 != V0)
	{
		V0 = A0 & 0x1;
		ZZ_CLOCKCYCLES(15,0x800143A8);
		goto ZZ_14364_44;
	}
	V0 = A0 & 0x1;
	V0 = -10;
	ZZ_CLOCKCYCLES(17,0x80014434);
	goto ZZ_14364_D0;
ZZ_14364_44:
	if (!V0)
	{
		ZZ_CLOCKCYCLES(2,0x800143C4);
		goto ZZ_14364_60;
	}
	RA = 0x800143B8; //ZZ_14364_54
	ZZ_CLOCKCYCLES(4,0x80014C48);
	goto ZZ_14C48;
ZZ_14364_54:
	EMU_Write32(S0,V0);
	S0 = V0;
	ZZ_CLOCKCYCLES(3,0x800143C8);
	goto ZZ_14364_64;
ZZ_14364_60:
	S0 = A0;
	ZZ_CLOCKCYCLES(1,0x800143C8);
ZZ_14364_64:
	A0 = EMU_ReadU32(S0);
	V0 = A0 & 0x1;
	if (V0)
	{
		A1 = S1;
		ZZ_CLOCKCYCLES(5,0x80014410);
		goto ZZ_14364_AC;
	}
	A1 = S1;
	if (!S2)
	{
		ZZ_CLOCKCYCLES(7,0x80014404);
		goto ZZ_14364_A0;
	}
	RA = 0x800143EC; //ZZ_14364_88
	ZZ_CLOCKCYCLES(9,0x8001424C);
	goto ZZ_1424C;
ZZ_14364_88:
	if (!V0)
	{
		A1 = S1;
		ZZ_CLOCKCYCLES(2,0x80014404);
		goto ZZ_14364_A0;
	}
	A1 = S1;
	A0 = EMU_ReadU32(V0 + 20); //+ 0x14
	A3 = EMU_ReadU32(S0 + 4); //+ 0x4
	RA = 0x80014404; //ZZ_14364_A0
	A2 = S2;
	ZZ_CLOCKCYCLES(6,0x800140DC);
	goto ZZ_140DC;
ZZ_14364_A0:
	V0 = EMU_ReadU32(S0);
	ZZ_CLOCKCYCLES(3,0x80014434);
	goto ZZ_14364_D0;
ZZ_14364_AC:
	A3 = EMU_ReadU32(S0 + 4); //+ 0x4
	RA = 0x8001441C; //ZZ_14364_B8
	A2 = S2;
	ZZ_CLOCKCYCLES(3,0x800140DC);
	goto ZZ_140DC;
ZZ_14364_B8:
	V0 = EMU_ReadU32(S0);
	V1 = V0 & 0x1;
	if (!V1)
	{
		ZZ_CLOCKCYCLES(5,0x80014434);
		goto ZZ_14364_D0;
	}
	V0 = R0;
	ZZ_CLOCKCYCLES(6,0x80014434);
ZZ_14364_D0:
	RA = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x80027904,ZZ_278D8_2C);
	ZZ_JUMPREGISTER(0x80039214,ZZ_39198_7C);
	ZZ_JUMPREGISTER(0x800185EC,ZZ_18598_54);
	ZZ_JUMPREGISTER(0x8001C500,ZZ_1C478_88);
	ZZ_JUMPREGISTER(0x8001FF28,ZZ_1FC0C_31C);
	ZZ_JUMPREGISTER(0x80028D28,ZZ_28C9C_8C);
	ZZ_JUMPREGISTER(0x80032E20,ZZ_32DA4_7C);
	ZZ_JUMPREGISTER(0x80028A78,ZZ_289C4_B4);
	ZZ_JUMPREGISTER(0x80028F8C,ZZ_28EBC_D0);
	ZZ_JUMPREGISTER(0x800300FC,ZZ_300D8_24);
	ZZ_JUMPREGISTER(0x8002F254,ZZ_2F15C_F8);
	ZZ_JUMPREGISTER(0x80029368,ZZ_29254_114);
	ZZ_JUMPREGISTER(0x8002F268,ZZ_2F15C_10C);
	ZZ_JUMPREGISTER(0x8002F27C,ZZ_2F15C_120);
	ZZ_JUMPREGISTER(0x8002F290,ZZ_2F15C_134);
	ZZ_JUMPREGISTER(0x8002F2A4,ZZ_2F15C_148);
	ZZ_JUMPREGISTER(0x8002F2B8,ZZ_2F15C_15C);
	ZZ_JUMPREGISTER(0x8002F2CC,ZZ_2F15C_170);
	ZZ_JUMPREGISTER(0x80019C44,ZZ_19AB4_190);
	ZZ_JUMPREGISTER(0x80023134,ZZ_230E8_4C);
	ZZ_JUMPREGISTER(0x8002FB74,ZZ_2F9D4_1A0);
	ZZ_JUMPREGISTER(0x80022D44,ZZ_22CD0_74);
	ZZ_JUMPREGISTER(0x800203F8,ZZ_20304_F4);
	ZZ_JUMPREGISTER(0x800280D0,ZZ_28060_70);
	ZZ_JUMPREGISTER(0x8001A63C,ZZ_1A5DC_60);
	ZZ_JUMPREGISTER(0x8001A004,ZZ_19F94_70);
	ZZ_JUMPREGISTER(0x8002FCBC,ZZ_2F9D4_2E8);
	ZZ_JUMPREGISTER(0x80028150,ZZ_28060_F0);
	ZZ_JUMPREGISTER(0x8001A6B4,ZZ_1A5DC_D8);
	ZZ_JUMPREGISTER(0x8001AA88,ZZ_1AA44_44);
	ZZ_JUMPREGISTER(0x800205D8,ZZ_20304_2D4);
	ZZ_JUMPREGISTER(0x8001AAAC,ZZ_1AA44_68);
	ZZ_JUMPREGISTER(0x8001A478,ZZ_1A374_104);
	ZZ_JUMPREGISTER(0x8001AAF0,ZZ_1AA44_AC);
	ZZ_JUMPREGISTER(0x80026BB4,ZZ_26A38_17C);
	ZZ_JUMPREGISTER(0x8001AB74,ZZ_1AA44_130);
	ZZ_JUMPREGISTER(0x8001AB20,ZZ_1AA44_DC);
	ZZ_JUMPREGISTER(0x80033AC4,ZZ_337BC_308);
	ZZ_JUMPREGISTER(0x80034368,ZZ_34204_164);
	ZZ_JUMPREGISTER(0x8002EC3C,ZZ_2EB98_A4);
	ZZ_JUMPREGISTER(0x8001AB48,ZZ_1AA44_104);
	ZZ_JUMPREGISTER(0x80033A78,ZZ_337BC_2BC);
	ZZ_JUMPREGISTER(0x800342C8,ZZ_34204_C4);
	ZZ_JUMPREGISTER(0x80026884,ZZ_26700_184);
	ZZ_JUMPREGISTER(0x800208D0,ZZ_20304_5CC);
	ZZ_JUMPREGISTER(0x8003430C,ZZ_34204_108);
	ZZ_JUMPREGISTER(0x800343F0,ZZ_34204_1EC);
	ZZ_JUMPREGISTER(0x80021C14,ZZ_21B5C_B8);
	ZZ_JUMPREGISTER(0x8002FFA8,ZZ_2FF84_24);
	ZZ_JUMPREGISTER(0x8001843C,ZZ_183B8_84);
	ZZ_JUMPREGISTER(0x80029924,ZZ_297AC_178);
	ZZ_JUMPREGISTER(0x8001BFDC,ZZ_1BEBC_120);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80014364,ZZ_14364);
ZZ_MARK(0x80014368);
ZZ_MARK(0x8001436C);
ZZ_MARK(0x80014370);
ZZ_MARK(0x80014374);
ZZ_MARK(0x80014378);
ZZ_MARK(0x8001437C);
ZZ_MARK(0x80014380);
ZZ_MARK(0x80014384);
ZZ_MARK(0x80014388);
ZZ_MARK(0x8001438C);
ZZ_MARK(0x80014390);
ZZ_MARK(0x80014394);
ZZ_MARK(0x80014398);
ZZ_MARK(0x8001439C);
ZZ_MARK(0x800143A0);
ZZ_MARK(0x800143A4);
ZZ_MARK_TARGET(0x800143A8,ZZ_14364_44);
ZZ_MARK(0x800143AC);
ZZ_MARK(0x800143B0);
ZZ_MARK(0x800143B4);
ZZ_MARK_TARGET(0x800143B8,ZZ_14364_54);
ZZ_MARK(0x800143BC);
ZZ_MARK(0x800143C0);
ZZ_MARK_TARGET(0x800143C4,ZZ_14364_60);
ZZ_MARK_TARGET(0x800143C8,ZZ_14364_64);
ZZ_MARK(0x800143CC);
ZZ_MARK(0x800143D0);
ZZ_MARK(0x800143D4);
ZZ_MARK(0x800143D8);
ZZ_MARK(0x800143DC);
ZZ_MARK(0x800143E0);
ZZ_MARK(0x800143E4);
ZZ_MARK(0x800143E8);
ZZ_MARK_TARGET(0x800143EC,ZZ_14364_88);
ZZ_MARK(0x800143F0);
ZZ_MARK(0x800143F4);
ZZ_MARK(0x800143F8);
ZZ_MARK(0x800143FC);
ZZ_MARK(0x80014400);
ZZ_MARK_TARGET(0x80014404,ZZ_14364_A0);
ZZ_MARK(0x80014408);
ZZ_MARK(0x8001440C);
ZZ_MARK_TARGET(0x80014410,ZZ_14364_AC);
ZZ_MARK(0x80014414);
ZZ_MARK(0x80014418);
ZZ_MARK_TARGET(0x8001441C,ZZ_14364_B8);
ZZ_MARK(0x80014420);
ZZ_MARK(0x80014424);
ZZ_MARK(0x80014428);
ZZ_MARK(0x8001442C);
ZZ_MARK(0x80014430);
ZZ_MARK_TARGET(0x80014434,ZZ_14364_D0);
ZZ_MARK(0x80014438);
ZZ_MARK(0x8001443C);
ZZ_MARK(0x80014440);
ZZ_MARK(0x80014444);
ZZ_MARK(0x80014448);
ZZ_MARK(0x8001444C);