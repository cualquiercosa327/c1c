#ifdef ZZ_INCLUDE_CODE
ZZ_1A460:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 30996); //+ 0x7914
	SP -= 56;
	EMU_Write32(SP + 36,S5); //+ 0x24
	S5 = A0;
	EMU_Write32(SP + 40,S6); //+ 0x28
	S6 = A1;
	EMU_Write32(SP + 48,RA); //+ 0x30
	EMU_Write32(SP + 44,S7); //+ 0x2C
	EMU_Write32(SP + 32,S4); //+ 0x20
	EMU_Write32(SP + 28,S3); //+ 0x1C
	EMU_Write32(SP + 24,S2); //+ 0x18
	EMU_Write32(SP + 20,S1); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	S0 = -1;
	S4 = EMU_ReadU32(V0);
	if ((int32_t)S4 <= 0)
	{
		S3 = V0 + 4;
		ZZ_CLOCKCYCLES(20,0x8001A5C4);
		goto ZZ_1A460_164;
	}
	S3 = V0 + 4;
	S7 = 0x1;
	S2 = -31;
	S1 = S3;
	ZZ_CLOCKCYCLES(23,0x8001A4BC);
ZZ_1A460_5C:
	RA = 0x8001A4C4; //ZZ_1A460_64
	A0 = S1;
	ZZ_CLOCKCYCLES(2,0x80015A98);
	goto ZZ_15A98;
ZZ_1A460_64:
	V1 = V0;
	V0 = EMU_ReadU32(V1 + 12); //+ 0xC
	V0 = (int32_t)V0 < 4;
	if (V0)
	{
		ZZ_CLOCKCYCLES(6,0x8001A5AC);
		goto ZZ_1A460_14C;
	}
	A0 = EMU_ReadU32(V1 + 28); //+ 0x1C
	A1 = 0x1;
	A2 = EMU_ReadU16(A0);
	T0 = EMU_ReadU32(V1 + 16); //+ 0x10
	V0 = A2 + 1;
	V0 = (int32_t)A1 < (int32_t)V0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(14,0x8001A5AC);
		goto ZZ_1A460_14C;
	}
	A3 = S1;
	A0 += 2;
	ZZ_CLOCKCYCLES(16,0x8001A504);
ZZ_1A460_A4:
	V1 = EMU_ReadU16(A0);
	V0 = V1 & 0x8000;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001A520);
		goto ZZ_1A460_C0;
	}
	S0 = V1 & 0xFFF;
	ZZ_CLOCKCYCLES(7,0x8001A598);
	goto ZZ_1A460_138;
ZZ_1A460_C0:
	V0 = EMU_ReadU32(T0 + 12); //+ 0xC
	V1 &= 0xFFF;
	V0 = V1 < V0;
	if (!V0)
	{
		V1 <<= 3;
		ZZ_CLOCKCYCLES(5,0x8001A598);
		goto ZZ_1A460_138;
	}
	V1 <<= 3;
	V0 = EMU_ReadU32(A3 + 20); //+ 0x14
	V1 += V0;
	V0 = (int32_t)S0 < 32;
	if (!V0)
	{
		V0 = S7 << S0;
		ZZ_CLOCKCYCLES(11,0x8001A560);
		goto ZZ_1A460_100;
	}
	V0 = S7 << S0;
	V0 &= S5;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(14,0x8001A588);
		goto ZZ_1A460_128;
	}
	ZZ_CLOCKCYCLES(16,0x8001A574);
	goto ZZ_1A460_114;
ZZ_1A460_100:
	V0 = S0 - 32;
	V0 = S7 << V0;
	V0 &= S6;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001A588);
		goto ZZ_1A460_128;
	}
	ZZ_CLOCKCYCLES(5,0x8001A574);
ZZ_1A460_114:
	V0 = EMU_ReadU32(V1 + 4); //+ 0x4
	V0 &= S2;
	V0 |= 0xF;
	ZZ_CLOCKCYCLES(5,0x8001A594);
	goto ZZ_1A460_134;
ZZ_1A460_128:
	V0 = EMU_ReadU32(V1 + 4); //+ 0x4
	V0 &= S2;
	ZZ_CLOCKCYCLES(3,0x8001A594);
ZZ_1A460_134:
	EMU_Write32(V1 + 4,V0); //+ 0x4
	ZZ_CLOCKCYCLES(1,0x8001A598);
ZZ_1A460_138:
	A1 += 1;
	V0 = A2 + 1;
	V0 = (int32_t)A1 < (int32_t)V0;
	if (V0)
	{
		A0 += 2;
		ZZ_CLOCKCYCLES(5,0x8001A504);
		goto ZZ_1A460_A4;
	}
	A0 += 2;
	ZZ_CLOCKCYCLES(5,0x8001A5AC);
ZZ_1A460_14C:
	S1 += 64;
	V0 = S4 << 6;
	V0 += S3;
	V0 = (int32_t)S1 < (int32_t)V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(6,0x8001A4BC);
		goto ZZ_1A460_5C;
	}
	ZZ_CLOCKCYCLES(6,0x8001A5C4);
ZZ_1A460_164:
	RA = EMU_ReadU32(SP + 48); //+ 0x30
	S7 = EMU_ReadU32(SP + 44); //+ 0x2C
	S6 = EMU_ReadU32(SP + 40); //+ 0x28
	S5 = EMU_ReadU32(SP + 36); //+ 0x24
	S4 = EMU_ReadU32(SP + 32); //+ 0x20
	S3 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 56;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(12);
	ZZ_JUMPREGISTER(0x800194A0,ZZ_1922C_274);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001A460,0x8001A4BC,ZZ_1A460);
ZZ_MARK_TARGET(0x8001A4BC,0x8001A4C4,ZZ_1A460_5C);
ZZ_MARK_TARGET(0x8001A4C4,0x8001A504,ZZ_1A460_64);
ZZ_MARK_TARGET(0x8001A504,0x8001A520,ZZ_1A460_A4);
ZZ_MARK_TARGET(0x8001A520,0x8001A560,ZZ_1A460_C0);
ZZ_MARK_TARGET(0x8001A560,0x8001A574,ZZ_1A460_100);
ZZ_MARK_TARGET(0x8001A574,0x8001A588,ZZ_1A460_114);
ZZ_MARK_TARGET(0x8001A588,0x8001A594,ZZ_1A460_128);
ZZ_MARK_TARGET(0x8001A594,0x8001A598,ZZ_1A460_134);
ZZ_MARK_TARGET(0x8001A598,0x8001A5AC,ZZ_1A460_138);
ZZ_MARK_TARGET(0x8001A5AC,0x8001A5C4,ZZ_1A460_14C);
ZZ_MARK_TARGET(0x8001A5C4,0x8001A5F4,ZZ_1A460_164);
