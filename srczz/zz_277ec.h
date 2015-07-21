#ifdef ZZ_INCLUDE_CODE
ZZ_277EC:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 30996); //+ 0x7914
	SP -= 104;
	EMU_Write32(SP + 80,S2); //+ 0x50
	EMU_Write32(SP + 92,S5); //+ 0x5C
	S5 = A1;
	EMU_Write32(SP + 96,RA); //+ 0x60
	EMU_Write32(SP + 88,S4); //+ 0x58
	EMU_Write32(SP + 84,S3); //+ 0x54
	EMU_Write32(SP + 76,S1); //+ 0x4C
	EMU_Write32(SP + 72,S0); //+ 0x48
	V1 = EMU_ReadU32(S5);
	S3 = EMU_ReadU32(V0 + 16); //+ 0x10
	if (V1)
	{
		S2 = A0;
		ZZ_CLOCKCYCLES(15,0x80027848);
		goto ZZ_277EC_5C;
	}
	S2 = A0;
	V0 = EMU_ReadU32(S5 + 4); //+ 0x4
	if (V0)
	{
		ZZ_CLOCKCYCLES(19,0x80027848);
		goto ZZ_277EC_5C;
	}
	V0 = EMU_ReadU32(S5 + 8); //+ 0x8
	if (!V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(23,0x800279E0);
		goto ZZ_277EC_1F4;
	}
	V0 = R0;
	ZZ_CLOCKCYCLES(23,0x80027848);
ZZ_277EC_5C:
	V0 = EMU_ReadU32(S2);
	V1 = EMU_ReadU32(S2 + 4); //+ 0x4
	A0 = EMU_ReadU32(S2 + 8); //+ 0x8
	EMU_Write32(SP + 24,V0); //+ 0x18
	EMU_Write32(SP + 28,V1); //+ 0x1C
	EMU_Write32(SP + 32,A0); //+ 0x20
	V0 = EMU_ReadU32(S3 + 528); //+ 0x210
	if ((int32_t)V0 <= 0)
	{
		S1 = R0;
		ZZ_CLOCKCYCLES(10,0x8002793C);
		goto ZZ_277EC_150;
	}
	S1 = R0;
	S0 = 0x214;
	ZZ_CLOCKCYCLES(11,0x80027874);
ZZ_277EC_88:
	RA = 0x8002787C; //ZZ_277EC_90
	A0 = S3 + S0;
	ZZ_CLOCKCYCLES(2,0x80015A98);
	goto ZZ_15A98;
ZZ_277EC_90:
	T3 = V0;
	V1 = EMU_ReadU32(T3 + 20); //+ 0x14
	A0 = EMU_ReadU32(V1);
	A3 = EMU_ReadU32(S2);
	V0 = A0 << 8;
	V0 = (int32_t)A3 < (int32_t)V0;
	if (V0)
	{
		T2 = R0;
		ZZ_CLOCKCYCLES(9,0x8002791C);
		goto ZZ_277EC_130;
	}
	T2 = R0;
	A1 = EMU_ReadU32(V1 + 4); //+ 0x4
	T0 = EMU_ReadU32(S2 + 4); //+ 0x4
	V0 = A1 << 8;
	V0 = (int32_t)T0 < (int32_t)V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(15,0x8002791C);
		goto ZZ_277EC_130;
	}
	A2 = EMU_ReadU32(V1 + 8); //+ 0x8
	T1 = EMU_ReadU32(S2 + 8); //+ 0x8
	V0 = A2 << 8;
	V0 = (int32_t)T1 < (int32_t)V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(21,0x8002791C);
		goto ZZ_277EC_130;
	}
	V0 = EMU_ReadU32(V1 + 12); //+ 0xC
	V0 += A0;
	V0 <<= 8;
	V0 = (int32_t)A3 < (int32_t)V0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(28,0x8002791C);
		goto ZZ_277EC_130;
	}
	V0 = EMU_ReadU32(V1 + 16); //+ 0x10
	V0 += A1;
	V0 <<= 8;
	V0 = (int32_t)T0 < (int32_t)V0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(35,0x8002791C);
		goto ZZ_277EC_130;
	}
	V0 = EMU_ReadU32(V1 + 20); //+ 0x14
	V0 += A2;
	V0 <<= 8;
	T2 = (int32_t)T1 < (int32_t)V0;
	ZZ_CLOCKCYCLES(40,0x8002791C);
ZZ_277EC_130:
	if (T2)
	{
		A2 = SP + 40;
		ZZ_CLOCKCYCLES(2,0x80027958);
		goto ZZ_277EC_16C;
	}
	A2 = SP + 40;
	V0 = EMU_ReadU32(S3 + 528); //+ 0x210
	S1 += 1;
	V0 = (int32_t)S1 < (int32_t)V0;
	if (V0)
	{
		S0 += 4;
		ZZ_CLOCKCYCLES(7,0x80027874);
		goto ZZ_277EC_88;
	}
	S0 += 4;
	ZZ_CLOCKCYCLES(7,0x80027938);
ZZ_277EC_14C:
	V0 = EMU_ReadU32(S3 + 528); //+ 0x210
	ZZ_CLOCKCYCLES(1,0x8002793C);
ZZ_277EC_150:
	if (S1 == V0)
	{
		ZZ_CLOCKCYCLES(3,0x800279DC);
		goto ZZ_277EC_1F0;
	}
	if (!S4)
	{
		V0 = S4;
		ZZ_CLOCKCYCLES(5,0x80027848);
		goto ZZ_277EC_5C;
	}
	V0 = S4;
	ZZ_CLOCKCYCLES(7,0x800279E0);
	goto ZZ_277EC_1F4;
ZZ_277EC_16C:
	A0 = EMU_ReadU32(T3 + 20); //+ 0x14
	V0 = EMU_ReadU32(A0);
	V0 <<= 8;
	EMU_Write32(SP + 40,V0); //+ 0x28
	V0 = EMU_ReadU32(A0 + 4); //+ 0x4
	V0 <<= 8;
	EMU_Write32(SP + 44,V0); //+ 0x2C
	V0 = EMU_ReadU32(A0 + 8); //+ 0x8
	V0 <<= 8;
	EMU_Write32(SP + 48,V0); //+ 0x30
	V0 = EMU_ReadU32(A0 + 12); //+ 0xC
	V0 <<= 8;
	EMU_Write32(SP + 52,V0); //+ 0x34
	V0 = EMU_ReadU32(A0 + 16); //+ 0x10
	V0 <<= 8;
	EMU_Write32(SP + 56,V0); //+ 0x38
	V0 = EMU_ReadU32(A0 + 20); //+ 0x14
	V0 <<= 8;
	EMU_Write32(SP + 60,V0); //+ 0x3C
	A1 = EMU_ReadU16(A0 + 28); //+ 0x1C
	A3 = S2;
	EMU_Write32(SP + 16,S5); //+ 0x10
	RA = 0x800279D4; //ZZ_277EC_1E8
	EMU_Write32(SP + 20,R0); //+ 0x14
	ZZ_CLOCKCYCLES(31,0x80026FF0);
	goto ZZ_26FF0;
ZZ_277EC_1E8:
	S4 = V0;
	ZZ_CLOCKCYCLES(2,0x80027938);
	goto ZZ_277EC_14C;
ZZ_277EC_1F0:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(1,0x800279E0);
ZZ_277EC_1F4:
	RA = EMU_ReadU32(SP + 96); //+ 0x60
	S5 = EMU_ReadU32(SP + 92); //+ 0x5C
	S4 = EMU_ReadU32(SP + 88); //+ 0x58
	S3 = EMU_ReadU32(SP + 84); //+ 0x54
	S2 = EMU_ReadU32(SP + 80); //+ 0x50
	S1 = EMU_ReadU32(SP + 76); //+ 0x4C
	S0 = EMU_ReadU32(SP + 72); //+ 0x48
	SP += 104;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(10);
	//ZZ_JUMPREGISTER(0x8002389C,ZZ_201DC_36C0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800277EC,0x80027848,ZZ_277EC);
ZZ_MARK_TARGET(0x80027848,0x80027874,ZZ_277EC_5C);
ZZ_MARK_TARGET(0x80027874,0x8002787C,ZZ_277EC_88);
ZZ_MARK_TARGET(0x8002787C,0x8002791C,ZZ_277EC_90);
ZZ_MARK_TARGET(0x8002791C,0x80027938,ZZ_277EC_130);
ZZ_MARK_TARGET(0x80027938,0x8002793C,ZZ_277EC_14C);
ZZ_MARK_TARGET(0x8002793C,0x80027958,ZZ_277EC_150);
ZZ_MARK_TARGET(0x80027958,0x800279D4,ZZ_277EC_16C);
ZZ_MARK_TARGET(0x800279D4,0x800279DC,ZZ_277EC_1E8);
ZZ_MARK_TARGET(0x800279DC,0x800279E0,ZZ_277EC_1F0);
ZZ_MARK_TARGET(0x800279E0,0x80027A08,ZZ_277EC_1F4);
