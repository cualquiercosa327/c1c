#ifdef ZZ_INCLUDE_CODE
ZZ_3F338:
	SP -= 40;
	V0 = A0;
	EMU_Write32(SP + 24,S0); //+ 0x18
	S0 = A1;
	EMU_Write32(SP + 28,S1); //+ 0x1C
	S1 = A2;
	A0 = SP + 16;
	A1 = V0;
	V0 = 0x100;
	EMU_Write16(SP + 20,V0); //+ 0x14
	V0 = 0x1;
	EMU_Write32(SP + 32,RA); //+ 0x20
	EMU_Write16(SP + 16,S0); //+ 0x10
	EMU_Write16(SP + 18,S1); //+ 0x12
	RA = 0x8003F378; //ZZ_3F338_40
	EMU_Write16(SP + 22,V0); //+ 0x16
	ZZ_CLOCKCYCLES(16,0x80040484);
	goto ZZ_40484;
ZZ_3F338_40:
	A0 = S0;
	RA = 0x8003F384; //ZZ_3F338_4C
	A1 = S1;
	ZZ_CLOCKCYCLES(3,0x8003F5DC);
	goto ZZ_3F5DC;
ZZ_3F338_4C:
	V0 &= 0xFFFF;
	RA = EMU_ReadU32(SP + 32); //+ 0x20
	S1 = EMU_ReadU32(SP + 28); //+ 0x1C
	S0 = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 40;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x800331C8,ZZ_32FDC_1EC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003F338,0x8003F378,ZZ_3F338);
ZZ_MARK_TARGET(0x8003F378,0x8003F384,ZZ_3F338_40);
ZZ_MARK_TARGET(0x8003F384,0x8003F3A0,ZZ_3F338_4C);