#ifdef ZZ_INCLUDE_CODE
ZZ_52C88:
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
	RA = 0x80052CDC; //ZZ_52C88_54
	S3 = V1;
	ZZ_CLOCKCYCLES(21,0x80059DDC);
	goto ZZ_59DDC;
ZZ_52C88_54:
	S0 <<= 16;
	V1 = EMU_ReadU16(SP + 16); //+ 0x10
	S0 = (int32_t)S0 >> 16;
	V0 = (int32_t)V1 < (int32_t)S0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(6,0x80052D08);
		goto ZZ_52C88_80;
	}
	V1 = EMU_ReadU16(SP + 18); //+ 0x12
	V0 = (int32_t)V1 < (int32_t)S0;
	if (!V0)
	{
		S0 = S1 << 16;
		ZZ_CLOCKCYCLES(11,0x80052D10);
		goto ZZ_52C88_88;
	}
	S0 = S1 << 16;
	ZZ_CLOCKCYCLES(11,0x80052D08);
ZZ_52C88_80:
	S2 = V1;
	S0 = S1 << 16;
	ZZ_CLOCKCYCLES(2,0x80052D10);
ZZ_52C88_88:
	S0 = (int32_t)S0 >> 16;
	A0 = S0;
	S1 = S3 << 16;
	S1 = (int32_t)S1 >> 16;
	A1 = S1;
	A2 = S2 << 16;
	A2 = (int32_t)A2 >> 16;
	RA = 0x80052D34; //ZZ_52C88_AC
	A3 = S4;
	ZZ_CLOCKCYCLES(9,0x80052B90);
	goto ZZ_52B90;
ZZ_52C88_AC:
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
	V0 |= 0x20;
	EMU_Write32(A0 + 152,V0); //+ 0x98
	V0 = EMU_ReadU32(S0);
	V1 += V0;
	V0 = EMU_ReadU32(V1 + 152); //+ 0x98
	A0 = -17;
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
	ZZ_JUMPREGISTER(0x80052E08,ZZ_52DE4_24);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80052C88,ZZ_52C88);
ZZ_MARK(0x80052C8C);
ZZ_MARK(0x80052C90);
ZZ_MARK(0x80052C94);
ZZ_MARK(0x80052C98);
ZZ_MARK(0x80052C9C);
ZZ_MARK(0x80052CA0);
ZZ_MARK(0x80052CA4);
ZZ_MARK(0x80052CA8);
ZZ_MARK(0x80052CAC);
ZZ_MARK(0x80052CB0);
ZZ_MARK(0x80052CB4);
ZZ_MARK(0x80052CB8);
ZZ_MARK(0x80052CBC);
ZZ_MARK(0x80052CC0);
ZZ_MARK(0x80052CC4);
ZZ_MARK(0x80052CC8);
ZZ_MARK(0x80052CCC);
ZZ_MARK(0x80052CD0);
ZZ_MARK(0x80052CD4);
ZZ_MARK(0x80052CD8);
ZZ_MARK_TARGET(0x80052CDC,ZZ_52C88_54);
ZZ_MARK(0x80052CE0);
ZZ_MARK(0x80052CE4);
ZZ_MARK(0x80052CE8);
ZZ_MARK(0x80052CEC);
ZZ_MARK(0x80052CF0);
ZZ_MARK(0x80052CF4);
ZZ_MARK(0x80052CF8);
ZZ_MARK(0x80052CFC);
ZZ_MARK(0x80052D00);
ZZ_MARK(0x80052D04);
ZZ_MARK_TARGET(0x80052D08,ZZ_52C88_80);
ZZ_MARK(0x80052D0C);
ZZ_MARK_TARGET(0x80052D10,ZZ_52C88_88);
ZZ_MARK(0x80052D14);
ZZ_MARK(0x80052D18);
ZZ_MARK(0x80052D1C);
ZZ_MARK(0x80052D20);
ZZ_MARK(0x80052D24);
ZZ_MARK(0x80052D28);
ZZ_MARK(0x80052D2C);
ZZ_MARK(0x80052D30);
ZZ_MARK_TARGET(0x80052D34,ZZ_52C88_AC);
ZZ_MARK(0x80052D38);
ZZ_MARK(0x80052D3C);
ZZ_MARK(0x80052D40);
ZZ_MARK(0x80052D44);
ZZ_MARK(0x80052D48);
ZZ_MARK(0x80052D4C);
ZZ_MARK(0x80052D50);
ZZ_MARK(0x80052D54);
ZZ_MARK(0x80052D58);
ZZ_MARK(0x80052D5C);
ZZ_MARK(0x80052D60);
ZZ_MARK(0x80052D64);
ZZ_MARK(0x80052D68);
ZZ_MARK(0x80052D6C);
ZZ_MARK(0x80052D70);
ZZ_MARK(0x80052D74);
ZZ_MARK(0x80052D78);
ZZ_MARK(0x80052D7C);
ZZ_MARK(0x80052D80);
ZZ_MARK(0x80052D84);
ZZ_MARK(0x80052D88);
ZZ_MARK(0x80052D8C);
ZZ_MARK(0x80052D90);
ZZ_MARK(0x80052D94);
ZZ_MARK(0x80052D98);
ZZ_MARK(0x80052D9C);
ZZ_MARK(0x80052DA0);
ZZ_MARK(0x80052DA4);
ZZ_MARK(0x80052DA8);
ZZ_MARK(0x80052DAC);
