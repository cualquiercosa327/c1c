#ifdef ZZ_INCLUDE_CODE
ZZ_2D18C:
	SP -= 64;
	EMU_Write32(SP + 40,S0); //+ 0x28
	S0 = A0;
	EMU_Write32(SP + 44,S1); //+ 0x2C
	S1 = A1;
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 30996); //+ 0x7914
	EMU_Write32(SP + 56,RA); //+ 0x38
	EMU_Write32(SP + 52,S3); //+ 0x34
	RA = 0x8002D1B8; //ZZ_2D18C_2C
	EMU_Write32(SP + 48,S2); //+ 0x30
	ZZ_CLOCKCYCLES(11,0x80026DD4);
	goto ZZ_26DD4;
ZZ_2D18C_2C:
	V1 = V0;
	V0 = (int32_t)V1 < -254;
	if (V0)
	{
		ZZ_CLOCKCYCLES(4,0x8002D2CC);
		goto ZZ_2D18C_140;
	}
	V0 = EMU_ReadU32(S0 + 40); //+ 0x28
	S3 = EMU_ReadU32(V0 + 20); //+ 0x14
	A0 = EMU_ReadU32(S0 + 12); //+ 0xC
	V1 = EMU_ReadU32(S3 + 4); //+ 0x4
	V0 = EMU_ReadU32(S1 + 4); //+ 0x4
	V1 <<= 8;
	V1 = V1 - A0;
	V0 = (int32_t)V0 < (int32_t)V1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(15,0x8002D2D0);
		goto ZZ_2D18C_144;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 15044); //+ 0xFFFFC53C
	V1 = EMU_ReadU32(V0 + 4); //+ 0x4
	V0 = 0x17;
	if (V1 != V0)
	{
		S2 = 0x1;
		ZZ_CLOCKCYCLES(22,0x8002D230);
		goto ZZ_2D18C_A4;
	}
	S2 = 0x1;
	A0 = R0;
	A1 = S0;
	A2 = 0x2100;
	A3 = 0x1;
	V0 = SP + 24;
	EMU_Write32(SP + 24,R0); //+ 0x18
	RA = 0x8002D230; //ZZ_2D18C_A4
	EMU_Write32(SP + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(30,0x80024040);
	goto ZZ_24040;
ZZ_2D18C_A4:
	V0 = EMU_ReadU32(S0 + 40); //+ 0x28
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	V0 = EMU_ReadU32(V0 + 764); //+ 0x2FC
	V0 &= 0x2;
	if (!V0)
	{
		V0 = 0x2;
		ZZ_CLOCKCYCLES(9,0x8002D288);
		goto ZZ_2D18C_FC;
	}
	V0 = 0x2;
	V1 = EMU_ReadU32(S0 + 296); //+ 0x128
	if (V1 == V0)
	{
		A0 = R0;
		ZZ_CLOCKCYCLES(13,0x8002D288);
		goto ZZ_2D18C_FC;
	}
	A0 = R0;
	A1 = S0;
	A2 = 0x900;
	A3 = 0x1;
	V0 = 0x6400;
	EMU_Write32(SP + 28,V0); //+ 0x1C
	V0 = SP + 28;
	RA = 0x8002D284; //ZZ_2D18C_F8
	EMU_Write32(SP + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(21,0x80024040);
	goto ZZ_24040;
ZZ_2D18C_F8:
	S2 = R0;
	ZZ_CLOCKCYCLES(1,0x8002D288);
ZZ_2D18C_FC:
	if (!S2)
	{
		ZZ_CLOCKCYCLES(2,0x8002D2D0);
		goto ZZ_2D18C_144;
	}
	V0 = EMU_ReadU32(S3 + 4); //+ 0x4
	V1 = EMU_ReadU32(S0 + 12); //+ 0xC
	V0 <<= 8;
	V0 = V0 - V1;
	EMU_Write32(S1 + 4,V0); //+ 0x4
	V1 = EMU_ReadU32(S0 + 168); //+ 0xA8
	V0 = EMU_ReadU32(S0 + 200); //+ 0xC8
	EMU_Write32(S0 + 168,R0); //+ 0xA8
	V0 |= 0x1;
	EMU_Write32(S0 + 308,V1); //+ 0x134
	EMU_Write32(S0 + 200,V0); //+ 0xC8
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 3588); //+ 0xE04
	EMU_Write32(S0 + 304,V0); //+ 0x130
	ZZ_CLOCKCYCLES(17,0x8002D2D0);
	goto ZZ_2D18C_144;
ZZ_2D18C_140:
	EMU_Write32(S0 + 40,V1); //+ 0x28
	ZZ_CLOCKCYCLES(1,0x8002D2D0);
ZZ_2D18C_144:
	V0 = EMU_ReadU32(S0 + 40); //+ 0x28
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x8002D360);
		goto ZZ_2D18C_1D4;
	}
	V1 = EMU_ReadU32(V0 + 16); //+ 0x10
	V0 = EMU_ReadU32(V1 + 764); //+ 0x2FC
	V0 &= 0x4;
	if (!V0)
	{
		V0 = -255;
		ZZ_CLOCKCYCLES(11,0x8002D364);
		goto ZZ_2D18C_1D8;
	}
	V0 = -255;
	V0 = EMU_ReadU32(S0 + 132); //+ 0x84
	V1 = EMU_ReadU32(V1 + 768); //+ 0x300
	V0 = (int32_t)V0 < (int32_t)V1;
	if (!V0)
	{
		V0 = -255;
		ZZ_CLOCKCYCLES(17,0x8002D364);
		goto ZZ_2D18C_1D8;
	}
	V0 = -255;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 15044); //+ 0xFFFFC53C
	V1 = EMU_ReadU32(V0 + 4); //+ 0x4
	V0 = 0xF;
	if (V1 == V0)
	{
		A0 = R0;
		ZZ_CLOCKCYCLES(24,0x8002D33C);
		goto ZZ_2D18C_1B0;
	}
	A0 = R0;
	V0 = 0x18;
	if (V1 != V0)
	{
		V0 = -255;
		ZZ_CLOCKCYCLES(27,0x8002D364);
		goto ZZ_2D18C_1D8;
	}
	V0 = -255;
	ZZ_CLOCKCYCLES(27,0x8002D33C);
ZZ_2D18C_1B0:
	V0 = 0x20000;
	V0 |= 0x7100;
	A1 = S0;
	A2 = 0x2100;
	A3 = 0x1;
	EMU_Write32(SP + 32,V0); //+ 0x20
	V0 = SP + 32;
	RA = 0x8002D360; //ZZ_2D18C_1D4
	EMU_Write32(SP + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(9,0x80024040);
	goto ZZ_24040;
ZZ_2D18C_1D4:
	V0 = -255;
	ZZ_CLOCKCYCLES(1,0x8002D364);
ZZ_2D18C_1D8:
	RA = EMU_ReadU32(SP + 56); //+ 0x38
	S3 = EMU_ReadU32(SP + 52); //+ 0x34
	S2 = EMU_ReadU32(SP + 48); //+ 0x30
	S1 = EMU_ReadU32(SP + 44); //+ 0x2C
	S0 = EMU_ReadU32(SP + 40); //+ 0x28
	SP += 64;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x8002D5EC,ZZ_2D384_268);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8002D18C,0x8002D1B8,ZZ_2D18C);
ZZ_MARK_TARGET(0x8002D1B8,0x8002D230,ZZ_2D18C_2C);
ZZ_MARK_TARGET(0x8002D230,0x8002D284,ZZ_2D18C_A4);
ZZ_MARK_TARGET(0x8002D284,0x8002D288,ZZ_2D18C_F8);
ZZ_MARK_TARGET(0x8002D288,0x8002D2CC,ZZ_2D18C_FC);
ZZ_MARK_TARGET(0x8002D2CC,0x8002D2D0,ZZ_2D18C_140);
ZZ_MARK_TARGET(0x8002D2D0,0x8002D33C,ZZ_2D18C_144);
ZZ_MARK_TARGET(0x8002D33C,0x8002D360,ZZ_2D18C_1B0);
ZZ_MARK_TARGET(0x8002D360,0x8002D364,ZZ_2D18C_1D4);
ZZ_MARK_TARGET(0x8002D364,0x8002D384,ZZ_2D18C_1D8);
