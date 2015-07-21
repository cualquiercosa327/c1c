#ifdef ZZ_INCLUDE_CODE
ZZ_4AF70:
	A1 <<= 16;
	A1 = (int32_t)A1 >> 16;
	A2 = A1 << 1;
	A2 += A1;
	A2 <<= 2;
	A2 = A2 - A1;
	A2 <<= 2;
	A0 <<= 16;
	V0 = 0x80060000;
	V0 += 1048;
	A0 = (int32_t)A0 >> 14;
	A0 += V0;
	A2 = A2 - A1;
	A3 = EMU_ReadU32(A0);
	A2 <<= 2;
	V0 = 0x1;
	A3 += A2;
	EMU_Write16(A3 + 70,V0); //+ 0x46
	EMU_Write16(A3 + 72,R0); //+ 0x48
	V1 = EMU_ReadU32(A0);
	V1 += A2;
	V0 = EMU_ReadU32(V1 + 144); //+ 0x90
	A1 = -257;
	V0 &= A1;
	EMU_Write32(V1 + 144,V0); //+ 0x90
	V1 = EMU_ReadU32(A0);
	V1 += A2;
	V0 = EMU_ReadU32(V1 + 144); //+ 0x90
	A1 = -9;
	V0 &= A1;
	EMU_Write32(V1 + 144,V0); //+ 0x90
	V1 = EMU_ReadU32(A0);
	V1 += A2;
	V0 = EMU_ReadU32(V1 + 144); //+ 0x90
	A1 = -3;
	V0 &= A1;
	EMU_Write32(V1 + 144,V0); //+ 0x90
	V1 = EMU_ReadU32(A0);
	V1 += A2;
	V0 = EMU_ReadU32(V1 + 144); //+ 0x90
	A1 = -5;
	V0 &= A1;
	EMU_Write32(V1 + 144,V0); //+ 0x90
	V1 = EMU_ReadU32(A0);
	V1 += A2;
	V0 = EMU_ReadU32(V1 + 144); //+ 0x90
	A1 = -513;
	V0 &= A1;
	EMU_Write32(V1 + 144,V0); //+ 0x90
	V1 = EMU_ReadU32(A3 + 8); //+ 0x8
	V0 = 0x1;
	EMU_Write8(A3 + 43,V0); //+ 0x2B
	EMU_Write32(A3 + 4,V1); //+ 0x4
	V0 = EMU_ReadU32(A0);
	A2 += V0;
	V0 = EMU_ReadU32(A2 + 144); //+ 0x90
	V0 |= 0x1;
	ZZ_JUMPREGISTER_BEGIN(RA);
	EMU_Write32(A2 + 144,V0); //+ 0x90
	ZZ_CLOCKCYCLES_JR(66);
	ZZ_JUMPREGISTER(0x8004AD28,ZZ_4A9FC_32C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004AF70,0x8004B078,ZZ_4AF70);
