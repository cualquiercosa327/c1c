#ifdef ZZ_INCLUDE_CODE
ZZ_29B90:
	V1 = EMU_ReadU32(A0);
	V0 = EMU_ReadU32(A1);
	A3 = V1 - V0;
	if ((int32_t)A3 >= 0)
	{
		SP -= 16;
		ZZ_CLOCKCYCLES(6,0x80029BAC);
		goto ZZ_29B90_1C;
	}
	SP -= 16;
	A3 = V0 - V1;
	ZZ_CLOCKCYCLES(7,0x80029BAC);
ZZ_29B90_1C:
	EMU_Write32(SP,A3);
	V1 = EMU_ReadU32(A0 + 4); //+ 0x4
	V0 = EMU_ReadU32(A1 + 4); //+ 0x4
	A2 = V1 - V0;
	if ((int32_t)A2 >= 0)
	{
		ZZ_CLOCKCYCLES(7,0x80029BCC);
		goto ZZ_29B90_3C;
	}
	A2 = V0 - V1;
	ZZ_CLOCKCYCLES(8,0x80029BCC);
ZZ_29B90_3C:
	EMU_Write32(SP + 4,A2); //+ 0x4
	A0 = EMU_ReadU32(A0 + 8); //+ 0x8
	A1 = EMU_ReadU32(A1 + 8); //+ 0x8
	V1 = A0 - A1;
	if ((int32_t)V1 >= 0)
	{
		V0 = (int32_t)A3 < (int32_t)A2;
		ZZ_CLOCKCYCLES(7,0x80029BEC);
		goto ZZ_29B90_5C;
	}
	V0 = (int32_t)A3 < (int32_t)A2;
	V1 = A1 - A0;
	ZZ_CLOCKCYCLES(8,0x80029BEC);
ZZ_29B90_5C:
	if (V0)
	{
		EMU_Write32(SP + 8,V1); //+ 0x8
		ZZ_CLOCKCYCLES(2,0x80029C18);
		goto ZZ_29B90_88;
	}
	EMU_Write32(SP + 8,V1); //+ 0x8
	V0 = (int32_t)A3 < (int32_t)V1;
	if (V0)
	{
		V0 = A2 + V1;
		ZZ_CLOCKCYCLES(5,0x80029C18);
		goto ZZ_29B90_88;
	}
	V0 = A2 + V1;
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(7,0x80029C0C);
		goto ZZ_29B90_7C;
	}
	V0 += 3;
	ZZ_CLOCKCYCLES(8,0x80029C0C);
ZZ_29B90_7C:
	V0 = (int32_t)V0 >> 2;
	V0 += A3;
	ZZ_CLOCKCYCLES(3,0x80029C84);
	goto ZZ_29B90_F4;
ZZ_29B90_88:
	A0 = EMU_ReadU32(SP + 4); //+ 0x4
	A1 = EMU_ReadU32(SP);
	V0 = (int32_t)A0 < (int32_t)A1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(6,0x80029C5C);
		goto ZZ_29B90_CC;
	}
	V1 = EMU_ReadU32(SP + 8); //+ 0x8
	V0 = (int32_t)A0 < (int32_t)V1;
	if (V0)
	{
		V0 = A1 + V1;
		ZZ_CLOCKCYCLES(11,0x80029C5C);
		goto ZZ_29B90_CC;
	}
	V0 = A1 + V1;
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(13,0x80029C50);
		goto ZZ_29B90_C0;
	}
	V0 += 3;
	ZZ_CLOCKCYCLES(14,0x80029C50);
ZZ_29B90_C0:
	V0 = (int32_t)V0 >> 2;
	V0 += A0;
	ZZ_CLOCKCYCLES(3,0x80029C84);
	goto ZZ_29B90_F4;
ZZ_29B90_CC:
	V1 = EMU_ReadU32(SP + 4); //+ 0x4
	V0 = EMU_ReadU32(SP);
	V0 += V1;
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(6,0x80029C78);
		goto ZZ_29B90_E8;
	}
	V0 += 3;
	ZZ_CLOCKCYCLES(7,0x80029C78);
ZZ_29B90_E8:
	V1 = EMU_ReadU32(SP + 8); //+ 0x8
	V0 = (int32_t)V0 >> 2;
	V0 += V1;
	ZZ_CLOCKCYCLES(3,0x80029C84);
ZZ_29B90_F4:
	SP += 16;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0x8001BB10,ZZ_1BAB0_60);
	//ZZ_JUMPREGISTER(0x8002203C,ZZ_201DC_1E60);
	ZZ_JUMPREGISTER(0x80024B44,ZZ_24AD4_70);
	ZZ_JUMPREGISTER(0x80024B54,ZZ_24AD4_80);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80029B90,0x80029BAC,ZZ_29B90);
ZZ_MARK_TARGET(0x80029BAC,0x80029BCC,ZZ_29B90_1C);
ZZ_MARK_TARGET(0x80029BCC,0x80029BEC,ZZ_29B90_3C);
ZZ_MARK_TARGET(0x80029BEC,0x80029C0C,ZZ_29B90_5C);
ZZ_MARK_TARGET(0x80029C0C,0x80029C18,ZZ_29B90_7C);
ZZ_MARK_TARGET(0x80029C18,0x80029C50,ZZ_29B90_88);
ZZ_MARK_TARGET(0x80029C50,0x80029C5C,ZZ_29B90_C0);
ZZ_MARK_TARGET(0x80029C5C,0x80029C78,ZZ_29B90_CC);
ZZ_MARK_TARGET(0x80029C78,0x80029C84,ZZ_29B90_E8);
ZZ_MARK_TARGET(0x80029C84,0x80029C90,ZZ_29B90_F4);