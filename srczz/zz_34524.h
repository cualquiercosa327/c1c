#ifdef ZZ_INCLUDE_CODE
ZZ_34524:
	if ((int32_t)A0 >= 0)
	{
		ZZ_CLOCKCYCLES(2,0x80034530);
		goto ZZ_34524_C;
	}
	A0 = -A0;
	ZZ_CLOCKCYCLES(3,0x80034530);
ZZ_34524_C:
	if ((int32_t)A1 >= 0)
	{
		ZZ_CLOCKCYCLES(2,0x8003453C);
		goto ZZ_34524_18;
	}
	A1 = -A1;
	ZZ_CLOCKCYCLES(3,0x8003453C);
ZZ_34524_18:
	EMU_SMultiply(A0,A0);
	A2 = LO;
	A3 = HI;
	EMU_SMultiply(A1,A1);
	T0 = LO;
	T1 = HI;
	V0 = A2 + T0;
	V1 = V0 < A2;
	V1 += A3;
	V1 += T1;
	V0 >>= 13;
	V1 <<= 19;
	ZZ_JUMPREGISTER_BEGIN(RA);
	V0 |= V1;
	ZZ_CLOCKCYCLES_JR(16);
	ZZ_JUMPREGISTER(0x8003013C,ZZ_30078_C4);
	ZZ_JUMPREGISTER(0x80030128,ZZ_30078_B0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80034524,0x80034530,ZZ_34524);
ZZ_MARK_TARGET(0x80034530,0x8003453C,ZZ_34524_C);
ZZ_MARK_TARGET(0x8003453C,0x8003457C,ZZ_34524_18);
