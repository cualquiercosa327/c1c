#ifdef ZZ_INCLUDE_CODE
ZZ_4EDA8:
	V1 = 0x10000000;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8056); //+ 0xFFFFE088
	V1 |= 0x7;
	EMU_Write32(V0,V1);
	A1 = 0x80060000;
	A1 = EMU_ReadU32(A1 - 8060); //+ 0xFFFFE084
	V1 = 0xFF0000;
	V0 = EMU_ReadU32(A1);
	V1 |= 0xFFFF;
	V0 &= V1;
	V1 = 2;
	if (V0 == V1)
	{
		V1 = 0xE1000000;
		ZZ_CLOCKCYCLES(14,0x8004EE50);
		goto ZZ_4EDA8_A8;
	}
	V1 = 0xE1000000;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8056); //+ 0xFFFFE088
	V0 = EMU_ReadU32(V0);
	V1 |= 0x1000;
	V0 &= 0x3FFF;
	V0 |= V1;
	EMU_Write32(A1,V0);
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8060); //+ 0xFFFFE084
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 8056); //+ 0xFFFFE088
	V0 = EMU_ReadU32(V0);
	V0 = EMU_ReadU32(V1);
	V0 &= 0x1000;
	if (V0)
	{
		V0 = A0 & 0x8;
		ZZ_CLOCKCYCLES(32,0x8004EE30);
		goto ZZ_4EDA8_88;
	}
	V0 = A0 & 0x8;
	V0 = R0;
	ZZ_CLOCKCYCLES(34,0x8004EE7C);
	goto ZZ_4EDA8_D4;
ZZ_4EDA8_88:
	if (V0)
	{
		V0 = 0x20000000;
		ZZ_CLOCKCYCLES(2,0x8004EE40);
		goto ZZ_4EDA8_98;
	}
	V0 = 0x20000000;
	V0 = 1;
	ZZ_CLOCKCYCLES(4,0x8004EE7C);
	goto ZZ_4EDA8_D4;
ZZ_4EDA8_98:
	V0 |= 0x504;
	EMU_Write32(V1,V0);
	V0 = 2;
	ZZ_CLOCKCYCLES(4,0x8004EE7C);
	goto ZZ_4EDA8_D4;
ZZ_4EDA8_A8:
	V0 = A0 & 0x8;
	if (!V0)
	{
		A0 = 0x9000000;
		ZZ_CLOCKCYCLES(3,0x8004EE78);
		goto ZZ_4EDA8_D0;
	}
	A0 = 0x9000000;
	A0 |= 0x1;
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 8056); //+ 0xFFFFE088
	V0 = 4;
	EMU_Write32(V1,A0);
	ZZ_CLOCKCYCLES(10,0x8004EE7C);
	goto ZZ_4EDA8_D4;
ZZ_4EDA8_D0:
	V0 = 3;
	ZZ_CLOCKCYCLES(1,0x8004EE7C);
ZZ_4EDA8_D4:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x8004EAAC,ZZ_4E964_148);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004EDA8,ZZ_4EDA8);
ZZ_MARK(0x8004EDAC);
ZZ_MARK(0x8004EDB0);
ZZ_MARK(0x8004EDB4);
ZZ_MARK(0x8004EDB8);
ZZ_MARK(0x8004EDBC);
ZZ_MARK(0x8004EDC0);
ZZ_MARK(0x8004EDC4);
ZZ_MARK(0x8004EDC8);
ZZ_MARK(0x8004EDCC);
ZZ_MARK(0x8004EDD0);
ZZ_MARK(0x8004EDD4);
ZZ_MARK(0x8004EDD8);
ZZ_MARK(0x8004EDDC);
ZZ_MARK(0x8004EDE0);
ZZ_MARK(0x8004EDE4);
ZZ_MARK(0x8004EDE8);
ZZ_MARK(0x8004EDEC);
ZZ_MARK(0x8004EDF0);
ZZ_MARK(0x8004EDF4);
ZZ_MARK(0x8004EDF8);
ZZ_MARK(0x8004EDFC);
ZZ_MARK(0x8004EE00);
ZZ_MARK(0x8004EE04);
ZZ_MARK(0x8004EE08);
ZZ_MARK(0x8004EE0C);
ZZ_MARK(0x8004EE10);
ZZ_MARK(0x8004EE14);
ZZ_MARK(0x8004EE18);
ZZ_MARK(0x8004EE1C);
ZZ_MARK(0x8004EE20);
ZZ_MARK(0x8004EE24);
ZZ_MARK(0x8004EE28);
ZZ_MARK(0x8004EE2C);
ZZ_MARK_TARGET(0x8004EE30,ZZ_4EDA8_88);
ZZ_MARK(0x8004EE34);
ZZ_MARK(0x8004EE38);
ZZ_MARK(0x8004EE3C);
ZZ_MARK_TARGET(0x8004EE40,ZZ_4EDA8_98);
ZZ_MARK(0x8004EE44);
ZZ_MARK(0x8004EE48);
ZZ_MARK(0x8004EE4C);
ZZ_MARK_TARGET(0x8004EE50,ZZ_4EDA8_A8);
ZZ_MARK(0x8004EE54);
ZZ_MARK(0x8004EE58);
ZZ_MARK(0x8004EE5C);
ZZ_MARK(0x8004EE60);
ZZ_MARK(0x8004EE64);
ZZ_MARK(0x8004EE68);
ZZ_MARK(0x8004EE6C);
ZZ_MARK(0x8004EE70);
ZZ_MARK(0x8004EE74);
ZZ_MARK_TARGET(0x8004EE78,ZZ_4EDA8_D0);
ZZ_MARK_TARGET(0x8004EE7C,ZZ_4EDA8_D4);
ZZ_MARK(0x8004EE80);