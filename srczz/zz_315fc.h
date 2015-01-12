#ifdef ZZ_INCLUDE_CODE
ZZ_315FC:
	A1 = A1 - A0;
	A1 <<= 20;
	A1 = (int32_t)A1 >> 20;
	if ((int32_t)A1 <= 0)
	{
		V0 = (int32_t)A3 < (int32_t)A1;
		ZZ_CLOCKCYCLES(5,0x80031618);
		goto ZZ_315FC_1C;
	}
	V0 = (int32_t)A3 < (int32_t)A1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(7,0x80031630);
		goto ZZ_315FC_34;
	}
	ZZ_CLOCKCYCLES(7,0x80031618);
ZZ_315FC_1C:
	if ((int32_t)A1 >= 0)
	{
		EMU_SMultiply(A2,A1);
		ZZ_CLOCKCYCLES(2,0x80031638);
		goto ZZ_315FC_3C;
	}
	EMU_SMultiply(A2,A1);
	A3 = -A3;
	V0 = (int32_t)A1 < (int32_t)A3;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(6,0x80031638);
		goto ZZ_315FC_3C;
	}
	ZZ_CLOCKCYCLES(6,0x80031630);
ZZ_315FC_34:
	A1 = A3;
	EMU_SMultiply(A2,A3);
	ZZ_CLOCKCYCLES(2,0x80031638);
ZZ_315FC_3C:
	V1 = LO;
	V0 = (int32_t)V1 >> 8;
	V0 += A0;
	ZZ_JUMPREGISTER_BEGIN(RA);
	V0 &= 0xFFF;
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x80023754,ZZ_23424_330);
	ZZ_JUMPREGISTER(0x80023770,ZZ_23424_34C);
	ZZ_JUMPREGISTER(0x8002378C,ZZ_23424_368);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800315FC,ZZ_315FC);
ZZ_MARK(0x80031600);
ZZ_MARK(0x80031604);
ZZ_MARK(0x80031608);
ZZ_MARK(0x8003160C);
ZZ_MARK(0x80031610);
ZZ_MARK(0x80031614);
ZZ_MARK_TARGET(0x80031618,ZZ_315FC_1C);
ZZ_MARK(0x8003161C);
ZZ_MARK(0x80031620);
ZZ_MARK(0x80031624);
ZZ_MARK(0x80031628);
ZZ_MARK(0x8003162C);
ZZ_MARK_TARGET(0x80031630,ZZ_315FC_34);
ZZ_MARK(0x80031634);
ZZ_MARK_TARGET(0x80031638,ZZ_315FC_3C);
ZZ_MARK(0x8003163C);
ZZ_MARK(0x80031640);
ZZ_MARK(0x80031644);
ZZ_MARK(0x80031648);
