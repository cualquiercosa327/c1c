#ifdef ZZ_INCLUDE_CODE
ZZ_3CA50:
	SP -= 40;
	EMU_Write32(SP + 24,S0); //+ 0x18
	S0 = R0;
	EMU_Write32(SP + 28,S1); //+ 0x1C
	S1 = 0x1;
	EMU_Write32(SP + 32,RA); //+ 0x20
	A1 = S0 << 8;
	ZZ_CLOCKCYCLES(7,0x8003CA6C);
ZZ_3CA50_1C:
	S0 += 1;
	A2 = 0x80050000;
	A2 += 25992;
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 6604); //+ 0x19CC
	A3 = 0x28;
	RA = 0x8003CA8C; //ZZ_3CA50_3C
	EMU_Write32(SP + 16,S1); //+ 0x10
	ZZ_CLOCKCYCLES(8,0x8001A754);
	goto ZZ_1A754;
ZZ_3CA50_3C:
	V0 = (int32_t)S0 < 15;
	if (V0)
	{
		A1 = S0 << 8;
		ZZ_CLOCKCYCLES(3,0x8003CA6C);
		goto ZZ_3CA50_1C;
	}
	A1 = S0 << 8;
	RA = EMU_ReadU32(SP + 32); //+ 0x20
	S1 = EMU_ReadU32(SP + 28); //+ 0x1C
	S0 = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 40;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(9);
	ZZ_JUMPREGISTER(0x8003AD0C,ZZ_3AC2C_E0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003CA50,0x8003CA6C,ZZ_3CA50);
ZZ_MARK_TARGET(0x8003CA6C,0x8003CA8C,ZZ_3CA50_1C);
ZZ_MARK_TARGET(0x8003CA8C,0x8003CAB0,ZZ_3CA50_3C);
