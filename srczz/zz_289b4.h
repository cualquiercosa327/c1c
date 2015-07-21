#ifdef ZZ_INCLUDE_CODE
ZZ_289B4:
	SP -= 136;
	EMU_Write32(SP + 120,S6); //+ 0x78
	S6 = A0;
	EMU_Write32(SP + 104,S2); //+ 0x68
	S2 = A1;
	EMU_Write32(SP + 116,S5); //+ 0x74
	S5 = 0xC4650000;
	S5 |= 0x3601;
	EMU_Write32(SP + 112,S4); //+ 0x70
	S4 = R0;
	EMU_Write32(SP + 124,S7); //+ 0x7C
	S7 = R0;
	EMU_Write32(SP + 128,FP); //+ 0x80
	V0 = 0x4000000;
	EMU_Write32(SP + 132,RA); //+ 0x84
	EMU_Write32(SP + 108,S3); //+ 0x6C
	EMU_Write32(SP + 100,S1); //+ 0x64
	EMU_Write32(SP + 96,S0); //+ 0x60
	V1 = EMU_ReadU32(S6 + 204); //+ 0xCC
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 30996); //+ 0x7914
	V1 &= V0;
	S3 = EMU_ReadU32(A0 + 16); //+ 0x10
	if (V1)
	{
		FP = R0;
		ZZ_CLOCKCYCLES(25,0x80028A2C);
		goto ZZ_289B4_78;
	}
	FP = R0;
	V0 = R0;
	ZZ_CLOCKCYCLES(27,0x80028E08);
	goto ZZ_289B4_454;
ZZ_289B4_6C:
	EMU_Write32(S2 + 4,A1); //+ 0x4
	S4 = A2;
	ZZ_CLOCKCYCLES(3,0x80028D28);
	goto ZZ_289B4_374;
ZZ_289B4_78:
	V0 = EMU_ReadU32(S2);
	V1 = EMU_ReadU32(S2 + 4); //+ 0x4
	A0 = EMU_ReadU32(S2 + 8); //+ 0x8
	EMU_Write32(SP + 24,V0); //+ 0x18
	EMU_Write32(SP + 28,V1); //+ 0x1C
	EMU_Write32(SP + 32,A0); //+ 0x20
	ZZ_CLOCKCYCLES(6,0x80028A44);
ZZ_289B4_90:
	V0 = EMU_ReadU32(S2);
	V1 = EMU_ReadU32(S2 + 4); //+ 0x4
	A0 = EMU_ReadU32(S2 + 8); //+ 0x8
	EMU_Write32(SP + 40,V0); //+ 0x28
	EMU_Write32(SP + 44,V1); //+ 0x2C
	EMU_Write32(SP + 48,A0); //+ 0x30
	V0 = EMU_ReadU32(S3 + 528); //+ 0x210
	if ((int32_t)V0 <= 0)
	{
		S1 = R0;
		ZZ_CLOCKCYCLES(10,0x80028B38);
		goto ZZ_289B4_184;
	}
	S1 = R0;
	S0 = 0x214;
	ZZ_CLOCKCYCLES(11,0x80028A70);
ZZ_289B4_BC:
	RA = 0x80028A78; //ZZ_289B4_C4
	A0 = S3 + S0;
	ZZ_CLOCKCYCLES(2,0x80015A98);
	goto ZZ_15A98;
ZZ_289B4_C4:
	T3 = V0;
	V1 = EMU_ReadU32(T3 + 20); //+ 0x14
	A0 = EMU_ReadU32(V1);
	A3 = EMU_ReadU32(S2);
	V0 = A0 << 8;
	V0 = (int32_t)A3 < (int32_t)V0;
	if (V0)
	{
		T2 = R0;
		ZZ_CLOCKCYCLES(9,0x80028B18);
		goto ZZ_289B4_164;
	}
	T2 = R0;
	A1 = EMU_ReadU32(V1 + 4); //+ 0x4
	T0 = EMU_ReadU32(S2 + 4); //+ 0x4
	V0 = A1 << 8;
	V0 = (int32_t)T0 < (int32_t)V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(15,0x80028B18);
		goto ZZ_289B4_164;
	}
	A2 = EMU_ReadU32(V1 + 8); //+ 0x8
	T1 = EMU_ReadU32(S2 + 8); //+ 0x8
	V0 = A2 << 8;
	V0 = (int32_t)T1 < (int32_t)V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(21,0x80028B18);
		goto ZZ_289B4_164;
	}
	V0 = EMU_ReadU32(V1 + 12); //+ 0xC
	V0 += A0;
	V0 <<= 8;
	V0 = (int32_t)A3 < (int32_t)V0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(28,0x80028B18);
		goto ZZ_289B4_164;
	}
	V0 = EMU_ReadU32(V1 + 16); //+ 0x10
	V0 += A1;
	V0 <<= 8;
	V0 = (int32_t)T0 < (int32_t)V0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(35,0x80028B18);
		goto ZZ_289B4_164;
	}
	V0 = EMU_ReadU32(V1 + 20); //+ 0x14
	V0 += A2;
	V0 <<= 8;
	T2 = (int32_t)T1 < (int32_t)V0;
	ZZ_CLOCKCYCLES(40,0x80028B18);
ZZ_289B4_164:
	if (T2)
	{
		A2 = SP + 56;
		ZZ_CLOCKCYCLES(2,0x80028B4C);
		goto ZZ_289B4_198;
	}
	A2 = SP + 56;
	V0 = EMU_ReadU32(S3 + 528); //+ 0x210
	S1 += 1;
	V0 = (int32_t)S1 < (int32_t)V0;
	if (V0)
	{
		S0 += 4;
		ZZ_CLOCKCYCLES(7,0x80028A70);
		goto ZZ_289B4_BC;
	}
	S0 += 4;
	ZZ_CLOCKCYCLES(7,0x80028B34);
ZZ_289B4_180:
	V0 = EMU_ReadU32(S3 + 528); //+ 0x210
	ZZ_CLOCKCYCLES(1,0x80028B38);
ZZ_289B4_184:
	if (S1 != V0)
	{
		ZZ_CLOCKCYCLES(3,0x80028BD0);
		goto ZZ_289B4_21C;
	}
	S4 = R0;
	ZZ_CLOCKCYCLES(5,0x80028BD8);
	goto ZZ_289B4_224;
ZZ_289B4_198:
	A0 = EMU_ReadU32(T3 + 20); //+ 0x14
	V0 = EMU_ReadU32(A0);
	V0 <<= 8;
	EMU_Write32(SP + 56,V0); //+ 0x38
	V0 = EMU_ReadU32(A0 + 4); //+ 0x4
	V0 <<= 8;
	EMU_Write32(SP + 60,V0); //+ 0x3C
	V0 = EMU_ReadU32(A0 + 8); //+ 0x8
	V0 <<= 8;
	EMU_Write32(SP + 64,V0); //+ 0x40
	V0 = EMU_ReadU32(A0 + 12); //+ 0xC
	V0 <<= 8;
	EMU_Write32(SP + 68,V0); //+ 0x44
	V0 = EMU_ReadU32(A0 + 16); //+ 0x10
	V0 <<= 8;
	EMU_Write32(SP + 72,V0); //+ 0x48
	V0 = EMU_ReadU32(A0 + 20); //+ 0x14
	A3 = S2;
	V0 <<= 8;
	EMU_Write32(SP + 76,V0); //+ 0x4C
	A1 = EMU_ReadU16(A0 + 28); //+ 0x1C
	V0 = 0x1;
	EMU_Write32(SP + 16,R0); //+ 0x10
	RA = 0x80028BC8; //ZZ_289B4_214
	EMU_Write32(SP + 20,V0); //+ 0x14
	ZZ_CLOCKCYCLES(31,0x8002832C);
	goto ZZ_2832C;
ZZ_289B4_214:
	S4 = V0;
	ZZ_CLOCKCYCLES(2,0x80028B34);
	goto ZZ_289B4_180;
ZZ_289B4_21C:
	if (!S4)
	{
		ZZ_CLOCKCYCLES(2,0x80028A44);
		goto ZZ_289B4_90;
	}
	ZZ_CLOCKCYCLES(2,0x80028BD8);
ZZ_289B4_224:
	V0 = 0x80060000;
	V0 += 6280;
	V1 = EMU_ReadU32(V0);
	if ((int32_t)V1 <= 0)
	{
		ZZ_CLOCKCYCLES(6,0x80028D2C);
		goto ZZ_289B4_378;
	}
	A3 = V0 - 2688;
	if ((int32_t)V1 <= 0)
	{
		S1 = R0;
		ZZ_CLOCKCYCLES(9,0x80028CFC);
		goto ZZ_289B4_348;
	}
	S1 = R0;
	T6 = 0x40020000;
	T5 = 0x20000;
	T4 = 0xFFFF0000;
	T4 |= 0x7748;
	T2 = 0x88B8;
	T3 = V1;
	A0 = V0 - 2684;
	T1 = EMU_ReadU32(SP + 24); //+ 0x18
	T0 = EMU_ReadU32(SP + 32); //+ 0x20
	ZZ_CLOCKCYCLES(18,0x80028C20);
ZZ_289B4_26C:
	A2 = EMU_ReadU32(A0 + 20); //+ 0x14
	V0 = EMU_ReadU32(A2 + 204); //+ 0xCC
	V0 &= T6;
	if (V0 != T5)
	{
		ZZ_CLOCKCYCLES(7,0x80028CE8);
		goto ZZ_289B4_334;
	}
	V0 = EMU_ReadU32(A3);
	A1 = EMU_ReadU32(A0 + 12); //+ 0xC
	V0 += T4;
	V0 = (int32_t)T1 < (int32_t)V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(13,0x80028CE8);
		goto ZZ_289B4_334;
	}
	V0 = EMU_ReadU32(A0 + 8); //+ 0x8
	V0 += T2;
	V0 = (int32_t)V0 < (int32_t)T1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(19,0x80028CE8);
		goto ZZ_289B4_334;
	}
	V0 = EMU_ReadU32(A0 + 4); //+ 0x4
	V0 = V0 - T2;
	V0 = (int32_t)T0 < (int32_t)V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(25,0x80028CE8);
		goto ZZ_289B4_334;
	}
	V0 = EMU_ReadU32(A0 + 16); //+ 0x10
	V0 += T2;
	V0 = (int32_t)V0 < (int32_t)T0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(31,0x80028CE8);
		goto ZZ_289B4_334;
	}
	V1 = EMU_ReadU32(S2 + 4); //+ 0x4
	V0 = (int32_t)A1 < (int32_t)V1;
	if (V0)
	{
		V0 = (int32_t)S5 < (int32_t)A1;
		ZZ_CLOCKCYCLES(36,0x80028CC4);
		goto ZZ_289B4_310;
	}
	V0 = (int32_t)S5 < (int32_t)A1;
	V0 = EMU_ReadU32(A0);
	V0 = (int32_t)V1 < (int32_t)V0;
	if (!V0)
	{
		V0 = (int32_t)S5 < (int32_t)A1;
		ZZ_CLOCKCYCLES(41,0x80028A20);
		goto ZZ_289B4_6C;
	}
	V0 = (int32_t)S5 < (int32_t)A1;
	ZZ_CLOCKCYCLES(41,0x80028CC4);
ZZ_289B4_310:
	if (!V0)
	{
		ZZ_CLOCKCYCLES(2,0x80028CE8);
		goto ZZ_289B4_334;
	}
	V0 = EMU_ReadU32(SP + 28); //+ 0x1C
	V0 = (int32_t)V0 < (int32_t)A1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(7,0x80028CE8);
		goto ZZ_289B4_334;
	}
	S7 = A2;
	S5 = A1;
	ZZ_CLOCKCYCLES(9,0x80028CE8);
ZZ_289B4_334:
	S1 += 1;
	A0 += 28;
	V0 = (int32_t)S1 < (int32_t)T3;
	if (V0)
	{
		A3 += 28;
		ZZ_CLOCKCYCLES(5,0x80028C20);
		goto ZZ_289B4_26C;
	}
	A3 += 28;
	ZZ_CLOCKCYCLES(5,0x80028CFC);
ZZ_289B4_348:
	if (!S7)
	{
		ZZ_CLOCKCYCLES(2,0x80028D2C);
		goto ZZ_289B4_378;
	}
	if (!S4)
	{
		ZZ_CLOCKCYCLES(4,0x80028D20);
		goto ZZ_289B4_36C;
	}
	V0 = EMU_ReadU32(S2 + 4); //+ 0x4
	V0 = (int32_t)S5 < (int32_t)V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(9,0x80028D2C);
		goto ZZ_289B4_378;
	}
	ZZ_CLOCKCYCLES(9,0x80028D20);
ZZ_289B4_36C:
	EMU_Write32(S2 + 4,S5); //+ 0x4
	S4 = S7;
	ZZ_CLOCKCYCLES(2,0x80028D28);
ZZ_289B4_374:
	FP = 0x1;
	ZZ_CLOCKCYCLES(1,0x80028D2C);
ZZ_289B4_378:
	if (!S4)
	{
		ZZ_CLOCKCYCLES(2,0x80028DD8);
		goto ZZ_289B4_424;
	}
	if (!FP)
	{
		V1 = S4 & 0x3C00;
		ZZ_CLOCKCYCLES(4,0x80028D88);
		goto ZZ_289B4_3D4;
	}
	V1 = S4 & 0x3C00;
	V1 = EMU_ReadU32(S6 + 132); //+ 0x84
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 30824); //+ 0x7868
	A0 = EMU_ReadU32(S4 + 312); //+ 0x138
	V0 = V1 - V0;
	if ((int32_t)V0 <= 0)
	{
		V0 = (int32_t)V0 >> 12;
		ZZ_CLOCKCYCLES(11,0x80028D5C);
		goto ZZ_289B4_3A8;
	}
	V0 = (int32_t)V0 >> 12;
	A0 = A0 - V0;
	ZZ_CLOCKCYCLES(12,0x80028D5C);
ZZ_289B4_3A8:
	V1 = EMU_ReadU32(S6 + 100); //+ 0x64
	V0 = EMU_ReadU32(V1 + 288); //+ 0x120
	V0 &= 0x10;
	V0 = V0 < 1;
	V0 = -V0;
	V0 &= 0x18;
	V0 += A0;
	EMU_Write32(V1 + 312,V0); //+ 0x138
	ZZ_CLOCKCYCLES(11,0x80028E04);
	goto ZZ_289B4_450;
ZZ_289B4_3D4:
	A0 = EMU_ReadU32(S6 + 100); //+ 0x64
	V0 = EMU_ReadU32(A0 + 288); //+ 0x120
	V1 >>= 10;
	V0 &= 0x10;
	V0 = V0 < 1;
	V0 = -V0;
	if ((int32_t)V1 < 0)
	{
		A1 = V0 & 0x18;
		ZZ_CLOCKCYCLES(9,0x80028DCC);
		goto ZZ_289B4_418;
	}
	A1 = V0 & 0x18;
	V0 = V1 << 2;
	AT = 0x80050000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 11428); //+ 0x2CA4
	V0 += A1;
	EMU_Write32(A0 + 312,V0); //+ 0x138
	ZZ_CLOCKCYCLES(17,0x80028E04);
	goto ZZ_289B4_450;
ZZ_289B4_418:
	V0 = A1 - 1;
	EMU_Write32(A0 + 312,V0); //+ 0x138
	ZZ_CLOCKCYCLES(3,0x80028E04);
	goto ZZ_289B4_450;
ZZ_289B4_424:
	V0 = EMU_ReadU32(S6 + 100); //+ 0x64
	V1 = EMU_ReadU32(V0 + 288); //+ 0x120
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 11428); //+ 0x2CA4
	V1 &= 0x10;
	V1 = V1 < 1;
	V1 = -V1;
	V1 &= 0x18;
	V1 += A0;
	EMU_Write32(V0 + 312,V1); //+ 0x138
	ZZ_CLOCKCYCLES(11,0x80028E04);
ZZ_289B4_450:
	V0 = S4;
	ZZ_CLOCKCYCLES(1,0x80028E08);
ZZ_289B4_454:
	RA = EMU_ReadU32(SP + 132); //+ 0x84
	FP = EMU_ReadU32(SP + 128); //+ 0x80
	S7 = EMU_ReadU32(SP + 124); //+ 0x7C
	S6 = EMU_ReadU32(SP + 120); //+ 0x78
	S5 = EMU_ReadU32(SP + 116); //+ 0x74
	S4 = EMU_ReadU32(SP + 112); //+ 0x70
	S3 = EMU_ReadU32(SP + 108); //+ 0x6C
	S2 = EMU_ReadU32(SP + 104); //+ 0x68
	S1 = EMU_ReadU32(SP + 100); //+ 0x64
	S0 = EMU_ReadU32(SP + 96); //+ 0x60
	SP += 136;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(13);
	//ZZ_JUMPREGISTER(0x800239A0,ZZ_201DC_37C4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800289B4,0x80028A20,ZZ_289B4);
ZZ_MARK_TARGET(0x80028A20,0x80028A2C,ZZ_289B4_6C);
ZZ_MARK_TARGET(0x80028A2C,0x80028A44,ZZ_289B4_78);
ZZ_MARK_TARGET(0x80028A44,0x80028A70,ZZ_289B4_90);
ZZ_MARK_TARGET(0x80028A70,0x80028A78,ZZ_289B4_BC);
ZZ_MARK_TARGET(0x80028A78,0x80028B18,ZZ_289B4_C4);
ZZ_MARK_TARGET(0x80028B18,0x80028B34,ZZ_289B4_164);
ZZ_MARK_TARGET(0x80028B34,0x80028B38,ZZ_289B4_180);
ZZ_MARK_TARGET(0x80028B38,0x80028B4C,ZZ_289B4_184);
ZZ_MARK_TARGET(0x80028B4C,0x80028BC8,ZZ_289B4_198);
ZZ_MARK_TARGET(0x80028BC8,0x80028BD0,ZZ_289B4_214);
ZZ_MARK_TARGET(0x80028BD0,0x80028BD8,ZZ_289B4_21C);
ZZ_MARK_TARGET(0x80028BD8,0x80028C20,ZZ_289B4_224);
ZZ_MARK_TARGET(0x80028C20,0x80028CC4,ZZ_289B4_26C);
ZZ_MARK_TARGET(0x80028CC4,0x80028CE8,ZZ_289B4_310);
ZZ_MARK_TARGET(0x80028CE8,0x80028CFC,ZZ_289B4_334);
ZZ_MARK_TARGET(0x80028CFC,0x80028D20,ZZ_289B4_348);
ZZ_MARK_TARGET(0x80028D20,0x80028D28,ZZ_289B4_36C);
ZZ_MARK_TARGET(0x80028D28,0x80028D2C,ZZ_289B4_374);
ZZ_MARK_TARGET(0x80028D2C,0x80028D5C,ZZ_289B4_378);
ZZ_MARK_TARGET(0x80028D5C,0x80028D88,ZZ_289B4_3A8);
ZZ_MARK_TARGET(0x80028D88,0x80028DCC,ZZ_289B4_3D4);
ZZ_MARK_TARGET(0x80028DCC,0x80028DD8,ZZ_289B4_418);
ZZ_MARK_TARGET(0x80028DD8,0x80028E04,ZZ_289B4_424);
ZZ_MARK_TARGET(0x80028E04,0x80028E08,ZZ_289B4_450);
ZZ_MARK_TARGET(0x80028E08,0x80028E3C,ZZ_289B4_454);