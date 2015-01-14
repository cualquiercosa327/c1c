#ifdef ZZ_INCLUDE_CODE
ZZ_1A18C:
	SP -= 8;
	T4 = A0;
	V0 = A2 << 2;
	V0 -= 4;
	A2 -= 1;
	if ((int32_t)A2 < 0)
	{
		A1 += V0;
		ZZ_CLOCKCYCLES(7,0x8001A268);
		goto ZZ_1A18C_DC;
	}
	A1 += V0;
	T3 = 0xFF0000;
	T3 |= 0xFF00;
	ZZ_CLOCKCYCLES(9,0x8001A1B0);
ZZ_1A18C_24:
	V0 = EMU_ReadU32(GP + 572); //+ 0x23C
	if ((int32_t)V0 <= 0)
	{
		A0 = R0;
		ZZ_CLOCKCYCLES(4,0x8001A218);
		goto ZZ_1A18C_8C;
	}
	A0 = R0;
	T2 = V0;
	T0 = 0x80060000;
	T0 += 12996;
	T1 = R0;
	ZZ_CLOCKCYCLES(8,0x8001A1D0);
ZZ_1A18C_44:
	V1 = EMU_ReadU32(T0);
	A3 = EMU_ReadU32(A1);
	V1 &= T3;
	V0 = A3 & T3;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(6,0x8001A200);
		goto ZZ_1A18C_74;
	}
	EMU_Write32(T0,A3);
	AT = 0x80060000;
	AT += T1;
	EMU_Write32(AT + 13004,T4); //+ 0x32CC
	ZZ_CLOCKCYCLES(12,0x8001A214);
	goto ZZ_1A18C_88;
ZZ_1A18C_74:
	T0 += 12;
	A0 += 1;
	V0 = (int32_t)A0 < (int32_t)T2;
	if (V0)
	{
		T1 += 12;
		ZZ_CLOCKCYCLES(5,0x8001A1D0);
		goto ZZ_1A18C_44;
	}
	T1 += 12;
	ZZ_CLOCKCYCLES(5,0x8001A214);
ZZ_1A18C_88:
	V0 = EMU_ReadU32(GP + 572); //+ 0x23C
	ZZ_CLOCKCYCLES(1,0x8001A218);
ZZ_1A18C_8C:
	if (A0 != V0)
	{
		V1 = A0 << 1;
		ZZ_CLOCKCYCLES(3,0x8001A25C);
		goto ZZ_1A18C_D0;
	}
	V1 = A0 << 1;
	V0 = EMU_ReadU32(A1);
	V1 += A0;
	V1 <<= 2;
	A0 += 1;
	AT = 0x80060000;
	AT += V1;
	EMU_Write32(AT + 13004,T4); //+ 0x32CC
	AT = 0x80060000;
	AT += V1;
	EMU_Write32(AT + 13000,R0); //+ 0x32C8
	EMU_Write32(GP + 572,A0); //+ 0x23C
	AT = 0x80060000;
	AT += V1;
	EMU_Write32(AT + 12996,V0); //+ 0x32C4
	ZZ_CLOCKCYCLES(17,0x8001A25C);
ZZ_1A18C_D0:
	A2 -= 1;
	if ((int32_t)A2 >= 0)
	{
		A1 -= 4;
		ZZ_CLOCKCYCLES(3,0x8001A1B0);
		goto ZZ_1A18C_24;
	}
	A1 -= 4;
	ZZ_CLOCKCYCLES(3,0x8001A268);
ZZ_1A18C_DC:
	SP += 8;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0x8001A2FC,ZZ_1A274_88);
	ZZ_JUMPREGISTER(0x8001A358,ZZ_1A274_E4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001A18C,ZZ_1A18C);
ZZ_MARK(0x8001A190);
ZZ_MARK(0x8001A194);
ZZ_MARK(0x8001A198);
ZZ_MARK(0x8001A19C);
ZZ_MARK(0x8001A1A0);
ZZ_MARK(0x8001A1A4);
ZZ_MARK(0x8001A1A8);
ZZ_MARK(0x8001A1AC);
ZZ_MARK_TARGET(0x8001A1B0,ZZ_1A18C_24);
ZZ_MARK(0x8001A1B4);
ZZ_MARK(0x8001A1B8);
ZZ_MARK(0x8001A1BC);
ZZ_MARK(0x8001A1C0);
ZZ_MARK(0x8001A1C4);
ZZ_MARK(0x8001A1C8);
ZZ_MARK(0x8001A1CC);
ZZ_MARK_TARGET(0x8001A1D0,ZZ_1A18C_44);
ZZ_MARK(0x8001A1D4);
ZZ_MARK(0x8001A1D8);
ZZ_MARK(0x8001A1DC);
ZZ_MARK(0x8001A1E0);
ZZ_MARK(0x8001A1E4);
ZZ_MARK(0x8001A1E8);
ZZ_MARK(0x8001A1EC);
ZZ_MARK(0x8001A1F0);
ZZ_MARK(0x8001A1F4);
ZZ_MARK(0x8001A1F8);
ZZ_MARK(0x8001A1FC);
ZZ_MARK_TARGET(0x8001A200,ZZ_1A18C_74);
ZZ_MARK(0x8001A204);
ZZ_MARK(0x8001A208);
ZZ_MARK(0x8001A20C);
ZZ_MARK(0x8001A210);
ZZ_MARK_TARGET(0x8001A214,ZZ_1A18C_88);
ZZ_MARK_TARGET(0x8001A218,ZZ_1A18C_8C);
ZZ_MARK(0x8001A21C);
ZZ_MARK(0x8001A220);
ZZ_MARK(0x8001A224);
ZZ_MARK(0x8001A228);
ZZ_MARK(0x8001A22C);
ZZ_MARK(0x8001A230);
ZZ_MARK(0x8001A234);
ZZ_MARK(0x8001A238);
ZZ_MARK(0x8001A23C);
ZZ_MARK(0x8001A240);
ZZ_MARK(0x8001A244);
ZZ_MARK(0x8001A248);
ZZ_MARK(0x8001A24C);
ZZ_MARK(0x8001A250);
ZZ_MARK(0x8001A254);
ZZ_MARK(0x8001A258);
ZZ_MARK_TARGET(0x8001A25C,ZZ_1A18C_D0);
ZZ_MARK(0x8001A260);
ZZ_MARK(0x8001A264);
ZZ_MARK_TARGET(0x8001A268,ZZ_1A18C_DC);
ZZ_MARK(0x8001A26C);
ZZ_MARK(0x8001A270);