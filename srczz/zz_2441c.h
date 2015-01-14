#ifdef ZZ_INCLUDE_CODE
ZZ_2441C:
	SP -= 24;
	V0 = 0x5;
	AT = 0x80060000;
	EMU_Write8(AT - 17364,V0); //+ 0xFFFFBC2C
	V0 = 0x1001;
	AT = 0x80060000;
	EMU_Write32(AT + 2992,V0); //+ 0xBB0
	AT = 0x80060000;
	EMU_Write32(AT - 17340,V0); //+ 0xFFFFBC44
	V0 = 0x5;
	AT = 0x80060000;
	EMU_Write32(AT + 2952,V0); //+ 0xB88
	V0 = 0x100;
	EMU_Write32(SP + 16,RA); //+ 0x10
	AT = 0x80060000;
	EMU_Write32(AT + 2960,R0); //+ 0xB90
	AT = 0x80060000;
	EMU_Write32(AT - 17288,R0); //+ 0xFFFFBC78
	AT = 0x80060000;
	EMU_Write32(AT - 17284,R0); //+ 0xFFFFBC7C
	AT = 0x80060000;
	EMU_Write32(AT - 17316,R0); //+ 0xFFFFBC5C
	AT = 0x80060000;
	EMU_Write8(AT - 17358,R0); //+ 0xFFFFBC32
	AT = 0x80060000;
	EMU_Write32(AT - 17324,R0); //+ 0xFFFFBC54
	AT = 0x80060000;
	EMU_Write32(AT - 17320,R0); //+ 0xFFFFBC58
	AT = 0x80060000;
	EMU_Write32(AT - 17260,R0); //+ 0xFFFFBC94
	AT = 0x80060000;
	EMU_Write32(AT - 17264,R0); //+ 0xFFFFBC90
	AT = 0x80060000;
	EMU_Write32(AT - 17268,R0); //+ 0xFFFFBC8C
	AT = 0x80060000;
	EMU_Write32(AT - 17240,R0); //+ 0xFFFFBCA8
	AT = 0x80060000;
	EMU_Write32(AT - 17244,R0); //+ 0xFFFFBCA4
	AT = 0x80060000;
	EMU_Write32(AT - 17248,R0); //+ 0xFFFFBCA0
	AT = 0x80070000;
	EMU_Write32(AT - 12240,V0); //+ 0xFFFFD030
	RA = 0x800244CC; //ZZ_2441C_B0
	A0 = 0x1;
	ZZ_CLOCKCYCLES(44,0x80022480);
	goto ZZ_22480;
ZZ_2441C_B0:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x8002440C,ZZ_243FC_10);
	ZZ_JUMPREGISTER(0x8002FBD0,ZZ_2F9D4_1FC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8002441C,ZZ_2441C);
ZZ_MARK(0x80024420);
ZZ_MARK(0x80024424);
ZZ_MARK(0x80024428);
ZZ_MARK(0x8002442C);
ZZ_MARK(0x80024430);
ZZ_MARK(0x80024434);
ZZ_MARK(0x80024438);
ZZ_MARK(0x8002443C);
ZZ_MARK(0x80024440);
ZZ_MARK(0x80024444);
ZZ_MARK(0x80024448);
ZZ_MARK(0x8002444C);
ZZ_MARK(0x80024450);
ZZ_MARK(0x80024454);
ZZ_MARK(0x80024458);
ZZ_MARK(0x8002445C);
ZZ_MARK(0x80024460);
ZZ_MARK(0x80024464);
ZZ_MARK(0x80024468);
ZZ_MARK(0x8002446C);
ZZ_MARK(0x80024470);
ZZ_MARK(0x80024474);
ZZ_MARK(0x80024478);
ZZ_MARK(0x8002447C);
ZZ_MARK(0x80024480);
ZZ_MARK(0x80024484);
ZZ_MARK(0x80024488);
ZZ_MARK(0x8002448C);
ZZ_MARK(0x80024490);
ZZ_MARK(0x80024494);
ZZ_MARK(0x80024498);
ZZ_MARK(0x8002449C);
ZZ_MARK(0x800244A0);
ZZ_MARK(0x800244A4);
ZZ_MARK(0x800244A8);
ZZ_MARK(0x800244AC);
ZZ_MARK(0x800244B0);
ZZ_MARK(0x800244B4);
ZZ_MARK(0x800244B8);
ZZ_MARK(0x800244BC);
ZZ_MARK(0x800244C0);
ZZ_MARK(0x800244C4);
ZZ_MARK(0x800244C8);
ZZ_MARK_TARGET(0x800244CC,ZZ_2441C_B0);
ZZ_MARK(0x800244D0);
ZZ_MARK(0x800244D4);
ZZ_MARK(0x800244D8);