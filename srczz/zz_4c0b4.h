#ifdef ZZ_INCLUDE_CODE
ZZ_4C0B4:
	SP -= 24;
	V0 = 0x80060000;
	V0 -= 8266;
	EMU_Write32(SP + 20,RA); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = EMU_ReadU8(V0);
	A1 = A0 & 0xFF;
	if (!A1)
	{
		EMU_Write8(V0,A0);
		ZZ_CLOCKCYCLES(9,0x8004C100);
		goto ZZ_4C0B4_4C;
	}
	EMU_Write8(V0,A0);
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8272); //+ 0xFFFFDFB0
	A2 = 0x80060000;
	A2 = EMU_ReadU8(A2 - 8268); //+ 0xFFFFDFB4
	A3 = 0x80060000;
	A3 = EMU_ReadU8(A3 - 8265); //+ 0xFFFFDFB7
	A0 = 0x80010000;
	A0 += 3800;
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x8004C100; //ZZ_4C0B4_4C
	ZZ_CLOCKCYCLES_JR(19);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,8004C0F8)
	ZZ_JUMPREGISTER_END();
ZZ_4C0B4_4C:
	V0 = S0;
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x8001620C,ZZ_161D4_38);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004C0B4,ZZ_4C0B4);
ZZ_MARK(0x8004C0B8);
ZZ_MARK(0x8004C0BC);
ZZ_MARK(0x8004C0C0);
ZZ_MARK(0x8004C0C4);
ZZ_MARK(0x8004C0C8);
ZZ_MARK(0x8004C0CC);
ZZ_MARK(0x8004C0D0);
ZZ_MARK(0x8004C0D4);
ZZ_MARK(0x8004C0D8);
ZZ_MARK(0x8004C0DC);
ZZ_MARK(0x8004C0E0);
ZZ_MARK(0x8004C0E4);
ZZ_MARK(0x8004C0E8);
ZZ_MARK(0x8004C0EC);
ZZ_MARK(0x8004C0F0);
ZZ_MARK(0x8004C0F4);
ZZ_MARK(0x8004C0F8);
ZZ_MARK(0x8004C0FC);
ZZ_MARK_TARGET(0x8004C100,ZZ_4C0B4_4C);
ZZ_MARK(0x8004C104);
ZZ_MARK(0x8004C108);
ZZ_MARK(0x8004C10C);
ZZ_MARK(0x8004C110);
ZZ_MARK(0x8004C114);
