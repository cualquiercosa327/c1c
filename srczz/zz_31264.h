#ifdef ZZ_INCLUDE_CODE
ZZ_31264:
	A2 = A0;
	V1 = EMU_ReadU32(A2);
	A0 = EMU_ReadU32(A1);
	V1 = (int32_t)V1 < (int32_t)A0;
	if (V1)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(7,0x800312F0);
		goto ZZ_31264_8C;
	}
	V0 = R0;
	V1 = EMU_ReadU32(A2 + 4); //+ 0x4
	A0 = EMU_ReadU32(A1 + 4); //+ 0x4
	V1 = (int32_t)V1 < (int32_t)A0;
	if (V1)
	{
		ZZ_CLOCKCYCLES(13,0x800312F0);
		goto ZZ_31264_8C;
	}
	V1 = EMU_ReadU32(A2 + 8); //+ 0x8
	A0 = EMU_ReadU32(A1 + 8); //+ 0x8
	V1 = (int32_t)V1 < (int32_t)A0;
	if (V1)
	{
		ZZ_CLOCKCYCLES(19,0x800312F0);
		goto ZZ_31264_8C;
	}
	V1 = EMU_ReadU32(A2 + 12); //+ 0xC
	A0 = EMU_ReadU32(A1 + 12); //+ 0xC
	V1 = (int32_t)V1 < (int32_t)A0;
	if (!V1)
	{
		ZZ_CLOCKCYCLES(25,0x800312F0);
		goto ZZ_31264_8C;
	}
	V1 = EMU_ReadU32(A2 + 16); //+ 0x10
	A0 = EMU_ReadU32(A1 + 16); //+ 0x10
	V1 = (int32_t)V1 < (int32_t)A0;
	if (!V1)
	{
		ZZ_CLOCKCYCLES(31,0x800312F0);
		goto ZZ_31264_8C;
	}
	V1 = EMU_ReadU32(A2 + 20); //+ 0x14
	V0 = EMU_ReadU32(A1 + 20); //+ 0x14
	V0 = (int32_t)V1 < (int32_t)V0;
	ZZ_CLOCKCYCLES(35,0x800312F0);
ZZ_31264_8C:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x8002B560,ZZ_2B478_E8);
	ZZ_JUMPREGISTER(0x8002B800,ZZ_2B478_388);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80031264,ZZ_31264);
ZZ_MARK(0x80031268);
ZZ_MARK(0x8003126C);
ZZ_MARK(0x80031270);
ZZ_MARK(0x80031274);
ZZ_MARK(0x80031278);
ZZ_MARK(0x8003127C);
ZZ_MARK(0x80031280);
ZZ_MARK(0x80031284);
ZZ_MARK(0x80031288);
ZZ_MARK(0x8003128C);
ZZ_MARK(0x80031290);
ZZ_MARK(0x80031294);
ZZ_MARK(0x80031298);
ZZ_MARK(0x8003129C);
ZZ_MARK(0x800312A0);
ZZ_MARK(0x800312A4);
ZZ_MARK(0x800312A8);
ZZ_MARK(0x800312AC);
ZZ_MARK(0x800312B0);
ZZ_MARK(0x800312B4);
ZZ_MARK(0x800312B8);
ZZ_MARK(0x800312BC);
ZZ_MARK(0x800312C0);
ZZ_MARK(0x800312C4);
ZZ_MARK(0x800312C8);
ZZ_MARK(0x800312CC);
ZZ_MARK(0x800312D0);
ZZ_MARK(0x800312D4);
ZZ_MARK(0x800312D8);
ZZ_MARK(0x800312DC);
ZZ_MARK(0x800312E0);
ZZ_MARK(0x800312E4);
ZZ_MARK(0x800312E8);
ZZ_MARK(0x800312EC);
ZZ_MARK_TARGET(0x800312F0,ZZ_31264_8C);
ZZ_MARK(0x800312F4);
