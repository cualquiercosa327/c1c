#ifdef ZZ_INCLUDE_CODE
ZZ_3ED50:
	SP -= 24;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = 0x80050000;
	S0 += 14644;
	EMU_Write32(SP + 20,RA); //+ 0x14
	V0 = EMU_ReadU16(S0);
	if (V0)
	{
		ZZ_CLOCKCYCLES(9,0x8003EDC0);
		goto ZZ_3ED50_70;
	}
	RA = 0x8003ED7C; //ZZ_3ED50_2C
	A0 = S0 + 56;
	ZZ_CLOCKCYCLES(11,0x8003EE44);
	goto ZZ_3EE44;
ZZ_3ED50_2C:
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 18884); //+ 0x49C4
	V1 = 0x80050000;
	V1 = EMU_ReadU16(V1 + 14694); //+ 0x3966
	V0 = 0x1;
	EMU_Write16(S0,V0);
	EMU_Write16(A0,V1);
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 18888); //+ 0x49C8
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 14696); //+ 0x3968
	EMU_Write32(V1,V0);
	RA = 0x8003EDB8; //ZZ_3ED50_68
	ZZ_CLOCKCYCLES(15,0x8003E208);
	goto ZZ_3E208;
ZZ_3ED50_68:
	V0 = S0;
	ZZ_CLOCKCYCLES(2,0x8003EDC4);
	goto ZZ_3ED50_74;
ZZ_3ED50_70:
	V0 = R0;
	ZZ_CLOCKCYCLES(1,0x8003EDC4);
ZZ_3ED50_74:
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003ED50,0x8003ED7C,ZZ_3ED50);
ZZ_MARK_TARGET(0x8003ED7C,0x8003EDB8,ZZ_3ED50_2C);
ZZ_MARK_TARGET(0x8003EDB8,0x8003EDC0,ZZ_3ED50_68);
ZZ_MARK_TARGET(0x8003EDC0,0x8003EDC4,ZZ_3ED50_70);
ZZ_MARK_TARGET(0x8003EDC4,0x8003EDD8,ZZ_3ED50_74);
