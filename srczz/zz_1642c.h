#ifdef ZZ_INCLUDE_CODE
ZZ_1642C:
	SP -= 40;
	EMU_Write32(SP + 28,S1); //+ 0x1C
	S1 = 0x80060000;
	S1 += 14064;
	EMU_Write32(SP + 36,RA); //+ 0x24
	EMU_Write32(SP + 32,S2); //+ 0x20
	EMU_Write32(SP + 24,S0); //+ 0x18
	A0 = EMU_ReadU32(S1);
	RA = 0x80016454; //ZZ_1642C_28
	S0 = R0;
	ZZ_CLOCKCYCLES(10,0x800164E4);
	goto ZZ_164E4;
ZZ_1642C_28:
	RA = 0x8001645C; //ZZ_1642C_30
	A0 = R0;
	ZZ_CLOCKCYCLES(2,0x8004C2DC);
	goto ZZ_4C2DC;
ZZ_1642C_30:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 22400); //+ 0x5780
	RA = 0x8001646C; //ZZ_1642C_40
	ZZ_CLOCKCYCLES(4,0x800116C0);
	goto ZZ_116C0;
ZZ_1642C_40:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 14052); //+ 0x36E4
	if ((int32_t)V0 <= 0)
	{
		ZZ_CLOCKCYCLES(5,0x800164A8);
		goto ZZ_1642C_7C;
	}
	S2 = S1 + 4;
	S1 = S2;
	ZZ_CLOCKCYCLES(7,0x80016488);
ZZ_1642C_5C:
	A0 = EMU_ReadU32(S1 + 4); //+ 0x4
	RA = 0x80016494; //ZZ_1642C_68
	S1 += 8340;
	ZZ_CLOCKCYCLES(3,0x800116C0);
	goto ZZ_116C0;
ZZ_1642C_68:
	V0 = EMU_ReadU32(S2 - 16); //+ 0xFFFFFFF0
	S0 += 1;
	V0 = (int32_t)S0 < (int32_t)V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(5,0x80016488);
		goto ZZ_1642C_5C;
	}
	ZZ_CLOCKCYCLES(5,0x800164A8);
ZZ_1642C_7C:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 2428); //+ 0xFFFFF684
	V0 = 0x2;
	if (V1 != V0)
	{
		V0 = -255;
		ZZ_CLOCKCYCLES(5,0x800164C8);
		goto ZZ_1642C_9C;
	}
	V0 = -255;
	RA = 0x800164C4; //ZZ_1642C_98
	ZZ_CLOCKCYCLES(7,0x80036714);
	goto ZZ_36714;
ZZ_1642C_98:
	V0 = -255;
	ZZ_CLOCKCYCLES(1,0x800164C8);
ZZ_1642C_9C:
	RA = EMU_ReadU32(SP + 36); //+ 0x24
	S2 = EMU_ReadU32(SP + 32); //+ 0x20
	S1 = EMU_ReadU32(SP + 28); //+ 0x1C
	S0 = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 40;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x800153E0,ZZ_15340_A0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001642C,ZZ_1642C);
ZZ_MARK(0x80016430);
ZZ_MARK(0x80016434);
ZZ_MARK(0x80016438);
ZZ_MARK(0x8001643C);
ZZ_MARK(0x80016440);
ZZ_MARK(0x80016444);
ZZ_MARK(0x80016448);
ZZ_MARK(0x8001644C);
ZZ_MARK(0x80016450);
ZZ_MARK_TARGET(0x80016454,ZZ_1642C_28);
ZZ_MARK(0x80016458);
ZZ_MARK_TARGET(0x8001645C,ZZ_1642C_30);
ZZ_MARK(0x80016460);
ZZ_MARK(0x80016464);
ZZ_MARK(0x80016468);
ZZ_MARK_TARGET(0x8001646C,ZZ_1642C_40);
ZZ_MARK(0x80016470);
ZZ_MARK(0x80016474);
ZZ_MARK(0x80016478);
ZZ_MARK(0x8001647C);
ZZ_MARK(0x80016480);
ZZ_MARK(0x80016484);
ZZ_MARK_TARGET(0x80016488,ZZ_1642C_5C);
ZZ_MARK(0x8001648C);
ZZ_MARK(0x80016490);
ZZ_MARK_TARGET(0x80016494,ZZ_1642C_68);
ZZ_MARK(0x80016498);
ZZ_MARK(0x8001649C);
ZZ_MARK(0x800164A0);
ZZ_MARK(0x800164A4);
ZZ_MARK_TARGET(0x800164A8,ZZ_1642C_7C);
ZZ_MARK(0x800164AC);
ZZ_MARK(0x800164B0);
ZZ_MARK(0x800164B4);
ZZ_MARK(0x800164B8);
ZZ_MARK(0x800164BC);
ZZ_MARK(0x800164C0);
ZZ_MARK_TARGET(0x800164C4,ZZ_1642C_98);
ZZ_MARK_TARGET(0x800164C8,ZZ_1642C_9C);
ZZ_MARK(0x800164CC);
ZZ_MARK(0x800164D0);
ZZ_MARK(0x800164D4);
ZZ_MARK(0x800164D8);
ZZ_MARK(0x800164DC);
ZZ_MARK(0x800164E0);
