#ifdef ZZ_INCLUDE_CODE
ZZ_17800:
	SP -= 328;
	EMU_Write32(SP + 304,S2); //+ 0x130
	S2 = EMU_ReadU32(SP + 348); //+ 0x15C
	EMU_Write32(SP + 308,S3); //+ 0x134
	S3 = EMU_ReadU32(SP + 344); //+ 0x158
	EMU_Write32(SP + 320,S6); //+ 0x140
	S6 = A0;
	EMU_Write32(SP + 312,S4); //+ 0x138
	S4 = A1;
	EMU_Write32(SP + 316,S5); //+ 0x13C
	S5 = A2;
	EMU_Write32(SP + 296,S0); //+ 0x128
	S0 = A3;
	V1 = SP + 39;
	V0 = -16;
	EMU_Write32(SP + 300,S1); //+ 0x12C
	S1 = V1 & V0;
	if (!S0)
	{
		EMU_Write32(SP + 324,RA); //+ 0x144
		ZZ_CLOCKCYCLES(19,0x80017960);
		goto ZZ_17800_160;
	}
	EMU_Write32(SP + 324,RA); //+ 0x144
	A0 = 0x2;
	RA = 0x80017858; //ZZ_17800_58
	A3 = SP + 16;
	ZZ_CLOCKCYCLES(22,0x800174A4);
	goto ZZ_174A4;
ZZ_17800_58:
	V0 = 0x1;
	if (S6 != V0)
	{
		V0 = S0 & 0xF;
		ZZ_CLOCKCYCLES(3,0x800178DC);
		goto ZZ_17800_DC;
	}
	V0 = S0 & 0xF;
	if (!V0)
	{
		A2 = S0;
		ZZ_CLOCKCYCLES(5,0x800178C8);
		goto ZZ_17800_C8;
	}
	A2 = S0;
	V1 = EMU_ReadS16(SP + 20); //+ 0x14
	V0 = EMU_ReadS16(SP + 22); //+ 0x16
	EMU_SMultiply(V1,V0);
	S2 = R0;
	A1 = S1;
	T0 = LO;
	A0 = T0 << 1;
	V0 = A0;
	if (!V0)
	{
		A0 -= 1;
		ZZ_CLOCKCYCLES(16,0x800178B4);
		goto ZZ_17800_B4;
	}
	A0 -= 1;
	ZZ_CLOCKCYCLES(16,0x80017898);
ZZ_17800_98:
	V0 = EMU_ReadU8(A2);
	A2 += 1;
	V1 = A0;
	A0 -= 1;
	EMU_Write8(A1,V0);
	if (V1)
	{
		A1 += 1;
		ZZ_CLOCKCYCLES(7,0x80017898);
		goto ZZ_17800_98;
	}
	A1 += 1;
	ZZ_CLOCKCYCLES(7,0x800178B4);
ZZ_17800_B4:
	A0 = SP + 16;
	RA = 0x800178C0; //ZZ_17800_C0
	A1 = S1;
	ZZ_CLOCKCYCLES(3,0x8004C5A0);
	goto ZZ_4C5A0;
ZZ_17800_C0:
	ZZ_CLOCKCYCLES(2,0x80017958);
	goto ZZ_17800_158;
ZZ_17800_C8:
	A0 = SP + 16;
	RA = 0x800178D4; //ZZ_17800_D4
	A1 = S0;
	ZZ_CLOCKCYCLES(3,0x8004C5A0);
	goto ZZ_4C5A0;
ZZ_17800_D4:
	ZZ_CLOCKCYCLES(2,0x80017950);
	goto ZZ_17800_150;
ZZ_17800_DC:
	if (!V0)
	{
		A0 = SP + 16;
		ZZ_CLOCKCYCLES(2,0x80017948);
		goto ZZ_17800_148;
	}
	A0 = SP + 16;
	S2 = R0;
	RA = 0x800178F0; //ZZ_17800_F0
	A1 = S1;
	ZZ_CLOCKCYCLES(5,0x8004C604);
	goto ZZ_4C604;
ZZ_17800_F0:
	RA = 0x800178F8; //ZZ_17800_F8
	A0 = R0;
	ZZ_CLOCKCYCLES(2,0x8004C2DC);
	goto ZZ_4C2DC;
ZZ_17800_F8:
	V1 = EMU_ReadS16(SP + 20); //+ 0x14
	V0 = EMU_ReadS16(SP + 22); //+ 0x16
	EMU_SMultiply(V1,V0);
	A2 = S1;
	A1 = S0;
	T0 = LO;
	A0 = T0 << 1;
	V0 = A0;
	if (!V0)
	{
		A0 -= 1;
		ZZ_CLOCKCYCLES(11,0x80017960);
		goto ZZ_17800_160;
	}
	A0 -= 1;
	ZZ_CLOCKCYCLES(11,0x80017924);
ZZ_17800_124:
	V0 = EMU_ReadU8(A2);
	A2 += 1;
	V1 = A0;
	A0 -= 1;
	EMU_Write8(A1,V0);
	if (V1)
	{
		A1 += 1;
		ZZ_CLOCKCYCLES(7,0x80017924);
		goto ZZ_17800_124;
	}
	A1 += 1;
	ZZ_CLOCKCYCLES(9,0x80017960);
	goto ZZ_17800_160;
ZZ_17800_148:
	RA = 0x80017950; //ZZ_17800_150
	A1 = S0;
	ZZ_CLOCKCYCLES(2,0x8004C604);
	goto ZZ_4C604;
ZZ_17800_150:
	if (S2)
	{
		ZZ_CLOCKCYCLES(2,0x80017960);
		goto ZZ_17800_160;
	}
	ZZ_CLOCKCYCLES(2,0x80017958);
ZZ_17800_158:
	RA = 0x80017960; //ZZ_17800_160
	A0 = R0;
	ZZ_CLOCKCYCLES(2,0x8004C2DC);
	goto ZZ_4C2DC;
ZZ_17800_160:
	if (!S3)
	{
		A1 = S4;
		ZZ_CLOCKCYCLES(2,0x80017A80);
		goto ZZ_17800_280;
	}
	A1 = S4;
	A0 = 0x1;
	A2 = S5;
	RA = 0x80017978; //ZZ_17800_178
	A3 = SP + 16;
	ZZ_CLOCKCYCLES(6,0x800174A4);
	goto ZZ_174A4;
ZZ_17800_178:
	V0 = 0x1;
	if (S6 != V0)
	{
		V0 = S3 & 0xF;
		ZZ_CLOCKCYCLES(3,0x800179FC);
		goto ZZ_17800_1FC;
	}
	V0 = S3 & 0xF;
	if (!V0)
	{
		A2 = S3;
		ZZ_CLOCKCYCLES(5,0x800179E8);
		goto ZZ_17800_1E8;
	}
	A2 = S3;
	V1 = EMU_ReadS16(SP + 20); //+ 0x14
	V0 = EMU_ReadS16(SP + 22); //+ 0x16
	EMU_SMultiply(V1,V0);
	S2 = R0;
	A1 = S1;
	T0 = LO;
	A0 = T0 << 1;
	V0 = A0;
	if (!V0)
	{
		A0 -= 1;
		ZZ_CLOCKCYCLES(16,0x800179D4);
		goto ZZ_17800_1D4;
	}
	A0 -= 1;
	ZZ_CLOCKCYCLES(16,0x800179B8);
ZZ_17800_1B8:
	V0 = EMU_ReadU8(A2);
	A2 += 1;
	V1 = A0;
	A0 -= 1;
	EMU_Write8(A1,V0);
	if (V1)
	{
		A1 += 1;
		ZZ_CLOCKCYCLES(7,0x800179B8);
		goto ZZ_17800_1B8;
	}
	A1 += 1;
	ZZ_CLOCKCYCLES(7,0x800179D4);
ZZ_17800_1D4:
	A0 = SP + 16;
	RA = 0x800179E0; //ZZ_17800_1E0
	A1 = S1;
	ZZ_CLOCKCYCLES(3,0x8004C5A0);
	goto ZZ_4C5A0;
ZZ_17800_1E0:
	ZZ_CLOCKCYCLES(2,0x80017A78);
	goto ZZ_17800_278;
ZZ_17800_1E8:
	A0 = SP + 16;
	RA = 0x800179F4; //ZZ_17800_1F4
	A1 = S3;
	ZZ_CLOCKCYCLES(3,0x8004C5A0);
	goto ZZ_4C5A0;
ZZ_17800_1F4:
	ZZ_CLOCKCYCLES(2,0x80017A70);
	goto ZZ_17800_270;
ZZ_17800_1FC:
	if (!V0)
	{
		A0 = SP + 16;
		ZZ_CLOCKCYCLES(2,0x80017A68);
		goto ZZ_17800_268;
	}
	A0 = SP + 16;
	S2 = R0;
	RA = 0x80017A10; //ZZ_17800_210
	A1 = S1;
	ZZ_CLOCKCYCLES(5,0x8004C604);
	goto ZZ_4C604;
ZZ_17800_210:
	RA = 0x80017A18; //ZZ_17800_218
	A0 = R0;
	ZZ_CLOCKCYCLES(2,0x8004C2DC);
	goto ZZ_4C2DC;
ZZ_17800_218:
	V1 = EMU_ReadS16(SP + 20); //+ 0x14
	V0 = EMU_ReadS16(SP + 22); //+ 0x16
	EMU_SMultiply(V1,V0);
	A2 = S1;
	A1 = S3;
	T0 = LO;
	A0 = T0 << 1;
	V0 = A0;
	if (!V0)
	{
		A0 -= 1;
		ZZ_CLOCKCYCLES(11,0x80017A80);
		goto ZZ_17800_280;
	}
	A0 -= 1;
	ZZ_CLOCKCYCLES(11,0x80017A44);
ZZ_17800_244:
	V0 = EMU_ReadU8(A2);
	A2 += 1;
	V1 = A0;
	A0 -= 1;
	EMU_Write8(A1,V0);
	if (V1)
	{
		A1 += 1;
		ZZ_CLOCKCYCLES(7,0x80017A44);
		goto ZZ_17800_244;
	}
	A1 += 1;
	V0 = S2;
	ZZ_CLOCKCYCLES(9,0x80017A84);
	goto ZZ_17800_284;
ZZ_17800_268:
	RA = 0x80017A70; //ZZ_17800_270
	A1 = S3;
	ZZ_CLOCKCYCLES(2,0x8004C604);
	goto ZZ_4C604;
ZZ_17800_270:
	if (S2)
	{
		V0 = S2;
		ZZ_CLOCKCYCLES(2,0x80017A84);
		goto ZZ_17800_284;
	}
	V0 = S2;
	ZZ_CLOCKCYCLES(2,0x80017A78);
ZZ_17800_278:
	RA = 0x80017A80; //ZZ_17800_280
	A0 = R0;
	ZZ_CLOCKCYCLES(2,0x8004C2DC);
	goto ZZ_4C2DC;
ZZ_17800_280:
	V0 = S2;
	ZZ_CLOCKCYCLES(1,0x80017A84);
ZZ_17800_284:
	RA = EMU_ReadU32(SP + 324); //+ 0x144
	S6 = EMU_ReadU32(SP + 320); //+ 0x140
	S5 = EMU_ReadU32(SP + 316); //+ 0x13C
	S4 = EMU_ReadU32(SP + 312); //+ 0x138
	S3 = EMU_ReadU32(SP + 308); //+ 0x134
	S2 = EMU_ReadU32(SP + 304); //+ 0x130
	S1 = EMU_ReadU32(SP + 300); //+ 0x12C
	S0 = EMU_ReadU32(SP + 296); //+ 0x128
	SP += 328;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(11);
	ZZ_JUMPREGISTER(0x800278C8,ZZ_27874_54);
	ZZ_JUMPREGISTER(0x80035B7C,ZZ_3578C_3F0);
	ZZ_JUMPREGISTER(0x80035B9C,ZZ_3578C_410);
	ZZ_JUMPREGISTER(0x80035BBC,ZZ_3578C_430);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80017800,ZZ_17800);
ZZ_MARK(0x80017804);
ZZ_MARK(0x80017808);
ZZ_MARK(0x8001780C);
ZZ_MARK(0x80017810);
ZZ_MARK(0x80017814);
ZZ_MARK(0x80017818);
ZZ_MARK(0x8001781C);
ZZ_MARK(0x80017820);
ZZ_MARK(0x80017824);
ZZ_MARK(0x80017828);
ZZ_MARK(0x8001782C);
ZZ_MARK(0x80017830);
ZZ_MARK(0x80017834);
ZZ_MARK(0x80017838);
ZZ_MARK(0x8001783C);
ZZ_MARK(0x80017840);
ZZ_MARK(0x80017844);
ZZ_MARK(0x80017848);
ZZ_MARK(0x8001784C);
ZZ_MARK(0x80017850);
ZZ_MARK(0x80017854);
ZZ_MARK_TARGET(0x80017858,ZZ_17800_58);
ZZ_MARK(0x8001785C);
ZZ_MARK(0x80017860);
ZZ_MARK(0x80017864);
ZZ_MARK(0x80017868);
ZZ_MARK(0x8001786C);
ZZ_MARK(0x80017870);
ZZ_MARK(0x80017874);
ZZ_MARK(0x80017878);
ZZ_MARK(0x8001787C);
ZZ_MARK(0x80017880);
ZZ_MARK(0x80017884);
ZZ_MARK(0x80017888);
ZZ_MARK(0x8001788C);
ZZ_MARK(0x80017890);
ZZ_MARK(0x80017894);
ZZ_MARK_TARGET(0x80017898,ZZ_17800_98);
ZZ_MARK(0x8001789C);
ZZ_MARK(0x800178A0);
ZZ_MARK(0x800178A4);
ZZ_MARK(0x800178A8);
ZZ_MARK(0x800178AC);
ZZ_MARK(0x800178B0);
ZZ_MARK_TARGET(0x800178B4,ZZ_17800_B4);
ZZ_MARK(0x800178B8);
ZZ_MARK(0x800178BC);
ZZ_MARK_TARGET(0x800178C0,ZZ_17800_C0);
ZZ_MARK(0x800178C4);
ZZ_MARK_TARGET(0x800178C8,ZZ_17800_C8);
ZZ_MARK(0x800178CC);
ZZ_MARK(0x800178D0);
ZZ_MARK_TARGET(0x800178D4,ZZ_17800_D4);
ZZ_MARK(0x800178D8);
ZZ_MARK_TARGET(0x800178DC,ZZ_17800_DC);
ZZ_MARK(0x800178E0);
ZZ_MARK(0x800178E4);
ZZ_MARK(0x800178E8);
ZZ_MARK(0x800178EC);
ZZ_MARK_TARGET(0x800178F0,ZZ_17800_F0);
ZZ_MARK(0x800178F4);
ZZ_MARK_TARGET(0x800178F8,ZZ_17800_F8);
ZZ_MARK(0x800178FC);
ZZ_MARK(0x80017900);
ZZ_MARK(0x80017904);
ZZ_MARK(0x80017908);
ZZ_MARK(0x8001790C);
ZZ_MARK(0x80017910);
ZZ_MARK(0x80017914);
ZZ_MARK(0x80017918);
ZZ_MARK(0x8001791C);
ZZ_MARK(0x80017920);
ZZ_MARK_TARGET(0x80017924,ZZ_17800_124);
ZZ_MARK(0x80017928);
ZZ_MARK(0x8001792C);
ZZ_MARK(0x80017930);
ZZ_MARK(0x80017934);
ZZ_MARK(0x80017938);
ZZ_MARK(0x8001793C);
ZZ_MARK(0x80017940);
ZZ_MARK(0x80017944);
ZZ_MARK_TARGET(0x80017948,ZZ_17800_148);
ZZ_MARK(0x8001794C);
ZZ_MARK_TARGET(0x80017950,ZZ_17800_150);
ZZ_MARK(0x80017954);
ZZ_MARK_TARGET(0x80017958,ZZ_17800_158);
ZZ_MARK(0x8001795C);
ZZ_MARK_TARGET(0x80017960,ZZ_17800_160);
ZZ_MARK(0x80017964);
ZZ_MARK(0x80017968);
ZZ_MARK(0x8001796C);
ZZ_MARK(0x80017970);
ZZ_MARK(0x80017974);
ZZ_MARK_TARGET(0x80017978,ZZ_17800_178);
ZZ_MARK(0x8001797C);
ZZ_MARK(0x80017980);
ZZ_MARK(0x80017984);
ZZ_MARK(0x80017988);
ZZ_MARK(0x8001798C);
ZZ_MARK(0x80017990);
ZZ_MARK(0x80017994);
ZZ_MARK(0x80017998);
ZZ_MARK(0x8001799C);
ZZ_MARK(0x800179A0);
ZZ_MARK(0x800179A4);
ZZ_MARK(0x800179A8);
ZZ_MARK(0x800179AC);
ZZ_MARK(0x800179B0);
ZZ_MARK(0x800179B4);
ZZ_MARK_TARGET(0x800179B8,ZZ_17800_1B8);
ZZ_MARK(0x800179BC);
ZZ_MARK(0x800179C0);
ZZ_MARK(0x800179C4);
ZZ_MARK(0x800179C8);
ZZ_MARK(0x800179CC);
ZZ_MARK(0x800179D0);
ZZ_MARK_TARGET(0x800179D4,ZZ_17800_1D4);
ZZ_MARK(0x800179D8);
ZZ_MARK(0x800179DC);
ZZ_MARK_TARGET(0x800179E0,ZZ_17800_1E0);
ZZ_MARK(0x800179E4);
ZZ_MARK_TARGET(0x800179E8,ZZ_17800_1E8);
ZZ_MARK(0x800179EC);
ZZ_MARK(0x800179F0);
ZZ_MARK_TARGET(0x800179F4,ZZ_17800_1F4);
ZZ_MARK(0x800179F8);
ZZ_MARK_TARGET(0x800179FC,ZZ_17800_1FC);
ZZ_MARK(0x80017A00);
ZZ_MARK(0x80017A04);
ZZ_MARK(0x80017A08);
ZZ_MARK(0x80017A0C);
ZZ_MARK_TARGET(0x80017A10,ZZ_17800_210);
ZZ_MARK(0x80017A14);
ZZ_MARK_TARGET(0x80017A18,ZZ_17800_218);
ZZ_MARK(0x80017A1C);
ZZ_MARK(0x80017A20);
ZZ_MARK(0x80017A24);
ZZ_MARK(0x80017A28);
ZZ_MARK(0x80017A2C);
ZZ_MARK(0x80017A30);
ZZ_MARK(0x80017A34);
ZZ_MARK(0x80017A38);
ZZ_MARK(0x80017A3C);
ZZ_MARK(0x80017A40);
ZZ_MARK_TARGET(0x80017A44,ZZ_17800_244);
ZZ_MARK(0x80017A48);
ZZ_MARK(0x80017A4C);
ZZ_MARK(0x80017A50);
ZZ_MARK(0x80017A54);
ZZ_MARK(0x80017A58);
ZZ_MARK(0x80017A5C);
ZZ_MARK(0x80017A60);
ZZ_MARK(0x80017A64);
ZZ_MARK_TARGET(0x80017A68,ZZ_17800_268);
ZZ_MARK(0x80017A6C);
ZZ_MARK_TARGET(0x80017A70,ZZ_17800_270);
ZZ_MARK(0x80017A74);
ZZ_MARK_TARGET(0x80017A78,ZZ_17800_278);
ZZ_MARK(0x80017A7C);
ZZ_MARK_TARGET(0x80017A80,ZZ_17800_280);
ZZ_MARK_TARGET(0x80017A84,ZZ_17800_284);
ZZ_MARK(0x80017A88);
ZZ_MARK(0x80017A8C);
ZZ_MARK(0x80017A90);
ZZ_MARK(0x80017A94);
ZZ_MARK(0x80017A98);
ZZ_MARK(0x80017A9C);
ZZ_MARK(0x80017AA0);
ZZ_MARK(0x80017AA4);
ZZ_MARK(0x80017AA8);
ZZ_MARK(0x80017AAC);
