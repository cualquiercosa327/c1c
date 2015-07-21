#ifdef ZZ_INCLUDE_CODE
ZZ_26140:
	SP -= 24;
	V0 = 0x63;
	AT = 0x80060000;
	EMU_Write32(AT + 6364,V0); //+ 0x18DC
	V0 = -1;
	AT = 0x80060000;
	EMU_Write32(AT + 6360,V0); //+ 0x18D8
	V0 = 0x7;
	AT = 0x80060000;
	EMU_Write32(AT + 6356,V0); //+ 0x18D4
	V0 = 0xFF;
	AT = 0x80060000;
	EMU_Write32(AT + 6420,V0); //+ 0x1914
	AT = 0x80060000;
	EMU_Write32(AT + 6424,V0); //+ 0x1918
	V0 = 0x400;
	AT = 0x80060000;
	EMU_Write32(AT + 6408,V0); //+ 0x1908
	V0 = 0x1;
	EMU_Write32(SP + 16,RA); //+ 0x10
	AT = 0x80060000;
	EMU_Write32(AT + 6368,R0); //+ 0x18E0
	AT = 0x80060000;
	EMU_Write32(AT + 6412,R0); //+ 0x190C
	AT = 0x80060000;
	EMU_Write32(AT + 6416,R0); //+ 0x1910
	AT = 0x80060000;
	EMU_Write32(AT + 6468,V0); //+ 0x1944
	AT = 0x80060000;
	EMU_Write32(AT + 6556,R0); //+ 0x199C
	AT = 0x80060000;
	EMU_Write32(AT + 6720,R0); //+ 0x1A40
	AT = 0x80060000;
	EMU_Write32(AT + 6744,R0); //+ 0x1A58
	AT = 0x80060000;
	EMU_Write32(AT + 6352,R0); //+ 0x18D0
	AT = 0x80060000;
	EMU_Write32(AT + 6684,R0); //+ 0x1A1C
	AT = 0x80060000;
	EMU_Write32(AT + 6688,R0); //+ 0x1A20
	AT = 0x80060000;
	EMU_Write32(AT + 6736,V0); //+ 0x1A50
	RA = 0x800261F0; //ZZ_26140_B0
	A0 = 0x1;
	ZZ_CLOCKCYCLES(44,0x80026200);
	goto ZZ_26200;
ZZ_26140_B0:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80026140,0x800261F0,ZZ_26140);
ZZ_MARK_TARGET(0x800261F0,0x80026200,ZZ_26140_B0);
