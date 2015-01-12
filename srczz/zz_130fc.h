#ifdef ZZ_INCLUDE_CODE
ZZ_130FC:
	V0 = -1;
	if (A1 != V0)
	{
		A1 = (int32_t)A1 >> 1;
		ZZ_CLOCKCYCLES(3,0x80013110);
		goto ZZ_130FC_14;
	}
	A1 = (int32_t)A1 >> 1;
	V0 = 0x1;
	ZZ_CLOCKCYCLES(5,0x80013140);
	goto ZZ_130FC_44;
ZZ_130FC_14:
	V0 = EMU_ReadU32(A0 + 36); //+ 0x24
	V1 = EMU_ReadU32(V0 + 20); //+ 0x14
	A2 = (int32_t)V1 >> 1;
	V1 = (int32_t)A2 < (int32_t)A1;
	if (V1)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(8,0x80013140);
		goto ZZ_130FC_44;
	}
	V0 = R0;
	V0 = EMU_ReadU32(A0 + 28); //+ 0x1C
	V0 = A2 - V0;
	V0 = (int32_t)V0 < (int32_t)A1;
	ZZ_CLOCKCYCLES(12,0x80013140);
ZZ_130FC_44:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x800133D4,ZZ_13304_D0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800130FC,ZZ_130FC);
ZZ_MARK(0x80013100);
ZZ_MARK(0x80013104);
ZZ_MARK(0x80013108);
ZZ_MARK(0x8001310C);
ZZ_MARK_TARGET(0x80013110,ZZ_130FC_14);
ZZ_MARK(0x80013114);
ZZ_MARK(0x80013118);
ZZ_MARK(0x8001311C);
ZZ_MARK(0x80013120);
ZZ_MARK(0x80013124);
ZZ_MARK(0x80013128);
ZZ_MARK(0x8001312C);
ZZ_MARK(0x80013130);
ZZ_MARK(0x80013134);
ZZ_MARK(0x80013138);
ZZ_MARK(0x8001313C);
ZZ_MARK_TARGET(0x80013140,ZZ_130FC_44);
ZZ_MARK(0x80013144);
