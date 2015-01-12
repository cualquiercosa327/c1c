#ifdef ZZ_INCLUDE_CODE
ZZ_376E0:
	SP -= 48;
	EMU_Write32(SP + 32,S0); //+ 0x20
	S0 = A0;
	EMU_Write32(SP + 36,S1); //+ 0x24
	S1 = A1;
	A0 = S1 >> 12;
	A1 = A0 & 0xFFF;
	A2 = A1;
	V1 = A0 & 0xE00;
	V0 = 0xE00;
	EMU_Write32(SP + 44,RA); //+ 0x2C
	if (V1 != V0)
	{
		EMU_Write32(SP + 40,S2); //+ 0x28
		ZZ_CLOCKCYCLES(13,0x80037744);
		goto ZZ_376E0_64;
	}
	EMU_Write32(SP + 40,S2); //+ 0x28
	V0 = 0xE1F;
	if (A1 != V0)
	{
		V0 = A0 & 0x1FF;
		ZZ_CLOCKCYCLES(16,0x80037734);
		goto ZZ_376E0_54;
	}
	V0 = A0 & 0x1FF;
	V0 = EMU_ReadU32(S0 + 188); //+ 0xBC
	V0 -= 4;
	EMU_Write32(S0 + 188,V0); //+ 0xBC
	ZZ_CLOCKCYCLES(21,0x80037750);
	goto ZZ_376E0_70;
ZZ_376E0_54:
	V0 <<= 2;
	V0 += 64;
	V0 += S0;
	ZZ_CLOCKCYCLES(4,0x80037750);
	goto ZZ_376E0_70;
ZZ_376E0_64:
	A0 = S0;
	RA = 0x80037750; //ZZ_376E0_70
	A1 = A2;
	ZZ_CLOCKCYCLES(3,0x80036FA4);
	goto ZZ_36FA4;
ZZ_376E0_70:
	S2 = EMU_ReadU32(V0);
	A0 = S1 & 0xFFF;
	V1 = S1 & 0xE00;
	V0 = 0xE00;
	if (V1 != V0)
	{
		A1 = A0;
		ZZ_CLOCKCYCLES(6,0x80037798);
		goto ZZ_376E0_B8;
	}
	A1 = A0;
	V0 = 0xE1F;
	if (A0 != V0)
	{
		V0 = S1 & 0x1FF;
		ZZ_CLOCKCYCLES(9,0x80037788);
		goto ZZ_376E0_A8;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S0 + 188); //+ 0xBC
	V0 -= 4;
	EMU_Write32(S0 + 188,V0); //+ 0xBC
	ZZ_CLOCKCYCLES(14,0x800377A0);
	goto ZZ_376E0_C0;
ZZ_376E0_A8:
	V0 <<= 2;
	V0 += 64;
	V0 += S0;
	ZZ_CLOCKCYCLES(4,0x800377A0);
	goto ZZ_376E0_C0;
ZZ_376E0_B8:
	RA = 0x800377A0; //ZZ_376E0_C0
	A0 = S0;
	ZZ_CLOCKCYCLES(2,0x80036FA4);
	goto ZZ_36FA4;
ZZ_376E0_C0:
	A1 = EMU_ReadU32(V0);
	S1 = EMU_ReadU32(S0 + 188); //+ 0xBC
	V1 = EMU_ReadU32(S0 + 240); //+ 0xF0
	V0 = S1 + 4;
	if (!V1)
	{
		EMU_Write32(S0 + 188,V0); //+ 0xBC
		ZZ_CLOCKCYCLES(6,0x800377E0);
		goto ZZ_376E0_100;
	}
	EMU_Write32(S0 + 188,V0); //+ 0xBC
	EMU_Write32(SP + 16,R0); //+ 0x10
	EMU_Write32(SP + 20,R0); //+ 0x14
	EMU_Write32(SP + 24,R0); //+ 0x18
	A0 = EMU_ReadU32(S0 + 240); //+ 0xF0
	A1 >>= 8;
	A2 = S2;
	RA = 0x800377D8; //ZZ_376E0_F8
	A3 = R0;
	ZZ_CLOCKCYCLES(14,0x800324E0);
	goto ZZ_324E0;
ZZ_376E0_F8:
	EMU_Write32(S1,V0);
	ZZ_CLOCKCYCLES(2,0x800377E8);
	goto ZZ_376E0_108;
ZZ_376E0_100:
	V0 = R0;
	EMU_Write32(S1,V0);
	ZZ_CLOCKCYCLES(2,0x800377E8);
ZZ_376E0_108:
	RA = EMU_ReadU32(SP + 44); //+ 0x2C
	S2 = EMU_ReadU32(SP + 40); //+ 0x28
	S1 = EMU_ReadU32(SP + 36); //+ 0x24
	S0 = EMU_ReadU32(SP + 32); //+ 0x20
	SP += 48;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x8003A26C,ZZ_3A234_38);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800376E0,ZZ_376E0);
ZZ_MARK(0x800376E4);
ZZ_MARK(0x800376E8);
ZZ_MARK(0x800376EC);
ZZ_MARK(0x800376F0);
ZZ_MARK(0x800376F4);
ZZ_MARK(0x800376F8);
ZZ_MARK(0x800376FC);
ZZ_MARK(0x80037700);
ZZ_MARK(0x80037704);
ZZ_MARK(0x80037708);
ZZ_MARK(0x8003770C);
ZZ_MARK(0x80037710);
ZZ_MARK(0x80037714);
ZZ_MARK(0x80037718);
ZZ_MARK(0x8003771C);
ZZ_MARK(0x80037720);
ZZ_MARK(0x80037724);
ZZ_MARK(0x80037728);
ZZ_MARK(0x8003772C);
ZZ_MARK(0x80037730);
ZZ_MARK_TARGET(0x80037734,ZZ_376E0_54);
ZZ_MARK(0x80037738);
ZZ_MARK(0x8003773C);
ZZ_MARK(0x80037740);
ZZ_MARK_TARGET(0x80037744,ZZ_376E0_64);
ZZ_MARK(0x80037748);
ZZ_MARK(0x8003774C);
ZZ_MARK_TARGET(0x80037750,ZZ_376E0_70);
ZZ_MARK(0x80037754);
ZZ_MARK(0x80037758);
ZZ_MARK(0x8003775C);
ZZ_MARK(0x80037760);
ZZ_MARK(0x80037764);
ZZ_MARK(0x80037768);
ZZ_MARK(0x8003776C);
ZZ_MARK(0x80037770);
ZZ_MARK(0x80037774);
ZZ_MARK(0x80037778);
ZZ_MARK(0x8003777C);
ZZ_MARK(0x80037780);
ZZ_MARK(0x80037784);
ZZ_MARK_TARGET(0x80037788,ZZ_376E0_A8);
ZZ_MARK(0x8003778C);
ZZ_MARK(0x80037790);
ZZ_MARK(0x80037794);
ZZ_MARK_TARGET(0x80037798,ZZ_376E0_B8);
ZZ_MARK(0x8003779C);
ZZ_MARK_TARGET(0x800377A0,ZZ_376E0_C0);
ZZ_MARK(0x800377A4);
ZZ_MARK(0x800377A8);
ZZ_MARK(0x800377AC);
ZZ_MARK(0x800377B0);
ZZ_MARK(0x800377B4);
ZZ_MARK(0x800377B8);
ZZ_MARK(0x800377BC);
ZZ_MARK(0x800377C0);
ZZ_MARK(0x800377C4);
ZZ_MARK(0x800377C8);
ZZ_MARK(0x800377CC);
ZZ_MARK(0x800377D0);
ZZ_MARK(0x800377D4);
ZZ_MARK_TARGET(0x800377D8,ZZ_376E0_F8);
ZZ_MARK(0x800377DC);
ZZ_MARK_TARGET(0x800377E0,ZZ_376E0_100);
ZZ_MARK(0x800377E4);
ZZ_MARK_TARGET(0x800377E8,ZZ_376E0_108);
ZZ_MARK(0x800377EC);
ZZ_MARK(0x800377F0);
ZZ_MARK(0x800377F4);
ZZ_MARK(0x800377F8);
ZZ_MARK(0x800377FC);
ZZ_MARK(0x80037800);
