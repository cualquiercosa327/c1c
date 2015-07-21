#ifdef ZZ_INCLUDE_CODE
ZZ_26200:
	SP -= 24;
	if (!A0)
	{
		EMU_Write32(SP + 16,RA); //+ 0x10
		ZZ_CLOCKCYCLES(3,0x800262CC);
		goto ZZ_26200_CC;
	}
	EMU_Write32(SP + 16,RA); //+ 0x10
	V1 = 0x1;
	V0 = -1;
	AT = 0x80060000;
	EMU_Write32(AT + 6560,V0); //+ 0x19A0
	V0 = 0x63;
	A1 = R0;
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 6408); //+ 0x1908
	AT = 0x80060000;
	EMU_Write32(AT + 6716,R0); //+ 0x1A3C
	AT = 0x80060000;
	EMU_Write32(AT + 6304,R0); //+ 0x18A0
	AT = 0x80060000;
	EMU_Write32(AT + 6384,R0); //+ 0x18F0
	AT = 0x80060000;
	EMU_Write32(AT + 6388,R0); //+ 0x18F4
	AT = 0x80060000;
	EMU_Write32(AT + 6392,R0); //+ 0x18F8
	AT = 0x80060000;
	EMU_Write32(AT + 6396,R0); //+ 0x18FC
	AT = 0x80060000;
	EMU_Write32(AT + 6400,R0); //+ 0x1900
	AT = 0x80060000;
	EMU_Write32(AT + 6472,V1); //+ 0x1948
	AT = 0x80060000;
	EMU_Write32(AT + 6536,R0); //+ 0x1988
	AT = 0x80060000;
	EMU_Write32(AT + 6572,R0); //+ 0x19AC
	AT = 0x80060000;
	EMU_Write32(AT + 6552,V1); //+ 0x1998
	AT = 0x80060000;
	EMU_Write32(AT + 6364,V0); //+ 0x18DC
	AT = 0x80060000;
	EMU_Write32(AT + 6468,V1); //+ 0x1944
	AT = 0x80060000;
	EMU_Write32(AT + 6684,R0); //+ 0x1A1C
	AT = 0x80060000;
	EMU_Write32(AT + 6688,R0); //+ 0x1A20
	AT = 0x80060000;
	EMU_Write32(AT + 6736,V1); //+ 0x1A50
	AT = 0x80060000;
	EMU_Write32(AT + 6380,A0); //+ 0x18EC
	A0 = 0x80060000;
	A0 -= 7352;
	RA = 0x800262C4; //ZZ_26200_C4
	A2 = 0x200;
	ZZ_CLOCKCYCLES(49,0x8003D720);
	goto ZZ_3D720;
ZZ_26200_C4:
	RA = 0x800262CC; //ZZ_26200_CC
	ZZ_CLOCKCYCLES(2,0x8003D1B4);
	goto ZZ_3D1B4;
ZZ_26200_CC:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80031F94,ZZ_31EB4_E0);
	ZZ_JUMPREGISTER(0x800261F0,ZZ_26140_B0);
	//ZZ_JUMPREGISTER(0x800228CC,ZZ_201DC_26F0);
	ZZ_JUMPREGISTER(0x8003C260,ZZ_3C038_228);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80026200,0x800262C4,ZZ_26200);
ZZ_MARK_TARGET(0x800262C4,0x800262CC,ZZ_26200_C4);
ZZ_MARK_TARGET(0x800262CC,0x800262DC,ZZ_26200_CC);
