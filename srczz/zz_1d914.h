#ifdef ZZ_INCLUDE_CODE
ZZ_1D914:
	A1 <<= 2;
	V1 = EMU_ReadU32(A0 + 220); //+ 0xDC
	T0 = EMU_ReadU32(A0 + 220); //+ 0xDC
	A3 = EMU_ReadU32(A0 + 228); //+ 0xE4
	V0 = T0 + 4;
	EMU_Write32(A0 + 228,V1); //+ 0xE4
	V1 = V1 - A1;
	V1 -= 96;
	V1 = V1 - A0;
	A3 -= 96;
	A3 = A3 - A0;
	A3 <<= 16;
	EMU_Write32(A0 + 220,V0); //+ 0xDC
	EMU_Write32(T0,A2);
	A2 = EMU_ReadU32(A0 + 220); //+ 0xDC
	T0 = EMU_ReadU32(A0 + 224); //+ 0xE0
	V0 = A2 + 4;
	EMU_Write32(A0 + 220,V0); //+ 0xDC
	EMU_Write32(A2,T0);
	A2 = EMU_ReadU32(A0 + 220); //+ 0xDC
	V1 |= A3;
	V0 = A2 + 4;
	EMU_Write32(A0 + 220,V0); //+ 0xDC
	V0 = -255;
	ZZ_JUMPREGISTER_BEGIN(RA);
	EMU_Write32(A2,V1);
	ZZ_CLOCKCYCLES_JR(26);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001D914,0x8001D97C,ZZ_1D914);
