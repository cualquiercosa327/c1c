#ifdef ZZ_INCLUDE_CODE
ZZ_1D33C:
	SP -= 56;
	EMU_Write32(SP + 40,S0); //+ 0x28
	S0 = A0;
	EMU_Write32(SP + 48,RA); //+ 0x30
	EMU_Write32(SP + 44,S1); //+ 0x2C
	A0 = EMU_ReadU32(S0 + 264); //+ 0x108
	if (!A0)
	{
		S1 = A1;
		ZZ_CLOCKCYCLES(9,0x8001D5D4);
		goto ZZ_1D33C_298;
	}
	S1 = A1;
	V1 = EMU_ReadU8(A0);
	V0 = 0x4;
	if (V1 == V0)
	{
		V1 = 0xFF800000;
		ZZ_CLOCKCYCLES(13,0x8001D3A0);
		goto ZZ_1D33C_64;
	}
	V1 = 0xFF800000;
	V1 |= 0x3;
	A0 += 4;
	V1 &= A0;
	V0 = 0x80000000;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(19,0x8001D5D4);
		goto ZZ_1D33C_298;
	}
	RA = 0x8001D390; //ZZ_1D33C_54
	ZZ_CLOCKCYCLES(21,0x80015A98);
	goto ZZ_15A98;
ZZ_1D33C_54:
	V0 = (int32_t)V0 < -254;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(3,0x8001D5D4);
		goto ZZ_1D33C_298;
	}
	A0 = EMU_ReadU32(S0 + 264); //+ 0x108
	ZZ_CLOCKCYCLES(4,0x8001D3A0);
ZZ_1D33C_64:
	V1 = EMU_ReadU8(A0);
	V0 = 0x1;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001D520);
		goto ZZ_1D33C_1E4;
	}
	RA = 0x8001D3BC; //ZZ_1D33C_80
	A0 += 4;
	ZZ_CLOCKCYCLES(7,0x80015A98);
	goto ZZ_15A98;
ZZ_1D33C_80:
	V1 = EMU_ReadU32(S0 + 268); //+ 0x10C
	A1 = EMU_ReadU32(S1);
	V1 >>= 8;
	V1 <<= 2;
	V1 += V0;
	A0 = EMU_ReadU32(V1 + 16); //+ 0x10
	if ((int32_t)A1 >= 0)
	{
		V0 = -A1;
		ZZ_CLOCKCYCLES(8,0x8001D3E0);
		goto ZZ_1D33C_A4;
	}
	V0 = -A1;
	EMU_Write32(S1,V0);
	ZZ_CLOCKCYCLES(9,0x8001D3E0);
ZZ_1D33C_A4:
	V0 = EMU_ReadU32(GP + 696); //+ 0x2B8
	if (S0 != V0)
	{
		ZZ_CLOCKCYCLES(4,0x8001D46C);
		goto ZZ_1D33C_130;
	}
	V0 = EMU_ReadU32(A0 + 44); //+ 0x2C
	V1 = EMU_ReadU32(A0 + 20); //+ 0x14
	V0 += V1;
	EMU_Write32(SP + 16,V0); //+ 0x10
	V0 = EMU_ReadU32(A0 + 48); //+ 0x30
	V1 = EMU_ReadU32(A0 + 24); //+ 0x18
	V0 += V1;
	EMU_Write32(SP + 20,V0); //+ 0x14
	V0 = EMU_ReadU32(A0 + 52); //+ 0x34
	V1 = EMU_ReadU32(A0 + 28); //+ 0x1C
	V0 += V1;
	EMU_Write32(SP + 24,V0); //+ 0x18
	V0 = EMU_ReadU32(A0 + 44); //+ 0x2C
	V1 = EMU_ReadU32(A0 + 32); //+ 0x20
	V0 += V1;
	EMU_Write32(SP + 28,V0); //+ 0x1C
	V0 = EMU_ReadU32(A0 + 48); //+ 0x30
	V1 = EMU_ReadU32(A0 + 36); //+ 0x24
	V0 += V1;
	EMU_Write32(SP + 32,V0); //+ 0x20
	V0 = EMU_ReadU32(A0 + 52); //+ 0x34
	V1 = EMU_ReadU32(A0 + 40); //+ 0x28
	A0 = SP + 16;
	V0 += V1;
	EMU_Write32(SP + 36,V0); //+ 0x24
	ZZ_CLOCKCYCLES(35,0x8001D470);
	goto ZZ_1D33C_134;
ZZ_1D33C_130:
	A0 += 20;
	ZZ_CLOCKCYCLES(1,0x8001D470);
ZZ_1D33C_134:
	V0 = EMU_ReadU32(A0);
	V1 = EMU_ReadU32(S1);
	V0 = (int32_t)V0 >> 8;
	EMU_SMultiply(V0,V1);
	V0 = LO;
	V0 = (int32_t)V0 >> 4;
	EMU_Write32(S0 + 8,V0); //+ 0x8
	V0 = EMU_ReadU32(A0 + 4); //+ 0x4
	V1 = EMU_ReadU32(S1 + 4); //+ 0x4
	V0 = (int32_t)V0 >> 8;
	EMU_SMultiply(V0,V1);
	V0 = LO;
	V0 = (int32_t)V0 >> 4;
	EMU_Write32(S0 + 12,V0); //+ 0xC
	V0 = EMU_ReadU32(A0 + 8); //+ 0x8
	V1 = EMU_ReadU32(S1 + 8); //+ 0x8
	V0 = (int32_t)V0 >> 8;
	EMU_SMultiply(V0,V1);
	V0 = LO;
	V0 = (int32_t)V0 >> 4;
	EMU_Write32(S0 + 16,V0); //+ 0x10
	V0 = EMU_ReadU32(A0 + 12); //+ 0xC
	V1 = EMU_ReadU32(S1);
	V0 = (int32_t)V0 >> 8;
	EMU_SMultiply(V0,V1);
	V0 = LO;
	V0 = (int32_t)V0 >> 4;
	EMU_Write32(S0 + 20,V0); //+ 0x14
	V0 = EMU_ReadU32(A0 + 16); //+ 0x10
	V1 = EMU_ReadU32(S1 + 4); //+ 0x4
	V0 = (int32_t)V0 >> 8;
	EMU_SMultiply(V0,V1);
	V0 = LO;
	V0 = (int32_t)V0 >> 4;
	EMU_Write32(S0 + 24,V0); //+ 0x18
	V0 = EMU_ReadU32(A0 + 20); //+ 0x14
	V1 = EMU_ReadU32(S1 + 8); //+ 0x8
	V0 = (int32_t)V0 >> 8;
	EMU_SMultiply(V0,V1);
	V0 = LO;
	V0 = (int32_t)V0 >> 4;
	EMU_Write32(S0 + 28,V0); //+ 0x1C
	EMU_Write32(S1,A1);
	ZZ_CLOCKCYCLES(44,0x8001D5B0);
	goto ZZ_1D33C_274;
ZZ_1D33C_1E4:
	V1 = EMU_ReadU32(S1);
	if ((int32_t)V1 >= 0)
	{
		ZZ_CLOCKCYCLES(4,0x8001D534);
		goto ZZ_1D33C_1F8;
	}
	V1 = -V1;
	ZZ_CLOCKCYCLES(5,0x8001D534);
ZZ_1D33C_1F8:
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 3;
	V0 += V1;
	V0 <<= 3;
	V0 = (int32_t)V0 >> 4;
	EMU_Write32(S0 + 20,V0); //+ 0x14
	V0 = -V0;
	EMU_Write32(S0 + 8,V0); //+ 0x8
	V1 = EMU_ReadU32(S1 + 4); //+ 0x4
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 3;
	V0 += V1;
	V0 <<= 3;
	V0 = (int32_t)V0 >> 4;
	EMU_Write32(S0 + 24,V0); //+ 0x18
	V0 = -V0;
	EMU_Write32(S0 + 12,V0); //+ 0xC
	V1 = EMU_ReadU32(S1 + 8); //+ 0x8
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 3;
	V0 += V1;
	V0 <<= 3;
	V0 = (int32_t)V0 >> 4;
	EMU_Write32(S0 + 28,V0); //+ 0x1C
	V0 = -V0;
	EMU_Write32(S0 + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(31,0x8001D5B0);
ZZ_1D33C_274:
	V0 = EMU_ReadU32(S1);
	EMU_Write32(S0 + 152,V0); //+ 0x98
	V0 = EMU_ReadU32(S1 + 4); //+ 0x4
	EMU_Write32(S0 + 156,V0); //+ 0x9C
	V0 = EMU_ReadU32(S1 + 8); //+ 0x8
	EMU_Write32(S0 + 160,V0); //+ 0xA0
	ZZ_CLOCKCYCLES(9,0x8001D5D4);
ZZ_1D33C_298:
	RA = EMU_ReadU32(SP + 48); //+ 0x30
	S1 = EMU_ReadU32(SP + 44); //+ 0x2C
	S0 = EMU_ReadU32(SP + 40); //+ 0x28
	SP += 56;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x8001EF0C,ZZ_1EEA8_64);
	//ZZ_JUMPREGISTER(0x80023218,ZZ_201DC_303C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001D33C,0x8001D390,ZZ_1D33C);
ZZ_MARK_TARGET(0x8001D390,0x8001D3A0,ZZ_1D33C_54);
ZZ_MARK_TARGET(0x8001D3A0,0x8001D3BC,ZZ_1D33C_64);
ZZ_MARK_TARGET(0x8001D3BC,0x8001D3E0,ZZ_1D33C_80);
ZZ_MARK_TARGET(0x8001D3E0,0x8001D46C,ZZ_1D33C_A4);
ZZ_MARK_TARGET(0x8001D46C,0x8001D470,ZZ_1D33C_130);
ZZ_MARK_TARGET(0x8001D470,0x8001D520,ZZ_1D33C_134);
ZZ_MARK_TARGET(0x8001D520,0x8001D534,ZZ_1D33C_1E4);
ZZ_MARK_TARGET(0x8001D534,0x8001D5B0,ZZ_1D33C_1F8);
ZZ_MARK_TARGET(0x8001D5B0,0x8001D5D4,ZZ_1D33C_274);
ZZ_MARK_TARGET(0x8001D5D4,0x8001D5EC,ZZ_1D33C_298);
