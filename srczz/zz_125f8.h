#ifdef ZZ_INCLUDE_CODE
ZZ_125F8:
	T0 = A0;
	A1 = 0x12340000;
	T1 = EMU_ReadU32(T0 + 12); //+ 0xC
	A1 |= 0x5678;
	A3 = T0;
	A2 = 0x3FFF;
	EMU_Write32(T0 + 12,R0); //+ 0xC
	ZZ_CLOCKCYCLES(7,0x80012614);
ZZ_125F8_1C:
	A0 = EMU_ReadU32(A3);
	A3 += 4;
	A2 -= 1;
	V0 = A0 & 0xFF;
	A1 += V0;
	V1 = A1 << 3;
	V0 = A1 >> 29;
	A1 = V1 | V0;
	V0 = A0 >> 8;
	V0 &= 0xFF;
	A1 += V0;
	V1 = A1 << 3;
	V0 = A1 >> 29;
	A1 = V1 | V0;
	V0 = A0 >> 16;
	V0 &= 0xFF;
	A1 += V0;
	V1 = A1 << 3;
	V0 = A1 >> 29;
	A1 = V1 | V0;
	A0 >>= 24;
	A1 += A0;
	V1 = A1 << 3;
	V0 = A1 >> 29;
	if ((int32_t)A2 >= 0)
	{
		A1 = V1 | V0;
		ZZ_CLOCKCYCLES(26,0x80012614);
		goto ZZ_125F8_1C;
	}
	A1 = V1 | V0;
	EMU_Write32(T0 + 12,T1); //+ 0xC
	ZZ_JUMPREGISTER_BEGIN(RA);
	V0 = A1;
	ZZ_CLOCKCYCLES_JR(29);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800125F8,ZZ_125F8);
ZZ_MARK(0x800125FC);
ZZ_MARK(0x80012600);
ZZ_MARK(0x80012604);
ZZ_MARK(0x80012608);
ZZ_MARK(0x8001260C);
ZZ_MARK(0x80012610);
ZZ_MARK_TARGET(0x80012614,ZZ_125F8_1C);
ZZ_MARK(0x80012618);
ZZ_MARK(0x8001261C);
ZZ_MARK(0x80012620);
ZZ_MARK(0x80012624);
ZZ_MARK(0x80012628);
ZZ_MARK(0x8001262C);
ZZ_MARK(0x80012630);
ZZ_MARK(0x80012634);
ZZ_MARK(0x80012638);
ZZ_MARK(0x8001263C);
ZZ_MARK(0x80012640);
ZZ_MARK(0x80012644);
ZZ_MARK(0x80012648);
ZZ_MARK(0x8001264C);
ZZ_MARK(0x80012650);
ZZ_MARK(0x80012654);
ZZ_MARK(0x80012658);
ZZ_MARK(0x8001265C);
ZZ_MARK(0x80012660);
ZZ_MARK(0x80012664);
ZZ_MARK(0x80012668);
ZZ_MARK(0x8001266C);
ZZ_MARK(0x80012670);
ZZ_MARK(0x80012674);
ZZ_MARK(0x80012678);
ZZ_MARK(0x8001267C);
ZZ_MARK(0x80012680);
ZZ_MARK(0x80012684);