#ifdef ZZ_INCLUDE_CODE
ZZ_4B634:
	SP -= 40;
	EMU_Write32(SP + 24,S2); //+ 0x18
	S2 = EMU_ReadU32(SP + 56); //+ 0x38
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = A0;
	EMU_Write32(SP + 28,S3); //+ 0x1C
	S3 = A1;
	EMU_Write32(SP + 32,S4); //+ 0x20
	S4 = A2;
	EMU_Write32(SP + 16,S0); //+ 0x10
	EMU_Write32(SP + 36,RA); //+ 0x24
	RA = 0x8004B668; //ZZ_4B634_34
	S0 = A3;
	ZZ_CLOCKCYCLES(13,0x8004B468);
	goto ZZ_4B468;
ZZ_4B634_34:
	V1 = 1;
	EMU_Write16(S1,S3);
	EMU_Write16(S1 + 2,S4); //+ 0x2
	EMU_Write16(S1 + 4,S0); //+ 0x4
	EMU_Write16(S1 + 12,R0); //+ 0xC
	EMU_Write16(S1 + 14,R0); //+ 0xE
	EMU_Write16(S1 + 16,R0); //+ 0x10
	EMU_Write16(S1 + 18,R0); //+ 0x12
	EMU_Write8(S1 + 25,R0); //+ 0x19
	EMU_Write8(S1 + 26,R0); //+ 0x1A
	EMU_Write8(S1 + 27,R0); //+ 0x1B
	EMU_Write8(S1 + 22,V1); //+ 0x16
	if (!V0)
	{
		EMU_Write16(S1 + 6,S2); //+ 0x6
		ZZ_CLOCKCYCLES(14,0x8004B6A8);
		goto ZZ_4B634_74;
	}
	EMU_Write16(S1 + 6,S2); //+ 0x6
	V0 = (int32_t)S2 < 289;
	ZZ_CLOCKCYCLES(16,0x8004B6AC);
	goto ZZ_4B634_78;
ZZ_4B634_74:
	V0 = (int32_t)S2 < 257;
	ZZ_CLOCKCYCLES(1,0x8004B6AC);
ZZ_4B634_78:
	EMU_Write8(S1 + 23,V0); //+ 0x17
	V0 = S1;
	V1 = 10;
	EMU_Write16(V0 + 8,S3); //+ 0x8
	EMU_Write16(V0 + 10,S4); //+ 0xA
	EMU_Write16(V0 + 20,V1); //+ 0x14
	EMU_Write8(V0 + 24,R0); //+ 0x18
	RA = EMU_ReadU32(SP + 36); //+ 0x24
	S4 = EMU_ReadU32(SP + 32); //+ 0x20
	S3 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 40;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(16);
	ZZ_JUMPREGISTER(0x80016168,ZZ_16140_28);
	ZZ_JUMPREGISTER(0x80016288,ZZ_161D4_B4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004B634,ZZ_4B634);
ZZ_MARK(0x8004B638);
ZZ_MARK(0x8004B63C);
ZZ_MARK(0x8004B640);
ZZ_MARK(0x8004B644);
ZZ_MARK(0x8004B648);
ZZ_MARK(0x8004B64C);
ZZ_MARK(0x8004B650);
ZZ_MARK(0x8004B654);
ZZ_MARK(0x8004B658);
ZZ_MARK(0x8004B65C);
ZZ_MARK(0x8004B660);
ZZ_MARK(0x8004B664);
ZZ_MARK_TARGET(0x8004B668,ZZ_4B634_34);
ZZ_MARK(0x8004B66C);
ZZ_MARK(0x8004B670);
ZZ_MARK(0x8004B674);
ZZ_MARK(0x8004B678);
ZZ_MARK(0x8004B67C);
ZZ_MARK(0x8004B680);
ZZ_MARK(0x8004B684);
ZZ_MARK(0x8004B688);
ZZ_MARK(0x8004B68C);
ZZ_MARK(0x8004B690);
ZZ_MARK(0x8004B694);
ZZ_MARK(0x8004B698);
ZZ_MARK(0x8004B69C);
ZZ_MARK(0x8004B6A0);
ZZ_MARK(0x8004B6A4);
ZZ_MARK_TARGET(0x8004B6A8,ZZ_4B634_74);
ZZ_MARK_TARGET(0x8004B6AC,ZZ_4B634_78);
ZZ_MARK(0x8004B6B0);
ZZ_MARK(0x8004B6B4);
ZZ_MARK(0x8004B6B8);
ZZ_MARK(0x8004B6BC);
ZZ_MARK(0x8004B6C0);
ZZ_MARK(0x8004B6C4);
ZZ_MARK(0x8004B6C8);
ZZ_MARK(0x8004B6CC);
ZZ_MARK(0x8004B6D0);
ZZ_MARK(0x8004B6D4);
ZZ_MARK(0x8004B6D8);
ZZ_MARK(0x8004B6DC);
ZZ_MARK(0x8004B6E0);
ZZ_MARK(0x8004B6E4);
ZZ_MARK(0x8004B6E8);
