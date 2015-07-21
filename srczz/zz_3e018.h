#ifdef ZZ_INCLUDE_CODE
Main:
	V0 = 0x80050000;
	V0 += 26008;
	V1 = 0x80060000;
	V1 += 6776;
	ZZ_CLOCKCYCLES(4,0x8003E028);
Main_10:
	EMU_Write32(V0,R0);
	V0 += 4;
	AT = V0 < V1;
	if (AT)
	{
		ZZ_CLOCKCYCLES(5,0x8003E028);
		goto Main_10;
	}
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 25608); //+ 0x6408
	V0 = EMU_CheckedAdd(V0,-8);
	T0 = 0x80000000;
	SP = V0 | T0;
	A0 = 0x80060000;
	A0 += 6776;
	A0 <<= 3;
	A0 >>= 3;
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 25604); //+ 0x6404
	A1 = V0 - V1;
	A1 = A1 - A0;
	AT = 0x80050000;
	EMU_Write32(AT + 14576,A1); //+ 0x38F0
	A0 |= T0;
	AT = 0x80050000;
	EMU_Write32(AT + 14572,A0); //+ 0x38EC
	AT = 0x80050000;
	EMU_Write32(AT + 26260,RA); //+ 0x6694
	GP = 0x80050000;
	GP += 25596;
	FP = SP;
	RA = 0x8003E0A8; //Main_90
	A0 = EMU_CheckedAdd(A0,4);
	ZZ_CLOCKCYCLES(32,0x80011A18);
	goto ZZ_11A18;
Main_90:
	RA = 0x80050000;
	RA = EMU_ReadU32(RA + 26260); //+ 0x6694
	RA = 0x8003E0BC; //Main_A4
	ZZ_CLOCKCYCLES(5,0x80011D88);
	goto ZZ_11D88;
Main_A4:
	EMU_Break(1);
#endif
ZZ_MARK_TARGET(0x8003E018,0x8003E028,Main);
ZZ_MARK_TARGET(0x8003E028,0x8003E0A8,Main_10);
ZZ_MARK_TARGET(0x8003E0A8,0x8003E0BC,Main_90);
ZZ_MARK_TARGET(0x8003E0BC,0x8003E0C0,Main_A4);