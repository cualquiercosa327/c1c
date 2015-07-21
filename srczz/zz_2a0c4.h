#ifdef ZZ_INCLUDE_CODE
ZZ_2A0C4:
	SP -= 56;
	T0 = A1;
	EMU_Write32(SP + 52,RA); //+ 0x34
	EMU_Write32(SP + 48,S0); //+ 0x30
	V0 = EMU_ReadU32(T0 + 4); //+ 0x4
	S0 = A2;
	T3 = EMU_ReadU32(V0 + 20); //+ 0x14
	V0 = 0x1;
	EMU_Write32(S0 + 48,V0); //+ 0x30
	A2 = EMU_ReadU32(A0);
	V0 = EMU_ReadS16(T0 + 50); //+ 0x32
	T5 = EMU_ReadU32(SP + 72); //+ 0x48
	V1 = EMU_ReadU32(T3);
	A2 = (int32_t)A2 >> 4;
	V0 += V1;
	V0 <<= 4;
	A2 = A2 - V0;
	EMU_Write32(SP + 16,A2); //+ 0x10
	V1 = EMU_ReadU32(A0 + 4); //+ 0x4
	V0 = EMU_ReadS16(T0 + 52); //+ 0x34
	A1 = EMU_ReadU32(T3 + 4); //+ 0x4
	V1 = (int32_t)V1 >> 4;
	V0 += A1;
	V0 <<= 4;
	T1 = V1 - V0;
	EMU_Write32(SP + 20,T1); //+ 0x14
	A0 = EMU_ReadU32(A0 + 8); //+ 0x8
	V0 = EMU_ReadS16(T0 + 54); //+ 0x36
	V1 = EMU_ReadU32(T3 + 8); //+ 0x8
	A0 = (int32_t)A0 >> 4;
	V0 += V1;
	V0 <<= 4;
	A0 = A0 - V0;
	EMU_Write32(SP + 24,A0); //+ 0x18
	T2 = EMU_ReadS16(T0 + 44); //+ 0x2C
	EMU_SMultiply(T2,A2);
	V1 = LO;
	V0 = EMU_ReadS16(T0 + 46); //+ 0x2E
	EMU_SMultiply(V0,T1);
	A1 = LO;
	V0 = EMU_ReadS16(T0 + 48); //+ 0x30
	EMU_SMultiply(V0,A0);
	V1 += A1;
	V0 = LO;
	V1 += V0;
	V0 = EMU_ReadS16(T0 + 34); //+ 0x22
	A1 = (int32_t)V1 >> 8;
	EMU_SDivide(A1,V0);
	if (V0)
	{
		ZZ_CLOCKCYCLES(53,0x8002A19C);
		goto ZZ_2A0C4_D8;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(54,0x8002A19C);
ZZ_2A0C4_D8:
	AT = -1;
	if (V0 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x8002A1B4);
		goto ZZ_2A0C4_F0;
	}
	AT = 0x80000000;
	if (A1 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x8002A1B4);
		goto ZZ_2A0C4_F0;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x8002A1B4);
ZZ_2A0C4_F0:
	T4 = LO;
	A2 = R0;
	A0 = R0;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 31004); //+ 0x791C
	if (T0 != V0)
	{
		A1 = (int32_t)T4 >> 8;
		ZZ_CLOCKCYCLES(8,0x8002A1DC);
		goto ZZ_2A0C4_118;
	}
	A1 = (int32_t)T4 >> 8;
	EMU_Write32(S0 + 4,R0); //+ 0x4
	ZZ_CLOCKCYCLES(10,0x8002A218);
	goto ZZ_2A0C4_154;
ZZ_2A0C4_118:
	if (!T2)
	{
		V0 = (int32_t)T1 < -12800;
		ZZ_CLOCKCYCLES(2,0x8002A214);
		goto ZZ_2A0C4_150;
	}
	V0 = (int32_t)T1 < -12800;
	if (!V0)
	{
		V1 = 0x40000;
		ZZ_CLOCKCYCLES(4,0x8002A214);
		goto ZZ_2A0C4_150;
	}
	V1 = 0x40000;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 30996); //+ 0x7914
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	V0 = EMU_ReadU32(V0 + 764); //+ 0x2FC
	V0 &= V1;
	if (V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(14,0x8002A3D8);
		goto ZZ_2A0C4_314;
	}
	V0 = R0;
	ZZ_CLOCKCYCLES(14,0x8002A214);
ZZ_2A0C4_150:
	EMU_Write32(S0 + 4,T0); //+ 0x4
	ZZ_CLOCKCYCLES(1,0x8002A218);
ZZ_2A0C4_154:
	if (!T5)
	{
		V0 = A3 & 0x1;
		ZZ_CLOCKCYCLES(2,0x8002A238);
		goto ZZ_2A0C4_174;
	}
	V0 = A3 & 0x1;
	if (!V0)
	{
		V0 = A3 & 0x2;
		ZZ_CLOCKCYCLES(4,0x8002A22C);
		goto ZZ_2A0C4_168;
	}
	V0 = A3 & 0x2;
	A0 = EMU_ReadU8(T0 + 28); //+ 0x1C
	ZZ_CLOCKCYCLES(5,0x8002A22C);
ZZ_2A0C4_168:
	if (!V0)
	{
		V0 = (int32_t)A1 < (int32_t)A0;
		ZZ_CLOCKCYCLES(2,0x8002A23C);
		goto ZZ_2A0C4_178;
	}
	V0 = (int32_t)A1 < (int32_t)A0;
	A2 = EMU_ReadU8(T0 + 29); //+ 0x1D
	ZZ_CLOCKCYCLES(3,0x8002A238);
ZZ_2A0C4_174:
	V0 = (int32_t)A1 < (int32_t)A0;
	ZZ_CLOCKCYCLES(1,0x8002A23C);
ZZ_2A0C4_178:
	if (!V0)
	{
		ZZ_CLOCKCYCLES(2,0x8002A26C);
		goto ZZ_2A0C4_1A8;
	}
	if (A0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(4,0x8002A3D8);
		goto ZZ_2A0C4_314;
	}
	V0 = R0;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 31004); //+ 0x791C
	if (T0 != V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(9,0x8002A3D8);
		goto ZZ_2A0C4_314;
	}
	V0 = R0;
	T4 = R0;
	A1 = R0;
	ZZ_CLOCKCYCLES(12,0x8002A2AC);
	goto ZZ_2A0C4_1E8;
ZZ_2A0C4_1A8:
	V1 = EMU_ReadU16(T0 + 30); //+ 0x1E
	V0 = V1 - A2;
	V0 = (int32_t)A1 < (int32_t)V0;
	if (V0)
	{
		A0 = A1 << 1;
		ZZ_CLOCKCYCLES(6,0x8002A2B4);
		goto ZZ_2A0C4_1F0;
	}
	A0 = A1 << 1;
	if (A2)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(8,0x8002A3D8);
		goto ZZ_2A0C4_314;
	}
	V0 = R0;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 31004); //+ 0x791C
	if (T0 != V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(13,0x8002A3D8);
		goto ZZ_2A0C4_314;
	}
	V0 = R0;
	V0 = V1 << 8;
	T4 = V0 - 1;
	A1 = V1 - 1;
	ZZ_CLOCKCYCLES(16,0x8002A2AC);
ZZ_2A0C4_1E8:
	EMU_Write32(S0 + 48,R0); //+ 0x30
	A0 = A1 << 1;
	ZZ_CLOCKCYCLES(2,0x8002A2B4);
ZZ_2A0C4_1F0:
	A0 += A1;
	A0 <<= 2;
	A0 += T0;
	A2 = 0x80050000;
	A2 = EMU_ReadU32(A2 + 26292); //+ 0x66B4
	V1 = EMU_ReadU32(S0 + 36); //+ 0x24
	V0 = EMU_ReadU32(A2 + 128); //+ 0x80
	A1 = EMU_ReadS16(A0 + 50); //+ 0x32
	V0 += V1;
	V1 = EMU_ReadU32(T3);
	V0 = (int32_t)V0 >> 8;
	V0 = V0 - V1;
	A3 = V0 - A1;
	EMU_Write32(SP + 32,A3); //+ 0x20
	V0 = EMU_ReadU32(A2 + 132); //+ 0x84
	V1 = EMU_ReadU32(S0 + 44); //+ 0x2C
	A1 = EMU_ReadS16(A0 + 52); //+ 0x34
	V0 += V1;
	V1 = EMU_ReadU32(T3 + 4); //+ 0x4
	V0 = (int32_t)V0 >> 8;
	V0 = V0 - V1;
	A1 = V0 - A1;
	EMU_Write32(SP + 36,A1); //+ 0x24
	V0 = EMU_ReadU32(A2 + 136); //+ 0x88
	V1 = EMU_ReadU32(S0 + 40); //+ 0x28
	A0 = EMU_ReadS16(A0 + 54); //+ 0x36
	V0 += V1;
	V1 = EMU_ReadU32(T3 + 8); //+ 0x8
	V0 = (int32_t)V0 >> 8;
	V0 = V0 - V1;
	V1 = V0 - A0;
	EMU_Write32(SP + 40,V1); //+ 0x28
	V0 = EMU_ReadU32(S0 + 48); //+ 0x30
	if (V0)
	{
		ZZ_CLOCKCYCLES(36,0x8002A38C);
		goto ZZ_2A0C4_2C8;
	}
	if ((int32_t)A3 >= 0)
	{
		V0 = A3;
		ZZ_CLOCKCYCLES(38,0x8002A350);
		goto ZZ_2A0C4_28C;
	}
	V0 = A3;
	V0 = -V0;
	ZZ_CLOCKCYCLES(39,0x8002A350);
ZZ_2A0C4_28C:
	V0 = (int32_t)V0 < 3201;
	if (!V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(3,0x8002A3D8);
		goto ZZ_2A0C4_314;
	}
	V0 = R0;
	if ((int32_t)A1 >= 0)
	{
		V0 = A1;
		ZZ_CLOCKCYCLES(5,0x8002A368);
		goto ZZ_2A0C4_2A4;
	}
	V0 = A1;
	V0 = -V0;
	ZZ_CLOCKCYCLES(6,0x8002A368);
ZZ_2A0C4_2A4:
	V0 = (int32_t)V0 < 3201;
	if (!V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(3,0x8002A3D8);
		goto ZZ_2A0C4_314;
	}
	V0 = R0;
	if ((int32_t)V1 >= 0)
	{
		V0 = V1;
		ZZ_CLOCKCYCLES(5,0x8002A380);
		goto ZZ_2A0C4_2BC;
	}
	V0 = V1;
	V0 = -V0;
	ZZ_CLOCKCYCLES(6,0x8002A380);
ZZ_2A0C4_2BC:
	V0 = (int32_t)V0 < 3201;
	if (!V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(3,0x8002A3D8);
		goto ZZ_2A0C4_314;
	}
	V0 = R0;
	ZZ_CLOCKCYCLES(3,0x8002A38C);
ZZ_2A0C4_2C8:
	EMU_Write32(S0,T0);
	EMU_Write32(S0 + 8,T4); //+ 0x8
	V0 = EMU_ReadU32(SP + 32); //+ 0x20
	EMU_SMultiply(V0,V0);
	V1 = LO;
	V0 = EMU_ReadU32(SP + 36); //+ 0x24
	EMU_SMultiply(V0,V0);
	A0 = LO;
	V0 = EMU_ReadU32(SP + 40); //+ 0x28
	EMU_SMultiply(V0,V0);
	V1 += A0;
	A0 = LO;
	RA = 0x8002A3D0; //ZZ_2A0C4_30C
	A0 += V1;
	ZZ_CLOCKCYCLES(17,0x80042B9C);
	goto ZZ_42B9C;
ZZ_2A0C4_30C:
	EMU_Write32(S0 + 24,V0); //+ 0x18
	V0 = 0x1;
	ZZ_CLOCKCYCLES(2,0x8002A3D8);
ZZ_2A0C4_314:
	RA = EMU_ReadU32(SP + 52); //+ 0x34
	S0 = EMU_ReadU32(SP + 48); //+ 0x30
	SP += 56;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x8002ADB4,ZZ_2A82C_588);
	ZZ_JUMPREGISTER(0x8002B028,ZZ_2A82C_7FC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8002A0C4,0x8002A19C,ZZ_2A0C4);
ZZ_MARK_TARGET(0x8002A19C,0x8002A1B4,ZZ_2A0C4_D8);
ZZ_MARK_TARGET(0x8002A1B4,0x8002A1DC,ZZ_2A0C4_F0);
ZZ_MARK_TARGET(0x8002A1DC,0x8002A214,ZZ_2A0C4_118);
ZZ_MARK_TARGET(0x8002A214,0x8002A218,ZZ_2A0C4_150);
ZZ_MARK_TARGET(0x8002A218,0x8002A22C,ZZ_2A0C4_154);
ZZ_MARK_TARGET(0x8002A22C,0x8002A238,ZZ_2A0C4_168);
ZZ_MARK_TARGET(0x8002A238,0x8002A23C,ZZ_2A0C4_174);
ZZ_MARK_TARGET(0x8002A23C,0x8002A26C,ZZ_2A0C4_178);
ZZ_MARK_TARGET(0x8002A26C,0x8002A2AC,ZZ_2A0C4_1A8);
ZZ_MARK_TARGET(0x8002A2AC,0x8002A2B4,ZZ_2A0C4_1E8);
ZZ_MARK_TARGET(0x8002A2B4,0x8002A350,ZZ_2A0C4_1F0);
ZZ_MARK_TARGET(0x8002A350,0x8002A368,ZZ_2A0C4_28C);
ZZ_MARK_TARGET(0x8002A368,0x8002A380,ZZ_2A0C4_2A4);
ZZ_MARK_TARGET(0x8002A380,0x8002A38C,ZZ_2A0C4_2BC);
ZZ_MARK_TARGET(0x8002A38C,0x8002A3D0,ZZ_2A0C4_2C8);
ZZ_MARK_TARGET(0x8002A3D0,0x8002A3D8,ZZ_2A0C4_30C);
ZZ_MARK_TARGET(0x8002A3D8,0x8002A3EC,ZZ_2A0C4_314);