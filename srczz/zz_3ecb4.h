#ifdef ZZ_INCLUDE_CODE
ZZ_3ECB4:
	A0 = EMU_ReadU32(V1 + 300); //+ 0x12C
	T8 = 0x7F0000;
	T8 |= 0x7F7F;
	T9 ^= A0;
	if ((int32_t)T9 < 0)
	{
		A0 = T5 >> 1;
		ZZ_CLOCKCYCLES(6,0x8003ED64);
		goto ZZ_3ECB4_B0;
	}
	A0 = T5 >> 1;
	A0 &= T8;
	T5 = A0 >> 1;
	T5 &= T8;
	T5 += A0;
	A0 = T6 >> 1;
	A0 &= T8;
	T6 = A0 >> 1;
	T6 &= T8;
	T6 += A0;
	A0 = T7 >> 1;
	A0 &= T8;
	T7 = A0 >> 1;
	T7 &= T8;
	T7 += A0;
	T9 = GTE_GetDataRegister(12);
	T8 = 0xFFFF0000;
	A0 = T9 & 0xFFFF;
	T9 &= T8;
	A0 = EMU_CheckedAdd(A0,3);
	A0 &= 0xFFFF;
	T9 |= A0;
	GTE_SetDataRegister(12,T9);
	T9 = GTE_GetDataRegister(13);
	A0 = T9 & 0xFFFF;
	T9 &= T8;
	A0 = EMU_CheckedAdd(A0,3);
	A0 &= 0xFFFF;
	T9 |= A0;
	GTE_SetDataRegister(13,T9);
	T9 = GTE_GetDataRegister(14);
	A0 = T9 & 0xFFFF;
	T9 &= T8;
	A0 = EMU_CheckedAdd(A0,3);
	A0 &= 0xFFFF;
	T9 |= A0;
	GTE_SetDataRegister(14,T9);
	ZZ_CLOCKCYCLES(44,0x8003ED64);
ZZ_3ECB4_B0:
	ZZ_JUMPREGISTER_BEGIN(S3);
	ZZ_CLOCKCYCLES_JR(2);
	// UNIMPLEMENTED INDIRECT JUMP (S3,8003ED64)
	// PC IS 8003ED64
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003ECB4,ZZ_3ECB4);
ZZ_MARK(0x8003ECB8);
ZZ_MARK(0x8003ECBC);
ZZ_MARK(0x8003ECC0);
ZZ_MARK(0x8003ECC4);
ZZ_MARK(0x8003ECC8);
ZZ_MARK(0x8003ECCC);
ZZ_MARK(0x8003ECD0);
ZZ_MARK(0x8003ECD4);
ZZ_MARK(0x8003ECD8);
ZZ_MARK(0x8003ECDC);
ZZ_MARK(0x8003ECE0);
ZZ_MARK(0x8003ECE4);
ZZ_MARK(0x8003ECE8);
ZZ_MARK(0x8003ECEC);
ZZ_MARK(0x8003ECF0);
ZZ_MARK(0x8003ECF4);
ZZ_MARK(0x8003ECF8);
ZZ_MARK(0x8003ECFC);
ZZ_MARK(0x8003ED00);
ZZ_MARK(0x8003ED04);
ZZ_MARK(0x8003ED08);
ZZ_MARK(0x8003ED0C);
ZZ_MARK(0x8003ED10);
ZZ_MARK(0x8003ED14);
ZZ_MARK(0x8003ED18);
ZZ_MARK(0x8003ED1C);
ZZ_MARK(0x8003ED20);
ZZ_MARK(0x8003ED24);
ZZ_MARK(0x8003ED28);
ZZ_MARK(0x8003ED2C);
ZZ_MARK(0x8003ED30);
ZZ_MARK(0x8003ED34);
ZZ_MARK(0x8003ED38);
ZZ_MARK(0x8003ED3C);
ZZ_MARK(0x8003ED40);
ZZ_MARK(0x8003ED44);
ZZ_MARK(0x8003ED48);
ZZ_MARK(0x8003ED4C);
ZZ_MARK(0x8003ED50);
ZZ_MARK(0x8003ED54);
ZZ_MARK(0x8003ED58);
ZZ_MARK(0x8003ED5C);
ZZ_MARK(0x8003ED60);
ZZ_MARK_TARGET(0x8003ED64,ZZ_3ECB4_B0);
ZZ_MARK(0x8003ED68);
