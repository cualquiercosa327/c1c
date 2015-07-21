#ifdef ZZ_INCLUDE_CODE
ZZ_32BB4:
	SP -= 56;
	EMU_Write32(SP + 48,S4); //+ 0x30
	S4 = A0;
	EMU_Write32(SP + 40,S2); //+ 0x28
	S2 = A1;
	EMU_Write32(SP + 44,S3); //+ 0x2C
	S3 = A2;
	A0 = S4 + 28;
	EMU_Write32(SP + 52,RA); //+ 0x34
	EMU_Write32(SP + 36,S1); //+ 0x24
	RA = 0x80032BE4; //ZZ_32BB4_30
	EMU_Write32(SP + 32,S0); //+ 0x20
	ZZ_CLOCKCYCLES(12,0x80032AF4);
	goto ZZ_32AF4;
ZZ_32BB4_30:
	A0 = 0x1;
	A1 = 0x1;
	A2 = 0x100;
	RA = 0x80032BF8; //ZZ_32BB4_44
	A3 = 0x100;
	ZZ_CLOCKCYCLES(5,0x8003F514);
	goto ZZ_3F514;
ZZ_32BB4_44:
	A0 = 0x1;
	A1 = 0x1;
	A2 = 0x180;
	A3 = 0x100;
	RA = 0x80032C10; //ZZ_32BB4_5C
	EMU_Write16(S4 + 13664,V0); //+ 0x3560
	ZZ_CLOCKCYCLES(6,0x8003F514);
	goto ZZ_3F514;
ZZ_32BB4_5C:
	A0 = 0x1;
	A1 = 0x1;
	A2 = 0x200;
	A3 = 0x100;
	RA = 0x80032C28; //ZZ_32BB4_74
	EMU_Write16(S4 + 13666,V0); //+ 0x3562
	ZZ_CLOCKCYCLES(6,0x8003F514);
	goto ZZ_3F514;
ZZ_32BB4_74:
	A0 = 0x1;
	A1 = 0x1;
	A2 = 0x280;
	A3 = 0x100;
	RA = 0x80032C40; //ZZ_32BB4_8C
	EMU_Write16(S4 + 13668,V0); //+ 0x3564
	ZZ_CLOCKCYCLES(6,0x8003F514);
	goto ZZ_3F514;
ZZ_32BB4_8C:
	A0 = S4 + 13672;
	A1 = 0x1;
	A2 = 0x1;
	S0 = 0x100;
	EMU_Write16(S4 + 13670,V0); //+ 0x3566
	EMU_Write16(SP + 24,S0); //+ 0x18
	EMU_Write16(SP + 26,S0); //+ 0x1A
	EMU_Write16(SP + 28,S0); //+ 0x1C
	EMU_Write16(SP + 30,S0); //+ 0x1E
	A3 = EMU_ReadU16(S4 + 13664); //+ 0x3560
	S1 = SP + 24;
	RA = 0x80032C74; //ZZ_32BB4_C0
	EMU_Write32(SP + 16,S1); //+ 0x10
	ZZ_CLOCKCYCLES(13,0x80041054);
	goto ZZ_41054;
ZZ_32BB4_C0:
	A0 = S4 + 13684;
	A1 = 0x1;
	V0 = 0x180;
	EMU_Write16(SP + 24,V0); //+ 0x18
	EMU_Write16(SP + 26,S0); //+ 0x1A
	EMU_Write16(SP + 28,S0); //+ 0x1C
	EMU_Write16(SP + 30,S0); //+ 0x1E
	A3 = EMU_ReadU16(S4 + 13666); //+ 0x3562
	A2 = 0x1;
	RA = 0x80032CA0; //ZZ_32BB4_EC
	EMU_Write32(SP + 16,S1); //+ 0x10
	ZZ_CLOCKCYCLES(11,0x80041054);
	goto ZZ_41054;
ZZ_32BB4_EC:
	A0 = S4 + 13696;
	A1 = 0x1;
	V0 = 0x200;
	EMU_Write16(SP + 24,V0); //+ 0x18
	EMU_Write16(SP + 26,S0); //+ 0x1A
	EMU_Write16(SP + 28,S0); //+ 0x1C
	EMU_Write16(SP + 30,S0); //+ 0x1E
	A3 = EMU_ReadU16(S4 + 13668); //+ 0x3564
	A2 = 0x1;
	RA = 0x80032CCC; //ZZ_32BB4_118
	EMU_Write32(SP + 16,S1); //+ 0x10
	ZZ_CLOCKCYCLES(11,0x80041054);
	goto ZZ_41054;
ZZ_32BB4_118:
	A0 = S4 + 13708;
	A1 = 0x1;
	V0 = 0x280;
	EMU_Write16(SP + 24,V0); //+ 0x18
	EMU_Write16(SP + 26,S0); //+ 0x1A
	EMU_Write16(SP + 28,S0); //+ 0x1C
	EMU_Write16(SP + 30,S0); //+ 0x1E
	A3 = EMU_ReadU16(S4 + 13670); //+ 0x3566
	A2 = 0x1;
	RA = 0x80032CF8; //ZZ_32BB4_144
	EMU_Write32(SP + 16,S1); //+ 0x10
	ZZ_CLOCKCYCLES(11,0x80041054);
	goto ZZ_41054;
ZZ_32BB4_144:
	S2 = (int32_t)S2 >> 4;
	S3 = (int32_t)S3 >> 4;
	T2 = R0;
	T4 = 0xFFFE0000;
	T4 |= 0xFF;
	T1 = R0;
	ZZ_CLOCKCYCLES(6,0x80032D10);
ZZ_32BB4_15C:
	V0 = S3 + T2;
	V0 &= 0xFF;
	T3 = V0 << 17;
	T0 = T2;
	ZZ_CLOCKCYCLES(4,0x80032D20);
ZZ_32BB4_16C:
	A0 = 0xFE010000;
	A0 |= 0xFFFF;
	A3 = 0xF9FF0000;
	A3 |= 0xFFFF;
	A1 = T0 << 1;
	A1 += T0;
	T0 += 16;
	A1 <<= 2;
	A2 = A1 + 6364;
	A2 += S4;
	V0 = S2 + T1;
	T1 += 1;
	V0 &= 0x1FF;
	V0 <<= 8;
	V1 = EMU_ReadU32(A2);
	A1 += S4;
	V1 &= T4;
	V1 |= V0;
	V1 &= A0;
	V1 |= T3;
	A0 = -16;
	EMU_Write32(A2,V1);
	V1 &= A0;
	V0 = EMU_ReadU32(A1 + 28); //+ 0x1C
	A0 = -241;
	V0 &= 0xF;
	V1 |= V0;
	EMU_Write32(A2,V1);
	V0 = EMU_ReadU32(A1 + 32); //+ 0x20
	V1 &= A0;
	V0 &= 0xF;
	V0 <<= 4;
	V1 |= V0;
	EMU_Write32(A2,V1);
	V0 = EMU_ReadU32(A1 + 36); //+ 0x24
	V1 &= A3;
	V0 &= 0x3;
	V0 <<= 25;
	V1 |= V0;
	V0 = (int32_t)T1 < 33;
	if (V0)
	{
		EMU_Write32(A2,V1);
		ZZ_CLOCKCYCLES(42,0x80032D20);
		goto ZZ_32BB4_16C;
	}
	EMU_Write32(A2,V1);
	T2 += 1;
	V0 = (int32_t)T2 < 16;
	if (V0)
	{
		T1 = R0;
		ZZ_CLOCKCYCLES(46,0x80032D10);
		goto ZZ_32BB4_15C;
	}
	T1 = R0;
	RA = EMU_ReadU32(SP + 52); //+ 0x34
	S4 = EMU_ReadU32(SP + 48); //+ 0x30
	S3 = EMU_ReadU32(SP + 44); //+ 0x2C
	S2 = EMU_ReadU32(SP + 40); //+ 0x28
	S1 = EMU_ReadU32(SP + 36); //+ 0x24
	S0 = EMU_ReadU32(SP + 32); //+ 0x20
	SP += 56;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(55);
	ZZ_JUMPREGISTER(0x80032780,ZZ_326D8_A8);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80032BB4,0x80032BE4,ZZ_32BB4);
ZZ_MARK_TARGET(0x80032BE4,0x80032BF8,ZZ_32BB4_30);
ZZ_MARK_TARGET(0x80032BF8,0x80032C10,ZZ_32BB4_44);
ZZ_MARK_TARGET(0x80032C10,0x80032C28,ZZ_32BB4_5C);
ZZ_MARK_TARGET(0x80032C28,0x80032C40,ZZ_32BB4_74);
ZZ_MARK_TARGET(0x80032C40,0x80032C74,ZZ_32BB4_8C);
ZZ_MARK_TARGET(0x80032C74,0x80032CA0,ZZ_32BB4_C0);
ZZ_MARK_TARGET(0x80032CA0,0x80032CCC,ZZ_32BB4_EC);
ZZ_MARK_TARGET(0x80032CCC,0x80032CF8,ZZ_32BB4_118);
ZZ_MARK_TARGET(0x80032CF8,0x80032D10,ZZ_32BB4_144);
ZZ_MARK_TARGET(0x80032D10,0x80032D20,ZZ_32BB4_15C);
ZZ_MARK_TARGET(0x80032D20,0x80032DFC,ZZ_32BB4_16C);