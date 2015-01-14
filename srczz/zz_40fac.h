#ifdef ZZ_INCLUDE_CODE
ZZ_40FAC:
	V0 = T0 >> 13;
	V0 &= 0x7F8;
	T8 = T0 << 5;
	if ((int32_t)T8 >= 0)
	{
		V0 += V1;
		ZZ_CLOCKCYCLES(5,0x80040FCC);
		goto ZZ_40FAC_20;
	}
	V0 += V1;
	T9 = EMU_ReadU32(V0 + 320); //+ 0x140
	T8 = EMU_ReadU32(V0 + 324); //+ 0x144
	ZZ_CLOCKCYCLES(8,0x80041234);
	goto ZZ_40FAC_288;
ZZ_40FAC_20:
	if (GP)
	{
		T9 = S4 & 0x2;
		ZZ_CLOCKCYCLES(2,0x80040FF4);
		goto ZZ_40FAC_48;
	}
	T9 = S4 & 0x2;
	S4 = EMU_CheckedAdd(S4,3);
	S5 = EMU_CheckedAdd(S5,3);
	EMU_ReadRight(S4 + -3,&A0); //+ 0xFFFFFFFD
	if (!T9)
	{
		EMU_ReadRight(S5 + -3,&A1); //+ 0xFFFFFFFD
		ZZ_CLOCKCYCLES(7,0x800411BC);
		goto ZZ_40FAC_210;
	}
	EMU_ReadRight(S5 + -3,&A1); //+ 0xFFFFFFFD
	EMU_ReadLeft(S4,&A0);
	EMU_ReadLeft(S5,&A1);
	ZZ_CLOCKCYCLES(10,0x800411BC);
	goto ZZ_40FAC_210;
ZZ_40FAC_48:
	AT = EMU_ReadU32(GP);
	GP = EMU_CheckedAdd(GP,4);
	T8 = AT >> 6;
	T8 &= 0x7;
	T9 = T8 ^ 0x1F;
	T8 += 1;
	A3 = T8 - 8;
	T4 += T8;
	A0 = (int32_t)T3 >> T9;
	if ((int32_t)T4 <= 0)
	{
		A1 = (int32_t)SP >> T9;
		ZZ_CLOCKCYCLES(11,0x8004105C);
		goto ZZ_40FAC_B0;
	}
	A1 = (int32_t)SP >> T9;
	A0 = T3;
	A1 = SP;
	T3 = EMU_ReadU32(S4);
	SP = EMU_ReadU32(S5);
	S4 = EMU_CheckedAdd(S4,4);
	S5 = EMU_CheckedAdd(S5,4);
	T8 = T8 - T4;
	A2 = T3 >> T8;
	T8 = SP >> T8;
	A0 |= A2;
	A1 |= T8;
	A0 = (int32_t)A0 >> T9;
	A1 = (int32_t)A1 >> T9;
	T8 = T4;
	T4 = EMU_CheckedAdd(T4,-32);
	ZZ_CLOCKCYCLES(26,0x8004105C);
ZZ_40FAC_B0:
	T3 <<= T8;
	if (!A3)
	{
		SP <<= T8;
		ZZ_CLOCKCYCLES(3,0x80041088);
		goto ZZ_40FAC_DC;
	}
	SP <<= T8;
	T9 = (int32_t)AT >> 25;
	T9 <<= 1;
	T8 = EMU_ReadS8(V1 + 272); //+ 0x110
	A0 += T9;
	A0 += T8;
	T8 = EMU_ReadS8(V1 + 276); //+ 0x114
	A1 += T9;
	A1 += T8;
	ZZ_CLOCKCYCLES(11,0x80041088);
ZZ_40FAC_DC:
	EMU_Write8(V1 + 272,A0); //+ 0x110
	EMU_Write8(V1 + 276,A1); //+ 0x114
	T8 = AT >> 3;
	T8 &= 0x7;
	T9 = T8 ^ 0x1F;
	T8 += 1;
	A3 = T8 - 8;
	T4 += T8;
	A0 = (int32_t)T3 >> T9;
	if ((int32_t)T4 <= 0)
	{
		A1 = (int32_t)SP >> T9;
		ZZ_CLOCKCYCLES(11,0x800410F0);
		goto ZZ_40FAC_144;
	}
	A1 = (int32_t)SP >> T9;
	A0 = T3;
	A1 = SP;
	T3 = EMU_ReadU32(S4);
	SP = EMU_ReadU32(S5);
	S4 = EMU_CheckedAdd(S4,4);
	S5 = EMU_CheckedAdd(S5,4);
	T8 = T8 - T4;
	A2 = T3 >> T8;
	T8 = SP >> T8;
	A0 |= A2;
	A1 |= T8;
	A0 = (int32_t)A0 >> T9;
	A1 = (int32_t)A1 >> T9;
	T8 = T4;
	T4 = EMU_CheckedAdd(T4,-32);
	ZZ_CLOCKCYCLES(26,0x800410F0);
ZZ_40FAC_144:
	T3 <<= T8;
	if (!A3)
	{
		SP <<= T8;
		ZZ_CLOCKCYCLES(3,0x8004111C);
		goto ZZ_40FAC_170;
	}
	SP <<= T8;
	T9 = AT << 7;
	T9 = (int32_t)T9 >> 24;
	T8 = EMU_ReadS8(V1 + 274); //+ 0x112
	A0 += T9;
	A0 += T8;
	T8 = EMU_ReadS8(V1 + 278); //+ 0x116
	A1 += T9;
	A1 += T8;
	ZZ_CLOCKCYCLES(11,0x8004111C);
ZZ_40FAC_170:
	EMU_Write8(V1 + 274,A0); //+ 0x112
	EMU_Write8(V1 + 278,A1); //+ 0x116
	T8 = AT & 0x7;
	T9 = T8 ^ 0x1F;
	T8 += 1;
	A3 = T8 - 8;
	T4 += T8;
	A0 = (int32_t)T3 >> T9;
	if ((int32_t)T4 <= 0)
	{
		A1 = (int32_t)SP >> T9;
		ZZ_CLOCKCYCLES(10,0x80041180);
		goto ZZ_40FAC_1D4;
	}
	A1 = (int32_t)SP >> T9;
	A0 = T3;
	A1 = SP;
	T3 = EMU_ReadU32(S4);
	SP = EMU_ReadU32(S5);
	S4 = EMU_CheckedAdd(S4,4);
	S5 = EMU_CheckedAdd(S5,4);
	T8 = T8 - T4;
	A2 = T3 >> T8;
	T8 = SP >> T8;
	A0 |= A2;
	A1 |= T8;
	A0 = (int32_t)A0 >> T9;
	A1 = (int32_t)A1 >> T9;
	T8 = T4;
	T4 = EMU_CheckedAdd(T4,-32);
	ZZ_CLOCKCYCLES(25,0x80041180);
ZZ_40FAC_1D4:
	T3 <<= T8;
	if (!A3)
	{
		SP <<= T8;
		ZZ_CLOCKCYCLES(3,0x800411AC);
		goto ZZ_40FAC_200;
	}
	SP <<= T8;
	T9 = AT << 15;
	T9 = (int32_t)T9 >> 24;
	T8 = EMU_ReadS8(V1 + 273); //+ 0x111
	A0 += T9;
	A0 += T8;
	T8 = EMU_ReadS8(V1 + 277); //+ 0x115
	A1 += T9;
	A1 += T8;
	ZZ_CLOCKCYCLES(11,0x800411AC);
ZZ_40FAC_200:
	EMU_Write8(V1 + 273,A0); //+ 0x111
	EMU_Write8(V1 + 277,A1); //+ 0x115
	A0 = EMU_ReadU32(V1 + 272); //+ 0x110
	A1 = EMU_ReadU32(V1 + 276); //+ 0x114
	ZZ_CLOCKCYCLES(4,0x800411BC);
ZZ_40FAC_210:
	AT = EMU_ReadU32(V1 + 280); //+ 0x118
	T9 = A0 & T1;
	T8 = A1 & T1;
	T9 += T8;
	T9 <<= 1;
	T9 += AT;
	AT = EMU_ReadU32(V1 + 284); //+ 0x11C
	T9 &= T2;
	A0 &= 0xFF00;
	A1 &= 0xFF00;
	T8 = A0 + A1;
	T8 >>= 7;
	T8 += AT;
	GTE_SetDataRegister(0,T9);
	GTE_SetDataRegister(1,T8);
	GTE_SetDataRegister(2,T9);
	GTE_SetDataRegister(3,T8);
	GTE_SetDataRegister(4,T9);
	GTE_SetDataRegister(5,T8);
	GTE_Execute(4907026);
	T9 = GTE_GetDataRegister(10);
	GTE_Execute(4874258);
	T8 = GTE_GetDataRegister(9);
	T9 <<= 16;
	T8 &= 0xFFFF;
	T9 |= T8;
	GTE_Execute(4939794);
	T8 = GTE_GetDataRegister(11);
	EMU_Write32(V0 + 320,T9); //+ 0x140
	EMU_Write32(V0 + 324,T8); //+ 0x144
	ZZ_CLOCKCYCLES(30,0x80041234);
ZZ_40FAC_288:
	A0 = T0 >> 7;
	A1 = T0 << 4;
	if ((int32_t)A1 < 0)
	{
		A0 &= 0x1FC;
		ZZ_CLOCKCYCLES(4,0x80041250);
		goto ZZ_40FAC_2A4;
	}
	A0 &= 0x1FC;
	A0 += S6;
	ZZ_JUMPREGISTER_BEGIN(RA);
	A0 = EMU_ReadU32(A0);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x80041314,ZZ_40FAC_368);
	ZZ_JUMPREGISTER(0x80041340,ZZ_40FAC_394);
	ZZ_JUMPREGISTER(0x80041374,ZZ_40FAC_3C8);
	ZZ_JUMPREGISTER_END();
ZZ_40FAC_2A4:
	A0 += V1;
	ZZ_JUMPREGISTER_BEGIN(RA);
	A0 = EMU_ReadU32(A0 + 320); //+ 0x140
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0x80041314,ZZ_40FAC_368);
	ZZ_JUMPREGISTER(0x80041340,ZZ_40FAC_394);
	ZZ_JUMPREGISTER(0x80041374,ZZ_40FAC_3C8);
	ZZ_JUMPREGISTER_END();
ZZ_40FAC_2B0:
	A0 = EMU_ReadU32(GP + 108); //+ 0x6C
	EMU_Write32(V1 + 104,RA); //+ 0x68
	if (!A0)
	{
		ZZ_CLOCKCYCLES(4,0x8003F224);
		goto ZZ_3EFAC_278;
	}
	RA = 0x80041274; //ZZ_40FAC_2C8
	T9 = EMU_ReadU32(SP + 72); //+ 0x48
	ZZ_CLOCKCYCLES(6,0x80043A34);
	goto ZZ_43A34;
ZZ_40FAC_2C8:
	RA = 0x8004127C; //ZZ_40FAC_2D0
	T8 = EMU_ReadU32(SP + 32); //+ 0x20
	ZZ_CLOCKCYCLES(2,0x8004398C);
	goto ZZ_4398C;
ZZ_40FAC_2D0:
	RA = 0x80041284; //ZZ_40FAC_2D8
	A0 = EMU_ReadU32(GP + 100); //+ 0x64
	ZZ_CLOCKCYCLES(2,0x80043A8C);
	goto ZZ_43A8C;
ZZ_40FAC_2D8:
	if ((int32_t)T9 < 0)
	{
		EMU_Write32(V1 + 296,A0); //+ 0x128
		ZZ_CLOCKCYCLES(2,0x8003F6B4);
		goto ZZ_3EFAC_708;
	}
	EMU_Write32(V1 + 296,A0); //+ 0x128
	RA = 0x80041294; //ZZ_40FAC_2E8
	T9 = EMU_ReadU32(GP + 168); //+ 0xA8
	ZZ_CLOCKCYCLES(4,0x80043A24);
	goto ZZ_43A24;
ZZ_40FAC_2E8:
	ZZ_JUMPREGISTER_BEGIN(T8);
	RA = 0x8004129C; //ZZ_40FAC_2F0
	S3 = EMU_ReadU32(SP + 36); //+ 0x24
	ZZ_CLOCKCYCLES_JR(2);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (T8,80041294)
	ZZ_JUMPREGISTER_END();
ZZ_40FAC_2F0:
	if (T8)
	{
		ZZ_CLOCKCYCLES(2,0x8003E784);
		goto ZZ_3DFAC_7D8;
	}
	T8 = EMU_ReadU32(SP + 20); //+ 0x14
	T0 = EMU_ReadU32(T8);
	T1 = EMU_ReadU32(T8 + 4); //+ 0x4
	T2 = EMU_ReadU32(T8 + 8); //+ 0x8
	T3 = EMU_ReadU32(T8 + 12); //+ 0xC
	T4 = EMU_ReadU32(T8 + 16); //+ 0x10
	GTE_SetControlRegister(8,T0);
	GTE_SetControlRegister(9,T1);
	GTE_SetControlRegister(10,T2);
	GTE_SetControlRegister(11,T3);
	GTE_SetControlRegister(12,T4);
	T0 = EMU_ReadU32(V1 + 32); //+ 0x20
	T1 = EMU_ReadU32(V1 + 36); //+ 0x24
	T2 = EMU_ReadU32(V1 + 40); //+ 0x28
	T3 = EMU_ReadU32(V1 + 44); //+ 0x2C
	RA = 0x800412EC; //ZZ_40FAC_340
	T4 = EMU_ReadU32(V1 + 48); //+ 0x30
	ZZ_CLOCKCYCLES(20,0x8004330C);
	goto ZZ_4330C;
ZZ_40FAC_340:
	RA = 0x800412F4; //ZZ_40FAC_348
	A0 = EMU_CheckedAdd(V1,32);
	ZZ_CLOCKCYCLES(2,0x800433A8);
	goto ZZ_433A8;
ZZ_40FAC_348:
	RA = 0x800412FC; //ZZ_40FAC_350
	ZZ_CLOCKCYCLES(2,0x800439FC);
	goto ZZ_439FC;
ZZ_40FAC_350:
	RA = 0x80041304; //ZZ_40FAC_358
	ZZ_CLOCKCYCLES(2,0x800438F0);
	goto ZZ_438F0;
ZZ_40FAC_358:
	if (!T9)
	{
		ZZ_CLOCKCYCLES(2,0x8003E784);
		goto ZZ_3DFAC_7D8;
	}
	RA = 0x80041314; //ZZ_40FAC_368
	ZZ_CLOCKCYCLES(4,0x80040FAC);
	goto ZZ_40FAC;
ZZ_40FAC_368:
	GTE_SetDataRegister(0,T9);
	GTE_SetDataRegister(1,T8);
	EMU_Write32(V1 + 128,T9); //+ 0x80
	EMU_Write32(V1 + 132,T8); //+ 0x84
	T8 = EMU_ReadU32(V1 + 296); //+ 0x128
	T9 = (int32_t)T9 >> 16;
	T9 = T8 - T9;
	EMU_Write32(V1 + 116,T9); //+ 0x74
	T0 = EMU_ReadU32(S2);
	RA = 0x80041340; //ZZ_40FAC_394
	T5 = A0;
	ZZ_CLOCKCYCLES(11,0x80040FAC);
	goto ZZ_40FAC;
ZZ_40FAC_394:
	GTE_SetDataRegister(2,T9);
	GTE_SetDataRegister(3,T8);
	EMU_Write32(V1 + 144,T9); //+ 0x90
	EMU_Write32(V1 + 148,T8); //+ 0x94
	T8 = EMU_ReadU32(V1 + 296); //+ 0x128
	T9 = (int32_t)T9 >> 16;
	T9 = T8 - T9;
	EMU_Write32(V1 + 120,T9); //+ 0x78
	T0 = EMU_ReadU32(S2 + 4); //+ 0x4
	S2 = EMU_CheckedAdd(S2,8);
	T6 = A0;
	ZZ_CLOCKCYCLES(11,0x8004136C);
ZZ_40FAC_3C0:
	RA = 0x80041374; //ZZ_40FAC_3C8
	ZZ_CLOCKCYCLES(2,0x80040FAC);
	goto ZZ_40FAC;
ZZ_40FAC_3C8:
	GTE_SetDataRegister(4,T9);
	GTE_SetDataRegister(5,T8);
	EMU_Write32(V1 + 160,T9); //+ 0xA0
	EMU_Write32(V1 + 164,T8); //+ 0xA4
	T8 = EMU_ReadU32(V1 + 296); //+ 0x128
	T9 = (int32_t)T9 >> 16;
	T9 = T8 - T9;
	EMU_Write32(V1 + 124,T9); //+ 0x7C
	T7 = A0;
	A0 = T0 << 23;
	if (!A0)
	{
		A2 = T0 & 0xFF;
		ZZ_CLOCKCYCLES(12,0x800413F4);
		goto ZZ_40FAC_448;
	}
	A2 = T0 & 0xFF;
	if ((int32_t)A0 > 0)
	{
		A0 = A2 << 2;
		ZZ_CLOCKCYCLES(14,0x800413E8);
		goto ZZ_40FAC_43C;
	}
	ZZ_CLOCKCYCLES(13,0x800413A8);
ZZ_40FAC_3FC:
	A0 = A2 << 2;
	A0 += S0;
	A2 = EMU_ReadU32(A0);
	A0 = EMU_ReadU32(V1 + 28); //+ 0x1C
	A1 = A2 >> 26;
	A1 &= 0x1F;
	A0 >>= A1;
	A1 = A2 >> 19;
	A0 += A1;
	A1 = A2 >> 12;
	A1 &= 0x7F;
	A0 &= A1;
	A1 = A2 << 20;
	A2 += A0;
	if ((int32_t)A1 < 0)
	{
		A2 &= 0x7FF;
		ZZ_CLOCKCYCLES(16,0x800413A8);
		goto ZZ_40FAC_3FC;
	}
	A2 &= 0x7FF;
	ZZ_CLOCKCYCLES(16,0x800413E8);
ZZ_40FAC_43C:
	A0 = A2 << 1;
	A2 += A0;
	A2 <<= 2;
	ZZ_CLOCKCYCLES(3,0x800413F4);
ZZ_40FAC_448:
	RA = 0x800413FC; //ZZ_40FAC_450
	ZZ_CLOCKCYCLES(2,0x800414B0);
	goto ZZ_414B0;
ZZ_40FAC_450:
	T0 = EMU_ReadU32(S2);
	S2 = EMU_CheckedAdd(S2,4);
	if ((int32_t)T0 < 0)
	{
		T9 = EMU_CheckedAdd(T0,1);
		ZZ_CLOCKCYCLES(4,0x80041304);
		goto ZZ_40FAC_358;
	}
	T9 = EMU_CheckedAdd(T0,1);
	T9 = T0 >> 16;
	if (T9)
	{
		A0 = T0 << 1;
		ZZ_CLOCKCYCLES(7,0x80041464);
		goto ZZ_40FAC_4B8;
	}
	A0 = T0 << 1;
	T9 = T0 << 31;
	T8 = T0 >> 7;
	if ((int32_t)T9 < 0)
	{
		T8 &= 0x1FC;
		ZZ_CLOCKCYCLES(11,0x80041434);
		goto ZZ_40FAC_488;
	}
	T8 &= 0x1FC;
	T8 += S6;
	T6 = EMU_ReadU32(T8);
	ZZ_CLOCKCYCLES(14,0x8004143C);
	goto ZZ_40FAC_490;
ZZ_40FAC_488:
	T8 += V1;
	T6 = EMU_ReadU32(T8 + 320); //+ 0x140
	ZZ_CLOCKCYCLES(2,0x8004143C);
ZZ_40FAC_490:
	T9 = T0 << 30;
	if ((int32_t)T9 < 0)
	{
		T8 = T0 & 0x1FC;
		ZZ_CLOCKCYCLES(3,0x80041454);
		goto ZZ_40FAC_4A8;
	}
	T8 = T0 & 0x1FC;
	T8 += S6;
	T7 = EMU_ReadU32(T8);
	ZZ_CLOCKCYCLES(6,0x8004145C);
	goto ZZ_40FAC_4B0;
ZZ_40FAC_4A8:
	T8 += V1;
	T7 = EMU_ReadU32(T8 + 320); //+ 0x140
	ZZ_CLOCKCYCLES(2,0x8004145C);
ZZ_40FAC_4B0:
	T5 = T6;
	ZZ_CLOCKCYCLES(2,0x800413FC);
	goto ZZ_40FAC_450;
ZZ_40FAC_4B8:
	if ((int32_t)A0 >= 0)
	{
		ZZ_CLOCKCYCLES(2,0x80041474);
		goto ZZ_40FAC_4C8;
	}
	T6 = T5;
	ZZ_CLOCKCYCLES(4,0x8004148C);
	goto ZZ_40FAC_4E0;
ZZ_40FAC_4C8:
	A0 = EMU_ReadU32(V1 + 144); //+ 0x90
	A1 = EMU_ReadU32(V1 + 148); //+ 0x94
	EMU_Write32(V1 + 128,A0); //+ 0x80
	A0 = EMU_ReadU32(V1 + 120); //+ 0x78
	EMU_Write32(V1 + 132,A1); //+ 0x84
	EMU_Write32(V1 + 116,A0); //+ 0x74
	ZZ_CLOCKCYCLES(6,0x8004148C);
ZZ_40FAC_4E0:
	A0 = EMU_ReadU32(V1 + 160); //+ 0xA0
	A1 = EMU_ReadU32(V1 + 164); //+ 0xA4
	EMU_Write32(V1 + 144,A0); //+ 0x90
	A0 = EMU_ReadU32(V1 + 124); //+ 0x7C
	EMU_Write32(V1 + 148,A1); //+ 0x94
	EMU_Write32(V1 + 120,A0); //+ 0x78
	T5 = T6;
	T6 = T7;
	ZZ_CLOCKCYCLES(9,0x8004136C);
	goto ZZ_40FAC_3C0;
#endif
ZZ_MARK_TARGET(0x80040FAC,ZZ_40FAC);
ZZ_MARK(0x80040FB0);
ZZ_MARK(0x80040FB4);
ZZ_MARK(0x80040FB8);
ZZ_MARK(0x80040FBC);
ZZ_MARK(0x80040FC0);
ZZ_MARK(0x80040FC4);
ZZ_MARK(0x80040FC8);
ZZ_MARK_TARGET(0x80040FCC,ZZ_40FAC_20);
ZZ_MARK(0x80040FD0);
ZZ_MARK(0x80040FD4);
ZZ_MARK(0x80040FD8);
ZZ_MARK(0x80040FDC);
ZZ_MARK(0x80040FE0);
ZZ_MARK(0x80040FE4);
ZZ_MARK(0x80040FE8);
ZZ_MARK(0x80040FEC);
ZZ_MARK(0x80040FF0);
ZZ_MARK_TARGET(0x80040FF4,ZZ_40FAC_48);
ZZ_MARK(0x80040FF8);
ZZ_MARK(0x80040FFC);
ZZ_MARK(0x80041000);
ZZ_MARK(0x80041004);
ZZ_MARK(0x80041008);
ZZ_MARK(0x8004100C);
ZZ_MARK(0x80041010);
ZZ_MARK(0x80041014);
ZZ_MARK(0x80041018);
ZZ_MARK(0x8004101C);
ZZ_MARK(0x80041020);
ZZ_MARK(0x80041024);
ZZ_MARK(0x80041028);
ZZ_MARK(0x8004102C);
ZZ_MARK(0x80041030);
ZZ_MARK(0x80041034);
ZZ_MARK(0x80041038);
ZZ_MARK(0x8004103C);
ZZ_MARK(0x80041040);
ZZ_MARK(0x80041044);
ZZ_MARK(0x80041048);
ZZ_MARK(0x8004104C);
ZZ_MARK(0x80041050);
ZZ_MARK(0x80041054);
ZZ_MARK(0x80041058);
ZZ_MARK_TARGET(0x8004105C,ZZ_40FAC_B0);
ZZ_MARK(0x80041060);
ZZ_MARK(0x80041064);
ZZ_MARK(0x80041068);
ZZ_MARK(0x8004106C);
ZZ_MARK(0x80041070);
ZZ_MARK(0x80041074);
ZZ_MARK(0x80041078);
ZZ_MARK(0x8004107C);
ZZ_MARK(0x80041080);
ZZ_MARK(0x80041084);
ZZ_MARK_TARGET(0x80041088,ZZ_40FAC_DC);
ZZ_MARK(0x8004108C);
ZZ_MARK(0x80041090);
ZZ_MARK(0x80041094);
ZZ_MARK(0x80041098);
ZZ_MARK(0x8004109C);
ZZ_MARK(0x800410A0);
ZZ_MARK(0x800410A4);
ZZ_MARK(0x800410A8);
ZZ_MARK(0x800410AC);
ZZ_MARK(0x800410B0);
ZZ_MARK(0x800410B4);
ZZ_MARK(0x800410B8);
ZZ_MARK(0x800410BC);
ZZ_MARK(0x800410C0);
ZZ_MARK(0x800410C4);
ZZ_MARK(0x800410C8);
ZZ_MARK(0x800410CC);
ZZ_MARK(0x800410D0);
ZZ_MARK(0x800410D4);
ZZ_MARK(0x800410D8);
ZZ_MARK(0x800410DC);
ZZ_MARK(0x800410E0);
ZZ_MARK(0x800410E4);
ZZ_MARK(0x800410E8);
ZZ_MARK(0x800410EC);
ZZ_MARK_TARGET(0x800410F0,ZZ_40FAC_144);
ZZ_MARK(0x800410F4);
ZZ_MARK(0x800410F8);
ZZ_MARK(0x800410FC);
ZZ_MARK(0x80041100);
ZZ_MARK(0x80041104);
ZZ_MARK(0x80041108);
ZZ_MARK(0x8004110C);
ZZ_MARK(0x80041110);
ZZ_MARK(0x80041114);
ZZ_MARK(0x80041118);
ZZ_MARK_TARGET(0x8004111C,ZZ_40FAC_170);
ZZ_MARK(0x80041120);
ZZ_MARK(0x80041124);
ZZ_MARK(0x80041128);
ZZ_MARK(0x8004112C);
ZZ_MARK(0x80041130);
ZZ_MARK(0x80041134);
ZZ_MARK(0x80041138);
ZZ_MARK(0x8004113C);
ZZ_MARK(0x80041140);
ZZ_MARK(0x80041144);
ZZ_MARK(0x80041148);
ZZ_MARK(0x8004114C);
ZZ_MARK(0x80041150);
ZZ_MARK(0x80041154);
ZZ_MARK(0x80041158);
ZZ_MARK(0x8004115C);
ZZ_MARK(0x80041160);
ZZ_MARK(0x80041164);
ZZ_MARK(0x80041168);
ZZ_MARK(0x8004116C);
ZZ_MARK(0x80041170);
ZZ_MARK(0x80041174);
ZZ_MARK(0x80041178);
ZZ_MARK(0x8004117C);
ZZ_MARK_TARGET(0x80041180,ZZ_40FAC_1D4);
ZZ_MARK(0x80041184);
ZZ_MARK(0x80041188);
ZZ_MARK(0x8004118C);
ZZ_MARK(0x80041190);
ZZ_MARK(0x80041194);
ZZ_MARK(0x80041198);
ZZ_MARK(0x8004119C);
ZZ_MARK(0x800411A0);
ZZ_MARK(0x800411A4);
ZZ_MARK(0x800411A8);
ZZ_MARK_TARGET(0x800411AC,ZZ_40FAC_200);
ZZ_MARK(0x800411B0);
ZZ_MARK(0x800411B4);
ZZ_MARK(0x800411B8);
ZZ_MARK_TARGET(0x800411BC,ZZ_40FAC_210);
ZZ_MARK(0x800411C0);
ZZ_MARK(0x800411C4);
ZZ_MARK(0x800411C8);
ZZ_MARK(0x800411CC);
ZZ_MARK(0x800411D0);
ZZ_MARK(0x800411D4);
ZZ_MARK(0x800411D8);
ZZ_MARK(0x800411DC);
ZZ_MARK(0x800411E0);
ZZ_MARK(0x800411E4);
ZZ_MARK(0x800411E8);
ZZ_MARK(0x800411EC);
ZZ_MARK(0x800411F0);
ZZ_MARK(0x800411F4);
ZZ_MARK(0x800411F8);
ZZ_MARK(0x800411FC);
ZZ_MARK(0x80041200);
ZZ_MARK(0x80041204);
ZZ_MARK(0x80041208);
ZZ_MARK(0x8004120C);
ZZ_MARK(0x80041210);
ZZ_MARK(0x80041214);
ZZ_MARK(0x80041218);
ZZ_MARK(0x8004121C);
ZZ_MARK(0x80041220);
ZZ_MARK(0x80041224);
ZZ_MARK(0x80041228);
ZZ_MARK(0x8004122C);
ZZ_MARK(0x80041230);
ZZ_MARK_TARGET(0x80041234,ZZ_40FAC_288);
ZZ_MARK(0x80041238);
ZZ_MARK(0x8004123C);
ZZ_MARK(0x80041240);
ZZ_MARK(0x80041244);
ZZ_MARK(0x80041248);
ZZ_MARK(0x8004124C);
ZZ_MARK_TARGET(0x80041250,ZZ_40FAC_2A4);
ZZ_MARK(0x80041254);
ZZ_MARK(0x80041258);
ZZ_MARK_TARGET(0x8004125C,ZZ_40FAC_2B0);
ZZ_MARK(0x80041260);
ZZ_MARK(0x80041264);
ZZ_MARK(0x80041268);
ZZ_MARK(0x8004126C);
ZZ_MARK(0x80041270);
ZZ_MARK_TARGET(0x80041274,ZZ_40FAC_2C8);
ZZ_MARK(0x80041278);
ZZ_MARK_TARGET(0x8004127C,ZZ_40FAC_2D0);
ZZ_MARK(0x80041280);
ZZ_MARK_TARGET(0x80041284,ZZ_40FAC_2D8);
ZZ_MARK(0x80041288);
ZZ_MARK(0x8004128C);
ZZ_MARK(0x80041290);
ZZ_MARK_TARGET(0x80041294,ZZ_40FAC_2E8);
ZZ_MARK(0x80041298);
ZZ_MARK_TARGET(0x8004129C,ZZ_40FAC_2F0);
ZZ_MARK(0x800412A0);
ZZ_MARK(0x800412A4);
ZZ_MARK(0x800412A8);
ZZ_MARK(0x800412AC);
ZZ_MARK(0x800412B0);
ZZ_MARK(0x800412B4);
ZZ_MARK(0x800412B8);
ZZ_MARK(0x800412BC);
ZZ_MARK(0x800412C0);
ZZ_MARK(0x800412C4);
ZZ_MARK(0x800412C8);
ZZ_MARK(0x800412CC);
ZZ_MARK(0x800412D0);
ZZ_MARK(0x800412D4);
ZZ_MARK(0x800412D8);
ZZ_MARK(0x800412DC);
ZZ_MARK(0x800412E0);
ZZ_MARK(0x800412E4);
ZZ_MARK(0x800412E8);
ZZ_MARK_TARGET(0x800412EC,ZZ_40FAC_340);
ZZ_MARK(0x800412F0);
ZZ_MARK_TARGET(0x800412F4,ZZ_40FAC_348);
ZZ_MARK(0x800412F8);
ZZ_MARK_TARGET(0x800412FC,ZZ_40FAC_350);
ZZ_MARK(0x80041300);
ZZ_MARK_TARGET(0x80041304,ZZ_40FAC_358);
ZZ_MARK(0x80041308);
ZZ_MARK(0x8004130C);
ZZ_MARK(0x80041310);
ZZ_MARK_TARGET(0x80041314,ZZ_40FAC_368);
ZZ_MARK(0x80041318);
ZZ_MARK(0x8004131C);
ZZ_MARK(0x80041320);
ZZ_MARK(0x80041324);
ZZ_MARK(0x80041328);
ZZ_MARK(0x8004132C);
ZZ_MARK(0x80041330);
ZZ_MARK(0x80041334);
ZZ_MARK(0x80041338);
ZZ_MARK(0x8004133C);
ZZ_MARK_TARGET(0x80041340,ZZ_40FAC_394);
ZZ_MARK(0x80041344);
ZZ_MARK(0x80041348);
ZZ_MARK(0x8004134C);
ZZ_MARK(0x80041350);
ZZ_MARK(0x80041354);
ZZ_MARK(0x80041358);
ZZ_MARK(0x8004135C);
ZZ_MARK(0x80041360);
ZZ_MARK(0x80041364);
ZZ_MARK(0x80041368);
ZZ_MARK_TARGET(0x8004136C,ZZ_40FAC_3C0);
ZZ_MARK(0x80041370);
ZZ_MARK_TARGET(0x80041374,ZZ_40FAC_3C8);
ZZ_MARK(0x80041378);
ZZ_MARK(0x8004137C);
ZZ_MARK(0x80041380);
ZZ_MARK(0x80041384);
ZZ_MARK(0x80041388);
ZZ_MARK(0x8004138C);
ZZ_MARK(0x80041390);
ZZ_MARK(0x80041394);
ZZ_MARK(0x80041398);
ZZ_MARK(0x8004139C);
ZZ_MARK(0x800413A0);
ZZ_MARK(0x800413A4);
ZZ_MARK_TARGET(0x800413A8,ZZ_40FAC_3FC);
ZZ_MARK(0x800413AC);
ZZ_MARK(0x800413B0);
ZZ_MARK(0x800413B4);
ZZ_MARK(0x800413B8);
ZZ_MARK(0x800413BC);
ZZ_MARK(0x800413C0);
ZZ_MARK(0x800413C4);
ZZ_MARK(0x800413C8);
ZZ_MARK(0x800413CC);
ZZ_MARK(0x800413D0);
ZZ_MARK(0x800413D4);
ZZ_MARK(0x800413D8);
ZZ_MARK(0x800413DC);
ZZ_MARK(0x800413E0);
ZZ_MARK(0x800413E4);
ZZ_MARK_TARGET(0x800413E8,ZZ_40FAC_43C);
ZZ_MARK(0x800413EC);
ZZ_MARK(0x800413F0);
ZZ_MARK_TARGET(0x800413F4,ZZ_40FAC_448);
ZZ_MARK(0x800413F8);
ZZ_MARK_TARGET(0x800413FC,ZZ_40FAC_450);
ZZ_MARK(0x80041400);
ZZ_MARK(0x80041404);
ZZ_MARK(0x80041408);
ZZ_MARK(0x8004140C);
ZZ_MARK(0x80041410);
ZZ_MARK(0x80041414);
ZZ_MARK(0x80041418);
ZZ_MARK(0x8004141C);
ZZ_MARK(0x80041420);
ZZ_MARK(0x80041424);
ZZ_MARK(0x80041428);
ZZ_MARK(0x8004142C);
ZZ_MARK(0x80041430);
ZZ_MARK_TARGET(0x80041434,ZZ_40FAC_488);
ZZ_MARK(0x80041438);
ZZ_MARK_TARGET(0x8004143C,ZZ_40FAC_490);
ZZ_MARK(0x80041440);
ZZ_MARK(0x80041444);
ZZ_MARK(0x80041448);
ZZ_MARK(0x8004144C);
ZZ_MARK(0x80041450);
ZZ_MARK_TARGET(0x80041454,ZZ_40FAC_4A8);
ZZ_MARK(0x80041458);
ZZ_MARK_TARGET(0x8004145C,ZZ_40FAC_4B0);
ZZ_MARK(0x80041460);
ZZ_MARK_TARGET(0x80041464,ZZ_40FAC_4B8);
ZZ_MARK(0x80041468);
ZZ_MARK(0x8004146C);
ZZ_MARK(0x80041470);
ZZ_MARK_TARGET(0x80041474,ZZ_40FAC_4C8);
ZZ_MARK(0x80041478);
ZZ_MARK(0x8004147C);
ZZ_MARK(0x80041480);
ZZ_MARK(0x80041484);
ZZ_MARK(0x80041488);
ZZ_MARK_TARGET(0x8004148C,ZZ_40FAC_4E0);
ZZ_MARK(0x80041490);
ZZ_MARK(0x80041494);
ZZ_MARK(0x80041498);
ZZ_MARK(0x8004149C);
ZZ_MARK(0x800414A0);
ZZ_MARK(0x800414A4);
ZZ_MARK(0x800414A8);
ZZ_MARK(0x800414AC);