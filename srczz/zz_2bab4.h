#ifdef ZZ_INCLUDE_CODE
ZZ_2BAB4:
	SP -= 144;
	EMU_Write32(SP + 120,S0); //+ 0x78
	S0 = 0x80060000;
	S0 = EMU_ReadU32(S0 + 6428); //+ 0x191C
	EMU_Write32(SP + 132,S3); //+ 0x84
	S3 = A0;
	EMU_Write32(SP + 140,RA); //+ 0x8C
	EMU_Write32(SP + 136,S4); //+ 0x88
	EMU_Write32(SP + 128,S2); //+ 0x80
	EMU_Write32(SP + 124,S1); //+ 0x7C
	A0 = EMU_ReadU32(S0 + 264); //+ 0x108
	RA = 0x8002BAE8; //ZZ_2BAB4_34
	A0 += 4;
	ZZ_CLOCKCYCLES(13,0x80015A98);
	goto ZZ_15A98;
ZZ_2BAB4_34:
	A0 = EMU_ReadU32(S0 + 264); //+ 0x108
	V1 = EMU_ReadU32(S0 + 268); //+ 0x10C
	V1 >>= 8;
	V1 <<= 2;
	V1 += V0;
	S1 = EMU_ReadU32(V1 + 16); //+ 0x10
	RA = 0x8002BB0C; //ZZ_2BAB4_58
	A0 += 4;
	ZZ_CLOCKCYCLES(9,0x80015A98);
	goto ZZ_15A98;
ZZ_2BAB4_58:
	V1 = EMU_ReadU32(S0 + 268); //+ 0x10C
	V1 >>= 8;
	V1 <<= 2;
	V1 += V0;
	A0 = EMU_ReadU32(V1 + 16); //+ 0x10
	RA = 0x8002BB2C; //ZZ_2BAB4_78
	A0 += 4;
	ZZ_CLOCKCYCLES(8,0x80015A98);
	goto ZZ_15A98;
ZZ_2BAB4_78:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 6480); //+ 0x1950
	V1 >>= 8;
	A0 = V1 << 1;
	A0 += V1;
	A0 <<= 1;
	A0 += 56;
	A0 += S1;
	V1 = EMU_ReadU8(A0);
	A1 = EMU_ReadU32(S1 + 8); //+ 0x8
	V1 -= 128;
	V1 += A1;
	A1 = EMU_ReadU32(V0 + 16); //+ 0x10
	V1 <<= 10;
	EMU_Write32(SP + 40,V1); //+ 0x28
	V0 = EMU_ReadU8(A0 + 1); //+ 0x1
	V1 = EMU_ReadU32(S1 + 12); //+ 0xC
	V0 -= 128;
	V0 += V1;
	V0 <<= 10;
	EMU_Write32(SP + 44,V0); //+ 0x2C
	V0 = EMU_ReadU8(A0 + 2); //+ 0x2
	V1 = EMU_ReadU32(S1 + 16); //+ 0x10
	V0 -= 128;
	V0 += V1;
	V0 <<= 10;
	EMU_Write32(SP + 48,V0); //+ 0x30
	V1 = EMU_ReadU32(S0 + 152); //+ 0x98
	V0 = EMU_ReadU32(A1 + 4); //+ 0x4
	EMU_SMultiply(V1,V0);
	V0 = LO;
	V0 = (int32_t)V0 >> 12;
	EMU_Write32(SP + 56,V0); //+ 0x38
	V1 = EMU_ReadU32(S0 + 156); //+ 0x9C
	V0 = EMU_ReadU32(A1 + 8); //+ 0x8
	EMU_SMultiply(V1,V0);
	V0 = LO;
	V0 = (int32_t)V0 >> 12;
	EMU_Write32(SP + 60,V0); //+ 0x3C
	V1 = EMU_ReadU32(S0 + 160); //+ 0xA0
	V0 = EMU_ReadU32(A1 + 12); //+ 0xC
	EMU_SMultiply(V1,V0);
	A2 = S0 + 140;
	A3 = SP + 56;
	S2 = SP + 24;
	A0 = SP + 40;
	A1 = S0 + 128;
	V0 = LO;
	V0 = (int32_t)V0 >> 12;
	EMU_Write32(SP + 64,V0); //+ 0x40
	RA = 0x8002BC0C; //ZZ_2BAB4_158
	EMU_Write32(SP + 16,S2); //+ 0x10
	ZZ_CLOCKCYCLES(56,0x8002465C);
	goto ZZ_2465C;
ZZ_2BAB4_158:
	S1 = 0x80050000;
	S1 = EMU_ReadU32(S1 + 30820); //+ 0x7864
	V0 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = S1 - V0;
	S1 = (int32_t)S1 >> 8;
	EMU_SMultiply(S1,S1);
	S0 = 0x80050000;
	S0 = EMU_ReadU32(S0 + 30828); //+ 0x786C
	V0 = EMU_ReadU32(SP + 32); //+ 0x20
	A1 = LO;
	S0 = S0 - V0;
	S0 = (int32_t)S0 >> 8;
	EMU_SMultiply(S0,S0);
	V1 = EMU_ReadU32(SP + 28); //+ 0x1C
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 30824); //+ 0x7868
	V0 = V0 - V1;
	S4 = (int32_t)V0 >> 8;
	A0 = LO;
	RA = 0x8002BC68; //ZZ_2BAB4_1B4
	A0 += A1;
	ZZ_CLOCKCYCLES(23,0x80042B9C);
	goto ZZ_42B9C;
ZZ_2BAB4_1B4:
	A0 = -S1;
	A1 = -S0;
	RA = 0x8002BC78; //ZZ_2BAB4_1C4
	S1 = V0;
	ZZ_CLOCKCYCLES(4,0x8004301C);
	goto ZZ_4301C;
ZZ_2BAB4_1C4:
	V1 = EMU_ReadU32(S3);
	S0 = V0 + 2048;
	V0 = (int32_t)V1 < 9;
	if (!V0)
	{
		A0 = S4;
		ZZ_CLOCKCYCLES(5,0x8002BD08);
		goto ZZ_2BAB4_254;
	}
	A0 = S4;
	if (V1)
	{
		ZZ_CLOCKCYCLES(7,0x8002BCC4);
		goto ZZ_2BAB4_210;
	}
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 30836); //+ 0x7874
	RA = 0x8002BCA4; //ZZ_2BAB4_1F0
	A1 = S0;
	ZZ_CLOCKCYCLES(11,0x800245F0);
	goto ZZ_245F0;
ZZ_2BAB4_1F0:
	V1 = 0x38E30000;
	V1 |= 0x8E39;
	EMU_SMultiply(V0,V1);
	V0 = (int32_t)V0 >> 31;
	V1 = HI;
	V1 = (int32_t)V1 >> 1;
	V1 = V1 - V0;
	EMU_Write32(GP + 460,V1); //+ 0x1CC
	ZZ_CLOCKCYCLES(8,0x8002BCC4);
ZZ_2BAB4_210:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 30836); //+ 0x7874
	A0 = EMU_ReadU32(GP + 460); //+ 0x1CC
	V0 = S1 << 8;
	EMU_Write32(GP + 476,V0); //+ 0x1DC
	V0 = 0x16;
	EMU_Write32(GP + 468,R0); //+ 0x1D4
	EMU_Write32(GP + 472,S0); //+ 0x1D8
	EMU_Write32(GP + 456,V0); //+ 0x1C8
	V1 += A0;
	AT = 0x80050000;
	EMU_Write32(AT + 30836,V1); //+ 0x7874
	V0 = EMU_ReadU32(S3);
	V0 += 1;
	EMU_Write32(S3,V0);
	A0 = S4;
	ZZ_CLOCKCYCLES(17,0x8002BD08);
ZZ_2BAB4_254:
	RA = 0x8002BD10; //ZZ_2BAB4_25C
	A1 = S1;
	ZZ_CLOCKCYCLES(2,0x8004301C);
	goto ZZ_4301C;
ZZ_2BAB4_25C:
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 30832); //+ 0x7870
	RA = 0x8002BD20; //ZZ_2BAB4_26C
	A1 = -V0;
	ZZ_CLOCKCYCLES(4,0x800245F0);
	goto ZZ_245F0;
ZZ_2BAB4_26C:
	V0 = (int32_t)V0 < 114;
	if (V0)
	{
		ZZ_CLOCKCYCLES(3,0x8002BD3C);
		goto ZZ_2BAB4_288;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 6512); //+ 0x1970
	ZZ_CLOCKCYCLES(7,0x8002BD54);
	goto ZZ_2BAB4_2A0;
ZZ_2BAB4_288:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 6512); //+ 0x1970
	V1 = V0 >> 31;
	V0 += V1;
	V0 = (int32_t)V0 >> 1;
	ZZ_CLOCKCYCLES(6,0x8002BD54);
ZZ_2BAB4_2A0:
	EMU_Write32(GP + 464,V0); //+ 0x1D0
	A0 = S4;
	RA = 0x8002BD64; //ZZ_2BAB4_2B0
	A1 = S1;
	ZZ_CLOCKCYCLES(4,0x8004301C);
	goto ZZ_4301C;
ZZ_2BAB4_2B0:
	A1 = -V0;
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 30832); //+ 0x7870
	A2 = EMU_ReadU32(GP + 464); //+ 0x1D0
	RA = 0x8002BD7C; //ZZ_2BAB4_2C8
	A3 = R0;
	ZZ_CLOCKCYCLES(6,0x800243A0);
	goto ZZ_243A0;
ZZ_2BAB4_2C8:
	S0 = 0x80050000;
	S0 += 30820;
	AT = 0x80050000;
	EMU_Write32(AT + 30832,V0); //+ 0x7870
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 6320); //+ 0x18B0
	V1 = 0x40000;
	V0 &= V1;
	if (!V0)
	{
		A2 = 0x10000;
		ZZ_CLOCKCYCLES(10,0x8002BDC8);
		goto ZZ_2BAB4_314;
	}
	A2 = 0x10000;
	V0 = EMU_ReadU32(GP + 468); //+ 0x1D4
	A0 = EMU_ReadU32(GP + 456); //+ 0x1C8
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 30836); //+ 0x7874
	V0 += A0;
	V1 += A0;
	EMU_Write32(GP + 468,V0); //+ 0x1D4
	AT = 0x80050000;
	EMU_Write32(AT + 30836,V1); //+ 0x7874
	ZZ_CLOCKCYCLES(19,0x8002BDC8);
ZZ_2BAB4_314:
	V0 = 0x10000;
	V0 |= 0xD4C0;
	A2 |= 0x9000;
	A1 = EMU_ReadU32(S2 + 4); //+ 0x4
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 30824); //+ 0x7868
	RA = 0x8002BDE8; //ZZ_2BAB4_334
	A1 += V0;
	ZZ_CLOCKCYCLES(8,0x80024628);
	goto ZZ_24628;
ZZ_2BAB4_334:
	A0 = S1 << 8;
	A1 = 0x20000;
	A2 = 0x80060000;
	A2 = EMU_ReadU32(A2 + 6508); //+ 0x196C
	AT = 0x80050000;
	EMU_Write32(AT + 30824,V0); //+ 0x7868
	RA = 0x8002BE08; //ZZ_2BAB4_354
	A1 |= 0xAB98;
	ZZ_CLOCKCYCLES(8,0x80024628);
	goto ZZ_24628;
ZZ_2BAB4_354:
	A0 = SP + 72;
	A1 = SP + 88;
	A2 = SP + 104;
	T1 = EMU_ReadU32(S2);
	T2 = 0x80050000;
	T2 = EMU_ReadU32(T2 + 30824); //+ 0x7868
	T3 = EMU_ReadU32(S2 + 8); //+ 0x8
	V1 = EMU_ReadU32(GP + 472); //+ 0x1D8
	T0 = EMU_ReadU32(GP + 468); //+ 0x1D4
	A3 = R0;
	EMU_Write32(GP + 476,V0); //+ 0x1DC
	EMU_Write32(SP + 72,R0); //+ 0x48
	EMU_Write32(SP + 76,R0); //+ 0x4C
	EMU_Write32(SP + 80,V0); //+ 0x50
	EMU_Write32(SP + 104,R0); //+ 0x68
	EMU_Write32(SP + 112,R0); //+ 0x70
	V1 += T0;
	EMU_Write32(SP + 88,T1); //+ 0x58
	EMU_Write32(SP + 92,T2); //+ 0x5C
	EMU_Write32(SP + 96,T3); //+ 0x60
	EMU_Write32(SP + 108,V1); //+ 0x6C
	RA = 0x8002BE64; //ZZ_2BAB4_3B0
	EMU_Write32(SP + 16,S0); //+ 0x10
	ZZ_CLOCKCYCLES(23,0x8002465C);
	goto ZZ_2465C;
ZZ_2BAB4_3B0:
	V0 = -255;
	RA = EMU_ReadU32(SP + 140); //+ 0x8C
	S4 = EMU_ReadU32(SP + 136); //+ 0x88
	S3 = EMU_ReadU32(SP + 132); //+ 0x84
	S2 = EMU_ReadU32(SP + 128); //+ 0x80
	S1 = EMU_ReadU32(SP + 124); //+ 0x7C
	S0 = EMU_ReadU32(SP + 120); //+ 0x78
	SP += 144;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(10);
	ZZ_JUMPREGISTER(0x8002B318,ZZ_2B2BC_5C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8002BAB4,0x8002BAE8,ZZ_2BAB4);
ZZ_MARK_TARGET(0x8002BAE8,0x8002BB0C,ZZ_2BAB4_34);
ZZ_MARK_TARGET(0x8002BB0C,0x8002BB2C,ZZ_2BAB4_58);
ZZ_MARK_TARGET(0x8002BB2C,0x8002BC0C,ZZ_2BAB4_78);
ZZ_MARK_TARGET(0x8002BC0C,0x8002BC68,ZZ_2BAB4_158);
ZZ_MARK_TARGET(0x8002BC68,0x8002BC78,ZZ_2BAB4_1B4);
ZZ_MARK_TARGET(0x8002BC78,0x8002BCA4,ZZ_2BAB4_1C4);
ZZ_MARK_TARGET(0x8002BCA4,0x8002BCC4,ZZ_2BAB4_1F0);
ZZ_MARK_TARGET(0x8002BCC4,0x8002BD08,ZZ_2BAB4_210);
ZZ_MARK_TARGET(0x8002BD08,0x8002BD10,ZZ_2BAB4_254);
ZZ_MARK_TARGET(0x8002BD10,0x8002BD20,ZZ_2BAB4_25C);
ZZ_MARK_TARGET(0x8002BD20,0x8002BD3C,ZZ_2BAB4_26C);
ZZ_MARK_TARGET(0x8002BD3C,0x8002BD54,ZZ_2BAB4_288);
ZZ_MARK_TARGET(0x8002BD54,0x8002BD64,ZZ_2BAB4_2A0);
ZZ_MARK_TARGET(0x8002BD64,0x8002BD7C,ZZ_2BAB4_2B0);
ZZ_MARK_TARGET(0x8002BD7C,0x8002BDC8,ZZ_2BAB4_2C8);
ZZ_MARK_TARGET(0x8002BDC8,0x8002BDE8,ZZ_2BAB4_314);
ZZ_MARK_TARGET(0x8002BDE8,0x8002BE08,ZZ_2BAB4_334);
ZZ_MARK_TARGET(0x8002BE08,0x8002BE64,ZZ_2BAB4_354);
ZZ_MARK_TARGET(0x8002BE64,0x8002BE8C,ZZ_2BAB4_3B0);