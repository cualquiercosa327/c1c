#ifdef ZZ_INCLUDE_CODE
ZZ_2F3F0:
	SP -= 24;
	if (!A0)
	{
		EMU_Write32(SP + 16,RA); //+ 0x10
		ZZ_CLOCKCYCLES(3,0x8002F52C);
		goto ZZ_2F3F0_13C;
	}
	EMU_Write32(SP + 16,RA); //+ 0x10
	A3 = 0x80070000;
	A3 = EMU_ReadU32(A3 - 12668); //+ 0xFFFFCE84
	A0 = 0x80070000;
	A0 -= 26192;
	A1 = R0;
	V1 = -1;
	V0 = 0x63;
	AT = 0x80070000;
	EMU_Write32(AT - 12268,R0); //+ 0xFFFFD014
	AT = 0x80070000;
	EMU_Write32(AT - 12360,R0); //+ 0xFFFFCFB8
	AT = 0x80070000;
	EMU_Write32(AT - 12772,R0); //+ 0xFFFFCE1C
	AT = 0x80070000;
	EMU_Write32(AT - 12648,R0); //+ 0xFFFFCE98
	AT = 0x80070000;
	EMU_Write32(AT - 12328,R0); //+ 0xFFFFCFD8
	AT = 0x80070000;
	EMU_Write32(AT - 12692,R0); //+ 0xFFFFCE6C
	AT = 0x80070000;
	EMU_Write32(AT - 12688,R0); //+ 0xFFFFCE70
	AT = 0x80070000;
	EMU_Write32(AT - 12684,R0); //+ 0xFFFFCE74
	AT = 0x80070000;
	EMU_Write32(AT - 12680,R0); //+ 0xFFFFCE78
	AT = 0x80070000;
	EMU_Write32(AT - 12608,R0); //+ 0xFFFFCEC0
	AT = 0x80070000;
	EMU_Write32(AT - 12604,R0); //+ 0xFFFFCEC4
	AT = 0x80070000;
	EMU_Write32(AT - 12228,R0); //+ 0xFFFFD03C
	AT = 0x80070000;
	EMU_Write32(AT - 12224,R0); //+ 0xFFFFD040
	AT = 0x80070000;
	EMU_Write32(AT - 12192,R0); //+ 0xFFFFD060
	AT = 0x80070000;
	EMU_Write32(AT - 12568,R0); //+ 0xFFFFCEE8
	AT = 0x80070000;
	EMU_Write32(AT - 12564,R0); //+ 0xFFFFCEEC
	AT = 0x80070000;
	EMU_Write32(AT - 12600,R0); //+ 0xFFFFCEC8
	AT = 0x80070000;
	EMU_Write32(AT - 12596,R0); //+ 0xFFFFCECC
	AT = 0x80070000;
	EMU_Write32(AT - 12516,V1); //+ 0xFFFFCF1C
	AT = 0x80070000;
	EMU_Write32(AT - 12712,V0); //+ 0xFFFFCE58
	AT = 0x80070000;
	EMU_Write32(AT - 12436,V0); //+ 0xFFFFCF6C
	AT = 0x80070000;
	EMU_Write32(AT - 12432,R0); //+ 0xFFFFCF70
	AT = 0x80070000;
	EMU_Write32(AT - 12752,R0); //+ 0xFFFFCE30
	AT = 0x80070000;
	EMU_Write32(AT - 12540,R0); //+ 0xFFFFCF04
	AT = 0x80070000;
	EMU_Write32(AT - 12536,R0); //+ 0xFFFFCF08
	AT = 0x80070000;
	EMU_Write32(AT - 12512,R0); //+ 0xFFFFCF20
	AT = 0x80070000;
	EMU_Write32(AT - 12508,R0); //+ 0xFFFFCF24
	AT = 0x80070000;
	EMU_Write32(AT - 12212,V1); //+ 0xFFFFD04C
	AT = 0x80070000;
	EMU_Write32(AT - 12208,R0); //+ 0xFFFFD050
	AT = 0x80070000;
	EMU_Write32(AT - 12696,A3); //+ 0xFFFFCE68
	RA = 0x8002F510; //ZZ_2F3F0_120
	A2 = 0x200;
	ZZ_CLOCKCYCLES(72,0x800494CC);
	goto ZZ_494CC;
ZZ_2F3F0_120:
	A0 = 0x80070000;
	A0 -= 27148;
	A1 = R0;
	RA = 0x8002F524; //ZZ_2F3F0_134
	A2 = 0x200;
	ZZ_CLOCKCYCLES(5,0x800494CC);
	goto ZZ_494CC;
ZZ_2F3F0_134:
	AT = 0x80070000;
	EMU_Write32(AT - 12700,R0); //+ 0xFFFFCE64
	ZZ_CLOCKCYCLES(2,0x8002F52C);
ZZ_2F3F0_13C:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x8002F3E0,ZZ_2F2F8_E8);
	ZZ_JUMPREGISTER(0x80038088,ZZ_37930_758);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8002F3F0,ZZ_2F3F0);
ZZ_MARK(0x8002F3F4);
ZZ_MARK(0x8002F3F8);
ZZ_MARK(0x8002F3FC);
ZZ_MARK(0x8002F400);
ZZ_MARK(0x8002F404);
ZZ_MARK(0x8002F408);
ZZ_MARK(0x8002F40C);
ZZ_MARK(0x8002F410);
ZZ_MARK(0x8002F414);
ZZ_MARK(0x8002F418);
ZZ_MARK(0x8002F41C);
ZZ_MARK(0x8002F420);
ZZ_MARK(0x8002F424);
ZZ_MARK(0x8002F428);
ZZ_MARK(0x8002F42C);
ZZ_MARK(0x8002F430);
ZZ_MARK(0x8002F434);
ZZ_MARK(0x8002F438);
ZZ_MARK(0x8002F43C);
ZZ_MARK(0x8002F440);
ZZ_MARK(0x8002F444);
ZZ_MARK(0x8002F448);
ZZ_MARK(0x8002F44C);
ZZ_MARK(0x8002F450);
ZZ_MARK(0x8002F454);
ZZ_MARK(0x8002F458);
ZZ_MARK(0x8002F45C);
ZZ_MARK(0x8002F460);
ZZ_MARK(0x8002F464);
ZZ_MARK(0x8002F468);
ZZ_MARK(0x8002F46C);
ZZ_MARK(0x8002F470);
ZZ_MARK(0x8002F474);
ZZ_MARK(0x8002F478);
ZZ_MARK(0x8002F47C);
ZZ_MARK(0x8002F480);
ZZ_MARK(0x8002F484);
ZZ_MARK(0x8002F488);
ZZ_MARK(0x8002F48C);
ZZ_MARK(0x8002F490);
ZZ_MARK(0x8002F494);
ZZ_MARK(0x8002F498);
ZZ_MARK(0x8002F49C);
ZZ_MARK(0x8002F4A0);
ZZ_MARK(0x8002F4A4);
ZZ_MARK(0x8002F4A8);
ZZ_MARK(0x8002F4AC);
ZZ_MARK(0x8002F4B0);
ZZ_MARK(0x8002F4B4);
ZZ_MARK(0x8002F4B8);
ZZ_MARK(0x8002F4BC);
ZZ_MARK(0x8002F4C0);
ZZ_MARK(0x8002F4C4);
ZZ_MARK(0x8002F4C8);
ZZ_MARK(0x8002F4CC);
ZZ_MARK(0x8002F4D0);
ZZ_MARK(0x8002F4D4);
ZZ_MARK(0x8002F4D8);
ZZ_MARK(0x8002F4DC);
ZZ_MARK(0x8002F4E0);
ZZ_MARK(0x8002F4E4);
ZZ_MARK(0x8002F4E8);
ZZ_MARK(0x8002F4EC);
ZZ_MARK(0x8002F4F0);
ZZ_MARK(0x8002F4F4);
ZZ_MARK(0x8002F4F8);
ZZ_MARK(0x8002F4FC);
ZZ_MARK(0x8002F500);
ZZ_MARK(0x8002F504);
ZZ_MARK(0x8002F508);
ZZ_MARK(0x8002F50C);
ZZ_MARK_TARGET(0x8002F510,ZZ_2F3F0_120);
ZZ_MARK(0x8002F514);
ZZ_MARK(0x8002F518);
ZZ_MARK(0x8002F51C);
ZZ_MARK(0x8002F520);
ZZ_MARK_TARGET(0x8002F524,ZZ_2F3F0_134);
ZZ_MARK(0x8002F528);
ZZ_MARK_TARGET(0x8002F52C,ZZ_2F3F0_13C);
ZZ_MARK(0x8002F530);
ZZ_MARK(0x8002F534);
ZZ_MARK(0x8002F538);
