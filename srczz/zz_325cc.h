#ifdef ZZ_INCLUDE_CODE
ZZ_325CC:
	SP -= 72;
	V0 = SP + 56;
	EMU_Write32(SP + 16,V0); //+ 0x10
	V0 = SP + 40;
	EMU_Write32(SP + 24,V0); //+ 0x18
	V0 = 0x1;
	EMU_Write32(SP + 20,A3); //+ 0x14
	A3 = R0;
	EMU_Write32(SP + 64,RA); //+ 0x40
	EMU_Write32(SP + 28,V0); //+ 0x1C
	RA = 0x800325FC; //ZZ_325CC_30
	EMU_Write32(SP + 32,R0); //+ 0x20
	ZZ_CLOCKCYCLES(12,0x80031DF4);
	goto ZZ_31DF4;
ZZ_325CC_30:
	if (!V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(2,0x80032608);
		goto ZZ_325CC_3C;
	}
	V0 = R0;
	V0 = EMU_ReadU32(SP + 56); //+ 0x38
	ZZ_CLOCKCYCLES(3,0x80032608);
ZZ_325CC_3C:
	RA = EMU_ReadU32(SP + 64); //+ 0x40
	SP += 72;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x8001F320,ZZ_1F29C_84);
	ZZ_JUMPREGISTER(0x8001F348,ZZ_1F29C_AC);
	ZZ_JUMPREGISTER(0x80020470,ZZ_20304_16C);
	ZZ_JUMPREGISTER(0x800265E8,ZZ_265A8_40);
	ZZ_JUMPREGISTER(0x80023298,ZZ_231CC_CC);
	ZZ_JUMPREGISTER(0x80026AE0,ZZ_26A38_A8);
	ZZ_JUMPREGISTER(0x80026ABC,ZZ_26A38_84);
	ZZ_JUMPREGISTER(0x80026B28,ZZ_26A38_F0);
	ZZ_JUMPREGISTER(0x80026B40,ZZ_26A38_108);
	ZZ_JUMPREGISTER(0x80024518,ZZ_244DC_3C);
	ZZ_JUMPREGISTER(0x80024160,ZZ_240D4_8C);
	ZZ_JUMPREGISTER(0x80024194,ZZ_240D4_C0);
	ZZ_JUMPREGISTER(0x80024310,ZZ_240D4_23C);
	ZZ_JUMPREGISTER(0x800241D0,ZZ_240D4_FC);
	ZZ_JUMPREGISTER(0x80026C14,ZZ_26A38_1DC);
	ZZ_JUMPREGISTER(0x80024380,ZZ_240D4_2AC);
	ZZ_JUMPREGISTER(0x80023358,ZZ_232F8_60);
	ZZ_JUMPREGISTER(0x800268F0,ZZ_26700_1F0);
	ZZ_JUMPREGISTER(0x80024E70,ZZ_24DE0_90);
	ZZ_JUMPREGISTER(0x800257D8,ZZ_25748_90);
	ZZ_JUMPREGISTER(0x80026DC4,ZZ_26C7C_148);
	ZZ_JUMPREGISTER(0x8001967C,ZZ_191D4_4A8);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800325CC,ZZ_325CC);
ZZ_MARK(0x800325D0);
ZZ_MARK(0x800325D4);
ZZ_MARK(0x800325D8);
ZZ_MARK(0x800325DC);
ZZ_MARK(0x800325E0);
ZZ_MARK(0x800325E4);
ZZ_MARK(0x800325E8);
ZZ_MARK(0x800325EC);
ZZ_MARK(0x800325F0);
ZZ_MARK(0x800325F4);
ZZ_MARK(0x800325F8);
ZZ_MARK_TARGET(0x800325FC,ZZ_325CC_30);
ZZ_MARK(0x80032600);
ZZ_MARK(0x80032604);
ZZ_MARK_TARGET(0x80032608,ZZ_325CC_3C);
ZZ_MARK(0x8003260C);
ZZ_MARK(0x80032610);
ZZ_MARK(0x80032614);
