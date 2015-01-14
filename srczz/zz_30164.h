#ifdef ZZ_INCLUDE_CODE
ZZ_30164:
	SP -= 40;
	EMU_Write32(SP + 32,S2); //+ 0x20
	S2 = A0;
	A0 = 0x80060000;
	A0 += 30752;
	A1 = 0x13;
	EMU_Write32(SP + 36,RA); //+ 0x24
	EMU_Write32(SP + 28,S1); //+ 0x1C
	RA = 0x8003018C; //ZZ_30164_28
	EMU_Write32(SP + 24,S0); //+ 0x18
	ZZ_CLOCKCYCLES(10,0x80012294);
	goto ZZ_12294;
ZZ_30164_28:
	A2 = 0x80060000;
	A2 -= 2896;
	EMU_ReadLeft(A2 + 3,&V1); //+ 0x3
	EMU_ReadRight(A2,&V1);
	A0 = EMU_ReadS8(A2 + 4); //+ 0x4
	A1 = EMU_ReadS8(A2 + 5); //+ 0x5
	EMU_WriteLeft(SP + 19,V1); //+ 0x13
	EMU_WriteRight(SP + 16,V1); //+ 0x10
	EMU_Write8(SP + 20,A0); //+ 0x14
	EMU_Write8(SP + 21,A1); //+ 0x15
	A0 = SP + 22;
	A1 = R0;
	S0 = V0;
	S1 = SP + 16;
	RA = 0x800301CC; //ZZ_30164_68
	A2 = 0x2;
	ZZ_CLOCKCYCLES(16,0x800494CC);
	goto ZZ_494CC;
ZZ_30164_68:
	if (S0)
	{
		V0 = 0x63960000;
		ZZ_CLOCKCYCLES(2,0x80030200);
		goto ZZ_30164_9C;
	}
	V0 = 0x63960000;
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 2428); //+ 0xFFFFF684
	V0 |= 0x347F;
	EMU_Write32(S2,V0);
	V0 = 0x2;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(9,0x80030244);
		goto ZZ_30164_E0;
	}
	AT = 0x80070000;
	EMU_Write32(AT - 12724,R0); //+ 0xFFFFCE4C
	ZZ_CLOCKCYCLES(13,0x80030244);
	goto ZZ_30164_E0;
ZZ_30164_9C:
	RA = 0x80030208; //ZZ_30164_A4
	A0 = S0;
	ZZ_CLOCKCYCLES(2,0x80031884);
	goto ZZ_31884;
ZZ_30164_A4:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 30756); //+ 0x7824
	V0 += 48;
	RA = 0x8003021C; //ZZ_30164_B8
	EMU_Write8(SP + 18,V0); //+ 0x12
	ZZ_CLOCKCYCLES(5,0x800120EC);
	goto ZZ_120EC;
ZZ_30164_B8:
	A0 = S1;
	RA = 0x80030228; //ZZ_30164_C4
	EMU_Write8(SP + 19,V0); //+ 0x13
	ZZ_CLOCKCYCLES(3,0x80011F78);
	goto ZZ_11F78;
ZZ_30164_C4:
	EMU_Write32(S2,V0);
	V0 = -1;
	AT = 0x80060000;
	EMU_Write32(AT + 30788,V0); //+ 0x7844
	V0 = 0x3;
	AT = 0x80070000;
	EMU_Write32(AT - 12372,V0); //+ 0xFFFFCFAC
	ZZ_CLOCKCYCLES(7,0x80030244);
ZZ_30164_E0:
	RA = EMU_ReadU32(SP + 36); //+ 0x24
	S2 = EMU_ReadU32(SP + 32); //+ 0x20
	S1 = EMU_ReadU32(SP + 28); //+ 0x1C
	S0 = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 40;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x8001FF90,ZZ_1FC0C_384);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80030164,ZZ_30164);
ZZ_MARK(0x80030168);
ZZ_MARK(0x8003016C);
ZZ_MARK(0x80030170);
ZZ_MARK(0x80030174);
ZZ_MARK(0x80030178);
ZZ_MARK(0x8003017C);
ZZ_MARK(0x80030180);
ZZ_MARK(0x80030184);
ZZ_MARK(0x80030188);
ZZ_MARK_TARGET(0x8003018C,ZZ_30164_28);
ZZ_MARK(0x80030190);
ZZ_MARK(0x80030194);
ZZ_MARK(0x80030198);
ZZ_MARK(0x8003019C);
ZZ_MARK(0x800301A0);
ZZ_MARK(0x800301A4);
ZZ_MARK(0x800301A8);
ZZ_MARK(0x800301AC);
ZZ_MARK(0x800301B0);
ZZ_MARK(0x800301B4);
ZZ_MARK(0x800301B8);
ZZ_MARK(0x800301BC);
ZZ_MARK(0x800301C0);
ZZ_MARK(0x800301C4);
ZZ_MARK(0x800301C8);
ZZ_MARK_TARGET(0x800301CC,ZZ_30164_68);
ZZ_MARK(0x800301D0);
ZZ_MARK(0x800301D4);
ZZ_MARK(0x800301D8);
ZZ_MARK(0x800301DC);
ZZ_MARK(0x800301E0);
ZZ_MARK(0x800301E4);
ZZ_MARK(0x800301E8);
ZZ_MARK(0x800301EC);
ZZ_MARK(0x800301F0);
ZZ_MARK(0x800301F4);
ZZ_MARK(0x800301F8);
ZZ_MARK(0x800301FC);
ZZ_MARK_TARGET(0x80030200,ZZ_30164_9C);
ZZ_MARK(0x80030204);
ZZ_MARK_TARGET(0x80030208,ZZ_30164_A4);
ZZ_MARK(0x8003020C);
ZZ_MARK(0x80030210);
ZZ_MARK(0x80030214);
ZZ_MARK(0x80030218);
ZZ_MARK_TARGET(0x8003021C,ZZ_30164_B8);
ZZ_MARK(0x80030220);
ZZ_MARK(0x80030224);
ZZ_MARK_TARGET(0x80030228,ZZ_30164_C4);
ZZ_MARK(0x8003022C);
ZZ_MARK(0x80030230);
ZZ_MARK(0x80030234);
ZZ_MARK(0x80030238);
ZZ_MARK(0x8003023C);
ZZ_MARK(0x80030240);
ZZ_MARK_TARGET(0x80030244,ZZ_30164_E0);
ZZ_MARK(0x80030248);
ZZ_MARK(0x8003024C);
ZZ_MARK(0x80030250);
ZZ_MARK(0x80030254);
ZZ_MARK(0x80030258);
ZZ_MARK(0x8003025C);