#ifdef ZZ_INCLUDE_CODE
ZZ_27E74:
	T0 = A1;
	A3 = -1;
	T1 = -128;
	ZZ_CLOCKCYCLES(3,0x80027E80);
ZZ_27E74_C:
	V0 = EMU_ReadU8(A0);
	V0 <<= 24;
	V0 = (int32_t)V0 >> 24;
	if ((int32_t)V0 < 0)
	{
		A0 += 1;
		ZZ_CLOCKCYCLES(6,0x80027EF0);
		goto ZZ_27E74_7C;
	}
	A0 += 1;
	if ((int32_t)V0 > 0)
	{
		V1 = V0 + 1;
		ZZ_CLOCKCYCLES(8,0x80027EC4);
		goto ZZ_27E74_50;
	}
	V1 = V0 + 1;
	V0 = EMU_ReadU8(A0);
	A0 += 1;
	V1 = EMU_ReadU8(A0);
	V0 <<= 8;
	V1 |= V0;
	if (V1)
	{
		A0 += 1;
		ZZ_CLOCKCYCLES(15,0x80027EC4);
		goto ZZ_27E74_50;
	}
	A0 += 1;
	V0 = A1 - T0;
	ZZ_CLOCKCYCLES(17,0x80027F3C);
	goto ZZ_27E74_C8;
ZZ_27E74_50:
	V0 = EMU_ReadU8(A0);
	V1 -= 1;
	if (V1 == A3)
	{
		A0 += 1;
		ZZ_CLOCKCYCLES(4,0x80027E80);
		goto ZZ_27E74_C;
	}
	A0 += 1;
	A2 = -1;
	ZZ_CLOCKCYCLES(5,0x80027ED8);
ZZ_27E74_64:
	EMU_Write8(A1,V0);
	V1 -= 1;
	if (V1 != A2)
	{
		A1 += 1;
		ZZ_CLOCKCYCLES(4,0x80027ED8);
		goto ZZ_27E74_64;
	}
	A1 += 1;
	ZZ_CLOCKCYCLES(6,0x80027E80);
	goto ZZ_27E74_C;
ZZ_27E74_7C:
	if (V0 != T1)
	{
		V1 = -V0;
		ZZ_CLOCKCYCLES(2,0x80027F10);
		goto ZZ_27E74_9C;
	}
	V1 = -V0;
	V0 = EMU_ReadU8(A0);
	A0 += 1;
	V1 = EMU_ReadU8(A0);
	A0 += 1;
	V0 <<= 8;
	V1 |= V0;
	ZZ_CLOCKCYCLES(8,0x80027F10);
ZZ_27E74_9C:
	V1 -= 1;
	if (V1 == A3)
	{
		A2 = -1;
		ZZ_CLOCKCYCLES(3,0x80027E80);
		goto ZZ_27E74_C;
	}
	A2 = -1;
	ZZ_CLOCKCYCLES(3,0x80027F1C);
ZZ_27E74_A8:
	V0 = EMU_ReadU8(A0);
	A0 += 1;
	V1 -= 1;
	EMU_Write8(A1,V0);
	if (V1 != A2)
	{
		A1 += 1;
		ZZ_CLOCKCYCLES(6,0x80027F1C);
		goto ZZ_27E74_A8;
	}
	A1 += 1;
	ZZ_CLOCKCYCLES(8,0x80027E80);
	goto ZZ_27E74_C;
ZZ_27E74_C8:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80027734,ZZ_27694_A0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80027E74,ZZ_27E74);
ZZ_MARK(0x80027E78);
ZZ_MARK(0x80027E7C);
ZZ_MARK_TARGET(0x80027E80,ZZ_27E74_C);
ZZ_MARK(0x80027E84);
ZZ_MARK(0x80027E88);
ZZ_MARK(0x80027E8C);
ZZ_MARK(0x80027E90);
ZZ_MARK(0x80027E94);
ZZ_MARK(0x80027E98);
ZZ_MARK(0x80027E9C);
ZZ_MARK(0x80027EA0);
ZZ_MARK(0x80027EA4);
ZZ_MARK(0x80027EA8);
ZZ_MARK(0x80027EAC);
ZZ_MARK(0x80027EB0);
ZZ_MARK(0x80027EB4);
ZZ_MARK(0x80027EB8);
ZZ_MARK(0x80027EBC);
ZZ_MARK(0x80027EC0);
ZZ_MARK_TARGET(0x80027EC4,ZZ_27E74_50);
ZZ_MARK(0x80027EC8);
ZZ_MARK(0x80027ECC);
ZZ_MARK(0x80027ED0);
ZZ_MARK(0x80027ED4);
ZZ_MARK_TARGET(0x80027ED8,ZZ_27E74_64);
ZZ_MARK(0x80027EDC);
ZZ_MARK(0x80027EE0);
ZZ_MARK(0x80027EE4);
ZZ_MARK(0x80027EE8);
ZZ_MARK(0x80027EEC);
ZZ_MARK_TARGET(0x80027EF0,ZZ_27E74_7C);
ZZ_MARK(0x80027EF4);
ZZ_MARK(0x80027EF8);
ZZ_MARK(0x80027EFC);
ZZ_MARK(0x80027F00);
ZZ_MARK(0x80027F04);
ZZ_MARK(0x80027F08);
ZZ_MARK(0x80027F0C);
ZZ_MARK_TARGET(0x80027F10,ZZ_27E74_9C);
ZZ_MARK(0x80027F14);
ZZ_MARK(0x80027F18);
ZZ_MARK_TARGET(0x80027F1C,ZZ_27E74_A8);
ZZ_MARK(0x80027F20);
ZZ_MARK(0x80027F24);
ZZ_MARK(0x80027F28);
ZZ_MARK(0x80027F2C);
ZZ_MARK(0x80027F30);
ZZ_MARK(0x80027F34);
ZZ_MARK(0x80027F38);
ZZ_MARK_TARGET(0x80027F3C,ZZ_27E74_C8);
ZZ_MARK(0x80027F40);
