#ifdef ZZ_INCLUDE_CODE
ZZ_1579C:
	SP -= 232;
	EMU_Write32(SP + 216,S4); //+ 0xD8
	S4 = A1;
	EMU_Write32(SP + 204,S1); //+ 0xCC
	S1 = R0;
	EMU_Write32(SP + 212,S3); //+ 0xD4
	S3 = R0;
	EMU_Write32(SP + 200,S0); //+ 0xC8
	S0 = R0;
	EMU_Write32(SP + 228,RA); //+ 0xE4
	EMU_Write32(SP + 224,S6); //+ 0xE0
	EMU_Write32(SP + 220,S5); //+ 0xDC
	if ((int32_t)S4 <= 0)
	{
		EMU_Write32(SP + 208,S2); //+ 0xD0
		ZZ_CLOCKCYCLES(14,0x80015948);
		goto ZZ_1579C_1AC;
	}
	EMU_Write32(SP + 208,S2); //+ 0xD0
	S6 = 0x80060000;
	S6 -= 15020;
	S5 = 0x10000;
	S2 = A0;
	ZZ_CLOCKCYCLES(18,0x800157E4);
ZZ_1579C_48:
	V0 = EMU_ReadU32(S2);
	A0 = EMU_ReadU32(V0);
	V0 = A0 & 0x1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(7,0x80015814);
		goto ZZ_1579C_78;
	}
	RA = 0x80015808; //ZZ_1579C_6C
	ZZ_CLOCKCYCLES(9,0x80015978);
	goto ZZ_15978;
ZZ_1579C_6C:
	V1 = EMU_ReadU32(S2);
	A0 = V0;
	EMU_Write32(V1,V0);
	ZZ_CLOCKCYCLES(3,0x80015814);
ZZ_1579C_78:
	A2 = EMU_ReadU32(A0);
	V0 = A2 & 0x1;
	if (V0)
	{
		V0 = (int32_t)A2 >> 1;
		ZZ_CLOCKCYCLES(5,0x800158A8);
		goto ZZ_1579C_10C;
	}
	V0 = (int32_t)A2 >> 1;
	V0 = A2 & 0x2;
	if (V0)
	{
		ZZ_CLOCKCYCLES(8,0x80015880);
		goto ZZ_1579C_E4;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 15024); //+ 0xFFFFC550
	if ((int32_t)V0 <= 0)
	{
		A1 = R0;
		ZZ_CLOCKCYCLES(13,0x80015880);
		goto ZZ_1579C_E4;
	}
	A1 = R0;
	A3 = V0;
	A0 = S6;
	ZZ_CLOCKCYCLES(15,0x80015850);
ZZ_1579C_B4:
	V1 = EMU_ReadU32(A0);
	V0 = (int32_t)A2 < (int32_t)V1;
	if (V0)
	{
		V0 = V1 + S5;
		ZZ_CLOCKCYCLES(5,0x80015870);
		goto ZZ_1579C_D4;
	}
	V0 = V1 + S5;
	V0 = (int32_t)A2 < (int32_t)V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(8,0x80015884);
		goto ZZ_1579C_E8;
	}
	ZZ_CLOCKCYCLES(8,0x80015870);
ZZ_1579C_D4:
	A1 += 1;
	V0 = (int32_t)A1 < (int32_t)A3;
	if (V0)
	{
		A0 += 44;
		ZZ_CLOCKCYCLES(4,0x80015850);
		goto ZZ_1579C_B4;
	}
	A0 += 44;
	ZZ_CLOCKCYCLES(4,0x80015880);
ZZ_1579C_E4:
	A0 = R0;
	ZZ_CLOCKCYCLES(1,0x80015884);
ZZ_1579C_E8:
	if (!A0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(2,0x80015938);
		goto ZZ_1579C_19C;
	}
	V0 = 0x1;
	V1 = EMU_ReadS16(A0 + 4); //+ 0x4
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(6,0x80015934);
		goto ZZ_1579C_198;
	}
	V0 = EMU_ReadS16(A0 + 10); //+ 0xA
	ZZ_CLOCKCYCLES(9,0x80015928);
	goto ZZ_1579C_18C;
ZZ_1579C_10C:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 12356); //+ 0xFFFFCFBC
	V0 <<= 2;
	V0 += V1;
	V1 = EMU_ReadU32(V0);
	V0 = -18;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(8,0x80015918);
		goto ZZ_1579C_17C;
	}
	if ((int32_t)S1 <= 0)
	{
		A1 = R0;
		ZZ_CLOCKCYCLES(10,0x800158F4);
		goto ZZ_1579C_158;
	}
	A1 = R0;
	V1 = SP + 16;
	ZZ_CLOCKCYCLES(11,0x800158D4);
ZZ_1579C_138:
	V0 = EMU_ReadU32(V1);
	if (A2 == V0)
	{
		ZZ_CLOCKCYCLES(4,0x800158F4);
		goto ZZ_1579C_158;
	}
	A1 += 1;
	V0 = (int32_t)A1 < (int32_t)S1;
	if (V0)
	{
		V1 += 4;
		ZZ_CLOCKCYCLES(8,0x800158D4);
		goto ZZ_1579C_138;
	}
	V1 += 4;
	ZZ_CLOCKCYCLES(8,0x800158F4);
ZZ_1579C_158:
	if (A1 != S1)
	{
		V0 = S1 << 2;
		ZZ_CLOCKCYCLES(2,0x80015938);
		goto ZZ_1579C_19C;
	}
	V0 = S1 << 2;
	S0 += 1;
	S1 += 1;
	V1 = SP + 16;
	A0 = EMU_ReadU32(A0);
	V0 += V1;
	EMU_Write32(V0,A0);
	ZZ_CLOCKCYCLES(9,0x80015938);
	goto ZZ_1579C_19C;
ZZ_1579C_17C:
	V0 = -255;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(3,0x80015938);
		goto ZZ_1579C_19C;
	}
	V0 = EMU_ReadS16(V1 + 10); //+ 0xA
	ZZ_CLOCKCYCLES(4,0x80015928);
ZZ_1579C_18C:
	if (V0)
	{
		ZZ_CLOCKCYCLES(3,0x80015938);
		goto ZZ_1579C_19C;
	}
	ZZ_CLOCKCYCLES(3,0x80015934);
ZZ_1579C_198:
	S0 += 1;
	ZZ_CLOCKCYCLES(1,0x80015938);
ZZ_1579C_19C:
	S3 += 1;
	V0 = (int32_t)S3 < (int32_t)S4;
	if (V0)
	{
		S2 += 4;
		ZZ_CLOCKCYCLES(4,0x800157E4);
		goto ZZ_1579C_48;
	}
	S2 += 4;
	ZZ_CLOCKCYCLES(4,0x80015948);
ZZ_1579C_1AC:
	V0 = S0;
	RA = EMU_ReadU32(SP + 228); //+ 0xE4
	S6 = EMU_ReadU32(SP + 224); //+ 0xE0
	S5 = EMU_ReadU32(SP + 220); //+ 0xDC
	S4 = EMU_ReadU32(SP + 216); //+ 0xD8
	S3 = EMU_ReadU32(SP + 212); //+ 0xD4
	S2 = EMU_ReadU32(SP + 208); //+ 0xD0
	S1 = EMU_ReadU32(SP + 204); //+ 0xCC
	S0 = EMU_ReadU32(SP + 200); //+ 0xC8
	SP += 232;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(12);
  //ZZ_JUMPREGISTER(0x800232F4,ZZ_201DC_3118);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001579C,0x800157E4,ZZ_1579C);
ZZ_MARK_TARGET(0x800157E4,0x80015808,ZZ_1579C_48);
ZZ_MARK_TARGET(0x80015808,0x80015814,ZZ_1579C_6C);
ZZ_MARK_TARGET(0x80015814,0x80015850,ZZ_1579C_78);
ZZ_MARK_TARGET(0x80015850,0x80015870,ZZ_1579C_B4);
ZZ_MARK_TARGET(0x80015870,0x80015880,ZZ_1579C_D4);
ZZ_MARK_TARGET(0x80015880,0x80015884,ZZ_1579C_E4);
ZZ_MARK_TARGET(0x80015884,0x800158A8,ZZ_1579C_E8);
ZZ_MARK_TARGET(0x800158A8,0x800158D4,ZZ_1579C_10C);
ZZ_MARK_TARGET(0x800158D4,0x800158F4,ZZ_1579C_138);
ZZ_MARK_TARGET(0x800158F4,0x80015918,ZZ_1579C_158);
ZZ_MARK_TARGET(0x80015918,0x80015928,ZZ_1579C_17C);
ZZ_MARK_TARGET(0x80015928,0x80015934,ZZ_1579C_18C);
ZZ_MARK_TARGET(0x80015934,0x80015938,ZZ_1579C_198);
ZZ_MARK_TARGET(0x80015938,0x80015948,ZZ_1579C_19C);
ZZ_MARK_TARGET(0x80015948,0x80015978,ZZ_1579C_1AC);
