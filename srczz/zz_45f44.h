#ifdef ZZ_INCLUDE_CODE
	ZZ_CLOCKCYCLES(3,0x80045F44);
ZZ_45F44:
	if (S5)
	{
		T8 = 0x30000000;
		ZZ_CLOCKCYCLES(2,0x80045F74);
		goto ZZ_45F44_30;
	}
	T8 = 0x30000000;
	T5 |= T8;
	EMU_Write32(S7 + 4,T5); //+ 0x4
	EMU_Write32(S7 + 12,T6); //+ 0xC
	EMU_Write32(S7 + 20,T7); //+ 0x14
	A0 = 28;
	EMU_Write32(S7 + 8,S2); //+ 0x8
	EMU_Write32(S7 + 16,T0); //+ 0x10
	EMU_Write32(S7 + 24,T2); //+ 0x18
	T9 = 0x6000000;
	ZZ_CLOCKCYCLES(12,0x80045FB4);
	goto ZZ_45F44_70;
ZZ_45F44_30:
	T8 = EMU_ReadU32(V1 + 244); //+ 0xF4
	A0 = EMU_ReadU32(V1 + 248); //+ 0xF8
	T9 = EMU_ReadU32(V1 + 252); //+ 0xFC
	EMU_Write32(S7 + 12,T8); //+ 0xC
	EMU_Write32(S7 + 24,A0); //+ 0x18
	EMU_Write32(S7 + 36,T9); //+ 0x24
	EMU_Write32(S7 + 8,S2); //+ 0x8
	EMU_Write32(S7 + 20,T0); //+ 0x14
	EMU_Write32(S7 + 32,T2); //+ 0x20
	T8 = 0x34000000;
	T5 |= T8;
	EMU_Write32(S7 + 4,T5); //+ 0x4
	EMU_Write32(S7 + 16,T6); //+ 0x10
	EMU_Write32(S7 + 28,T7); //+ 0x1C
	A0 = 40;
	T9 = 0x9000000;
	ZZ_CLOCKCYCLES(16,0x80045FB4);
ZZ_45F44_70:
	if (A1)
	{
		T8 = V0 - T4;
		ZZ_CLOCKCYCLES(2,0x80045FE0);
		goto ZZ_45F44_9C;
	}
	T8 = V0 - T4;
	if ((int32_t)T8 < 0)
	{
		A1 = S7 << 8;
		ZZ_CLOCKCYCLES(4,0x80045FE0);
		goto ZZ_45F44_9C;
	}
	A1 = S7 << 8;
	T8 = EMU_ReadU32(V0);
	A1 >>= 8;
	T8 |= T9;
	EMU_Write32(S7,T8);
	EMU_Write32(V0,A1);
	ZZ_JUMPREGISTER_BEGIN(RA);
	S7 += A0;
	ZZ_CLOCKCYCLES_JR(11);
	ZZ_JUMPREGISTER(0x80046B0C,ZZ_46478_694);
	ZZ_JUMPREGISTER_END();
ZZ_45F44_9C:
	if ((int32_t)T8 >= 0)
	{
		T8 = S7 << 8;
		ZZ_CLOCKCYCLES(2,0x80046008);
		goto ZZ_45F44_C4;
	}
	T8 = S7 << 8;
	T1 = T4 << 8;
	T4 -= 4;
	if (V0 == T4)
	{
		T1 >>= 8;
		ZZ_CLOCKCYCLES(6,0x80046008);
		goto ZZ_45F44_C4;
	}
	T1 >>= 8;
	ZZ_CLOCKCYCLES(6,0x80045FF8);
ZZ_45F44_B4:
	EMU_Write32(T4,T1);
	T4 -= 4;
	if (V0 != T4)
	{
		T1 -= 4;
		ZZ_CLOCKCYCLES(4,0x80045FF8);
		goto ZZ_45F44_B4;
	}
	T1 -= 4;
	ZZ_CLOCKCYCLES(4,0x80046008);
ZZ_45F44_C4:
	T1 |= T9;
	EMU_Write32(S7,T1);
	T1 = T8 >> 8;
	EMU_Write32(T4,T1);
	ZZ_JUMPREGISTER_BEGIN(RA);
	S7 += A0;
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x80046B0C,ZZ_46478_694);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80045F44,ZZ_45F44);
ZZ_MARK(0x80045F48);
ZZ_MARK(0x80045F4C);
ZZ_MARK(0x80045F50);
ZZ_MARK(0x80045F54);
ZZ_MARK(0x80045F58);
ZZ_MARK(0x80045F5C);
ZZ_MARK(0x80045F60);
ZZ_MARK(0x80045F64);
ZZ_MARK(0x80045F68);
ZZ_MARK(0x80045F6C);
ZZ_MARK(0x80045F70);
ZZ_MARK_TARGET(0x80045F74,ZZ_45F44_30);
ZZ_MARK(0x80045F78);
ZZ_MARK(0x80045F7C);
ZZ_MARK(0x80045F80);
ZZ_MARK(0x80045F84);
ZZ_MARK(0x80045F88);
ZZ_MARK(0x80045F8C);
ZZ_MARK(0x80045F90);
ZZ_MARK(0x80045F94);
ZZ_MARK(0x80045F98);
ZZ_MARK(0x80045F9C);
ZZ_MARK(0x80045FA0);
ZZ_MARK(0x80045FA4);
ZZ_MARK(0x80045FA8);
ZZ_MARK(0x80045FAC);
ZZ_MARK(0x80045FB0);
ZZ_MARK_TARGET(0x80045FB4,ZZ_45F44_70);
ZZ_MARK(0x80045FB8);
ZZ_MARK(0x80045FBC);
ZZ_MARK(0x80045FC0);
ZZ_MARK(0x80045FC4);
ZZ_MARK(0x80045FC8);
ZZ_MARK(0x80045FCC);
ZZ_MARK(0x80045FD0);
ZZ_MARK(0x80045FD4);
ZZ_MARK(0x80045FD8);
ZZ_MARK(0x80045FDC);
ZZ_MARK_TARGET(0x80045FE0,ZZ_45F44_9C);
ZZ_MARK(0x80045FE4);
ZZ_MARK(0x80045FE8);
ZZ_MARK(0x80045FEC);
ZZ_MARK(0x80045FF0);
ZZ_MARK(0x80045FF4);
ZZ_MARK_TARGET(0x80045FF8,ZZ_45F44_B4);
ZZ_MARK(0x80045FFC);
ZZ_MARK(0x80046000);
ZZ_MARK(0x80046004);
ZZ_MARK_TARGET(0x80046008,ZZ_45F44_C4);
ZZ_MARK(0x8004600C);
ZZ_MARK(0x80046010);
ZZ_MARK(0x80046014);
ZZ_MARK(0x80046018);
ZZ_MARK(0x8004601C);
