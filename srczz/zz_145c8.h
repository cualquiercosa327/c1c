#ifdef ZZ_INCLUDE_CODE
ZZ_145C8:
	A2 = 0x7;
	T1 = 0x1;
	T0 = -1;
	A3 = 0x80060000;
	A3 -= 32652;
	V1 = 0x134;
	ZZ_CLOCKCYCLES(6,0x800145E0);
ZZ_145C8_18:
	V0 = EMU_ReadS16(A3 + 4); //+ 0x4
	if (V0 != T1)
	{
		ZZ_CLOCKCYCLES(4,0x80014628);
		goto ZZ_145C8_60;
	}
	AT = 0x80050000;
	AT += V1;
	V0 = EMU_ReadS16(AT + 32582); //+ 0x7F46
	if (V0 != A0)
	{
		ZZ_CLOCKCYCLES(10,0x80014628);
		goto ZZ_145C8_60;
	}
	if (A1 == T0)
	{
		V0 = A2;
		ZZ_CLOCKCYCLES(12,0x8001463C);
		goto ZZ_145C8_74;
	}
	V0 = A2;
	AT = 0x80050000;
	AT += V1;
	V0 = EMU_ReadS16(AT + 32584); //+ 0x7F48
	if (A1 == V0)
	{
		V0 = A2;
		ZZ_CLOCKCYCLES(18,0x8001463C);
		goto ZZ_145C8_74;
	}
	V0 = A2;
	ZZ_CLOCKCYCLES(18,0x80014628);
ZZ_145C8_60:
	A3 -= 44;
	A2 -= 1;
	if ((int32_t)A2 >= 0)
	{
		V1 -= 44;
		ZZ_CLOCKCYCLES(4,0x800145E0);
		goto ZZ_145C8_18;
	}
	V1 -= 44;
	V0 = -12;
	ZZ_CLOCKCYCLES(5,0x8001463C);
ZZ_145C8_74:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x800140C8,ZZ_13D48_380);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800145C8,0x800145E0,ZZ_145C8);
ZZ_MARK_TARGET(0x800145E0,0x80014628,ZZ_145C8_18);
ZZ_MARK_TARGET(0x80014628,0x8001463C,ZZ_145C8_60);
ZZ_MARK_TARGET(0x8001463C,0x80014644,ZZ_145C8_74);
