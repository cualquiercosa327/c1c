#ifdef ZZ_INCLUDE_CODE
ZZ_42AE0:
	SP -= 8;
	if (!A2)
	{
		V0 = A2 - 1;
		ZZ_CLOCKCYCLES(3,0x80042B00);
		goto ZZ_42AE0_20;
	}
	V0 = A2 - 1;
	V1 = -1;
	ZZ_CLOCKCYCLES(4,0x80042AF0);
ZZ_42AE0_10:
	EMU_Write8(A0,A1);
	V0 -= 1;
	if (V0 != V1)
	{
		A0 += 1;
		ZZ_CLOCKCYCLES(4,0x80042AF0);
		goto ZZ_42AE0_10;
	}
	A0 += 1;
	ZZ_CLOCKCYCLES(4,0x80042B00);
ZZ_42AE0_20:
	SP += 8;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0x8003FE18,ZZ_3FDC0_58);
	ZZ_JUMPREGISTER(0x8003FE98,ZZ_3FDC0_D8);
	ZZ_JUMPREGISTER(0x8003FEA8,ZZ_3FDC0_E8);
	ZZ_JUMPREGISTER(0x8004267C,ZZ_425E0_9C);
	ZZ_JUMPREGISTER(0x80042690,ZZ_425E0_B0);
	ZZ_JUMPREGISTER(0x8004021C,ZZ_401C0_5C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80042AE0,0x80042AF0,ZZ_42AE0);
ZZ_MARK_TARGET(0x80042AF0,0x80042B00,ZZ_42AE0_10);
ZZ_MARK_TARGET(0x80042B00,0x80042B0C,ZZ_42AE0_20);
