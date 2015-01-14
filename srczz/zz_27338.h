#ifdef ZZ_INCLUDE_CODE
ZZ_27338:
	SP -= 40;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0;
	EMU_Write32(SP + 32,RA); //+ 0x20
	EMU_Write32(SP + 28,S3); //+ 0x1C
	EMU_Write32(SP + 24,S2); //+ 0x18
	EMU_Write32(SP + 20,S1); //+ 0x14
	V0 = EMU_ReadU32(S0);
	S3 = A1;
	V1 = (int32_t)V0 >> 8;
	if ((int32_t)V1 >= 0)
	{
		S2 = R0;
		ZZ_CLOCKCYCLES(12,0x8002737C);
		goto ZZ_27338_44;
	}
	S2 = R0;
	RA = 0x80027370; //ZZ_27338_38
	ZZ_CLOCKCYCLES(14,0x80027410);
	goto ZZ_27410;
ZZ_27338_38:
	V1 = EMU_ReadU32(S0);
	S2 = V0;
	V1 = (int32_t)V1 >> 8;
	ZZ_CLOCKCYCLES(3,0x8002737C);
ZZ_27338_44:
	S1 = (int32_t)S3 >> 8;
	if ((int32_t)S1 >= 0)
	{
		ZZ_CLOCKCYCLES(3,0x8002738C);
		goto ZZ_27338_54;
	}
	S1 = R0;
	ZZ_CLOCKCYCLES(4,0x8002738C);
ZZ_27338_54:
	V0 = EMU_ReadU32(S0 + 4); //+ 0x4
	A0 = (int32_t)V0 >> 8;
	V0 = (int32_t)S1 < (int32_t)A0;
	if (V0)
	{
		A1 = S1 - V1;
		ZZ_CLOCKCYCLES(6,0x800273B4);
		goto ZZ_27338_7C;
	}
	A1 = S1 - V1;
	S1 = A0 - 1;
	V0 = A0 << 8;
	S3 = V0 - 1;
	A1 = S1 - V1;
	ZZ_CLOCKCYCLES(10,0x800273B4);
ZZ_27338_7C:
	if ((int32_t)A1 >= 0)
	{
		ZZ_CLOCKCYCLES(2,0x800273D4);
		goto ZZ_27338_9C;
	}
	RA = 0x800273C4; //ZZ_27338_8C
	A0 = S0;
	ZZ_CLOCKCYCLES(4,0x80027410);
	goto ZZ_27410;
ZZ_27338_8C:
	V1 = EMU_ReadU32(S0);
	S2 |= V0;
	V1 = (int32_t)V1 >> 8;
	A1 = S1 - V1;
	ZZ_CLOCKCYCLES(4,0x800273D4);
ZZ_27338_9C:
	if (!A1)
	{
		ZZ_CLOCKCYCLES(2,0x800273E8);
		goto ZZ_27338_B0;
	}
	RA = 0x800273E4; //ZZ_27338_AC
	A0 = S0;
	ZZ_CLOCKCYCLES(4,0x8002744C);
	goto ZZ_2744C;
ZZ_27338_AC:
	S2 |= V0;
	ZZ_CLOCKCYCLES(1,0x800273E8);
ZZ_27338_B0:
	EMU_Write32(S0,S3);
	V0 = S2;
	RA = EMU_ReadU32(SP + 32); //+ 0x20
	S3 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 40;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(10);
	ZZ_JUMPREGISTER(0x80039E80,ZZ_39DAC_D4);
	ZZ_JUMPREGISTER(0x80027200,ZZ_27168_98);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80027338,ZZ_27338);
ZZ_MARK(0x8002733C);
ZZ_MARK(0x80027340);
ZZ_MARK(0x80027344);
ZZ_MARK(0x80027348);
ZZ_MARK(0x8002734C);
ZZ_MARK(0x80027350);
ZZ_MARK(0x80027354);
ZZ_MARK(0x80027358);
ZZ_MARK(0x8002735C);
ZZ_MARK(0x80027360);
ZZ_MARK(0x80027364);
ZZ_MARK(0x80027368);
ZZ_MARK(0x8002736C);
ZZ_MARK_TARGET(0x80027370,ZZ_27338_38);
ZZ_MARK(0x80027374);
ZZ_MARK(0x80027378);
ZZ_MARK_TARGET(0x8002737C,ZZ_27338_44);
ZZ_MARK(0x80027380);
ZZ_MARK(0x80027384);
ZZ_MARK(0x80027388);
ZZ_MARK_TARGET(0x8002738C,ZZ_27338_54);
ZZ_MARK(0x80027390);
ZZ_MARK(0x80027394);
ZZ_MARK(0x80027398);
ZZ_MARK(0x8002739C);
ZZ_MARK(0x800273A0);
ZZ_MARK(0x800273A4);
ZZ_MARK(0x800273A8);
ZZ_MARK(0x800273AC);
ZZ_MARK(0x800273B0);
ZZ_MARK_TARGET(0x800273B4,ZZ_27338_7C);
ZZ_MARK(0x800273B8);
ZZ_MARK(0x800273BC);
ZZ_MARK(0x800273C0);
ZZ_MARK_TARGET(0x800273C4,ZZ_27338_8C);
ZZ_MARK(0x800273C8);
ZZ_MARK(0x800273CC);
ZZ_MARK(0x800273D0);
ZZ_MARK_TARGET(0x800273D4,ZZ_27338_9C);
ZZ_MARK(0x800273D8);
ZZ_MARK(0x800273DC);
ZZ_MARK(0x800273E0);
ZZ_MARK_TARGET(0x800273E4,ZZ_27338_AC);
ZZ_MARK_TARGET(0x800273E8,ZZ_27338_B0);
ZZ_MARK(0x800273EC);
ZZ_MARK(0x800273F0);
ZZ_MARK(0x800273F4);
ZZ_MARK(0x800273F8);
ZZ_MARK(0x800273FC);
ZZ_MARK(0x80027400);
ZZ_MARK(0x80027404);
ZZ_MARK(0x80027408);
ZZ_MARK(0x8002740C);