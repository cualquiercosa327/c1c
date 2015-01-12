#ifdef ZZ_INCLUDE_CODE
ZZ_1E624:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 14056); //+ 0x36E8
	V1 = A2;
	A2 = EMU_ReadU32(V0 + 20); //+ 0x14
	V0 = A2 < 121;
	if (V0)
	{
		EMU_SMultiply(V1,A2);
		ZZ_CLOCKCYCLES(8,0x8001E64C);
		goto ZZ_1E624_28;
	}
	EMU_SMultiply(V1,A2);
	A2 = 0x78;
	EMU_SMultiply(V1,A2);
	ZZ_CLOCKCYCLES(10,0x8001E64C);
ZZ_1E624_28:
	A2 = LO;
	if ((int32_t)A2 >= 0)
	{
		T0 = (int32_t)A2 >> 10;
		ZZ_CLOCKCYCLES(3,0x8001E660);
		goto ZZ_1E624_3C;
	}
	T0 = (int32_t)A2 >> 10;
	A2 += 1023;
	T0 = (int32_t)A2 >> 10;
	ZZ_CLOCKCYCLES(5,0x8001E660);
ZZ_1E624_3C:
	V0 = A1 - A0;
	V0 <<= 20;
	T2 = (int32_t)V0 >> 20;
	if ((int32_t)T2 >= 0)
	{
		T1 = T2;
		ZZ_CLOCKCYCLES(5,0x8001E678);
		goto ZZ_1E624_54;
	}
	T1 = T2;
	T1 = -T2;
	ZZ_CLOCKCYCLES(6,0x8001E678);
ZZ_1E624_54:
	if (!A3)
	{
		V1 = 0x20000000;
		ZZ_CLOCKCYCLES(2,0x8001E708);
		goto ZZ_1E624_E4;
	}
	V1 = 0x20000000;
	V0 = EMU_ReadU32(A3 + 172); //+ 0xAC
	V0 &= V1;
	if (!V0)
	{
		V0 = T0 << 2;
		ZZ_CLOCKCYCLES(7,0x8001E708);
		goto ZZ_1E624_E4;
	}
	V0 = T0 << 2;
	V0 = (int32_t)T1 < (int32_t)V0;
	if (!V0)
	{
		V1 = T0 << 1;
		ZZ_CLOCKCYCLES(10,0x8001E708);
		goto ZZ_1E624_E4;
	}
	V1 = T0 << 1;
	V0 = (int32_t)T1 < (int32_t)V1;
	if (!V0)
	{
		V0 = (int32_t)T1 < (int32_t)T0;
		ZZ_CLOCKCYCLES(13,0x8001E6D8);
		goto ZZ_1E624_B4;
	}
	V0 = (int32_t)T1 < (int32_t)T0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(15,0x8001E6C8);
		goto ZZ_1E624_A4;
	}
	if ((int32_t)T0 >= 0)
	{
		V0 = T0;
		ZZ_CLOCKCYCLES(17,0x8001E6C0);
		goto ZZ_1E624_9C;
	}
	V0 = T0;
	V0 = T0 + 7;
	ZZ_CLOCKCYCLES(18,0x8001E6C0);
ZZ_1E624_9C:
	T0 = (int32_t)V0 >> 3;
	ZZ_CLOCKCYCLES(2,0x8001E708);
	goto ZZ_1E624_E4;
ZZ_1E624_A4:
	if ((int32_t)T0 >= 0)
	{
		V0 = T0;
		ZZ_CLOCKCYCLES(2,0x8001E704);
		goto ZZ_1E624_E0;
	}
	V0 = T0;
	V0 = T0 + 3;
	ZZ_CLOCKCYCLES(4,0x8001E704);
	goto ZZ_1E624_E0;
ZZ_1E624_B4:
	V1 += T0;
	V0 = (int32_t)T1 < (int32_t)V1;
	if (!V0)
	{
		V0 = A2 >> 31;
		ZZ_CLOCKCYCLES(4,0x8001E6F4);
		goto ZZ_1E624_D0;
	}
	V0 = A2 >> 31;
	V0 += T0;
	T0 = (int32_t)V0 >> 1;
	ZZ_CLOCKCYCLES(7,0x8001E708);
	goto ZZ_1E624_E4;
ZZ_1E624_D0:
	V0 = V1;
	if ((int32_t)V0 >= 0)
	{
		T0 = (int32_t)V0 >> 2;
		ZZ_CLOCKCYCLES(3,0x8001E708);
		goto ZZ_1E624_E4;
	}
	T0 = (int32_t)V0 >> 2;
	V0 += 3;
	ZZ_CLOCKCYCLES(4,0x8001E704);
ZZ_1E624_E0:
	T0 = (int32_t)V0 >> 2;
	ZZ_CLOCKCYCLES(1,0x8001E708);
ZZ_1E624_E4:
	V0 = (int32_t)T1 < (int32_t)T0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(3,0x8001E728);
		goto ZZ_1E624_104;
	}
	if (!A3)
	{
		A0 = A1;
		ZZ_CLOCKCYCLES(5,0x8001E784);
		goto ZZ_1E624_160;
	}
	A0 = A1;
	V0 = EMU_ReadU32(A3 + 168); //+ 0xA8
	V0 |= 0x800;
	ZZ_CLOCKCYCLES(8,0x8001E780);
	goto ZZ_1E624_15C;
ZZ_1E624_104:
	if ((int32_t)T1 >= 0)
	{
		V1 = T1;
		ZZ_CLOCKCYCLES(2,0x8001E734);
		goto ZZ_1E624_110;
	}
	V1 = T1;
	V1 = -V1;
	ZZ_CLOCKCYCLES(3,0x8001E734);
ZZ_1E624_110:
	V0 = 0x800;
	if (V1 != V0)
	{
		V0 = (int32_t)A1 < 2048;
		ZZ_CLOCKCYCLES(3,0x8001E74C);
		goto ZZ_1E624_128;
	}
	V0 = (int32_t)A1 < 2048;
	if (V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001E74C);
		goto ZZ_1E624_128;
	}
	T2 = -T2;
	ZZ_CLOCKCYCLES(6,0x8001E74C);
ZZ_1E624_128:
	if ((int32_t)T2 >= 0)
	{
		V0 = A0 + T0;
		ZZ_CLOCKCYCLES(2,0x8001E76C);
		goto ZZ_1E624_148;
	}
	V0 = A0 + T0;
	V0 = A0 - T0;
	if (!A3)
	{
		A0 = V0 & 0xFFF;
		ZZ_CLOCKCYCLES(5,0x8001E784);
		goto ZZ_1E624_160;
	}
	A0 = V0 & 0xFFF;
	V0 = EMU_ReadU32(A3 + 168); //+ 0xA8
	V0 |= 0x8;
	ZZ_CLOCKCYCLES(8,0x8001E780);
	goto ZZ_1E624_15C;
ZZ_1E624_148:
	if (!A3)
	{
		A0 = V0 & 0xFFF;
		ZZ_CLOCKCYCLES(2,0x8001E784);
		goto ZZ_1E624_160;
	}
	A0 = V0 & 0xFFF;
	V0 = EMU_ReadU32(A3 + 168); //+ 0xA8
	V1 = -9;
	V0 &= V1;
	ZZ_CLOCKCYCLES(5,0x8001E780);
ZZ_1E624_15C:
	EMU_Write32(A3 + 168,V0); //+ 0xA8
	ZZ_CLOCKCYCLES(1,0x8001E784);
ZZ_1E624_160:
	ZZ_JUMPREGISTER_BEGIN(RA);
	V0 = A0;
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x8001DFA0,ZZ_1D860_740);
	ZZ_JUMPREGISTER(0x8001DFF8,ZZ_1D860_798);
	ZZ_JUMPREGISTER(0x8001D568,ZZ_1D4E0_88);
	ZZ_JUMPREGISTER(0x8001DD14,ZZ_1D860_4B4);
	ZZ_JUMPREGISTER(0x8001DCD4,ZZ_1D860_474);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001E624,ZZ_1E624);
ZZ_MARK(0x8001E628);
ZZ_MARK(0x8001E62C);
ZZ_MARK(0x8001E630);
ZZ_MARK(0x8001E634);
ZZ_MARK(0x8001E638);
ZZ_MARK(0x8001E63C);
ZZ_MARK(0x8001E640);
ZZ_MARK(0x8001E644);
ZZ_MARK(0x8001E648);
ZZ_MARK_TARGET(0x8001E64C,ZZ_1E624_28);
ZZ_MARK(0x8001E650);
ZZ_MARK(0x8001E654);
ZZ_MARK(0x8001E658);
ZZ_MARK(0x8001E65C);
ZZ_MARK_TARGET(0x8001E660,ZZ_1E624_3C);
ZZ_MARK(0x8001E664);
ZZ_MARK(0x8001E668);
ZZ_MARK(0x8001E66C);
ZZ_MARK(0x8001E670);
ZZ_MARK(0x8001E674);
ZZ_MARK_TARGET(0x8001E678,ZZ_1E624_54);
ZZ_MARK(0x8001E67C);
ZZ_MARK(0x8001E680);
ZZ_MARK(0x8001E684);
ZZ_MARK(0x8001E688);
ZZ_MARK(0x8001E68C);
ZZ_MARK(0x8001E690);
ZZ_MARK(0x8001E694);
ZZ_MARK(0x8001E698);
ZZ_MARK(0x8001E69C);
ZZ_MARK(0x8001E6A0);
ZZ_MARK(0x8001E6A4);
ZZ_MARK(0x8001E6A8);
ZZ_MARK(0x8001E6AC);
ZZ_MARK(0x8001E6B0);
ZZ_MARK(0x8001E6B4);
ZZ_MARK(0x8001E6B8);
ZZ_MARK(0x8001E6BC);
ZZ_MARK_TARGET(0x8001E6C0,ZZ_1E624_9C);
ZZ_MARK(0x8001E6C4);
ZZ_MARK_TARGET(0x8001E6C8,ZZ_1E624_A4);
ZZ_MARK(0x8001E6CC);
ZZ_MARK(0x8001E6D0);
ZZ_MARK(0x8001E6D4);
ZZ_MARK_TARGET(0x8001E6D8,ZZ_1E624_B4);
ZZ_MARK(0x8001E6DC);
ZZ_MARK(0x8001E6E0);
ZZ_MARK(0x8001E6E4);
ZZ_MARK(0x8001E6E8);
ZZ_MARK(0x8001E6EC);
ZZ_MARK(0x8001E6F0);
ZZ_MARK_TARGET(0x8001E6F4,ZZ_1E624_D0);
ZZ_MARK(0x8001E6F8);
ZZ_MARK(0x8001E6FC);
ZZ_MARK(0x8001E700);
ZZ_MARK_TARGET(0x8001E704,ZZ_1E624_E0);
ZZ_MARK_TARGET(0x8001E708,ZZ_1E624_E4);
ZZ_MARK(0x8001E70C);
ZZ_MARK(0x8001E710);
ZZ_MARK(0x8001E714);
ZZ_MARK(0x8001E718);
ZZ_MARK(0x8001E71C);
ZZ_MARK(0x8001E720);
ZZ_MARK(0x8001E724);
ZZ_MARK_TARGET(0x8001E728,ZZ_1E624_104);
ZZ_MARK(0x8001E72C);
ZZ_MARK(0x8001E730);
ZZ_MARK_TARGET(0x8001E734,ZZ_1E624_110);
ZZ_MARK(0x8001E738);
ZZ_MARK(0x8001E73C);
ZZ_MARK(0x8001E740);
ZZ_MARK(0x8001E744);
ZZ_MARK(0x8001E748);
ZZ_MARK_TARGET(0x8001E74C,ZZ_1E624_128);
ZZ_MARK(0x8001E750);
ZZ_MARK(0x8001E754);
ZZ_MARK(0x8001E758);
ZZ_MARK(0x8001E75C);
ZZ_MARK(0x8001E760);
ZZ_MARK(0x8001E764);
ZZ_MARK(0x8001E768);
ZZ_MARK_TARGET(0x8001E76C,ZZ_1E624_148);
ZZ_MARK(0x8001E770);
ZZ_MARK(0x8001E774);
ZZ_MARK(0x8001E778);
ZZ_MARK(0x8001E77C);
ZZ_MARK_TARGET(0x8001E780,ZZ_1E624_15C);
ZZ_MARK_TARGET(0x8001E784,ZZ_1E624_160);
ZZ_MARK(0x8001E788);
