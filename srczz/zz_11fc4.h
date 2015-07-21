#ifdef ZZ_INCLUDE_CODE
ZZ_11FC4:
	SP -= 240;
	EMU_Write32(SP + 204,S1); //+ 0xCC
	S1 = A0;
	EMU_Write32(SP + 236,RA); //+ 0xEC
	EMU_Write32(SP + 232,FP); //+ 0xE8
	EMU_Write32(SP + 228,S7); //+ 0xE4
	EMU_Write32(SP + 224,S6); //+ 0xE0
	EMU_Write32(SP + 220,S5); //+ 0xDC
	EMU_Write32(SP + 216,S4); //+ 0xD8
	EMU_Write32(SP + 212,S3); //+ 0xD4
	EMU_Write32(SP + 208,S2); //+ 0xD0
	RA = 0x80011FF8; //ZZ_11FC4_34
	EMU_Write32(SP + 200,S0); //+ 0xC8
	ZZ_CLOCKCYCLES(13,0x80026140);
	goto ZZ_26140;
ZZ_11FC4_34:
	S0 = 0x80060000;
	S0 -= 15064;
	A0 = S0;
	RA = 0x8001200C; //ZZ_11FC4_48
	A1 = S1;
	ZZ_CLOCKCYCLES(5,0x80015B58);
	goto ZZ_15B58;
ZZ_11FC4_48:
	RA = 0x80012014; //ZZ_11FC4_50
	S4 = 0x19;
	ZZ_CLOCKCYCLES(2,0x80011DD0);
	goto ZZ_11DD0;
ZZ_11FC4_50:
	S3 = -1;
	S7 = 0x1;
	S5 = 0x80060000;
	S5 += 6704;
	S2 = S5 - 372;
	FP = S0 + 36;
	S6 = S0;
	ZZ_CLOCKCYCLES(7,0x80012030);
ZZ_11FC4_6C:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 6372); //+ 0xFFFFE71C
	V0 &= 0x800;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(6,0x80012180);
		goto ZZ_11FC4_1BC;
	}
	V0 = EMU_ReadU32(S5);
	if (V0)
	{
		ZZ_CLOCKCYCLES(10,0x80012180);
		goto ZZ_11FC4_1BC;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 15044); //+ 0xFFFFC53C
	V1 = EMU_ReadU32(V0 + 4); //+ 0x4
	if (V1 == S4)
	{
		V0 = 0x2D;
		ZZ_CLOCKCYCLES(17,0x80012094);
		goto ZZ_11FC4_D0;
	}
	V0 = 0x2D;
	if (V1 == V0)
	{
		V0 = 0x38;
		ZZ_CLOCKCYCLES(19,0x80012094);
		goto ZZ_11FC4_D0;
	}
	V0 = 0x38;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(21,0x80012094);
		goto ZZ_11FC4_D0;
	}
	V0 = EMU_ReadU32(S5 - 124); //+ 0xFFFFFF84
	if (V0 != S3)
	{
		ZZ_CLOCKCYCLES(25,0x800120A8);
		goto ZZ_11FC4_E4;
	}
	ZZ_CLOCKCYCLES(25,0x80012094);
ZZ_11FC4_D0:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 6580); //+ 0x19B4
	if ((int32_t)V0 <= 0)
	{
		ZZ_CLOCKCYCLES(5,0x80012180);
		goto ZZ_11FC4_1BC;
	}
	ZZ_CLOCKCYCLES(5,0x800120A8);
ZZ_11FC4_E4:
	V0 = EMU_ReadU32(GP + 4); //+ 0x4
	V0 = S7 - V0;
	EMU_Write32(GP + 4,V0); //+ 0x4
	if (!V0)
	{
		ZZ_CLOCKCYCLES(6,0x8001212C);
		goto ZZ_11FC4_168;
	}
	V0 = EMU_ReadU32(S2);
	if (V0)
	{
		A0 = S2 - 2764;
		ZZ_CLOCKCYCLES(10,0x80012184);
		goto ZZ_11FC4_1C0;
	}
	A0 = S2 - 2764;
	A1 = 0x4;
	A2 = 0x4;
	A3 = R0;
	EMU_Write32(SP + 16,R0); //+ 0x10
	RA = 0x800120E8; //ZZ_11FC4_124
	EMU_Write32(SP + 20,R0); //+ 0x14
	ZZ_CLOCKCYCLES(16,0x8001C6C8);
  EMU_NativeCall(GOOL_CreateObject);
ZZ_11FC4_124:
	EMU_Write32(S2,V0);
	V0 = (int32_t)V0 < -254;
	if (V0)
	{
		ZZ_CLOCKCYCLES(4,0x80012104);
		goto ZZ_11FC4_140;
	}
	EMU_Write32(GP + 4,R0); //+ 0x4
	EMU_Write32(S2,R0);
	ZZ_CLOCKCYCLES(7,0x80012180);
	goto ZZ_11FC4_1BC;
ZZ_11FC4_140:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 31736); //+ 0xFFFF8408
	V1 = 0x80030000;
	V1 = EMU_ReadU32(V1 + 17696); //+ 0x4520
	V0 = EMU_ReadU32(V0 + 124); //+ 0x7C
	EMU_Write32(GP + 16,S7); //+ 0x10
	EMU_Write32(GP + 444,V1); //+ 0x1BC
	EMU_Write32(GP + 448,V0); //+ 0x1C0
	ZZ_CLOCKCYCLES(10,0x80012184);
	goto ZZ_11FC4_1C0;
ZZ_11FC4_168:
	V0 = EMU_ReadU32(S2);
	if (!V0)
	{
		A0 = R0;
		ZZ_CLOCKCYCLES(4,0x80012184);
		goto ZZ_11FC4_1C0;
	}
	A0 = R0;
	A2 = 0xC00;
	A3 = 0x1;
	A1 = EMU_ReadU32(S2);
	V0 = SP + 192;
	EMU_Write32(SP + 192,R0); //+ 0xC0
	RA = 0x80012158; //ZZ_11FC4_194
	EMU_Write32(SP + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(11,0x80024040);
	goto ZZ_24040;
ZZ_11FC4_194:
	V1 = EMU_ReadU32(GP + 444); //+ 0x1BC
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 31736); //+ 0xFFFF8408
	V0 = EMU_ReadU32(GP + 448); //+ 0x1C0
	EMU_Write32(S2,R0);
	EMU_Write32(GP + 16,S3); //+ 0x10
	AT = 0x80030000;
	EMU_Write32(AT + 17696,V1); //+ 0x4520
	EMU_Write32(A0 + 124,V0); //+ 0x7C
	ZZ_CLOCKCYCLES(10,0x80012184);
	goto ZZ_11FC4_1C0;
ZZ_11FC4_1BC:
	EMU_Write32(GP + 16,R0); //+ 0x10
	ZZ_CLOCKCYCLES(1,0x80012184);
ZZ_11FC4_1C0:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 26292); //+ 0x66B4
	if (!V0)
	{
		V1 = 0x63960000;
		ZZ_CLOCKCYCLES(5,0x800121BC);
		goto ZZ_11FC4_1F8;
	}
	V1 = 0x63960000;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 26288); //+ 0x66B0
	V1 |= 0x347F;
	if (V0 == V1)
	{
		ZZ_CLOCKCYCLES(10,0x800121BC);
		goto ZZ_11FC4_1F8;
	}
	A0 = 0x80050000;
	A0 += 26288;
	RA = 0x800121BC; //ZZ_11FC4_1F8
	ZZ_CLOCKCYCLES(14,0x8002E98C);
	goto ZZ_2E98C;
ZZ_11FC4_1F8:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 26388); //+ 0x6714
	if (V0 != S3)
	{
		S0 = R0;
		ZZ_CLOCKCYCLES(5,0x8001222C);
		goto ZZ_11FC4_268;
	}
	S0 = R0;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 15044); //+ 0xFFFFC53C
	V0 = EMU_ReadU32(V0 + 4); //+ 0x4
	if (V0 == S4)
	{
		V0 = 0x200;
		ZZ_CLOCKCYCLES(12,0x80012218);
		goto ZZ_11FC4_254;
	}
	V0 = 0x200;
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 6352); //+ 0x18D0
	if (V1 == V0)
	{
		V0 = 0x300;
		ZZ_CLOCKCYCLES(17,0x80012210);
		goto ZZ_11FC4_24C;
	}
	V0 = 0x300;
	if (V1 == V0)
	{
		V0 = 0x400;
		ZZ_CLOCKCYCLES(19,0x80012210);
		goto ZZ_11FC4_24C;
	}
	V0 = 0x400;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(21,0x80012218);
		goto ZZ_11FC4_254;
	}
	ZZ_CLOCKCYCLES(21,0x80012210);
ZZ_11FC4_24C:
	AT = 0x80050000;
	EMU_Write32(AT + 26388,S4); //+ 0x6714
	ZZ_CLOCKCYCLES(2,0x80012218);
ZZ_11FC4_254:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 26388); //+ 0x6714
	if (V0 == S3)
	{
		S0 = R0;
		ZZ_CLOCKCYCLES(5,0x80012314);
		goto ZZ_11FC4_350;
	}
	S0 = R0;
	ZZ_CLOCKCYCLES(5,0x8001222C);
ZZ_11FC4_268:
	A0 = R0;
	A1 = 0x2900;
	A2 = R0;
	S1 = 0x80050000;
	S1 = EMU_ReadU32(S1 + 26388); //+ 0x6714
	A3 = R0;
	RA = 0x8001224C; //ZZ_11FC4_288
	EMU_Write32(SP + 16,R0); //+ 0x10
	ZZ_CLOCKCYCLES(8,0x80025134);
	goto ZZ_25134;
ZZ_11FC4_288:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 26388); //+ 0x6714
	V0 = -2;
	if (V1 != V0)
	{
		A0 = S6;
		ZZ_CLOCKCYCLES(5,0x8001227C);
		goto ZZ_11FC4_2B8;
	}
	A0 = S6;
	S1 = 0x80050000;
	S1 = EMU_ReadU32(S1 + 31140); //+ 0x79A4
	S0 = 0x1;
	AT = 0x80050000;
	EMU_Write32(AT + 25744,S0); //+ 0x6490
	ZZ_CLOCKCYCLES(12,0x80012284);
	goto ZZ_11FC4_2C0;
ZZ_11FC4_2B8:
	AT = 0x80050000;
	EMU_Write32(AT + 25744,R0); //+ 0x6490
	ZZ_CLOCKCYCLES(2,0x80012284);
ZZ_11FC4_2C0:
	V0 = 0x2;
	RA = 0x80012290; //ZZ_11FC4_2CC
	EMU_Write32(FP,V0);
	ZZ_CLOCKCYCLES(3,0x80016420);
	goto ZZ_16420;
ZZ_11FC4_2CC:
	EMU_Write32(GP + 4,R0); //+ 0x4
	if (S1 != S4)
	{
		A0 = S6;
		ZZ_CLOCKCYCLES(3,0x800122CC);
		goto ZZ_11FC4_308;
	}
	A0 = S6;
	AT = 0x80060000;
	EMU_Write32(AT + 6304,R0); //+ 0x18A0
	AT = 0x80060000;
	EMU_Write32(AT + 6716,R0); //+ 0x1A3C
	AT = 0x80060000;
	EMU_Write32(AT + 6392,R0); //+ 0x18F8
	AT = 0x80060000;
	EMU_Write32(AT + 6396,R0); //+ 0x18FC
	AT = 0x80060000;
	EMU_Write32(AT + 6400,R0); //+ 0x1900
	AT = 0x80060000;
	EMU_Write32(AT + 6560,S3); //+ 0x19A0
	ZZ_CLOCKCYCLES(15,0x800122CC);
ZZ_11FC4_308:
	RA = 0x800122D4; //ZZ_11FC4_310
	A1 = S1;
	ZZ_CLOCKCYCLES(2,0x80015B58);
	goto ZZ_15B58;
ZZ_11FC4_310:
	RA = 0x800122DC; //ZZ_11FC4_318
	ZZ_CLOCKCYCLES(2,0x80011DD0);
	goto ZZ_11DD0;
ZZ_11FC4_318:
	if (!S0)
	{
		V0 = -2;
		ZZ_CLOCKCYCLES(2,0x8001230C);
		goto ZZ_11FC4_348;
	}
	V0 = -2;
	AT = 0x80050000;
	EMU_Write32(AT + 26388,V0); //+ 0x6714
	RA = 0x800122F4; //ZZ_11FC4_330
	ZZ_CLOCKCYCLES(6,0x80025928);
	goto ZZ_25928;
ZZ_11FC4_330:
	A0 = 0x80050000;
	A0 += 31092;
	AT = 0x80050000;
	EMU_Write32(AT + 26388,S3); //+ 0x6714
	RA = 0x8001230C; //ZZ_11FC4_348
	ZZ_CLOCKCYCLES(6,0x80026650);
	goto ZZ_26650;
ZZ_11FC4_348:
	AT = 0x80050000;
	EMU_Write32(AT + 25744,R0); //+ 0x6490
	ZZ_CLOCKCYCLES(2,0x80012314);
ZZ_11FC4_350:
	RA = 0x8001231C; //ZZ_11FC4_358
	A0 = -1;
	ZZ_CLOCKCYCLES(2,0x800134C8);
	goto ZZ_134C8;
ZZ_11FC4_358:
	RA = 0x80012324; //ZZ_11FC4_360
	ZZ_CLOCKCYCLES(2,0x80025928);
	goto ZZ_25928;
ZZ_11FC4_360:
	V0 = EMU_ReadU32(GP + 4); //+ 0x4
	if (V0)
	{
		ZZ_CLOCKCYCLES(4,0x800123BC);
		goto ZZ_11FC4_3F8;
	}
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 30996); //+ 0x7914
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	V0 = EMU_ReadU32(V0 + 764); //+ 0x2FC
	V0 &= 0x600;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(14,0x80012364);
		goto ZZ_11FC4_3A0;
	}
	RA = 0x80012364; //ZZ_11FC4_3A0
	A0 = R0;
	ZZ_CLOCKCYCLES(16,0x8002EC68);
	goto ZZ_2EC68;
ZZ_11FC4_3A0:
	V0 = EMU_ReadU32(GP + 4); //+ 0x4
	if (V0)
	{
		ZZ_CLOCKCYCLES(4,0x800123BC);
		goto ZZ_11FC4_3F8;
	}
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 30996); //+ 0x7914
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	V0 = EMU_ReadU32(V0 + 764); //+ 0x2FC
	V0 &= 0x100;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(14,0x800123A4);
		goto ZZ_11FC4_3E0;
	}
	RA = 0x800123A4; //ZZ_11FC4_3E0
	A0 = R0;
	ZZ_CLOCKCYCLES(16,0x8002EBB4);
	goto ZZ_2EBB4;
ZZ_11FC4_3E0:
	V0 = EMU_ReadU32(GP + 4); //+ 0x4
	if (V0)
	{
		ZZ_CLOCKCYCLES(4,0x800123BC);
		goto ZZ_11FC4_3F8;
	}
	RA = 0x800123BC; //ZZ_11FC4_3F8
	ZZ_CLOCKCYCLES(6,0x8002B2BC);
	goto ZZ_2B2BC;
ZZ_11FC4_3F8:
	RA = 0x800123C4; //ZZ_11FC4_400
	ZZ_CLOCKCYCLES(2,0x80017A14);
	goto ZZ_17A14;
ZZ_11FC4_400:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 6320); //+ 0x18B0
	V0 &= 0x1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(6,0x800124D0);
		goto ZZ_11FC4_50C;
	}
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 30996); //+ 0x7914
	V1 = EMU_ReadU32(V0 + 16); //+ 0x10
	V0 = EMU_ReadU32(V1);
	if (!V0)
	{
		ZZ_CLOCKCYCLES(15,0x800124D0);
		goto ZZ_11FC4_50C;
	}
	V0 = EMU_ReadU32(GP);
	if (V0)
	{
		ZZ_CLOCKCYCLES(19,0x800124D0);
		goto ZZ_11FC4_50C;
	}
	A0 = EMU_ReadU32(V1 + 764); //+ 0x2FC
	V0 = A0 & 0x400;
	if (!V0)
	{
		V1 = A0 & 0x210;
		ZZ_CLOCKCYCLES(24,0x8001243C);
		goto ZZ_11FC4_478;
	}
	V1 = A0 & 0x210;
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 31732); //+ 0xFFFF840C
	RA = 0x80012434; //ZZ_11FC4_470
	A0 += 136;
	ZZ_CLOCKCYCLES(28,0x8001A2E0);
	goto ZZ_1A2E0;
ZZ_11FC4_470:
	ZZ_CLOCKCYCLES(2,0x800124D0);
	goto ZZ_11FC4_50C;
ZZ_11FC4_478:
	V0 = 0x210;
	if (V1 != V0)
	{
		V0 = A0 & 0x10;
		ZZ_CLOCKCYCLES(3,0x80012460);
		goto ZZ_11FC4_49C;
	}
	V0 = A0 & 0x10;
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 31732); //+ 0xFFFF840C
	RA = 0x80012458; //ZZ_11FC4_494
	A0 += 136;
	ZZ_CLOCKCYCLES(7,0x8001A0CC);
	goto ZZ_1A0CC;
ZZ_11FC4_494:
	ZZ_CLOCKCYCLES(2,0x800124D0);
	goto ZZ_11FC4_50C;
ZZ_11FC4_49C:
	if (!V0)
	{
		V0 = A0 & 0x100;
		ZZ_CLOCKCYCLES(2,0x80012480);
		goto ZZ_11FC4_4BC;
	}
	V0 = A0 & 0x100;
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 31732); //+ 0xFFFF840C
	RA = 0x80012478; //ZZ_11FC4_4B4
	A0 += 136;
	ZZ_CLOCKCYCLES(6,0x80019BCC);
	goto ZZ_19BCC;
ZZ_11FC4_4B4:
	ZZ_CLOCKCYCLES(2,0x800124D0);
	goto ZZ_11FC4_50C;
ZZ_11FC4_4BC:
	if (!V0)
	{
		V0 = A0 & 0x200;
		ZZ_CLOCKCYCLES(2,0x800124A0);
		goto ZZ_11FC4_4DC;
	}
	V0 = A0 & 0x200;
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 31732); //+ 0xFFFF840C
	RA = 0x80012498; //ZZ_11FC4_4D4
	A0 += 136;
	ZZ_CLOCKCYCLES(6,0x80019DE0);
	goto ZZ_19DE0;
ZZ_11FC4_4D4:
	ZZ_CLOCKCYCLES(2,0x800124D0);
	goto ZZ_11FC4_50C;
ZZ_11FC4_4DC:
	if (!V0)
	{
		ZZ_CLOCKCYCLES(2,0x800124C0);
		goto ZZ_11FC4_4FC;
	}
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 31732); //+ 0xFFFF840C
	RA = 0x800124B8; //ZZ_11FC4_4F4
	A0 += 136;
	ZZ_CLOCKCYCLES(6,0x80019F90);
	goto ZZ_19F90;
ZZ_11FC4_4F4:
	ZZ_CLOCKCYCLES(2,0x800124D0);
	goto ZZ_11FC4_50C;
ZZ_11FC4_4FC:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 31732); //+ 0xFFFF840C
	RA = 0x800124D0; //ZZ_11FC4_50C
	A0 += 136;
	ZZ_CLOCKCYCLES(4,0x80019508);
	goto ZZ_19508;
ZZ_11FC4_50C:
	A0 = EMU_ReadU32(GP + 4); //+ 0x4
	RA = 0x800124DC; //ZZ_11FC4_518
	A0 = A0 < 1;
	ZZ_CLOCKCYCLES(3,0x8001D5EC);
	goto ZZ_1D5EC;
ZZ_11FC4_518:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 15044); //+ 0xFFFFC53C
	V0 = EMU_ReadU32(V0 + 4); //+ 0x4
	if (V0 != S4)
	{
		ZZ_CLOCKCYCLES(7,0x80012508);
		goto ZZ_11FC4_544;
	}
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 31732); //+ 0xFFFF840C
	RA = 0x80012508; //ZZ_11FC4_544
	A0 += 136;
	ZZ_CLOCKCYCLES(11,0x800326D8);
	goto ZZ_326D8;
ZZ_11FC4_544:
	RA = 0x80012510; //ZZ_11FC4_54C
	ZZ_CLOCKCYCLES(2,0x80016E5C);
	goto ZZ_16E5C;
ZZ_11FC4_54C:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 25640); //+ 0x6428
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80012030);
		goto ZZ_11FC4_6C;
	}
	AT = 0x80060000;
	EMU_Write32(AT + 6320,R0); //+ 0x18B0
	RA = 0x80012534; //ZZ_11FC4_570
	ZZ_CLOCKCYCLES(9,0x80016E5C);
	goto ZZ_16E5C;
ZZ_11FC4_570:
	RA = 0x8001253C; //ZZ_11FC4_578
	ZZ_CLOCKCYCLES(2,0x80016E5C);
	goto ZZ_16E5C;
ZZ_11FC4_578:
	A0 = 0x80060000;
	A0 -= 15064;
	RA = 0x8001254C; //ZZ_11FC4_588
	ZZ_CLOCKCYCLES(4,0x80016420);
	goto ZZ_16420;
ZZ_11FC4_588:
	RA = EMU_ReadU32(SP + 236); //+ 0xEC
	FP = EMU_ReadU32(SP + 232); //+ 0xE8
	S7 = EMU_ReadU32(SP + 228); //+ 0xE4
	S6 = EMU_ReadU32(SP + 224); //+ 0xE0
	S5 = EMU_ReadU32(SP + 220); //+ 0xDC
	S4 = EMU_ReadU32(SP + 216); //+ 0xD8
	S3 = EMU_ReadU32(SP + 212); //+ 0xD4
	S2 = EMU_ReadU32(SP + 208); //+ 0xD0
	S1 = EMU_ReadU32(SP + 204); //+ 0xCC
	S0 = EMU_ReadU32(SP + 200); //+ 0xC8
	SP += 240;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(13);
	
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80011FC4,0x80011FF8,ZZ_11FC4);
ZZ_MARK_TARGET(0x80011FF8,0x8001200C,ZZ_11FC4_34);
ZZ_MARK_TARGET(0x8001200C,0x80012014,ZZ_11FC4_48);
ZZ_MARK_TARGET(0x80012014,0x80012030,ZZ_11FC4_50);
ZZ_MARK_TARGET(0x80012030,0x80012094,ZZ_11FC4_6C);
ZZ_MARK_TARGET(0x80012094,0x800120A8,ZZ_11FC4_D0);
ZZ_MARK_TARGET(0x800120A8,0x800120E8,ZZ_11FC4_E4);
ZZ_MARK_TARGET(0x800120E8,0x80012104,ZZ_11FC4_124);
ZZ_MARK_TARGET(0x80012104,0x8001212C,ZZ_11FC4_140);
ZZ_MARK_TARGET(0x8001212C,0x80012158,ZZ_11FC4_168);
ZZ_MARK_TARGET(0x80012158,0x80012180,ZZ_11FC4_194);
ZZ_MARK_TARGET(0x80012180,0x80012184,ZZ_11FC4_1BC);
ZZ_MARK_TARGET(0x80012184,0x800121BC,ZZ_11FC4_1C0);
ZZ_MARK_TARGET(0x800121BC,0x80012210,ZZ_11FC4_1F8);
ZZ_MARK_TARGET(0x80012210,0x80012218,ZZ_11FC4_24C);
ZZ_MARK_TARGET(0x80012218,0x8001222C,ZZ_11FC4_254);
ZZ_MARK_TARGET(0x8001222C,0x8001224C,ZZ_11FC4_268);
ZZ_MARK_TARGET(0x8001224C,0x8001227C,ZZ_11FC4_288);
ZZ_MARK_TARGET(0x8001227C,0x80012284,ZZ_11FC4_2B8);
ZZ_MARK_TARGET(0x80012284,0x80012290,ZZ_11FC4_2C0);
ZZ_MARK_TARGET(0x80012290,0x800122CC,ZZ_11FC4_2CC);
ZZ_MARK_TARGET(0x800122CC,0x800122D4,ZZ_11FC4_308);
ZZ_MARK_TARGET(0x800122D4,0x800122DC,ZZ_11FC4_310);
ZZ_MARK_TARGET(0x800122DC,0x800122F4,ZZ_11FC4_318);
ZZ_MARK_TARGET(0x800122F4,0x8001230C,ZZ_11FC4_330);
ZZ_MARK_TARGET(0x8001230C,0x80012314,ZZ_11FC4_348);
ZZ_MARK_TARGET(0x80012314,0x8001231C,ZZ_11FC4_350);
ZZ_MARK_TARGET(0x8001231C,0x80012324,ZZ_11FC4_358);
ZZ_MARK_TARGET(0x80012324,0x80012364,ZZ_11FC4_360);
ZZ_MARK_TARGET(0x80012364,0x800123A4,ZZ_11FC4_3A0);
ZZ_MARK_TARGET(0x800123A4,0x800123BC,ZZ_11FC4_3E0);
ZZ_MARK_TARGET(0x800123BC,0x800123C4,ZZ_11FC4_3F8);
ZZ_MARK_TARGET(0x800123C4,0x80012434,ZZ_11FC4_400);
ZZ_MARK_TARGET(0x80012434,0x8001243C,ZZ_11FC4_470);
ZZ_MARK_TARGET(0x8001243C,0x80012458,ZZ_11FC4_478);
ZZ_MARK_TARGET(0x80012458,0x80012460,ZZ_11FC4_494);
ZZ_MARK_TARGET(0x80012460,0x80012478,ZZ_11FC4_49C);
ZZ_MARK_TARGET(0x80012478,0x80012480,ZZ_11FC4_4B4);
ZZ_MARK_TARGET(0x80012480,0x80012498,ZZ_11FC4_4BC);
ZZ_MARK_TARGET(0x80012498,0x800124A0,ZZ_11FC4_4D4);
ZZ_MARK_TARGET(0x800124A0,0x800124B8,ZZ_11FC4_4DC);
ZZ_MARK_TARGET(0x800124B8,0x800124C0,ZZ_11FC4_4F4);
ZZ_MARK_TARGET(0x800124C0,0x800124D0,ZZ_11FC4_4FC);
ZZ_MARK_TARGET(0x800124D0,0x800124DC,ZZ_11FC4_50C);
ZZ_MARK_TARGET(0x800124DC,0x80012508,ZZ_11FC4_518);
ZZ_MARK_TARGET(0x80012508,0x80012510,ZZ_11FC4_544);
ZZ_MARK_TARGET(0x80012510,0x80012534,ZZ_11FC4_54C);
ZZ_MARK_TARGET(0x80012534,0x8001253C,ZZ_11FC4_570);
ZZ_MARK_TARGET(0x8001253C,0x8001254C,ZZ_11FC4_578);
ZZ_MARK_TARGET(0x8001254C,0x80012580,ZZ_11FC4_588);