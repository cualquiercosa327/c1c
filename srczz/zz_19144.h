#ifdef ZZ_INCLUDE_CODE
ZZ_19144:
	V1 = EMU_ReadS16(A1);
	V0 = EMU_ReadU32(A0);
	EMU_SMultiply(V1,V0);
	A3 = EMU_ReadS16(A1 + 2); //+ 0x2
	V0 = LO;
	V1 = EMU_ReadU32(A0 + 4); //+ 0x4
	EMU_SMultiply(A3,V1);
	A3 = EMU_ReadS16(A1 + 4); //+ 0x4
	T0 = LO;
	V1 = EMU_ReadU32(A0 + 8); //+ 0x8
	EMU_SMultiply(A3,V1);
	V0 += T0;
	V1 = LO;
	V0 += V1;
	V0 = (int32_t)V0 >> 12;
	EMU_Write32(A2,V0);
	V1 = EMU_ReadS16(A1 + 6); //+ 0x6
	V0 = EMU_ReadU32(A0);
	EMU_SMultiply(V1,V0);
	A3 = EMU_ReadS16(A1 + 8); //+ 0x8
	V0 = LO;
	V1 = EMU_ReadU32(A0 + 4); //+ 0x4
	EMU_SMultiply(A3,V1);
	A3 = EMU_ReadS16(A1 + 10); //+ 0xA
	T0 = LO;
	V1 = EMU_ReadU32(A0 + 8); //+ 0x8
	EMU_SMultiply(A3,V1);
	V0 += T0;
	V1 = LO;
	V0 += V1;
	V0 = (int32_t)V0 >> 12;
	EMU_Write32(A2 + 4,V0); //+ 0x4
	V1 = EMU_ReadS16(A1 + 12); //+ 0xC
	V0 = EMU_ReadU32(A0);
	EMU_SMultiply(V1,V0);
	A3 = EMU_ReadS16(A1 + 14); //+ 0xE
	V0 = LO;
	V1 = EMU_ReadU32(A0 + 4); //+ 0x4
	EMU_SMultiply(A3,V1);
	A1 = EMU_ReadS16(A1 + 16); //+ 0x10
	A3 = LO;
	V1 = EMU_ReadU32(A0 + 8); //+ 0x8
	EMU_SMultiply(A1,V1);
	V0 += A3;
	V1 = LO;
	V0 += V1;
	V0 = (int32_t)V0 >> 12;
	ZZ_JUMPREGISTER_BEGIN(RA);
	EMU_Write32(A2 + 8,V0); //+ 0x8
	ZZ_CLOCKCYCLES_JR(58);
	ZZ_JUMPREGISTER(0x80024814,ZZ_2465C_1B8);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80019144,0x8001922C,ZZ_19144);
