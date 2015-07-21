#ifdef ZZ_INCLUDE_CODE
ZZ_1CB80:
	SP -= 32;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0;
	T1 = A1;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = A2;
	V1 = 0x1;
	EMU_Write32(SP + 28,RA); //+ 0x1C
	EMU_Write32(SP + 24,S2); //+ 0x18
	A0 = EMU_ReadU32(S0 + 100); //+ 0x64
	V0 = 0xFFFF;
	EMU_Write32(S0 + 344,V0); //+ 0x158
	V0 = -2;
	EMU_Write32(S0 + 216,R0); //+ 0xD8
	EMU_Write32(S0 + 272,R0); //+ 0x110
	EMU_Write32(S0 + 276,R0); //+ 0x114
	EMU_Write32(S0 + 280,R0); //+ 0x118
	EMU_Write32(S0,V1);
	EMU_Write32(S0 + 164,R0); //+ 0xA4
	EMU_Write32(S0 + 168,R0); //+ 0xA8
	EMU_Write32(S0 + 172,R0); //+ 0xAC
	EMU_Write32(S0 + 176,R0); //+ 0xB0
	EMU_Write32(S0 + 180,R0); //+ 0xB4
	EMU_Write32(S0 + 184,R0); //+ 0xB8
	EMU_Write32(S0 + 188,R0); //+ 0xBC
	EMU_Write32(S0 + 192,R0); //+ 0xC0
	EMU_Write32(S0 + 196,R0); //+ 0xC4
	EMU_Write32(S0 + 292,R0); //+ 0x124
	EMU_Write32(S0 + 268,R0); //+ 0x10C
	EMU_Write32(S0 + 248,R0); //+ 0xF8
	EMU_Write32(S0 + 180,R0); //+ 0xB4
	EMU_Write32(S0 + 200,R0); //+ 0xC8
	EMU_Write32(S0 + 208,R0); //+ 0xD0
	EMU_Write32(S0 + 204,R0); //+ 0xCC
	EMU_Write32(S0 + 296,R0); //+ 0x128
	EMU_Write32(S0 + 312,R0); //+ 0x138
	EMU_Write32(S0 + 304,R0); //+ 0x130
	EMU_Write32(S0 + 328,R0); //+ 0x148
	EMU_Write32(S0 + 332,V0); //+ 0x14C
	V0 = EMU_ReadU32(A0);
	if (V0 != V1)
	{
		S2 = A3;
		ZZ_CLOCKCYCLES(43,0x8001CC7C);
		goto ZZ_1CB80_FC;
	}
	S2 = A3;
	A3 = S0 + 128;
	V1 = EMU_ReadU32(S0 + 100); //+ 0x64
	V0 = EMU_ReadU32(A0 + 40); //+ 0x28
	A2 = V1 + 128;
	T0 = V1 + 160;
	EMU_Write32(S0 + 40,V0); //+ 0x28
	ZZ_CLOCKCYCLES(49,0x8001CC44);
ZZ_1CB80_C4:
	V0 = EMU_ReadU32(A2);
	V1 = EMU_ReadU32(A2 + 4); //+ 0x4
	A0 = EMU_ReadU32(A2 + 8); //+ 0x8
	A1 = EMU_ReadU32(A2 + 12); //+ 0xC
	EMU_Write32(A3,V0);
	EMU_Write32(A3 + 4,V1); //+ 0x4
	EMU_Write32(A3 + 8,A0); //+ 0x8
	EMU_Write32(A3 + 12,A1); //+ 0xC
	A2 += 16;
	if (A2 != T0)
	{
		A3 += 16;
		ZZ_CLOCKCYCLES(11,0x8001CC44);
		goto ZZ_1CB80_C4;
	}
	A3 += 16;
	V0 = EMU_ReadU32(A2);
	EMU_Write32(A3,V0);
	ZZ_CLOCKCYCLES(14,0x8001CC9C);
	goto ZZ_1CB80_11C;
ZZ_1CB80_FC:
	V0 = 0x1000;
	EMU_Write32(S0 + 40,R0); //+ 0x28
	EMU_Write32(S0 + 140,R0); //+ 0x8C
	EMU_Write32(S0 + 144,R0); //+ 0x90
	EMU_Write32(S0 + 148,R0); //+ 0x94
	EMU_Write32(S0 + 152,V0); //+ 0x98
	EMU_Write32(S0 + 156,V0); //+ 0x9C
	EMU_Write32(S0 + 160,V0); //+ 0xA0
	ZZ_CLOCKCYCLES(8,0x8001CC9C);
ZZ_1CB80_11C:
	V0 = (int32_t)T1 < 6;
	if (!V0)
	{
		V0 = (int32_t)T1 < 4;
		ZZ_CLOCKCYCLES(3,0x8001CCC0);
		goto ZZ_1CB80_140;
	}
	V0 = (int32_t)T1 < 4;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001CCCC);
		goto ZZ_1CB80_14C;
	}
	if (!T1)
	{
		ZZ_CLOCKCYCLES(7,0x8001CCD4);
		goto ZZ_1CB80_154;
	}
	ZZ_CLOCKCYCLES(9,0x8001CCD8);
	goto ZZ_1CB80_158;
ZZ_1CB80_140:
	V0 = 0x1D;
	if (T1 != V0)
	{
		ZZ_CLOCKCYCLES(3,0x8001CCD8);
		goto ZZ_1CB80_158;
	}
	ZZ_CLOCKCYCLES(3,0x8001CCCC);
ZZ_1CB80_14C:
	EMU_Write32(S0 + 40,R0); //+ 0x28
	ZZ_CLOCKCYCLES(2,0x8001CCD8);
	goto ZZ_1CB80_158;
ZZ_1CB80_154:
	EMU_Write32(S0 + 320,R0); //+ 0x140
	ZZ_CLOCKCYCLES(1,0x8001CCD8);
ZZ_1CB80_158:
	V1 = EMU_ReadU32(S0 + 4); //+ 0x4
	V0 = 0x3;
	if (V1 != V0)
	{
		V0 = -14;
		ZZ_CLOCKCYCLES(4,0x8001CDB4);
		goto ZZ_1CB80_234;
	}
	V0 = -14;
	A0 = 0x63960000;
	V0 = T1 << 2;
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 15044); //+ 0xFFFFC53C
	V0 += 20;
	V1 += V0;
	V0 = EMU_ReadU32(V1);
	A0 |= 0x347F;
	if (V0 == A0)
	{
		V0 = (int32_t)T1 < 64;
		ZZ_CLOCKCYCLES(14,0x8001CDB0);
		goto ZZ_1CB80_230;
	}
	V0 = (int32_t)T1 < 64;
	if (!V0)
	{
		A0 = V1;
		ZZ_CLOCKCYCLES(16,0x8001CDB0);
		goto ZZ_1CB80_230;
	}
	A0 = V1;
	A1 = 0x1;
	RA = 0x8001CD24; //ZZ_1CB80_1A4
	A2 = R0;
	ZZ_CLOCKCYCLES(19,0x80015118);
	goto ZZ_15118;
ZZ_1CB80_1A4:
	EMU_Write32(S0 + 32,V0); //+ 0x20
	V0 = (int32_t)V0 < -254;
	if (!V0)
	{
		V0 = -14;
		ZZ_CLOCKCYCLES(4,0x8001CDB4);
		goto ZZ_1CB80_234;
	}
	V0 = -14;
	EMU_Write32(S0 + 96,S0); //+ 0x60
	EMU_Write32(S0 + 120,R0); //+ 0x78
	EMU_Write32(S0 + 112,R0); //+ 0x70
	EMU_Write32(S0 + 124,R0); //+ 0x7C
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 3504); //+ 0xDB0
	A0 = EMU_ReadU32(S0 + 32); //+ 0x20
	EMU_Write32(S0 + 212,S1); //+ 0xD4
	EMU_Write32(S0 + 264,R0); //+ 0x108
	EMU_Write32(S0 + 240,R0); //+ 0xF0
	EMU_Write32(S0 + 116,V0); //+ 0x74
	V0 = EMU_ReadU32(A0 + 16); //+ 0x10
	V1 = EMU_ReadU32(S0 + 212); //+ 0xD4
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	V0 += V1;
	V1 = EMU_ReadU32(A0 + 28); //+ 0x1C
	V0 <<= 1;
	V0 += V1;
	A1 = EMU_ReadU16(V0);
	V0 = 0xFF;
	if (A1 != V0)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(27,0x8001CD98);
		goto ZZ_1CB80_218;
	}
	A0 = S0;
	V0 = -27;
	ZZ_CLOCKCYCLES(29,0x8001CDB4);
	goto ZZ_1CB80_234;
ZZ_1CB80_218:
	A3 = EMU_ReadU32(SP + 48); //+ 0x30
	RA = 0x8001CDA4; //ZZ_1CB80_224
	A2 = S2;
	ZZ_CLOCKCYCLES(3,0x8001D698);
	EMU_NativeCall(GOOL_ChangeObjectState);
ZZ_1CB80_224:
	V0 = (int32_t)V0 < -254;
	if (V0)
	{
		V0 = -255;
		ZZ_CLOCKCYCLES(3,0x8001CDB4);
		goto ZZ_1CB80_234;
	}
	V0 = -255;
	ZZ_CLOCKCYCLES(3,0x8001CDB0);
ZZ_1CB80_230:
	V0 = -14;
	ZZ_CLOCKCYCLES(1,0x8001CDB4);
ZZ_1CB80_234:
	RA = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x8001C134,ZZ_1BCC8_46C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001CB80,0x8001CC44,ZZ_1CB80);
ZZ_MARK_TARGET(0x8001CC44,0x8001CC7C,ZZ_1CB80_C4);
ZZ_MARK_TARGET(0x8001CC7C,0x8001CC9C,ZZ_1CB80_FC);
ZZ_MARK_TARGET(0x8001CC9C,0x8001CCC0,ZZ_1CB80_11C);
ZZ_MARK_TARGET(0x8001CCC0,0x8001CCCC,ZZ_1CB80_140);
ZZ_MARK_TARGET(0x8001CCCC,0x8001CCD4,ZZ_1CB80_14C);
ZZ_MARK_TARGET(0x8001CCD4,0x8001CCD8,ZZ_1CB80_154);
ZZ_MARK_TARGET(0x8001CCD8,0x8001CD24,ZZ_1CB80_158);
ZZ_MARK_TARGET(0x8001CD24,0x8001CD98,ZZ_1CB80_1A4);
ZZ_MARK_TARGET(0x8001CD98,0x8001CDA4,ZZ_1CB80_218);
ZZ_MARK_TARGET(0x8001CDA4,0x8001CDB0,ZZ_1CB80_224);
ZZ_MARK_TARGET(0x8001CDB0,0x8001CDB4,ZZ_1CB80_230);
ZZ_MARK_TARGET(0x8001CDB4,0x8001CDD0,ZZ_1CB80_234);
