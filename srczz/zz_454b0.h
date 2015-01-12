#ifdef ZZ_INCLUDE_CODE
ZZ_454B0:
	SP -= 68;
	EMU_Write32(SP + 16,S0); //+ 0x10
	EMU_Write32(SP + 20,S1); //+ 0x14
	EMU_Write32(SP + 24,S2); //+ 0x18
	EMU_Write32(SP + 28,S3); //+ 0x1C
	EMU_Write32(SP + 32,S4); //+ 0x20
	EMU_Write32(SP + 36,S5); //+ 0x24
	EMU_Write32(SP + 40,S6); //+ 0x28
	EMU_Write32(SP + 44,S7); //+ 0x2C
	EMU_Write32(SP + 48,T8); //+ 0x30
	EMU_Write32(SP + 52,T9); //+ 0x34
	EMU_Write32(SP + 56,GP); //+ 0x38
	EMU_Write32(SP + 60,FP); //+ 0x3C
	EMU_Write32(SP + 64,RA); //+ 0x40
	V1 = 0x1F800000;
	EMU_Write32(V1,SP);
	SP = A0;
	FP = A1;
	GTE_SetControlRegister(5,R0);
	GTE_SetControlRegister(6,R0);
	GTE_SetControlRegister(7,R0);
	S7 = EMU_ReadU32(FP + 8); //+ 0x8
	T2 = EMU_ReadU32(A2 + 124); //+ 0x7C
	T1 = EMU_ReadU32(A2 + 128); //+ 0x80
	T9 = EMU_ReadU32(A2 + 132); //+ 0x84
	A0 = EMU_ReadU32(A2 + 12); //+ 0xC
	T9 <<= 2;
	T3 = FP + T9;
	AT = 0x30120000;
	AT |= 0x5400;
	S6 = 0x49350000;
	S6 |= 0x83FE;
	ZZ_CLOCKCYCLES(33,0x800456C0);
	goto ZZ_454B0_210;
ZZ_454B0_84:
	T9 = S6 << 24;
	S6 >>= 8;
	T8 = AT + S6;
	AT >>= 8;
	AT |= T9;
	T9 = AT >> 8;
	T8 += T9;
	T8 <<= 24;
	S6 |= T8;
	T9 = S6 << 24;
	S6 >>= 8;
	A0 = AT + S6;
	AT >>= 8;
	AT |= T9;
	T9 = AT >> 8;
	A0 += T9;
	A0 <<= 24;
	S6 |= A0;
	T9 = S6 << 24;
	S6 >>= 8;
	A1 = AT + S6;
	AT >>= 8;
	AT |= T9;
	T9 = AT >> 8;
	A1 += T9;
	A1 <<= 24;
	S6 |= A1;
	T8 = (int32_t)T8 >> 20;
	T8 &= 0xFFFF;
	if ((int32_t)T8 < 0)
	{
		T9 = EMU_CheckedAdd(T8,-112);
		ZZ_CLOCKCYCLES(31,0x800455C0);
		goto ZZ_454B0_110;
	}
	T9 = EMU_CheckedAdd(T8,-112);
	if ((int32_t)T9 > 0)
	{
		ZZ_CLOCKCYCLES(33,0x800455D4);
		goto ZZ_454B0_124;
	}
	T8 = EMU_CheckedAdd(T8,112);
	ZZ_CLOCKCYCLES(35,0x800455D4);
	goto ZZ_454B0_124;
ZZ_454B0_110:
	T9 = EMU_CheckedAdd(T8,112);
	if ((int32_t)T9 < 0)
	{
		ZZ_CLOCKCYCLES(3,0x800455D4);
		goto ZZ_454B0_124;
	}
	T8 = EMU_CheckedAdd(T8,-112);
	ZZ_CLOCKCYCLES(5,0x800455D4);
	goto ZZ_454B0_124;
ZZ_454B0_124:
	A0 = (int32_t)A0 >> 20;
	A0 += T2;
	A0 = (int32_t)A0 >> T1;
	A0 <<= 16;
	A0 |= T8;
	A1 = (int32_t)A1 >> 20;
	if ((int32_t)A1 < 0)
	{
		T9 = EMU_CheckedAdd(A1,-112);
		ZZ_CLOCKCYCLES(8,0x80045604);
		goto ZZ_454B0_154;
	}
	T9 = EMU_CheckedAdd(A1,-112);
	if ((int32_t)T9 > 0)
	{
		ZZ_CLOCKCYCLES(10,0x80045618);
		goto ZZ_454B0_168;
	}
	A1 = EMU_CheckedAdd(A1,112);
	ZZ_CLOCKCYCLES(12,0x80045618);
	goto ZZ_454B0_168;
ZZ_454B0_154:
	T9 = EMU_CheckedAdd(A1,112);
	if ((int32_t)T9 < 0)
	{
		ZZ_CLOCKCYCLES(3,0x80045618);
		goto ZZ_454B0_168;
	}
	A1 = EMU_CheckedAdd(A1,-112);
	ZZ_CLOCKCYCLES(5,0x80045618);
	goto ZZ_454B0_168;
ZZ_454B0_168:
	A2 = S7 << 8;
	A2 >>= 8;
	GTE_SetDataRegister(0,A0);
	GTE_SetDataRegister(1,A1);
	T9 = S6 << 24;
	S6 >>= 8;
	T0 = AT + S6;
	AT >>= 8;
	AT |= T9;
	T9 = AT >> 8;
	T0 += T9;
	T0 <<= 24;
	S6 |= T0;
	GTE_Execute(1572865);
	T0 >>= 24;
	T0 |= 0x40;
	T0 &= 0xFF;
	T8 = T0 << 8;
	T0 |= T8;
	T8 <<= 8;
	T0 |= T8;
	T8 = 0x68000000;
	T0 |= T8;
	A3 = 0x1010000;
	A3 |= 0x200;
	T8 = GTE_GetControlRegister(31);
	A1 = GTE_GetDataRegister(14);
	T8 <<= 13;
	if ((int32_t)T8 < 0)
	{
		T8 = A1 - A3;
		ZZ_CLOCKCYCLES(30,0x800456C0);
		goto ZZ_454B0_210;
	}
	T8 = A1 - A3;
	T8 = ~(T8 | A1);
	if ((int32_t)T8 < 0)
	{
		T8 <<= 16;
		ZZ_CLOCKCYCLES(33,0x800456C0);
		goto ZZ_454B0_210;
	}
	T8 <<= 16;
	if ((int32_t)T8 < 0)
	{
		T9 = 0x2000000;
		ZZ_CLOCKCYCLES(35,0x800456C0);
		goto ZZ_454B0_210;
	}
	T9 = 0x2000000;
	T8 = EMU_ReadU32(T3 + 24); //+ 0x18
	EMU_Write32(S7 + 4,T0); //+ 0x4
	T8 |= T9;
	EMU_Write32(S7,T8);
	EMU_Write32(S7 + 8,A1); //+ 0x8
	EMU_Write32(T3 + 24,A2); //+ 0x18
	S7 = EMU_CheckedAdd(S7,12);
	ZZ_CLOCKCYCLES(42,0x800456C0);
ZZ_454B0_210:
	if ((int32_t)SP >= 0)
	{
		SP = EMU_CheckedAdd(SP,-1);
		ZZ_CLOCKCYCLES(2,0x80045534);
		goto ZZ_454B0_84;
	}
	SP = EMU_CheckedAdd(SP,-1);
	T9 = 0x2000000;
	T8 = 0xE1000000;
	T8 |= 0xA60;
	EMU_Write32(S7 + 4,T8); //+ 0x4
	EMU_Write32(S7 + 8,R0); //+ 0x8
	T8 = EMU_ReadU32(T3 + 24); //+ 0x18
	A1 = S7 << 8;
	T8 |= T9;
	EMU_Write32(S7,T8);
	A1 >>= 8;
	EMU_Write32(T3 + 24,A1); //+ 0x18
	S7 = EMU_CheckedAdd(S7,12);
	SP = EMU_ReadU32(V1);
	EMU_Write32(FP + 8,S7); //+ 0x8
	RA = EMU_ReadU32(SP + 64); //+ 0x40
	FP = EMU_ReadU32(SP + 60); //+ 0x3C
	GP = EMU_ReadU32(SP + 56); //+ 0x38
	T9 = EMU_ReadU32(SP + 52); //+ 0x34
	T8 = EMU_ReadU32(SP + 48); //+ 0x30
	S7 = EMU_ReadU32(SP + 44); //+ 0x2C
	S6 = EMU_ReadU32(SP + 40); //+ 0x28
	S5 = EMU_ReadU32(SP + 36); //+ 0x24
	S4 = EMU_ReadU32(SP + 32); //+ 0x20
	S3 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 68;
	ZZ_CLOCKCYCLES_JR(31);
	ZZ_JUMPREGISTER(0x80011D80,ZZ_11800_580);
	ZZ_JUMPREGISTER_END();
ZZ_454B0_28C:
	EMU_Write32(V1 + 100,RA); //+ 0x64
	T8 = EMU_ReadU32(V1 + 124); //+ 0x7C
	T9 = EMU_ReadU32(V1 + 120); //+ 0x78
	A0 = EMU_ReadU32(V1 + 116); //+ 0x74
	if ((int32_t)T8 >= 0)
	{
		T8 = EMU_CheckedAdd(V1,176);
		ZZ_CLOCKCYCLES(6,0x8004577C);
		goto ZZ_454B0_2CC;
	}
	T8 = EMU_CheckedAdd(V1,176);
	if ((int32_t)T9 >= 0)
	{
		T9 = EMU_CheckedAdd(V1,128);
		ZZ_CLOCKCYCLES(8,0x8004576C);
		goto ZZ_454B0_2BC;
	}
	T9 = EMU_CheckedAdd(V1,128);
	if ((int32_t)A0 < 0)
	{
		ZZ_CLOCKCYCLES(10,0x80045AF8);
		goto ZZ_454B0_648;
	}
	ZZ_CLOCKCYCLES(12,0x8004579C);
	goto ZZ_454B0_2EC;
ZZ_454B0_2BC:
	if ((int32_t)A0 >= 0)
	{
		ZZ_CLOCKCYCLES(2,0x800459C0);
		goto ZZ_454B0_510;
	}
	ZZ_CLOCKCYCLES(4,0x800458AC);
	goto ZZ_454B0_3FC;
ZZ_454B0_2CC:
	if ((int32_t)T9 >= 0)
	{
		T9 = EMU_CheckedAdd(V1,128);
		ZZ_CLOCKCYCLES(2,0x80045794);
		goto ZZ_454B0_2E4;
	}
	T9 = EMU_CheckedAdd(V1,128);
	if ((int32_t)A0 >= 0)
	{
		ZZ_CLOCKCYCLES(4,0x800458AC);
		goto ZZ_454B0_3FC;
	}
	ZZ_CLOCKCYCLES(6,0x800459C0);
	goto ZZ_454B0_510;
ZZ_454B0_2E4:
	if ((int32_t)A0 >= 0)
	{
		ZZ_CLOCKCYCLES(2,0x80045AF8);
		goto ZZ_454B0_648;
	}
	ZZ_CLOCKCYCLES(2,0x8004579C);
ZZ_454B0_2EC:
	RA = 0x800457A4; //ZZ_454B0_2F4
	ZZ_CLOCKCYCLES(2,0x8003EB74);
	goto ZZ_3EB74;
ZZ_454B0_2F4:
	RA = 0x800457AC; //ZZ_454B0_2FC
	A0 = EMU_CheckedAdd(V1,144);
	ZZ_CLOCKCYCLES(2,0x8003EBD8);
	goto ZZ_3EBD8;
ZZ_454B0_2FC:
	T8 = EMU_CheckedAdd(V1,192);
	RA = 0x800457B8; //ZZ_454B0_308
	A0 = EMU_CheckedAdd(V1,160);
	ZZ_CLOCKCYCLES(3,0x8003EBD8);
	goto ZZ_3EBD8;
ZZ_454B0_308:
	GTE_SetDataRegister(2,EMU_ReadU32(V1 + 192)); //+ 0xC0
	GTE_SetDataRegister(3,EMU_ReadU32(V1 + 196)); //+ 0xC4
	GTE_SetDataRegister(4,EMU_ReadU32(V1 + 176)); //+ 0xB0
	GTE_SetDataRegister(5,EMU_ReadU32(V1 + 180)); //+ 0xB4
	T5 = EMU_ReadU32(V1 + 152); //+ 0x98
	T6 = EMU_ReadU32(V1 + 168); //+ 0xA8
	GTE_Execute(2621488);
	EMU_Write32(V1 + 192,GTE_GetDataRegister(13)); //+ 0xC0
	EMU_Write32(V1 + 196,GTE_GetDataRegister(18)); //+ 0xC4
	EMU_Write32(V1 + 176,GTE_GetDataRegister(14)); //+ 0xB0
	EMU_Write32(V1 + 180,GTE_GetDataRegister(19)); //+ 0xB4
	A2 = EMU_ReadU32(V1 + 112); //+ 0x70
	GTE_SetDataRegister(12,EMU_ReadU32(V1 + 216)); //+ 0xD8
	GTE_SetDataRegister(17,EMU_ReadU32(V1 + 220)); //+ 0xDC
	GTE_SetDataRegister(13,EMU_ReadU32(V1 + 224)); //+ 0xE0
	GTE_SetDataRegister(18,EMU_ReadU32(V1 + 228)); //+ 0xE4
	if (!A2)
	{
		T8 = EMU_ReadS16(V1 + 156); //+ 0x9C
		ZZ_CLOCKCYCLES(18,0x80045814);
		goto ZZ_454B0_364;
	}
	T8 = EMU_ReadS16(V1 + 156); //+ 0x9C
	T9 = EMU_ReadS16(V1 + 172); //+ 0xAC
	A0 = EMU_ReadS16(V1 + 188); //+ 0xBC
	EMU_Write16(V1 + 256,T8); //+ 0x100
	EMU_Write16(V1 + 260,T9); //+ 0x104
	EMU_Write16(V1 + 264,A0); //+ 0x108
	ZZ_CLOCKCYCLES(23,0x80045814);
ZZ_454B0_364:
	RA = 0x8004581C; //ZZ_454B0_36C
	T9 = EMU_ReadU32(V1 + 120); //+ 0x78
	ZZ_CLOCKCYCLES(2,0x80045B10);
	goto ZZ_45B10;
ZZ_454B0_36C:
	A2 = EMU_ReadU32(V1 + 112); //+ 0x70
	GTE_SetDataRegister(12,EMU_ReadU32(V1 + 224)); //+ 0xE0
	GTE_SetDataRegister(17,EMU_ReadU32(V1 + 228)); //+ 0xE4
	GTE_SetDataRegister(13,EMU_ReadU32(V1 + 192)); //+ 0xC0
	GTE_SetDataRegister(18,EMU_ReadU32(V1 + 196)); //+ 0xC4
	GTE_SetDataRegister(14,EMU_ReadU32(V1 + 176)); //+ 0xB0
	GTE_SetDataRegister(19,EMU_ReadU32(V1 + 180)); //+ 0xB4
	if (!A2)
	{
		T5 = EMU_ReadU32(V1 + 168); //+ 0xA8
		ZZ_CLOCKCYCLES(9,0x80045850);
		goto ZZ_454B0_3A0;
	}
	T5 = EMU_ReadU32(V1 + 168); //+ 0xA8
	T8 = EMU_ReadS16(V1 + 172); //+ 0xAC
	T9 = EMU_ReadS16(V1 + 204); //+ 0xCC
	EMU_Write16(V1 + 256,T8); //+ 0x100
	EMU_Write16(V1 + 260,T9); //+ 0x104
	ZZ_CLOCKCYCLES(13,0x80045850);
ZZ_454B0_3A0:
	T6 = EMU_ReadU32(V1 + 200); //+ 0xC8
	T7 = EMU_ReadU32(V1 + 184); //+ 0xB8
	RA = 0x80045860; //ZZ_454B0_3B0
	T9 = EMU_ReadU32(V1 + 124); //+ 0x7C
	ZZ_CLOCKCYCLES(4,0x80045B10);
	goto ZZ_45B10;
ZZ_454B0_3B0:
	A2 = EMU_ReadU32(V1 + 112); //+ 0x70
	GTE_SetDataRegister(12,EMU_ReadU32(V1 + 192)); //+ 0xC0
	GTE_SetDataRegister(17,EMU_ReadU32(V1 + 196)); //+ 0xC4
	GTE_SetDataRegister(13,EMU_ReadU32(V1 + 208)); //+ 0xD0
	GTE_SetDataRegister(18,EMU_ReadU32(V1 + 212)); //+ 0xD4
	GTE_SetDataRegister(14,EMU_ReadU32(V1 + 176)); //+ 0xB0
	GTE_SetDataRegister(19,EMU_ReadU32(V1 + 180)); //+ 0xB4
	if (!A2)
	{
		T5 = EMU_ReadU32(V1 + 200); //+ 0xC8
		ZZ_CLOCKCYCLES(9,0x80045894);
		goto ZZ_454B0_3E4;
	}
	T5 = EMU_ReadU32(V1 + 200); //+ 0xC8
	T8 = EMU_ReadS16(V1 + 204); //+ 0xCC
	T9 = EMU_ReadS16(V1 + 140); //+ 0x8C
	EMU_Write16(V1 + 256,T8); //+ 0x100
	EMU_Write16(V1 + 260,T9); //+ 0x104
	ZZ_CLOCKCYCLES(13,0x80045894);
ZZ_454B0_3E4:
	T6 = EMU_ReadU32(V1 + 136); //+ 0x88
	T7 = EMU_ReadU32(V1 + 184); //+ 0xB8
	RA = 0x800458A4; //ZZ_454B0_3F4
	T9 = EMU_ReadU32(V1 + 116); //+ 0x74
	ZZ_CLOCKCYCLES(4,0x80045B10);
	goto ZZ_45B10;
ZZ_454B0_3F4:
	T5 = EMU_ReadU32(V1 + 136); //+ 0x88
	ZZ_CLOCKCYCLES(2,0x80045AD0);
	goto ZZ_454B0_620;
ZZ_454B0_3FC:
	RA = 0x800458B4; //ZZ_454B0_404
	ZZ_CLOCKCYCLES(2,0x8003EB74);
	goto ZZ_3EB74;
ZZ_454B0_404:
	RA = 0x800458BC; //ZZ_454B0_40C
	A0 = EMU_CheckedAdd(V1,144);
	ZZ_CLOCKCYCLES(2,0x8003EBD8);
	goto ZZ_3EBD8;
ZZ_454B0_40C:
	T8 = EMU_CheckedAdd(V1,192);
	RA = 0x800458C8; //ZZ_454B0_418
	T9 = EMU_CheckedAdd(V1,160);
	ZZ_CLOCKCYCLES(3,0x8003EBD8);
	goto ZZ_3EBD8;
ZZ_454B0_418:
	GTE_SetDataRegister(2,EMU_ReadU32(V1 + 192)); //+ 0xC0
	GTE_SetDataRegister(3,EMU_ReadU32(V1 + 196)); //+ 0xC4
	GTE_SetDataRegister(4,EMU_ReadU32(V1 + 176)); //+ 0xB0
	GTE_SetDataRegister(5,EMU_ReadU32(V1 + 180)); //+ 0xB4
	T5 = EMU_ReadU32(V1 + 168); //+ 0xA8
	T6 = EMU_ReadU32(V1 + 136); //+ 0x88
	GTE_Execute(2621488);
	EMU_Write32(V1 + 192,GTE_GetDataRegister(13)); //+ 0xC0
	EMU_Write32(V1 + 196,GTE_GetDataRegister(18)); //+ 0xC4
	EMU_Write32(V1 + 176,GTE_GetDataRegister(14)); //+ 0xB0
	EMU_Write32(V1 + 180,GTE_GetDataRegister(19)); //+ 0xB4
	A2 = EMU_ReadU32(V1 + 112); //+ 0x70
	GTE_SetDataRegister(12,EMU_ReadU32(V1 + 224)); //+ 0xE0
	GTE_SetDataRegister(17,EMU_ReadU32(V1 + 228)); //+ 0xE4
	GTE_SetDataRegister(13,EMU_ReadU32(V1 + 208)); //+ 0xD0
	GTE_SetDataRegister(18,EMU_ReadU32(V1 + 212)); //+ 0xD4
	if (!A2)
	{
		T7 = EMU_ReadU32(V1 + 184); //+ 0xB8
		ZZ_CLOCKCYCLES(18,0x80045928);
		goto ZZ_454B0_478;
	}
	T7 = EMU_ReadU32(V1 + 184); //+ 0xB8
	T8 = EMU_ReadS16(V1 + 172); //+ 0xAC
	T9 = EMU_ReadS16(V1 + 140); //+ 0x8C
	A0 = EMU_ReadS16(V1 + 188); //+ 0xBC
	EMU_Write16(V1 + 256,T8); //+ 0x100
	EMU_Write16(V1 + 260,T9); //+ 0x104
	EMU_Write16(V1 + 264,A0); //+ 0x108
	ZZ_CLOCKCYCLES(24,0x80045928);
ZZ_454B0_478:
	RA = 0x80045930; //ZZ_454B0_480
	T9 = EMU_ReadU32(V1 + 116); //+ 0x74
	ZZ_CLOCKCYCLES(2,0x80045B10);
	goto ZZ_45B10;
ZZ_454B0_480:
	A2 = EMU_ReadU32(V1 + 112); //+ 0x70
	GTE_SetDataRegister(12,EMU_ReadU32(V1 + 192)); //+ 0xC0
	GTE_SetDataRegister(17,EMU_ReadU32(V1 + 196)); //+ 0xC4
	GTE_SetDataRegister(13,EMU_ReadU32(V1 + 224)); //+ 0xE0
	GTE_SetDataRegister(18,EMU_ReadU32(V1 + 228)); //+ 0xE4
	GTE_SetDataRegister(14,EMU_ReadU32(V1 + 176)); //+ 0xB0
	GTE_SetDataRegister(19,EMU_ReadU32(V1 + 180)); //+ 0xB4
	if (!A2)
	{
		T5 = EMU_ReadU32(V1 + 200); //+ 0xC8
		ZZ_CLOCKCYCLES(9,0x80045964);
		goto ZZ_454B0_4B4;
	}
	T5 = EMU_ReadU32(V1 + 200); //+ 0xC8
	T8 = EMU_ReadS16(V1 + 204); //+ 0xCC
	T9 = EMU_ReadS16(V1 + 172); //+ 0xAC
	EMU_Write16(V1 + 256,T8); //+ 0x100
	EMU_Write16(V1 + 260,T9); //+ 0x104
	ZZ_CLOCKCYCLES(13,0x80045964);
ZZ_454B0_4B4:
	T6 = EMU_ReadU32(V1 + 168); //+ 0xA8
	T7 = EMU_ReadU32(V1 + 184); //+ 0xB8
	RA = 0x80045974; //ZZ_454B0_4C4
	T9 = EMU_ReadU32(V1 + 124); //+ 0x7C
	ZZ_CLOCKCYCLES(4,0x80045B10);
	goto ZZ_45B10;
ZZ_454B0_4C4:
	A2 = EMU_ReadU32(V1 + 112); //+ 0x70
	GTE_SetDataRegister(12,EMU_ReadU32(V1 + 216)); //+ 0xD8
	GTE_SetDataRegister(17,EMU_ReadU32(V1 + 220)); //+ 0xDC
	GTE_SetDataRegister(13,EMU_ReadU32(V1 + 192)); //+ 0xC0
	GTE_SetDataRegister(18,EMU_ReadU32(V1 + 196)); //+ 0xC4
	GTE_SetDataRegister(14,EMU_ReadU32(V1 + 176)); //+ 0xB0
	GTE_SetDataRegister(19,EMU_ReadU32(V1 + 180)); //+ 0xB4
	if (!A2)
	{
		T5 = EMU_ReadU32(V1 + 152); //+ 0x98
		ZZ_CLOCKCYCLES(9,0x800459A8);
		goto ZZ_454B0_4F8;
	}
	T5 = EMU_ReadU32(V1 + 152); //+ 0x98
	T8 = EMU_ReadS16(V1 + 156); //+ 0x9C
	T9 = EMU_ReadS16(V1 + 204); //+ 0xCC
	EMU_Write16(V1 + 256,T8); //+ 0x100
	EMU_Write16(V1 + 260,T9); //+ 0x104
	ZZ_CLOCKCYCLES(13,0x800459A8);
ZZ_454B0_4F8:
	T6 = EMU_ReadU32(V1 + 200); //+ 0xC8
	T7 = EMU_ReadU32(V1 + 184); //+ 0xB8
	RA = 0x800459B8; //ZZ_454B0_508
	T9 = EMU_ReadU32(V1 + 120); //+ 0x78
	ZZ_CLOCKCYCLES(4,0x80045B10);
	goto ZZ_45B10;
ZZ_454B0_508:
	T5 = EMU_ReadU32(V1 + 136); //+ 0x88
	ZZ_CLOCKCYCLES(2,0x80045AD0);
	goto ZZ_454B0_620;
ZZ_454B0_510:
	RA = 0x800459C8; //ZZ_454B0_518
	ZZ_CLOCKCYCLES(2,0x8003EB74);
	goto ZZ_3EB74;
ZZ_454B0_518:
	RA = 0x800459D0; //ZZ_454B0_520
	A0 = EMU_CheckedAdd(V1,160);
	ZZ_CLOCKCYCLES(2,0x8003EBD8);
	goto ZZ_3EBD8;
ZZ_454B0_520:
	T8 = EMU_CheckedAdd(V1,192);
	RA = 0x800459DC; //ZZ_454B0_52C
	T9 = EMU_CheckedAdd(V1,144);
	ZZ_CLOCKCYCLES(3,0x8003EBD8);
	goto ZZ_3EBD8;
ZZ_454B0_52C:
	GTE_SetDataRegister(2,EMU_ReadU32(V1 + 192)); //+ 0xC0
	GTE_SetDataRegister(3,EMU_ReadU32(V1 + 196)); //+ 0xC4
	GTE_SetDataRegister(4,EMU_ReadU32(V1 + 176)); //+ 0xB0
	GTE_SetDataRegister(5,EMU_ReadU32(V1 + 180)); //+ 0xB4
	T5 = EMU_ReadU32(V1 + 136); //+ 0x88
	T6 = EMU_ReadU32(V1 + 152); //+ 0x98
	GTE_Execute(2621488);
	EMU_Write32(V1 + 192,GTE_GetDataRegister(13)); //+ 0xC0
	EMU_Write32(V1 + 196,GTE_GetDataRegister(18)); //+ 0xC4
	EMU_Write32(V1 + 176,GTE_GetDataRegister(14)); //+ 0xB0
	EMU_Write32(V1 + 180,GTE_GetDataRegister(19)); //+ 0xB4
	A2 = EMU_ReadU32(V1 + 112); //+ 0x70
	GTE_SetDataRegister(12,EMU_ReadU32(V1 + 208)); //+ 0xD0
	GTE_SetDataRegister(17,EMU_ReadU32(V1 + 212)); //+ 0xD4
	GTE_SetDataRegister(13,EMU_ReadU32(V1 + 216)); //+ 0xD8
	GTE_SetDataRegister(18,EMU_ReadU32(V1 + 220)); //+ 0xDC
	if (!A2)
	{
		T7 = EMU_ReadU32(V1 + 184); //+ 0xB8
		ZZ_CLOCKCYCLES(18,0x80045A3C);
		goto ZZ_454B0_58C;
	}
	T7 = EMU_ReadU32(V1 + 184); //+ 0xB8
	T8 = EMU_ReadS16(V1 + 140); //+ 0x8C
	T9 = EMU_ReadS16(V1 + 156); //+ 0x9C
	A0 = EMU_ReadS16(V1 + 188); //+ 0xBC
	EMU_Write16(V1 + 256,T8); //+ 0x100
	EMU_Write16(V1 + 260,T9); //+ 0x104
	EMU_Write16(V1 + 264,A0); //+ 0x108
	ZZ_CLOCKCYCLES(24,0x80045A3C);
ZZ_454B0_58C:
	RA = 0x80045A44; //ZZ_454B0_594
	T9 = EMU_ReadU32(V1 + 116); //+ 0x74
	ZZ_CLOCKCYCLES(2,0x80045B10);
	goto ZZ_45B10;
ZZ_454B0_594:
	A2 = EMU_ReadU32(V1 + 112); //+ 0x70
	GTE_SetDataRegister(12,EMU_ReadU32(V1 + 216)); //+ 0xD8
	GTE_SetDataRegister(17,EMU_ReadU32(V1 + 220)); //+ 0xDC
	GTE_SetDataRegister(13,EMU_ReadU32(V1 + 192)); //+ 0xC0
	GTE_SetDataRegister(18,EMU_ReadU32(V1 + 196)); //+ 0xC4
	GTE_SetDataRegister(14,EMU_ReadU32(V1 + 176)); //+ 0xB0
	GTE_SetDataRegister(19,EMU_ReadU32(V1 + 180)); //+ 0xB4
	if (!A2)
	{
		T5 = EMU_ReadU32(V1 + 152); //+ 0x98
		ZZ_CLOCKCYCLES(9,0x80045A78);
		goto ZZ_454B0_5C8;
	}
	T5 = EMU_ReadU32(V1 + 152); //+ 0x98
	T8 = EMU_ReadS16(V1 + 156); //+ 0x9C
	T9 = EMU_ReadS16(V1 + 204); //+ 0xCC
	EMU_Write16(V1 + 256,T8); //+ 0x100
	EMU_Write16(V1 + 260,T9); //+ 0x104
	ZZ_CLOCKCYCLES(13,0x80045A78);
ZZ_454B0_5C8:
	T6 = EMU_ReadU32(V1 + 200); //+ 0xC8
	T7 = EMU_ReadU32(V1 + 184); //+ 0xB8
	RA = 0x80045A88; //ZZ_454B0_5D8
	T9 = EMU_ReadU32(V1 + 120); //+ 0x78
	ZZ_CLOCKCYCLES(4,0x80045B10);
	goto ZZ_45B10;
ZZ_454B0_5D8:
	A2 = EMU_ReadU32(V1 + 112); //+ 0x70
	GTE_SetDataRegister(12,EMU_ReadU32(V1 + 192)); //+ 0xC0
	GTE_SetDataRegister(17,EMU_ReadU32(V1 + 196)); //+ 0xC4
	GTE_SetDataRegister(13,EMU_ReadU32(V1 + 224)); //+ 0xE0
	GTE_SetDataRegister(18,EMU_ReadU32(V1 + 228)); //+ 0xE4
	GTE_SetDataRegister(14,EMU_ReadU32(V1 + 176)); //+ 0xB0
	GTE_SetDataRegister(19,EMU_ReadU32(V1 + 180)); //+ 0xB4
	if (!A2)
	{
		T5 = EMU_ReadU32(V1 + 200); //+ 0xC8
		ZZ_CLOCKCYCLES(9,0x80045ABC);
		goto ZZ_454B0_60C;
	}
	T5 = EMU_ReadU32(V1 + 200); //+ 0xC8
	T8 = EMU_ReadS16(V1 + 204); //+ 0xCC
	T9 = EMU_ReadS16(V1 + 172); //+ 0xAC
	EMU_Write16(V1 + 256,T8); //+ 0x100
	EMU_Write16(V1 + 260,T9); //+ 0x104
	ZZ_CLOCKCYCLES(13,0x80045ABC);
ZZ_454B0_60C:
	T6 = EMU_ReadU32(V1 + 168); //+ 0xA8
	T7 = EMU_ReadU32(V1 + 184); //+ 0xB8
	RA = 0x80045ACC; //ZZ_454B0_61C
	T9 = EMU_ReadU32(V1 + 124); //+ 0x7C
	ZZ_CLOCKCYCLES(4,0x80045B10);
	goto ZZ_45B10;
ZZ_454B0_61C:
	T5 = EMU_ReadU32(V1 + 136); //+ 0x88
	ZZ_CLOCKCYCLES(1,0x80045AD0);
ZZ_454B0_620:
	GTE_SetDataRegister(12,EMU_ReadU32(V1 + 208)); //+ 0xD0
	GTE_SetDataRegister(17,EMU_ReadU32(V1 + 212)); //+ 0xD4
	GTE_SetDataRegister(13,EMU_ReadU32(V1 + 216)); //+ 0xD8
	GTE_SetDataRegister(18,EMU_ReadU32(V1 + 220)); //+ 0xDC
	GTE_SetDataRegister(14,EMU_ReadU32(V1 + 224)); //+ 0xE0
	GTE_SetDataRegister(19,EMU_ReadU32(V1 + 228)); //+ 0xE4
	T6 = EMU_ReadU32(V1 + 152); //+ 0x98
	T7 = EMU_ReadU32(V1 + 168); //+ 0xA8
	RA = EMU_ReadU32(V1 + 100); //+ 0x64
	ZZ_CLOCKCYCLES(10,0x80045B2C);
	goto ZZ_45B10_1C;
ZZ_454B0_648:
	RA = 0x80045B00; //ZZ_454B0_650
	ZZ_CLOCKCYCLES(2,0x8003EB74);
	goto ZZ_3EB74;
ZZ_454B0_650:
	RA = 0x80045B08; //ZZ_454B0_658
	T9 = EMU_ReadU32(V1 + 116); //+ 0x74
	ZZ_CLOCKCYCLES(2,0x80045B10);
	goto ZZ_45B10;
ZZ_454B0_658:
	T5 = EMU_ReadU32(V1 + 136); //+ 0x88
	ZZ_CLOCKCYCLES(2,0x80045AD0);
	goto ZZ_454B0_620;
#endif
ZZ_MARK_TARGET(0x800454B0,ZZ_454B0);
ZZ_MARK(0x800454B4);
ZZ_MARK(0x800454B8);
ZZ_MARK(0x800454BC);
ZZ_MARK(0x800454C0);
ZZ_MARK(0x800454C4);
ZZ_MARK(0x800454C8);
ZZ_MARK(0x800454CC);
ZZ_MARK(0x800454D0);
ZZ_MARK(0x800454D4);
ZZ_MARK(0x800454D8);
ZZ_MARK(0x800454DC);
ZZ_MARK(0x800454E0);
ZZ_MARK(0x800454E4);
ZZ_MARK(0x800454E8);
ZZ_MARK(0x800454EC);
ZZ_MARK(0x800454F0);
ZZ_MARK(0x800454F4);
ZZ_MARK(0x800454F8);
ZZ_MARK(0x800454FC);
ZZ_MARK(0x80045500);
ZZ_MARK(0x80045504);
ZZ_MARK(0x80045508);
ZZ_MARK(0x8004550C);
ZZ_MARK(0x80045510);
ZZ_MARK(0x80045514);
ZZ_MARK(0x80045518);
ZZ_MARK(0x8004551C);
ZZ_MARK(0x80045520);
ZZ_MARK(0x80045524);
ZZ_MARK(0x80045528);
ZZ_MARK(0x8004552C);
ZZ_MARK(0x80045530);
ZZ_MARK_TARGET(0x80045534,ZZ_454B0_84);
ZZ_MARK(0x80045538);
ZZ_MARK(0x8004553C);
ZZ_MARK(0x80045540);
ZZ_MARK(0x80045544);
ZZ_MARK(0x80045548);
ZZ_MARK(0x8004554C);
ZZ_MARK(0x80045550);
ZZ_MARK(0x80045554);
ZZ_MARK(0x80045558);
ZZ_MARK(0x8004555C);
ZZ_MARK(0x80045560);
ZZ_MARK(0x80045564);
ZZ_MARK(0x80045568);
ZZ_MARK(0x8004556C);
ZZ_MARK(0x80045570);
ZZ_MARK(0x80045574);
ZZ_MARK(0x80045578);
ZZ_MARK(0x8004557C);
ZZ_MARK(0x80045580);
ZZ_MARK(0x80045584);
ZZ_MARK(0x80045588);
ZZ_MARK(0x8004558C);
ZZ_MARK(0x80045590);
ZZ_MARK(0x80045594);
ZZ_MARK(0x80045598);
ZZ_MARK(0x8004559C);
ZZ_MARK(0x800455A0);
ZZ_MARK(0x800455A4);
ZZ_MARK(0x800455A8);
ZZ_MARK(0x800455AC);
ZZ_MARK(0x800455B0);
ZZ_MARK(0x800455B4);
ZZ_MARK(0x800455B8);
ZZ_MARK(0x800455BC);
ZZ_MARK_TARGET(0x800455C0,ZZ_454B0_110);
ZZ_MARK(0x800455C4);
ZZ_MARK(0x800455C8);
ZZ_MARK(0x800455CC);
ZZ_MARK(0x800455D0);
ZZ_MARK_TARGET(0x800455D4,ZZ_454B0_124);
ZZ_MARK(0x800455D8);
ZZ_MARK(0x800455DC);
ZZ_MARK(0x800455E0);
ZZ_MARK(0x800455E4);
ZZ_MARK(0x800455E8);
ZZ_MARK(0x800455EC);
ZZ_MARK(0x800455F0);
ZZ_MARK(0x800455F4);
ZZ_MARK(0x800455F8);
ZZ_MARK(0x800455FC);
ZZ_MARK(0x80045600);
ZZ_MARK_TARGET(0x80045604,ZZ_454B0_154);
ZZ_MARK(0x80045608);
ZZ_MARK(0x8004560C);
ZZ_MARK(0x80045610);
ZZ_MARK(0x80045614);
ZZ_MARK_TARGET(0x80045618,ZZ_454B0_168);
ZZ_MARK(0x8004561C);
ZZ_MARK(0x80045620);
ZZ_MARK(0x80045624);
ZZ_MARK(0x80045628);
ZZ_MARK(0x8004562C);
ZZ_MARK(0x80045630);
ZZ_MARK(0x80045634);
ZZ_MARK(0x80045638);
ZZ_MARK(0x8004563C);
ZZ_MARK(0x80045640);
ZZ_MARK(0x80045644);
ZZ_MARK(0x80045648);
ZZ_MARK(0x8004564C);
ZZ_MARK(0x80045650);
ZZ_MARK(0x80045654);
ZZ_MARK(0x80045658);
ZZ_MARK(0x8004565C);
ZZ_MARK(0x80045660);
ZZ_MARK(0x80045664);
ZZ_MARK(0x80045668);
ZZ_MARK(0x8004566C);
ZZ_MARK(0x80045670);
ZZ_MARK(0x80045674);
ZZ_MARK(0x80045678);
ZZ_MARK(0x8004567C);
ZZ_MARK(0x80045680);
ZZ_MARK(0x80045684);
ZZ_MARK(0x80045688);
ZZ_MARK(0x8004568C);
ZZ_MARK(0x80045690);
ZZ_MARK(0x80045694);
ZZ_MARK(0x80045698);
ZZ_MARK(0x8004569C);
ZZ_MARK(0x800456A0);
ZZ_MARK(0x800456A4);
ZZ_MARK(0x800456A8);
ZZ_MARK(0x800456AC);
ZZ_MARK(0x800456B0);
ZZ_MARK(0x800456B4);
ZZ_MARK(0x800456B8);
ZZ_MARK(0x800456BC);
ZZ_MARK_TARGET(0x800456C0,ZZ_454B0_210);
ZZ_MARK(0x800456C4);
ZZ_MARK(0x800456C8);
ZZ_MARK(0x800456CC);
ZZ_MARK(0x800456D0);
ZZ_MARK(0x800456D4);
ZZ_MARK(0x800456D8);
ZZ_MARK(0x800456DC);
ZZ_MARK(0x800456E0);
ZZ_MARK(0x800456E4);
ZZ_MARK(0x800456E8);
ZZ_MARK(0x800456EC);
ZZ_MARK(0x800456F0);
ZZ_MARK(0x800456F4);
ZZ_MARK(0x800456F8);
ZZ_MARK(0x800456FC);
ZZ_MARK(0x80045700);
ZZ_MARK(0x80045704);
ZZ_MARK(0x80045708);
ZZ_MARK(0x8004570C);
ZZ_MARK(0x80045710);
ZZ_MARK(0x80045714);
ZZ_MARK(0x80045718);
ZZ_MARK(0x8004571C);
ZZ_MARK(0x80045720);
ZZ_MARK(0x80045724);
ZZ_MARK(0x80045728);
ZZ_MARK(0x8004572C);
ZZ_MARK(0x80045730);
ZZ_MARK(0x80045734);
ZZ_MARK(0x80045738);
ZZ_MARK_TARGET(0x8004573C,ZZ_454B0_28C);
ZZ_MARK(0x80045740);
ZZ_MARK(0x80045744);
ZZ_MARK(0x80045748);
ZZ_MARK(0x8004574C);
ZZ_MARK(0x80045750);
ZZ_MARK(0x80045754);
ZZ_MARK(0x80045758);
ZZ_MARK(0x8004575C);
ZZ_MARK(0x80045760);
ZZ_MARK(0x80045764);
ZZ_MARK(0x80045768);
ZZ_MARK_TARGET(0x8004576C,ZZ_454B0_2BC);
ZZ_MARK(0x80045770);
ZZ_MARK(0x80045774);
ZZ_MARK(0x80045778);
ZZ_MARK_TARGET(0x8004577C,ZZ_454B0_2CC);
ZZ_MARK(0x80045780);
ZZ_MARK(0x80045784);
ZZ_MARK(0x80045788);
ZZ_MARK(0x8004578C);
ZZ_MARK(0x80045790);
ZZ_MARK_TARGET(0x80045794,ZZ_454B0_2E4);
ZZ_MARK(0x80045798);
ZZ_MARK_TARGET(0x8004579C,ZZ_454B0_2EC);
ZZ_MARK(0x800457A0);
ZZ_MARK_TARGET(0x800457A4,ZZ_454B0_2F4);
ZZ_MARK(0x800457A8);
ZZ_MARK_TARGET(0x800457AC,ZZ_454B0_2FC);
ZZ_MARK(0x800457B0);
ZZ_MARK(0x800457B4);
ZZ_MARK_TARGET(0x800457B8,ZZ_454B0_308);
ZZ_MARK(0x800457BC);
ZZ_MARK(0x800457C0);
ZZ_MARK(0x800457C4);
ZZ_MARK(0x800457C8);
ZZ_MARK(0x800457CC);
ZZ_MARK(0x800457D0);
ZZ_MARK(0x800457D4);
ZZ_MARK(0x800457D8);
ZZ_MARK(0x800457DC);
ZZ_MARK(0x800457E0);
ZZ_MARK(0x800457E4);
ZZ_MARK(0x800457E8);
ZZ_MARK(0x800457EC);
ZZ_MARK(0x800457F0);
ZZ_MARK(0x800457F4);
ZZ_MARK(0x800457F8);
ZZ_MARK(0x800457FC);
ZZ_MARK(0x80045800);
ZZ_MARK(0x80045804);
ZZ_MARK(0x80045808);
ZZ_MARK(0x8004580C);
ZZ_MARK(0x80045810);
ZZ_MARK_TARGET(0x80045814,ZZ_454B0_364);
ZZ_MARK(0x80045818);
ZZ_MARK_TARGET(0x8004581C,ZZ_454B0_36C);
ZZ_MARK(0x80045820);
ZZ_MARK(0x80045824);
ZZ_MARK(0x80045828);
ZZ_MARK(0x8004582C);
ZZ_MARK(0x80045830);
ZZ_MARK(0x80045834);
ZZ_MARK(0x80045838);
ZZ_MARK(0x8004583C);
ZZ_MARK(0x80045840);
ZZ_MARK(0x80045844);
ZZ_MARK(0x80045848);
ZZ_MARK(0x8004584C);
ZZ_MARK_TARGET(0x80045850,ZZ_454B0_3A0);
ZZ_MARK(0x80045854);
ZZ_MARK(0x80045858);
ZZ_MARK(0x8004585C);
ZZ_MARK_TARGET(0x80045860,ZZ_454B0_3B0);
ZZ_MARK(0x80045864);
ZZ_MARK(0x80045868);
ZZ_MARK(0x8004586C);
ZZ_MARK(0x80045870);
ZZ_MARK(0x80045874);
ZZ_MARK(0x80045878);
ZZ_MARK(0x8004587C);
ZZ_MARK(0x80045880);
ZZ_MARK(0x80045884);
ZZ_MARK(0x80045888);
ZZ_MARK(0x8004588C);
ZZ_MARK(0x80045890);
ZZ_MARK_TARGET(0x80045894,ZZ_454B0_3E4);
ZZ_MARK(0x80045898);
ZZ_MARK(0x8004589C);
ZZ_MARK(0x800458A0);
ZZ_MARK_TARGET(0x800458A4,ZZ_454B0_3F4);
ZZ_MARK(0x800458A8);
ZZ_MARK_TARGET(0x800458AC,ZZ_454B0_3FC);
ZZ_MARK(0x800458B0);
ZZ_MARK_TARGET(0x800458B4,ZZ_454B0_404);
ZZ_MARK(0x800458B8);
ZZ_MARK_TARGET(0x800458BC,ZZ_454B0_40C);
ZZ_MARK(0x800458C0);
ZZ_MARK(0x800458C4);
ZZ_MARK_TARGET(0x800458C8,ZZ_454B0_418);
ZZ_MARK(0x800458CC);
ZZ_MARK(0x800458D0);
ZZ_MARK(0x800458D4);
ZZ_MARK(0x800458D8);
ZZ_MARK(0x800458DC);
ZZ_MARK(0x800458E0);
ZZ_MARK(0x800458E4);
ZZ_MARK(0x800458E8);
ZZ_MARK(0x800458EC);
ZZ_MARK(0x800458F0);
ZZ_MARK(0x800458F4);
ZZ_MARK(0x800458F8);
ZZ_MARK(0x800458FC);
ZZ_MARK(0x80045900);
ZZ_MARK(0x80045904);
ZZ_MARK(0x80045908);
ZZ_MARK(0x8004590C);
ZZ_MARK(0x80045910);
ZZ_MARK(0x80045914);
ZZ_MARK(0x80045918);
ZZ_MARK(0x8004591C);
ZZ_MARK(0x80045920);
ZZ_MARK(0x80045924);
ZZ_MARK_TARGET(0x80045928,ZZ_454B0_478);
ZZ_MARK(0x8004592C);
ZZ_MARK_TARGET(0x80045930,ZZ_454B0_480);
ZZ_MARK(0x80045934);
ZZ_MARK(0x80045938);
ZZ_MARK(0x8004593C);
ZZ_MARK(0x80045940);
ZZ_MARK(0x80045944);
ZZ_MARK(0x80045948);
ZZ_MARK(0x8004594C);
ZZ_MARK(0x80045950);
ZZ_MARK(0x80045954);
ZZ_MARK(0x80045958);
ZZ_MARK(0x8004595C);
ZZ_MARK(0x80045960);
ZZ_MARK_TARGET(0x80045964,ZZ_454B0_4B4);
ZZ_MARK(0x80045968);
ZZ_MARK(0x8004596C);
ZZ_MARK(0x80045970);
ZZ_MARK_TARGET(0x80045974,ZZ_454B0_4C4);
ZZ_MARK(0x80045978);
ZZ_MARK(0x8004597C);
ZZ_MARK(0x80045980);
ZZ_MARK(0x80045984);
ZZ_MARK(0x80045988);
ZZ_MARK(0x8004598C);
ZZ_MARK(0x80045990);
ZZ_MARK(0x80045994);
ZZ_MARK(0x80045998);
ZZ_MARK(0x8004599C);
ZZ_MARK(0x800459A0);
ZZ_MARK(0x800459A4);
ZZ_MARK_TARGET(0x800459A8,ZZ_454B0_4F8);
ZZ_MARK(0x800459AC);
ZZ_MARK(0x800459B0);
ZZ_MARK(0x800459B4);
ZZ_MARK_TARGET(0x800459B8,ZZ_454B0_508);
ZZ_MARK(0x800459BC);
ZZ_MARK_TARGET(0x800459C0,ZZ_454B0_510);
ZZ_MARK(0x800459C4);
ZZ_MARK_TARGET(0x800459C8,ZZ_454B0_518);
ZZ_MARK(0x800459CC);
ZZ_MARK_TARGET(0x800459D0,ZZ_454B0_520);
ZZ_MARK(0x800459D4);
ZZ_MARK(0x800459D8);
ZZ_MARK_TARGET(0x800459DC,ZZ_454B0_52C);
ZZ_MARK(0x800459E0);
ZZ_MARK(0x800459E4);
ZZ_MARK(0x800459E8);
ZZ_MARK(0x800459EC);
ZZ_MARK(0x800459F0);
ZZ_MARK(0x800459F4);
ZZ_MARK(0x800459F8);
ZZ_MARK(0x800459FC);
ZZ_MARK(0x80045A00);
ZZ_MARK(0x80045A04);
ZZ_MARK(0x80045A08);
ZZ_MARK(0x80045A0C);
ZZ_MARK(0x80045A10);
ZZ_MARK(0x80045A14);
ZZ_MARK(0x80045A18);
ZZ_MARK(0x80045A1C);
ZZ_MARK(0x80045A20);
ZZ_MARK(0x80045A24);
ZZ_MARK(0x80045A28);
ZZ_MARK(0x80045A2C);
ZZ_MARK(0x80045A30);
ZZ_MARK(0x80045A34);
ZZ_MARK(0x80045A38);
ZZ_MARK_TARGET(0x80045A3C,ZZ_454B0_58C);
ZZ_MARK(0x80045A40);
ZZ_MARK_TARGET(0x80045A44,ZZ_454B0_594);
ZZ_MARK(0x80045A48);
ZZ_MARK(0x80045A4C);
ZZ_MARK(0x80045A50);
ZZ_MARK(0x80045A54);
ZZ_MARK(0x80045A58);
ZZ_MARK(0x80045A5C);
ZZ_MARK(0x80045A60);
ZZ_MARK(0x80045A64);
ZZ_MARK(0x80045A68);
ZZ_MARK(0x80045A6C);
ZZ_MARK(0x80045A70);
ZZ_MARK(0x80045A74);
ZZ_MARK_TARGET(0x80045A78,ZZ_454B0_5C8);
ZZ_MARK(0x80045A7C);
ZZ_MARK(0x80045A80);
ZZ_MARK(0x80045A84);
ZZ_MARK_TARGET(0x80045A88,ZZ_454B0_5D8);
ZZ_MARK(0x80045A8C);
ZZ_MARK(0x80045A90);
ZZ_MARK(0x80045A94);
ZZ_MARK(0x80045A98);
ZZ_MARK(0x80045A9C);
ZZ_MARK(0x80045AA0);
ZZ_MARK(0x80045AA4);
ZZ_MARK(0x80045AA8);
ZZ_MARK(0x80045AAC);
ZZ_MARK(0x80045AB0);
ZZ_MARK(0x80045AB4);
ZZ_MARK(0x80045AB8);
ZZ_MARK_TARGET(0x80045ABC,ZZ_454B0_60C);
ZZ_MARK(0x80045AC0);
ZZ_MARK(0x80045AC4);
ZZ_MARK(0x80045AC8);
ZZ_MARK_TARGET(0x80045ACC,ZZ_454B0_61C);
ZZ_MARK_TARGET(0x80045AD0,ZZ_454B0_620);
ZZ_MARK(0x80045AD4);
ZZ_MARK(0x80045AD8);
ZZ_MARK(0x80045ADC);
ZZ_MARK(0x80045AE0);
ZZ_MARK(0x80045AE4);
ZZ_MARK(0x80045AE8);
ZZ_MARK(0x80045AEC);
ZZ_MARK(0x80045AF0);
ZZ_MARK(0x80045AF4);
ZZ_MARK_TARGET(0x80045AF8,ZZ_454B0_648);
ZZ_MARK(0x80045AFC);
ZZ_MARK_TARGET(0x80045B00,ZZ_454B0_650);
ZZ_MARK(0x80045B04);
ZZ_MARK_TARGET(0x80045B08,ZZ_454B0_658);
ZZ_MARK(0x80045B0C);
