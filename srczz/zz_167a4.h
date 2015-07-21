#ifdef ZZ_INCLUDE_CODE
ZZ_167A4:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 6376); //+ 0xFFFFE718
	SP -= 64;
	EMU_Write32(SP + 44,S1); //+ 0x2C
	S1 = R0;
	EMU_Write32(SP + 60,RA); //+ 0x3C
	EMU_Write32(SP + 56,S4); //+ 0x38
	EMU_Write32(SP + 52,S3); //+ 0x34
	EMU_Write32(SP + 48,S2); //+ 0x30
	if ((int32_t)V0 <= 0)
	{
		EMU_Write32(SP + 40,S0); //+ 0x28
		ZZ_CLOCKCYCLES(11,0x80016948);
		goto ZZ_167A4_1A4;
	}
	EMU_Write32(SP + 40,S0); //+ 0x28
	S3 = 0x80060000;
	S3 += 6704;
	S4 = 0x3;
	S2 = R0;
	ZZ_CLOCKCYCLES(15,0x800167E0);
ZZ_167A4_3C:
	V0 = 0x80060000;
	V0 -= 6372;
	S0 = S2 + V0;
	V0 = EMU_ReadU32(S0 + 8); //+ 0x8
	V1 = EMU_ReadU32(S0 + 4); //+ 0x4
	A1 = EMU_ReadU32(S0);
	A0 = S1;
	EMU_Write32(S0 + 16,V0); //+ 0x10
	EMU_Write32(S0 + 8,V1); //+ 0x8
	RA = 0x8001680C; //ZZ_167A4_68
	EMU_Write32(S0 + 12,A1); //+ 0xC
	ZZ_CLOCKCYCLES(11,0x8003E460);
	goto ZZ_3E460;
ZZ_167A4_68:
	if (S1)
	{
		V1 = V0 >> 16;
		ZZ_CLOCKCYCLES(2,0x80016818);
		goto ZZ_167A4_74;
	}
	V1 = V0 >> 16;
	V1 = V0 & 0xFFFF;
	ZZ_CLOCKCYCLES(3,0x80016818);
ZZ_167A4_74:
	V0 = V1 & 0x1000;
	if (!V0)
	{
		EMU_Write32(S0 + 4,V1); //+ 0x4
		ZZ_CLOCKCYCLES(3,0x8001682C);
		goto ZZ_167A4_88;
	}
	EMU_Write32(S0 + 4,V1); //+ 0x4
	V0 = V1 & 0xBFFF;
	EMU_Write32(S0 + 4,V0); //+ 0x4
	ZZ_CLOCKCYCLES(5,0x8001682C);
ZZ_167A4_88:
	V1 = EMU_ReadU32(S0 + 4); //+ 0x4
	V0 = V1 & 0x8000;
	if (!V0)
	{
		V0 = -8193;
		ZZ_CLOCKCYCLES(5,0x80016848);
		goto ZZ_167A4_A4;
	}
	V0 = -8193;
	V0 &= V1;
	EMU_Write32(S0 + 4,V0); //+ 0x4
	ZZ_CLOCKCYCLES(7,0x80016848);
ZZ_167A4_A4:
	if (S1)
	{
		V0 = 0x2;
		ZZ_CLOCKCYCLES(2,0x80016918);
		goto ZZ_167A4_174;
	}
	V0 = 0x2;
	V1 = EMU_ReadU32(S3);
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(6,0x80016870);
		goto ZZ_167A4_CC;
	}
	if (V1 != S4)
	{
		ZZ_CLOCKCYCLES(8,0x80016918);
		goto ZZ_167A4_174;
	}
	EMU_Write32(S0 + 4,R0); //+ 0x4
	ZZ_CLOCKCYCLES(10,0x80016918);
	goto ZZ_167A4_174;
ZZ_167A4_CC:
	A0 = EMU_ReadU32(GP + 776); //+ 0x308
	V0 = EMU_ReadU32(GP + 684); //+ 0x2AC
	A1 = EMU_ReadU32(S0 + 4); //+ 0x4
	V1 = A0 + 1324;
	if (V0 != V1)
	{
		ZZ_CLOCKCYCLES(6,0x800168A0);
		goto ZZ_167A4_FC;
	}
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 31740); //+ 0xFFFF8404
	V0 = EMU_ReadU32(A0 + 1320); //+ 0x528
	EMU_Write32(V1 + 132,V0); //+ 0x84
	V0 = EMU_ReadU32(GP + 684); //+ 0x2AC
	ZZ_CLOCKCYCLES(12,0x800168A0);
ZZ_167A4_FC:
	A0 = V0 + 8;
	V1 = EMU_ReadU32(V0 + 4); //+ 0x4
	V0 = A1 & 0x9F0;
	EMU_Write32(GP + 684,A0); //+ 0x2AC
	if (V0)
	{
		EMU_Write32(S0 + 4,V1); //+ 0x4
		ZZ_CLOCKCYCLES(7,0x800168E4);
		goto ZZ_167A4_140;
	}
	EMU_Write32(S0 + 4,V1); //+ 0x4
	V1 = EMU_ReadU32(GP + 776); //+ 0x308
	V0 = EMU_ReadU32(V1);
	V0 <<= 3;
	V0 += 1324;
	V0 += V1;
	V0 = A0 < V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(17,0x80016918);
		goto ZZ_167A4_174;
	}
	ZZ_CLOCKCYCLES(17,0x800168E4);
ZZ_167A4_140:
	A1 = EMU_ReadU32(S3 - 116); //+ 0xFFFFFF8C
	if (!A1)
	{
		EMU_Write32(SP + 24,R0); //+ 0x18
		ZZ_CLOCKCYCLES(4,0x80016914);
		goto ZZ_167A4_170;
	}
	EMU_Write32(SP + 24,R0); //+ 0x18
	A0 = R0;
	V0 = SP + 24;
	A2 = 0xE00;
	A3 = 0x1;
	RA = 0x8001690C; //ZZ_167A4_168
	EMU_Write32(SP + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(10,0x80024040);
	goto ZZ_24040;
ZZ_167A4_168:
	EMU_Write32(S3,S4);
	ZZ_CLOCKCYCLES(2,0x80016918);
	goto ZZ_167A4_174;
ZZ_167A4_170:
	EMU_Write32(S3,R0);
	ZZ_CLOCKCYCLES(1,0x80016918);
ZZ_167A4_174:
	V0 = EMU_ReadU32(S0 + 8); //+ 0x8
	V1 = EMU_ReadU32(S0 + 4); //+ 0x4
	V0 = ~V0;
	V0 &= V1;
	V0 &= 0xF9FF;
	EMU_Write32(S0,V0);
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 6376); //+ 0xFFFFE718
	S1 += 1;
	V0 = (int32_t)S1 < (int32_t)V0;
	if (V0)
	{
		S2 += 20;
		ZZ_CLOCKCYCLES(12,0x800167E0);
		goto ZZ_167A4_3C;
	}
	S2 += 20;
	ZZ_CLOCKCYCLES(12,0x80016948);
ZZ_167A4_1A4:
  /* begin extending code */
  #if C1C_ENABLE_INGAMEMENU
  do {} while(0);
  uint32_t pressed = EMU_ReadU32(0x8005E71C);
  uint32_t held = EMU_ReadU32(0x8005E720); 
  // remember buttons held/pressed for ext. use
  EMU_Write32(0x80057928,pressed); // I -think- these mem. locations
  EMU_Write32(0x8005792C,held);    // are unused by the game
  #endif
  /* end extending code */
	RA = EMU_ReadU32(SP + 60); //+ 0x3C
	S4 = EMU_ReadU32(SP + 56); //+ 0x38
	S3 = EMU_ReadU32(SP + 52); //+ 0x34
	S2 = EMU_ReadU32(SP + 48); //+ 0x30
	S1 = EMU_ReadU32(SP + 44); //+ 0x2C
	S0 = EMU_ReadU32(SP + 40); //+ 0x28
	SP += 64;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(9);
	ZZ_JUMPREGISTER(0x80011DE0,ZZ_11DD0_10);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800167A4,0x800167E0,ZZ_167A4);
ZZ_MARK_TARGET(0x800167E0,0x8001680C,ZZ_167A4_3C);
ZZ_MARK_TARGET(0x8001680C,0x80016818,ZZ_167A4_68);
ZZ_MARK_TARGET(0x80016818,0x8001682C,ZZ_167A4_74);
ZZ_MARK_TARGET(0x8001682C,0x80016848,ZZ_167A4_88);
ZZ_MARK_TARGET(0x80016848,0x80016870,ZZ_167A4_A4);
ZZ_MARK_TARGET(0x80016870,0x800168A0,ZZ_167A4_CC);
ZZ_MARK_TARGET(0x800168A0,0x800168E4,ZZ_167A4_FC);
ZZ_MARK_TARGET(0x800168E4,0x8001690C,ZZ_167A4_140);
ZZ_MARK_TARGET(0x8001690C,0x80016914,ZZ_167A4_168);
ZZ_MARK_TARGET(0x80016914,0x80016918,ZZ_167A4_170);
ZZ_MARK_TARGET(0x80016918,0x80016948,ZZ_167A4_174);
ZZ_MARK_TARGET(0x80016948,0x8001696C,ZZ_167A4_1A4);
