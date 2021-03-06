#ifdef ZZ_INCLUDE_CODE
ZZ_1A0CC:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 26296); //+ 0x66B8
	SP -= 56;
	EMU_Write32(SP + 48,RA); //+ 0x30
	EMU_Write32(SP + 44,S1); //+ 0x2C
	EMU_Write32(SP + 40,S0); //+ 0x28
	V0 = EMU_ReadU16(V0);
	if (!V0)
	{
		S1 = A0;
		ZZ_CLOCKCYCLES(10,0x8001A2C8);
		goto ZZ_1A0CC_1FC;
	}
	S1 = A0;
	S0 = 0x80050000;
	S0 += 30692;
	RA = 0x8001A104; //ZZ_1A0CC_38
	A0 = S0;
	ZZ_CLOCKCYCLES(14,0x80042E9C);
	goto ZZ_42E9C;
ZZ_1A0CC_38:
	RA = 0x8001A10C; //ZZ_1A0CC_40
	A0 = S0 + 272;
	ZZ_CLOCKCYCLES(2,0x80042ECC);
	goto ZZ_42ECC;
ZZ_1A0CC_40:
	A1 = 0x1F800000;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 30996); //+ 0x7914
	A1 |= 0x100;
	A0 = EMU_ReadU32(V0 + 16); //+ 0x10
	A2 = 0x100;
	RA = 0x8001A12C; //ZZ_1A0CC_60
	A0 += 4;
	ZZ_CLOCKCYCLES(8,0x80033FBC);
	goto ZZ_33FBC;
ZZ_1A0CC_60:
	V0 = EMU_ReadU32(GP + 68); //+ 0x44
	V1 = EMU_ReadU32(GP + 72); //+ 0x48
	V0 <<= 4;
	AT = 0x1F800000;
	EMU_Write32(AT + 72,V0); //+ 0x48
	V0 = EMU_ReadU32(GP + 76); //+ 0x4C
	V1 <<= 4;
	AT = 0x1F800000;
	EMU_Write32(AT + 76,V1); //+ 0x4C
	V1 = EMU_ReadU32(GP + 80); //+ 0x50
	V0 <<= 4;
	AT = 0x1F800000;
	EMU_Write32(AT + 80,V0); //+ 0x50
	V0 = EMU_ReadU32(GP + 84); //+ 0x54
	AT = 0x1F800000;
	EMU_Write32(AT + 84,V1); //+ 0x54
	V1 = EMU_ReadU32(GP + 88); //+ 0x58
	V0 <<= 4;
	AT = 0x1F800000;
	EMU_Write32(AT + 88,V0); //+ 0x58
	V0 = EMU_ReadU32(GP + 92); //+ 0x5C
	V1 <<= 4;
	AT = 0x1F800000;
	EMU_Write32(AT + 92,V1); //+ 0x5C
	V1 = EMU_ReadU32(GP + 96); //+ 0x60
	V0 <<= 4;
	AT = 0x1F800000;
	EMU_Write32(AT + 96,V0); //+ 0x60
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 15044); //+ 0xFFFFC53C
	AT = 0x1F800000;
	EMU_Write32(AT + 100,V1); //+ 0x64
	V1 = EMU_ReadU32(V0 + 4); //+ 0x4
	V0 = 0x14;
	if (V1 == V0)
	{
		A2 = SP + 32;
		ZZ_CLOCKCYCLES(36,0x8001A1C8);
		goto ZZ_1A0CC_FC;
	}
	A2 = SP + 32;
	V0 = 0x16;
	if (V1 != V0)
	{
		A0 = 0xFFFC0000;
		ZZ_CLOCKCYCLES(39,0x8001A228);
		goto ZZ_1A0CC_15C;
	}
	A0 = 0xFFFC0000;
	ZZ_CLOCKCYCLES(39,0x8001A1C8);
ZZ_1A0CC_FC:
	A1 = 0x60000;
	A1 |= 0x4000;
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 6296); //+ 0x1898
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 30996); //+ 0x7914
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 3;
	V0 += V1;
	V1 = EMU_ReadU32(A0 + 16); //+ 0x10
	V0 <<= 7;
	V1 = EMU_ReadU32(V1 + 744); //+ 0x2E8
	V0 += A1;
	V1 = V1 - V0;
	V1 >>= 8;
	V0 = V1 + 2000;
	AT = 0x80060000;
	EMU_Write32(AT + 6328,V0); //+ 0x18B8
	V0 = EMU_ReadU32(A0 + 16); //+ 0x10
	A1 = EMU_ReadU32(V0 + 748); //+ 0x2EC
	EMU_Write32(A2,V1);
	ZZ_CLOCKCYCLES(24,0x8001A26C);
	goto ZZ_1A0CC_1A0;
ZZ_1A0CC_15C:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 30996); //+ 0x7914
	V1 = EMU_ReadU32(V0 + 16); //+ 0x10
	A0 |= 0xE000;
	V0 = EMU_ReadU32(V1 + 744); //+ 0x2E8
	A1 = EMU_ReadU32(V1 + 748); //+ 0x2EC
	V0 += A0;
	V1 = (int32_t)V0 >> 8;
	V0 = 0x1;
	if (A1 != V0)
	{
		V0 = V1 + 800;
		ZZ_CLOCKCYCLES(12,0x8001A260);
		goto ZZ_1A0CC_194;
	}
	V0 = V1 + 800;
	V1 -= 1200;
	V0 = V1 + 800;
	ZZ_CLOCKCYCLES(14,0x8001A260);
ZZ_1A0CC_194:
	AT = 0x80060000;
	EMU_Write32(AT + 6328,V0); //+ 0x18B8
	EMU_Write32(A2,V1);
	ZZ_CLOCKCYCLES(3,0x8001A26C);
ZZ_1A0CC_1A0:
	RA = 0x8001A274; //ZZ_1A0CC_1A8
	EMU_Write32(SP + 36,A1); //+ 0x24
	ZZ_CLOCKCYCLES(2,0x80016E18);
	goto ZZ_16E18;
ZZ_1A0CC_1A8:
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 26296); //+ 0x66B8
	A2 = 0x80050000;
	A2 = EMU_ReadU32(A2 + 30928); //+ 0x78D0
	EMU_Write32(SP + 16,V0); //+ 0x10
	V0 = 0x80050000;
	V0 += 6004;
	EMU_Write32(SP + 20,V0); //+ 0x14
	V0 = EMU_ReadU32(SP + 32); //+ 0x20
	A3 = 0x80050000;
	A3 = EMU_ReadU32(A3 + 31072); //+ 0x7960
	A1 = S1;
	EMU_Write32(SP + 24,V0); //+ 0x18
	V0 = A2 >> 31;
	A2 += V0;
	A2 = (int32_t)A2 >> 1;
	V0 = 0x800;
	V1 = EMU_ReadU32(SP + 36); //+ 0x24
	A2 = V0 - A2;
	RA = 0x8001A2C8; //ZZ_1A0CC_1FC
	EMU_Write32(SP + 28,V1); //+ 0x1C
	ZZ_CLOCKCYCLES(21,0x80036BF4);
	goto ZZ_36BF4;
ZZ_1A0CC_1FC:
	RA = EMU_ReadU32(SP + 48); //+ 0x30
	S1 = EMU_ReadU32(SP + 44); //+ 0x2C
	S0 = EMU_ReadU32(SP + 40); //+ 0x28
	SP += 56;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(6);
	
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001A0CC,0x8001A104,ZZ_1A0CC);
ZZ_MARK_TARGET(0x8001A104,0x8001A10C,ZZ_1A0CC_38);
ZZ_MARK_TARGET(0x8001A10C,0x8001A12C,ZZ_1A0CC_40);
ZZ_MARK_TARGET(0x8001A12C,0x8001A1C8,ZZ_1A0CC_60);
ZZ_MARK_TARGET(0x8001A1C8,0x8001A228,ZZ_1A0CC_FC);
ZZ_MARK_TARGET(0x8001A228,0x8001A260,ZZ_1A0CC_15C);
ZZ_MARK_TARGET(0x8001A260,0x8001A26C,ZZ_1A0CC_194);
ZZ_MARK_TARGET(0x8001A26C,0x8001A274,ZZ_1A0CC_1A0);
ZZ_MARK_TARGET(0x8001A274,0x8001A2C8,ZZ_1A0CC_1A8);
ZZ_MARK_TARGET(0x8001A2C8,0x8001A2E0,ZZ_1A0CC_1FC);
