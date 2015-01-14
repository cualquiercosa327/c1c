#ifdef ZZ_INCLUDE_CODE
ZZ_18F0C:
	SP -= 40;
	EMU_Write32(SP + 24,S2); //+ 0x18
	S2 = A0;
	EMU_Write32(SP + 28,S3); //+ 0x1C
	S3 = A1;
	EMU_Write32(SP + 32,S4); //+ 0x20
	S4 = A2;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = R0;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = 0x80070000;
	S0 -= 12880;
	EMU_Write32(SP + 36,RA); //+ 0x24
	ZZ_CLOCKCYCLES(13,0x80018F40);
ZZ_18F0C_34:
	A0 = S0;
	A1 = S3;
	ZZ_JUMPREGISTER_BEGIN(S2);
	RA = 0x80018F50; //ZZ_18F0C_44
	A2 = S4;
	ZZ_CLOCKCYCLES_JR(4);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (S2,80018F48)
	ZZ_JUMPREGISTER_END();
ZZ_18F0C_44:
	S1 += 1;
	V0 = (int32_t)S1 < 8;
	if (V0)
	{
		S0 += 8;
		ZZ_CLOCKCYCLES(4,0x80018F40);
		goto ZZ_18F0C_34;
	}
	S0 += 8;
	RA = EMU_ReadU32(SP + 36); //+ 0x24
	S4 = EMU_ReadU32(SP + 32); //+ 0x20
	S3 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 40;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(13);
	ZZ_JUMPREGISTER(0x80019F84,ZZ_19F60_24);
	ZZ_JUMPREGISTER(0x8001D3A8,ZZ_1D360_48);
	ZZ_JUMPREGISTER(0x8001C454,ZZ_1C3D4_80);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80018F0C,ZZ_18F0C);
ZZ_MARK(0x80018F10);
ZZ_MARK(0x80018F14);
ZZ_MARK(0x80018F18);
ZZ_MARK(0x80018F1C);
ZZ_MARK(0x80018F20);
ZZ_MARK(0x80018F24);
ZZ_MARK(0x80018F28);
ZZ_MARK(0x80018F2C);
ZZ_MARK(0x80018F30);
ZZ_MARK(0x80018F34);
ZZ_MARK(0x80018F38);
ZZ_MARK(0x80018F3C);
ZZ_MARK_TARGET(0x80018F40,ZZ_18F0C_34);
ZZ_MARK(0x80018F44);
ZZ_MARK(0x80018F48);
ZZ_MARK(0x80018F4C);
ZZ_MARK_TARGET(0x80018F50,ZZ_18F0C_44);
ZZ_MARK(0x80018F54);
ZZ_MARK(0x80018F58);
ZZ_MARK(0x80018F5C);
ZZ_MARK(0x80018F60);
ZZ_MARK(0x80018F64);
ZZ_MARK(0x80018F68);
ZZ_MARK(0x80018F6C);
ZZ_MARK(0x80018F70);
ZZ_MARK(0x80018F74);
ZZ_MARK(0x80018F78);
ZZ_MARK(0x80018F7C);
ZZ_MARK(0x80018F80);