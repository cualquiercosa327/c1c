#ifdef ZZ_INCLUDE_CODE
ZZ_4B6D8:
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	A1 <<= 16;
	T2 = (int32_t)A1 >> 16;
	V0 = T2 << 1;
	V0 += T2;
	V0 <<= 2;
	V0 = V0 - T2;
	V0 <<= 2;
	A0 <<= 16;
	T3 = (int32_t)A0 >> 16;
	A0 = 0x80060000;
	A0 += 1048;
	V1 = T3 << 2;
	T1 = V1 + A0;
	V1 = EMU_ReadU32(T1);
	V0 = V0 - T2;
	A1 = V0 << 2;
	T0 = A1 + V1;
	V0 = EMU_ReadU32(T0 + 144); //+ 0x90
	V1 = -513;
	V0 &= V1;
	EMU_Write32(T0 + 144,V0); //+ 0x90
	V1 = EMU_ReadU32(T1);
	V1 += A1;
	V0 = EMU_ReadU32(V1 + 144); //+ 0x90
	A0 = -5;
	A2 &= 0xFF;
	V0 &= A0;
	EMU_Write32(V1 + 144,V0); //+ 0x90
	V0 = 0x1;
	if (A2 != V0)
	{
		EMU_Write16(T0 + 70,A3); //+ 0x46
		ZZ_CLOCKCYCLES(34,0x8004B7A4);
		goto ZZ_4B6D8_CC;
	}
	EMU_Write16(T0 + 70,A3); //+ 0x46
	V1 = EMU_ReadU32(T1);
	V1 += A1;
	V0 = EMU_ReadU32(V1 + 144); //+ 0x90
	A0 = T2 << 8;
	V0 |= 0x1;
	EMU_Write32(V1 + 144,V0); //+ 0x90
	A1 = EMU_ReadU16(T0 + 116); //+ 0x74
	A2 = EMU_ReadU16(T0 + 118); //+ 0x76
	A0 |= T3;
	A3 = R0;
	EMU_Write16(T0 + 72,R0); //+ 0x48
	V0 = 0x1;
	RA = 0x8004B79C; //ZZ_4B6D8_C4
	EMU_Write8(T0 + 43,V0); //+ 0x2B
	ZZ_CLOCKCYCLES(49,0x8004F998);
	goto ZZ_4F998;
ZZ_4B6D8_C4:
	ZZ_CLOCKCYCLES(2,0x8004B7C8);
	goto ZZ_4B6D8_F0;
ZZ_4B6D8_CC:
	if (A2)
	{
		ZZ_CLOCKCYCLES(2,0x8004B7C8);
		goto ZZ_4B6D8_F0;
	}
	V1 = EMU_ReadU32(T1);
	V1 += A1;
	V0 = EMU_ReadU32(V1 + 144); //+ 0x90
	V0 |= 0x2;
	EMU_Write32(V1 + 144,V0); //+ 0x90
	ZZ_CLOCKCYCLES(9,0x8004B7C8);
ZZ_4B6D8_F0:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 24;
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x8004B5D0,ZZ_4B5A8_28);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004B6D8,0x8004B79C,ZZ_4B6D8);
ZZ_MARK_TARGET(0x8004B79C,0x8004B7A4,ZZ_4B6D8_C4);
ZZ_MARK_TARGET(0x8004B7A4,0x8004B7C8,ZZ_4B6D8_CC);
ZZ_MARK_TARGET(0x8004B7C8,0x8004B7D8,ZZ_4B6D8_F0);