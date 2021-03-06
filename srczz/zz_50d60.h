#ifdef ZZ_INCLUDE_CODE
ZZ_50D60:
	SP -= 1080;
	EMU_Write32(SP + 1076,RA); //+ 0x434
	EMU_Write32(SP + 1072,S6); //+ 0x430
	EMU_Write32(SP + 1068,S5); //+ 0x42C
	EMU_Write32(SP + 1064,S4); //+ 0x428
	EMU_Write32(SP + 1060,S3); //+ 0x424
	EMU_Write32(SP + 1056,S2); //+ 0x420
	EMU_Write32(SP + 1052,S1); //+ 0x41C
	EMU_Write32(SP + 1048,S0); //+ 0x418
	S3 = A0;
	S0 = A1;
	S2 = 0x10;
	S6 = A3;
	RA = 0x80050D9C; //ZZ_50D60_3C
	S5 = A2;
	ZZ_CLOCKCYCLES(15,0x8004DDD4);
	goto ZZ_4DDD4;
ZZ_50D60_3C:
	V1 = 0x1;
	if (V0 != V1)
	{
		S1 = S0;
		ZZ_CLOCKCYCLES(3,0x80050DB0);
		goto ZZ_50D60_50;
	}
	S1 = S0;
	V0 = -1;
	ZZ_CLOCKCYCLES(5,0x80051134);
	goto ZZ_50D60_3D4;
ZZ_50D60_50:
	RA = 0x80050DB8; //ZZ_50D60_58
	A0 = 0x1;
	ZZ_CLOCKCYCLES(2,0x8004DDA8);
	goto ZZ_4DDA8;
ZZ_50D60_58:
	V0 = S0 << 16;
	V1 = (int32_t)V0 >> 16;
	V0 = (int32_t)V1 < 16;
	if (!V0)
	{
		V0 = -1;
		ZZ_CLOCKCYCLES(5,0x80050E74);
		goto ZZ_50D60_114;
	}
	V0 = -1;
	if (V1 != V0)
	{
		A1 = R0;
		ZZ_CLOCKCYCLES(7,0x80050E20);
		goto ZZ_50D60_C0;
	}
	A1 = R0;
	ZZ_CLOCKCYCLES(7,0x80050DD4);
ZZ_50D60_74:
	AT = 0x80060000;
	AT += A1;
	V0 = EMU_ReadU8(AT - 6792); //+ 0xFFFFE578
	if (!V0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(6,0x80050E04);
		goto ZZ_50D60_A4;
	}
	V0 = 0x1;
	A1 += 1;
	V0 = (int32_t)A1 < 16;
	if (V0)
	{
		V0 = S2 << 16;
		ZZ_CLOCKCYCLES(10,0x80050DD4);
		goto ZZ_50D60_74;
	}
	V0 = S2 << 16;
	ZZ_CLOCKCYCLES(12,0x80050E64);
	goto ZZ_50D60_104;
ZZ_50D60_A4:
	AT = 0x80060000;
	AT += A1;
	EMU_Write8(AT - 6792,V0); //+ 0xFFFFE578
	V0 = 0x80060000;
	V0 = EMU_ReadU16(V0 + 3304); //+ 0xCE8
	S2 = A1;
	ZZ_CLOCKCYCLES(7,0x80050E54);
	goto ZZ_50D60_F4;
ZZ_50D60_C0:
	AT = 0x80060000;
	AT += V1;
	V0 = EMU_ReadU8(AT - 6792); //+ 0xFFFFE578
	if (V0)
	{
		V0 = S2 << 16;
		ZZ_CLOCKCYCLES(6,0x80050E64);
		goto ZZ_50D60_104;
	}
	V0 = S2 << 16;
	V0 = 0x1;
	AT = 0x80060000;
	AT += V1;
	EMU_Write8(AT - 6792,V0); //+ 0xFFFFE578
	V0 = 0x80060000;
	V0 = EMU_ReadU16(V0 + 3304); //+ 0xCE8
	S2 = S1;
	ZZ_CLOCKCYCLES(13,0x80050E54);
ZZ_50D60_F4:
	V0 += 1;
	AT = 0x80060000;
	EMU_Write16(AT + 3304,V0); //+ 0xCE8
	V0 = S2 << 16;
	ZZ_CLOCKCYCLES(4,0x80050E64);
ZZ_50D60_104:
	A0 = (int32_t)V0 >> 16;
	V0 = (int32_t)A0 < 16;
	if (V0)
	{
		A2 = S3;
		ZZ_CLOCKCYCLES(4,0x80050E84);
		goto ZZ_50D60_124;
	}
	A2 = S3;
	ZZ_CLOCKCYCLES(4,0x80050E74);
ZZ_50D60_114:
	RA = 0x80050E7C; //ZZ_50D60_11C
	A0 = R0;
	ZZ_CLOCKCYCLES(2,0x8004DDA8);
	goto ZZ_4DDA8;
ZZ_50D60_11C:
	V0 = -1;
	ZZ_CLOCKCYCLES(2,0x80051134);
	goto ZZ_50D60_3D4;
ZZ_50D60_124:
	V0 = A0 << 2;
	AT = 0x80050000;
	AT += V0;
	EMU_Write32(AT + 32432,A2); //+ 0x7EB0
	A3 = S3;
	A1 = EMU_ReadU32(A3);
	V1 = 0x560000;
	V1 |= 0x4142;
	V0 = A1 >> 8;
	if (V0 == V1)
	{
		A2 += 32;
		ZZ_CLOCKCYCLES(11,0x80050EC4);
		goto ZZ_50D60_164;
	}
	A2 += 32;
	AT = 0x80060000;
	AT += A0;
	EMU_Write8(AT - 6792,R0); //+ 0xFFFFE578
	ZZ_CLOCKCYCLES(16,0x80051054);
	goto ZZ_50D60_2F4;
ZZ_50D60_164:
	V1 = A1 & 0xFF;
	V0 = 0x70;
	if (V1 != V0)
	{
		V0 = 0x40;
		ZZ_CLOCKCYCLES(4,0x80050EEC);
		goto ZZ_50D60_18C;
	}
	V0 = 0x40;
	V0 = EMU_ReadU32(A3 + 4); //+ 0x4
	V0 = (int32_t)V0 < 5;
	if (V0)
	{
		V0 = 0x40;
		ZZ_CLOCKCYCLES(9,0x80050EEC);
		goto ZZ_50D60_18C;
	}
	V0 = 0x40;
	V0 = 0x80;
	ZZ_CLOCKCYCLES(10,0x80050EEC);
ZZ_50D60_18C:
	AT = 0x80060000;
	EMU_Write16(AT - 12348,V0); //+ 0xFFFFCFC4
	V0 = EMU_ReadU16(A3 + 18); //+ 0x12
	V1 = 0x80060000;
	V1 = EMU_ReadS16(V1 - 12348); //+ 0xFFFFCFC4
	V0 = (int32_t)V1 < (int32_t)V0;
	if (V0)
	{
		V0 = S2 << 16;
		ZZ_CLOCKCYCLES(9,0x80051044);
		goto ZZ_50D60_2E4;
	}
	V0 = S2 << 16;
	V0 = (int32_t)V0 >> 14;
	AT = 0x80050000;
	AT += V0;
	EMU_Write32(AT + 32368,A2); //+ 0x7E70
	S3 = A2;
	V0 = V1 << 4;
	A2 = S3 + V0;
	A1 = R0;
	if ((int32_t)V1 <= 0)
	{
		S0 = R0;
		ZZ_CLOCKCYCLES(19,0x80050F64);
		goto ZZ_50D60_204;
	}
	S0 = R0;
	A0 = V1;
	V1 = S3;
	ZZ_CLOCKCYCLES(21,0x80050F40);
ZZ_50D60_1E0:
	V0 = EMU_ReadU8(V1);
	if (!V0)
	{
		EMU_Write32(V1 + 8,S0); //+ 0x8
		ZZ_CLOCKCYCLES(4,0x80050F54);
		goto ZZ_50D60_1F4;
	}
	EMU_Write32(V1 + 8,S0); //+ 0x8
	S0 += 1;
	ZZ_CLOCKCYCLES(5,0x80050F54);
ZZ_50D60_1F4:
	A1 += 1;
	V0 = (int32_t)A1 < (int32_t)A0;
	if (V0)
	{
		V1 += 16;
		ZZ_CLOCKCYCLES(4,0x80050F40);
		goto ZZ_50D60_1E0;
	}
	V1 += 16;
	ZZ_CLOCKCYCLES(4,0x80050F64);
ZZ_50D60_204:
	V0 = S2 << 16;
	V0 = (int32_t)V0 >> 14;
	AT = 0x80050000;
	AT += V0;
	EMU_Write32(AT + 32504,A2); //+ 0x7EF8
	S0 = R0;
	V1 = SP + 16;
	V0 = EMU_ReadU16(A3 + 18); //+ 0x12
	T0 = SP + 1040;
	S4 = EMU_ReadU8(A3 + 22); //+ 0x16
	V0 <<= 9;
	A2 += V0;
	V0 = S4 << 2;
	A0 = V0 + V1;
	ZZ_CLOCKCYCLES(14,0x80050F9C);
ZZ_50D60_23C:
	V0 = (int32_t)A0 < (int32_t)V1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(3,0x80050FD0);
		goto ZZ_50D60_270;
	}
	V0 = EMU_ReadU32(A3 + 4); //+ 0x4
	A1 = EMU_ReadU16(A2);
	V0 = (int32_t)V0 < 5;
	if (V0)
	{
		V0 = A1 << 2;
		ZZ_CLOCKCYCLES(8,0x80050FC0);
		goto ZZ_50D60_260;
	}
	V0 = A1 << 2;
	V0 = A1 << 3;
	ZZ_CLOCKCYCLES(9,0x80050FC0);
ZZ_50D60_260:
	EMU_Write32(V1,V0);
	V0 = EMU_ReadU32(V1);
	S0 += V0;
	ZZ_CLOCKCYCLES(4,0x80050FD0);
ZZ_50D60_270:
	V1 += 4;
	V0 = (int32_t)V1 < (int32_t)T0;
	if (V0)
	{
		A2 += 2;
		ZZ_CLOCKCYCLES(4,0x80050F9C);
		goto ZZ_50D60_23C;
	}
	A2 += 2;
	V0 = S2 << 16;
	S1 = (int32_t)V0 >> 16;
	V0 = S1 << 2;
	AT = 0x80060000;
	AT += V0;
	EMU_Write32(AT + 3376,A2); //+ 0xD30
	V0 = S5 << 16;
	if (V0)
	{
		A3 = S6;
		ZZ_CLOCKCYCLES(13,0x80051030);
		goto ZZ_50D60_2D0;
	}
	A3 = S6;
	RA = 0x8005100C; //ZZ_50D60_2AC
	A0 = S0;
	ZZ_CLOCKCYCLES(15,0x8005115C);
	goto ZZ_5115C;
ZZ_50D60_2AC:
	A3 = V0;
	V0 = -1;
	if (A3 != V0)
	{
		V1 = A3 + S0;
		ZZ_CLOCKCYCLES(4,0x80051034);
		goto ZZ_50D60_2D4;
	}
	V1 = A3 + S0;
	AT = 0x80060000;
	AT += S1;
	EMU_Write8(AT - 6792,R0); //+ 0xFFFFE578
	ZZ_CLOCKCYCLES(9,0x80051054);
	goto ZZ_50D60_2F4;
ZZ_50D60_2D0:
	V1 = A3 + S0;
	ZZ_CLOCKCYCLES(1,0x80051034);
ZZ_50D60_2D4:
	V0 = 0x80000;
	V0 = V0 < V1;
	if (!V0)
	{
		V0 = S2 << 16;
		ZZ_CLOCKCYCLES(4,0x8005107C);
		goto ZZ_50D60_31C;
	}
	V0 = S2 << 16;
	ZZ_CLOCKCYCLES(4,0x80051044);
ZZ_50D60_2E4:
	V0 = (int32_t)V0 >> 16;
	AT = 0x80060000;
	AT += V0;
	EMU_Write8(AT - 6792,R0); //+ 0xFFFFE578
	ZZ_CLOCKCYCLES(4,0x80051054);
ZZ_50D60_2F4:
	RA = 0x8005105C; //ZZ_50D60_2FC
	A0 = R0;
	ZZ_CLOCKCYCLES(2,0x8004DDA8);
	goto ZZ_4DDA8;
ZZ_50D60_2FC:
	V1 = 0x80060000;
	V1 = EMU_ReadU16(V1 + 3304); //+ 0xCE8
	V1 -= 1;
	AT = 0x80060000;
	EMU_Write16(AT + 3304,V1); //+ 0xCE8
	V0 = -1;
	ZZ_CLOCKCYCLES(8,0x80051134);
	goto ZZ_50D60_3D4;
ZZ_50D60_31C:
	V0 = (int32_t)V0 >> 14;
	AT = 0x80060000;
	AT += V0;
	EMU_Write32(AT + 3312,A3); //+ 0xCF0
	S0 = R0;
	V1 = S4 & 0xFF;
	V0 = (int32_t)V1 < 0;
	if (V0)
	{
		A1 = R0;
		ZZ_CLOCKCYCLES(9,0x8005110C);
		goto ZZ_50D60_3AC;
	}
	A1 = R0;
	A2 = V1;
	A0 = SP + 16;
	ZZ_CLOCKCYCLES(11,0x800510A8);
ZZ_50D60_348:
	V0 = EMU_ReadU32(A0);
	S0 += V0;
	V0 = A1 & 0x1;
	if (V0)
	{
		V1 = A1 >> 31;
		ZZ_CLOCKCYCLES(6,0x800510E0);
		goto ZZ_50D60_380;
	}
	V1 = A1 >> 31;
	V1 += A1;
	V1 = (int32_t)V1 >> 1;
	V1 <<= 4;
	V1 += S3;
	V0 = A3 + S0;
	V0 >>= 3;
	EMU_Write16(V1 + 12,V0); //+ 0xC
	ZZ_CLOCKCYCLES(14,0x800510FC);
	goto ZZ_50D60_39C;
ZZ_50D60_380:
	V1 += A1;
	V1 = (int32_t)V1 >> 1;
	V1 <<= 4;
	V1 += S3;
	V0 = A3 + S0;
	V0 >>= 3;
	EMU_Write16(V1 + 14,V0); //+ 0xE
	ZZ_CLOCKCYCLES(7,0x800510FC);
ZZ_50D60_39C:
	A1 += 1;
	V0 = (int32_t)A2 < (int32_t)A1;
	if (!V0)
	{
		A0 += 4;
		ZZ_CLOCKCYCLES(4,0x800510A8);
		goto ZZ_50D60_348;
	}
	A0 += 4;
	ZZ_CLOCKCYCLES(4,0x8005110C);
ZZ_50D60_3AC:
	V0 = S2 << 16;
	V0 = (int32_t)V0 >> 16;
	V1 = V0 << 2;
	AT = 0x80060000;
	AT += V1;
	EMU_Write32(AT + 3240,S0); //+ 0xCA8
	V1 = 0x2;
	AT = 0x80060000;
	AT += V0;
	EMU_Write8(AT - 6792,V1); //+ 0xFFFFE578
	ZZ_CLOCKCYCLES(10,0x80051134);
ZZ_50D60_3D4:
	RA = EMU_ReadU32(SP + 1076); //+ 0x434
	S6 = EMU_ReadU32(SP + 1072); //+ 0x430
	S5 = EMU_ReadU32(SP + 1068); //+ 0x42C
	S4 = EMU_ReadU32(SP + 1064); //+ 0x428
	S3 = EMU_ReadU32(SP + 1060); //+ 0x424
	S2 = EMU_ReadU32(SP + 1056); //+ 0x420
	S1 = EMU_ReadU32(SP + 1052); //+ 0x41C
	S0 = EMU_ReadU32(SP + 1048); //+ 0x418
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 1080;
	ZZ_CLOCKCYCLES_JR(10);
	ZZ_JUMPREGISTER(0x80050D4C,ZZ_50D30_1C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80050D60,0x80050D9C,ZZ_50D60);
ZZ_MARK_TARGET(0x80050D9C,0x80050DB0,ZZ_50D60_3C);
ZZ_MARK_TARGET(0x80050DB0,0x80050DB8,ZZ_50D60_50);
ZZ_MARK_TARGET(0x80050DB8,0x80050DD4,ZZ_50D60_58);
ZZ_MARK_TARGET(0x80050DD4,0x80050E04,ZZ_50D60_74);
ZZ_MARK_TARGET(0x80050E04,0x80050E20,ZZ_50D60_A4);
ZZ_MARK_TARGET(0x80050E20,0x80050E54,ZZ_50D60_C0);
ZZ_MARK_TARGET(0x80050E54,0x80050E64,ZZ_50D60_F4);
ZZ_MARK_TARGET(0x80050E64,0x80050E74,ZZ_50D60_104);
ZZ_MARK_TARGET(0x80050E74,0x80050E7C,ZZ_50D60_114);
ZZ_MARK_TARGET(0x80050E7C,0x80050E84,ZZ_50D60_11C);
ZZ_MARK_TARGET(0x80050E84,0x80050EC4,ZZ_50D60_124);
ZZ_MARK_TARGET(0x80050EC4,0x80050EEC,ZZ_50D60_164);
ZZ_MARK_TARGET(0x80050EEC,0x80050F40,ZZ_50D60_18C);
ZZ_MARK_TARGET(0x80050F40,0x80050F54,ZZ_50D60_1E0);
ZZ_MARK_TARGET(0x80050F54,0x80050F64,ZZ_50D60_1F4);
ZZ_MARK_TARGET(0x80050F64,0x80050F9C,ZZ_50D60_204);
ZZ_MARK_TARGET(0x80050F9C,0x80050FC0,ZZ_50D60_23C);
ZZ_MARK_TARGET(0x80050FC0,0x80050FD0,ZZ_50D60_260);
ZZ_MARK_TARGET(0x80050FD0,0x8005100C,ZZ_50D60_270);
ZZ_MARK_TARGET(0x8005100C,0x80051030,ZZ_50D60_2AC);
ZZ_MARK_TARGET(0x80051030,0x80051034,ZZ_50D60_2D0);
ZZ_MARK_TARGET(0x80051034,0x80051044,ZZ_50D60_2D4);
ZZ_MARK_TARGET(0x80051044,0x80051054,ZZ_50D60_2E4);
ZZ_MARK_TARGET(0x80051054,0x8005105C,ZZ_50D60_2F4);
ZZ_MARK_TARGET(0x8005105C,0x8005107C,ZZ_50D60_2FC);
ZZ_MARK_TARGET(0x8005107C,0x800510A8,ZZ_50D60_31C);
ZZ_MARK_TARGET(0x800510A8,0x800510E0,ZZ_50D60_348);
ZZ_MARK_TARGET(0x800510E0,0x800510FC,ZZ_50D60_380);
ZZ_MARK_TARGET(0x800510FC,0x8005110C,ZZ_50D60_39C);
ZZ_MARK_TARGET(0x8005110C,0x80051134,ZZ_50D60_3AC);
ZZ_MARK_TARGET(0x80051134,0x8005115C,ZZ_50D60_3D4);
