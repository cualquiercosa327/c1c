#ifdef ZZ_INCLUDE_CODE
ZZ_598A0:
	SP -= 72;
	A3 = A0 & 0xFF;
	A3 <<= 2;
	V1 = A0 & 0xFF00;
	V1 = (int32_t)V1 >> 8;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 = V0 - V1;
	EMU_Write32(SP + 64,RA); //+ 0x40
	EMU_Write32(SP + 60,S5); //+ 0x3C
	EMU_Write32(SP + 56,S4); //+ 0x38
	EMU_Write32(SP + 52,S3); //+ 0x34
	EMU_Write32(SP + 48,S2); //+ 0x30
	EMU_Write32(SP + 44,S1); //+ 0x2C
	EMU_Write32(SP + 40,S0); //+ 0x28
	AT = 0x80070000;
	AT += A3;
	V1 = EMU_ReadU32(AT - 15268); //+ 0xFFFFC45C
	V0 <<= 4;
	S2 = V1 + V0;
	EMU_Write16(S2 + 88,A1); //+ 0x58
	V0 = EMU_ReadU16(S2 + 88); //+ 0x58
	S5 = A0;
	V0 = V0 < 127;
	if (V0)
	{
		EMU_Write16(S2 + 90,A2); //+ 0x5A
		ZZ_CLOCKCYCLES(27,0x80059914);
		goto ZZ_598A0_74;
	}
	EMU_Write16(S2 + 90,A2); //+ 0x5A
	V0 = 127;
	EMU_Write16(S2 + 88,V0); //+ 0x58
	ZZ_CLOCKCYCLES(29,0x80059914);
ZZ_598A0_74:
	V0 = EMU_ReadU16(S2 + 90); //+ 0x5A
	V0 = V0 < 127;
	if (V0)
	{
		V0 = 127;
		ZZ_CLOCKCYCLES(5,0x8005992C);
		goto ZZ_598A0_8C;
	}
	V0 = 127;
	EMU_Write16(S2 + 90,V0); //+ 0x5A
	ZZ_CLOCKCYCLES(6,0x8005992C);
ZZ_598A0_8C:
	V0 = 0x80070000;
	V0 = EMU_ReadU8(V0 - 32136); //+ 0xFFFF8278
	if (!V0)
	{
		S1 = R0;
		ZZ_CLOCKCYCLES(5,0x80059DAC);
		goto ZZ_598A0_50C;
	}
	S1 = R0;
	S4 = 0x2040000;
	S4 |= 0x811;
	S3 = 0x82080000;
	S3 |= 0x2083;
	V1 = S1 << 16;
	ZZ_CLOCKCYCLES(10,0x80059954);
ZZ_598A0_B4:
	V1 = (int32_t)V1 >> 16;
	V0 = V1 << 3;
	V0 = V0 - V1;
	V0 <<= 2;
	V0 = V0 - V1;
	S0 = V0 << 1;
	AT = 0x80060000;
	AT += S0;
	V1 = EMU_ReadS16(AT + 1204); //+ 0x4B4
	V0 = S5 << 16;
	V0 = (int32_t)V0 >> 16;
	if (V1 != V0)
	{
		V0 = S1 + 1;
		ZZ_CLOCKCYCLES(13,0x80059D8C);
		goto ZZ_598A0_4EC;
	}
	V0 = S1 + 1;
	AT = 0x80060000;
	AT += S0;
	A0 = EMU_ReadS16(AT + 1212); //+ 0x4BC
	AT = 0x80060000;
	AT += S0;
	A1 = EMU_ReadS16(AT + 1206); //+ 0x4B6
	RA = 0x800599A8; //ZZ_598A0_108
	ZZ_CLOCKCYCLES(21,0x8005A59C);
	goto ZZ_5A59C;
ZZ_598A0_108:
	AT = 0x80060000;
	AT += S0;
	V0 = EMU_ReadS16(AT + 1200); //+ 0x4B0
	AT = 0x80060000;
	AT += S0;
	V1 = EMU_ReadS16(AT + 1196); //+ 0x4AC
	V0 <<= 1;
	V0 += S2;
	V0 = EMU_ReadS16(V0 + 96); //+ 0x60
	EMU_SMultiply(V1,V0);
	V1 = LO;
	V0 = 0x81020000;
	V0 |= 0x409;
	EMU_SMultiply(V1,V0);
	A3 = HI;
	A0 = A3 + V1;
	A0 = (int32_t)A0 >> 6;
	V1 = (int32_t)V1 >> 31;
	A0 = A0 - V1;
	V1 = 0x80070000;
	V1 = EMU_ReadU32(V1 - 32144); //+ 0xFFFF8270
	V0 = A0 << 14;
	V1 = EMU_ReadU8(V1 + 24); //+ 0x18
	V0 = V0 - A0;
	EMU_SMultiply(V1,V0);
	V1 = LO;
	V0 = 0x82060000;
	V0 |= 0x1029;
	EMU_SMultiply(V1,V0);
	AT = 0x80060000;
	AT += S0;
	V0 = EMU_ReadS16(AT + 1208); //+ 0x4B8
	A0 = 0x80070000;
	A0 = EMU_ReadU32(A0 - 32152); //+ 0xFFFF8268
	V0 <<= 4;
	V0 += A0;
	V0 = EMU_ReadU8(V0 + 1); //+ 0x1
	A3 = HI;
	A1 = A3 + V1;
	A1 = (int32_t)A1 >> 13;
	V1 = (int32_t)V1 >> 31;
	A0 = A1 - V1;
	EMU_SMultiply(A0,V0);
	AT = 0x80060000;
	AT += S0;
	A2 = EMU_ReadS16(AT + 1206); //+ 0x4B6
	AT = 0x80060000;
	AT += S0;
	V0 = EMU_ReadS16(AT + 1210); //+ 0x4BA
	A2 <<= 4;
	A2 += V0;
	V0 = 0x80070000;
	V0 = EMU_ReadU32(V0 - 32140); //+ 0xFFFF8274
	A2 <<= 5;
	A2 += V0;
	V1 = LO;
	V0 = EMU_ReadU8(A2 + 2); //+ 0x2
	EMU_SMultiply(V1,V0);
	V0 = LO;
	V1 = 0x40C0000;
	V1 |= 0x2051;
	EMU_UMultiply(V0,V1);
	V1 = HI;
	V0 = V0 - V1;
	V0 >>= 1;
	V1 += V0;
	V0 = EMU_ReadU16(S2 + 88); //+ 0x58
	A1 = V1 >> 13;
	EMU_SMultiply(A1,V0);
	V0 = LO;
	V1 = EMU_ReadU16(S2 + 90); //+ 0x5A
	EMU_SMultiply(A1,V1);
	V1 = LO;
	EMU_UMultiply(V0,S4);
	A0 = HI;
	EMU_UMultiply(V1,S4);
	V0 = V0 - A0;
	V0 >>= 1;
	A0 += V0;
	A0 >>= 6;
	A1 = HI;
	V1 = V1 - A1;
	V1 >>= 1;
	A1 += V1;
	V1 = EMU_ReadU8(A2 + 3); //+ 0x3
	V0 = V1 < 64;
	if (!V0)
	{
		A1 >>= 6;
		ZZ_CLOCKCYCLES(96,0x80059B54);
		goto ZZ_598A0_2B4;
	}
	A1 >>= 6;
	EMU_SMultiply(A1,V1);
	V0 = LO;
	V1 = 0x4100000;
	V1 |= 0x4105;
	EMU_UMultiply(V0,V1);
	V1 = HI;
	V0 = V0 - V1;
	V0 >>= 1;
	V1 += V0;
	A3 = V1 >> 5;
	ZZ_CLOCKCYCLES(107,0x80059B88);
	goto ZZ_598A0_2E8;
ZZ_598A0_2B4:
	V0 = 127;
	V0 = V0 - V1;
	EMU_SMultiply(A0,V0);
	V0 = LO;
	V1 = 0x4100000;
	V1 |= 0x4105;
	EMU_UMultiply(V0,V1);
	A3 = A1;
	V1 = HI;
	V0 = V0 - V1;
	V0 >>= 1;
	V1 += V0;
	A0 = V1 >> 5;
	ZZ_CLOCKCYCLES(13,0x80059B88);
ZZ_598A0_2E8:
	V1 = S1 << 16;
	V1 = (int32_t)V1 >> 16;
	V0 = V1 << 3;
	V0 = V0 - V1;
	V0 <<= 2;
	V0 = V0 - V1;
	V0 <<= 1;
	AT = 0x80060000;
	AT += V0;
	V0 = EMU_ReadS16(AT + 1208); //+ 0x4B8
	V1 = 0x80070000;
	V1 = EMU_ReadU32(V1 - 32152); //+ 0xFFFF8268
	V0 <<= 4;
	V0 += V1;
	A1 = EMU_ReadU8(V0 + 4); //+ 0x4
	V0 = A1 < 64;
	if (!V0)
	{
		V0 = A3 & 0xFFFF;
		ZZ_CLOCKCYCLES(19,0x80059BF8);
		goto ZZ_598A0_358;
	}
	V0 = A3 & 0xFFFF;
	EMU_SMultiply(V0,A1);
	V0 = LO;
	EMU_SMultiply(V0,S3);
	T1 = HI;
	V0 += T1;
	A3 = V0 >> 5;
	ZZ_CLOCKCYCLES(28,0x80059C2C);
	goto ZZ_598A0_38C;
ZZ_598A0_358:
	V1 = A0 & 0xFFFF;
	V0 = 127;
	V0 = V0 - A1;
	EMU_SMultiply(V1,V0);
	V1 = LO;
	EMU_SMultiply(V1,S3);
	T1 = HI;
	V0 = T1 + V1;
	V0 = (int32_t)V0 >> 5;
	V1 = (int32_t)V1 >> 31;
	A0 = V0 - V1;
	ZZ_CLOCKCYCLES(13,0x80059C2C);
ZZ_598A0_38C:
	V0 = S1 << 16;
	V0 = (int32_t)V0 >> 16;
	V1 = V0 << 3;
	V1 = V1 - V0;
	V1 <<= 2;
	V1 = V1 - V0;
	V1 <<= 1;
	AT = 0x80060000;
	AT += V1;
	A1 = EMU_ReadU8(AT + 1198); //+ 0x4AE
	V0 = A1 < 64;
	if (!V0)
	{
		V0 = A3 & 0xFFFF;
		ZZ_CLOCKCYCLES(14,0x80059C88);
		goto ZZ_598A0_3E8;
	}
	V0 = A3 & 0xFFFF;
	EMU_SMultiply(V0,A1);
	V0 = LO;
	EMU_SMultiply(V0,S3);
	T1 = HI;
	V0 += T1;
	A3 = V0 >> 5;
	ZZ_CLOCKCYCLES(23,0x80059CBC);
	goto ZZ_598A0_41C;
ZZ_598A0_3E8:
	V1 = A0 & 0xFFFF;
	V0 = 127;
	V0 = V0 - A1;
	EMU_SMultiply(V1,V0);
	V1 = LO;
	EMU_SMultiply(V1,S3);
	T1 = HI;
	V0 = T1 + V1;
	V0 = (int32_t)V0 >> 5;
	V1 = (int32_t)V1 >> 31;
	A0 = V0 - V1;
	ZZ_CLOCKCYCLES(13,0x80059CBC);
ZZ_598A0_41C:
	V1 = 0x80060000;
	V1 = EMU_ReadS16(V1 + 14048); //+ 0x36E0
	V0 = 1;
	if (V1 != V0)
	{
		V1 = A3 & 0xFFFF;
		ZZ_CLOCKCYCLES(5,0x80059CEC);
		goto ZZ_598A0_44C;
	}
	V1 = A3 & 0xFFFF;
	V0 = A0 & 0xFFFF;
	V0 = V0 < V1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(9,0x80059CE8);
		goto ZZ_598A0_448;
	}
	A0 = A3;
	ZZ_CLOCKCYCLES(11,0x80059CEC);
	goto ZZ_598A0_44C;
ZZ_598A0_448:
	A3 = A0;
	ZZ_CLOCKCYCLES(1,0x80059CEC);
ZZ_598A0_44C:
	A0 &= 0xFFFF;
	EMU_SMultiply(A0,A0);
	A0 = LO;
	V1 = A3 & 0xFFFF;
	EMU_SMultiply(V1,V1);
	V1 = LO;
	V0 = 0x80020000;
	V0 |= 0x9;
	EMU_SMultiply(V1,V0);
	A3 = HI;
	A1 = S1 << 16;
	EMU_SMultiply(A0,V0);
	A1 = (int32_t)A1 >> 16;
	A2 = A1 << 4;
	V0 = A3 + V1;
	V0 = (int32_t)V0 >> 13;
	V1 = (int32_t)V1 >> 31;
	A3 = V0 - V1;
	AT = 0x80070000;
	AT += A2;
	EMU_Write16(AT - 26578,A3); //+ 0xFFFF982E
	AT = 0x80060000;
	AT += A1;
	V1 = EMU_ReadU8(AT + 2508); //+ 0x9CC
	V1 |= 0x3;
	AT = 0x80060000;
	AT += A1;
	EMU_Write8(AT + 2508,V1); //+ 0x9CC
	T0 = HI;
	V0 = T0 + A0;
	V0 = (int32_t)V0 >> 13;
	A0 = (int32_t)A0 >> 31;
	A0 = V0 - A0;
	AT = 0x80070000;
	AT += A2;
	EMU_Write16(AT - 26580,A0); //+ 0xFFFF982C
	V0 = S1 + 1;
	ZZ_CLOCKCYCLES(40,0x80059D8C);
ZZ_598A0_4EC:
	S1 = V0;
	V0 <<= 16;
	V1 = 0x80070000;
	V1 = EMU_ReadU8(V1 - 32136); //+ 0xFFFF8278
	V0 = (int32_t)V0 >> 16;
	V0 = (int32_t)V0 < (int32_t)V1;
	if (V0)
	{
		V1 = S1 << 16;
		ZZ_CLOCKCYCLES(8,0x80059954);
		goto ZZ_598A0_B4;
	}
	V1 = S1 << 16;
	ZZ_CLOCKCYCLES(8,0x80059DAC);
ZZ_598A0_50C:
	V0 = S5 << 16;
	V0 = (int32_t)V0 >> 16;
	RA = EMU_ReadU32(SP + 64); //+ 0x40
	S5 = EMU_ReadU32(SP + 60); //+ 0x3C
	S4 = EMU_ReadU32(SP + 56); //+ 0x38
	S3 = EMU_ReadU32(SP + 52); //+ 0x34
	S2 = EMU_ReadU32(SP + 48); //+ 0x30
	S1 = EMU_ReadU32(SP + 44); //+ 0x2C
	S0 = EMU_ReadU32(SP + 40); //+ 0x28
	SP += 72;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(12);
	ZZ_JUMPREGISTER(0x80052858,ZZ_52830_28);
	ZZ_JUMPREGISTER(0x80056A74,ZZ_569F8_7C);
	ZZ_JUMPREGISTER(0x80054DD8,ZZ_54CF8_E0);
	ZZ_JUMPREGISTER(0x8005566C,ZZ_55410_25C);
	ZZ_JUMPREGISTER(0x80055A18,ZZ_55730_2E8);
	ZZ_JUMPREGISTER(0x800555CC,ZZ_55410_1BC);
	ZZ_JUMPREGISTER(0x80055644,ZZ_55410_234);
	ZZ_JUMPREGISTER(0x8005591C,ZZ_55730_1EC);
	ZZ_JUMPREGISTER(0x800559F0,ZZ_55730_2C0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800598A0,ZZ_598A0);
ZZ_MARK(0x800598A4);
ZZ_MARK(0x800598A8);
ZZ_MARK(0x800598AC);
ZZ_MARK(0x800598B0);
ZZ_MARK(0x800598B4);
ZZ_MARK(0x800598B8);
ZZ_MARK(0x800598BC);
ZZ_MARK(0x800598C0);
ZZ_MARK(0x800598C4);
ZZ_MARK(0x800598C8);
ZZ_MARK(0x800598CC);
ZZ_MARK(0x800598D0);
ZZ_MARK(0x800598D4);
ZZ_MARK(0x800598D8);
ZZ_MARK(0x800598DC);
ZZ_MARK(0x800598E0);
ZZ_MARK(0x800598E4);
ZZ_MARK(0x800598E8);
ZZ_MARK(0x800598EC);
ZZ_MARK(0x800598F0);
ZZ_MARK(0x800598F4);
ZZ_MARK(0x800598F8);
ZZ_MARK(0x800598FC);
ZZ_MARK(0x80059900);
ZZ_MARK(0x80059904);
ZZ_MARK(0x80059908);
ZZ_MARK(0x8005990C);
ZZ_MARK(0x80059910);
ZZ_MARK_TARGET(0x80059914,ZZ_598A0_74);
ZZ_MARK(0x80059918);
ZZ_MARK(0x8005991C);
ZZ_MARK(0x80059920);
ZZ_MARK(0x80059924);
ZZ_MARK(0x80059928);
ZZ_MARK_TARGET(0x8005992C,ZZ_598A0_8C);
ZZ_MARK(0x80059930);
ZZ_MARK(0x80059934);
ZZ_MARK(0x80059938);
ZZ_MARK(0x8005993C);
ZZ_MARK(0x80059940);
ZZ_MARK(0x80059944);
ZZ_MARK(0x80059948);
ZZ_MARK(0x8005994C);
ZZ_MARK(0x80059950);
ZZ_MARK_TARGET(0x80059954,ZZ_598A0_B4);
ZZ_MARK(0x80059958);
ZZ_MARK(0x8005995C);
ZZ_MARK(0x80059960);
ZZ_MARK(0x80059964);
ZZ_MARK(0x80059968);
ZZ_MARK(0x8005996C);
ZZ_MARK(0x80059970);
ZZ_MARK(0x80059974);
ZZ_MARK(0x80059978);
ZZ_MARK(0x8005997C);
ZZ_MARK(0x80059980);
ZZ_MARK(0x80059984);
ZZ_MARK(0x80059988);
ZZ_MARK(0x8005998C);
ZZ_MARK(0x80059990);
ZZ_MARK(0x80059994);
ZZ_MARK(0x80059998);
ZZ_MARK(0x8005999C);
ZZ_MARK(0x800599A0);
ZZ_MARK(0x800599A4);
ZZ_MARK_TARGET(0x800599A8,ZZ_598A0_108);
ZZ_MARK(0x800599AC);
ZZ_MARK(0x800599B0);
ZZ_MARK(0x800599B4);
ZZ_MARK(0x800599B8);
ZZ_MARK(0x800599BC);
ZZ_MARK(0x800599C0);
ZZ_MARK(0x800599C4);
ZZ_MARK(0x800599C8);
ZZ_MARK(0x800599CC);
ZZ_MARK(0x800599D0);
ZZ_MARK(0x800599D4);
ZZ_MARK(0x800599D8);
ZZ_MARK(0x800599DC);
ZZ_MARK(0x800599E0);
ZZ_MARK(0x800599E4);
ZZ_MARK(0x800599E8);
ZZ_MARK(0x800599EC);
ZZ_MARK(0x800599F0);
ZZ_MARK(0x800599F4);
ZZ_MARK(0x800599F8);
ZZ_MARK(0x800599FC);
ZZ_MARK(0x80059A00);
ZZ_MARK(0x80059A04);
ZZ_MARK(0x80059A08);
ZZ_MARK(0x80059A0C);
ZZ_MARK(0x80059A10);
ZZ_MARK(0x80059A14);
ZZ_MARK(0x80059A18);
ZZ_MARK(0x80059A1C);
ZZ_MARK(0x80059A20);
ZZ_MARK(0x80059A24);
ZZ_MARK(0x80059A28);
ZZ_MARK(0x80059A2C);
ZZ_MARK(0x80059A30);
ZZ_MARK(0x80059A34);
ZZ_MARK(0x80059A38);
ZZ_MARK(0x80059A3C);
ZZ_MARK(0x80059A40);
ZZ_MARK(0x80059A44);
ZZ_MARK(0x80059A48);
ZZ_MARK(0x80059A4C);
ZZ_MARK(0x80059A50);
ZZ_MARK(0x80059A54);
ZZ_MARK(0x80059A58);
ZZ_MARK(0x80059A5C);
ZZ_MARK(0x80059A60);
ZZ_MARK(0x80059A64);
ZZ_MARK(0x80059A68);
ZZ_MARK(0x80059A6C);
ZZ_MARK(0x80059A70);
ZZ_MARK(0x80059A74);
ZZ_MARK(0x80059A78);
ZZ_MARK(0x80059A7C);
ZZ_MARK(0x80059A80);
ZZ_MARK(0x80059A84);
ZZ_MARK(0x80059A88);
ZZ_MARK(0x80059A8C);
ZZ_MARK(0x80059A90);
ZZ_MARK(0x80059A94);
ZZ_MARK(0x80059A98);
ZZ_MARK(0x80059A9C);
ZZ_MARK(0x80059AA0);
ZZ_MARK(0x80059AA4);
ZZ_MARK(0x80059AA8);
ZZ_MARK(0x80059AAC);
ZZ_MARK(0x80059AB0);
ZZ_MARK(0x80059AB4);
ZZ_MARK(0x80059AB8);
ZZ_MARK(0x80059ABC);
ZZ_MARK(0x80059AC0);
ZZ_MARK(0x80059AC4);
ZZ_MARK(0x80059AC8);
ZZ_MARK(0x80059ACC);
ZZ_MARK(0x80059AD0);
ZZ_MARK(0x80059AD4);
ZZ_MARK(0x80059AD8);
ZZ_MARK(0x80059ADC);
ZZ_MARK(0x80059AE0);
ZZ_MARK(0x80059AE4);
ZZ_MARK(0x80059AE8);
ZZ_MARK(0x80059AEC);
ZZ_MARK(0x80059AF0);
ZZ_MARK(0x80059AF4);
ZZ_MARK(0x80059AF8);
ZZ_MARK(0x80059AFC);
ZZ_MARK(0x80059B00);
ZZ_MARK(0x80059B04);
ZZ_MARK(0x80059B08);
ZZ_MARK(0x80059B0C);
ZZ_MARK(0x80059B10);
ZZ_MARK(0x80059B14);
ZZ_MARK(0x80059B18);
ZZ_MARK(0x80059B1C);
ZZ_MARK(0x80059B20);
ZZ_MARK(0x80059B24);
ZZ_MARK(0x80059B28);
ZZ_MARK(0x80059B2C);
ZZ_MARK(0x80059B30);
ZZ_MARK(0x80059B34);
ZZ_MARK(0x80059B38);
ZZ_MARK(0x80059B3C);
ZZ_MARK(0x80059B40);
ZZ_MARK(0x80059B44);
ZZ_MARK(0x80059B48);
ZZ_MARK(0x80059B4C);
ZZ_MARK(0x80059B50);
ZZ_MARK_TARGET(0x80059B54,ZZ_598A0_2B4);
ZZ_MARK(0x80059B58);
ZZ_MARK(0x80059B5C);
ZZ_MARK(0x80059B60);
ZZ_MARK(0x80059B64);
ZZ_MARK(0x80059B68);
ZZ_MARK(0x80059B6C);
ZZ_MARK(0x80059B70);
ZZ_MARK(0x80059B74);
ZZ_MARK(0x80059B78);
ZZ_MARK(0x80059B7C);
ZZ_MARK(0x80059B80);
ZZ_MARK(0x80059B84);
ZZ_MARK_TARGET(0x80059B88,ZZ_598A0_2E8);
ZZ_MARK(0x80059B8C);
ZZ_MARK(0x80059B90);
ZZ_MARK(0x80059B94);
ZZ_MARK(0x80059B98);
ZZ_MARK(0x80059B9C);
ZZ_MARK(0x80059BA0);
ZZ_MARK(0x80059BA4);
ZZ_MARK(0x80059BA8);
ZZ_MARK(0x80059BAC);
ZZ_MARK(0x80059BB0);
ZZ_MARK(0x80059BB4);
ZZ_MARK(0x80059BB8);
ZZ_MARK(0x80059BBC);
ZZ_MARK(0x80059BC0);
ZZ_MARK(0x80059BC4);
ZZ_MARK(0x80059BC8);
ZZ_MARK(0x80059BCC);
ZZ_MARK(0x80059BD0);
ZZ_MARK(0x80059BD4);
ZZ_MARK(0x80059BD8);
ZZ_MARK(0x80059BDC);
ZZ_MARK(0x80059BE0);
ZZ_MARK(0x80059BE4);
ZZ_MARK(0x80059BE8);
ZZ_MARK(0x80059BEC);
ZZ_MARK(0x80059BF0);
ZZ_MARK(0x80059BF4);
ZZ_MARK_TARGET(0x80059BF8,ZZ_598A0_358);
ZZ_MARK(0x80059BFC);
ZZ_MARK(0x80059C00);
ZZ_MARK(0x80059C04);
ZZ_MARK(0x80059C08);
ZZ_MARK(0x80059C0C);
ZZ_MARK(0x80059C10);
ZZ_MARK(0x80059C14);
ZZ_MARK(0x80059C18);
ZZ_MARK(0x80059C1C);
ZZ_MARK(0x80059C20);
ZZ_MARK(0x80059C24);
ZZ_MARK(0x80059C28);
ZZ_MARK_TARGET(0x80059C2C,ZZ_598A0_38C);
ZZ_MARK(0x80059C30);
ZZ_MARK(0x80059C34);
ZZ_MARK(0x80059C38);
ZZ_MARK(0x80059C3C);
ZZ_MARK(0x80059C40);
ZZ_MARK(0x80059C44);
ZZ_MARK(0x80059C48);
ZZ_MARK(0x80059C4C);
ZZ_MARK(0x80059C50);
ZZ_MARK(0x80059C54);
ZZ_MARK(0x80059C58);
ZZ_MARK(0x80059C5C);
ZZ_MARK(0x80059C60);
ZZ_MARK(0x80059C64);
ZZ_MARK(0x80059C68);
ZZ_MARK(0x80059C6C);
ZZ_MARK(0x80059C70);
ZZ_MARK(0x80059C74);
ZZ_MARK(0x80059C78);
ZZ_MARK(0x80059C7C);
ZZ_MARK(0x80059C80);
ZZ_MARK(0x80059C84);
ZZ_MARK_TARGET(0x80059C88,ZZ_598A0_3E8);
ZZ_MARK(0x80059C8C);
ZZ_MARK(0x80059C90);
ZZ_MARK(0x80059C94);
ZZ_MARK(0x80059C98);
ZZ_MARK(0x80059C9C);
ZZ_MARK(0x80059CA0);
ZZ_MARK(0x80059CA4);
ZZ_MARK(0x80059CA8);
ZZ_MARK(0x80059CAC);
ZZ_MARK(0x80059CB0);
ZZ_MARK(0x80059CB4);
ZZ_MARK(0x80059CB8);
ZZ_MARK_TARGET(0x80059CBC,ZZ_598A0_41C);
ZZ_MARK(0x80059CC0);
ZZ_MARK(0x80059CC4);
ZZ_MARK(0x80059CC8);
ZZ_MARK(0x80059CCC);
ZZ_MARK(0x80059CD0);
ZZ_MARK(0x80059CD4);
ZZ_MARK(0x80059CD8);
ZZ_MARK(0x80059CDC);
ZZ_MARK(0x80059CE0);
ZZ_MARK(0x80059CE4);
ZZ_MARK_TARGET(0x80059CE8,ZZ_598A0_448);
ZZ_MARK_TARGET(0x80059CEC,ZZ_598A0_44C);
ZZ_MARK(0x80059CF0);
ZZ_MARK(0x80059CF4);
ZZ_MARK(0x80059CF8);
ZZ_MARK(0x80059CFC);
ZZ_MARK(0x80059D00);
ZZ_MARK(0x80059D04);
ZZ_MARK(0x80059D08);
ZZ_MARK(0x80059D0C);
ZZ_MARK(0x80059D10);
ZZ_MARK(0x80059D14);
ZZ_MARK(0x80059D18);
ZZ_MARK(0x80059D1C);
ZZ_MARK(0x80059D20);
ZZ_MARK(0x80059D24);
ZZ_MARK(0x80059D28);
ZZ_MARK(0x80059D2C);
ZZ_MARK(0x80059D30);
ZZ_MARK(0x80059D34);
ZZ_MARK(0x80059D38);
ZZ_MARK(0x80059D3C);
ZZ_MARK(0x80059D40);
ZZ_MARK(0x80059D44);
ZZ_MARK(0x80059D48);
ZZ_MARK(0x80059D4C);
ZZ_MARK(0x80059D50);
ZZ_MARK(0x80059D54);
ZZ_MARK(0x80059D58);
ZZ_MARK(0x80059D5C);
ZZ_MARK(0x80059D60);
ZZ_MARK(0x80059D64);
ZZ_MARK(0x80059D68);
ZZ_MARK(0x80059D6C);
ZZ_MARK(0x80059D70);
ZZ_MARK(0x80059D74);
ZZ_MARK(0x80059D78);
ZZ_MARK(0x80059D7C);
ZZ_MARK(0x80059D80);
ZZ_MARK(0x80059D84);
ZZ_MARK(0x80059D88);
ZZ_MARK_TARGET(0x80059D8C,ZZ_598A0_4EC);
ZZ_MARK(0x80059D90);
ZZ_MARK(0x80059D94);
ZZ_MARK(0x80059D98);
ZZ_MARK(0x80059D9C);
ZZ_MARK(0x80059DA0);
ZZ_MARK(0x80059DA4);
ZZ_MARK(0x80059DA8);
ZZ_MARK_TARGET(0x80059DAC,ZZ_598A0_50C);
ZZ_MARK(0x80059DB0);
ZZ_MARK(0x80059DB4);
ZZ_MARK(0x80059DB8);
ZZ_MARK(0x80059DBC);
ZZ_MARK(0x80059DC0);
ZZ_MARK(0x80059DC4);
ZZ_MARK(0x80059DC8);
ZZ_MARK(0x80059DCC);
ZZ_MARK(0x80059DD0);
ZZ_MARK(0x80059DD4);
ZZ_MARK(0x80059DD8);