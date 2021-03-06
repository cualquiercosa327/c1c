#ifdef ZZ_INCLUDE_CODE
ZZ_4002C:
	SP -= 24;
	V1 = 0x80050000;
	V1 += 19054;
	EMU_Write32(SP + 20,RA); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = EMU_ReadU8(V1);
	EMU_Write8(V1,A0);
	A0 &= 0xFF;
	if (!A0)
	{
		V0 = S0;
		ZZ_CLOCKCYCLES(10,0x80040084);
		goto ZZ_4002C_58;
	}
	V0 = S0;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 19048); //+ 0x4A68
	A1 = EMU_ReadU8(V1);
	A2 = 0x80050000;
	A2 = EMU_ReadU8(A2 + 19052); //+ 0x4A6C
	A3 = 0x80050000;
	A3 = EMU_ReadU8(A3 + 19055); //+ 0x4A6F
	A0 = 0x80010000;
	A0 += 4584;
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x80040080; //ZZ_4002C_54
	ZZ_CLOCKCYCLES_JR(21);
	ZZ_JUMPREGISTER(0x8003D730,ZZ_3D730);
	ZZ_JUMPREGISTER_END();
ZZ_4002C_54:
	V0 = S0;
	ZZ_CLOCKCYCLES(1,0x80040084);
ZZ_4002C_58:
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x80016AA4,ZZ_16A6C_38);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004002C,0x80040080,ZZ_4002C);
ZZ_MARK_TARGET(0x80040080,0x80040084,ZZ_4002C_54);
ZZ_MARK_TARGET(0x80040084,0x80040098,ZZ_4002C_58);
