#ifdef ZZ_INCLUDE_CODE
ZZ_1FAFC:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 2916); //+ 0xB64
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 30772); //+ 0x7834
	A1 = EMU_ReadU32(V0 + 16); //+ 0x10
	A2 = 0x80070000;
	A2 -= 27148;
	V0 = EMU_ReadU32(V1 + 8); //+ 0x8
	A3 = R0;
	V1 = EMU_ReadU32(A1 + 668); //+ 0x29C
	A0 = (int32_t)A0 >> 8;
	V0 <<= 9;
	V1 &= 0x2000;
	if (V1)
	{
		A0 |= V0;
		ZZ_CLOCKCYCLES(15,0x8001FB8C);
		goto ZZ_1FAFC_90;
	}
	A0 |= V0;
	V0 = EMU_ReadU16(A2);
	if (!V0)
	{
		ZZ_CLOCKCYCLES(19,0x8001FB7C);
		goto ZZ_1FAFC_80;
	}
	V1 = A0 & 0xFFFF;
	A1 = 0x1;
	ZZ_CLOCKCYCLES(21,0x8001FB50);
ZZ_1FAFC_54:
	V0 &= 0xFFFF;
	if (V0 == V1)
	{
		ZZ_CLOCKCYCLES(3,0x8001FB8C);
		goto ZZ_1FAFC_90;
	}
	if (V0 != A1)
	{
		ZZ_CLOCKCYCLES(5,0x8001FB68);
		goto ZZ_1FAFC_6C;
	}
	A3 = A2;
	ZZ_CLOCKCYCLES(6,0x8001FB68);
ZZ_1FAFC_6C:
	A2 += 2;
	V0 = EMU_ReadU16(A2);
	if (V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001FB50);
		goto ZZ_1FAFC_54;
	}
	ZZ_CLOCKCYCLES(5,0x8001FB7C);
ZZ_1FAFC_80:
	if (A3)
	{
		ZZ_CLOCKCYCLES(2,0x8001FB88);
		goto ZZ_1FAFC_8C;
	}
	A3 = A2;
	ZZ_CLOCKCYCLES(3,0x8001FB88);
ZZ_1FAFC_8C:
	EMU_Write16(A3,A0);
	ZZ_CLOCKCYCLES(1,0x8001FB8C);
ZZ_1FAFC_90:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80037D14,ZZ_37930_3E4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001FAFC,ZZ_1FAFC);
ZZ_MARK(0x8001FB00);
ZZ_MARK(0x8001FB04);
ZZ_MARK(0x8001FB08);
ZZ_MARK(0x8001FB0C);
ZZ_MARK(0x8001FB10);
ZZ_MARK(0x8001FB14);
ZZ_MARK(0x8001FB18);
ZZ_MARK(0x8001FB1C);
ZZ_MARK(0x8001FB20);
ZZ_MARK(0x8001FB24);
ZZ_MARK(0x8001FB28);
ZZ_MARK(0x8001FB2C);
ZZ_MARK(0x8001FB30);
ZZ_MARK(0x8001FB34);
ZZ_MARK(0x8001FB38);
ZZ_MARK(0x8001FB3C);
ZZ_MARK(0x8001FB40);
ZZ_MARK(0x8001FB44);
ZZ_MARK(0x8001FB48);
ZZ_MARK(0x8001FB4C);
ZZ_MARK_TARGET(0x8001FB50,ZZ_1FAFC_54);
ZZ_MARK(0x8001FB54);
ZZ_MARK(0x8001FB58);
ZZ_MARK(0x8001FB5C);
ZZ_MARK(0x8001FB60);
ZZ_MARK(0x8001FB64);
ZZ_MARK_TARGET(0x8001FB68,ZZ_1FAFC_6C);
ZZ_MARK(0x8001FB6C);
ZZ_MARK(0x8001FB70);
ZZ_MARK(0x8001FB74);
ZZ_MARK(0x8001FB78);
ZZ_MARK_TARGET(0x8001FB7C,ZZ_1FAFC_80);
ZZ_MARK(0x8001FB80);
ZZ_MARK(0x8001FB84);
ZZ_MARK_TARGET(0x8001FB88,ZZ_1FAFC_8C);
ZZ_MARK_TARGET(0x8001FB8C,ZZ_1FAFC_90);
ZZ_MARK(0x8001FB90);
