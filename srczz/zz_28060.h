#ifdef ZZ_INCLUDE_CODE
ZZ_28060:
	SP -= 48;
	EMU_Write32(SP + 40,S6); //+ 0x28
	S6 = A0;
	EMU_Write32(SP + 44,RA); //+ 0x2C
	EMU_Write32(SP + 36,S5); //+ 0x24
	EMU_Write32(SP + 32,S4); //+ 0x20
	EMU_Write32(SP + 28,S3); //+ 0x1C
	EMU_Write32(SP + 24,S2); //+ 0x18
	EMU_Write32(SP + 20,S1); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	S4 = EMU_ReadU32(S6 + 16); //+ 0x10
	V0 = EMU_ReadU32(S4 + 400); //+ 0x190
	S1 = V0 - 1;
	if ((int32_t)S1 < 0)
	{
		S5 = A1;
		ZZ_CLOCKCYCLES(17,0x800280F8);
		goto ZZ_28060_98;
	}
	S5 = A1;
	V0 = S1 << 2;
	S3 = V0 + 404;
	S2 = V0 + S4;
	ZZ_CLOCKCYCLES(20,0x800280B0);
ZZ_28060_50:
	V0 = EMU_ReadU32(S2 + 436); //+ 0x1B4
	V0 &= 0x4;
	if (!V0)
	{
		A0 = S4 + S3;
		ZZ_CLOCKCYCLES(5,0x800280E8);
		goto ZZ_28060_88;
	}
	A0 = S4 + S3;
	A1 = 0x1;
	RA = 0x800280D0; //ZZ_28060_70
	A2 = R0;
	ZZ_CLOCKCYCLES(8,0x80014364);
	goto ZZ_14364;
ZZ_28060_70:
	S0 = V0;
	A0 = S0;
	RA = 0x800280E0; //ZZ_28060_80
	A1 = S5;
	ZZ_CLOCKCYCLES(4,0x80031080);
	goto ZZ_31080;
ZZ_28060_80:
	if (V0)
	{
		ZZ_CLOCKCYCLES(2,0x80028168);
		goto ZZ_28060_108;
	}
	ZZ_CLOCKCYCLES(2,0x800280E8);
ZZ_28060_88:
	S3 -= 4;
	S1 -= 1;
	if ((int32_t)S1 >= 0)
	{
		S2 -= 4;
		ZZ_CLOCKCYCLES(4,0x800280B0);
		goto ZZ_28060_50;
	}
	S2 -= 4;
	ZZ_CLOCKCYCLES(4,0x800280F8);
ZZ_28060_98:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 2916); //+ 0xB64
	if (S6 == V0)
	{
		ZZ_CLOCKCYCLES(5,0x80028180);
		goto ZZ_28060_120;
	}
	S4 = EMU_ReadU32(V0 + 16); //+ 0x10
	V0 = EMU_ReadU32(S4 + 400); //+ 0x190
	S1 = V0 - 1;
	if ((int32_t)S1 < 0)
	{
		V0 = S1 << 2;
		ZZ_CLOCKCYCLES(12,0x80028180);
		goto ZZ_28060_120;
	}
	V0 = S1 << 2;
	S3 = V0 + 404;
	S2 = V0 + S4;
	ZZ_CLOCKCYCLES(14,0x80028130);
ZZ_28060_D0:
	V0 = EMU_ReadU32(S2 + 436); //+ 0x1B4
	V0 &= 0x4;
	if (!V0)
	{
		A0 = S4 + S3;
		ZZ_CLOCKCYCLES(5,0x80028170);
		goto ZZ_28060_110;
	}
	A0 = S4 + S3;
	A1 = 0x1;
	RA = 0x80028150; //ZZ_28060_F0
	A2 = R0;
	ZZ_CLOCKCYCLES(8,0x80014364);
	goto ZZ_14364;
ZZ_28060_F0:
	S0 = V0;
	A0 = S0;
	RA = 0x80028160; //ZZ_28060_100
	A1 = S5;
	ZZ_CLOCKCYCLES(4,0x80031080);
	goto ZZ_31080;
ZZ_28060_100:
	if (!V0)
	{
		S3 -= 4;
		ZZ_CLOCKCYCLES(2,0x80028174);
		goto ZZ_28060_114;
	}
	S3 -= 4;
	ZZ_CLOCKCYCLES(2,0x80028168);
ZZ_28060_108:
	V0 = S0;
	ZZ_CLOCKCYCLES(2,0x80028184);
	goto ZZ_28060_124;
ZZ_28060_110:
	S3 -= 4;
	ZZ_CLOCKCYCLES(1,0x80028174);
ZZ_28060_114:
	S1 -= 1;
	if ((int32_t)S1 >= 0)
	{
		S2 -= 4;
		ZZ_CLOCKCYCLES(3,0x80028130);
		goto ZZ_28060_D0;
	}
	S2 -= 4;
	ZZ_CLOCKCYCLES(3,0x80028180);
ZZ_28060_120:
	V0 = -23;
	ZZ_CLOCKCYCLES(1,0x80028184);
ZZ_28060_124:
	RA = EMU_ReadU32(SP + 44); //+ 0x2C
	S6 = EMU_ReadU32(SP + 40); //+ 0x28
	S5 = EMU_ReadU32(SP + 36); //+ 0x24
	S4 = EMU_ReadU32(SP + 32); //+ 0x20
	S3 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 48;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(11);
	ZZ_JUMPREGISTER(0x80037EC0,ZZ_37930_590);
	ZZ_JUMPREGISTER(0x8002C294,ZZ_2C26C_28);
	ZZ_JUMPREGISTER(0x8002BDC4,ZZ_2B890_534);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80028060,ZZ_28060);
ZZ_MARK(0x80028064);
ZZ_MARK(0x80028068);
ZZ_MARK(0x8002806C);
ZZ_MARK(0x80028070);
ZZ_MARK(0x80028074);
ZZ_MARK(0x80028078);
ZZ_MARK(0x8002807C);
ZZ_MARK(0x80028080);
ZZ_MARK(0x80028084);
ZZ_MARK(0x80028088);
ZZ_MARK(0x8002808C);
ZZ_MARK(0x80028090);
ZZ_MARK(0x80028094);
ZZ_MARK(0x80028098);
ZZ_MARK(0x8002809C);
ZZ_MARK(0x800280A0);
ZZ_MARK(0x800280A4);
ZZ_MARK(0x800280A8);
ZZ_MARK(0x800280AC);
ZZ_MARK_TARGET(0x800280B0,ZZ_28060_50);
ZZ_MARK(0x800280B4);
ZZ_MARK(0x800280B8);
ZZ_MARK(0x800280BC);
ZZ_MARK(0x800280C0);
ZZ_MARK(0x800280C4);
ZZ_MARK(0x800280C8);
ZZ_MARK(0x800280CC);
ZZ_MARK_TARGET(0x800280D0,ZZ_28060_70);
ZZ_MARK(0x800280D4);
ZZ_MARK(0x800280D8);
ZZ_MARK(0x800280DC);
ZZ_MARK_TARGET(0x800280E0,ZZ_28060_80);
ZZ_MARK(0x800280E4);
ZZ_MARK_TARGET(0x800280E8,ZZ_28060_88);
ZZ_MARK(0x800280EC);
ZZ_MARK(0x800280F0);
ZZ_MARK(0x800280F4);
ZZ_MARK_TARGET(0x800280F8,ZZ_28060_98);
ZZ_MARK(0x800280FC);
ZZ_MARK(0x80028100);
ZZ_MARK(0x80028104);
ZZ_MARK(0x80028108);
ZZ_MARK(0x8002810C);
ZZ_MARK(0x80028110);
ZZ_MARK(0x80028114);
ZZ_MARK(0x80028118);
ZZ_MARK(0x8002811C);
ZZ_MARK(0x80028120);
ZZ_MARK(0x80028124);
ZZ_MARK(0x80028128);
ZZ_MARK(0x8002812C);
ZZ_MARK_TARGET(0x80028130,ZZ_28060_D0);
ZZ_MARK(0x80028134);
ZZ_MARK(0x80028138);
ZZ_MARK(0x8002813C);
ZZ_MARK(0x80028140);
ZZ_MARK(0x80028144);
ZZ_MARK(0x80028148);
ZZ_MARK(0x8002814C);
ZZ_MARK_TARGET(0x80028150,ZZ_28060_F0);
ZZ_MARK(0x80028154);
ZZ_MARK(0x80028158);
ZZ_MARK(0x8002815C);
ZZ_MARK_TARGET(0x80028160,ZZ_28060_100);
ZZ_MARK(0x80028164);
ZZ_MARK_TARGET(0x80028168,ZZ_28060_108);
ZZ_MARK(0x8002816C);
ZZ_MARK_TARGET(0x80028170,ZZ_28060_110);
ZZ_MARK_TARGET(0x80028174,ZZ_28060_114);
ZZ_MARK(0x80028178);
ZZ_MARK(0x8002817C);
ZZ_MARK_TARGET(0x80028180,ZZ_28060_120);
ZZ_MARK_TARGET(0x80028184,ZZ_28060_124);
ZZ_MARK(0x80028188);
ZZ_MARK(0x8002818C);
ZZ_MARK(0x80028190);
ZZ_MARK(0x80028194);
ZZ_MARK(0x80028198);
ZZ_MARK(0x8002819C);
ZZ_MARK(0x800281A0);
ZZ_MARK(0x800281A4);
ZZ_MARK(0x800281A8);
ZZ_MARK(0x800281AC);
