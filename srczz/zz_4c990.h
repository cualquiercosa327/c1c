#ifdef ZZ_INCLUDE_CODE
ZZ_4C990:
	SP -= 24;
	AT = 0x80060000;
	EMU_Write16(AT + 3224,A1); //+ 0xC98
	AT = 0x80060000;
	EMU_Write16(AT + 3232,A2); //+ 0xCA0
	A1 <<= 16;
	A1 = (int32_t)A1 >> 16;
	if ((int32_t)A1 <= 0)
	{
		A3 = R0;
		ZZ_CLOCKCYCLES(9,0x8004CA00);
		goto ZZ_4C990_70;
	}
	A3 = R0;
	V0 = A2 << 16;
	T0 = (int32_t)V0 >> 16;
	A2 = 0x80060000;
	A2 += 1048;
	V1 = R0;
	ZZ_CLOCKCYCLES(14,0x8004C9C8);
ZZ_4C990_38:
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 = V0 - V1;
	V0 <<= 2;
	V0 = V0 - V1;
	V0 <<= 2;
	V0 += A0;
	EMU_Write32(A2,V0);
	A2 += 4;
	A3 += 1;
	V0 = (int32_t)A3 < (int32_t)A1;
	if (V0)
	{
		V1 += T0;
		ZZ_CLOCKCYCLES(14,0x8004C9C8);
		goto ZZ_4C990_38;
	}
	V1 += T0;
	ZZ_CLOCKCYCLES(14,0x8004CA00);
ZZ_4C990_70:
	V0 = 0x80060000;
	V0 = EMU_ReadS16(V0 + 3224); //+ 0xC98
	if ((int32_t)V0 <= 0)
	{
		A3 = R0;
		ZZ_CLOCKCYCLES(5,0x8004CB64);
		goto ZZ_4C990_1D4;
	}
	A3 = R0;
	T0 = 0x7F;
	T1 = 0x80060000;
	T1 += 1048;
	ZZ_CLOCKCYCLES(8,0x8004CA20);
ZZ_4C990_90:
	V0 = 0x80060000;
	V0 = EMU_ReadS16(V0 + 3232); //+ 0xCA0
	if ((int32_t)V0 <= 0)
	{
		A2 = R0;
		ZZ_CLOCKCYCLES(5,0x8004CB4C);
		goto ZZ_4C990_1BC;
	}
	A2 = R0;
	A1 = T1;
	A0 = R0;
	ZZ_CLOCKCYCLES(7,0x8004CA3C);
ZZ_4C990_AC:
	V0 = EMU_ReadU32(A1);
	V0 += A0;
	EMU_Write32(V0 + 144,R0); //+ 0x90
	V0 = EMU_ReadU32(A1);
	V1 = 0xFF;
	V0 += A0;
	EMU_Write8(V0 + 60,V1); //+ 0x3C
	V0 = EMU_ReadU32(A1);
	V0 += A0;
	EMU_Write8(V0,R0);
	V0 = EMU_ReadU32(A1);
	V0 += A0;
	EMU_Write16(V0 + 62,R0); //+ 0x3E
	V0 = EMU_ReadU32(A1);
	V0 += A0;
	EMU_Write16(V0 + 64,R0); //+ 0x40
	V0 = EMU_ReadU32(A1);
	V0 += A0;
	EMU_Write32(V0 + 148,R0); //+ 0x94
	V0 = EMU_ReadU32(A1);
	V0 += A0;
	EMU_Write32(V0 + 152,R0); //+ 0x98
	V0 = EMU_ReadU32(A1);
	V0 += A0;
	EMU_Write16(V0 + 66,R0); //+ 0x42
	V0 = EMU_ReadU32(A1);
	V0 += A0;
	EMU_Write32(V0 + 164,R0); //+ 0xA4
	V0 = EMU_ReadU32(A1);
	V0 += A0;
	EMU_Write32(V0 + 160,R0); //+ 0xA0
	V0 = EMU_ReadU32(A1);
	V0 += A0;
	EMU_Write32(V0 + 156,R0); //+ 0x9C
	V0 = EMU_ReadU32(A1);
	V0 += A0;
	EMU_Write16(V0 + 68,R0); //+ 0x44
	V0 = EMU_ReadU32(A1);
	V0 += A0;
	EMU_Write16(V0 + 116,T0); //+ 0x74
	V0 = EMU_ReadU32(A1);
	V0 += A0;
	EMU_Write16(V0 + 118,T0); //+ 0x76
	V0 = EMU_ReadU32(A1);
	V1 = 0x80060000;
	V1 = EMU_ReadS16(V1 + 3232); //+ 0xCA0
	V0 += A0;
	EMU_Write16(V0 + 120,T0); //+ 0x78
	V0 = EMU_ReadU32(A1);
	A2 += 1;
	V1 = (int32_t)A2 < (int32_t)V1;
	V0 += A0;
	EMU_Write16(V0 + 122,T0); //+ 0x7A
	if (V1)
	{
		A0 += 172;
		ZZ_CLOCKCYCLES(68,0x8004CA3C);
		goto ZZ_4C990_AC;
	}
	A0 += 172;
	ZZ_CLOCKCYCLES(68,0x8004CB4C);
ZZ_4C990_1BC:
	V0 = 0x80060000;
	V0 = EMU_ReadS16(V0 + 3224); //+ 0xC98
	A3 += 1;
	V0 = (int32_t)A3 < (int32_t)V0;
	if (V0)
	{
		T1 += 4;
		ZZ_CLOCKCYCLES(6,0x8004CA20);
		goto ZZ_4C990_90;
	}
	T1 += 4;
	ZZ_CLOCKCYCLES(6,0x8004CB64);
ZZ_4C990_1D4:
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 24;
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x8002FE34,ZZ_2FDE0_54);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004C990,0x8004C9C8,ZZ_4C990);
ZZ_MARK_TARGET(0x8004C9C8,0x8004CA00,ZZ_4C990_38);
ZZ_MARK_TARGET(0x8004CA00,0x8004CA20,ZZ_4C990_70);
ZZ_MARK_TARGET(0x8004CA20,0x8004CA3C,ZZ_4C990_90);
ZZ_MARK_TARGET(0x8004CA3C,0x8004CB4C,ZZ_4C990_AC);
ZZ_MARK_TARGET(0x8004CB4C,0x8004CB64,ZZ_4C990_1BC);
ZZ_MARK_TARGET(0x8004CB64,0x8004CB6C,ZZ_4C990_1D4);
