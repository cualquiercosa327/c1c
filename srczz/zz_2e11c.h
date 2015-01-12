#ifdef ZZ_INCLUDE_CODE
ZZ_2E11C:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 2916); //+ 0xB64
	SP -= 104;
	EMU_Write32(SP + 96,RA); //+ 0x60
	EMU_Write32(SP + 92,S3); //+ 0x5C
	EMU_Write32(SP + 88,S2); //+ 0x58
	EMU_Write32(SP + 84,S1); //+ 0x54
	EMU_Write32(SP + 80,S0); //+ 0x50
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	S1 = A0;
	S3 = A1;
	V0 = EMU_ReadU32(V0 + 668); //+ 0x29C
	S0 = A2;
	V1 = 0x100000;
	V0 &= V1;
	if (V0)
	{
		S2 = A3;
		ZZ_CLOCKCYCLES(17,0x8002E240);
		goto ZZ_2E11C_124;
	}
	S2 = A3;
	V0 = EMU_ReadU32(S0 + 256); //+ 0x100
	V1 = 0x10000000;
	V0 &= V1;
	if (V0)
	{
		V1 = 0x1F;
		ZZ_CLOCKCYCLES(22,0x8002E240);
		goto ZZ_2E11C_124;
	}
	V1 = 0x1F;
	V0 = EMU_ReadU32(GP + 584); //+ 0x248
	V0 += 124;
	ZZ_CLOCKCYCLES(25,0x8002E180);
ZZ_2E11C_64:
	EMU_Write32(V0,R0);
	V1 -= 1;
	if ((int32_t)V1 >= 0)
	{
		V0 -= 4;
		ZZ_CLOCKCYCLES(4,0x8002E180);
		goto ZZ_2E11C_64;
	}
	V0 -= 4;
	V0 = EMU_ReadU32(GP + 508); //+ 0x1FC
	V1 = 0x7F;
	V0 += 508;
	ZZ_CLOCKCYCLES(7,0x8002E19C);
ZZ_2E11C_80:
	EMU_Write32(V0,R0);
	V1 -= 1;
	if ((int32_t)V1 >= 0)
	{
		V0 -= 4;
		ZZ_CLOCKCYCLES(4,0x8002E19C);
		goto ZZ_2E11C_80;
	}
	V0 -= 4;
	V1 = EMU_ReadU32(S0 + 264); //+ 0x108
	A2 = EMU_ReadU32(S0 + 176); //+ 0xB0
	V0 = V1 - 3;
	V0 = V0 < 2;
	if (V0)
	{
		T0 = S2 + 4104;
		ZZ_CLOCKCYCLES(10,0x8002E1D0);
		goto ZZ_2E11C_B4;
	}
	T0 = S2 + 4104;
	V0 = 0x2;
	if (V1 != V0)
	{
		A2 &= 0x2;
		ZZ_CLOCKCYCLES(13,0x8002E1D4);
		goto ZZ_2E11C_B8;
	}
	A2 &= 0x2;
	ZZ_CLOCKCYCLES(13,0x8002E1D0);
ZZ_2E11C_B4:
	A2 = 0x2;
	ZZ_CLOCKCYCLES(1,0x8002E1D4);
ZZ_2E11C_B8:
	A0 = EMU_ReadU32(S0 + 100); //+ 0x64
	A1 = EMU_ReadU32(GP + 136); //+ 0x88
	V0 = A0 + 12800;
	EMU_Write32(SP + 16,V0); //+ 0x10
	V1 = EMU_ReadU32(S0 + 256); //+ 0x100
	A3 = A0 + A1;
	A0 = EMU_ReadU32(S1 + 4); //+ 0x4
	V0 = 0x40000000;
	V1 &= V0;
	if (V1)
	{
		V0 = 0x20000;
		ZZ_CLOCKCYCLES(11,0x8002E214);
		goto ZZ_2E11C_F8;
	}
	V0 = 0x20000;
	V0 = EMU_ReadU32(S0 + 8); //+ 0x8
	V0 = EMU_ReadU32(V0 + 64); //+ 0x40
	V0 += A0;
	ZZ_CLOCKCYCLES(16,0x8002E21C);
	goto ZZ_2E11C_100;
ZZ_2E11C_F8:
	V0 |= 0x9900;
	V0 += A0;
	ZZ_CLOCKCYCLES(2,0x8002E21C);
ZZ_2E11C_100:
	EMU_Write32(SP + 20,V0); //+ 0x14
	V0 = EMU_ReadU32(S1);
	EMU_Write32(SP + 24,V0); //+ 0x18
	V0 = EMU_ReadU32(S1 + 8); //+ 0x8
	A0 = S2;
	A1 = T0;
	RA = 0x8002E240; //ZZ_2E11C_124
	EMU_Write32(SP + 28,V0); //+ 0x1C
	ZZ_CLOCKCYCLES(9,0x8003CB24);
	goto ZZ_3CB24;
ZZ_2E11C_124:
	V0 = 0x1;
	EMU_Write32(SP + 16,V0); //+ 0x10
	A0 = S1;
	A1 = S3;
	A2 = S0;
	RA = 0x8002E25C; //ZZ_2E11C_140
	A3 = S2;
	ZZ_CLOCKCYCLES(7,0x8002D9F8);
	goto ZZ_2D9F8;
ZZ_2E11C_140:
	RA = EMU_ReadU32(SP + 96); //+ 0x60
	S3 = EMU_ReadU32(SP + 92); //+ 0x5C
	S2 = EMU_ReadU32(SP + 88); //+ 0x58
	S1 = EMU_ReadU32(SP + 84); //+ 0x54
	S0 = EMU_ReadU32(SP + 80); //+ 0x50
	SP += 104;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x8002C4B0,ZZ_2C404_AC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8002E11C,ZZ_2E11C);
ZZ_MARK(0x8002E120);
ZZ_MARK(0x8002E124);
ZZ_MARK(0x8002E128);
ZZ_MARK(0x8002E12C);
ZZ_MARK(0x8002E130);
ZZ_MARK(0x8002E134);
ZZ_MARK(0x8002E138);
ZZ_MARK(0x8002E13C);
ZZ_MARK(0x8002E140);
ZZ_MARK(0x8002E144);
ZZ_MARK(0x8002E148);
ZZ_MARK(0x8002E14C);
ZZ_MARK(0x8002E150);
ZZ_MARK(0x8002E154);
ZZ_MARK(0x8002E158);
ZZ_MARK(0x8002E15C);
ZZ_MARK(0x8002E160);
ZZ_MARK(0x8002E164);
ZZ_MARK(0x8002E168);
ZZ_MARK(0x8002E16C);
ZZ_MARK(0x8002E170);
ZZ_MARK(0x8002E174);
ZZ_MARK(0x8002E178);
ZZ_MARK(0x8002E17C);
ZZ_MARK_TARGET(0x8002E180,ZZ_2E11C_64);
ZZ_MARK(0x8002E184);
ZZ_MARK(0x8002E188);
ZZ_MARK(0x8002E18C);
ZZ_MARK(0x8002E190);
ZZ_MARK(0x8002E194);
ZZ_MARK(0x8002E198);
ZZ_MARK_TARGET(0x8002E19C,ZZ_2E11C_80);
ZZ_MARK(0x8002E1A0);
ZZ_MARK(0x8002E1A4);
ZZ_MARK(0x8002E1A8);
ZZ_MARK(0x8002E1AC);
ZZ_MARK(0x8002E1B0);
ZZ_MARK(0x8002E1B4);
ZZ_MARK(0x8002E1B8);
ZZ_MARK(0x8002E1BC);
ZZ_MARK(0x8002E1C0);
ZZ_MARK(0x8002E1C4);
ZZ_MARK(0x8002E1C8);
ZZ_MARK(0x8002E1CC);
ZZ_MARK_TARGET(0x8002E1D0,ZZ_2E11C_B4);
ZZ_MARK_TARGET(0x8002E1D4,ZZ_2E11C_B8);
ZZ_MARK(0x8002E1D8);
ZZ_MARK(0x8002E1DC);
ZZ_MARK(0x8002E1E0);
ZZ_MARK(0x8002E1E4);
ZZ_MARK(0x8002E1E8);
ZZ_MARK(0x8002E1EC);
ZZ_MARK(0x8002E1F0);
ZZ_MARK(0x8002E1F4);
ZZ_MARK(0x8002E1F8);
ZZ_MARK(0x8002E1FC);
ZZ_MARK(0x8002E200);
ZZ_MARK(0x8002E204);
ZZ_MARK(0x8002E208);
ZZ_MARK(0x8002E20C);
ZZ_MARK(0x8002E210);
ZZ_MARK_TARGET(0x8002E214,ZZ_2E11C_F8);
ZZ_MARK(0x8002E218);
ZZ_MARK_TARGET(0x8002E21C,ZZ_2E11C_100);
ZZ_MARK(0x8002E220);
ZZ_MARK(0x8002E224);
ZZ_MARK(0x8002E228);
ZZ_MARK(0x8002E22C);
ZZ_MARK(0x8002E230);
ZZ_MARK(0x8002E234);
ZZ_MARK(0x8002E238);
ZZ_MARK(0x8002E23C);
ZZ_MARK_TARGET(0x8002E240,ZZ_2E11C_124);
ZZ_MARK(0x8002E244);
ZZ_MARK(0x8002E248);
ZZ_MARK(0x8002E24C);
ZZ_MARK(0x8002E250);
ZZ_MARK(0x8002E254);
ZZ_MARK(0x8002E258);
ZZ_MARK_TARGET(0x8002E25C,ZZ_2E11C_140);
ZZ_MARK(0x8002E260);
ZZ_MARK(0x8002E264);
ZZ_MARK(0x8002E268);
ZZ_MARK(0x8002E26C);
ZZ_MARK(0x8002E270);
ZZ_MARK(0x8002E274);
ZZ_MARK(0x8002E278);
