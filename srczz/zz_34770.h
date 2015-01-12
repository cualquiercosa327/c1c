#ifdef ZZ_INCLUDE_CODE
ZZ_34770:
	SP -= 32;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A1;
	A0 <<= 16;
	A0 = (int32_t)A0 >> 16;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = -1;
	if (A0 == S1)
	{
		EMU_Write32(SP + 24,RA); //+ 0x18
		ZZ_CLOCKCYCLES(9,0x8003479C);
		goto ZZ_34770_2C;
	}
	EMU_Write32(SP + 24,RA); //+ 0x18
	RA = 0x8003479C; //ZZ_34770_2C
	ZZ_CLOCKCYCLES(11,0x800529D0);
	goto ZZ_529D0;
ZZ_34770_2C:
	if (!S0)
	{
		ZZ_CLOCKCYCLES(2,0x800347BC);
		goto ZZ_34770_4C;
	}
	A0 = EMU_ReadS16(GP + 612); //+ 0x264
	if (A0 == S1)
	{
		ZZ_CLOCKCYCLES(6,0x800347BC);
		goto ZZ_34770_4C;
	}
	RA = 0x800347BC; //ZZ_34770_4C
	ZZ_CLOCKCYCLES(8,0x8005A690);
	goto ZZ_5A690;
ZZ_34770_4C:
	RA = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x800346D4,ZZ_346B8_1C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80034770,ZZ_34770);
ZZ_MARK(0x80034774);
ZZ_MARK(0x80034778);
ZZ_MARK(0x8003477C);
ZZ_MARK(0x80034780);
ZZ_MARK(0x80034784);
ZZ_MARK(0x80034788);
ZZ_MARK(0x8003478C);
ZZ_MARK(0x80034790);
ZZ_MARK(0x80034794);
ZZ_MARK(0x80034798);
ZZ_MARK_TARGET(0x8003479C,ZZ_34770_2C);
ZZ_MARK(0x800347A0);
ZZ_MARK(0x800347A4);
ZZ_MARK(0x800347A8);
ZZ_MARK(0x800347AC);
ZZ_MARK(0x800347B0);
ZZ_MARK(0x800347B4);
ZZ_MARK(0x800347B8);
ZZ_MARK_TARGET(0x800347BC,ZZ_34770_4C);
ZZ_MARK(0x800347C0);
ZZ_MARK(0x800347C4);
ZZ_MARK(0x800347C8);
ZZ_MARK(0x800347CC);
ZZ_MARK(0x800347D0);
