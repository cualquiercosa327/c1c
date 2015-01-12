#ifdef ZZ_INCLUDE_CODE
ZZ_2B890:
	SP -= 120;
	EMU_Write32(SP + 88,S2); //+ 0x58
	S2 = A0;
	EMU_Write32(SP + 104,S6); //+ 0x68
	S6 = A1;
	T0 = A2;
	EMU_Write32(SP + 108,S7); //+ 0x6C
	S7 = 0xC4650000;
	EMU_Write32(SP + 116,RA); //+ 0x74
	EMU_Write32(SP + 112,FP); //+ 0x70
	EMU_Write32(SP + 100,S5); //+ 0x64
	EMU_Write32(SP + 96,S4); //+ 0x60
	EMU_Write32(SP + 92,S3); //+ 0x5C
	EMU_Write32(SP + 84,S1); //+ 0x54
	EMU_Write32(SP + 80,S0); //+ 0x50
	V0 = EMU_ReadU32(S2 + 256); //+ 0x100
	S7 |= 0x3601;
	FP = R0;
	V0 &= 0x40;
	if (!V0)
	{
		S5 = T0 + 4128;
		ZZ_CLOCKCYCLES(21,0x8002B998);
		goto ZZ_2B890_108;
	}
	S5 = T0 + 4128;
	V0 = EMU_ReadU32(S6);
	V0 -= 19200;
	EMU_Write32(T0 + 4128,V0); //+ 0x1020
	V0 = EMU_ReadU32(S2 + 256); //+ 0x100
	V1 = 0x40000000;
	A0 = EMU_ReadU32(S6 + 4); //+ 0x4
	V0 &= V1;
	if (V0)
	{
		V0 = 0xFFFF0000;
		ZZ_CLOCKCYCLES(31,0x8002B934);
		goto ZZ_2B890_A4;
	}
	V0 = 0xFFFF0000;
	V0 = EMU_ReadU32(S2 + 8); //+ 0x8
	V0 = EMU_ReadU32(V0 + 64); //+ 0x40
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(37,0x8002B928);
		goto ZZ_2B890_98;
	}
	V0 += 3;
	ZZ_CLOCKCYCLES(38,0x8002B928);
ZZ_2B890_98:
	V0 = (int32_t)V0 >> 2;
	V0 = A0 - V0;
	ZZ_CLOCKCYCLES(3,0x8002B93C);
	goto ZZ_2B890_AC;
ZZ_2B890_A4:
	V0 |= 0x59C0;
	V0 += A0;
	ZZ_CLOCKCYCLES(2,0x8002B93C);
ZZ_2B890_AC:
	EMU_Write32(S5 + 4,V0); //+ 0x4
	V0 = EMU_ReadU32(S6 + 8); //+ 0x8
	V0 -= 19200;
	EMU_Write32(S5 + 8,V0); //+ 0x8
	V0 = EMU_ReadU32(S6);
	V0 += 19200;
	EMU_Write32(S5 + 12,V0); //+ 0xC
	V0 = EMU_ReadU32(S2 + 256); //+ 0x100
	V1 = 0x40000000;
	A0 = EMU_ReadU32(S6 + 4); //+ 0x4
	V0 &= V1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(15,0x8002B98C);
		goto ZZ_2B890_FC;
	}
	V0 = EMU_ReadU32(S2 + 8); //+ 0x8
	V0 = EMU_ReadU32(V0 + 64); //+ 0x40
	V0 <<= 1;
	ZZ_CLOCKCYCLES(20,0x8002BBEC);
	goto ZZ_2B890_35C;
ZZ_2B890_FC:
	V0 = 0x50000;
	V0 |= 0x3200;
	ZZ_CLOCKCYCLES(3,0x8002BBEC);
	goto ZZ_2B890_35C;
ZZ_2B890_108:
	V0 = EMU_ReadU32(S6);
	V0 -= 19200;
	if (!A3)
	{
		EMU_Write32(T0 + 4128,V0); //+ 0x1020
		ZZ_CLOCKCYCLES(5,0x8002BA1C);
		goto ZZ_2B890_18C;
	}
	EMU_Write32(T0 + 4128,V0); //+ 0x1020
	V0 = EMU_ReadU32(S2 + 256); //+ 0x100
	A0 = EMU_ReadU32(S6 + 4); //+ 0x4
	V1 = 0x40000000;
	V0 &= V1;
	if (V0)
	{
		V0 = 0x20000;
		ZZ_CLOCKCYCLES(11,0x8002B9D8);
		goto ZZ_2B890_148;
	}
	V0 = 0x20000;
	V0 = EMU_ReadU32(S2 + 8); //+ 0x8
	V0 = EMU_ReadU32(V0 + 64); //+ 0x40
	A0 += V0;
	ZZ_CLOCKCYCLES(16,0x8002B9E0);
	goto ZZ_2B890_150;
ZZ_2B890_148:
	V0 |= 0x9900;
	A0 += V0;
	ZZ_CLOCKCYCLES(2,0x8002B9E0);
ZZ_2B890_150:
	V0 = EMU_ReadU32(S2 + 256); //+ 0x100
	V1 = 0x40000000;
	V0 &= V1;
	if (V0)
	{
		V0 = A0 - 21280;
		ZZ_CLOCKCYCLES(5,0x8002BB98);
		goto ZZ_2B890_308;
	}
	V0 = A0 - 21280;
	V0 = EMU_ReadU32(S2 + 8); //+ 0x8
	V0 = EMU_ReadU32(V0 + 64); //+ 0x40
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(11,0x8002BA10);
		goto ZZ_2B890_180;
	}
	V0 += 7;
	ZZ_CLOCKCYCLES(12,0x8002BA10);
ZZ_2B890_180:
	V0 = (int32_t)V0 >> 3;
	V0 = A0 - V0;
	ZZ_CLOCKCYCLES(3,0x8002BB98);
	goto ZZ_2B890_308;
ZZ_2B890_18C:
	V0 = EMU_ReadU32(S2 + 256); //+ 0x100
	A0 = EMU_ReadU32(S6 + 4); //+ 0x4
	V1 = 0x40000000;
	V0 &= V1;
	if (V0)
	{
		V0 = 0x20000;
		ZZ_CLOCKCYCLES(6,0x8002BA48);
		goto ZZ_2B890_1B8;
	}
	V0 = 0x20000;
	V0 = EMU_ReadU32(S2 + 8); //+ 0x8
	V0 = EMU_ReadU32(V0 + 64); //+ 0x40
	A2 = A0 + V0;
	ZZ_CLOCKCYCLES(11,0x8002BA50);
	goto ZZ_2B890_1C0;
ZZ_2B890_1B8:
	V0 |= 0x9900;
	A2 = A0 + V0;
	ZZ_CLOCKCYCLES(2,0x8002BA50);
ZZ_2B890_1C0:
	V0 = EMU_ReadU32(S2 + 256); //+ 0x100
	V1 = 0x40000000;
	V0 &= V1;
	if (V0)
	{
		A1 = 0xA640;
		ZZ_CLOCKCYCLES(5,0x8002BA84);
		goto ZZ_2B890_1F4;
	}
	A1 = 0xA640;
	V0 = EMU_ReadU32(S2 + 8); //+ 0x8
	V0 = EMU_ReadU32(V0 + 64); //+ 0x40
	if ((int32_t)V0 >= 0)
	{
		A1 = (int32_t)V0 >> 2;
		ZZ_CLOCKCYCLES(11,0x8002BA84);
		goto ZZ_2B890_1F4;
	}
	A1 = (int32_t)V0 >> 2;
	V0 += 3;
	A1 = (int32_t)V0 >> 2;
	ZZ_CLOCKCYCLES(13,0x8002BA84);
ZZ_2B890_1F4:
	V0 = EMU_ReadU32(S2 + 256); //+ 0x100
	V1 = 0x40000000;
	V0 &= V1;
	if (V0)
	{
		V0 = 0x10000;
		ZZ_CLOCKCYCLES(5,0x8002BACC);
		goto ZZ_2B890_23C;
	}
	V0 = 0x10000;
	V0 = EMU_ReadU32(S2 + 8); //+ 0x8
	V0 = EMU_ReadU32(V0 + 64); //+ 0x40
	A0 = 0x10000;
	A0 |= 0x8FFF;
	V1 = V0 >> 31;
	V0 += V1;
	V0 = (int32_t)V0 >> 1;
	A0 = (int32_t)A0 < (int32_t)V0;
	if (A0)
	{
		V0 = (int32_t)V0 < (int32_t)A1;
		ZZ_CLOCKCYCLES(16,0x8002BAE4);
		goto ZZ_2B890_254;
	}
	V0 = (int32_t)V0 < (int32_t)A1;
	ZZ_CLOCKCYCLES(18,0x8002BAD4);
	goto ZZ_2B890_244;
ZZ_2B890_23C:
	V0 |= 0x4C80;
	V0 = (int32_t)V0 < (int32_t)A1;
	ZZ_CLOCKCYCLES(2,0x8002BAD4);
ZZ_2B890_244:
	if (!V0)
	{
		ZZ_CLOCKCYCLES(2,0x8002BB3C);
		goto ZZ_2B890_2AC;
	}
	ZZ_CLOCKCYCLES(4,0x8002BAF8);
	goto ZZ_2B890_268;
ZZ_2B890_254:
	V0 = 0x10000;
	V0 |= 0x9000;
	V0 = (int32_t)V0 < (int32_t)A1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x8002BB3C);
		goto ZZ_2B890_2AC;
	}
	ZZ_CLOCKCYCLES(5,0x8002BAF8);
ZZ_2B890_268:
	V0 = EMU_ReadU32(S2 + 256); //+ 0x100
	V1 = 0x40000000;
	V0 &= V1;
	if (V0)
	{
		V0 = 0xFFFF0000;
		ZZ_CLOCKCYCLES(5,0x8002BB34);
		goto ZZ_2B890_2A4;
	}
	V0 = 0xFFFF0000;
	V0 = EMU_ReadU32(S2 + 8); //+ 0x8
	V0 = EMU_ReadU32(V0 + 64); //+ 0x40
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(11,0x8002BB28);
		goto ZZ_2B890_298;
	}
	V0 += 3;
	ZZ_CLOCKCYCLES(12,0x8002BB28);
ZZ_2B890_298:
	V0 = (int32_t)V0 >> 2;
	V0 = A2 - V0;
	ZZ_CLOCKCYCLES(3,0x8002BB98);
	goto ZZ_2B890_308;
ZZ_2B890_2A4:
	V0 |= 0x59C0;
	ZZ_CLOCKCYCLES(2,0x8002BB94);
	goto ZZ_2B890_304;
ZZ_2B890_2AC:
	V0 = EMU_ReadU32(S2 + 256); //+ 0x100
	V1 = 0x40000000;
	V0 &= V1;
	if (V0)
	{
		V0 = 0xFFFE0000;
		ZZ_CLOCKCYCLES(5,0x8002BB84);
		goto ZZ_2B890_2F4;
	}
	V0 = 0xFFFE0000;
	V0 = EMU_ReadU32(S2 + 8); //+ 0x8
	V0 = EMU_ReadU32(V0 + 64); //+ 0x40
	A0 = 0x10000;
	A0 |= 0x8FFF;
	V1 = V0 >> 31;
	V0 += V1;
	V0 = (int32_t)V0 >> 1;
	A0 = (int32_t)A0 < (int32_t)V0;
	if (A0)
	{
		V0 = A2 - V0;
		ZZ_CLOCKCYCLES(16,0x8002BB8C);
		goto ZZ_2B890_2FC;
	}
	V0 = A2 - V0;
	EMU_Write32(S5 + 4,V0); //+ 0x4
	ZZ_CLOCKCYCLES(18,0x8002BB9C);
	goto ZZ_2B890_30C;
ZZ_2B890_2F4:
	V0 |= 0xB380;
	ZZ_CLOCKCYCLES(2,0x8002BB94);
	goto ZZ_2B890_304;
ZZ_2B890_2FC:
	V0 = 0xFFFE0000;
	V0 |= 0x7000;
	ZZ_CLOCKCYCLES(2,0x8002BB94);
ZZ_2B890_304:
	V0 += A2;
	ZZ_CLOCKCYCLES(1,0x8002BB98);
ZZ_2B890_308:
	EMU_Write32(S5 + 4,V0); //+ 0x4
	ZZ_CLOCKCYCLES(1,0x8002BB9C);
ZZ_2B890_30C:
	V0 = EMU_ReadU32(S6 + 8); //+ 0x8
	V0 -= 19200;
	EMU_Write32(S5 + 8,V0); //+ 0x8
	V0 = EMU_ReadU32(S6);
	V0 += 19200;
	EMU_Write32(S5 + 12,V0); //+ 0xC
	V0 = EMU_ReadU32(S2 + 256); //+ 0x100
	V1 = 0x40000000;
	A0 = EMU_ReadU32(S6 + 4); //+ 0x4
	V0 &= V1;
	if (V0)
	{
		V0 = 0x20000;
		ZZ_CLOCKCYCLES(14,0x8002BBE8);
		goto ZZ_2B890_358;
	}
	V0 = 0x20000;
	V0 = EMU_ReadU32(S2 + 8); //+ 0x8
	V0 = EMU_ReadU32(V0 + 64); //+ 0x40
	V0 += A0;
	ZZ_CLOCKCYCLES(19,0x8002BBF0);
	goto ZZ_2B890_360;
ZZ_2B890_358:
	V0 |= 0x9900;
	ZZ_CLOCKCYCLES(1,0x8002BBEC);
ZZ_2B890_35C:
	V0 += A0;
	ZZ_CLOCKCYCLES(1,0x8002BBF0);
ZZ_2B890_360:
	EMU_Write32(S5 + 16,V0); //+ 0x10
	V0 = EMU_ReadU32(S6 + 8); //+ 0x8
	V0 += 19200;
	EMU_Write32(S5 + 20,V0); //+ 0x14
	V1 = 0x80070000;
	V1 -= 12796;
	V0 = EMU_ReadU32(V1);
	if ((int32_t)V0 <= 0)
	{
		S1 = R0;
		ZZ_CLOCKCYCLES(11,0x8002BCA8);
		goto ZZ_2B890_418;
	}
	S1 = R0;
	S4 = 0xC4650000;
	S4 |= 0x3601;
	S3 = V1 + 656;
	ZZ_CLOCKCYCLES(14,0x8002BC28);
ZZ_2B890_398:
	A0 = EMU_ReadU32(S3);
	S0 = EMU_ReadU32(A0 + 4); //+ 0x4
	V0 = EMU_ReadU32(S0 + 172); //+ 0xAC
	V1 = 0x8000000;
	V0 &= V1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(9,0x8002BC90);
		goto ZZ_2B890_400;
	}
	V0 = EMU_ReadU32(S0 + 168); //+ 0xA8
	V0 &= 0x4000;
	if (V0)
	{
		A1 = S5;
		ZZ_CLOCKCYCLES(14,0x8002BC90);
		goto ZZ_2B890_400;
	}
	A1 = S5;
	A2 = R0;
	A3 = 0x1;
	EMU_Write32(SP + 16,S7); //+ 0x10
	EMU_Write32(SP + 20,S4); //+ 0x14
	EMU_Write32(SP + 24,R0); //+ 0x18
	RA = 0x8002BC7C; //ZZ_2B890_3EC
	EMU_Write32(SP + 72,T0); //+ 0x48
	ZZ_CLOCKCYCLES(21,0x8002ABE4);
	goto ZZ_2ABE4;
ZZ_2B890_3EC:
	T0 = EMU_ReadU32(SP + 72); //+ 0x48
	if (V0 == S4)
	{
		ZZ_CLOCKCYCLES(3,0x8002BC90);
		goto ZZ_2B890_400;
	}
	S7 = V0;
	FP = S0;
	ZZ_CLOCKCYCLES(5,0x8002BC90);
ZZ_2B890_400:
	V0 = 0x80070000;
	V0 = EMU_ReadU32(V0 - 12796); //+ 0xFFFFCE04
	S1 += 1;
	V0 = (int32_t)S1 < (int32_t)V0;
	if (V0)
	{
		S3 += 4;
		ZZ_CLOCKCYCLES(6,0x8002BC28);
		goto ZZ_2B890_398;
	}
	S3 += 4;
	ZZ_CLOCKCYCLES(6,0x8002BCA8);
ZZ_2B890_418:
	V0 = EMU_ReadU32(S6);
	V0 -= 9600;
	EMU_Write32(S5,V0);
	V0 = EMU_ReadU32(S6 + 8); //+ 0x8
	V0 -= 9600;
	EMU_Write32(S5 + 8,V0); //+ 0x8
	V0 = EMU_ReadU32(S6);
	V0 += 9600;
	EMU_Write32(S5 + 12,V0); //+ 0xC
	V0 = EMU_ReadU32(S6 + 8); //+ 0x8
	V0 += 9600;
	EMU_Write32(S5 + 20,V0); //+ 0x14
	V0 = EMU_ReadU32(S2 + 256); //+ 0x100
	V1 = 0x40000000;
	A0 = EMU_ReadU32(S6 + 4); //+ 0x4
	V0 &= V1;
	if (V0)
	{
		V0 = 0x30000;
		ZZ_CLOCKCYCLES(22,0x8002BD2C);
		goto ZZ_2B890_49C;
	}
	V0 = 0x30000;
	V0 = EMU_ReadU32(S2 + 8); //+ 0x8
	V1 = EMU_ReadU32(V0 + 64); //+ 0x40
	V0 = V1 << 2;
	V0 += V1;
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(30,0x8002BD24);
		goto ZZ_2B890_494;
	}
	V0 += 3;
	ZZ_CLOCKCYCLES(31,0x8002BD24);
ZZ_2B890_494:
	V0 = (int32_t)V0 >> 2;
	ZZ_CLOCKCYCLES(2,0x8002BD30);
	goto ZZ_2B890_4A0;
ZZ_2B890_49C:
	V0 |= 0x3F40;
	ZZ_CLOCKCYCLES(1,0x8002BD30);
ZZ_2B890_4A0:
	V0 += A0;
	V1 = 0xC4650000;
	V1 |= 0x3601;
	A0 = S2;
	A1 = T0;
	A2 = A1 + 4104;
	A3 = S5;
	EMU_Write32(S5 + 16,V0); //+ 0x10
	V0 = 0x2;
	EMU_Write32(SP + 16,V0); //+ 0x10
	V0 = 0x6;
	EMU_Write32(SP + 20,V0); //+ 0x14
	V0 = 0x1;
	EMU_Write32(SP + 24,V0); //+ 0x18
	EMU_Write32(SP + 28,V1); //+ 0x1C
	RA = 0x8002BD74; //ZZ_2B890_4E4
	EMU_Write32(SP + 32,V0); //+ 0x20
	ZZ_CLOCKCYCLES(17,0x8003D2D8);
	goto ZZ_3D2D8;
ZZ_2B890_4E4:
	V1 = EMU_ReadU32(S2 + 24); //+ 0x18
	V1 = EMU_ReadU32(V1 + 16); //+ 0x10
	V1 = EMU_ReadU32(V1 + 668); //+ 0x29C
	S0 = V0;
	V0 = 0x20000;
	V1 &= V0;
	if (!V1)
	{
		A1 = SP + 40;
		ZZ_CLOCKCYCLES(10,0x8002BE04);
		goto ZZ_2B890_574;
	}
	A1 = SP + 40;
	V0 = EMU_ReadU32(S6);
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 2916); //+ 0xB64
	EMU_Write32(SP + 40,V0); //+ 0x28
	V0 = EMU_ReadU32(S5 + 16); //+ 0x10
	EMU_Write32(SP + 44,V0); //+ 0x2C
	V0 = EMU_ReadU32(S6 + 8); //+ 0x8
	RA = 0x8002BDC4; //ZZ_2B890_534
	EMU_Write32(SP + 48,V0); //+ 0x30
	ZZ_CLOCKCYCLES(20,0x80028060);
	goto ZZ_28060;
ZZ_2B890_534:
	V0 = (int32_t)V0 < -254;
	if (V0)
	{
		V1 = 0xC4650000;
		ZZ_CLOCKCYCLES(3,0x8002BE08);
		goto ZZ_2B890_578;
	}
	V1 = 0xC4650000;
	V0 = EMU_ReadU32(S2 + 24); //+ 0x18
	V1 = EMU_ReadU32(V0 + 20); //+ 0x14
	V0 = EMU_ReadU32(V1 + 4); //+ 0x4
	A0 = EMU_ReadU32(V1 + 16); //+ 0x10
	V1 = EMU_ReadU32(SP + 44); //+ 0x2C
	V0 += A0;
	V0 <<= 8;
	V1 = (int32_t)V0 < (int32_t)V1;
	if (!V1)
	{
		V1 = 0xC4650000;
		ZZ_CLOCKCYCLES(15,0x8002BE08);
		goto ZZ_2B890_578;
	}
	V1 = 0xC4650000;
	S0 = V0;
	ZZ_CLOCKCYCLES(16,0x8002BE04);
ZZ_2B890_574:
	V1 = 0xC4650000;
	ZZ_CLOCKCYCLES(1,0x8002BE08);
ZZ_2B890_578:
	V1 |= 0x3601;
	if (S0 == V1)
	{
		ZZ_CLOCKCYCLES(3,0x8002BE24);
		goto ZZ_2B890_594;
	}
	V0 = EMU_ReadU32(S2 + 168); //+ 0xA8
	V0 |= 0x80;
	EMU_Write32(S2 + 168,V0); //+ 0xA8
	ZZ_CLOCKCYCLES(7,0x8002BE24);
ZZ_2B890_594:
	if (S7 == V1)
	{
		ZZ_CLOCKCYCLES(2,0x8002BEA8);
		goto ZZ_2B890_618;
	}
	if (S0 == V1)
	{
		V0 = (int32_t)S7 < (int32_t)S0;
		ZZ_CLOCKCYCLES(4,0x8002BE3C);
		goto ZZ_2B890_5AC;
	}
	V0 = (int32_t)S7 < (int32_t)S0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(6,0x8002BEA8);
		goto ZZ_2B890_618;
	}
	ZZ_CLOCKCYCLES(6,0x8002BE3C);
ZZ_2B890_5AC:
	V0 = EMU_ReadU32(FP + 168); //+ 0xA8
	V0 |= 0x80;
	EMU_Write32(FP + 168,V0); //+ 0xA8
	V0 = EMU_ReadU32(S2 + 168); //+ 0xA8
	V1 = EMU_ReadU32(S2 + 136); //+ 0x88
	V0 |= 0x80;
	if ((int32_t)V1 >= 0)
	{
		EMU_Write32(S2 + 168,V0); //+ 0xA8
		ZZ_CLOCKCYCLES(9,0x8002BE70);
		goto ZZ_2B890_5E0;
	}
	EMU_Write32(S2 + 168,V0); //+ 0xA8
	V0 = EMU_ReadU32(FP + 136); //+ 0x88
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(13,0x8002BE94);
		goto ZZ_2B890_604;
	}
	ZZ_CLOCKCYCLES(13,0x8002BE70);
ZZ_2B890_5E0:
	A0 = S2;
	A1 = FP;
	A2 = 0x1700;
	A3 = 0x1;
	V0 = 0x6400;
	EMU_Write32(SP + 56,V0); //+ 0x38
	V0 = SP + 56;
	RA = 0x8002BE94; //ZZ_2B890_604
	EMU_Write32(SP + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(9,0x8001CD48);
	goto ZZ_1CD48;
ZZ_2B890_604:
	V0 = EMU_ReadU32(S2 + 256); //+ 0x100
	V1 = 0x200000;
	V0 &= V1;
	if (!V0)
	{
		V0 = S7;
		ZZ_CLOCKCYCLES(5,0x8002BF18);
		goto ZZ_2B890_688;
	}
	V0 = S7;
	ZZ_CLOCKCYCLES(5,0x8002BEA8);
ZZ_2B890_618:
	V1 = EMU_ReadU32(S2 + 256); //+ 0x100
	V0 = V1 & 0x40;
	if (V0)
	{
		V0 = S0;
		ZZ_CLOCKCYCLES(5,0x8002BF18);
		goto ZZ_2B890_688;
	}
	V0 = S0;
	A1 = EMU_ReadU32(S6 + 4); //+ 0x4
	V0 = 0x40000000;
	V0 &= V1;
	if (V0)
	{
		V0 = 0x20000;
		ZZ_CLOCKCYCLES(10,0x8002BEF8);
		goto ZZ_2B890_668;
	}
	V0 = 0x20000;
	V0 = EMU_ReadU32(S2 + 8); //+ 0x8
	V0 = EMU_ReadU32(V0 + 64); //+ 0x40
	V0 += A1;
	V0 = (int32_t)V0 < (int32_t)S0;
	if (V0)
	{
		V0 = 0xC4650000;
		ZZ_CLOCKCYCLES(18,0x8002BF0C);
		goto ZZ_2B890_67C;
	}
	V0 = 0xC4650000;
	V0 = S0;
	ZZ_CLOCKCYCLES(20,0x8002BF18);
	goto ZZ_2B890_688;
ZZ_2B890_668:
	V0 |= 0x9900;
	V0 += A1;
	V0 = (int32_t)V0 < (int32_t)S0;
	if (!V0)
	{
		V0 = 0xC4650000;
		ZZ_CLOCKCYCLES(5,0x8002BF14);
		goto ZZ_2B890_684;
	}
	V0 = 0xC4650000;
	ZZ_CLOCKCYCLES(5,0x8002BF0C);
ZZ_2B890_67C:
	V0 |= 0x3601;
	ZZ_CLOCKCYCLES(2,0x8002BF18);
	goto ZZ_2B890_688;
ZZ_2B890_684:
	V0 = S0;
	ZZ_CLOCKCYCLES(1,0x8002BF18);
ZZ_2B890_688:
	RA = EMU_ReadU32(SP + 116); //+ 0x74
	FP = EMU_ReadU32(SP + 112); //+ 0x70
	S7 = EMU_ReadU32(SP + 108); //+ 0x6C
	S6 = EMU_ReadU32(SP + 104); //+ 0x68
	S5 = EMU_ReadU32(SP + 100); //+ 0x64
	S4 = EMU_ReadU32(SP + 96); //+ 0x60
	S3 = EMU_ReadU32(SP + 92); //+ 0x5C
	S2 = EMU_ReadU32(SP + 88); //+ 0x58
	S1 = EMU_ReadU32(SP + 84); //+ 0x54
	S0 = EMU_ReadU32(SP + 80); //+ 0x50
	SP += 120;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(13);
	ZZ_JUMPREGISTER(0x8002C050,ZZ_2BF4C_104);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8002B890,ZZ_2B890);
ZZ_MARK(0x8002B894);
ZZ_MARK(0x8002B898);
ZZ_MARK(0x8002B89C);
ZZ_MARK(0x8002B8A0);
ZZ_MARK(0x8002B8A4);
ZZ_MARK(0x8002B8A8);
ZZ_MARK(0x8002B8AC);
ZZ_MARK(0x8002B8B0);
ZZ_MARK(0x8002B8B4);
ZZ_MARK(0x8002B8B8);
ZZ_MARK(0x8002B8BC);
ZZ_MARK(0x8002B8C0);
ZZ_MARK(0x8002B8C4);
ZZ_MARK(0x8002B8C8);
ZZ_MARK(0x8002B8CC);
ZZ_MARK(0x8002B8D0);
ZZ_MARK(0x8002B8D4);
ZZ_MARK(0x8002B8D8);
ZZ_MARK(0x8002B8DC);
ZZ_MARK(0x8002B8E0);
ZZ_MARK(0x8002B8E4);
ZZ_MARK(0x8002B8E8);
ZZ_MARK(0x8002B8EC);
ZZ_MARK(0x8002B8F0);
ZZ_MARK(0x8002B8F4);
ZZ_MARK(0x8002B8F8);
ZZ_MARK(0x8002B8FC);
ZZ_MARK(0x8002B900);
ZZ_MARK(0x8002B904);
ZZ_MARK(0x8002B908);
ZZ_MARK(0x8002B90C);
ZZ_MARK(0x8002B910);
ZZ_MARK(0x8002B914);
ZZ_MARK(0x8002B918);
ZZ_MARK(0x8002B91C);
ZZ_MARK(0x8002B920);
ZZ_MARK(0x8002B924);
ZZ_MARK_TARGET(0x8002B928,ZZ_2B890_98);
ZZ_MARK(0x8002B92C);
ZZ_MARK(0x8002B930);
ZZ_MARK_TARGET(0x8002B934,ZZ_2B890_A4);
ZZ_MARK(0x8002B938);
ZZ_MARK_TARGET(0x8002B93C,ZZ_2B890_AC);
ZZ_MARK(0x8002B940);
ZZ_MARK(0x8002B944);
ZZ_MARK(0x8002B948);
ZZ_MARK(0x8002B94C);
ZZ_MARK(0x8002B950);
ZZ_MARK(0x8002B954);
ZZ_MARK(0x8002B958);
ZZ_MARK(0x8002B95C);
ZZ_MARK(0x8002B960);
ZZ_MARK(0x8002B964);
ZZ_MARK(0x8002B968);
ZZ_MARK(0x8002B96C);
ZZ_MARK(0x8002B970);
ZZ_MARK(0x8002B974);
ZZ_MARK(0x8002B978);
ZZ_MARK(0x8002B97C);
ZZ_MARK(0x8002B980);
ZZ_MARK(0x8002B984);
ZZ_MARK(0x8002B988);
ZZ_MARK_TARGET(0x8002B98C,ZZ_2B890_FC);
ZZ_MARK(0x8002B990);
ZZ_MARK(0x8002B994);
ZZ_MARK_TARGET(0x8002B998,ZZ_2B890_108);
ZZ_MARK(0x8002B99C);
ZZ_MARK(0x8002B9A0);
ZZ_MARK(0x8002B9A4);
ZZ_MARK(0x8002B9A8);
ZZ_MARK(0x8002B9AC);
ZZ_MARK(0x8002B9B0);
ZZ_MARK(0x8002B9B4);
ZZ_MARK(0x8002B9B8);
ZZ_MARK(0x8002B9BC);
ZZ_MARK(0x8002B9C0);
ZZ_MARK(0x8002B9C4);
ZZ_MARK(0x8002B9C8);
ZZ_MARK(0x8002B9CC);
ZZ_MARK(0x8002B9D0);
ZZ_MARK(0x8002B9D4);
ZZ_MARK_TARGET(0x8002B9D8,ZZ_2B890_148);
ZZ_MARK(0x8002B9DC);
ZZ_MARK_TARGET(0x8002B9E0,ZZ_2B890_150);
ZZ_MARK(0x8002B9E4);
ZZ_MARK(0x8002B9E8);
ZZ_MARK(0x8002B9EC);
ZZ_MARK(0x8002B9F0);
ZZ_MARK(0x8002B9F4);
ZZ_MARK(0x8002B9F8);
ZZ_MARK(0x8002B9FC);
ZZ_MARK(0x8002BA00);
ZZ_MARK(0x8002BA04);
ZZ_MARK(0x8002BA08);
ZZ_MARK(0x8002BA0C);
ZZ_MARK_TARGET(0x8002BA10,ZZ_2B890_180);
ZZ_MARK(0x8002BA14);
ZZ_MARK(0x8002BA18);
ZZ_MARK_TARGET(0x8002BA1C,ZZ_2B890_18C);
ZZ_MARK(0x8002BA20);
ZZ_MARK(0x8002BA24);
ZZ_MARK(0x8002BA28);
ZZ_MARK(0x8002BA2C);
ZZ_MARK(0x8002BA30);
ZZ_MARK(0x8002BA34);
ZZ_MARK(0x8002BA38);
ZZ_MARK(0x8002BA3C);
ZZ_MARK(0x8002BA40);
ZZ_MARK(0x8002BA44);
ZZ_MARK_TARGET(0x8002BA48,ZZ_2B890_1B8);
ZZ_MARK(0x8002BA4C);
ZZ_MARK_TARGET(0x8002BA50,ZZ_2B890_1C0);
ZZ_MARK(0x8002BA54);
ZZ_MARK(0x8002BA58);
ZZ_MARK(0x8002BA5C);
ZZ_MARK(0x8002BA60);
ZZ_MARK(0x8002BA64);
ZZ_MARK(0x8002BA68);
ZZ_MARK(0x8002BA6C);
ZZ_MARK(0x8002BA70);
ZZ_MARK(0x8002BA74);
ZZ_MARK(0x8002BA78);
ZZ_MARK(0x8002BA7C);
ZZ_MARK(0x8002BA80);
ZZ_MARK_TARGET(0x8002BA84,ZZ_2B890_1F4);
ZZ_MARK(0x8002BA88);
ZZ_MARK(0x8002BA8C);
ZZ_MARK(0x8002BA90);
ZZ_MARK(0x8002BA94);
ZZ_MARK(0x8002BA98);
ZZ_MARK(0x8002BA9C);
ZZ_MARK(0x8002BAA0);
ZZ_MARK(0x8002BAA4);
ZZ_MARK(0x8002BAA8);
ZZ_MARK(0x8002BAAC);
ZZ_MARK(0x8002BAB0);
ZZ_MARK(0x8002BAB4);
ZZ_MARK(0x8002BAB8);
ZZ_MARK(0x8002BABC);
ZZ_MARK(0x8002BAC0);
ZZ_MARK(0x8002BAC4);
ZZ_MARK(0x8002BAC8);
ZZ_MARK_TARGET(0x8002BACC,ZZ_2B890_23C);
ZZ_MARK(0x8002BAD0);
ZZ_MARK_TARGET(0x8002BAD4,ZZ_2B890_244);
ZZ_MARK(0x8002BAD8);
ZZ_MARK(0x8002BADC);
ZZ_MARK(0x8002BAE0);
ZZ_MARK_TARGET(0x8002BAE4,ZZ_2B890_254);
ZZ_MARK(0x8002BAE8);
ZZ_MARK(0x8002BAEC);
ZZ_MARK(0x8002BAF0);
ZZ_MARK(0x8002BAF4);
ZZ_MARK_TARGET(0x8002BAF8,ZZ_2B890_268);
ZZ_MARK(0x8002BAFC);
ZZ_MARK(0x8002BB00);
ZZ_MARK(0x8002BB04);
ZZ_MARK(0x8002BB08);
ZZ_MARK(0x8002BB0C);
ZZ_MARK(0x8002BB10);
ZZ_MARK(0x8002BB14);
ZZ_MARK(0x8002BB18);
ZZ_MARK(0x8002BB1C);
ZZ_MARK(0x8002BB20);
ZZ_MARK(0x8002BB24);
ZZ_MARK_TARGET(0x8002BB28,ZZ_2B890_298);
ZZ_MARK(0x8002BB2C);
ZZ_MARK(0x8002BB30);
ZZ_MARK_TARGET(0x8002BB34,ZZ_2B890_2A4);
ZZ_MARK(0x8002BB38);
ZZ_MARK_TARGET(0x8002BB3C,ZZ_2B890_2AC);
ZZ_MARK(0x8002BB40);
ZZ_MARK(0x8002BB44);
ZZ_MARK(0x8002BB48);
ZZ_MARK(0x8002BB4C);
ZZ_MARK(0x8002BB50);
ZZ_MARK(0x8002BB54);
ZZ_MARK(0x8002BB58);
ZZ_MARK(0x8002BB5C);
ZZ_MARK(0x8002BB60);
ZZ_MARK(0x8002BB64);
ZZ_MARK(0x8002BB68);
ZZ_MARK(0x8002BB6C);
ZZ_MARK(0x8002BB70);
ZZ_MARK(0x8002BB74);
ZZ_MARK(0x8002BB78);
ZZ_MARK(0x8002BB7C);
ZZ_MARK(0x8002BB80);
ZZ_MARK_TARGET(0x8002BB84,ZZ_2B890_2F4);
ZZ_MARK(0x8002BB88);
ZZ_MARK_TARGET(0x8002BB8C,ZZ_2B890_2FC);
ZZ_MARK(0x8002BB90);
ZZ_MARK_TARGET(0x8002BB94,ZZ_2B890_304);
ZZ_MARK_TARGET(0x8002BB98,ZZ_2B890_308);
ZZ_MARK_TARGET(0x8002BB9C,ZZ_2B890_30C);
ZZ_MARK(0x8002BBA0);
ZZ_MARK(0x8002BBA4);
ZZ_MARK(0x8002BBA8);
ZZ_MARK(0x8002BBAC);
ZZ_MARK(0x8002BBB0);
ZZ_MARK(0x8002BBB4);
ZZ_MARK(0x8002BBB8);
ZZ_MARK(0x8002BBBC);
ZZ_MARK(0x8002BBC0);
ZZ_MARK(0x8002BBC4);
ZZ_MARK(0x8002BBC8);
ZZ_MARK(0x8002BBCC);
ZZ_MARK(0x8002BBD0);
ZZ_MARK(0x8002BBD4);
ZZ_MARK(0x8002BBD8);
ZZ_MARK(0x8002BBDC);
ZZ_MARK(0x8002BBE0);
ZZ_MARK(0x8002BBE4);
ZZ_MARK_TARGET(0x8002BBE8,ZZ_2B890_358);
ZZ_MARK_TARGET(0x8002BBEC,ZZ_2B890_35C);
ZZ_MARK_TARGET(0x8002BBF0,ZZ_2B890_360);
ZZ_MARK(0x8002BBF4);
ZZ_MARK(0x8002BBF8);
ZZ_MARK(0x8002BBFC);
ZZ_MARK(0x8002BC00);
ZZ_MARK(0x8002BC04);
ZZ_MARK(0x8002BC08);
ZZ_MARK(0x8002BC0C);
ZZ_MARK(0x8002BC10);
ZZ_MARK(0x8002BC14);
ZZ_MARK(0x8002BC18);
ZZ_MARK(0x8002BC1C);
ZZ_MARK(0x8002BC20);
ZZ_MARK(0x8002BC24);
ZZ_MARK_TARGET(0x8002BC28,ZZ_2B890_398);
ZZ_MARK(0x8002BC2C);
ZZ_MARK(0x8002BC30);
ZZ_MARK(0x8002BC34);
ZZ_MARK(0x8002BC38);
ZZ_MARK(0x8002BC3C);
ZZ_MARK(0x8002BC40);
ZZ_MARK(0x8002BC44);
ZZ_MARK(0x8002BC48);
ZZ_MARK(0x8002BC4C);
ZZ_MARK(0x8002BC50);
ZZ_MARK(0x8002BC54);
ZZ_MARK(0x8002BC58);
ZZ_MARK(0x8002BC5C);
ZZ_MARK(0x8002BC60);
ZZ_MARK(0x8002BC64);
ZZ_MARK(0x8002BC68);
ZZ_MARK(0x8002BC6C);
ZZ_MARK(0x8002BC70);
ZZ_MARK(0x8002BC74);
ZZ_MARK(0x8002BC78);
ZZ_MARK_TARGET(0x8002BC7C,ZZ_2B890_3EC);
ZZ_MARK(0x8002BC80);
ZZ_MARK(0x8002BC84);
ZZ_MARK(0x8002BC88);
ZZ_MARK(0x8002BC8C);
ZZ_MARK_TARGET(0x8002BC90,ZZ_2B890_400);
ZZ_MARK(0x8002BC94);
ZZ_MARK(0x8002BC98);
ZZ_MARK(0x8002BC9C);
ZZ_MARK(0x8002BCA0);
ZZ_MARK(0x8002BCA4);
ZZ_MARK_TARGET(0x8002BCA8,ZZ_2B890_418);
ZZ_MARK(0x8002BCAC);
ZZ_MARK(0x8002BCB0);
ZZ_MARK(0x8002BCB4);
ZZ_MARK(0x8002BCB8);
ZZ_MARK(0x8002BCBC);
ZZ_MARK(0x8002BCC0);
ZZ_MARK(0x8002BCC4);
ZZ_MARK(0x8002BCC8);
ZZ_MARK(0x8002BCCC);
ZZ_MARK(0x8002BCD0);
ZZ_MARK(0x8002BCD4);
ZZ_MARK(0x8002BCD8);
ZZ_MARK(0x8002BCDC);
ZZ_MARK(0x8002BCE0);
ZZ_MARK(0x8002BCE4);
ZZ_MARK(0x8002BCE8);
ZZ_MARK(0x8002BCEC);
ZZ_MARK(0x8002BCF0);
ZZ_MARK(0x8002BCF4);
ZZ_MARK(0x8002BCF8);
ZZ_MARK(0x8002BCFC);
ZZ_MARK(0x8002BD00);
ZZ_MARK(0x8002BD04);
ZZ_MARK(0x8002BD08);
ZZ_MARK(0x8002BD0C);
ZZ_MARK(0x8002BD10);
ZZ_MARK(0x8002BD14);
ZZ_MARK(0x8002BD18);
ZZ_MARK(0x8002BD1C);
ZZ_MARK(0x8002BD20);
ZZ_MARK_TARGET(0x8002BD24,ZZ_2B890_494);
ZZ_MARK(0x8002BD28);
ZZ_MARK_TARGET(0x8002BD2C,ZZ_2B890_49C);
ZZ_MARK_TARGET(0x8002BD30,ZZ_2B890_4A0);
ZZ_MARK(0x8002BD34);
ZZ_MARK(0x8002BD38);
ZZ_MARK(0x8002BD3C);
ZZ_MARK(0x8002BD40);
ZZ_MARK(0x8002BD44);
ZZ_MARK(0x8002BD48);
ZZ_MARK(0x8002BD4C);
ZZ_MARK(0x8002BD50);
ZZ_MARK(0x8002BD54);
ZZ_MARK(0x8002BD58);
ZZ_MARK(0x8002BD5C);
ZZ_MARK(0x8002BD60);
ZZ_MARK(0x8002BD64);
ZZ_MARK(0x8002BD68);
ZZ_MARK(0x8002BD6C);
ZZ_MARK(0x8002BD70);
ZZ_MARK_TARGET(0x8002BD74,ZZ_2B890_4E4);
ZZ_MARK(0x8002BD78);
ZZ_MARK(0x8002BD7C);
ZZ_MARK(0x8002BD80);
ZZ_MARK(0x8002BD84);
ZZ_MARK(0x8002BD88);
ZZ_MARK(0x8002BD8C);
ZZ_MARK(0x8002BD90);
ZZ_MARK(0x8002BD94);
ZZ_MARK(0x8002BD98);
ZZ_MARK(0x8002BD9C);
ZZ_MARK(0x8002BDA0);
ZZ_MARK(0x8002BDA4);
ZZ_MARK(0x8002BDA8);
ZZ_MARK(0x8002BDAC);
ZZ_MARK(0x8002BDB0);
ZZ_MARK(0x8002BDB4);
ZZ_MARK(0x8002BDB8);
ZZ_MARK(0x8002BDBC);
ZZ_MARK(0x8002BDC0);
ZZ_MARK_TARGET(0x8002BDC4,ZZ_2B890_534);
ZZ_MARK(0x8002BDC8);
ZZ_MARK(0x8002BDCC);
ZZ_MARK(0x8002BDD0);
ZZ_MARK(0x8002BDD4);
ZZ_MARK(0x8002BDD8);
ZZ_MARK(0x8002BDDC);
ZZ_MARK(0x8002BDE0);
ZZ_MARK(0x8002BDE4);
ZZ_MARK(0x8002BDE8);
ZZ_MARK(0x8002BDEC);
ZZ_MARK(0x8002BDF0);
ZZ_MARK(0x8002BDF4);
ZZ_MARK(0x8002BDF8);
ZZ_MARK(0x8002BDFC);
ZZ_MARK(0x8002BE00);
ZZ_MARK_TARGET(0x8002BE04,ZZ_2B890_574);
ZZ_MARK_TARGET(0x8002BE08,ZZ_2B890_578);
ZZ_MARK(0x8002BE0C);
ZZ_MARK(0x8002BE10);
ZZ_MARK(0x8002BE14);
ZZ_MARK(0x8002BE18);
ZZ_MARK(0x8002BE1C);
ZZ_MARK(0x8002BE20);
ZZ_MARK_TARGET(0x8002BE24,ZZ_2B890_594);
ZZ_MARK(0x8002BE28);
ZZ_MARK(0x8002BE2C);
ZZ_MARK(0x8002BE30);
ZZ_MARK(0x8002BE34);
ZZ_MARK(0x8002BE38);
ZZ_MARK_TARGET(0x8002BE3C,ZZ_2B890_5AC);
ZZ_MARK(0x8002BE40);
ZZ_MARK(0x8002BE44);
ZZ_MARK(0x8002BE48);
ZZ_MARK(0x8002BE4C);
ZZ_MARK(0x8002BE50);
ZZ_MARK(0x8002BE54);
ZZ_MARK(0x8002BE58);
ZZ_MARK(0x8002BE5C);
ZZ_MARK(0x8002BE60);
ZZ_MARK(0x8002BE64);
ZZ_MARK(0x8002BE68);
ZZ_MARK(0x8002BE6C);
ZZ_MARK_TARGET(0x8002BE70,ZZ_2B890_5E0);
ZZ_MARK(0x8002BE74);
ZZ_MARK(0x8002BE78);
ZZ_MARK(0x8002BE7C);
ZZ_MARK(0x8002BE80);
ZZ_MARK(0x8002BE84);
ZZ_MARK(0x8002BE88);
ZZ_MARK(0x8002BE8C);
ZZ_MARK(0x8002BE90);
ZZ_MARK_TARGET(0x8002BE94,ZZ_2B890_604);
ZZ_MARK(0x8002BE98);
ZZ_MARK(0x8002BE9C);
ZZ_MARK(0x8002BEA0);
ZZ_MARK(0x8002BEA4);
ZZ_MARK_TARGET(0x8002BEA8,ZZ_2B890_618);
ZZ_MARK(0x8002BEAC);
ZZ_MARK(0x8002BEB0);
ZZ_MARK(0x8002BEB4);
ZZ_MARK(0x8002BEB8);
ZZ_MARK(0x8002BEBC);
ZZ_MARK(0x8002BEC0);
ZZ_MARK(0x8002BEC4);
ZZ_MARK(0x8002BEC8);
ZZ_MARK(0x8002BECC);
ZZ_MARK(0x8002BED0);
ZZ_MARK(0x8002BED4);
ZZ_MARK(0x8002BED8);
ZZ_MARK(0x8002BEDC);
ZZ_MARK(0x8002BEE0);
ZZ_MARK(0x8002BEE4);
ZZ_MARK(0x8002BEE8);
ZZ_MARK(0x8002BEEC);
ZZ_MARK(0x8002BEF0);
ZZ_MARK(0x8002BEF4);
ZZ_MARK_TARGET(0x8002BEF8,ZZ_2B890_668);
ZZ_MARK(0x8002BEFC);
ZZ_MARK(0x8002BF00);
ZZ_MARK(0x8002BF04);
ZZ_MARK(0x8002BF08);
ZZ_MARK_TARGET(0x8002BF0C,ZZ_2B890_67C);
ZZ_MARK(0x8002BF10);
ZZ_MARK_TARGET(0x8002BF14,ZZ_2B890_684);
ZZ_MARK_TARGET(0x8002BF18,ZZ_2B890_688);
ZZ_MARK(0x8002BF1C);
ZZ_MARK(0x8002BF20);
ZZ_MARK(0x8002BF24);
ZZ_MARK(0x8002BF28);
ZZ_MARK(0x8002BF2C);
ZZ_MARK(0x8002BF30);
ZZ_MARK(0x8002BF34);
ZZ_MARK(0x8002BF38);
ZZ_MARK(0x8002BF3C);
ZZ_MARK(0x8002BF40);
ZZ_MARK(0x8002BF44);
ZZ_MARK(0x8002BF48);
