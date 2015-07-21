#ifdef ZZ_INCLUDE_CODE
ZZ_3EF24:
	V0 = 0x80050000;
	V0 += 18896;
	A0 <<= 2;
	A0 += V0;
	V0 = EMU_ReadU32(A0);
	if (A1 == V0)
	{
		ZZ_CLOCKCYCLES(8,0x8003EF48);
		goto ZZ_3EF24_24;
	}
	EMU_Write32(A0,A1);
	ZZ_CLOCKCYCLES(9,0x8003EF48);
ZZ_3EF24_24:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003EF24,0x8003EF48,ZZ_3EF24);
ZZ_MARK_TARGET(0x8003EF48,0x8003EF50,ZZ_3EF24_24);