#ifdef ZZ_INCLUDE_CODE
ZZ_17AB0:
	SP -= 24;
	A0 = 0x120;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = 0x80060000;
	S0 += 2844;
	V0 = 0x120;
	EMU_Write32(SP + 20,RA); //+ 0x14
	AT = 0x80060000;
	EMU_Write32(AT + 996,R0); //+ 0x3E4
	AT = 0x80060000;
	EMU_Write32(AT + 992,R0); //+ 0x3E0
	AT = 0x80060000;
	EMU_Write32(AT + 988,R0); //+ 0x3DC
	RA = 0x80017AEC; //ZZ_17AB0_3C
	EMU_Write32(S0,V0);
	ZZ_CLOCKCYCLES(15,0x8004F2A0);
	goto ZZ_4F2A0;
ZZ_17AB0_3C:
	A0 = R0;
	RA = 0x80017AF8; //ZZ_17AB0_48
	A1 = R0;
	ZZ_CLOCKCYCLES(3,0x8004F280);
	goto ZZ_4F280;
ZZ_17AB0_48:
	A0 = R0;
	A1 = R0;
	V0 = 0x1000;
	AT = 0x80060000;
	EMU_Write16(AT + 2816,V0); //+ 0xB00
	V0 = 0x200;
	AT = 0x80060000;
	EMU_Write16(AT + 2812,R0); //+ 0xAFC
	AT = 0x80060000;
	EMU_Write16(AT + 2814,R0); //+ 0xAFE
	AT = 0x80060000;
	EMU_Write32(AT + 2832,R0); //+ 0xB10
	AT = 0x80060000;
	EMU_Write32(AT + 2836,R0); //+ 0xB14
	AT = 0x80060000;
	EMU_Write32(AT + 2840,R0); //+ 0xB18
	EMU_Write16(S0 + 8,V0); //+ 0x8
	AT = 0x80060000;
	EMU_Write16(AT + 2858,V0); //+ 0xB2A
	AT = 0x80060000;
	EMU_Write16(AT + 2864,V0); //+ 0xB30
	AT = 0x80060000;
	EMU_Write16(AT + 2854,V0); //+ 0xB26
	AT = 0x80060000;
	EMU_Write16(AT + 2860,V0); //+ 0xB2C
	AT = 0x80060000;
	EMU_Write16(AT + 2866,V0); //+ 0xB32
	AT = 0x80060000;
	EMU_Write16(AT + 2856,V0); //+ 0xB28
	AT = 0x80060000;
	EMU_Write16(AT + 2862,V0); //+ 0xB2E
	AT = 0x80060000;
	EMU_Write16(AT + 2868,V0); //+ 0xB34
	RA = 0x80017B84; //ZZ_17AB0_D4
	A2 = R0;
	ZZ_CLOCKCYCLES(35,0x8004F260);
	goto ZZ_4F260;
ZZ_17AB0_D4:
	RA = 0x80017B8C; //ZZ_17AB0_DC
	A0 = S0 + 8;
	ZZ_CLOCKCYCLES(2,0x8004F1F0);
	goto ZZ_4F1F0;
ZZ_17AB0_DC:
	RA = 0x80017B94; //ZZ_17AB0_E4
	A0 = S0 - 144;
	ZZ_CLOCKCYCLES(2,0x8001828C);
	goto ZZ_1828C;
ZZ_17AB0_E4:
	V0 = 0x10000;
	V0 |= 0xF400;
	A0 = 0xE0000;
	A0 |= 0x1000;
	V1 = 0x5D0000;
	V1 |= 0xC000;
	EMU_Write32(S0 - 144,R0); //+ 0xFFFFFF70
	AT = 0x80060000;
	EMU_Write32(AT + 2704,R0); //+ 0xA90
	AT = 0x80060000;
	EMU_Write32(AT + 2708,V0); //+ 0xA94
	AT = 0x80060000;
	EMU_Write32(AT + 2712,R0); //+ 0xA98
	AT = 0x80060000;
	EMU_Write32(AT + 2716,R0); //+ 0xA9C
	AT = 0x80060000;
	EMU_Write32(AT + 2720,R0); //+ 0xAA0
	AT = 0x80060000;
	EMU_Write32(AT + 2772,R0); //+ 0xAD4
	AT = 0x80060000;
	EMU_Write32(AT + 2776,A0); //+ 0xAD8
	AT = 0x80060000;
	EMU_Write32(AT + 2780,V1); //+ 0xADC
	AT = 0x80060000;
	EMU_Write32(AT + 2808,R0); //+ 0xAF8
	AT = 0x80070000;
	EMU_Write32(AT - 12616,R0); //+ 0xFFFFCEB8
	AT = 0x80070000;
	EMU_Write32(AT - 12612,R0); //+ 0xFFFFCEBC
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(34);
	ZZ_JUMPREGISTER(0x8001FE90,ZZ_1FC0C_284);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80017AB0,ZZ_17AB0);
ZZ_MARK(0x80017AB4);
ZZ_MARK(0x80017AB8);
ZZ_MARK(0x80017ABC);
ZZ_MARK(0x80017AC0);
ZZ_MARK(0x80017AC4);
ZZ_MARK(0x80017AC8);
ZZ_MARK(0x80017ACC);
ZZ_MARK(0x80017AD0);
ZZ_MARK(0x80017AD4);
ZZ_MARK(0x80017AD8);
ZZ_MARK(0x80017ADC);
ZZ_MARK(0x80017AE0);
ZZ_MARK(0x80017AE4);
ZZ_MARK(0x80017AE8);
ZZ_MARK_TARGET(0x80017AEC,ZZ_17AB0_3C);
ZZ_MARK(0x80017AF0);
ZZ_MARK(0x80017AF4);
ZZ_MARK_TARGET(0x80017AF8,ZZ_17AB0_48);
ZZ_MARK(0x80017AFC);
ZZ_MARK(0x80017B00);
ZZ_MARK(0x80017B04);
ZZ_MARK(0x80017B08);
ZZ_MARK(0x80017B0C);
ZZ_MARK(0x80017B10);
ZZ_MARK(0x80017B14);
ZZ_MARK(0x80017B18);
ZZ_MARK(0x80017B1C);
ZZ_MARK(0x80017B20);
ZZ_MARK(0x80017B24);
ZZ_MARK(0x80017B28);
ZZ_MARK(0x80017B2C);
ZZ_MARK(0x80017B30);
ZZ_MARK(0x80017B34);
ZZ_MARK(0x80017B38);
ZZ_MARK(0x80017B3C);
ZZ_MARK(0x80017B40);
ZZ_MARK(0x80017B44);
ZZ_MARK(0x80017B48);
ZZ_MARK(0x80017B4C);
ZZ_MARK(0x80017B50);
ZZ_MARK(0x80017B54);
ZZ_MARK(0x80017B58);
ZZ_MARK(0x80017B5C);
ZZ_MARK(0x80017B60);
ZZ_MARK(0x80017B64);
ZZ_MARK(0x80017B68);
ZZ_MARK(0x80017B6C);
ZZ_MARK(0x80017B70);
ZZ_MARK(0x80017B74);
ZZ_MARK(0x80017B78);
ZZ_MARK(0x80017B7C);
ZZ_MARK(0x80017B80);
ZZ_MARK_TARGET(0x80017B84,ZZ_17AB0_D4);
ZZ_MARK(0x80017B88);
ZZ_MARK_TARGET(0x80017B8C,ZZ_17AB0_DC);
ZZ_MARK(0x80017B90);
ZZ_MARK_TARGET(0x80017B94,ZZ_17AB0_E4);
ZZ_MARK(0x80017B98);
ZZ_MARK(0x80017B9C);
ZZ_MARK(0x80017BA0);
ZZ_MARK(0x80017BA4);
ZZ_MARK(0x80017BA8);
ZZ_MARK(0x80017BAC);
ZZ_MARK(0x80017BB0);
ZZ_MARK(0x80017BB4);
ZZ_MARK(0x80017BB8);
ZZ_MARK(0x80017BBC);
ZZ_MARK(0x80017BC0);
ZZ_MARK(0x80017BC4);
ZZ_MARK(0x80017BC8);
ZZ_MARK(0x80017BCC);
ZZ_MARK(0x80017BD0);
ZZ_MARK(0x80017BD4);
ZZ_MARK(0x80017BD8);
ZZ_MARK(0x80017BDC);
ZZ_MARK(0x80017BE0);
ZZ_MARK(0x80017BE4);
ZZ_MARK(0x80017BE8);
ZZ_MARK(0x80017BEC);
ZZ_MARK(0x80017BF0);
ZZ_MARK(0x80017BF4);
ZZ_MARK(0x80017BF8);
ZZ_MARK(0x80017BFC);
ZZ_MARK(0x80017C00);
ZZ_MARK(0x80017C04);
ZZ_MARK(0x80017C08);
ZZ_MARK(0x80017C0C);
ZZ_MARK(0x80017C10);
ZZ_MARK(0x80017C14);
ZZ_MARK(0x80017C18);
