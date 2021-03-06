#ifdef ZZ_INCLUDE_CODE
ZZ_4B8B8:
	SP -= 32;
	EMU_Write32(SP + 24,RA); //+ 0x18
	EMU_Write32(SP + 20,S1); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	V1 = R0;
	V1 += 3;
	ZZ_CLOCKCYCLES(6,0x8004B8D0);
ZZ_4B8B8_18:
	V0 = (int32_t)V1 < 3000;
	if (V0)
	{
		V1 += 3;
		ZZ_CLOCKCYCLES(3,0x8004B8D0);
		goto ZZ_4B8B8_18;
	}
	V1 += 3;
	A1 = 0x80050000;
	A1 += 25192;
	EMU_Write8(A1,R0);
	AT = 0x80050000;
	EMU_Write8(AT + 25193,R0); //+ 0x6269
	AT = 0x80050000;
	EMU_Write32(AT + 25188,R0); //+ 0x6264
	V0 = 0x6;
	AT = 0x80050000;
	EMU_Write8(AT + 25194,V0); //+ 0x626A
	S1 = 0xF2000000;
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 25176); //+ 0x6258
	V0 = 0x2;
	if (V1 == V0)
	{
		S1 |= 0x2;
		ZZ_CLOCKCYCLES(19,0x8004B994);
		goto ZZ_4B8B8_DC;
	}
	S1 |= 0x2;
	V0 = (int32_t)V1 < 3;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(22,0x8004B938);
		goto ZZ_4B8B8_80;
	}
	if (!V1)
	{
		V0 = 0x7F;
		ZZ_CLOCKCYCLES(24,0x8004B954);
		goto ZZ_4B8B8_9C;
	}
	V0 = 0x7F;
	ZZ_CLOCKCYCLES(26,0x8004B99C);
	goto ZZ_4B8B8_E4;
ZZ_4B8B8_80:
	V0 = 0x3;
	if (V1 == V0)
	{
		V0 = 0x5;
		ZZ_CLOCKCYCLES(3,0x8004B98C);
		goto ZZ_4B8B8_D4;
	}
	V0 = 0x5;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(5,0x8004B964);
		goto ZZ_4B8B8_AC;
	}
	ZZ_CLOCKCYCLES(7,0x8004B99C);
	goto ZZ_4B8B8_E4;
ZZ_4B8B8_9C:
	AT = 0x80050000;
	EMU_Write8(AT + 25194,V0); //+ 0x626A
	ZZ_CLOCKCYCLES(4,0x8004BB28);
	goto ZZ_4B8B8_270;
ZZ_4B8B8_AC:
	AT = 0x80050000;
	EMU_Write8(AT + 25194,R0); //+ 0x626A
	if (A0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(4,0x8004B97C);
		goto ZZ_4B8B8_C4;
	}
	V0 = 0x1;
	EMU_Write8(A1,V0);
	ZZ_CLOCKCYCLES(6,0x8004BA48);
	goto ZZ_4B8B8_190;
ZZ_4B8B8_C4:
	S1 = 0xF2000000;
	S1 |= 0x3;
	S0 = 0x1;
	ZZ_CLOCKCYCLES(4,0x8004BA48);
	goto ZZ_4B8B8_190;
ZZ_4B8B8_D4:
	S0 = 0x89D0;
	ZZ_CLOCKCYCLES(2,0x8004BA48);
	goto ZZ_4B8B8_190;
ZZ_4B8B8_DC:
	S0 = 0x44E8;
	ZZ_CLOCKCYCLES(2,0x8004BA48);
	goto ZZ_4B8B8_190;
ZZ_4B8B8_E4:
	A0 = 0x80050000;
	A0 += 25180;
	V0 = EMU_ReadU32(A0);
	if (V0)
	{
		ZZ_CLOCKCYCLES(6,0x8004BB28);
		goto ZZ_4B8B8_270;
	}
	V1 = EMU_ReadU32(A0 - 4); //+ 0xFFFFFFFC
	V0 = (int32_t)V1 < 70;
	if (!V0)
	{
		V0 = 0x200000;
		ZZ_CLOCKCYCLES(11,0x8004BA0C);
		goto ZZ_4B8B8_154;
	}
	V0 = 0x200000;
	V0 |= 0x4CC0;
	EMU_SDivide(V0,V1);
	if (V1)
	{
		ZZ_CLOCKCYCLES(15,0x8004B9DC);
		goto ZZ_4B8B8_124;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(16,0x8004B9DC);
ZZ_4B8B8_124:
	AT = -1;
	if (V1 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x8004B9F4);
		goto ZZ_4B8B8_13C;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x8004B9F4);
		goto ZZ_4B8B8_13C;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x8004B9F4);
ZZ_4B8B8_13C:
	V0 = LO;
	V1 = EMU_ReadU8(A0 + 13); //+ 0xD
	V1 += 1;
	EMU_Write8(A0 + 13,V1); //+ 0xD
	ZZ_CLOCKCYCLES(6,0x8004BA40);
	goto ZZ_4B8B8_188;
ZZ_4B8B8_154:
	V0 = 0x400000;
	V0 |= 0x9980;
	EMU_SDivide(V0,V1);
	if (V1)
	{
		ZZ_CLOCKCYCLES(5,0x8004BA24);
		goto ZZ_4B8B8_16C;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(6,0x8004BA24);
ZZ_4B8B8_16C:
	AT = -1;
	if (V1 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x8004BA3C);
		goto ZZ_4B8B8_184;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x8004BA3C);
		goto ZZ_4B8B8_184;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x8004BA3C);
ZZ_4B8B8_184:
	V0 = LO;
	ZZ_CLOCKCYCLES(1,0x8004BA40);
ZZ_4B8B8_188:
	S0 = V0;
	ZZ_CLOCKCYCLES(2,0x8004BA48);
ZZ_4B8B8_190:
	V0 = 0x80050000;
	V0 = EMU_ReadU8(V0 + 25192); //+ 0x6268
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x8004BA7C);
		goto ZZ_4B8B8_1C4;
	}
	RA = 0x8004BA64; //ZZ_4B8B8_1AC
	ZZ_CLOCKCYCLES(7,0x8003E1F8);
	goto ZZ_3E1F8;
ZZ_4B8B8_1AC:
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 25184); //+ 0x6260
	RA = 0x8004BA74; //ZZ_4B8B8_1BC
	ZZ_CLOCKCYCLES(4,0x8003E784);
	goto ZZ_3E784;
ZZ_4B8B8_1BC:
	ZZ_CLOCKCYCLES(2,0x8004BB20);
	goto ZZ_4B8B8_268;
ZZ_4B8B8_1C4:
	RA = 0x8004BA84; //ZZ_4B8B8_1CC
	ZZ_CLOCKCYCLES(2,0x8003E1F8);
	goto ZZ_3E1F8;
ZZ_4B8B8_1CC:
	RA = 0x8004BA8C; //ZZ_4B8B8_1D4
	A0 = S1;
	ZZ_CLOCKCYCLES(2,0x8003E3D8);
	goto ZZ_3E3D8;
ZZ_4B8B8_1D4:
	A0 = S1;
	A1 = S0 & 0xFFFF;
	RA = 0x8004BA9C; //ZZ_4B8B8_1E4
	A2 = 0x1000;
	ZZ_CLOCKCYCLES(4,0x8003E298);
	goto ZZ_3E298;
ZZ_4B8B8_1E4:
	A0 = 0x80050000;
	A0 = EMU_ReadU8(A0 + 25194); //+ 0x626A
	if (A0)
	{
		ZZ_CLOCKCYCLES(5,0x8004BAE4);
		goto ZZ_4B8B8_22C;
	}
	A0 = R0;
	RA = 0x8004BABC; //ZZ_4B8B8_204
	A1 = R0;
	ZZ_CLOCKCYCLES(8,0x8003E724);
	goto ZZ_3E724;
ZZ_4B8B8_204:
	A0 = 0x80050000;
	A0 = EMU_ReadU8(A0 + 25194); //+ 0x626A
	AT = 0x80050000;
	EMU_Write32(AT + 25188,V0); //+ 0x6264
	A1 = 0x80050000;
	A1 -= 18392;
	RA = 0x8004BADC; //ZZ_4B8B8_224
	ZZ_CLOCKCYCLES(8,0x8003E724);
	goto ZZ_3E724;
ZZ_4B8B8_224:
	ZZ_CLOCKCYCLES(2,0x8004BB20);
	goto ZZ_4B8B8_268;
ZZ_4B8B8_22C:
	V0 = 0x80050000;
	V0 = EMU_ReadU8(V0 + 25193); //+ 0x6269
	if (V0)
	{
		ZZ_CLOCKCYCLES(5,0x8004BB10);
		goto ZZ_4B8B8_258;
	}
	A1 = 0x80050000;
	A1 = EMU_ReadU32(A1 + 25184); //+ 0x6260
	RA = 0x8004BB08; //ZZ_4B8B8_250
	ZZ_CLOCKCYCLES(9,0x8003E724);
	goto ZZ_3E724;
ZZ_4B8B8_250:
	ZZ_CLOCKCYCLES(2,0x8004BB20);
	goto ZZ_4B8B8_268;
ZZ_4B8B8_258:
	A1 = 0x80050000;
	A1 -= 18328;
	RA = 0x8004BB20; //ZZ_4B8B8_268
	ZZ_CLOCKCYCLES(4,0x8003E724);
	goto ZZ_3E724;
ZZ_4B8B8_268:
	RA = 0x8004BB28; //ZZ_4B8B8_270
	ZZ_CLOCKCYCLES(2,0x8003E208);
	goto ZZ_3E208;
ZZ_4B8B8_270:
	RA = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 32;
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x8004BB4C,ZZ_4BB3C_10);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004B8B8,0x8004B8D0,ZZ_4B8B8);
ZZ_MARK_TARGET(0x8004B8D0,0x8004B938,ZZ_4B8B8_18);
ZZ_MARK_TARGET(0x8004B938,0x8004B954,ZZ_4B8B8_80);
ZZ_MARK_TARGET(0x8004B954,0x8004B964,ZZ_4B8B8_9C);
ZZ_MARK_TARGET(0x8004B964,0x8004B97C,ZZ_4B8B8_AC);
ZZ_MARK_TARGET(0x8004B97C,0x8004B98C,ZZ_4B8B8_C4);
ZZ_MARK_TARGET(0x8004B98C,0x8004B994,ZZ_4B8B8_D4);
ZZ_MARK_TARGET(0x8004B994,0x8004B99C,ZZ_4B8B8_DC);
ZZ_MARK_TARGET(0x8004B99C,0x8004B9DC,ZZ_4B8B8_E4);
ZZ_MARK_TARGET(0x8004B9DC,0x8004B9F4,ZZ_4B8B8_124);
ZZ_MARK_TARGET(0x8004B9F4,0x8004BA0C,ZZ_4B8B8_13C);
ZZ_MARK_TARGET(0x8004BA0C,0x8004BA24,ZZ_4B8B8_154);
ZZ_MARK_TARGET(0x8004BA24,0x8004BA3C,ZZ_4B8B8_16C);
ZZ_MARK_TARGET(0x8004BA3C,0x8004BA40,ZZ_4B8B8_184);
ZZ_MARK_TARGET(0x8004BA40,0x8004BA48,ZZ_4B8B8_188);
ZZ_MARK_TARGET(0x8004BA48,0x8004BA64,ZZ_4B8B8_190);
ZZ_MARK_TARGET(0x8004BA64,0x8004BA74,ZZ_4B8B8_1AC);
ZZ_MARK_TARGET(0x8004BA74,0x8004BA7C,ZZ_4B8B8_1BC);
ZZ_MARK_TARGET(0x8004BA7C,0x8004BA84,ZZ_4B8B8_1C4);
ZZ_MARK_TARGET(0x8004BA84,0x8004BA8C,ZZ_4B8B8_1CC);
ZZ_MARK_TARGET(0x8004BA8C,0x8004BA9C,ZZ_4B8B8_1D4);
ZZ_MARK_TARGET(0x8004BA9C,0x8004BABC,ZZ_4B8B8_1E4);
ZZ_MARK_TARGET(0x8004BABC,0x8004BADC,ZZ_4B8B8_204);
ZZ_MARK_TARGET(0x8004BADC,0x8004BAE4,ZZ_4B8B8_224);
ZZ_MARK_TARGET(0x8004BAE4,0x8004BB08,ZZ_4B8B8_22C);
ZZ_MARK_TARGET(0x8004BB08,0x8004BB10,ZZ_4B8B8_250);
ZZ_MARK_TARGET(0x8004BB10,0x8004BB20,ZZ_4B8B8_258);
ZZ_MARK_TARGET(0x8004BB20,0x8004BB28,ZZ_4B8B8_268);
ZZ_MARK_TARGET(0x8004BB28,0x8004BB3C,ZZ_4B8B8_270);
