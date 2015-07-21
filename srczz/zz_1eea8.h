#ifdef ZZ_INCLUDE_CODE
ZZ_1EEA8:
	SP -= 80;
	EMU_Write32(SP + 64,S0); //+ 0x40
	S0 = A0;
	A0 = 0x80060000;
	A0 += 6280;
	EMU_Write32(SP + 76,RA); //+ 0x4C
	EMU_Write32(SP + 72,S2); //+ 0x48
	EMU_Write32(SP + 68,S1); //+ 0x44
	V1 = EMU_ReadU32(A0);
	V0 = V1 + 1;
	EMU_Write32(A0,V0);
	V0 = V1 << 3;
	V0 = V0 - V1;
	V0 <<= 2;
	A0 -= 2688;
	S1 = V0 + A0;
	EMU_Write32(S1 + 24,S0); //+ 0x18
	V0 = EMU_ReadU32(S0 + 200); //+ 0xC8
	V0 &= 0x8000;
	if (!V0)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(23,0x8001EF20);
		goto ZZ_1EEA8_78;
	}
	A0 = S0;
	RA = 0x8001EF0C; //ZZ_1EEA8_64
	A1 = S0 + 152;
	ZZ_CLOCKCYCLES(25,0x8001D33C);
	goto ZZ_1D33C;
ZZ_1EEA8_64:
	V1 = 0xFFFF0000;
	V0 = EMU_ReadU32(S0 + 200); //+ 0xC8
	V1 |= 0x7FFF;
	V0 &= V1;
	EMU_Write32(S0 + 200,V0); //+ 0xC8
	ZZ_CLOCKCYCLES(5,0x8001EF20);
ZZ_1EEA8_78:
	A0 = EMU_ReadU32(S0 + 264); //+ 0x108
	V1 = EMU_ReadU8(A0);
	V0 = 0x1;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(6,0x8001EFAC);
		goto ZZ_1EEA8_104;
	}
	V0 = EMU_ReadU32(S0 + 128); //+ 0x80
	V1 = EMU_ReadU32(S0 + 8); //+ 0x8
	V0 += V1;
	EMU_Write32(S1,V0);
	V0 = EMU_ReadU32(S0 + 132); //+ 0x84
	V1 = EMU_ReadU32(S0 + 12); //+ 0xC
	V0 += V1;
	EMU_Write32(S1 + 4,V0); //+ 0x4
	V0 = EMU_ReadU32(S0 + 136); //+ 0x88
	V1 = EMU_ReadU32(S0 + 16); //+ 0x10
	V0 += V1;
	EMU_Write32(S1 + 8,V0); //+ 0x8
	V0 = EMU_ReadU32(S0 + 128); //+ 0x80
	V1 = EMU_ReadU32(S0 + 20); //+ 0x14
	V0 += V1;
	EMU_Write32(S1 + 12,V0); //+ 0xC
	V0 = EMU_ReadU32(S0 + 132); //+ 0x84
	V1 = EMU_ReadU32(S0 + 24); //+ 0x18
	V0 += V1;
	EMU_Write32(S1 + 16,V0); //+ 0x10
	V0 = EMU_ReadU32(S0 + 136); //+ 0x88
	V1 = EMU_ReadU32(S0 + 28); //+ 0x1C
	V0 += V1;
	ZZ_CLOCKCYCLES(35,0x8001F234);
	goto ZZ_1EEA8_38C;
ZZ_1EEA8_104:
	RA = 0x8001EFB4; //ZZ_1EEA8_10C
	A0 += 4;
	ZZ_CLOCKCYCLES(2,0x80015A98);
	goto ZZ_15A98;
ZZ_1EEA8_10C:
	V1 = EMU_ReadU32(S0 + 268); //+ 0x10C
	A0 = EMU_ReadU32(S0 + 144); //+ 0x90
	V1 >>= 8;
	V1 <<= 2;
	V1 += V0;
	S2 = A0 & 0xFFF;
	A0 = EMU_ReadU32(V1 + 16); //+ 0x10
	if (S2)
	{
		V0 = SP + 24;
		ZZ_CLOCKCYCLES(9,0x8001F028);
		goto ZZ_1EEA8_180;
	}
	V0 = SP + 24;
	V1 = EMU_ReadU32(S0 + 152); //+ 0x98
	V0 = 0x1000;
	if (V1 != V0)
	{
		V0 = SP + 24;
		ZZ_CLOCKCYCLES(13,0x8001F028);
		goto ZZ_1EEA8_180;
	}
	V0 = SP + 24;
	V0 = EMU_ReadU32(S0 + 128); //+ 0x80
	V1 = EMU_ReadU32(A0 + 44); //+ 0x2C
	V0 += V1;
	EMU_Write32(SP + 24,V0); //+ 0x18
	V0 = EMU_ReadU32(S0 + 132); //+ 0x84
	V1 = EMU_ReadU32(A0 + 48); //+ 0x30
	V0 += V1;
	EMU_Write32(SP + 28,V0); //+ 0x1C
	V0 = EMU_ReadU32(S0 + 136); //+ 0x88
	V1 = EMU_ReadU32(A0 + 52); //+ 0x34
	V0 += V1;
	EMU_Write32(SP + 32,V0); //+ 0x20
	ZZ_CLOCKCYCLES(29,0x8001F040);
	goto ZZ_1EEA8_198;
ZZ_1EEA8_180:
	EMU_Write32(SP + 16,V0); //+ 0x10
	A0 += 44;
	A1 = S0 + 128;
	A2 = S0 + 140;
	RA = 0x8001F040; //ZZ_1EEA8_198
	A3 = S0 + 152;
	ZZ_CLOCKCYCLES(6,0x8002465C);
	goto ZZ_2465C;
ZZ_1EEA8_198:
	V0 = S2 - 512;
	V0 = V0 < 3073;
	if (V0)
	{
		V0 = (int32_t)S2 < 1536;
		ZZ_CLOCKCYCLES(4,0x8001F0C4);
		goto ZZ_1EEA8_21C;
	}
	V0 = (int32_t)S2 < 1536;
	V0 = EMU_ReadU32(SP + 24); //+ 0x18
	V1 = EMU_ReadU32(S0 + 8); //+ 0x8
	V0 += V1;
	EMU_Write32(S1,V0);
	V0 = EMU_ReadU32(SP + 28); //+ 0x1C
	V1 = EMU_ReadU32(S0 + 12); //+ 0xC
	V0 += V1;
	EMU_Write32(S1 + 4,V0); //+ 0x4
	V0 = EMU_ReadU32(SP + 32); //+ 0x20
	V1 = EMU_ReadU32(S0 + 16); //+ 0x10
	V0 += V1;
	EMU_Write32(S1 + 8,V0); //+ 0x8
	V0 = EMU_ReadU32(SP + 24); //+ 0x18
	V1 = EMU_ReadU32(S0 + 20); //+ 0x14
	V0 += V1;
	EMU_Write32(S1 + 12,V0); //+ 0xC
	V0 = EMU_ReadU32(SP + 28); //+ 0x1C
	V1 = EMU_ReadU32(S0 + 24); //+ 0x18
	V0 += V1;
	EMU_Write32(S1 + 16,V0); //+ 0x10
	V0 = EMU_ReadU32(SP + 32); //+ 0x20
	V1 = EMU_ReadU32(S0 + 28); //+ 0x1C
	V0 += V1;
	ZZ_CLOCKCYCLES(33,0x8001F234);
	goto ZZ_1EEA8_38C;
ZZ_1EEA8_21C:
	if (!V0)
	{
		ZZ_CLOCKCYCLES(2,0x8001F140);
		goto ZZ_1EEA8_298;
	}
	V0 = EMU_ReadU32(SP + 24); //+ 0x18
	V1 = EMU_ReadU32(S0 + 16); //+ 0x10
	V0 += V1;
	EMU_Write32(S1,V0);
	V0 = EMU_ReadU32(SP + 24); //+ 0x18
	V1 = EMU_ReadU32(S0 + 28); //+ 0x1C
	V0 += V1;
	EMU_Write32(S1 + 12,V0); //+ 0xC
	V0 = EMU_ReadU32(SP + 28); //+ 0x1C
	V1 = EMU_ReadU32(S0 + 12); //+ 0xC
	V0 += V1;
	EMU_Write32(S1 + 4,V0); //+ 0x4
	V0 = EMU_ReadU32(SP + 28); //+ 0x1C
	V1 = EMU_ReadU32(S0 + 24); //+ 0x18
	V0 += V1;
	EMU_Write32(S1 + 16,V0); //+ 0x10
	V0 = EMU_ReadU32(SP + 32); //+ 0x20
	V1 = EMU_ReadU32(S0 + 20); //+ 0x14
	V0 = V0 - V1;
	EMU_Write32(S1 + 8,V0); //+ 0x8
	V0 = EMU_ReadU32(SP + 32); //+ 0x20
	V1 = EMU_ReadU32(S0 + 8); //+ 0x8
	V0 = V0 - V1;
	ZZ_CLOCKCYCLES(31,0x8001F234);
	goto ZZ_1EEA8_38C;
ZZ_1EEA8_298:
	V0 = (int32_t)S2 < 2560;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(3,0x8001F1C0);
		goto ZZ_1EEA8_318;
	}
	V0 = EMU_ReadU32(SP + 24); //+ 0x18
	V1 = EMU_ReadU32(S0 + 8); //+ 0x8
	V0 += V1;
	EMU_Write32(S1,V0);
	V0 = EMU_ReadU32(SP + 24); //+ 0x18
	V1 = EMU_ReadU32(S0 + 20); //+ 0x14
	V0 += V1;
	EMU_Write32(S1 + 12,V0); //+ 0xC
	V0 = EMU_ReadU32(SP + 28); //+ 0x1C
	V1 = EMU_ReadU32(S0 + 12); //+ 0xC
	V0 += V1;
	EMU_Write32(S1 + 4,V0); //+ 0x4
	V0 = EMU_ReadU32(SP + 28); //+ 0x1C
	V1 = EMU_ReadU32(S0 + 24); //+ 0x18
	V0 += V1;
	EMU_Write32(S1 + 16,V0); //+ 0x10
	V0 = EMU_ReadU32(SP + 32); //+ 0x20
	V1 = EMU_ReadU32(S0 + 28); //+ 0x1C
	V0 = V0 - V1;
	EMU_Write32(S1 + 8,V0); //+ 0x8
	V0 = EMU_ReadU32(SP + 32); //+ 0x20
	V1 = EMU_ReadU32(S0 + 16); //+ 0x10
	V0 = V0 - V1;
	ZZ_CLOCKCYCLES(32,0x8001F234);
	goto ZZ_1EEA8_38C;
ZZ_1EEA8_318:
	V0 = EMU_ReadU32(SP + 24); //+ 0x18
	V1 = EMU_ReadU32(S0 + 28); //+ 0x1C
	V0 = V0 - V1;
	EMU_Write32(S1,V0);
	V0 = EMU_ReadU32(SP + 24); //+ 0x18
	V1 = EMU_ReadU32(S0 + 16); //+ 0x10
	V0 = V0 - V1;
	EMU_Write32(S1 + 12,V0); //+ 0xC
	V0 = EMU_ReadU32(SP + 28); //+ 0x1C
	V1 = EMU_ReadU32(S0 + 12); //+ 0xC
	V0 += V1;
	EMU_Write32(S1 + 4,V0); //+ 0x4
	V0 = EMU_ReadU32(SP + 28); //+ 0x1C
	V1 = EMU_ReadU32(S0 + 24); //+ 0x18
	V0 += V1;
	EMU_Write32(S1 + 16,V0); //+ 0x10
	V0 = EMU_ReadU32(SP + 32); //+ 0x20
	V1 = EMU_ReadU32(S0 + 8); //+ 0x8
	V0 += V1;
	EMU_Write32(S1 + 8,V0); //+ 0x8
	V0 = EMU_ReadU32(SP + 32); //+ 0x20
	V1 = EMU_ReadU32(S0 + 20); //+ 0x14
	V0 += V1;
	ZZ_CLOCKCYCLES(29,0x8001F234);
ZZ_1EEA8_38C:
	EMU_Write32(S1 + 20,V0); //+ 0x14
	A1 = EMU_ReadU32(GP + 696); //+ 0x2B8
	V0 = EMU_ReadU32(S0 + 252); //+ 0xFC
	V1 = EMU_ReadU32(A1 + 252); //+ 0xFC
	if (V1 != V0)
	{
		S2 = SP + 40;
		ZZ_CLOCKCYCLES(7,0x8001F2F0);
		goto ZZ_1EEA8_448;
	}
	S2 = SP + 40;
	V0 = EMU_ReadU32(A1 + 128); //+ 0x80
	V1 = EMU_ReadU32(A1 + 8); //+ 0x8
	V0 += V1;
	EMU_Write32(SP + 40,V0); //+ 0x28
	V0 = EMU_ReadU32(A1 + 132); //+ 0x84
	V1 = EMU_ReadU32(A1 + 12); //+ 0xC
	V0 += V1;
	EMU_Write32(SP + 44,V0); //+ 0x2C
	V0 = EMU_ReadU32(A1 + 136); //+ 0x88
	V1 = EMU_ReadU32(A1 + 16); //+ 0x10
	V0 += V1;
	EMU_Write32(SP + 48,V0); //+ 0x30
	V0 = EMU_ReadU32(A1 + 128); //+ 0x80
	V1 = EMU_ReadU32(A1 + 20); //+ 0x14
	V0 += V1;
	EMU_Write32(SP + 52,V0); //+ 0x34
	V0 = EMU_ReadU32(A1 + 132); //+ 0x84
	V1 = EMU_ReadU32(A1 + 24); //+ 0x18
	A0 = S2;
	V0 += V1;
	EMU_Write32(SP + 56,V0); //+ 0x38
	V0 = EMU_ReadU32(A1 + 136); //+ 0x88
	V1 = EMU_ReadU32(A1 + 28); //+ 0x1C
	A1 = S1;
	V0 += V1;
	RA = 0x8001F2CC; //ZZ_1EEA8_424
	EMU_Write32(SP + 60,V0); //+ 0x3C
	ZZ_CLOCKCYCLES(38,0x80026CA8);
	goto ZZ_26CA8;
ZZ_1EEA8_424:
	if (!V0)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(2,0x8001F2EC);
		goto ZZ_1EEA8_444;
	}
	A0 = S0;
	A1 = S1;
	A2 = EMU_ReadU32(GP + 696); //+ 0x2B8
	RA = 0x8001F2E4; //ZZ_1EEA8_43C
	A3 = S2;
	ZZ_CLOCKCYCLES(6,0x80024AD4);
	goto ZZ_24AD4;
ZZ_1EEA8_43C:
	ZZ_CLOCKCYCLES(2,0x8001F2F0);
	goto ZZ_1EEA8_448;
ZZ_1EEA8_444:
	EMU_Write32(S0 + 120,R0); //+ 0x78
	ZZ_CLOCKCYCLES(1,0x8001F2F0);
ZZ_1EEA8_448:
	RA = EMU_ReadU32(SP + 76); //+ 0x4C
	S2 = EMU_ReadU32(SP + 72); //+ 0x48
	S1 = EMU_ReadU32(SP + 68); //+ 0x44
	S0 = EMU_ReadU32(SP + 64); //+ 0x40
	SP += 80;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x8001FAFC,ZZ_1F30C_7F0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001EEA8,0x8001EF0C,ZZ_1EEA8);
ZZ_MARK_TARGET(0x8001EF0C,0x8001EF20,ZZ_1EEA8_64);
ZZ_MARK_TARGET(0x8001EF20,0x8001EFAC,ZZ_1EEA8_78);
ZZ_MARK_TARGET(0x8001EFAC,0x8001EFB4,ZZ_1EEA8_104);
ZZ_MARK_TARGET(0x8001EFB4,0x8001F028,ZZ_1EEA8_10C);
ZZ_MARK_TARGET(0x8001F028,0x8001F040,ZZ_1EEA8_180);
ZZ_MARK_TARGET(0x8001F040,0x8001F0C4,ZZ_1EEA8_198);
ZZ_MARK_TARGET(0x8001F0C4,0x8001F140,ZZ_1EEA8_21C);
ZZ_MARK_TARGET(0x8001F140,0x8001F1C0,ZZ_1EEA8_298);
ZZ_MARK_TARGET(0x8001F1C0,0x8001F234,ZZ_1EEA8_318);
ZZ_MARK_TARGET(0x8001F234,0x8001F2CC,ZZ_1EEA8_38C);
ZZ_MARK_TARGET(0x8001F2CC,0x8001F2E4,ZZ_1EEA8_424);
ZZ_MARK_TARGET(0x8001F2E4,0x8001F2EC,ZZ_1EEA8_43C);
ZZ_MARK_TARGET(0x8001F2EC,0x8001F2F0,ZZ_1EEA8_444);
ZZ_MARK_TARGET(0x8001F2F0,0x8001F30C,ZZ_1EEA8_448);
