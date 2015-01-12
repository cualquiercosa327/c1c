#ifdef ZZ_INCLUDE_CODE
ZZ_51160:
	SP -= 56;
	EMU_Write32(SP + 24,S0); //+ 0x18
	S0 = A0;
	EMU_Write32(SP + 44,S5); //+ 0x2C
	V0 = S0 < 10;
	EMU_Write32(SP + 48,RA); //+ 0x30
	EMU_Write32(SP + 40,S4); //+ 0x28
	EMU_Write32(SP + 36,S3); //+ 0x24
	EMU_Write32(SP + 32,S2); //+ 0x20
	EMU_Write32(SP + 28,S1); //+ 0x1C
	EMU_Write32(SP + 16,R0); //+ 0x10
	if (!V0)
	{
		S5 = R0;
		ZZ_CLOCKCYCLES(13,0x800511B8);
		goto ZZ_51160_58;
	}
	S5 = R0;
	V1 = 0x80060000;
	V1 -= 4264;
	V0 = S0 << 2;
	S1 = V0 + V1;
	A0 = EMU_ReadU32(S1);
	RA = 0x800511B0; //ZZ_51160_50
	ZZ_CLOCKCYCLES(20,0x800503B0);
	goto ZZ_503B0;
ZZ_51160_50:
	if (!V0)
	{
		ZZ_CLOCKCYCLES(2,0x800511C0);
		goto ZZ_51160_60;
	}
	ZZ_CLOCKCYCLES(2,0x800511B8);
ZZ_51160_58:
	V0 = -1;
	ZZ_CLOCKCYCLES(2,0x800512D0);
	goto ZZ_51160_170;
ZZ_51160_60:
	if (S0)
	{
		V0 = 0x10000;
		ZZ_CLOCKCYCLES(2,0x800511E4);
		goto ZZ_51160_84;
	}
	V0 = 0x10000;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5488); //+ 0xFFFFEA90
	V1 = 16;
	S1 = V1 << V0;
	V1 = 0xFFF0;
	S2 = V1 << V0;
	ZZ_CLOCKCYCLES(9,0x800511FC);
	goto ZZ_51160_9C;
ZZ_51160_84:
	A0 = EMU_ReadU32(S1);
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 5488); //+ 0xFFFFEA90
	V0 = V0 - A0;
	S1 = V0 << V1;
	S2 = A0 << V1;
	ZZ_CLOCKCYCLES(6,0x800511FC);
ZZ_51160_9C:
	S4 = 0x80060000;
	S4 = EMU_ReadU32(S4 - 5500); //+ 0xFFFFEA84
	V0 = 1;
	if (S4 != V0)
	{
		ZZ_CLOCKCYCLES(5,0x8005121C);
		goto ZZ_51160_BC;
	}
	AT = 0x80060000;
	EMU_Write32(AT - 5500,R0); //+ 0xFFFFEA84
	S5 = 1;
	ZZ_CLOCKCYCLES(8,0x8005121C);
ZZ_51160_BC:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5472); //+ 0xFFFFEAA0
	if (!V0)
	{
		S3 = 1;
		ZZ_CLOCKCYCLES(5,0x80051248);
		goto ZZ_51160_E8;
	}
	S3 = 1;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5472); //+ 0xFFFFEAA0
	EMU_Write32(SP + 16,V0); //+ 0x10
	AT = 0x80060000;
	EMU_Write32(AT - 5472,R0); //+ 0xFFFFEAA0
	ZZ_CLOCKCYCLES(11,0x80051248);
ZZ_51160_E8:
	V0 = S1 < 1025;
	ZZ_CLOCKCYCLES(1,0x8005124C);
ZZ_51160_EC:
	if (!V0)
	{
		S0 = 1024;
		ZZ_CLOCKCYCLES(2,0x8005125C);
		goto ZZ_51160_FC;
	}
	S0 = 1024;
	S0 = S1;
	S3 = R0;
	ZZ_CLOCKCYCLES(4,0x8005125C);
ZZ_51160_FC:
	A0 = 2;
	RA = 0x80051268; //ZZ_51160_108
	A1 = S2;
	ZZ_CLOCKCYCLES(3,0x8004FB34);
	goto ZZ_4FB34;
ZZ_51160_108:
	RA = 0x80051270; //ZZ_51160_110
	A0 = 1;
	ZZ_CLOCKCYCLES(2,0x8004FB34);
	goto ZZ_4FB34;
ZZ_51160_110:
	A0 = 3;
	A1 = 0x80060000;
	A1 -= 5288;
	RA = 0x80051284; //ZZ_51160_124
	A2 = S0;
	ZZ_CLOCKCYCLES(5,0x8004FB34);
	goto ZZ_4FB34;
ZZ_51160_124:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 5408); //+ 0xFFFFEAE0
	S1 -= 1024;
	RA = 0x80051298; //ZZ_51160_138
	S2 += 1024;
	ZZ_CLOCKCYCLES(5,0x80051300);
	goto ZZ_51300;
ZZ_51160_138:
	if (S3)
	{
		V0 = S1 < 1025;
		ZZ_CLOCKCYCLES(2,0x8005124C);
		goto ZZ_51160_EC;
	}
	V0 = S1 < 1025;
	if (!S5)
	{
		ZZ_CLOCKCYCLES(4,0x800512B0);
		goto ZZ_51160_150;
	}
	AT = 0x80060000;
	EMU_Write32(AT - 5500,S4); //+ 0xFFFFEA84
	ZZ_CLOCKCYCLES(6,0x800512B0);
ZZ_51160_150:
	V0 = EMU_ReadU32(SP + 16); //+ 0x10
	if (!V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(4,0x800512D0);
		goto ZZ_51160_170;
	}
	V0 = R0;
	V0 = EMU_ReadU32(SP + 16); //+ 0x10
	AT = 0x80060000;
	EMU_Write32(AT - 5472,V0); //+ 0xFFFFEAA0
	V0 = R0;
	ZZ_CLOCKCYCLES(8,0x800512D0);
ZZ_51160_170:
	RA = EMU_ReadU32(SP + 48); //+ 0x30
	S5 = EMU_ReadU32(SP + 44); //+ 0x2C
	S4 = EMU_ReadU32(SP + 40); //+ 0x28
	S3 = EMU_ReadU32(SP + 36); //+ 0x24
	S2 = EMU_ReadU32(SP + 32); //+ 0x20
	S1 = EMU_ReadU32(SP + 28); //+ 0x1C
	S0 = EMU_ReadU32(SP + 24); //+ 0x18
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 56;
	ZZ_CLOCKCYCLES_JR(9);
	ZZ_JUMPREGISTER(0x800508A4,ZZ_50440_464);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80051160,ZZ_51160);
ZZ_MARK(0x80051164);
ZZ_MARK(0x80051168);
ZZ_MARK(0x8005116C);
ZZ_MARK(0x80051170);
ZZ_MARK(0x80051174);
ZZ_MARK(0x80051178);
ZZ_MARK(0x8005117C);
ZZ_MARK(0x80051180);
ZZ_MARK(0x80051184);
ZZ_MARK(0x80051188);
ZZ_MARK(0x8005118C);
ZZ_MARK(0x80051190);
ZZ_MARK(0x80051194);
ZZ_MARK(0x80051198);
ZZ_MARK(0x8005119C);
ZZ_MARK(0x800511A0);
ZZ_MARK(0x800511A4);
ZZ_MARK(0x800511A8);
ZZ_MARK(0x800511AC);
ZZ_MARK_TARGET(0x800511B0,ZZ_51160_50);
ZZ_MARK(0x800511B4);
ZZ_MARK_TARGET(0x800511B8,ZZ_51160_58);
ZZ_MARK(0x800511BC);
ZZ_MARK_TARGET(0x800511C0,ZZ_51160_60);
ZZ_MARK(0x800511C4);
ZZ_MARK(0x800511C8);
ZZ_MARK(0x800511CC);
ZZ_MARK(0x800511D0);
ZZ_MARK(0x800511D4);
ZZ_MARK(0x800511D8);
ZZ_MARK(0x800511DC);
ZZ_MARK(0x800511E0);
ZZ_MARK_TARGET(0x800511E4,ZZ_51160_84);
ZZ_MARK(0x800511E8);
ZZ_MARK(0x800511EC);
ZZ_MARK(0x800511F0);
ZZ_MARK(0x800511F4);
ZZ_MARK(0x800511F8);
ZZ_MARK_TARGET(0x800511FC,ZZ_51160_9C);
ZZ_MARK(0x80051200);
ZZ_MARK(0x80051204);
ZZ_MARK(0x80051208);
ZZ_MARK(0x8005120C);
ZZ_MARK(0x80051210);
ZZ_MARK(0x80051214);
ZZ_MARK(0x80051218);
ZZ_MARK_TARGET(0x8005121C,ZZ_51160_BC);
ZZ_MARK(0x80051220);
ZZ_MARK(0x80051224);
ZZ_MARK(0x80051228);
ZZ_MARK(0x8005122C);
ZZ_MARK(0x80051230);
ZZ_MARK(0x80051234);
ZZ_MARK(0x80051238);
ZZ_MARK(0x8005123C);
ZZ_MARK(0x80051240);
ZZ_MARK(0x80051244);
ZZ_MARK_TARGET(0x80051248,ZZ_51160_E8);
ZZ_MARK_TARGET(0x8005124C,ZZ_51160_EC);
ZZ_MARK(0x80051250);
ZZ_MARK(0x80051254);
ZZ_MARK(0x80051258);
ZZ_MARK_TARGET(0x8005125C,ZZ_51160_FC);
ZZ_MARK(0x80051260);
ZZ_MARK(0x80051264);
ZZ_MARK_TARGET(0x80051268,ZZ_51160_108);
ZZ_MARK(0x8005126C);
ZZ_MARK_TARGET(0x80051270,ZZ_51160_110);
ZZ_MARK(0x80051274);
ZZ_MARK(0x80051278);
ZZ_MARK(0x8005127C);
ZZ_MARK(0x80051280);
ZZ_MARK_TARGET(0x80051284,ZZ_51160_124);
ZZ_MARK(0x80051288);
ZZ_MARK(0x8005128C);
ZZ_MARK(0x80051290);
ZZ_MARK(0x80051294);
ZZ_MARK_TARGET(0x80051298,ZZ_51160_138);
ZZ_MARK(0x8005129C);
ZZ_MARK(0x800512A0);
ZZ_MARK(0x800512A4);
ZZ_MARK(0x800512A8);
ZZ_MARK(0x800512AC);
ZZ_MARK_TARGET(0x800512B0,ZZ_51160_150);
ZZ_MARK(0x800512B4);
ZZ_MARK(0x800512B8);
ZZ_MARK(0x800512BC);
ZZ_MARK(0x800512C0);
ZZ_MARK(0x800512C4);
ZZ_MARK(0x800512C8);
ZZ_MARK(0x800512CC);
ZZ_MARK_TARGET(0x800512D0,ZZ_51160_170);
ZZ_MARK(0x800512D4);
ZZ_MARK(0x800512D8);
ZZ_MARK(0x800512DC);
ZZ_MARK(0x800512E0);
ZZ_MARK(0x800512E4);
ZZ_MARK(0x800512E8);
ZZ_MARK(0x800512EC);
ZZ_MARK(0x800512F0);
