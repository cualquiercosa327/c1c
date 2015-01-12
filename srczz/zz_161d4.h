#ifdef ZZ_INCLUDE_CODE
ZZ_161D4:
	SP -= 56;
	EMU_Write32(SP + 48,RA); //+ 0x30
	EMU_Write32(SP + 44,S5); //+ 0x2C
	EMU_Write32(SP + 40,S4); //+ 0x28
	EMU_Write32(SP + 36,S3); //+ 0x24
	EMU_Write32(SP + 32,S2); //+ 0x20
	EMU_Write32(SP + 28,S1); //+ 0x1C
	EMU_Write32(SP + 24,S0); //+ 0x18
	AT = 0x80060000;
	EMU_Write32(AT + 3036,R0); //+ 0xBDC
	RA = 0x80016204; //ZZ_161D4_30
	A0 = R0;
	ZZ_CLOCKCYCLES(12,0x8004BE1C);
	goto ZZ_4BE1C;
ZZ_161D4_30:
	RA = 0x8001620C; //ZZ_161D4_38
	A0 = R0;
	ZZ_CLOCKCYCLES(2,0x8004C0B4);
	goto ZZ_4C0B4;
ZZ_161D4_38:
	RA = 0x80016214; //ZZ_161D4_40
	S2 = R0;
	ZZ_CLOCKCYCLES(2,0x80016140);
	goto ZZ_16140;
ZZ_161D4_40:
	S4 = 0x100;
	S5 = 0x1;
	V1 = 0x80060000;
	V1 += 14052;
	S3 = V1 + 16;
	S1 = S3;
	V0 = 0x2;
	EMU_Write32(V1,V0);
	ZZ_CLOCKCYCLES(8,0x80016234);
ZZ_161D4_60:
	A0 = S1 + 8216;
	S0 = S2 << 9;
	A1 = S0;
	A2 = R0;
	A3 = 0x200;
	EMU_Write32(S1,S2);
	EMU_Write32(S1 + 12,R0); //+ 0xC
	RA = 0x80016258; //ZZ_161D4_84
	EMU_Write32(SP + 16,S4); //+ 0x10
	ZZ_CLOCKCYCLES(9,0x8004B6EC);
	goto ZZ_4B6EC;
ZZ_161D4_84:
	A0 = S1 + 8236;
	A1 = S0;
	A2 = R0;
	A3 = 0x200;
	V0 = 0x12;
	AT = 0x80070000;
	EMU_Write32(AT - 12428,R0); //+ 0xFFFFCF74
	EMU_Write16(S1 + 8224,R0); //+ 0x2020
	EMU_Write16(S1 + 8226,V0); //+ 0x2022
	EMU_Write16(S1 + 8230,S4); //+ 0x2026
	RA = 0x80016288; //ZZ_161D4_B4
	EMU_Write32(SP + 16,S4); //+ 0x10
	ZZ_CLOCKCYCLES(12,0x8004B634);
	goto ZZ_4B634;
ZZ_161D4_B4:
	EMU_Write16(S1 + 8244,S0); //+ 0x2034
	EMU_Write16(S1 + 8246,R0); //+ 0x2036
	EMU_Write8(S1 + 8258,S5); //+ 0x2042
	if (S2)
	{
		EMU_Write8(S1 + 8259,R0); //+ 0x2043
		ZZ_CLOCKCYCLES(5,0x800162A4);
		goto ZZ_161D4_D0;
	}
	EMU_Write8(S1 + 8259,R0); //+ 0x2043
	EMU_Write32(S3 - 4,S1); //+ 0xFFFFFFFC
	EMU_Write32(S3 - 12,S1); //+ 0xFFFFFFF4
	ZZ_CLOCKCYCLES(7,0x800162A4);
ZZ_161D4_D0:
	if (S2 != S5)
	{
		ZZ_CLOCKCYCLES(2,0x800162B0);
		goto ZZ_161D4_DC;
	}
	EMU_Write32(S3 - 8,S1); //+ 0xFFFFFFF8
	ZZ_CLOCKCYCLES(3,0x800162B0);
ZZ_161D4_DC:
	V0 = 0x80040000;
	V0 = EMU_ReadU32(V0 - 16068); //+ 0xFFFFC13C
	V1 = 0x28;
	EMU_Write32(S1 + 20,V1); //+ 0x14
	EMU_Write32(S1 + 12,V0); //+ 0xC
	V0 = EMU_ReadU32(S3 - 16); //+ 0xFFFFFFF0
	S2 += 1;
	V0 = (int32_t)S2 < (int32_t)V0;
	if (V0)
	{
		S1 += 8340;
		ZZ_CLOCKCYCLES(10,0x80016234);
		goto ZZ_161D4_60;
	}
	S1 += 8340;
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 14056); //+ 0x36E8
	RA = 0x800162E8; //ZZ_161D4_114
	A0 += 8216;
	ZZ_CLOCKCYCLES(14,0x8004CBA8);
	goto ZZ_4CBA8;
ZZ_161D4_114:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 14060); //+ 0x36EC
	RA = 0x800162F8; //ZZ_161D4_124
	A0 += 8236;
	ZZ_CLOCKCYCLES(4,0x8004C950);
	goto ZZ_4C950;
ZZ_161D4_124:
	RA = 0x80016300; //ZZ_161D4_12C
	A0 = 0x1;
	ZZ_CLOCKCYCLES(2,0x8004C240);
	goto ZZ_4C240;
ZZ_161D4_12C:
	RA = EMU_ReadU32(SP + 48); //+ 0x30
	S5 = EMU_ReadU32(SP + 44); //+ 0x2C
	S4 = EMU_ReadU32(SP + 40); //+ 0x28
	S3 = EMU_ReadU32(SP + 36); //+ 0x24
	S2 = EMU_ReadU32(SP + 32); //+ 0x20
	S1 = EMU_ReadU32(SP + 28); //+ 0x1C
	S0 = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 56;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(10);
	ZZ_JUMPREGISTER(0x800157A0,ZZ_15738_68);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800161D4,ZZ_161D4);
ZZ_MARK(0x800161D8);
ZZ_MARK(0x800161DC);
ZZ_MARK(0x800161E0);
ZZ_MARK(0x800161E4);
ZZ_MARK(0x800161E8);
ZZ_MARK(0x800161EC);
ZZ_MARK(0x800161F0);
ZZ_MARK(0x800161F4);
ZZ_MARK(0x800161F8);
ZZ_MARK(0x800161FC);
ZZ_MARK(0x80016200);
ZZ_MARK_TARGET(0x80016204,ZZ_161D4_30);
ZZ_MARK(0x80016208);
ZZ_MARK_TARGET(0x8001620C,ZZ_161D4_38);
ZZ_MARK(0x80016210);
ZZ_MARK_TARGET(0x80016214,ZZ_161D4_40);
ZZ_MARK(0x80016218);
ZZ_MARK(0x8001621C);
ZZ_MARK(0x80016220);
ZZ_MARK(0x80016224);
ZZ_MARK(0x80016228);
ZZ_MARK(0x8001622C);
ZZ_MARK(0x80016230);
ZZ_MARK_TARGET(0x80016234,ZZ_161D4_60);
ZZ_MARK(0x80016238);
ZZ_MARK(0x8001623C);
ZZ_MARK(0x80016240);
ZZ_MARK(0x80016244);
ZZ_MARK(0x80016248);
ZZ_MARK(0x8001624C);
ZZ_MARK(0x80016250);
ZZ_MARK(0x80016254);
ZZ_MARK_TARGET(0x80016258,ZZ_161D4_84);
ZZ_MARK(0x8001625C);
ZZ_MARK(0x80016260);
ZZ_MARK(0x80016264);
ZZ_MARK(0x80016268);
ZZ_MARK(0x8001626C);
ZZ_MARK(0x80016270);
ZZ_MARK(0x80016274);
ZZ_MARK(0x80016278);
ZZ_MARK(0x8001627C);
ZZ_MARK(0x80016280);
ZZ_MARK(0x80016284);
ZZ_MARK_TARGET(0x80016288,ZZ_161D4_B4);
ZZ_MARK(0x8001628C);
ZZ_MARK(0x80016290);
ZZ_MARK(0x80016294);
ZZ_MARK(0x80016298);
ZZ_MARK(0x8001629C);
ZZ_MARK(0x800162A0);
ZZ_MARK_TARGET(0x800162A4,ZZ_161D4_D0);
ZZ_MARK(0x800162A8);
ZZ_MARK(0x800162AC);
ZZ_MARK_TARGET(0x800162B0,ZZ_161D4_DC);
ZZ_MARK(0x800162B4);
ZZ_MARK(0x800162B8);
ZZ_MARK(0x800162BC);
ZZ_MARK(0x800162C0);
ZZ_MARK(0x800162C4);
ZZ_MARK(0x800162C8);
ZZ_MARK(0x800162CC);
ZZ_MARK(0x800162D0);
ZZ_MARK(0x800162D4);
ZZ_MARK(0x800162D8);
ZZ_MARK(0x800162DC);
ZZ_MARK(0x800162E0);
ZZ_MARK(0x800162E4);
ZZ_MARK_TARGET(0x800162E8,ZZ_161D4_114);
ZZ_MARK(0x800162EC);
ZZ_MARK(0x800162F0);
ZZ_MARK(0x800162F4);
ZZ_MARK_TARGET(0x800162F8,ZZ_161D4_124);
ZZ_MARK(0x800162FC);
ZZ_MARK_TARGET(0x80016300,ZZ_161D4_12C);
ZZ_MARK(0x80016304);
ZZ_MARK(0x80016308);
ZZ_MARK(0x8001630C);
ZZ_MARK(0x80016310);
ZZ_MARK(0x80016314);
ZZ_MARK(0x80016318);
ZZ_MARK(0x8001631C);
ZZ_MARK(0x80016320);
ZZ_MARK(0x80016324);
