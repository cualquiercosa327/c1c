#ifdef ZZ_INCLUDE_CODE
ZZ_4EBDC:
	V0 = 0x80060000;
	V0 = EMU_ReadU16(V0 - 6802); //+ 0xFFFFE56E
	T0 = A0;
	A0 = V0 >> 8;
	V1 = A0 << 1;
	V1 += A0;
	V1 <<= 2;
	V1 = V1 - A0;
	V1 <<= 2;
	V0 &= 0xFF;
	V0 <<= 2;
	AT = 0x80060000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 1048); //+ 0x418
	V1 = V1 - A0;
	V1 <<= 2;
	V1 += V0;
	A0 = EMU_ReadU16(V1 + 116); //+ 0x74
	A1 = 0x80060000;
	A1 = EMU_ReadU8(A1 - 6814); //+ 0xFFFFE562
	V0 = A0 << 7;
	V0 += A0;
	EMU_SMultiply(V0,A1);
	A0 = LO;
	A2 = 0x7F;
	EMU_UDivide(A0,A2);
	if (A2)
	{
		ZZ_CLOCKCYCLES(29,0x8004EC54);
		goto ZZ_4EBDC_78;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(30,0x8004EC54);
ZZ_4EBDC_78:
	A0 = LO;
	V1 = EMU_ReadU16(V1 + 118); //+ 0x76
	V0 = V1 << 7;
	V0 += V1;
	EMU_SMultiply(V0,A1);
	V1 = LO;
	EMU_UDivide(V1,A2);
	if (A2)
	{
		ZZ_CLOCKCYCLES(12,0x8004EC88);
		goto ZZ_4EBDC_AC;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(13,0x8004EC88);
ZZ_4EBDC_AC:
	V1 = LO;
	A1 = 0x80060000;
	A1 = EMU_ReadU8(A1 - 6811); //+ 0xFFFFE565
	EMU_SMultiply(A0,A1);
	V0 = LO;
	EMU_UDivide(V0,A2);
	if (A2)
	{
		ZZ_CLOCKCYCLES(11,0x8004ECB8);
		goto ZZ_4EBDC_DC;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(12,0x8004ECB8);
ZZ_4EBDC_DC:
	A3 = LO;
	EMU_SMultiply(V1,A1);
	V0 = LO;
	EMU_UDivide(V0,A2);
	if (A2)
	{
		ZZ_CLOCKCYCLES(10,0x8004ECE4);
		goto ZZ_4EBDC_108;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(11,0x8004ECE4);
ZZ_4EBDC_108:
	A1 = LO;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 25200); //+ 0x6270
	V1 = 0x80060000;
	V1 = EMU_ReadU8(V1 - 6810); //+ 0xFFFFE566
	A0 = EMU_ReadU16(V0 + 426); //+ 0x1AA
	V0 = V1 < 64;
	if (!V0)
	{
		SP -= 8;
		ZZ_CLOCKCYCLES(9,0x8004ED34);
		goto ZZ_4EBDC_158;
	}
	SP -= 8;
	EMU_SMultiply(A1,V1);
	V0 = LO;
	V1 = 0x3F;
	EMU_UDivide(V0,V1);
	if (V1)
	{
		ZZ_CLOCKCYCLES(16,0x8004ED28);
		goto ZZ_4EBDC_14C;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(17,0x8004ED28);
ZZ_4EBDC_14C:
	A2 = LO;
	A1 = A3;
	ZZ_CLOCKCYCLES(3,0x8004ED60);
	goto ZZ_4EBDC_184;
ZZ_4EBDC_158:
	V0 = A2 - V1;
	EMU_SMultiply(A3,V0);
	V1 = LO;
	A2 = A1;
	V0 = 0x3F;
	EMU_UDivide(V1,V0);
	if (V0)
	{
		ZZ_CLOCKCYCLES(9,0x8004ED5C);
		goto ZZ_4EBDC_180;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(10,0x8004ED5C);
ZZ_4EBDC_180:
	A1 = LO;
	ZZ_CLOCKCYCLES(1,0x8004ED60);
ZZ_4EBDC_184:
	V1 = 0x80060000;
	V1 = EMU_ReadU8(V1 - 6813); //+ 0xFFFFE563
	V0 = V1 < 64;
	if (!V0)
	{
		EMU_SMultiply(A2,V1);
		ZZ_CLOCKCYCLES(6,0x8004EDA0);
		goto ZZ_4EBDC_1C4;
	}
	EMU_SMultiply(A2,V1);
	V0 = LO;
	V1 = 0x3F;
	EMU_UDivide(V0,V1);
	if (V1)
	{
		ZZ_CLOCKCYCLES(12,0x8004ED94);
		goto ZZ_4EBDC_1B8;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(13,0x8004ED94);
ZZ_4EBDC_1B8:
	A2 = LO;
	ZZ_CLOCKCYCLES(3,0x8004EDCC);
	goto ZZ_4EBDC_1F0;
ZZ_4EBDC_1C4:
	V0 = 0x7F;
	V0 = V0 - V1;
	EMU_SMultiply(A1,V0);
	V1 = LO;
	V0 = 0x3F;
	EMU_UDivide(V1,V0);
	if (V0)
	{
		ZZ_CLOCKCYCLES(9,0x8004EDC8);
		goto ZZ_4EBDC_1EC;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(10,0x8004EDC8);
ZZ_4EBDC_1EC:
	A1 = LO;
	ZZ_CLOCKCYCLES(1,0x8004EDCC);
ZZ_4EBDC_1F0:
	V1 = 0x80060000;
	V1 = EMU_ReadU8(V1 - 6819); //+ 0xFFFFE55D
	V0 = V1 < 64;
	if (!V0)
	{
		EMU_SMultiply(V1,A2);
		ZZ_CLOCKCYCLES(6,0x8004EE0C);
		goto ZZ_4EBDC_230;
	}
	EMU_SMultiply(V1,A2);
	V0 = LO;
	V1 = 0x3F;
	EMU_UDivide(V0,V1);
	if (V1)
	{
		ZZ_CLOCKCYCLES(12,0x8004EE00);
		goto ZZ_4EBDC_224;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(13,0x8004EE00);
ZZ_4EBDC_224:
	A2 = LO;
	ZZ_CLOCKCYCLES(3,0x8004EE38);
	goto ZZ_4EBDC_25C;
ZZ_4EBDC_230:
	V0 = 0x7F;
	V0 = V0 - V1;
	EMU_SMultiply(A1,V0);
	V1 = LO;
	V0 = 0x3F;
	EMU_UDivide(V1,V0);
	if (V0)
	{
		ZZ_CLOCKCYCLES(9,0x8004EE34);
		goto ZZ_4EBDC_258;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(10,0x8004EE34);
ZZ_4EBDC_258:
	A1 = LO;
	ZZ_CLOCKCYCLES(1,0x8004EE38);
ZZ_4EBDC_25C:
	V1 = 0x80060000;
	V1 = EMU_ReadS16(V1 - 31752); //+ 0xFFFF83F8
	V0 = 0x1;
	if (V1 != V0)
	{
		V0 = A1 < A2;
		ZZ_CLOCKCYCLES(5,0x8004EE60);
		goto ZZ_4EBDC_284;
	}
	V0 = A1 < A2;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(7,0x8004EE5C);
		goto ZZ_4EBDC_280;
	}
	A1 = A2;
	ZZ_CLOCKCYCLES(9,0x8004EE60);
	goto ZZ_4EBDC_284;
ZZ_4EBDC_280:
	A2 = A1;
	ZZ_CLOCKCYCLES(1,0x8004EE60);
ZZ_4EBDC_284:
	V0 = 0x80060000;
	V0 = EMU_ReadU8(V0 - 6822); //+ 0xFFFFE55A
	V1 = 0x80060000;
	V1 = EMU_ReadU8(V1 - 6808); //+ 0xFFFFE568
	A0 &= 0xC0FF;
	V0 = V0 - V1;
	V0 &= 0x3F;
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 25200); //+ 0x6270
	V0 <<= 8;
	A0 |= V0;
	EMU_Write16(V1 + 426,A0); //+ 0x1AA
	A0 = T0 & 0xFF;
	V1 = A0 << 4;
	AT = 0x80060000;
	AT += V1;
	EMU_Write16(AT - 6774,A2); //+ 0xFFFFE58A
	AT = 0x80050000;
	AT += A0;
	V0 = EMU_ReadU8(AT + 30628); //+ 0x77A4
	AT = 0x80060000;
	AT += V1;
	EMU_Write16(AT - 6776,A1); //+ 0xFFFFE588
	V0 |= 0x3;
	AT = 0x80050000;
	AT += A0;
	EMU_Write8(AT + 30628,V0); //+ 0x77A4
	V0 = A0 < 16;
	if (!V0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(30,0x8004EEE4);
		goto ZZ_4EBDC_308;
	}
	V0 = 0x1;
	A3 = V0 << A0;
	A2 = R0;
	ZZ_CLOCKCYCLES(33,0x8004EEF0);
	goto ZZ_4EBDC_314;
ZZ_4EBDC_308:
	A3 = R0;
	V1 = A0 - 16;
	A2 = V0 << V1;
	ZZ_CLOCKCYCLES(3,0x8004EEF0);
ZZ_4EBDC_314:
	V1 = T0 & 0xFF;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 += V1;
	A0 = 0x80060000;
	A0 = EMU_ReadU8(A0 - 7360); //+ 0xFFFFE340
	V0 <<= 2;
	V1 = 0xA;
	AT = 0x80050000;
	AT += V0;
	EMU_Write16(AT + 29360,V1); //+ 0x72B0
	if (!A0)
	{
		A1 = R0;
		ZZ_CLOCKCYCLES(14,0x8004EF84);
		goto ZZ_4EBDC_3A8;
	}
	A1 = R0;
	V1 = A1 << 16;
	ZZ_CLOCKCYCLES(15,0x8004EF2C);
ZZ_4EBDC_350:
	V1 = (int32_t)V1 >> 16;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 += V1;
	V0 <<= 2;
	AT = 0x80050000;
	AT += V0;
	A0 = EMU_ReadU8(AT + 29383); //+ 0x72C7
	V1 = A1 + 1;
	A1 = V1;
	A0 &= 0x1;
	AT = 0x80050000;
	AT += V0;
	EMU_Write8(AT + 29383,A0); //+ 0x72C7
	V0 = 0x80060000;
	V0 = EMU_ReadU8(V0 - 7360); //+ 0xFFFFE340
	V1 <<= 16;
	V1 = (int32_t)V1 >> 16;
	V1 = (int32_t)V1 < (int32_t)V0;
	if (V1)
	{
		V1 = A1 << 16;
		ZZ_CLOCKCYCLES(22,0x8004EF2C);
		goto ZZ_4EBDC_350;
	}
	V1 = A1 << 16;
	ZZ_CLOCKCYCLES(22,0x8004EF84);
ZZ_4EBDC_3A8:
	V1 = T0 & 0xFF;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 += V1;
	V0 <<= 2;
	V1 = 0x2;
	AT = 0x80050000;
	AT += V0;
	EMU_Write8(AT + 29383,V1); //+ 0x72C7
	V0 = 0x80050000;
	V0 = EMU_ReadU16(V0 + 29260); //+ 0x724C
	A0 = 0x80050000;
	A0 = EMU_ReadU16(A0 + 29268); //+ 0x7254
	V1 = 0x80060000;
	V1 = EMU_ReadU16(V1 + 6760); //+ 0x1A68
	V0 |= A3;
	AT = 0x80050000;
	EMU_Write16(AT + 29260,V0); //+ 0x724C
	A0 |= A2;
	AT = 0x80050000;
	EMU_Write16(AT + 29268,A0); //+ 0x7254
	V0 = ~V0;
	V1 &= V0;
	AT = 0x80060000;
	EMU_Write16(AT + 6760,V1); //+ 0x1A68
	V0 = 0x80060000;
	V0 = EMU_ReadU16(V0 + 6768); //+ 0x1A70
	V1 = 0x80060000;
	V1 = EMU_ReadU8(V1 - 6804); //+ 0xFFFFE56C
	A0 = ~A0;
	V0 &= A0;
	AT = 0x80060000;
	EMU_Write16(AT + 6768,V0); //+ 0x1A70
	V1 &= 0x4;
	if (!V1)
	{
		V1 = ~A3;
		ZZ_CLOCKCYCLES(37,0x8004F048);
		goto ZZ_4EBDC_46C;
	}
	V1 = ~A3;
	V0 = 0x80050000;
	V0 = EMU_ReadU16(V0 + 29276); //+ 0x725C
	V1 = 0x80050000;
	V1 = EMU_ReadU16(V1 + 29284); //+ 0x7264
	V0 |= A3;
	AT = 0x80050000;
	EMU_Write16(AT + 29276,V0); //+ 0x725C
	V1 |= A2;
	AT = 0x80050000;
	EMU_Write16(AT + 29284,V1); //+ 0x7264
	ZZ_CLOCKCYCLES(49,0x8004F074);
	goto ZZ_4EBDC_498;
ZZ_4EBDC_46C:
	V0 = 0x80050000;
	V0 = EMU_ReadU16(V0 + 29276); //+ 0x725C
	A0 = 0x80050000;
	A0 = EMU_ReadU16(A0 + 29284); //+ 0x7264
	V0 &= V1;
	AT = 0x80050000;
	EMU_Write16(AT + 29276,V0); //+ 0x725C
	V0 = ~A2;
	A0 &= V0;
	AT = 0x80050000;
	EMU_Write16(AT + 29284,A0); //+ 0x7264
	ZZ_CLOCKCYCLES(11,0x8004F074);
ZZ_4EBDC_498:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 25200); //+ 0x6270
	EMU_Write16(V0 + 404,A3); //+ 0x194
	EMU_Write16(V0 + 406,A2); //+ 0x196
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 8;
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x8004E2AC,ZZ_4DDE4_4C8);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004EBDC,0x8004EC54,ZZ_4EBDC);
ZZ_MARK_TARGET(0x8004EC54,0x8004EC88,ZZ_4EBDC_78);
ZZ_MARK_TARGET(0x8004EC88,0x8004ECB8,ZZ_4EBDC_AC);
ZZ_MARK_TARGET(0x8004ECB8,0x8004ECE4,ZZ_4EBDC_DC);
ZZ_MARK_TARGET(0x8004ECE4,0x8004ED28,ZZ_4EBDC_108);
ZZ_MARK_TARGET(0x8004ED28,0x8004ED34,ZZ_4EBDC_14C);
ZZ_MARK_TARGET(0x8004ED34,0x8004ED5C,ZZ_4EBDC_158);
ZZ_MARK_TARGET(0x8004ED5C,0x8004ED60,ZZ_4EBDC_180);
ZZ_MARK_TARGET(0x8004ED60,0x8004ED94,ZZ_4EBDC_184);
ZZ_MARK_TARGET(0x8004ED94,0x8004EDA0,ZZ_4EBDC_1B8);
ZZ_MARK_TARGET(0x8004EDA0,0x8004EDC8,ZZ_4EBDC_1C4);
ZZ_MARK_TARGET(0x8004EDC8,0x8004EDCC,ZZ_4EBDC_1EC);
ZZ_MARK_TARGET(0x8004EDCC,0x8004EE00,ZZ_4EBDC_1F0);
ZZ_MARK_TARGET(0x8004EE00,0x8004EE0C,ZZ_4EBDC_224);
ZZ_MARK_TARGET(0x8004EE0C,0x8004EE34,ZZ_4EBDC_230);
ZZ_MARK_TARGET(0x8004EE34,0x8004EE38,ZZ_4EBDC_258);
ZZ_MARK_TARGET(0x8004EE38,0x8004EE5C,ZZ_4EBDC_25C);
ZZ_MARK_TARGET(0x8004EE5C,0x8004EE60,ZZ_4EBDC_280);
ZZ_MARK_TARGET(0x8004EE60,0x8004EEE4,ZZ_4EBDC_284);
ZZ_MARK_TARGET(0x8004EEE4,0x8004EEF0,ZZ_4EBDC_308);
ZZ_MARK_TARGET(0x8004EEF0,0x8004EF2C,ZZ_4EBDC_314);
ZZ_MARK_TARGET(0x8004EF2C,0x8004EF84,ZZ_4EBDC_350);
ZZ_MARK_TARGET(0x8004EF84,0x8004F048,ZZ_4EBDC_3A8);
ZZ_MARK_TARGET(0x8004F048,0x8004F074,ZZ_4EBDC_46C);
ZZ_MARK_TARGET(0x8004F074,0x8004F090,ZZ_4EBDC_498);
