#ifdef ZZ_INCLUDE_CODE
ZZ_45EF4:
	T8 = T5 | T6;
	T8 |= T7;
	if ((int32_t)T8 >= 0)
	{
		A0 = 1904;
		ZZ_CLOCKCYCLES(4,0x80045F0C);
		goto ZZ_45EF4_18;
	}
	A0 = 1904;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x80046A90,ZZ_46478_618);
	ZZ_JUMPREGISTER_END();
ZZ_45EF4_18:
	V0 = A3 + AT;
	V0 += S6;
	V0 <<= 16;
	V0 = (int32_t)V0 >> 16;
	T9 = V0 >> 5;
	V0 = A0 - T9;
	V0 -= 5;
	A0 = EMU_CheckedAdd(V0,-1904);
	if ((int32_t)A0 < 0)
	{
		V0 <<= 2;
		ZZ_CLOCKCYCLES(10,0x80045F38);
		goto ZZ_45EF4_44;
	}
	V0 <<= 2;
	V0 = 7616;
	ZZ_CLOCKCYCLES(11,0x80045F38);
ZZ_45EF4_44:
	if ((int32_t)V0 >= 0)
	{
		V0 += FP;
		ZZ_CLOCKCYCLES(2,0x80045F44);
		goto ZZ_45F44;
	}
	V0 += FP;
	V0 = FP;
#endif
ZZ_MARK_TARGET(0x80045EF4,ZZ_45EF4);
ZZ_MARK(0x80045EF8);
ZZ_MARK(0x80045EFC);
ZZ_MARK(0x80045F00);
ZZ_MARK(0x80045F04);
ZZ_MARK(0x80045F08);
ZZ_MARK_TARGET(0x80045F0C,ZZ_45EF4_18);
ZZ_MARK(0x80045F10);
ZZ_MARK(0x80045F14);
ZZ_MARK(0x80045F18);
ZZ_MARK(0x80045F1C);
ZZ_MARK(0x80045F20);
ZZ_MARK(0x80045F24);
ZZ_MARK(0x80045F28);
ZZ_MARK(0x80045F2C);
ZZ_MARK(0x80045F30);
ZZ_MARK(0x80045F34);
ZZ_MARK_TARGET(0x80045F38,ZZ_45EF4_44);
ZZ_MARK(0x80045F3C);
ZZ_MARK(0x80045F40);