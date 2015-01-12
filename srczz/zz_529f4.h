#ifdef ZZ_INCLUDE_CODE
ZZ_529F4:
	SP -= 48;
	V0 = A0;
	V1 = A1;
	EMU_Write32(SP + 24,S0); //+ 0x18
	S0 = A2;
	EMU_Write32(SP + 40,S4); //+ 0x28
	S4 = A3;
	EMU_Write32(SP + 32,S2); //+ 0x20
	S2 = S0;
	A0 = V1 << 8;
	A0 |= V0;
	A0 <<= 16;
	A0 = (int32_t)A0 >> 16;
	A1 = SP + 16;
	A2 = SP + 18;
	EMU_Write32(SP + 28,S1); //+ 0x1C
	S1 = V0;
	EMU_Write32(SP + 36,S3); //+ 0x24
	EMU_Write32(SP + 44,RA); //+ 0x2C
	RA = 0x80052A48; //ZZ_529F4_54
	S3 = V1;
	ZZ_CLOCKCYCLES(21,0x80059DDC);
	goto ZZ_59DDC;
ZZ_529F4_54:
	S0 <<= 16;
	V1 = EMU_ReadU16(SP + 16); //+ 0x10
	S0 = (int32_t)S0 >> 16;
	V0 = V1 + S0;
	V0 = (int32_t)V0 < 128;
	if (!V0)
	{
		V0 = 128;
		ZZ_CLOCKCYCLES(7,0x80052A80);
		goto ZZ_529F4_8C;
	}
	V0 = 128;
	V1 = EMU_ReadU16(SP + 18); //+ 0x12
	V0 = V1 + S0;
	V0 = (int32_t)V0 < 128;
	if (V0)
	{
		S0 = S1 << 16;
		ZZ_CLOCKCYCLES(13,0x80052A88);
		goto ZZ_529F4_94;
	}
	S0 = S1 << 16;
	V0 = 128;
	ZZ_CLOCKCYCLES(14,0x80052A80);
ZZ_529F4_8C:
	S2 = V0 - V1;
	S0 = S1 << 16;
	ZZ_CLOCKCYCLES(2,0x80052A88);
ZZ_529F4_94:
	S0 = (int32_t)S0 >> 16;
	A0 = S0;
	S1 = S3 << 16;
	S1 = (int32_t)S1 >> 16;
	A1 = S1;
	A2 = S2 << 16;
	A2 = (int32_t)A2 >> 16;
	RA = 0x80052AAC; //ZZ_529F4_B8
	A3 = S4;
	ZZ_CLOCKCYCLES(9,0x80052B90);
	goto ZZ_52B90;
ZZ_529F4_B8:
	V0 = 0x80070000;
	V0 -= 15268;
	S0 <<= 2;
	S0 += V0;
	V1 = S1 << 1;
	V1 += S1;
	V1 <<= 2;
	V1 = V1 - S1;
	A0 = EMU_ReadU32(S0);
	V1 <<= 4;
	A0 += V1;
	V0 = EMU_ReadU32(A0 + 152); //+ 0x98
	V0 |= 0x10;
	EMU_Write32(A0 + 152,V0); //+ 0x98
	V0 = EMU_ReadU32(S0);
	V1 += V0;
	V0 = EMU_ReadU32(V1 + 152); //+ 0x98
	A0 = -33;
	V0 &= A0;
	EMU_Write32(V1 + 152,V0); //+ 0x98
	RA = EMU_ReadU32(SP + 44); //+ 0x2C
	S4 = EMU_ReadU32(SP + 40); //+ 0x28
	S3 = EMU_ReadU32(SP + 36); //+ 0x24
	S2 = EMU_ReadU32(SP + 32); //+ 0x20
	S1 = EMU_ReadU32(SP + 28); //+ 0x1C
	S0 = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 48;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(31);
	ZZ_JUMPREGISTER(0x80052B80,ZZ_52B5C_24);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800529F4,ZZ_529F4);
ZZ_MARK(0x800529F8);
ZZ_MARK(0x800529FC);
ZZ_MARK(0x80052A00);
ZZ_MARK(0x80052A04);
ZZ_MARK(0x80052A08);
ZZ_MARK(0x80052A0C);
ZZ_MARK(0x80052A10);
ZZ_MARK(0x80052A14);
ZZ_MARK(0x80052A18);
ZZ_MARK(0x80052A1C);
ZZ_MARK(0x80052A20);
ZZ_MARK(0x80052A24);
ZZ_MARK(0x80052A28);
ZZ_MARK(0x80052A2C);
ZZ_MARK(0x80052A30);
ZZ_MARK(0x80052A34);
ZZ_MARK(0x80052A38);
ZZ_MARK(0x80052A3C);
ZZ_MARK(0x80052A40);
ZZ_MARK(0x80052A44);
ZZ_MARK_TARGET(0x80052A48,ZZ_529F4_54);
ZZ_MARK(0x80052A4C);
ZZ_MARK(0x80052A50);
ZZ_MARK(0x80052A54);
ZZ_MARK(0x80052A58);
ZZ_MARK(0x80052A5C);
ZZ_MARK(0x80052A60);
ZZ_MARK(0x80052A64);
ZZ_MARK(0x80052A68);
ZZ_MARK(0x80052A6C);
ZZ_MARK(0x80052A70);
ZZ_MARK(0x80052A74);
ZZ_MARK(0x80052A78);
ZZ_MARK(0x80052A7C);
ZZ_MARK_TARGET(0x80052A80,ZZ_529F4_8C);
ZZ_MARK(0x80052A84);
ZZ_MARK_TARGET(0x80052A88,ZZ_529F4_94);
ZZ_MARK(0x80052A8C);
ZZ_MARK(0x80052A90);
ZZ_MARK(0x80052A94);
ZZ_MARK(0x80052A98);
ZZ_MARK(0x80052A9C);
ZZ_MARK(0x80052AA0);
ZZ_MARK(0x80052AA4);
ZZ_MARK(0x80052AA8);
ZZ_MARK_TARGET(0x80052AAC,ZZ_529F4_B8);
ZZ_MARK(0x80052AB0);
ZZ_MARK(0x80052AB4);
ZZ_MARK(0x80052AB8);
ZZ_MARK(0x80052ABC);
ZZ_MARK(0x80052AC0);
ZZ_MARK(0x80052AC4);
ZZ_MARK(0x80052AC8);
ZZ_MARK(0x80052ACC);
ZZ_MARK(0x80052AD0);
ZZ_MARK(0x80052AD4);
ZZ_MARK(0x80052AD8);
ZZ_MARK(0x80052ADC);
ZZ_MARK(0x80052AE0);
ZZ_MARK(0x80052AE4);
ZZ_MARK(0x80052AE8);
ZZ_MARK(0x80052AEC);
ZZ_MARK(0x80052AF0);
ZZ_MARK(0x80052AF4);
ZZ_MARK(0x80052AF8);
ZZ_MARK(0x80052AFC);
ZZ_MARK(0x80052B00);
ZZ_MARK(0x80052B04);
ZZ_MARK(0x80052B08);
ZZ_MARK(0x80052B0C);
ZZ_MARK(0x80052B10);
ZZ_MARK(0x80052B14);
ZZ_MARK(0x80052B18);
ZZ_MARK(0x80052B1C);
ZZ_MARK(0x80052B20);
ZZ_MARK(0x80052B24);
