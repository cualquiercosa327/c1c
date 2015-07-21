#ifdef ZZ_INCLUDE_CODE
ZZ_458C8:
	SP -= 48;
	EMU_Write32(SP + 32,S2); //+ 0x20
	S2 = A0;
	A0 = -1;
	EMU_Write32(SP + 40,RA); //+ 0x28
	EMU_Write32(SP + 36,S3); //+ 0x24
	EMU_Write32(SP + 28,S1); //+ 0x1C
	RA = 0x800458EC; //ZZ_458C8_24
	EMU_Write32(SP + 24,S0); //+ 0x18
	ZZ_CLOCKCYCLES(9,0x8003E4F0);
	goto ZZ_3E4F0;
ZZ_458C8_24:
	S3 = 0x80050000;
	S3 += 21956;
	S1 = 0x80050000;
	S1 += 22652;
	S0 = 0x80050000;
	S0 += 22084;
	V0 += 480;
	AT = 0x80050000;
	EMU_Write32(AT + 29104,V0); //+ 0x71B0
	V0 = 0x80010000;
	V0 += 5716;
	AT = 0x80050000;
	EMU_Write32(AT + 29108,R0); //+ 0x71B4
	AT = 0x80050000;
	EMU_Write32(AT + 29112,V0); //+ 0x71B8
	ZZ_CLOCKCYCLES(15,0x80045928);
ZZ_458C8_60:
	RA = 0x80045930; //ZZ_458C8_68
	A0 = -1;
	ZZ_CLOCKCYCLES(2,0x8003E4F0);
	goto ZZ_3E4F0;
ZZ_458C8_68:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 29104); //+ 0x71B0
	V1 = (int32_t)V1 < (int32_t)V0;
	if (V1)
	{
		ZZ_CLOCKCYCLES(6,0x80045970);
		goto ZZ_458C8_A8;
	}
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 29108); //+ 0x71B4
	V0 = V1 + 1;
	AT = 0x80050000;
	EMU_Write32(AT + 29108,V0); //+ 0x71B4
	V0 = 0x1E0000;
	V0 = (int32_t)V0 < (int32_t)V1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(16,0x800459E0);
		goto ZZ_458C8_118;
	}
	ZZ_CLOCKCYCLES(16,0x80045970);
ZZ_458C8_A8:
	A0 = 0x80010000;
	A0 += 5368;
	RA = 0x80045980; //ZZ_458C8_B8
	ZZ_CLOCKCYCLES(4,0x8003E6D4);
	goto ZZ_3E6D4;
ZZ_458C8_B8:
	A0 = EMU_ReadU8(S1);
	V0 = EMU_ReadU8(S1 + 1); //+ 0x1
	A1 = 0x80050000;
	A1 = EMU_ReadU32(A1 + 29112); //+ 0x71B8
	V0 <<= 2;
	V0 += S0;
	A0 <<= 2;
	V1 = EMU_ReadU32(V0);
	V0 = 0x80050000;
	V0 = EMU_ReadU8(V0 + 21953); //+ 0x55C1
	A0 += S0;
	V0 <<= 2;
	V0 += S3;
	EMU_Write32(SP + 16,V1); //+ 0x10
	A2 = EMU_ReadU32(V0);
	A3 = EMU_ReadU32(A0);
	A0 = 0x80010000;
	A0 += 5384;
	RA = 0x800459D0; //ZZ_458C8_108
	ZZ_CLOCKCYCLES(20,0x8003D730);
	goto ZZ_3D730;
ZZ_458C8_108:
	RA = 0x800459D8; //ZZ_458C8_110
	ZZ_CLOCKCYCLES(2,0x80044C40);
	goto ZZ_44C40;
ZZ_458C8_110:
	V0 = -1;
	ZZ_CLOCKCYCLES(2,0x800459E4);
	goto ZZ_458C8_11C;
ZZ_458C8_118:
	V0 = R0;
	ZZ_CLOCKCYCLES(1,0x800459E4);
ZZ_458C8_11C:
	if (V0)
	{
		V0 = -1;
		ZZ_CLOCKCYCLES(2,0x80045A14);
		goto ZZ_458C8_14C;
	}
	V0 = -1;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 22744); //+ 0x58D8
	V0 = EMU_ReadU32(V0);
	V1 = 0x1000000;
	V0 &= V1;
	if (!V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(10,0x80045A14);
		goto ZZ_458C8_14C;
	}
	V0 = R0;
	if (!S2)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(12,0x80045928);
		goto ZZ_458C8_60;
	}
	V0 = 0x1;
	ZZ_CLOCKCYCLES(12,0x80045A14);
ZZ_458C8_14C:
	RA = EMU_ReadU32(SP + 40); //+ 0x28
	S3 = EMU_ReadU32(SP + 36); //+ 0x24
	S2 = EMU_ReadU32(SP + 32); //+ 0x20
	S1 = EMU_ReadU32(SP + 28); //+ 0x1C
	S0 = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 48;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x8004587C,ZZ_45610_26C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800458C8,0x800458EC,ZZ_458C8);
ZZ_MARK_TARGET(0x800458EC,0x80045928,ZZ_458C8_24);
ZZ_MARK_TARGET(0x80045928,0x80045930,ZZ_458C8_60);
ZZ_MARK_TARGET(0x80045930,0x80045970,ZZ_458C8_68);
ZZ_MARK_TARGET(0x80045970,0x80045980,ZZ_458C8_A8);
ZZ_MARK_TARGET(0x80045980,0x800459D0,ZZ_458C8_B8);
ZZ_MARK_TARGET(0x800459D0,0x800459D8,ZZ_458C8_108);
ZZ_MARK_TARGET(0x800459D8,0x800459E0,ZZ_458C8_110);
ZZ_MARK_TARGET(0x800459E0,0x800459E4,ZZ_458C8_118);
ZZ_MARK_TARGET(0x800459E4,0x80045A14,ZZ_458C8_11C);
ZZ_MARK_TARGET(0x80045A14,0x80045A34,ZZ_458C8_14C);
