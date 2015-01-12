#ifdef ZZ_INCLUDE_CODE
ZZ_27774:
	T4 = EMU_ReadU32(SP + 20); //+ 0x14
	V0 = EMU_ReadU32(SP + 16); //+ 0x10
	T5 = EMU_ReadU32(SP + 24); //+ 0x18
	if ((int32_t)A3 <= 0)
	{
		ZZ_CLOCKCYCLES(5,0x8002786C);
		goto ZZ_27774_F8;
	}
	if (!V0)
	{
		T4 = (int32_t)T4 >> 3;
		ZZ_CLOCKCYCLES(7,0x80027818);
		goto ZZ_27774_A4;
	}
	T4 = (int32_t)T4 >> 3;
	T3 = T5 - 1;
	if ((int32_t)T3 < 0)
	{
		T4 -= 1;
		ZZ_CLOCKCYCLES(10,0x8002786C);
		goto ZZ_27774_F8;
	}
	T4 -= 1;
	T2 = A1;
	ZZ_CLOCKCYCLES(11,0x800277A0);
ZZ_27774_2C:
	T1 = T4;
	if ((int32_t)T1 < 0)
	{
		A1 += 1;
		ZZ_CLOCKCYCLES(3,0x80027804);
		goto ZZ_27774_90;
	}
	A1 += 1;
	ZZ_CLOCKCYCLES(3,0x800277AC);
ZZ_27774_38:
	T0 = EMU_ReadU8(T2);
	if (!T0)
	{
		V1 = 0x80;
		ZZ_CLOCKCYCLES(4,0x800277F4);
		goto ZZ_27774_80;
	}
	V1 = 0x80;
	ZZ_CLOCKCYCLES(4,0x800277BC);
ZZ_27774_48:
	V0 = V1 & T0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(3,0x800277DC);
		goto ZZ_27774_68;
	}
	V0 = EMU_ReadU8(A0);
	A0 += 1;
	A3 -= 1;
	if (!A3)
	{
		EMU_Write8(A2,V0);
		ZZ_CLOCKCYCLES(8,0x8002786C);
		goto ZZ_27774_F8;
	}
	EMU_Write8(A2,V0);
	ZZ_CLOCKCYCLES(8,0x800277DC);
ZZ_27774_68:
	V1 >>= 1;
	V0 = V1 & 0xFF;
	if (V0)
	{
		A2 += 1;
		ZZ_CLOCKCYCLES(4,0x800277BC);
		goto ZZ_27774_48;
	}
	A2 += 1;
	T1 -= 1;
	ZZ_CLOCKCYCLES(6,0x800277FC);
	goto ZZ_27774_88;
ZZ_27774_80:
	A2 += 8;
	T1 -= 1;
	ZZ_CLOCKCYCLES(2,0x800277FC);
ZZ_27774_88:
	if ((int32_t)T1 >= 0)
	{
		T2 += T5;
		ZZ_CLOCKCYCLES(2,0x800277AC);
		goto ZZ_27774_38;
	}
	T2 += T5;
	ZZ_CLOCKCYCLES(2,0x80027804);
ZZ_27774_90:
	T3 -= 1;
	if ((int32_t)T3 >= 0)
	{
		T2 = A1;
		ZZ_CLOCKCYCLES(3,0x800277A0);
		goto ZZ_27774_2C;
	}
	T2 = A1;
	ZZ_CLOCKCYCLES(5,0x8002786C);
	goto ZZ_27774_F8;
ZZ_27774_A4:
	T0 = EMU_ReadU8(A1);
	if (T0)
	{
		A1 += 1;
		ZZ_CLOCKCYCLES(4,0x80027830);
		goto ZZ_27774_BC;
	}
	A1 += 1;
	A2 += 8;
	ZZ_CLOCKCYCLES(6,0x80027818);
	goto ZZ_27774_A4;
ZZ_27774_BC:
	V1 = 0x80;
	ZZ_CLOCKCYCLES(1,0x80027834);
ZZ_27774_C0:
	V0 = T0 & V1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(3,0x80027854);
		goto ZZ_27774_E0;
	}
	V0 = EMU_ReadU8(A0);
	A0 += 1;
	A3 -= 1;
	if (!A3)
	{
		EMU_Write8(A2,V0);
		ZZ_CLOCKCYCLES(8,0x8002786C);
		goto ZZ_27774_F8;
	}
	EMU_Write8(A2,V0);
	ZZ_CLOCKCYCLES(8,0x80027854);
ZZ_27774_E0:
	V1 >>= 1;
	V0 = V1 & 0xFF;
	if (V0)
	{
		A2 += 1;
		ZZ_CLOCKCYCLES(4,0x80027834);
		goto ZZ_27774_C0;
	}
	A2 += 1;
	ZZ_CLOCKCYCLES(6,0x80027818);
	goto ZZ_27774_A4;
ZZ_27774_F8:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x8002766C,ZZ_27518_154);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80027774,ZZ_27774);
ZZ_MARK(0x80027778);
ZZ_MARK(0x8002777C);
ZZ_MARK(0x80027780);
ZZ_MARK(0x80027784);
ZZ_MARK(0x80027788);
ZZ_MARK(0x8002778C);
ZZ_MARK(0x80027790);
ZZ_MARK(0x80027794);
ZZ_MARK(0x80027798);
ZZ_MARK(0x8002779C);
ZZ_MARK_TARGET(0x800277A0,ZZ_27774_2C);
ZZ_MARK(0x800277A4);
ZZ_MARK(0x800277A8);
ZZ_MARK_TARGET(0x800277AC,ZZ_27774_38);
ZZ_MARK(0x800277B0);
ZZ_MARK(0x800277B4);
ZZ_MARK(0x800277B8);
ZZ_MARK_TARGET(0x800277BC,ZZ_27774_48);
ZZ_MARK(0x800277C0);
ZZ_MARK(0x800277C4);
ZZ_MARK(0x800277C8);
ZZ_MARK(0x800277CC);
ZZ_MARK(0x800277D0);
ZZ_MARK(0x800277D4);
ZZ_MARK(0x800277D8);
ZZ_MARK_TARGET(0x800277DC,ZZ_27774_68);
ZZ_MARK(0x800277E0);
ZZ_MARK(0x800277E4);
ZZ_MARK(0x800277E8);
ZZ_MARK(0x800277EC);
ZZ_MARK(0x800277F0);
ZZ_MARK_TARGET(0x800277F4,ZZ_27774_80);
ZZ_MARK(0x800277F8);
ZZ_MARK_TARGET(0x800277FC,ZZ_27774_88);
ZZ_MARK(0x80027800);
ZZ_MARK_TARGET(0x80027804,ZZ_27774_90);
ZZ_MARK(0x80027808);
ZZ_MARK(0x8002780C);
ZZ_MARK(0x80027810);
ZZ_MARK(0x80027814);
ZZ_MARK_TARGET(0x80027818,ZZ_27774_A4);
ZZ_MARK(0x8002781C);
ZZ_MARK(0x80027820);
ZZ_MARK(0x80027824);
ZZ_MARK(0x80027828);
ZZ_MARK(0x8002782C);
ZZ_MARK_TARGET(0x80027830,ZZ_27774_BC);
ZZ_MARK_TARGET(0x80027834,ZZ_27774_C0);
ZZ_MARK(0x80027838);
ZZ_MARK(0x8002783C);
ZZ_MARK(0x80027840);
ZZ_MARK(0x80027844);
ZZ_MARK(0x80027848);
ZZ_MARK(0x8002784C);
ZZ_MARK(0x80027850);
ZZ_MARK_TARGET(0x80027854,ZZ_27774_E0);
ZZ_MARK(0x80027858);
ZZ_MARK(0x8002785C);
ZZ_MARK(0x80027860);
ZZ_MARK(0x80027864);
ZZ_MARK(0x80027868);
ZZ_MARK_TARGET(0x8002786C,ZZ_27774_F8);
ZZ_MARK(0x80027870);
