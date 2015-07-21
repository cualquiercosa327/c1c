#ifdef ZZ_INCLUDE_CODE
ZZ_15978:
	V0 = A0 >> 13;
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 15056); //+ 0xFFFFC530
	V0 &= 0x3FC;
	V0 += V1;
	V1 = EMU_ReadU32(V0);
	V0 = EMU_ReadU32(V1 + 4); //+ 0x4
	if (V0 == A0)
	{
		ZZ_CLOCKCYCLES(11,0x800159BC);
		goto ZZ_15978_44;
	}
	V1 += 8;
	ZZ_CLOCKCYCLES(12,0x800159A8);
ZZ_15978_30:
	V0 = EMU_ReadU32(V1 + 4); //+ 0x4
	if (V0 != A0)
	{
		V1 += 8;
		ZZ_CLOCKCYCLES(4,0x800159A8);
		goto ZZ_15978_30;
	}
	V1 += 8;
	V1 -= 8;
	ZZ_CLOCKCYCLES(5,0x800159BC);
ZZ_15978_44:
	ZZ_JUMPREGISTER_BEGIN(RA);
	V0 = V1;
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80017700,ZZ_1767C_84);
	ZZ_JUMPREGISTER(0x80015164,ZZ_15118_4C);
	ZZ_JUMPREGISTER(0x8001548C,ZZ_15458_34);
	ZZ_JUMPREGISTER(0x80015808,ZZ_1579C_6C);
	ZZ_JUMPREGISTER(0x80015060,ZZ_15034_2C);
	ZZ_JUMPREGISTER(0x80013144,ZZ_12F10_234);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80015978,0x800159A8,ZZ_15978);
ZZ_MARK_TARGET(0x800159A8,0x800159BC,ZZ_15978_30);
ZZ_MARK_TARGET(0x800159BC,0x800159C4,ZZ_15978_44);