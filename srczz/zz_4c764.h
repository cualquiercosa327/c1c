#ifdef ZZ_INCLUDE_CODE
ZZ_4C764:
	A1 <<= 16;
	A1 = (int32_t)A1 >> 16;
	V0 = A1 << 1;
	V0 += A1;
	V0 <<= 2;
	V0 = V0 - A1;
	V0 <<= 2;
	A0 <<= 16;
	V1 = 0x80060000;
	V1 += 1048;
	A0 = (int32_t)A0 >> 14;
	A0 += V1;
	V0 = V0 - A1;
	A2 = EMU_ReadU32(A0);
	V0 <<= 2;
	V1 = 0x1;
	A2 += V0;
	EMU_Write8(A2 + 43,V1); //+ 0x2B
	V1 = EMU_ReadU32(A0);
	V0 += V1;
	V1 = EMU_ReadU32(V0 + 144); //+ 0x90
	A0 = -9;
	V1 &= A0;
	ZZ_JUMPREGISTER_BEGIN(RA);
	EMU_Write32(V0 + 144,V1); //+ 0x90
	ZZ_CLOCKCYCLES_JR(26);
	ZZ_JUMPREGISTER(0x8004BD24,ZZ_4BB7C_1A8);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004C764,0x8004C7CC,ZZ_4C764);
