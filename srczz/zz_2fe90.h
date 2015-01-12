#ifdef ZZ_INCLUDE_CODE
ZZ_2FE90:
	if (!A0)
	{
		A0 = R0;
		ZZ_CLOCKCYCLES(2,0x8002FEE0);
		goto ZZ_2FE90_50;
	}
	A0 = R0;
	A1 = EMU_ReadU32(GP + 152); //+ 0x98
	V1 = 0x80060000;
	V1 -= 2236;
	ZZ_CLOCKCYCLES(5,0x8002FEA4);
ZZ_2FE90_14:
	V0 = A1 + 1;
	if ((int32_t)V0 >= 0)
	{
		V0 = (int32_t)V0 >> 3;
		ZZ_CLOCKCYCLES(3,0x8002FEB8);
		goto ZZ_2FE90_28;
	}
	V0 = (int32_t)V0 >> 3;
	V0 = A1 + 8;
	V0 = (int32_t)V0 >> 3;
	ZZ_CLOCKCYCLES(5,0x8002FEB8);
ZZ_2FE90_28:
	EMU_SMultiply(V0,A0);
	A0 += 1;
	T0 = LO;
	V0 = T0 - A1;
	EMU_Write32(V1,V0);
	V0 = (int32_t)A0 < 16;
	if (V0)
	{
		V1 += 4;
		ZZ_CLOCKCYCLES(8,0x8002FEA4);
		goto ZZ_2FE90_14;
	}
	V1 += 4;
	ZZ_CLOCKCYCLES(10,0x8002FF7C);
	goto ZZ_2FE90_EC;
ZZ_2FE90_50:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 3048); //+ 0xFFFFF418
	if (V0)
	{
		ZZ_CLOCKCYCLES(5,0x8002FF44);
		goto ZZ_2FE90_B4;
	}
	A1 = EMU_ReadU32(GP + 152); //+ 0x98
	A0 = R0;
	A3 = EMU_ReadU32(GP + 148); //+ 0x94
	V1 = 0x80060000;
	V1 -= 2236;
	V0 = -A1;
	A2 = V0 + 1;
	ZZ_CLOCKCYCLES(12,0x8002FF10);
ZZ_2FE90_80:
	V0 = EMU_ReadU32(V1);
	V0 += A3;
	EMU_Write32(V1,V0);
	V0 = (int32_t)A1 < (int32_t)V0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(7,0x8002FF30);
		goto ZZ_2FE90_A0;
	}
	EMU_Write32(V1,A2);
	ZZ_CLOCKCYCLES(8,0x8002FF30);
ZZ_2FE90_A0:
	A0 += 1;
	V0 = (int32_t)A0 < 16;
	if (V0)
	{
		V1 += 4;
		ZZ_CLOCKCYCLES(4,0x8002FF10);
		goto ZZ_2FE90_80;
	}
	V1 += 4;
	A0 = R0;
	ZZ_CLOCKCYCLES(5,0x8002FF44);
ZZ_2FE90_B4:
	V1 = 0x80060000;
	V1 -= 2236;
	ZZ_CLOCKCYCLES(2,0x8002FF4C);
ZZ_2FE90_BC:
	V0 = EMU_ReadU32(V1);
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(4,0x8002FF60);
		goto ZZ_2FE90_D0;
	}
	V0 = -V0;
	ZZ_CLOCKCYCLES(5,0x8002FF60);
ZZ_2FE90_D0:
	AT = 0x1F800000;
	AT += A0;
	EMU_Write8(AT + 256,V0); //+ 0x100
	A0 += 1;
	V0 = (int32_t)A0 < 16;
	if (V0)
	{
		V1 += 4;
		ZZ_CLOCKCYCLES(7,0x8002FF4C);
		goto ZZ_2FE90_BC;
	}
	V1 += 4;
	ZZ_CLOCKCYCLES(7,0x8002FF7C);
ZZ_2FE90_EC:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x8002F620,ZZ_2F53C_E4);
	ZZ_JUMPREGISTER(0x80011C90,ZZ_11800_490);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8002FE90,ZZ_2FE90);
ZZ_MARK(0x8002FE94);
ZZ_MARK(0x8002FE98);
ZZ_MARK(0x8002FE9C);
ZZ_MARK(0x8002FEA0);
ZZ_MARK_TARGET(0x8002FEA4,ZZ_2FE90_14);
ZZ_MARK(0x8002FEA8);
ZZ_MARK(0x8002FEAC);
ZZ_MARK(0x8002FEB0);
ZZ_MARK(0x8002FEB4);
ZZ_MARK_TARGET(0x8002FEB8,ZZ_2FE90_28);
ZZ_MARK(0x8002FEBC);
ZZ_MARK(0x8002FEC0);
ZZ_MARK(0x8002FEC4);
ZZ_MARK(0x8002FEC8);
ZZ_MARK(0x8002FECC);
ZZ_MARK(0x8002FED0);
ZZ_MARK(0x8002FED4);
ZZ_MARK(0x8002FED8);
ZZ_MARK(0x8002FEDC);
ZZ_MARK_TARGET(0x8002FEE0,ZZ_2FE90_50);
ZZ_MARK(0x8002FEE4);
ZZ_MARK(0x8002FEE8);
ZZ_MARK(0x8002FEEC);
ZZ_MARK(0x8002FEF0);
ZZ_MARK(0x8002FEF4);
ZZ_MARK(0x8002FEF8);
ZZ_MARK(0x8002FEFC);
ZZ_MARK(0x8002FF00);
ZZ_MARK(0x8002FF04);
ZZ_MARK(0x8002FF08);
ZZ_MARK(0x8002FF0C);
ZZ_MARK_TARGET(0x8002FF10,ZZ_2FE90_80);
ZZ_MARK(0x8002FF14);
ZZ_MARK(0x8002FF18);
ZZ_MARK(0x8002FF1C);
ZZ_MARK(0x8002FF20);
ZZ_MARK(0x8002FF24);
ZZ_MARK(0x8002FF28);
ZZ_MARK(0x8002FF2C);
ZZ_MARK_TARGET(0x8002FF30,ZZ_2FE90_A0);
ZZ_MARK(0x8002FF34);
ZZ_MARK(0x8002FF38);
ZZ_MARK(0x8002FF3C);
ZZ_MARK(0x8002FF40);
ZZ_MARK_TARGET(0x8002FF44,ZZ_2FE90_B4);
ZZ_MARK(0x8002FF48);
ZZ_MARK_TARGET(0x8002FF4C,ZZ_2FE90_BC);
ZZ_MARK(0x8002FF50);
ZZ_MARK(0x8002FF54);
ZZ_MARK(0x8002FF58);
ZZ_MARK(0x8002FF5C);
ZZ_MARK_TARGET(0x8002FF60,ZZ_2FE90_D0);
ZZ_MARK(0x8002FF64);
ZZ_MARK(0x8002FF68);
ZZ_MARK(0x8002FF6C);
ZZ_MARK(0x8002FF70);
ZZ_MARK(0x8002FF74);
ZZ_MARK(0x8002FF78);
ZZ_MARK_TARGET(0x8002FF7C,ZZ_2FE90_EC);
ZZ_MARK(0x8002FF80);
