#ifdef ZZ_INCLUDE_CODE
ZZ_4A324:
	SP -= 32;
	EMU_Write32(SP + 28,RA); //+ 0x1C
	EMU_Write32(SP + 24,S2); //+ 0x18
	EMU_Write32(SP + 20,S1); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	V1 = A1 << 16;
	V1 = (int32_t)V1 >> 16;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 = V0 - V1;
	V0 <<= 2;
	V0 = V0 - V1;
	S2 = A0;
	A0 <<= 16;
	A0 = (int32_t)A0 >> 14;
	AT = 0x80060000;
	AT += A0;
	V1 = EMU_ReadU32(AT + 1048); //+ 0x418
	V0 <<= 2;
	S0 = V0 + V1;
	V1 = EMU_ReadU8(S0 + 39); //+ 0x27
	V0 = 0x1;
	if (V1 != V0)
	{
		S1 = A1;
		ZZ_CLOCKCYCLES(25,0x8004A3A4);
		goto ZZ_4A324_80;
	}
	S1 = A1;
	V0 = EMU_ReadU8(S0 + 16); //+ 0x10
	if (V0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(29,0x8004A3A4);
		goto ZZ_4A324_80;
	}
	V0 = 0x1;
	EMU_Write8(S0 + 40,A2); //+ 0x28
	EMU_Write8(S0 + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(32,0x8004A3CC);
	goto ZZ_4A324_A8;
ZZ_4A324_80:
	V1 = EMU_ReadU8(S0 + 22); //+ 0x16
	V0 = 0x1E;
	if (V1 == V0)
	{
		V0 = 0x14;
		ZZ_CLOCKCYCLES(4,0x8004A3D0);
		goto ZZ_4A324_AC;
	}
	V0 = 0x14;
	if (V1 == V0)
	{
		V0 = 0x28;
		ZZ_CLOCKCYCLES(6,0x8004A3D4);
		goto ZZ_4A324_B0;
	}
	V0 = 0x28;
	V0 = EMU_ReadU8(S0 + 42); //+ 0x2A
	EMU_Write8(S0 + 21,A2); //+ 0x15
	V0 += 1;
	EMU_Write8(S0 + 42,V0); //+ 0x2A
	ZZ_CLOCKCYCLES(10,0x8004A3CC);
ZZ_4A324_A8:
	V1 = EMU_ReadU8(S0 + 22); //+ 0x16
	ZZ_CLOCKCYCLES(1,0x8004A3D0);
ZZ_4A324_AC:
	V0 = 0x28;
	ZZ_CLOCKCYCLES(1,0x8004A3D4);
ZZ_4A324_B0:
	if (V1 != V0)
	{
		A0 = S2 << 16;
		ZZ_CLOCKCYCLES(2,0x8004A420);
		goto ZZ_4A324_FC;
	}
	A0 = S2 << 16;
	V0 = S2 << 16;
	A0 = (int32_t)V0 >> 16;
	V0 = 0x80060000;
	V0 += 1176;
	V1 = A0 << 6;
	V1 += V0;
	V0 = S1 << 16;
	A1 = (int32_t)V0 >> 16;
	V0 = A1 << 2;
	V0 += V1;
	V0 = EMU_ReadU32(V0);
	if (!V0)
	{
		ZZ_CLOCKCYCLES(16,0x8004A41C);
		goto ZZ_4A324_F8;
	}
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x8004A41C; //ZZ_4A324_F8
	A2 &= 0xFF;
	ZZ_CLOCKCYCLES_JR(18);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,8004A414)
	ZZ_JUMPREGISTER_END();
ZZ_4A324_F8:
	A0 = S2 << 16;
	ZZ_CLOCKCYCLES(1,0x8004A420);
ZZ_4A324_FC:
	A0 = (int32_t)A0 >> 16;
	A1 = S1 << 16;
	RA = 0x8004A430; //ZZ_4A324_10C
	A1 = (int32_t)A1 >> 16;
	ZZ_CLOCKCYCLES(4,0x8004AEB8);
	goto ZZ_4AEB8;
ZZ_4A324_10C:
	EMU_Write32(S0 + 136,V0); //+ 0x88
	RA = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 32;
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004A324,0x8004A3A4,ZZ_4A324);
ZZ_MARK_TARGET(0x8004A3A4,0x8004A3CC,ZZ_4A324_80);
ZZ_MARK_TARGET(0x8004A3CC,0x8004A3D0,ZZ_4A324_A8);
ZZ_MARK_TARGET(0x8004A3D0,0x8004A3D4,ZZ_4A324_AC);
ZZ_MARK_TARGET(0x8004A3D4,0x8004A41C,ZZ_4A324_B0);
ZZ_MARK_TARGET(0x8004A41C,0x8004A420,ZZ_4A324_F8);
ZZ_MARK_TARGET(0x8004A420,0x8004A430,ZZ_4A324_FC);
ZZ_MARK_TARGET(0x8004A430,0x8004A44C,ZZ_4A324_10C);