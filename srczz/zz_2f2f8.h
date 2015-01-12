#ifdef ZZ_INCLUDE_CODE
ZZ_2F2F8:
	SP -= 24;
	V0 = 0x63;
	AT = 0x80070000;
	EMU_Write32(AT - 12712,V0); //+ 0xFFFFCE58
	V0 = -1;
	AT = 0x80070000;
	EMU_Write32(AT - 12716,V0); //+ 0xFFFFCE54
	V0 = 0x7;
	AT = 0x80070000;
	EMU_Write32(AT - 12720,V0); //+ 0xFFFFCE50
	V0 = 0x100;
	AT = 0x80070000;
	EMU_Write32(AT - 12656,V0); //+ 0xFFFFCE90
	AT = 0x80070000;
	EMU_Write32(AT - 12652,V0); //+ 0xFFFFCE94
	V0 = 0x400;
	AT = 0x80070000;
	EMU_Write32(AT - 12668,V0); //+ 0xFFFFCE84
	V0 = 0x1;
	AT = 0x80070000;
	EMU_Write32(AT - 12412,V0); //+ 0xFFFFCF84
	V0 = 0x80;
	AT = 0x80070000;
	EMU_Write32(AT - 12184,V0); //+ 0xFFFFD068
	AT = 0x80070000;
	EMU_Write32(AT - 12180,V0); //+ 0xFFFFD06C
	V0 = 0xFF;
	EMU_Write32(SP + 16,RA); //+ 0x10
	AT = 0x80070000;
	EMU_Write32(AT - 12708,R0); //+ 0xFFFFCE5C
	AT = 0x80070000;
	EMU_Write32(AT - 12664,R0); //+ 0xFFFFCE88
	AT = 0x80070000;
	EMU_Write32(AT - 12660,R0); //+ 0xFFFFCE8C
	AT = 0x80070000;
	EMU_Write32(AT - 12520,R0); //+ 0xFFFFCF18
	AT = 0x80070000;
	EMU_Write32(AT - 12356,R0); //+ 0xFFFFCFBC
	AT = 0x80070000;
	EMU_Write32(AT - 12332,R0); //+ 0xFFFFCFD4
	AT = 0x80070000;
	EMU_Write32(AT - 12408,R0); //+ 0xFFFFCF88
	AT = 0x80070000;
	EMU_Write32(AT - 12160,R0); //+ 0xFFFFD080
	AT = 0x80070000;
	EMU_Write32(AT - 12188,R0); //+ 0xFFFFD064
	AT = 0x80070000;
	EMU_Write32(AT - 12176,R0); //+ 0xFFFFD070
	AT = 0x80070000;
	EMU_Write32(AT - 12172,R0); //+ 0xFFFFD074
	AT = 0x80070000;
	EMU_Write32(AT - 12168,V0); //+ 0xFFFFD078
	AT = 0x80070000;
	EMU_Write32(AT - 12164,V0); //+ 0xFFFFD07C
	AT = 0x80070000;
	EMU_Write32(AT - 12724,R0); //+ 0xFFFFCE4C
	RA = 0x8002F3E0; //ZZ_2F2F8_E8
	A0 = 0x1;
	ZZ_CLOCKCYCLES(58,0x8002F3F0);
	goto ZZ_2F3F0;
ZZ_2F2F8_E8:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80011824,ZZ_11800_24);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8002F2F8,ZZ_2F2F8);
ZZ_MARK(0x8002F2FC);
ZZ_MARK(0x8002F300);
ZZ_MARK(0x8002F304);
ZZ_MARK(0x8002F308);
ZZ_MARK(0x8002F30C);
ZZ_MARK(0x8002F310);
ZZ_MARK(0x8002F314);
ZZ_MARK(0x8002F318);
ZZ_MARK(0x8002F31C);
ZZ_MARK(0x8002F320);
ZZ_MARK(0x8002F324);
ZZ_MARK(0x8002F328);
ZZ_MARK(0x8002F32C);
ZZ_MARK(0x8002F330);
ZZ_MARK(0x8002F334);
ZZ_MARK(0x8002F338);
ZZ_MARK(0x8002F33C);
ZZ_MARK(0x8002F340);
ZZ_MARK(0x8002F344);
ZZ_MARK(0x8002F348);
ZZ_MARK(0x8002F34C);
ZZ_MARK(0x8002F350);
ZZ_MARK(0x8002F354);
ZZ_MARK(0x8002F358);
ZZ_MARK(0x8002F35C);
ZZ_MARK(0x8002F360);
ZZ_MARK(0x8002F364);
ZZ_MARK(0x8002F368);
ZZ_MARK(0x8002F36C);
ZZ_MARK(0x8002F370);
ZZ_MARK(0x8002F374);
ZZ_MARK(0x8002F378);
ZZ_MARK(0x8002F37C);
ZZ_MARK(0x8002F380);
ZZ_MARK(0x8002F384);
ZZ_MARK(0x8002F388);
ZZ_MARK(0x8002F38C);
ZZ_MARK(0x8002F390);
ZZ_MARK(0x8002F394);
ZZ_MARK(0x8002F398);
ZZ_MARK(0x8002F39C);
ZZ_MARK(0x8002F3A0);
ZZ_MARK(0x8002F3A4);
ZZ_MARK(0x8002F3A8);
ZZ_MARK(0x8002F3AC);
ZZ_MARK(0x8002F3B0);
ZZ_MARK(0x8002F3B4);
ZZ_MARK(0x8002F3B8);
ZZ_MARK(0x8002F3BC);
ZZ_MARK(0x8002F3C0);
ZZ_MARK(0x8002F3C4);
ZZ_MARK(0x8002F3C8);
ZZ_MARK(0x8002F3CC);
ZZ_MARK(0x8002F3D0);
ZZ_MARK(0x8002F3D4);
ZZ_MARK(0x8002F3D8);
ZZ_MARK(0x8002F3DC);
ZZ_MARK_TARGET(0x8002F3E0,ZZ_2F2F8_E8);
ZZ_MARK(0x8002F3E4);
ZZ_MARK(0x8002F3E8);
ZZ_MARK(0x8002F3EC);
