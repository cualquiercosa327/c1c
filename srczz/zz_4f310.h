#ifdef ZZ_INCLUDE_CODE
ZZ_4F310:
	A2 = R0;
	if ((int32_t)A1 >= 0)
	{
		A3 = R0;
		ZZ_CLOCKCYCLES(3,0x8004F324);
		goto ZZ_4F310_14;
	}
	A3 = R0;
	A2 = 1;
	A1 = -A1;
	ZZ_CLOCKCYCLES(5,0x8004F324);
ZZ_4F310_14:
	if ((int32_t)A0 >= 0)
	{
		ZZ_CLOCKCYCLES(2,0x8004F334);
		goto ZZ_4F310_24;
	}
	A3 = 1;
	A0 = -A0;
	ZZ_CLOCKCYCLES(4,0x8004F334);
ZZ_4F310_24:
	if (A1)
	{
		V0 = (int32_t)A0 < (int32_t)A1;
		ZZ_CLOCKCYCLES(2,0x8004F34C);
		goto ZZ_4F310_3C;
	}
	V0 = (int32_t)A0 < (int32_t)A1;
	if (A0)
	{
		ZZ_CLOCKCYCLES(4,0x8004F34C);
		goto ZZ_4F310_3C;
	}
	V0 = R0;
	ZZ_CLOCKCYCLES(6,0x8004F488);
	goto ZZ_4F310_178;
ZZ_4F310_3C:
	if (!V0)
	{
		V0 = 0x7FE00000;
		ZZ_CLOCKCYCLES(2,0x8004F3E0);
		goto ZZ_4F310_D0;
	}
	V0 = 0x7FE00000;
	V0 &= A0;
	if (!V0)
	{
		V0 = (int32_t)A1 >> 10;
		ZZ_CLOCKCYCLES(5,0x8004F394);
		goto ZZ_4F310_84;
	}
	V0 = (int32_t)A1 >> 10;
	EMU_SDivide(A0,V0);
	if (V0)
	{
		ZZ_CLOCKCYCLES(8,0x8004F370);
		goto ZZ_4F310_60;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(9,0x8004F370);
ZZ_4F310_60:
	AT = -1;
	if (V0 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x8004F388);
		goto ZZ_4F310_78;
	}
	AT = 0x80000000;
	if (A0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x8004F388);
		goto ZZ_4F310_78;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x8004F388);
ZZ_4F310_78:
	A0 = LO;
	V0 = A0 << 1;
	ZZ_CLOCKCYCLES(3,0x8004F3CC);
	goto ZZ_4F310_BC;
ZZ_4F310_84:
	V0 = A0 << 10;
	EMU_SDivide(V0,A1);
	if (A1)
	{
		ZZ_CLOCKCYCLES(4,0x8004F3A8);
		goto ZZ_4F310_98;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(5,0x8004F3A8);
ZZ_4F310_98:
	AT = -1;
	if (A1 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x8004F3C0);
		goto ZZ_4F310_B0;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x8004F3C0);
		goto ZZ_4F310_B0;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x8004F3C0);
ZZ_4F310_B0:
	A0 = LO;
	V0 = A0 << 1;
	ZZ_CLOCKCYCLES(3,0x8004F3CC);
ZZ_4F310_BC:
	AT = 0x80060000;
	AT += V0;
	V1 = EMU_ReadS16(AT - 7580); //+ 0xFFFFE264
	ZZ_CLOCKCYCLES(5,0x8004F46C);
	goto ZZ_4F310_15C;
ZZ_4F310_D0:
	V0 &= A1;
	if (!V0)
	{
		V0 = (int32_t)A0 >> 10;
		ZZ_CLOCKCYCLES(3,0x8004F420);
		goto ZZ_4F310_110;
	}
	V0 = (int32_t)A0 >> 10;
	EMU_SDivide(A1,V0);
	if (V0)
	{
		ZZ_CLOCKCYCLES(6,0x8004F3FC);
		goto ZZ_4F310_EC;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(7,0x8004F3FC);
ZZ_4F310_EC:
	AT = -1;
	if (V0 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x8004F414);
		goto ZZ_4F310_104;
	}
	AT = 0x80000000;
	if (A1 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x8004F414);
		goto ZZ_4F310_104;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x8004F414);
ZZ_4F310_104:
	A0 = LO;
	V0 = A0 << 1;
	ZZ_CLOCKCYCLES(3,0x8004F458);
	goto ZZ_4F310_148;
ZZ_4F310_110:
	V0 = A1 << 10;
	EMU_SDivide(V0,A0);
	if (A0)
	{
		ZZ_CLOCKCYCLES(4,0x8004F434);
		goto ZZ_4F310_124;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(5,0x8004F434);
ZZ_4F310_124:
	AT = -1;
	if (A0 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x8004F44C);
		goto ZZ_4F310_13C;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x8004F44C);
		goto ZZ_4F310_13C;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x8004F44C);
ZZ_4F310_13C:
	A0 = LO;
	V0 = A0 << 1;
	ZZ_CLOCKCYCLES(3,0x8004F458);
ZZ_4F310_148:
	AT = 0x80060000;
	AT += V0;
	V1 = EMU_ReadS16(AT - 7580); //+ 0xFFFFE264
	V0 = 1024;
	V1 = V0 - V1;
	ZZ_CLOCKCYCLES(5,0x8004F46C);
ZZ_4F310_15C:
	if (!A2)
	{
		V0 = 2048;
		ZZ_CLOCKCYCLES(2,0x8004F478);
		goto ZZ_4F310_168;
	}
	V0 = 2048;
	V1 = V0 - V1;
	ZZ_CLOCKCYCLES(3,0x8004F478);
ZZ_4F310_168:
	if (!A3)
	{
		V0 = V1;
		ZZ_CLOCKCYCLES(2,0x8004F488);
		goto ZZ_4F310_178;
	}
	V0 = V1;
	V1 = -V1;
	V0 = V1;
	ZZ_CLOCKCYCLES(4,0x8004F488);
ZZ_4F310_178:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x800329DC,ZZ_32958_84);
	ZZ_JUMPREGISTER(0x8003ACD0,ZZ_3AC50_80);
	ZZ_JUMPREGISTER(0x80015C04,ZZ_15A04_200);
	ZZ_JUMPREGISTER(0x80015BE0,ZZ_15A04_1DC);
	ZZ_JUMPREGISTER(0x80031594,ZZ_31570_24);
	ZZ_JUMPREGISTER(0x800315C8,ZZ_315A4_24);
	ZZ_JUMPREGISTER(0x80022208,ZZ_221A8_60);
	ZZ_JUMPREGISTER(0x80038038,ZZ_37930_708);
	ZZ_JUMPREGISTER(0x8001F8BC,ZZ_1F29C_620);
	ZZ_JUMPREGISTER(0x80021D18,ZZ_21C64_B4);
	ZZ_JUMPREGISTER(0x8001F9B8,ZZ_1F29C_71C);
	ZZ_JUMPREGISTER(0x8001F904,ZZ_1F29C_668);
	ZZ_JUMPREGISTER(0x8002229C,ZZ_221A8_F4);
	ZZ_JUMPREGISTER(0x8001F9D0,ZZ_1F29C_734);
	ZZ_JUMPREGISTER(0x8001F940,ZZ_1F29C_6A4);
	ZZ_JUMPREGISTER(0x80031698,ZZ_3164C_4C);
	ZZ_JUMPREGISTER(0x8003172C,ZZ_3164C_E0);
	ZZ_JUMPREGISTER(0x80021ED8,ZZ_21C64_274);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004F310,ZZ_4F310);
ZZ_MARK(0x8004F314);
ZZ_MARK(0x8004F318);
ZZ_MARK(0x8004F31C);
ZZ_MARK(0x8004F320);
ZZ_MARK_TARGET(0x8004F324,ZZ_4F310_14);
ZZ_MARK(0x8004F328);
ZZ_MARK(0x8004F32C);
ZZ_MARK(0x8004F330);
ZZ_MARK_TARGET(0x8004F334,ZZ_4F310_24);
ZZ_MARK(0x8004F338);
ZZ_MARK(0x8004F33C);
ZZ_MARK(0x8004F340);
ZZ_MARK(0x8004F344);
ZZ_MARK(0x8004F348);
ZZ_MARK_TARGET(0x8004F34C,ZZ_4F310_3C);
ZZ_MARK(0x8004F350);
ZZ_MARK(0x8004F354);
ZZ_MARK(0x8004F358);
ZZ_MARK(0x8004F35C);
ZZ_MARK(0x8004F360);
ZZ_MARK(0x8004F364);
ZZ_MARK(0x8004F368);
ZZ_MARK(0x8004F36C);
ZZ_MARK_TARGET(0x8004F370,ZZ_4F310_60);
ZZ_MARK(0x8004F374);
ZZ_MARK(0x8004F378);
ZZ_MARK(0x8004F37C);
ZZ_MARK(0x8004F380);
ZZ_MARK(0x8004F384);
ZZ_MARK_TARGET(0x8004F388,ZZ_4F310_78);
ZZ_MARK(0x8004F38C);
ZZ_MARK(0x8004F390);
ZZ_MARK_TARGET(0x8004F394,ZZ_4F310_84);
ZZ_MARK(0x8004F398);
ZZ_MARK(0x8004F39C);
ZZ_MARK(0x8004F3A0);
ZZ_MARK(0x8004F3A4);
ZZ_MARK_TARGET(0x8004F3A8,ZZ_4F310_98);
ZZ_MARK(0x8004F3AC);
ZZ_MARK(0x8004F3B0);
ZZ_MARK(0x8004F3B4);
ZZ_MARK(0x8004F3B8);
ZZ_MARK(0x8004F3BC);
ZZ_MARK_TARGET(0x8004F3C0,ZZ_4F310_B0);
ZZ_MARK(0x8004F3C4);
ZZ_MARK(0x8004F3C8);
ZZ_MARK_TARGET(0x8004F3CC,ZZ_4F310_BC);
ZZ_MARK(0x8004F3D0);
ZZ_MARK(0x8004F3D4);
ZZ_MARK(0x8004F3D8);
ZZ_MARK(0x8004F3DC);
ZZ_MARK_TARGET(0x8004F3E0,ZZ_4F310_D0);
ZZ_MARK(0x8004F3E4);
ZZ_MARK(0x8004F3E8);
ZZ_MARK(0x8004F3EC);
ZZ_MARK(0x8004F3F0);
ZZ_MARK(0x8004F3F4);
ZZ_MARK(0x8004F3F8);
ZZ_MARK_TARGET(0x8004F3FC,ZZ_4F310_EC);
ZZ_MARK(0x8004F400);
ZZ_MARK(0x8004F404);
ZZ_MARK(0x8004F408);
ZZ_MARK(0x8004F40C);
ZZ_MARK(0x8004F410);
ZZ_MARK_TARGET(0x8004F414,ZZ_4F310_104);
ZZ_MARK(0x8004F418);
ZZ_MARK(0x8004F41C);
ZZ_MARK_TARGET(0x8004F420,ZZ_4F310_110);
ZZ_MARK(0x8004F424);
ZZ_MARK(0x8004F428);
ZZ_MARK(0x8004F42C);
ZZ_MARK(0x8004F430);
ZZ_MARK_TARGET(0x8004F434,ZZ_4F310_124);
ZZ_MARK(0x8004F438);
ZZ_MARK(0x8004F43C);
ZZ_MARK(0x8004F440);
ZZ_MARK(0x8004F444);
ZZ_MARK(0x8004F448);
ZZ_MARK_TARGET(0x8004F44C,ZZ_4F310_13C);
ZZ_MARK(0x8004F450);
ZZ_MARK(0x8004F454);
ZZ_MARK_TARGET(0x8004F458,ZZ_4F310_148);
ZZ_MARK(0x8004F45C);
ZZ_MARK(0x8004F460);
ZZ_MARK(0x8004F464);
ZZ_MARK(0x8004F468);
ZZ_MARK_TARGET(0x8004F46C,ZZ_4F310_15C);
ZZ_MARK(0x8004F470);
ZZ_MARK(0x8004F474);
ZZ_MARK_TARGET(0x8004F478,ZZ_4F310_168);
ZZ_MARK(0x8004F47C);
ZZ_MARK(0x8004F480);
ZZ_MARK(0x8004F484);
ZZ_MARK_TARGET(0x8004F488,ZZ_4F310_178);
ZZ_MARK(0x8004F48C);