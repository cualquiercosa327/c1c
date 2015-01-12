#ifdef ZZ_INCLUDE_CODE
ZZ_4A864:
	SP -= 32;
	A1 <<= 15;
	EMU_Write32(SP + 16,A1); //+ 0x10
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8400); //+ 0xFFFFDF30
	V0 = (int32_t)V0 < (int32_t)A0;
	if (!V0)
	{
		EMU_Write32(SP + 24,RA); //+ 0x18
		ZZ_CLOCKCYCLES(9,0x8004A8F0);
		goto ZZ_4A864_8C;
	}
	EMU_Write32(SP + 24,RA); //+ 0x18
	V1 = -1;
	ZZ_CLOCKCYCLES(10,0x8004A88C);
ZZ_4A864_28:
	V0 = EMU_ReadU32(SP + 16); //+ 0x10
	V0 -= 1;
	EMU_Write32(SP + 16,V0); //+ 0x10
	V0 = EMU_ReadU32(SP + 16); //+ 0x10
	if (V0 != V1)
	{
		ZZ_CLOCKCYCLES(8,0x8004A8D8);
		goto ZZ_4A864_74;
	}
	A0 = 0x80010000;
	A0 += 3296;
	RA = 0x8004A8BC; //ZZ_4A864_58
	ZZ_CLOCKCYCLES(12,0x80049424);
	goto ZZ_49424;
ZZ_4A864_58:
	RA = 0x8004A8C4; //ZZ_4A864_60
	A0 = R0;
	ZZ_CLOCKCYCLES(2,0x8004A054);
	goto ZZ_4A054;
ZZ_4A864_60:
	A0 = 3;
	RA = 0x8004A8D0; //ZZ_4A864_6C
	A1 = R0;
	ZZ_CLOCKCYCLES(3,0x8004A900);
	goto ZZ_4A900;
ZZ_4A864_6C:
	ZZ_CLOCKCYCLES(2,0x8004A8F0);
	goto ZZ_4A864_8C;
ZZ_4A864_74:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8400); //+ 0xFFFFDF30
	V0 = (int32_t)V0 < (int32_t)A0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(6,0x8004A88C);
		goto ZZ_4A864_28;
	}
	ZZ_CLOCKCYCLES(6,0x8004A8F0);
ZZ_4A864_8C:
	RA = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x8004A7B4,ZZ_4A71C_98);
	ZZ_JUMPREGISTER(0x8004A7D8,ZZ_4A71C_BC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004A864,ZZ_4A864);
ZZ_MARK(0x8004A868);
ZZ_MARK(0x8004A86C);
ZZ_MARK(0x8004A870);
ZZ_MARK(0x8004A874);
ZZ_MARK(0x8004A878);
ZZ_MARK(0x8004A87C);
ZZ_MARK(0x8004A880);
ZZ_MARK(0x8004A884);
ZZ_MARK(0x8004A888);
ZZ_MARK_TARGET(0x8004A88C,ZZ_4A864_28);
ZZ_MARK(0x8004A890);
ZZ_MARK(0x8004A894);
ZZ_MARK(0x8004A898);
ZZ_MARK(0x8004A89C);
ZZ_MARK(0x8004A8A0);
ZZ_MARK(0x8004A8A4);
ZZ_MARK(0x8004A8A8);
ZZ_MARK(0x8004A8AC);
ZZ_MARK(0x8004A8B0);
ZZ_MARK(0x8004A8B4);
ZZ_MARK(0x8004A8B8);
ZZ_MARK_TARGET(0x8004A8BC,ZZ_4A864_58);
ZZ_MARK(0x8004A8C0);
ZZ_MARK_TARGET(0x8004A8C4,ZZ_4A864_60);
ZZ_MARK(0x8004A8C8);
ZZ_MARK(0x8004A8CC);
ZZ_MARK_TARGET(0x8004A8D0,ZZ_4A864_6C);
ZZ_MARK(0x8004A8D4);
ZZ_MARK_TARGET(0x8004A8D8,ZZ_4A864_74);
ZZ_MARK(0x8004A8DC);
ZZ_MARK(0x8004A8E0);
ZZ_MARK(0x8004A8E4);
ZZ_MARK(0x8004A8E8);
ZZ_MARK(0x8004A8EC);
ZZ_MARK_TARGET(0x8004A8F0,ZZ_4A864_8C);
ZZ_MARK(0x8004A8F4);
ZZ_MARK(0x8004A8F8);
ZZ_MARK(0x8004A8FC);
