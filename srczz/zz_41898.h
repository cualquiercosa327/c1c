#ifdef ZZ_INCLUDE_CODE
ZZ_41898:
	EMU_Write32(V1 + 136,T5); //+ 0x88
	EMU_Write32(V1 + 152,T6); //+ 0x98
	EMU_Write32(V1 + 168,T7); //+ 0xA8
	EMU_Write32(V1 + 184,R0); //+ 0xB8
	EMU_Write32(V1 + 200,R0); //+ 0xC8
	if (!A2)
	{
		A1 = A2 + S1;
		ZZ_CLOCKCYCLES(7,0x800418DC);
		goto ZZ_41898_44;
	}
	A1 = A2 + S1;
	A2 = EMU_ReadU32(A1 - 12); //+ 0xFFFFFFF4
	A3 = EMU_ReadU32(A1 - 8); //+ 0xFFFFFFF8
	EMU_Write32(V1 + 256,A2); //+ 0x100
	EMU_Write16(V1 + 140,A2); //+ 0x8C
	EMU_Write32(V1 + 260,A3); //+ 0x104
	A2 = EMU_ReadU32(A1 - 4); //+ 0xFFFFFFFC
	EMU_Write16(V1 + 156,A3); //+ 0x9C
	EMU_Write32(V1 + 264,A2); //+ 0x108
	EMU_Write16(V1 + 172,A2); //+ 0xAC
	A2 = EMU_CheckedAdd(V1,268);
	ZZ_CLOCKCYCLES(17,0x800418DC);
ZZ_41898_44:
	ZZ_JUMPREGISTER_BEGIN(RA);
	EMU_Write32(V1 + 112,A2); //+ 0x70
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x8004182C,ZZ_414B0_37C);
	ZZ_JUMPREGISTER(0x80041534,ZZ_414B0_84);
	ZZ_JUMPREGISTER(0x80041630,ZZ_414B0_180);
	ZZ_JUMPREGISTER(0x80041728,ZZ_414B0_278);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80041898,ZZ_41898);
ZZ_MARK(0x8004189C);
ZZ_MARK(0x800418A0);
ZZ_MARK(0x800418A4);
ZZ_MARK(0x800418A8);
ZZ_MARK(0x800418AC);
ZZ_MARK(0x800418B0);
ZZ_MARK(0x800418B4);
ZZ_MARK(0x800418B8);
ZZ_MARK(0x800418BC);
ZZ_MARK(0x800418C0);
ZZ_MARK(0x800418C4);
ZZ_MARK(0x800418C8);
ZZ_MARK(0x800418CC);
ZZ_MARK(0x800418D0);
ZZ_MARK(0x800418D4);
ZZ_MARK(0x800418D8);
ZZ_MARK_TARGET(0x800418DC,ZZ_41898_44);
ZZ_MARK(0x800418E0);