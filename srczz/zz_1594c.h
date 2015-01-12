#ifdef ZZ_INCLUDE_CODE
ZZ_1594C:
	SP -= 48;
	EMU_Write32(SP + 36,S3); //+ 0x24
	S3 = A0;
	V0 = 0x80070000;
	V0 -= 25676;
	EMU_Write32(SP + 28,S1); //+ 0x1C
	S1 = R0;
	EMU_Write32(SP + 44,RA); //+ 0x2C
	EMU_Write32(SP + 40,S4); //+ 0x28
	EMU_Write32(SP + 32,S2); //+ 0x20
	EMU_Write32(SP + 24,S0); //+ 0x18
	if ((int32_t)S3 <= 0)
	{
		EMU_Write32(V0,S3);
		ZZ_CLOCKCYCLES(13,0x800159E0);
		goto ZZ_1594C_94;
	}
	EMU_Write32(V0,S3);
	S0 = V0;
	S4 = S0;
	S2 = R0;
	ZZ_CLOCKCYCLES(16,0x8001598C);
ZZ_1594C_40:
	EMU_Write32(S0 + 56,R0); //+ 0x38
	EMU_Write32(S0 + 48,R0); //+ 0x30
	EMU_Write32(S0 + 44,R0); //+ 0x2C
	AT = 0x80070000;
	AT += S2;
	EMU_Write32(AT - 25636,R0); //+ 0xFFFF9BDC
	if (S1)
	{
		A1 = 0x22;
		ZZ_CLOCKCYCLES(8,0x800159CC);
		goto ZZ_1594C_80;
	}
	A1 = 0x22;
	A0 = S4 + 4;
	A2 = S4 + 80;
	RA = 0x800159BC; //ZZ_1594C_70
	A3 = 0x22;
	ZZ_CLOCKCYCLES(12,0x8004A298);
	goto ZZ_4A298;
ZZ_1594C_70:
	RA = 0x800159C4; //ZZ_1594C_78
	ZZ_CLOCKCYCLES(2,0x8004A334);
	goto ZZ_4A334;
ZZ_1594C_78:
	RA = 0x800159CC; //ZZ_1594C_80
	A0 = R0;
	ZZ_CLOCKCYCLES(2,0x8004A054);
	goto ZZ_4A054;
ZZ_1594C_80:
	S0 += 76;
	S1 += 1;
	V0 = (int32_t)S1 < (int32_t)S3;
	if (V0)
	{
		S2 += 76;
		ZZ_CLOCKCYCLES(5,0x8001598C);
		goto ZZ_1594C_40;
	}
	S2 += 76;
	ZZ_CLOCKCYCLES(5,0x800159E0);
ZZ_1594C_94:
	RA = EMU_ReadU32(SP + 44); //+ 0x2C
	S4 = EMU_ReadU32(SP + 40); //+ 0x28
	S3 = EMU_ReadU32(SP + 36); //+ 0x24
	S2 = EMU_ReadU32(SP + 32); //+ 0x20
	S1 = EMU_ReadU32(SP + 28); //+ 0x1C
	S0 = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 48;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(9);
	ZZ_JUMPREGISTER(0x80015800,ZZ_15738_C8);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001594C,ZZ_1594C);
ZZ_MARK(0x80015950);
ZZ_MARK(0x80015954);
ZZ_MARK(0x80015958);
ZZ_MARK(0x8001595C);
ZZ_MARK(0x80015960);
ZZ_MARK(0x80015964);
ZZ_MARK(0x80015968);
ZZ_MARK(0x8001596C);
ZZ_MARK(0x80015970);
ZZ_MARK(0x80015974);
ZZ_MARK(0x80015978);
ZZ_MARK(0x8001597C);
ZZ_MARK(0x80015980);
ZZ_MARK(0x80015984);
ZZ_MARK(0x80015988);
ZZ_MARK_TARGET(0x8001598C,ZZ_1594C_40);
ZZ_MARK(0x80015990);
ZZ_MARK(0x80015994);
ZZ_MARK(0x80015998);
ZZ_MARK(0x8001599C);
ZZ_MARK(0x800159A0);
ZZ_MARK(0x800159A4);
ZZ_MARK(0x800159A8);
ZZ_MARK(0x800159AC);
ZZ_MARK(0x800159B0);
ZZ_MARK(0x800159B4);
ZZ_MARK(0x800159B8);
ZZ_MARK_TARGET(0x800159BC,ZZ_1594C_70);
ZZ_MARK(0x800159C0);
ZZ_MARK_TARGET(0x800159C4,ZZ_1594C_78);
ZZ_MARK(0x800159C8);
ZZ_MARK_TARGET(0x800159CC,ZZ_1594C_80);
ZZ_MARK(0x800159D0);
ZZ_MARK(0x800159D4);
ZZ_MARK(0x800159D8);
ZZ_MARK(0x800159DC);
ZZ_MARK_TARGET(0x800159E0,ZZ_1594C_94);
ZZ_MARK(0x800159E4);
ZZ_MARK(0x800159E8);
ZZ_MARK(0x800159EC);
ZZ_MARK(0x800159F0);
ZZ_MARK(0x800159F4);
ZZ_MARK(0x800159F8);
ZZ_MARK(0x800159FC);
ZZ_MARK(0x80015A00);
