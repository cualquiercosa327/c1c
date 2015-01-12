#ifdef ZZ_INCLUDE_CODE
	ZZ_CLOCKCYCLES(2,0x800433B0);
ZZ_433B0:
	T7 = EMU_ReadU32(GP + 104); //+ 0x68
	EMU_Write32(V1 + 252,T6); //+ 0xFC
	T5 = (int32_t)T5 >> 8;
	T6 = (int32_t)T6 >> 8;
	T7 = (int32_t)T7 >> 8;
	T8 = EMU_ReadU32(V1 + 52); //+ 0x34
	T9 = EMU_ReadU32(V1 + 56); //+ 0x38
	T5 = T5 - T8;
	T8 = EMU_ReadU32(V1 + 60); //+ 0x3C
	T6 = T6 - T9;
	T7 = T7 - T8;
	T0 = EMU_ReadS16(A0);
	EMU_SMultiply(T5,T0);
	T1 = EMU_ReadS16(A0 + 2); //+ 0x2
	T8 = LO;
	T9 = HI;
	T0 = EMU_ReadS16(A0 + 4); //+ 0x4
	T8 >>= 12;
	EMU_SMultiply(T6,T1);
	T9 <<= 20;
	T2 = T8 | T9;
	T8 = LO;
	T9 = HI;
	T1 = EMU_ReadS16(A0 + 6); //+ 0x6
	T8 >>= 12;
	EMU_SMultiply(T7,T0);
	T9 <<= 20;
	T8 |= T9;
	T2 += T8;
	T8 = LO;
	T9 = HI;
	T0 = EMU_ReadS16(A0 + 8); //+ 0x8
	T8 >>= 12;
	EMU_SMultiply(T5,T1);
	T9 <<= 20;
	T8 |= T9;
	T2 += T8;
	GTE_SetControlRegister(5,T2);
	T8 = LO;
	T9 = HI;
	T1 = EMU_ReadS16(A0 + 10); //+ 0xA
	T8 >>= 12;
	EMU_SMultiply(T6,T0);
	T9 <<= 20;
	T2 = T8 | T9;
	T8 = LO;
	T9 = HI;
	T0 = EMU_ReadS16(A0 + 12); //+ 0xC
	T8 >>= 12;
	EMU_SMultiply(T7,T1);
	T9 <<= 20;
	T8 |= T9;
	T2 += T8;
	T8 = LO;
	T9 = HI;
	T1 = EMU_ReadS16(A0 + 14); //+ 0xE
	T8 >>= 12;
	EMU_SMultiply(T5,T0);
	T9 <<= 20;
	T8 |= T9;
	T2 += T8;
	GTE_SetControlRegister(6,T2);
	T8 = LO;
	T9 = HI;
	T0 = EMU_ReadS16(A0 + 16); //+ 0x10
	T8 >>= 12;
	EMU_SMultiply(T6,T1);
	T9 <<= 20;
	T2 = T8 | T9;
	T8 = LO;
	T9 = HI;
	T8 >>= 12;
	T9 <<= 20;
	EMU_SMultiply(T7,T0);
	T8 |= T9;
	T2 += T8;
	T8 = LO;
	T9 = HI;
	T8 >>= 12;
	T9 <<= 20;
	T8 |= T9;
	T7 = T2 + T8;
	GTE_SetControlRegister(7,T7);
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(86);
	ZZ_JUMPREGISTER(0x800446F0,ZZ_446A8_48);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800433B0,ZZ_433B0);
ZZ_MARK(0x800433B4);
ZZ_MARK(0x800433B8);
ZZ_MARK(0x800433BC);
ZZ_MARK(0x800433C0);
ZZ_MARK(0x800433C4);
ZZ_MARK(0x800433C8);
ZZ_MARK(0x800433CC);
ZZ_MARK(0x800433D0);
ZZ_MARK(0x800433D4);
ZZ_MARK(0x800433D8);
ZZ_MARK(0x800433DC);
ZZ_MARK(0x800433E0);
ZZ_MARK(0x800433E4);
ZZ_MARK(0x800433E8);
ZZ_MARK(0x800433EC);
ZZ_MARK(0x800433F0);
ZZ_MARK(0x800433F4);
ZZ_MARK(0x800433F8);
ZZ_MARK(0x800433FC);
ZZ_MARK(0x80043400);
ZZ_MARK(0x80043404);
ZZ_MARK(0x80043408);
ZZ_MARK(0x8004340C);
ZZ_MARK(0x80043410);
ZZ_MARK(0x80043414);
ZZ_MARK(0x80043418);
ZZ_MARK(0x8004341C);
ZZ_MARK(0x80043420);
ZZ_MARK(0x80043424);
ZZ_MARK(0x80043428);
ZZ_MARK(0x8004342C);
ZZ_MARK(0x80043430);
ZZ_MARK(0x80043434);
ZZ_MARK(0x80043438);
ZZ_MARK(0x8004343C);
ZZ_MARK(0x80043440);
ZZ_MARK(0x80043444);
ZZ_MARK(0x80043448);
ZZ_MARK(0x8004344C);
ZZ_MARK(0x80043450);
ZZ_MARK(0x80043454);
ZZ_MARK(0x80043458);
ZZ_MARK(0x8004345C);
ZZ_MARK(0x80043460);
ZZ_MARK(0x80043464);
ZZ_MARK(0x80043468);
ZZ_MARK(0x8004346C);
ZZ_MARK(0x80043470);
ZZ_MARK(0x80043474);
ZZ_MARK(0x80043478);
ZZ_MARK(0x8004347C);
ZZ_MARK(0x80043480);
ZZ_MARK(0x80043484);
ZZ_MARK(0x80043488);
ZZ_MARK(0x8004348C);
ZZ_MARK(0x80043490);
ZZ_MARK(0x80043494);
ZZ_MARK(0x80043498);
ZZ_MARK(0x8004349C);
ZZ_MARK(0x800434A0);
ZZ_MARK(0x800434A4);
ZZ_MARK(0x800434A8);
ZZ_MARK(0x800434AC);
ZZ_MARK(0x800434B0);
ZZ_MARK(0x800434B4);
ZZ_MARK(0x800434B8);
ZZ_MARK(0x800434BC);
ZZ_MARK(0x800434C0);
ZZ_MARK(0x800434C4);
ZZ_MARK(0x800434C8);
ZZ_MARK(0x800434CC);
ZZ_MARK(0x800434D0);
ZZ_MARK(0x800434D4);
ZZ_MARK(0x800434D8);
ZZ_MARK(0x800434DC);
ZZ_MARK(0x800434E0);
ZZ_MARK(0x800434E4);
ZZ_MARK(0x800434E8);
ZZ_MARK(0x800434EC);
ZZ_MARK(0x800434F0);
ZZ_MARK(0x800434F4);
ZZ_MARK(0x800434F8);
ZZ_MARK(0x800434FC);
ZZ_MARK(0x80043500);
ZZ_MARK(0x80043504);
