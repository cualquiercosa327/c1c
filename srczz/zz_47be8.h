#ifdef ZZ_INCLUDE_CODE
ZZ_47BE8:
	A1 = EMU_ReadU32(A0);
	A2 = A1 < 1;
	if (A2)
	{
		V0 = A1 & 0x2;
		ZZ_CLOCKCYCLES(5,0x80047C04);
		goto ZZ_47BE8_1C;
	}
	V0 = A1 & 0x2;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(7,0x80047C24);
		goto ZZ_47BE8_3C;
	}
	ZZ_CLOCKCYCLES(7,0x80047C04);
ZZ_47BE8_1C:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 22756); //+ 0x58E4
	V1 = EMU_ReadU16(A0 + 8); //+ 0x8
	EMU_Write16(V0 + 388,V1); //+ 0x184
	V0 = EMU_ReadU16(A0 + 8); //+ 0x8
	AT = 0x80050000;
	EMU_Write16(AT + 22884,V0); //+ 0x5964
	ZZ_CLOCKCYCLES(8,0x80047C24);
ZZ_47BE8_3C:
	if (A2)
	{
		ZZ_CLOCKCYCLES(2,0x80047C38);
		goto ZZ_47BE8_50;
	}
	V0 = A1 & 0x4;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80047C58);
		goto ZZ_47BE8_70;
	}
	ZZ_CLOCKCYCLES(5,0x80047C38);
ZZ_47BE8_50:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 22756); //+ 0x58E4
	V1 = EMU_ReadU16(A0 + 10); //+ 0xA
	EMU_Write16(V0 + 390,V1); //+ 0x186
	V0 = EMU_ReadU16(A0 + 10); //+ 0xA
	AT = 0x80050000;
	EMU_Write16(AT + 22886,V0); //+ 0x5966
	ZZ_CLOCKCYCLES(8,0x80047C58);
ZZ_47BE8_70:
	ZZ_JUMPREGISTER_BEGIN(RA);
	V0 = R0;
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80030058,ZZ_30008_50);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80047BE8,0x80047C04,ZZ_47BE8);
ZZ_MARK_TARGET(0x80047C04,0x80047C24,ZZ_47BE8_1C);
ZZ_MARK_TARGET(0x80047C24,0x80047C38,ZZ_47BE8_3C);
ZZ_MARK_TARGET(0x80047C38,0x80047C58,ZZ_47BE8_50);
ZZ_MARK_TARGET(0x80047C58,0x80047C60,ZZ_47BE8_70);