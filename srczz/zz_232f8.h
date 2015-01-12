#ifdef ZZ_INCLUDE_CODE
ZZ_232F8:
	SP -= 56;
	EMU_Write32(SP + 40,S0); //+ 0x28
	S0 = A0;
	EMU_Write32(SP + 48,S2); //+ 0x30
	S2 = A1;
	A1 = 0x198;
	A2 = S2;
	A3 = R0;
	V0 = 0x1;
	EMU_Write32(SP + 52,RA); //+ 0x34
	EMU_Write32(SP + 44,S1); //+ 0x2C
	EMU_Write32(SP + 16,R0); //+ 0x10
	EMU_Write32(SP + 20,V0); //+ 0x14
	EMU_Write32(SP + 24,R0); //+ 0x18
	EMU_Write32(SP + 28,R0); //+ 0x1C
	RA = 0x8002333C; //ZZ_232F8_44
	EMU_Write32(SP + 32,R0); //+ 0x20
	ZZ_CLOCKCYCLES(17,0x80031DF4);
	goto ZZ_31DF4;
ZZ_232F8_44:
	S1 = V0;
	if (!S1)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(3,0x800233AC);
		goto ZZ_232F8_B4;
	}
	A0 = S0;
	A1 = 0x198;
	A2 = S2;
	RA = 0x80023358; //ZZ_232F8_60
	A3 = 0x1;
	ZZ_CLOCKCYCLES(7,0x800325CC);
	goto ZZ_325CC;
ZZ_232F8_60:
	S2 = V0;
	if (!S2)
	{
		ZZ_CLOCKCYCLES(3,0x800233AC);
		goto ZZ_232F8_B4;
	}
	ZZ_CLOCKCYCLES(3,0x80023364);
ZZ_232F8_6C:
	A2 = EMU_ReadU32(S1 + 4); //+ 0x4
	S0 = EMU_ReadU32(S1);
	if ((int32_t)A2 < 0)
	{
		A0 = R0;
		ZZ_CLOCKCYCLES(4,0x80023394);
		goto ZZ_232F8_9C;
	}
	A0 = R0;
	A1 = 0x80060000;
	A1 = EMU_ReadU32(A1 - 2524); //+ 0xFFFFF624
	A3 = S0 - 2;
	V0 = S1 + 8;
	RA = 0x8002338C; //ZZ_232F8_94
	EMU_Write32(SP + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(10,0x8001CD48);
	goto ZZ_1CD48;
ZZ_232F8_94:
	V0 = S0 << 2;
	ZZ_CLOCKCYCLES(2,0x800233A0);
	goto ZZ_232F8_A8;
ZZ_232F8_9C:
	RA = 0x8002339C; //ZZ_232F8_A4
	ZZ_CLOCKCYCLES(2,0x80012E84);
	goto ZZ_12E84;
ZZ_232F8_A4:
	V0 = S0 << 2;
	ZZ_CLOCKCYCLES(1,0x800233A0);
ZZ_232F8_A8:
	S2 = S2 - S0;
	if (S2)
	{
		S1 += V0;
		ZZ_CLOCKCYCLES(3,0x80023364);
		goto ZZ_232F8_6C;
	}
	S1 += V0;
	ZZ_CLOCKCYCLES(3,0x800233AC);
ZZ_232F8_B4:
	RA = EMU_ReadU32(SP + 52); //+ 0x34
	S2 = EMU_ReadU32(SP + 48); //+ 0x30
	S1 = EMU_ReadU32(SP + 44); //+ 0x2C
	S0 = EMU_ReadU32(SP + 40); //+ 0x28
	SP += 56;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x80022C78,ZZ_22AD4_1A4);
	ZZ_JUMPREGISTER(0x800230CC,ZZ_22CD0_3FC);
	ZZ_JUMPREGISTER(0x80026988,ZZ_26700_288);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800232F8,ZZ_232F8);
ZZ_MARK(0x800232FC);
ZZ_MARK(0x80023300);
ZZ_MARK(0x80023304);
ZZ_MARK(0x80023308);
ZZ_MARK(0x8002330C);
ZZ_MARK(0x80023310);
ZZ_MARK(0x80023314);
ZZ_MARK(0x80023318);
ZZ_MARK(0x8002331C);
ZZ_MARK(0x80023320);
ZZ_MARK(0x80023324);
ZZ_MARK(0x80023328);
ZZ_MARK(0x8002332C);
ZZ_MARK(0x80023330);
ZZ_MARK(0x80023334);
ZZ_MARK(0x80023338);
ZZ_MARK_TARGET(0x8002333C,ZZ_232F8_44);
ZZ_MARK(0x80023340);
ZZ_MARK(0x80023344);
ZZ_MARK(0x80023348);
ZZ_MARK(0x8002334C);
ZZ_MARK(0x80023350);
ZZ_MARK(0x80023354);
ZZ_MARK_TARGET(0x80023358,ZZ_232F8_60);
ZZ_MARK(0x8002335C);
ZZ_MARK(0x80023360);
ZZ_MARK_TARGET(0x80023364,ZZ_232F8_6C);
ZZ_MARK(0x80023368);
ZZ_MARK(0x8002336C);
ZZ_MARK(0x80023370);
ZZ_MARK(0x80023374);
ZZ_MARK(0x80023378);
ZZ_MARK(0x8002337C);
ZZ_MARK(0x80023380);
ZZ_MARK(0x80023384);
ZZ_MARK(0x80023388);
ZZ_MARK_TARGET(0x8002338C,ZZ_232F8_94);
ZZ_MARK(0x80023390);
ZZ_MARK_TARGET(0x80023394,ZZ_232F8_9C);
ZZ_MARK(0x80023398);
ZZ_MARK_TARGET(0x8002339C,ZZ_232F8_A4);
ZZ_MARK_TARGET(0x800233A0,ZZ_232F8_A8);
ZZ_MARK(0x800233A4);
ZZ_MARK(0x800233A8);
ZZ_MARK_TARGET(0x800233AC,ZZ_232F8_B4);
ZZ_MARK(0x800233B0);
ZZ_MARK(0x800233B4);
ZZ_MARK(0x800233B8);
ZZ_MARK(0x800233BC);
ZZ_MARK(0x800233C0);
ZZ_MARK(0x800233C4);
