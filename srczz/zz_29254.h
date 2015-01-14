#ifdef ZZ_INCLUDE_CODE
ZZ_29254:
	SP -= 160;
	T0 = A1;
	EMU_Write32(SP + 152,FP); //+ 0x98
	FP = A2;
	EMU_Write32(SP + 148,S7); //+ 0x94
	S7 = 0xC4650000;
	EMU_Write32(SP + 156,RA); //+ 0x9C
	EMU_Write32(SP + 144,S6); //+ 0x90
	EMU_Write32(SP + 140,S5); //+ 0x8C
	EMU_Write32(SP + 136,S4); //+ 0x88
	EMU_Write32(SP + 132,S3); //+ 0x84
	EMU_Write32(SP + 128,S2); //+ 0x80
	EMU_Write32(SP + 124,S1); //+ 0x7C
	EMU_Write32(SP + 120,S0); //+ 0x78
	EMU_Write32(SP + 72,A0); //+ 0x48
	EMU_Write32(SP + 80,A3); //+ 0x50
	V0 = EMU_ReadU32(A0 + 172); //+ 0xAC
	S7 |= 0x3601;
	S6 = R0;
	V1 = 0x4000000;
	EMU_Write32(SP + 88,R0); //+ 0x58
	V0 &= V1;
	if (!V0)
	{
		EMU_Write32(SP + 96,R0); //+ 0x60
		ZZ_CLOCKCYCLES(24,0x800292DC);
		goto ZZ_29254_88;
	}
	EMU_Write32(SP + 96,R0); //+ 0x60
	V0 = FP & 0x4;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(27,0x800292E4);
		goto ZZ_29254_90;
	}
	V0 = EMU_ReadU32(A0 + 68); //+ 0x44
	V0 = EMU_ReadU32(V0 + 172); //+ 0xAC
	V0 &= V1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(34,0x800292E4);
		goto ZZ_29254_90;
	}
	ZZ_CLOCKCYCLES(34,0x800292DC);
ZZ_29254_88:
	V0 = R0;
	ZZ_CLOCKCYCLES(2,0x800296F4);
	goto ZZ_29254_4A0;
ZZ_29254_90:
	V0 = EMU_ReadU32(T0);
	V1 = EMU_ReadU32(T0 + 4); //+ 0x4
	A0 = EMU_ReadU32(T0 + 8); //+ 0x8
	EMU_Write32(SP + 56,V0); //+ 0x38
	EMU_Write32(SP + 60,V1); //+ 0x3C
	EMU_Write32(SP + 64,A0); //+ 0x40
	V0 = EMU_ReadU32(SP + 60); //+ 0x3C
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 2916); //+ 0xB64
	S5 = SP + 56;
	V0 += 25000;
	EMU_Write32(SP + 60,V0); //+ 0x3C
	S3 = EMU_ReadU32(V1 + 16); //+ 0x10
	V0 = EMU_ReadU32(SP + 56); //+ 0x38
	V1 = EMU_ReadU32(SP + 60); //+ 0x3C
	A0 = EMU_ReadU32(SP + 64); //+ 0x40
	EMU_Write32(SP + 40,V0); //+ 0x28
	EMU_Write32(SP + 44,V1); //+ 0x2C
	EMU_Write32(SP + 48,A0); //+ 0x30
	ZZ_CLOCKCYCLES(19,0x80029330);
ZZ_29254_DC:
	V0 = EMU_ReadU32(S3 + 400); //+ 0x190
	if ((int32_t)V0 <= 0)
	{
		S4 = R0;
		ZZ_CLOCKCYCLES(4,0x8002939C);
		goto ZZ_29254_148;
	}
	S4 = R0;
	S2 = 0x194;
	S1 = S3;
	ZZ_CLOCKCYCLES(6,0x80029348);
ZZ_29254_F4:
	V0 = EMU_ReadU32(S1 + 436); //+ 0x1B4
	V0 &= 0x4;
	if (!V0)
	{
		A0 = S3 + S2;
		ZZ_CLOCKCYCLES(5,0x80029380);
		goto ZZ_29254_12C;
	}
	A0 = S3 + S2;
	A1 = 0x1;
	RA = 0x80029368; //ZZ_29254_114
	A2 = R0;
	ZZ_CLOCKCYCLES(8,0x80014364);
	goto ZZ_14364;
ZZ_29254_114:
	S0 = V0;
	A0 = S0;
	RA = 0x80029378; //ZZ_29254_124
	A1 = S5;
	ZZ_CLOCKCYCLES(4,0x80031080);
	goto ZZ_31080;
ZZ_29254_124:
	if (V0)
	{
		A2 = FP & 0x3;
		ZZ_CLOCKCYCLES(2,0x800293B0);
		goto ZZ_29254_15C;
	}
	A2 = FP & 0x3;
	ZZ_CLOCKCYCLES(2,0x80029380);
ZZ_29254_12C:
	V0 = EMU_ReadU32(S3 + 400); //+ 0x190
	S2 += 4;
	S4 += 1;
	V0 = (int32_t)S4 < (int32_t)V0;
	if (V0)
	{
		S1 += 4;
		ZZ_CLOCKCYCLES(6,0x80029348);
		goto ZZ_29254_F4;
	}
	S1 += 4;
	ZZ_CLOCKCYCLES(6,0x80029398);
ZZ_29254_144:
	V0 = EMU_ReadU32(S3 + 400); //+ 0x190
	ZZ_CLOCKCYCLES(1,0x8002939C);
ZZ_29254_148:
	if (S4 != V0)
	{
		ZZ_CLOCKCYCLES(3,0x80029424);
		goto ZZ_29254_1D0;
	}
	S6 = R0;
	ZZ_CLOCKCYCLES(5,0x8002942C);
	goto ZZ_29254_1D8;
ZZ_29254_15C:
	A0 = EMU_ReadU32(S0 + 20); //+ 0x14
	V0 = EMU_ReadU32(A0);
	V0 <<= 8;
	EMU_Write32(SP + 16,V0); //+ 0x10
	V0 = EMU_ReadU32(A0 + 4); //+ 0x4
	V0 <<= 8;
	EMU_Write32(SP + 20,V0); //+ 0x14
	V0 = EMU_ReadU32(A0 + 8); //+ 0x8
	V0 <<= 8;
	EMU_Write32(SP + 24,V0); //+ 0x18
	V0 = EMU_ReadU32(A0 + 12); //+ 0xC
	V0 <<= 8;
	EMU_Write32(SP + 28,V0); //+ 0x1C
	V0 = EMU_ReadU32(A0 + 16); //+ 0x10
	V0 <<= 8;
	EMU_Write32(SP + 32,V0); //+ 0x20
	V0 = EMU_ReadU32(A0 + 20); //+ 0x14
	A1 = S5;
	V0 <<= 8;
	RA = 0x8002941C; //ZZ_29254_1C8
	EMU_Write32(SP + 36,V0); //+ 0x24
	ZZ_CLOCKCYCLES(27,0x8003DC98);
	goto ZZ_3DC98;
ZZ_29254_1C8:
	S6 = V0;
	ZZ_CLOCKCYCLES(2,0x80029398);
	goto ZZ_29254_144;
ZZ_29254_1D0:
	if (!S6)
	{
		ZZ_CLOCKCYCLES(2,0x80029330);
		goto ZZ_29254_DC;
	}
	ZZ_CLOCKCYCLES(2,0x8002942C);
ZZ_29254_1D8:
	V1 = 0x80070000;
	V1 -= 12796;
	V0 = EMU_ReadU32(V1);
	if ((int32_t)V0 <= 0)
	{
		ZZ_CLOCKCYCLES(6,0x80029670);
		goto ZZ_29254_41C;
	}
	if ((int32_t)V0 <= 0)
	{
		S4 = R0;
		ZZ_CLOCKCYCLES(8,0x800295DC);
		goto ZZ_29254_388;
	}
	S4 = R0;
	A3 = EMU_ReadU32(SP + 40); //+ 0x28
	T2 = EMU_ReadU32(SP + 48); //+ 0x30
	T1 = EMU_ReadU32(SP + 44); //+ 0x2C
	T3 = V0;
	T0 = V1 + 656;
	ZZ_CLOCKCYCLES(13,0x80029460);
ZZ_29254_20C:
	A0 = EMU_ReadU32(T0);
	T4 = EMU_ReadU32(SP + 72); //+ 0x48
	A2 = EMU_ReadU32(A0 + 4); //+ 0x4
	if (A2 == T4)
	{
		V0 = 0xFFFF;
		ZZ_CLOCKCYCLES(6,0x800295CC);
		goto ZZ_29254_378;
	}
	V0 = 0xFFFF;
	V1 = EMU_ReadU32(A2 + 312); //+ 0x138
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(10,0x800295CC);
		goto ZZ_29254_378;
	}
	V0 = EMU_ReadU32(A0);
	V1 = 0x1;
	V0 &= 0x7;
	if (V0 != V1)
	{
		V1 = A0 + 8;
		ZZ_CLOCKCYCLES(15,0x800294A0);
		goto ZZ_29254_24C;
	}
	V1 = A0 + 8;
	V1 = A0 + 44;
	ZZ_CLOCKCYCLES(16,0x800294A0);
ZZ_29254_24C:
	V0 = FP & 0x1;
	if (!V0)
	{
		V0 = FP & 0x2;
		ZZ_CLOCKCYCLES(3,0x80029534);
		goto ZZ_29254_2E0;
	}
	V0 = FP & 0x2;
	V0 = EMU_ReadU32(V1);
	A1 = EMU_ReadU32(V1 + 16); //+ 0x10
	V0 = (int32_t)A3 < (int32_t)V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(8,0x800295CC);
		goto ZZ_29254_378;
	}
	V0 = EMU_ReadU32(V1 + 12); //+ 0xC
	V0 = (int32_t)V0 < (int32_t)A3;
	if (V0)
	{
		ZZ_CLOCKCYCLES(13,0x800295CC);
		goto ZZ_29254_378;
	}
	V0 = EMU_ReadU32(V1 + 8); //+ 0x8
	V0 = (int32_t)T2 < (int32_t)V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(18,0x800295CC);
		goto ZZ_29254_378;
	}
	V0 = EMU_ReadU32(V1 + 20); //+ 0x14
	V0 = (int32_t)V0 < (int32_t)T2;
	if (V0)
	{
		ZZ_CLOCKCYCLES(23,0x800295CC);
		goto ZZ_29254_378;
	}
	A0 = EMU_ReadU32(S5 + 4); //+ 0x4
	V0 = (int32_t)A1 < (int32_t)A0;
	if (V0)
	{
		V0 = (int32_t)S7 < (int32_t)A1;
		ZZ_CLOCKCYCLES(28,0x80029524);
		goto ZZ_29254_2D0;
	}
	V0 = (int32_t)S7 < (int32_t)A1;
	V1 = EMU_ReadU32(V1 + 4); //+ 0x4
	V0 = (int32_t)A0 < (int32_t)V1;
	if (!V0)
	{
		V0 = (int32_t)S7 < (int32_t)A1;
		ZZ_CLOCKCYCLES(33,0x80029618);
		goto ZZ_29254_3C4;
	}
	V0 = (int32_t)S7 < (int32_t)A1;
	ZZ_CLOCKCYCLES(33,0x80029524);
ZZ_29254_2D0:
	if (!V0)
	{
		V0 = (int32_t)T1 < (int32_t)A1;
		ZZ_CLOCKCYCLES(2,0x800295CC);
		goto ZZ_29254_378;
	}
	V0 = (int32_t)T1 < (int32_t)A1;
	ZZ_CLOCKCYCLES(4,0x800295BC);
	goto ZZ_29254_368;
ZZ_29254_2E0:
	if (!V0)
	{
		ZZ_CLOCKCYCLES(2,0x800295CC);
		goto ZZ_29254_378;
	}
	V0 = EMU_ReadU32(V1);
	A1 = EMU_ReadU32(V1 + 20); //+ 0x14
	V0 = (int32_t)A3 < (int32_t)V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(7,0x800295CC);
		goto ZZ_29254_378;
	}
	V0 = EMU_ReadU32(V1 + 12); //+ 0xC
	V0 = (int32_t)V0 < (int32_t)A3;
	if (V0)
	{
		ZZ_CLOCKCYCLES(12,0x800295CC);
		goto ZZ_29254_378;
	}
	V0 = EMU_ReadU32(V1 + 4); //+ 0x4
	V0 = (int32_t)T1 < (int32_t)V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(17,0x800295CC);
		goto ZZ_29254_378;
	}
	V0 = EMU_ReadU32(V1 + 16); //+ 0x10
	V0 = (int32_t)V0 < (int32_t)T1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(22,0x800295CC);
		goto ZZ_29254_378;
	}
	A0 = EMU_ReadU32(S5 + 8); //+ 0x8
	V0 = (int32_t)A1 < (int32_t)A0;
	if (V0)
	{
		V0 = (int32_t)S7 < (int32_t)A1;
		ZZ_CLOCKCYCLES(27,0x800295B4);
		goto ZZ_29254_360;
	}
	V0 = (int32_t)S7 < (int32_t)A1;
	V1 = EMU_ReadU32(V1 + 8); //+ 0x8
	V0 = (int32_t)A0 < (int32_t)V1;
	if (!V0)
	{
		V0 = (int32_t)S7 < (int32_t)A1;
		ZZ_CLOCKCYCLES(32,0x80029628);
		goto ZZ_29254_3D4;
	}
	V0 = (int32_t)S7 < (int32_t)A1;
	ZZ_CLOCKCYCLES(32,0x800295B4);
ZZ_29254_360:
	if (!V0)
	{
		V0 = (int32_t)T2 < (int32_t)A1;
		ZZ_CLOCKCYCLES(2,0x800295CC);
		goto ZZ_29254_378;
	}
	V0 = (int32_t)T2 < (int32_t)A1;
	ZZ_CLOCKCYCLES(2,0x800295BC);
ZZ_29254_368:
	if (V0)
	{
		ZZ_CLOCKCYCLES(2,0x800295CC);
		goto ZZ_29254_378;
	}
	EMU_Write32(SP + 88,A2); //+ 0x58
	S7 = A1;
	ZZ_CLOCKCYCLES(4,0x800295CC);
ZZ_29254_378:
	S4 += 1;
	V0 = (int32_t)S4 < (int32_t)T3;
	if (V0)
	{
		T0 += 4;
		ZZ_CLOCKCYCLES(4,0x80029460);
		goto ZZ_29254_20C;
	}
	T0 += 4;
	ZZ_CLOCKCYCLES(4,0x800295DC);
ZZ_29254_388:
	T4 = EMU_ReadU32(SP + 88); //+ 0x58
	if (!T4)
	{
		V0 = FP & 0x1;
		ZZ_CLOCKCYCLES(4,0x80029670);
		goto ZZ_29254_41C;
	}
	V0 = FP & 0x1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(6,0x80029638);
		goto ZZ_29254_3E4;
	}
	if (!S6)
	{
		ZZ_CLOCKCYCLES(8,0x80029610);
		goto ZZ_29254_3BC;
	}
	V0 = EMU_ReadU32(S5 + 4); //+ 0x4
	V0 = (int32_t)S7 < (int32_t)V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(13,0x80029670);
		goto ZZ_29254_41C;
	}
	ZZ_CLOCKCYCLES(13,0x80029610);
ZZ_29254_3BC:
	EMU_Write32(S5 + 4,S7); //+ 0x4
	ZZ_CLOCKCYCLES(2,0x80029664);
	goto ZZ_29254_410;
ZZ_29254_3C4:
	S6 = A2;
	T4 = 0x1;
	EMU_Write32(S5 + 4,V1); //+ 0x4
	ZZ_CLOCKCYCLES(4,0x8002966C);
	goto ZZ_29254_418;
ZZ_29254_3D4:
	S6 = A2;
	T4 = 0x1;
	EMU_Write32(S5 + 8,V1); //+ 0x8
	ZZ_CLOCKCYCLES(4,0x8002966C);
	goto ZZ_29254_418;
ZZ_29254_3E4:
	V0 = FP & 0x2;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(3,0x80029670);
		goto ZZ_29254_41C;
	}
	if (!S6)
	{
		ZZ_CLOCKCYCLES(5,0x80029660);
		goto ZZ_29254_40C;
	}
	V0 = EMU_ReadU32(S5 + 8); //+ 0x8
	V0 = (int32_t)S7 < (int32_t)V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(10,0x80029670);
		goto ZZ_29254_41C;
	}
	ZZ_CLOCKCYCLES(10,0x80029660);
ZZ_29254_40C:
	EMU_Write32(S5 + 8,S7); //+ 0x8
	ZZ_CLOCKCYCLES(1,0x80029664);
ZZ_29254_410:
	S6 = EMU_ReadU32(SP + 88); //+ 0x58
	T4 = 0x1;
	ZZ_CLOCKCYCLES(2,0x8002966C);
ZZ_29254_418:
	EMU_Write32(SP + 96,T4); //+ 0x60
	ZZ_CLOCKCYCLES(1,0x80029670);
ZZ_29254_41C:
	if (!S6)
	{
		S0 = -1;
		ZZ_CLOCKCYCLES(2,0x800296BC);
		goto ZZ_29254_468;
	}
	S0 = -1;
	T4 = EMU_ReadU32(SP + 96); //+ 0x60
	if (!T4)
	{
		V0 = S6 & 0x3F0;
		ZZ_CLOCKCYCLES(6,0x800296A4);
		goto ZZ_29254_450;
	}
	V0 = S6 & 0x3F0;
	S0 = EMU_ReadU32(S6 + 312); //+ 0x138
	if ((int32_t)S0 >= 0)
	{
		ZZ_CLOCKCYCLES(10,0x800296BC);
		goto ZZ_29254_468;
	}
	S0 = -S0;
	EMU_Write32(SP + 80,R0); //+ 0x50
	ZZ_CLOCKCYCLES(13,0x800296BC);
	goto ZZ_29254_468;
ZZ_29254_450:
	S0 = V0 >> 4;
	V0 = S0 - 48;
	V0 = V0 < 16;
	if (V0)
	{
		ZZ_CLOCKCYCLES(5,0x800296BC);
		goto ZZ_29254_468;
	}
	S0 = -1;
	ZZ_CLOCKCYCLES(6,0x800296BC);
ZZ_29254_468:
	A0 = EMU_ReadU32(SP + 72); //+ 0x48
	A2 = EMU_ReadU32(SP + 80); //+ 0x50
	RA = 0x800296CC; //ZZ_29254_478
	A1 = S0;
	ZZ_CLOCKCYCLES(4,0x80028C38);
	goto ZZ_28C38;
ZZ_29254_478:
	V0 = FP & 0x4;
	if (!V0)
	{
		V0 = S6;
		ZZ_CLOCKCYCLES(3,0x800296F4);
		goto ZZ_29254_4A0;
	}
	V0 = S6;
	T4 = EMU_ReadU32(SP + 72); //+ 0x48
	A0 = EMU_ReadU32(T4 + 68); //+ 0x44
	A2 = EMU_ReadU32(SP + 80); //+ 0x50
	RA = 0x800296F0; //ZZ_29254_49C
	A1 = S0;
	ZZ_CLOCKCYCLES(9,0x80028C38);
	goto ZZ_28C38;
ZZ_29254_49C:
	V0 = S6;
	ZZ_CLOCKCYCLES(1,0x800296F4);
ZZ_29254_4A0:
	RA = EMU_ReadU32(SP + 156); //+ 0x9C
	FP = EMU_ReadU32(SP + 152); //+ 0x98
	S7 = EMU_ReadU32(SP + 148); //+ 0x94
	S6 = EMU_ReadU32(SP + 144); //+ 0x90
	S5 = EMU_ReadU32(SP + 140); //+ 0x8C
	S4 = EMU_ReadU32(SP + 136); //+ 0x88
	S3 = EMU_ReadU32(SP + 132); //+ 0x84
	S2 = EMU_ReadU32(SP + 128); //+ 0x80
	S1 = EMU_ReadU32(SP + 124); //+ 0x7C
	S0 = EMU_ReadU32(SP + 120); //+ 0x78
	SP += 160;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(13);
	ZZ_JUMPREGISTER(0x80038CC8,ZZ_38998_330);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80029254,ZZ_29254);
ZZ_MARK(0x80029258);
ZZ_MARK(0x8002925C);
ZZ_MARK(0x80029260);
ZZ_MARK(0x80029264);
ZZ_MARK(0x80029268);
ZZ_MARK(0x8002926C);
ZZ_MARK(0x80029270);
ZZ_MARK(0x80029274);
ZZ_MARK(0x80029278);
ZZ_MARK(0x8002927C);
ZZ_MARK(0x80029280);
ZZ_MARK(0x80029284);
ZZ_MARK(0x80029288);
ZZ_MARK(0x8002928C);
ZZ_MARK(0x80029290);
ZZ_MARK(0x80029294);
ZZ_MARK(0x80029298);
ZZ_MARK(0x8002929C);
ZZ_MARK(0x800292A0);
ZZ_MARK(0x800292A4);
ZZ_MARK(0x800292A8);
ZZ_MARK(0x800292AC);
ZZ_MARK(0x800292B0);
ZZ_MARK(0x800292B4);
ZZ_MARK(0x800292B8);
ZZ_MARK(0x800292BC);
ZZ_MARK(0x800292C0);
ZZ_MARK(0x800292C4);
ZZ_MARK(0x800292C8);
ZZ_MARK(0x800292CC);
ZZ_MARK(0x800292D0);
ZZ_MARK(0x800292D4);
ZZ_MARK(0x800292D8);
ZZ_MARK_TARGET(0x800292DC,ZZ_29254_88);
ZZ_MARK(0x800292E0);
ZZ_MARK_TARGET(0x800292E4,ZZ_29254_90);
ZZ_MARK(0x800292E8);
ZZ_MARK(0x800292EC);
ZZ_MARK(0x800292F0);
ZZ_MARK(0x800292F4);
ZZ_MARK(0x800292F8);
ZZ_MARK(0x800292FC);
ZZ_MARK(0x80029300);
ZZ_MARK(0x80029304);
ZZ_MARK(0x80029308);
ZZ_MARK(0x8002930C);
ZZ_MARK(0x80029310);
ZZ_MARK(0x80029314);
ZZ_MARK(0x80029318);
ZZ_MARK(0x8002931C);
ZZ_MARK(0x80029320);
ZZ_MARK(0x80029324);
ZZ_MARK(0x80029328);
ZZ_MARK(0x8002932C);
ZZ_MARK_TARGET(0x80029330,ZZ_29254_DC);
ZZ_MARK(0x80029334);
ZZ_MARK(0x80029338);
ZZ_MARK(0x8002933C);
ZZ_MARK(0x80029340);
ZZ_MARK(0x80029344);
ZZ_MARK_TARGET(0x80029348,ZZ_29254_F4);
ZZ_MARK(0x8002934C);
ZZ_MARK(0x80029350);
ZZ_MARK(0x80029354);
ZZ_MARK(0x80029358);
ZZ_MARK(0x8002935C);
ZZ_MARK(0x80029360);
ZZ_MARK(0x80029364);
ZZ_MARK_TARGET(0x80029368,ZZ_29254_114);
ZZ_MARK(0x8002936C);
ZZ_MARK(0x80029370);
ZZ_MARK(0x80029374);
ZZ_MARK_TARGET(0x80029378,ZZ_29254_124);
ZZ_MARK(0x8002937C);
ZZ_MARK_TARGET(0x80029380,ZZ_29254_12C);
ZZ_MARK(0x80029384);
ZZ_MARK(0x80029388);
ZZ_MARK(0x8002938C);
ZZ_MARK(0x80029390);
ZZ_MARK(0x80029394);
ZZ_MARK_TARGET(0x80029398,ZZ_29254_144);
ZZ_MARK_TARGET(0x8002939C,ZZ_29254_148);
ZZ_MARK(0x800293A0);
ZZ_MARK(0x800293A4);
ZZ_MARK(0x800293A8);
ZZ_MARK(0x800293AC);
ZZ_MARK_TARGET(0x800293B0,ZZ_29254_15C);
ZZ_MARK(0x800293B4);
ZZ_MARK(0x800293B8);
ZZ_MARK(0x800293BC);
ZZ_MARK(0x800293C0);
ZZ_MARK(0x800293C4);
ZZ_MARK(0x800293C8);
ZZ_MARK(0x800293CC);
ZZ_MARK(0x800293D0);
ZZ_MARK(0x800293D4);
ZZ_MARK(0x800293D8);
ZZ_MARK(0x800293DC);
ZZ_MARK(0x800293E0);
ZZ_MARK(0x800293E4);
ZZ_MARK(0x800293E8);
ZZ_MARK(0x800293EC);
ZZ_MARK(0x800293F0);
ZZ_MARK(0x800293F4);
ZZ_MARK(0x800293F8);
ZZ_MARK(0x800293FC);
ZZ_MARK(0x80029400);
ZZ_MARK(0x80029404);
ZZ_MARK(0x80029408);
ZZ_MARK(0x8002940C);
ZZ_MARK(0x80029410);
ZZ_MARK(0x80029414);
ZZ_MARK(0x80029418);
ZZ_MARK_TARGET(0x8002941C,ZZ_29254_1C8);
ZZ_MARK(0x80029420);
ZZ_MARK_TARGET(0x80029424,ZZ_29254_1D0);
ZZ_MARK(0x80029428);
ZZ_MARK_TARGET(0x8002942C,ZZ_29254_1D8);
ZZ_MARK(0x80029430);
ZZ_MARK(0x80029434);
ZZ_MARK(0x80029438);
ZZ_MARK(0x8002943C);
ZZ_MARK(0x80029440);
ZZ_MARK(0x80029444);
ZZ_MARK(0x80029448);
ZZ_MARK(0x8002944C);
ZZ_MARK(0x80029450);
ZZ_MARK(0x80029454);
ZZ_MARK(0x80029458);
ZZ_MARK(0x8002945C);
ZZ_MARK_TARGET(0x80029460,ZZ_29254_20C);
ZZ_MARK(0x80029464);
ZZ_MARK(0x80029468);
ZZ_MARK(0x8002946C);
ZZ_MARK(0x80029470);
ZZ_MARK(0x80029474);
ZZ_MARK(0x80029478);
ZZ_MARK(0x8002947C);
ZZ_MARK(0x80029480);
ZZ_MARK(0x80029484);
ZZ_MARK(0x80029488);
ZZ_MARK(0x8002948C);
ZZ_MARK(0x80029490);
ZZ_MARK(0x80029494);
ZZ_MARK(0x80029498);
ZZ_MARK(0x8002949C);
ZZ_MARK_TARGET(0x800294A0,ZZ_29254_24C);
ZZ_MARK(0x800294A4);
ZZ_MARK(0x800294A8);
ZZ_MARK(0x800294AC);
ZZ_MARK(0x800294B0);
ZZ_MARK(0x800294B4);
ZZ_MARK(0x800294B8);
ZZ_MARK(0x800294BC);
ZZ_MARK(0x800294C0);
ZZ_MARK(0x800294C4);
ZZ_MARK(0x800294C8);
ZZ_MARK(0x800294CC);
ZZ_MARK(0x800294D0);
ZZ_MARK(0x800294D4);
ZZ_MARK(0x800294D8);
ZZ_MARK(0x800294DC);
ZZ_MARK(0x800294E0);
ZZ_MARK(0x800294E4);
ZZ_MARK(0x800294E8);
ZZ_MARK(0x800294EC);
ZZ_MARK(0x800294F0);
ZZ_MARK(0x800294F4);
ZZ_MARK(0x800294F8);
ZZ_MARK(0x800294FC);
ZZ_MARK(0x80029500);
ZZ_MARK(0x80029504);
ZZ_MARK(0x80029508);
ZZ_MARK(0x8002950C);
ZZ_MARK(0x80029510);
ZZ_MARK(0x80029514);
ZZ_MARK(0x80029518);
ZZ_MARK(0x8002951C);
ZZ_MARK(0x80029520);
ZZ_MARK_TARGET(0x80029524,ZZ_29254_2D0);
ZZ_MARK(0x80029528);
ZZ_MARK(0x8002952C);
ZZ_MARK(0x80029530);
ZZ_MARK_TARGET(0x80029534,ZZ_29254_2E0);
ZZ_MARK(0x80029538);
ZZ_MARK(0x8002953C);
ZZ_MARK(0x80029540);
ZZ_MARK(0x80029544);
ZZ_MARK(0x80029548);
ZZ_MARK(0x8002954C);
ZZ_MARK(0x80029550);
ZZ_MARK(0x80029554);
ZZ_MARK(0x80029558);
ZZ_MARK(0x8002955C);
ZZ_MARK(0x80029560);
ZZ_MARK(0x80029564);
ZZ_MARK(0x80029568);
ZZ_MARK(0x8002956C);
ZZ_MARK(0x80029570);
ZZ_MARK(0x80029574);
ZZ_MARK(0x80029578);
ZZ_MARK(0x8002957C);
ZZ_MARK(0x80029580);
ZZ_MARK(0x80029584);
ZZ_MARK(0x80029588);
ZZ_MARK(0x8002958C);
ZZ_MARK(0x80029590);
ZZ_MARK(0x80029594);
ZZ_MARK(0x80029598);
ZZ_MARK(0x8002959C);
ZZ_MARK(0x800295A0);
ZZ_MARK(0x800295A4);
ZZ_MARK(0x800295A8);
ZZ_MARK(0x800295AC);
ZZ_MARK(0x800295B0);
ZZ_MARK_TARGET(0x800295B4,ZZ_29254_360);
ZZ_MARK(0x800295B8);
ZZ_MARK_TARGET(0x800295BC,ZZ_29254_368);
ZZ_MARK(0x800295C0);
ZZ_MARK(0x800295C4);
ZZ_MARK(0x800295C8);
ZZ_MARK_TARGET(0x800295CC,ZZ_29254_378);
ZZ_MARK(0x800295D0);
ZZ_MARK(0x800295D4);
ZZ_MARK(0x800295D8);
ZZ_MARK_TARGET(0x800295DC,ZZ_29254_388);
ZZ_MARK(0x800295E0);
ZZ_MARK(0x800295E4);
ZZ_MARK(0x800295E8);
ZZ_MARK(0x800295EC);
ZZ_MARK(0x800295F0);
ZZ_MARK(0x800295F4);
ZZ_MARK(0x800295F8);
ZZ_MARK(0x800295FC);
ZZ_MARK(0x80029600);
ZZ_MARK(0x80029604);
ZZ_MARK(0x80029608);
ZZ_MARK(0x8002960C);
ZZ_MARK_TARGET(0x80029610,ZZ_29254_3BC);
ZZ_MARK(0x80029614);
ZZ_MARK_TARGET(0x80029618,ZZ_29254_3C4);
ZZ_MARK(0x8002961C);
ZZ_MARK(0x80029620);
ZZ_MARK(0x80029624);
ZZ_MARK_TARGET(0x80029628,ZZ_29254_3D4);
ZZ_MARK(0x8002962C);
ZZ_MARK(0x80029630);
ZZ_MARK(0x80029634);
ZZ_MARK_TARGET(0x80029638,ZZ_29254_3E4);
ZZ_MARK(0x8002963C);
ZZ_MARK(0x80029640);
ZZ_MARK(0x80029644);
ZZ_MARK(0x80029648);
ZZ_MARK(0x8002964C);
ZZ_MARK(0x80029650);
ZZ_MARK(0x80029654);
ZZ_MARK(0x80029658);
ZZ_MARK(0x8002965C);
ZZ_MARK_TARGET(0x80029660,ZZ_29254_40C);
ZZ_MARK_TARGET(0x80029664,ZZ_29254_410);
ZZ_MARK(0x80029668);
ZZ_MARK_TARGET(0x8002966C,ZZ_29254_418);
ZZ_MARK_TARGET(0x80029670,ZZ_29254_41C);
ZZ_MARK(0x80029674);
ZZ_MARK(0x80029678);
ZZ_MARK(0x8002967C);
ZZ_MARK(0x80029680);
ZZ_MARK(0x80029684);
ZZ_MARK(0x80029688);
ZZ_MARK(0x8002968C);
ZZ_MARK(0x80029690);
ZZ_MARK(0x80029694);
ZZ_MARK(0x80029698);
ZZ_MARK(0x8002969C);
ZZ_MARK(0x800296A0);
ZZ_MARK_TARGET(0x800296A4,ZZ_29254_450);
ZZ_MARK(0x800296A8);
ZZ_MARK(0x800296AC);
ZZ_MARK(0x800296B0);
ZZ_MARK(0x800296B4);
ZZ_MARK(0x800296B8);
ZZ_MARK_TARGET(0x800296BC,ZZ_29254_468);
ZZ_MARK(0x800296C0);
ZZ_MARK(0x800296C4);
ZZ_MARK(0x800296C8);
ZZ_MARK_TARGET(0x800296CC,ZZ_29254_478);
ZZ_MARK(0x800296D0);
ZZ_MARK(0x800296D4);
ZZ_MARK(0x800296D8);
ZZ_MARK(0x800296DC);
ZZ_MARK(0x800296E0);
ZZ_MARK(0x800296E4);
ZZ_MARK(0x800296E8);
ZZ_MARK(0x800296EC);
ZZ_MARK_TARGET(0x800296F0,ZZ_29254_49C);
ZZ_MARK_TARGET(0x800296F4,ZZ_29254_4A0);
ZZ_MARK(0x800296F8);
ZZ_MARK(0x800296FC);
ZZ_MARK(0x80029700);
ZZ_MARK(0x80029704);
ZZ_MARK(0x80029708);
ZZ_MARK(0x8002970C);
ZZ_MARK(0x80029710);
ZZ_MARK(0x80029714);
ZZ_MARK(0x80029718);
ZZ_MARK(0x8002971C);
ZZ_MARK(0x80029720);
ZZ_MARK(0x80029724);