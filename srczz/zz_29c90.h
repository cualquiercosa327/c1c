#ifdef ZZ_INCLUDE_CODE
ZZ_29C90:
	V1 = EMU_ReadU32(A1);
	V0 = EMU_ReadU32(A2);
	T1 = EMU_ReadU32(SP + 16); //+ 0x10
	T3 = EMU_ReadU32(SP + 20); //+ 0x14
	V1 = V1 - V0;
	V0 = -A3;
	T0 = -T1;
	A3 = (int32_t)A3 < (int32_t)V1;
	if (A3)
	{
		T2 = -T3;
		ZZ_CLOCKCYCLES(10,0x80029D0C);
		goto ZZ_29C90_7C;
	}
	T2 = -T3;
	V0 = (int32_t)V1 < (int32_t)V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(13,0x80029D0C);
		goto ZZ_29C90_7C;
	}
	V0 = EMU_ReadU32(A1 + 4); //+ 0x4
	V1 = EMU_ReadU32(A2 + 4); //+ 0x4
	V1 = V0 - V1;
	V0 = (int32_t)T1 < (int32_t)V1;
	if (V0)
	{
		V0 = (int32_t)V1 < (int32_t)T0;
		ZZ_CLOCKCYCLES(20,0x80029D0C);
		goto ZZ_29C90_7C;
	}
	V0 = (int32_t)V1 < (int32_t)T0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(22,0x80029D0C);
		goto ZZ_29C90_7C;
	}
	V0 = EMU_ReadU32(A1 + 8); //+ 0x8
	V1 = EMU_ReadU32(A2 + 8); //+ 0x8
	V1 = V0 - V1;
	V0 = (int32_t)T3 < (int32_t)V1;
	if (V0)
	{
		V0 = (int32_t)V1 < (int32_t)T2;
		ZZ_CLOCKCYCLES(29,0x80029D0C);
		goto ZZ_29C90_7C;
	}
	V0 = (int32_t)V1 < (int32_t)T2;
	if (!V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(31,0x80029D28);
		goto ZZ_29C90_98;
	}
	V0 = R0;
	ZZ_CLOCKCYCLES(31,0x80029D0C);
ZZ_29C90_7C:
	if (!A0)
	{
		ZZ_CLOCKCYCLES(2,0x80029D24);
		goto ZZ_29C90_94;
	}
	V0 = EMU_ReadU32(A0 + 200); //+ 0xC8
	V0 |= 0x8000;
	EMU_Write32(A0 + 200,V0); //+ 0xC8
	ZZ_CLOCKCYCLES(6,0x80029D24);
ZZ_29C90_94:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(1,0x80029D28);
ZZ_29C90_98:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x8001FAEC,ZZ_1F30C_7E0);
	//ZZ_JUMPREGISTER(0x80023108,ZZ_201DC_2F2C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80029C90,0x80029D0C,ZZ_29C90);
ZZ_MARK_TARGET(0x80029D0C,0x80029D24,ZZ_29C90_7C);
ZZ_MARK_TARGET(0x80029D24,0x80029D28,ZZ_29C90_94);
ZZ_MARK_TARGET(0x80029D28,0x80029D30,ZZ_29C90_98);
