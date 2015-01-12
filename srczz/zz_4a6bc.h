#ifdef ZZ_INCLUDE_CODE
ZZ_4A6BC:
	AT = 0x80060000;
	EMU_Write32(AT - 2596,RA); //+ 0xFFFFF5DC
	RA = 0x8004A6CC; //ZZ_4A6BC_10
	ZZ_CLOCKCYCLES(4,0x80049FB4);
	goto ZZ_49FB4;
ZZ_4A6BC_10:
	T2 = 176;
	ZZ_JUMPREGISTER_BEGIN(T2);
	RA = 0x8004A6D8; //ZZ_4A6BC_1C
	T1 = 87;
	ZZ_CLOCKCYCLES_JR(3);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (T2,8004A6D0)
	ZZ_JUMPREGISTER_END();
ZZ_4A6BC_1C:
	V0 = EMU_ReadU32(V0 + 364); //+ 0x16C
	T2 = 9;
	V1 = EMU_CheckedAdd(V0,1580);
	ZZ_CLOCKCYCLES(3,0x8004A6E4);
ZZ_4A6BC_28:
	T2 -= 1;
	EMU_Write32(V1,R0);
	if (T2)
	{
		V1 += 4;
		ZZ_CLOCKCYCLES(4,0x8004A6E4);
		goto ZZ_4A6BC_28;
	}
	V1 += 4;
	RA = 0x8004A6FC; //ZZ_4A6BC_40
	ZZ_CLOCKCYCLES(6,0x8004A5EC);
	goto ZZ_4A5EC;
ZZ_4A6BC_40:
	RA = 0x8004A704; //ZZ_4A6BC_48
	ZZ_CLOCKCYCLES(2,0x80049FC4);
	goto ZZ_49FC4;
ZZ_4A6BC_48:
	RA = 0x80060000;
	RA = EMU_ReadU32(RA - 2596); //+ 0xFFFFF5DC
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x8004A2C4,ZZ_4A298_2C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004A6BC,ZZ_4A6BC);
ZZ_MARK(0x8004A6C0);
ZZ_MARK(0x8004A6C4);
ZZ_MARK(0x8004A6C8);
ZZ_MARK_TARGET(0x8004A6CC,ZZ_4A6BC_10);
ZZ_MARK(0x8004A6D0);
ZZ_MARK(0x8004A6D4);
ZZ_MARK_TARGET(0x8004A6D8,ZZ_4A6BC_1C);
ZZ_MARK(0x8004A6DC);
ZZ_MARK(0x8004A6E0);
ZZ_MARK_TARGET(0x8004A6E4,ZZ_4A6BC_28);
ZZ_MARK(0x8004A6E8);
ZZ_MARK(0x8004A6EC);
ZZ_MARK(0x8004A6F0);
ZZ_MARK(0x8004A6F4);
ZZ_MARK(0x8004A6F8);
ZZ_MARK_TARGET(0x8004A6FC,ZZ_4A6BC_40);
ZZ_MARK(0x8004A700);
ZZ_MARK_TARGET(0x8004A704,ZZ_4A6BC_48);
ZZ_MARK(0x8004A708);
ZZ_MARK(0x8004A70C);
ZZ_MARK(0x8004A710);
ZZ_MARK(0x8004A714);
