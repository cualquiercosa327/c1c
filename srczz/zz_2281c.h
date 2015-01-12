#ifdef ZZ_INCLUDE_CODE
ZZ_2281C:
	SP -= 120;
	V1 = A0;
	EMU_Write32(SP + 116,RA); //+ 0x74
	EMU_Write32(SP + 112,S2); //+ 0x70
	EMU_Write32(SP + 108,S1); //+ 0x6C
	EMU_Write32(SP + 104,S0); //+ 0x68
	V0 = EMU_ReadU32(V1);
	S2 = A1;
	EMU_Write32(SP + 24,V0); //+ 0x18
	V0 = EMU_ReadU32(V1 + 4); //+ 0x4
	S1 = SP + 40;
	A0 = S1;
	S0 = 0x80060000;
	S0 += 2916;
	EMU_Write32(SP + 28,V0); //+ 0x1C
	T1 = EMU_ReadU32(V1 + 8); //+ 0x8
	V0 = EMU_ReadU32(S0);
	V1 = EMU_ReadU32(S0 + 8); //+ 0x8
	T0 = EMU_ReadU32(S0 + 20); //+ 0x14
	A1 = SP + 24;
	A2 = SP + 88;
	A3 = SP + 92;
	EMU_Write32(SP + 40,V0); //+ 0x28
	V0 = SP + 96;
	EMU_Write32(SP + 44,V1); //+ 0x2C
	EMU_Write32(SP + 48,T0); //+ 0x30
	EMU_Write32(SP + 32,T1); //+ 0x20
	RA = 0x80022890; //ZZ_2281C_74
	EMU_Write32(SP + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(29,0x800245B0);
	goto ZZ_245B0;
ZZ_2281C_74:
	if ((int32_t)V0 <= 0)
	{
		A0 = S1;
		ZZ_CLOCKCYCLES(2,0x800228E8);
		goto ZZ_2281C_CC;
	}
	A0 = S1;
	V1 = EMU_ReadU32(SP + 96); //+ 0x60
	V0 = 0x1;
	EMU_Write32(SP + 20,V0); //+ 0x14
	EMU_Write32(SP + 16,V1); //+ 0x10
	A2 = EMU_ReadU32(SP + 92); //+ 0x5C
	A1 = SP + 24;
	RA = 0x800228B8; //ZZ_2281C_9C
	A3 = R0;
	ZZ_CLOCKCYCLES(10,0x800248CC);
	goto ZZ_248CC;
ZZ_2281C_9C:
	A3 = -1;
	if (!S2)
	{
		A2 = SP + 72;
		ZZ_CLOCKCYCLES(3,0x800228C8);
		goto ZZ_2281C_AC;
	}
	A2 = SP + 72;
	A3 = 0x100;
	ZZ_CLOCKCYCLES(4,0x800228C8);
ZZ_2281C_AC:
	A0 = S1;
	RA = 0x800228D4; //ZZ_2281C_B8
	A1 = V0;
	ZZ_CLOCKCYCLES(3,0x800240D4);
	goto ZZ_240D4;
ZZ_2281C_B8:
	A0 = EMU_ReadU32(SP + 72); //+ 0x48
	A1 = EMU_ReadU32(SP + 76); //+ 0x4C
	A2 = EMU_ReadU32(SP + 80); //+ 0x50
	ZZ_CLOCKCYCLES(5,0x8002294C);
	goto ZZ_2281C_130;
ZZ_2281C_CC:
	if ((int32_t)V0 >= 0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(2,0x80022940);
		goto ZZ_2281C_124;
	}
	V0 = 0x1;
	V1 = EMU_ReadU32(SP + 96); //+ 0x60
	EMU_Write32(SP + 20,V0); //+ 0x14
	EMU_Write32(SP + 16,V1); //+ 0x10
	A2 = EMU_ReadU32(SP + 88); //+ 0x58
	A0 = S1;
	A1 = SP + 24;
	RA = 0x80022910; //ZZ_2281C_F4
	A3 = 0x1;
	ZZ_CLOCKCYCLES(10,0x800248CC);
	goto ZZ_248CC;
ZZ_2281C_F4:
	A3 = -1;
	if (!S2)
	{
		A2 = SP + 72;
		ZZ_CLOCKCYCLES(3,0x80022920);
		goto ZZ_2281C_104;
	}
	A2 = SP + 72;
	A3 = 0x100;
	ZZ_CLOCKCYCLES(4,0x80022920);
ZZ_2281C_104:
	A0 = S1;
	RA = 0x8002292C; //ZZ_2281C_110
	A1 = V0;
	ZZ_CLOCKCYCLES(3,0x800240D4);
	goto ZZ_240D4;
ZZ_2281C_110:
	A0 = EMU_ReadU32(SP + 72); //+ 0x48
	A1 = EMU_ReadU32(SP + 76); //+ 0x4C
	A2 = EMU_ReadU32(SP + 80); //+ 0x50
	ZZ_CLOCKCYCLES(5,0x8002294C);
	goto ZZ_2281C_130;
ZZ_2281C_124:
	A0 = EMU_ReadU32(S0);
	A1 = EMU_ReadU32(S0 + 8); //+ 0x8
	A2 = EMU_ReadU32(S0 + 20); //+ 0x14
	ZZ_CLOCKCYCLES(3,0x8002294C);
ZZ_2281C_130:
	RA = 0x80022954; //ZZ_2281C_138
	A3 = R0;
	ZZ_CLOCKCYCLES(2,0x80020304);
	goto ZZ_20304;
ZZ_2281C_138:
	RA = 0x8002295C; //ZZ_2281C_140
	A0 = SP + 24;
	ZZ_CLOCKCYCLES(2,0x80023424);
	goto ZZ_23424;
ZZ_2281C_140:
	RA = EMU_ReadU32(SP + 116); //+ 0x74
	S2 = EMU_ReadU32(SP + 112); //+ 0x70
	S1 = EMU_ReadU32(SP + 108); //+ 0x6C
	S0 = EMU_ReadU32(SP + 104); //+ 0x68
	SP += 120;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x80027124,ZZ_26F14_210);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8002281C,ZZ_2281C);
ZZ_MARK(0x80022820);
ZZ_MARK(0x80022824);
ZZ_MARK(0x80022828);
ZZ_MARK(0x8002282C);
ZZ_MARK(0x80022830);
ZZ_MARK(0x80022834);
ZZ_MARK(0x80022838);
ZZ_MARK(0x8002283C);
ZZ_MARK(0x80022840);
ZZ_MARK(0x80022844);
ZZ_MARK(0x80022848);
ZZ_MARK(0x8002284C);
ZZ_MARK(0x80022850);
ZZ_MARK(0x80022854);
ZZ_MARK(0x80022858);
ZZ_MARK(0x8002285C);
ZZ_MARK(0x80022860);
ZZ_MARK(0x80022864);
ZZ_MARK(0x80022868);
ZZ_MARK(0x8002286C);
ZZ_MARK(0x80022870);
ZZ_MARK(0x80022874);
ZZ_MARK(0x80022878);
ZZ_MARK(0x8002287C);
ZZ_MARK(0x80022880);
ZZ_MARK(0x80022884);
ZZ_MARK(0x80022888);
ZZ_MARK(0x8002288C);
ZZ_MARK_TARGET(0x80022890,ZZ_2281C_74);
ZZ_MARK(0x80022894);
ZZ_MARK(0x80022898);
ZZ_MARK(0x8002289C);
ZZ_MARK(0x800228A0);
ZZ_MARK(0x800228A4);
ZZ_MARK(0x800228A8);
ZZ_MARK(0x800228AC);
ZZ_MARK(0x800228B0);
ZZ_MARK(0x800228B4);
ZZ_MARK_TARGET(0x800228B8,ZZ_2281C_9C);
ZZ_MARK(0x800228BC);
ZZ_MARK(0x800228C0);
ZZ_MARK(0x800228C4);
ZZ_MARK_TARGET(0x800228C8,ZZ_2281C_AC);
ZZ_MARK(0x800228CC);
ZZ_MARK(0x800228D0);
ZZ_MARK_TARGET(0x800228D4,ZZ_2281C_B8);
ZZ_MARK(0x800228D8);
ZZ_MARK(0x800228DC);
ZZ_MARK(0x800228E0);
ZZ_MARK(0x800228E4);
ZZ_MARK_TARGET(0x800228E8,ZZ_2281C_CC);
ZZ_MARK(0x800228EC);
ZZ_MARK(0x800228F0);
ZZ_MARK(0x800228F4);
ZZ_MARK(0x800228F8);
ZZ_MARK(0x800228FC);
ZZ_MARK(0x80022900);
ZZ_MARK(0x80022904);
ZZ_MARK(0x80022908);
ZZ_MARK(0x8002290C);
ZZ_MARK_TARGET(0x80022910,ZZ_2281C_F4);
ZZ_MARK(0x80022914);
ZZ_MARK(0x80022918);
ZZ_MARK(0x8002291C);
ZZ_MARK_TARGET(0x80022920,ZZ_2281C_104);
ZZ_MARK(0x80022924);
ZZ_MARK(0x80022928);
ZZ_MARK_TARGET(0x8002292C,ZZ_2281C_110);
ZZ_MARK(0x80022930);
ZZ_MARK(0x80022934);
ZZ_MARK(0x80022938);
ZZ_MARK(0x8002293C);
ZZ_MARK_TARGET(0x80022940,ZZ_2281C_124);
ZZ_MARK(0x80022944);
ZZ_MARK(0x80022948);
ZZ_MARK_TARGET(0x8002294C,ZZ_2281C_130);
ZZ_MARK(0x80022950);
ZZ_MARK_TARGET(0x80022954,ZZ_2281C_138);
ZZ_MARK(0x80022958);
ZZ_MARK_TARGET(0x8002295C,ZZ_2281C_140);
ZZ_MARK(0x80022960);
ZZ_MARK(0x80022964);
ZZ_MARK(0x80022968);
ZZ_MARK(0x8002296C);
ZZ_MARK(0x80022970);
ZZ_MARK(0x80022974);
