#ifdef ZZ_INCLUDE_CODE
ZZ_15458:
	SP -= 72;
	EMU_Write32(SP + 56,S0); //+ 0x38
	S0 = A0;
	EMU_Write32(SP + 68,RA); //+ 0x44
	EMU_Write32(SP + 64,S2); //+ 0x40
	EMU_Write32(SP + 60,S1); //+ 0x3C
	A0 = EMU_ReadU32(S0);
	V0 = A0 & 0x1;
	if (!V0)
	{
		S2 = A1;
		ZZ_CLOCKCYCLES(11,0x80015494);
		goto ZZ_15458_3C;
	}
	S2 = A1;
	RA = 0x8001548C; //ZZ_15458_34
	ZZ_CLOCKCYCLES(13,0x80015978);
	goto ZZ_15978;
ZZ_15458_34:
	EMU_Write32(S0,V0);
	ZZ_CLOCKCYCLES(2,0x80015498);
	goto ZZ_15458_40;
ZZ_15458_3C:
	V0 = A0;
	ZZ_CLOCKCYCLES(1,0x80015498);
ZZ_15458_40:
	A0 = EMU_ReadU32(V0);
	V0 = A0 & 0x1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(5,0x800155E4);
		goto ZZ_15458_18C;
	}
	if (S2)
	{
		V0 = A0 & 0x2;
		ZZ_CLOCKCYCLES(7,0x800154BC);
		goto ZZ_15458_64;
	}
	V0 = A0 & 0x2;
	ZZ_CLOCKCYCLES(7,0x800154B4);
ZZ_15458_5C:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(2,0x800156B8);
	goto ZZ_15458_260;
ZZ_15458_64:
	if (V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(2,0x8001551C);
		goto ZZ_15458_C4;
	}
	V0 = R0;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 15024); //+ 0xFFFFC550
	if ((int32_t)V0 <= 0)
	{
		A2 = R0;
		ZZ_CLOCKCYCLES(7,0x80015518);
		goto ZZ_15458_C0;
	}
	A2 = R0;
	T0 = 0x10000;
	A3 = V0;
	A1 = 0x80060000;
	A1 -= 15020;
	ZZ_CLOCKCYCLES(11,0x800154E8);
ZZ_15458_90:
	V1 = EMU_ReadU32(A1);
	V0 = (int32_t)A0 < (int32_t)V1;
	if (V0)
	{
		A2 += 1;
		ZZ_CLOCKCYCLES(5,0x8001550C);
		goto ZZ_15458_B4;
	}
	A2 += 1;
	V0 = V1 + T0;
	V0 = (int32_t)A0 < (int32_t)V0;
	if (V0)
	{
		V0 = A1;
		ZZ_CLOCKCYCLES(9,0x8001551C);
		goto ZZ_15458_C4;
	}
	V0 = A1;
	ZZ_CLOCKCYCLES(9,0x8001550C);
ZZ_15458_B4:
	V0 = (int32_t)A2 < (int32_t)A3;
	if (V0)
	{
		A1 += 44;
		ZZ_CLOCKCYCLES(3,0x800154E8);
		goto ZZ_15458_90;
	}
	A1 += 44;
	ZZ_CLOCKCYCLES(3,0x80015518);
ZZ_15458_C0:
	V0 = R0;
	ZZ_CLOCKCYCLES(1,0x8001551C);
ZZ_15458_C4:
	if (!V0)
	{
		ZZ_CLOCKCYCLES(2,0x800154B4);
		goto ZZ_15458_5C;
	}
	V0 = EMU_ReadU32(V0 + 20); //+ 0x14
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 12356); //+ 0xFFFFCFBC
	V0 = (int32_t)V0 >> 1;
	V0 <<= 2;
	V0 += V1;
	S0 = EMU_ReadU32(V0);
	V0 = (int32_t)S0 < -254;
	if (!V0)
	{
		V0 = -255;
		ZZ_CLOCKCYCLES(13,0x800155EC);
		goto ZZ_15458_194;
	}
	V0 = -255;
	if (S0 == V0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(15,0x800156B8);
		goto ZZ_15458_260;
	}
	V0 = 0x1;
	V0 = EMU_ReadU16(S0 + 6); //+ 0x6
	V0 -= 2;
	V0 = V0 < 2;
	if (V0)
	{
		ZZ_CLOCKCYCLES(21,0x800154B4);
		goto ZZ_15458_5C;
	}
	if ((int32_t)S2 <= 0)
	{
		S1 = R0;
		ZZ_CLOCKCYCLES(23,0x800156AC);
		goto ZZ_15458_254;
	}
	S1 = R0;
	ZZ_CLOCKCYCLES(23,0x80015578);
ZZ_15458_120:
	V0 = EMU_ReadS16(S0 + 10); //+ 0xA
	if ((int32_t)V0 <= 0)
	{
		V1 = V0;
		ZZ_CLOCKCYCLES(4,0x800155CC);
		goto ZZ_15458_174;
	}
	V1 = V0;
	V0 = V1 - 1;
	EMU_Write16(S0 + 10,V0); //+ 0xA
	V0 <<= 16;
	if ((int32_t)V0 > 0)
	{
		ZZ_CLOCKCYCLES(9,0x800155CC);
		goto ZZ_15458_174;
	}
	V0 = EMU_ReadS16(S0 + 6); //+ 0x6
	if (V0)
	{
		ZZ_CLOCKCYCLES(13,0x800155CC);
		goto ZZ_15458_174;
	}
	RA = 0x800155B4; //ZZ_15458_15C
	A0 = S0;
	ZZ_CLOCKCYCLES(15,0x80014930);
	goto ZZ_14930;
ZZ_15458_15C:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 12376); //+ 0xFFFFCFA8
	V0 -= 1;
	AT = 0x80060000;
	EMU_Write32(AT - 12376,V0); //+ 0xFFFFCFA8
	ZZ_CLOCKCYCLES(6,0x800155CC);
ZZ_15458_174:
	S1 += 1;
	V0 = (int32_t)S1 < (int32_t)S2;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x800156AC);
		goto ZZ_15458_254;
	}
	ZZ_CLOCKCYCLES(6,0x80015578);
	goto ZZ_15458_120;
ZZ_15458_18C:
	if (S2)
	{
		V0 = (int32_t)A0 >> 1;
		ZZ_CLOCKCYCLES(2,0x800155F4);
		goto ZZ_15458_19C;
	}
	V0 = (int32_t)A0 >> 1;
	ZZ_CLOCKCYCLES(2,0x800155EC);
ZZ_15458_194:
	V0 = R0;
	ZZ_CLOCKCYCLES(2,0x800156B8);
	goto ZZ_15458_260;
ZZ_15458_19C:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 12356); //+ 0xFFFFCFBC
	V0 <<= 2;
	V0 += V1;
	S0 = EMU_ReadU32(V0);
	V0 = (int32_t)S0 < -254;
	if (V0)
	{
		V0 = -255;
		ZZ_CLOCKCYCLES(9,0x80015620);
		goto ZZ_15458_1C8;
	}
	V0 = -255;
	V0 = R0;
	ZZ_CLOCKCYCLES(11,0x800156B8);
	goto ZZ_15458_260;
ZZ_15458_1C8:
	if (S0 == V0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(2,0x800156B8);
		goto ZZ_15458_260;
	}
	V0 = 0x1;
	V0 = EMU_ReadU16(S0 + 6); //+ 0x6
	V0 -= 2;
	V0 = V0 < 2;
	if (V0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(8,0x800156B8);
		goto ZZ_15458_260;
	}
	V0 = 0x1;
	if ((int32_t)S2 <= 0)
	{
		S1 = R0;
		ZZ_CLOCKCYCLES(10,0x800156AC);
		goto ZZ_15458_254;
	}
	S1 = R0;
	ZZ_CLOCKCYCLES(10,0x80015648);
ZZ_15458_1F0:
	V0 = EMU_ReadS16(S0 + 10); //+ 0xA
	if ((int32_t)V0 <= 0)
	{
		V1 = V0;
		ZZ_CLOCKCYCLES(4,0x8001569C);
		goto ZZ_15458_244;
	}
	V1 = V0;
	V0 = V1 - 1;
	EMU_Write16(S0 + 10,V0); //+ 0xA
	V0 <<= 16;
	if ((int32_t)V0 > 0)
	{
		ZZ_CLOCKCYCLES(9,0x8001569C);
		goto ZZ_15458_244;
	}
	V0 = EMU_ReadS16(S0 + 6); //+ 0x6
	if (V0)
	{
		ZZ_CLOCKCYCLES(13,0x8001569C);
		goto ZZ_15458_244;
	}
	RA = 0x80015684; //ZZ_15458_22C
	A0 = S0;
	ZZ_CLOCKCYCLES(15,0x80014930);
	goto ZZ_14930;
ZZ_15458_22C:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 12376); //+ 0xFFFFCFA8
	V0 -= 1;
	AT = 0x80060000;
	EMU_Write32(AT - 12376,V0); //+ 0xFFFFCFA8
	ZZ_CLOCKCYCLES(6,0x8001569C);
ZZ_15458_244:
	S1 += 1;
	V0 = (int32_t)S1 < (int32_t)S2;
	if (V0)
	{
		ZZ_CLOCKCYCLES(4,0x80015648);
		goto ZZ_15458_1F0;
	}
	ZZ_CLOCKCYCLES(4,0x800156AC);
ZZ_15458_254:
	V0 = EMU_ReadS16(S0 + 10); //+ 0xA
	V0 += 1;
	ZZ_CLOCKCYCLES(3,0x800156B8);
ZZ_15458_260:
	RA = EMU_ReadU32(SP + 68); //+ 0x44
	S2 = EMU_ReadU32(SP + 64); //+ 0x40
	S1 = EMU_ReadU32(SP + 60); //+ 0x3C
	S0 = EMU_ReadU32(SP + 56); //+ 0x38
	SP += 72;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x800255C8,ZZ_253A0_228);
	ZZ_JUMPREGISTER(0x80031E9C,ZZ_31D50_14C);
  //ZZ_JUMPREGISTER(0x800232AC,ZZ_201DC_30D0);
	//ZZ_JUMPREGISTER(0x800232BC,ZZ_201DC_30E0);
	ZZ_JUMPREGISTER(0x80033080,ZZ_32FDC_A4);
	ZZ_JUMPREGISTER(0x80025CA0,ZZ_25A60_240);
	ZZ_JUMPREGISTER(0x80033380,ZZ_32FDC_3A4);
	ZZ_JUMPREGISTER(0x800333E8,ZZ_32FDC_40C);
	ZZ_JUMPREGISTER(0x8002688C,ZZ_26650_23C);
	ZZ_JUMPREGISTER(0x80033124,ZZ_32FDC_148);
	ZZ_JUMPREGISTER(0x80033224,ZZ_32FDC_248);
	ZZ_JUMPREGISTER(0x8003154C,ZZ_314C4_88);
	ZZ_JUMPREGISTER(0x80031624,ZZ_314C4_160);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80015458,0x8001548C,ZZ_15458);
ZZ_MARK_TARGET(0x8001548C,0x80015494,ZZ_15458_34);
ZZ_MARK_TARGET(0x80015494,0x80015498,ZZ_15458_3C);
ZZ_MARK_TARGET(0x80015498,0x800154B4,ZZ_15458_40);
ZZ_MARK_TARGET(0x800154B4,0x800154BC,ZZ_15458_5C);
ZZ_MARK_TARGET(0x800154BC,0x800154E8,ZZ_15458_64);
ZZ_MARK_TARGET(0x800154E8,0x8001550C,ZZ_15458_90);
ZZ_MARK_TARGET(0x8001550C,0x80015518,ZZ_15458_B4);
ZZ_MARK_TARGET(0x80015518,0x8001551C,ZZ_15458_C0);
ZZ_MARK_TARGET(0x8001551C,0x80015578,ZZ_15458_C4);
ZZ_MARK_TARGET(0x80015578,0x800155B4,ZZ_15458_120);
ZZ_MARK_TARGET(0x800155B4,0x800155CC,ZZ_15458_15C);
ZZ_MARK_TARGET(0x800155CC,0x800155E4,ZZ_15458_174);
ZZ_MARK_TARGET(0x800155E4,0x800155EC,ZZ_15458_18C);
ZZ_MARK_TARGET(0x800155EC,0x800155F4,ZZ_15458_194);
ZZ_MARK_TARGET(0x800155F4,0x80015620,ZZ_15458_19C);
ZZ_MARK_TARGET(0x80015620,0x80015648,ZZ_15458_1C8);
ZZ_MARK_TARGET(0x80015648,0x80015684,ZZ_15458_1F0);
ZZ_MARK_TARGET(0x80015684,0x8001569C,ZZ_15458_22C);
ZZ_MARK_TARGET(0x8001569C,0x800156AC,ZZ_15458_244);
ZZ_MARK_TARGET(0x800156AC,0x800156B8,ZZ_15458_254);
ZZ_MARK_TARGET(0x800156B8,0x800156D4,ZZ_15458_260);
