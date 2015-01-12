#ifdef ZZ_INCLUDE_CODE
ZZ_2E594:
	SP -= 96;
	EMU_Write32(SP + 84,S7); //+ 0x54
	S7 = EMU_ReadU32(SP + 120); //+ 0x78
	EMU_Write32(SP + 88,FP); //+ 0x58
	FP = A1;
	EMU_Write32(SP + 92,RA); //+ 0x5C
	EMU_Write32(SP + 80,S6); //+ 0x50
	EMU_Write32(SP + 76,S5); //+ 0x4C
	EMU_Write32(SP + 72,S4); //+ 0x48
	EMU_Write32(SP + 68,S3); //+ 0x44
	EMU_Write32(SP + 64,S2); //+ 0x40
	EMU_Write32(SP + 60,S1); //+ 0x3C
	EMU_Write32(SP + 56,S0); //+ 0x38
	EMU_Write32(SP + 32,A0); //+ 0x20
	EMU_Write32(SP + 40,A2); //+ 0x28
	EMU_Write32(SP + 48,A3); //+ 0x30
	ZZ_CLOCKCYCLES(16,0x8002E5D4);
ZZ_2E594_40:
	A1 = EMU_ReadU32(SP + 40); //+ 0x28
	S6 = 0x80060000;
	S6 -= 18504;
	RA = 0x8002E5E8; //ZZ_2E594_54
	A0 = FP;
	ZZ_CLOCKCYCLES(5,0x8002E27C);
	goto ZZ_2E27C;
ZZ_2E594_54:
	if (V0)
	{
		V1 = 0x100000;
		ZZ_CLOCKCYCLES(2,0x8002E634);
		goto ZZ_2E594_A0;
	}
	V1 = 0x100000;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 2916); //+ 0xB64
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	V0 = EMU_ReadU32(V0 + 668); //+ 0x29C
	V0 &= V1;
	if (V0)
	{
		V1 = 0x10000000;
		ZZ_CLOCKCYCLES(12,0x8002E634);
		goto ZZ_2E594_A0;
	}
	V1 = 0x10000000;
	T0 = EMU_ReadU32(SP + 116); //+ 0x74
	V0 = EMU_ReadU32(T0 + 256); //+ 0x100
	V0 &= V1;
	if (!V0)
	{
		S5 = R0;
		ZZ_CLOCKCYCLES(19,0x8002E668);
		goto ZZ_2E594_D4;
	}
	S5 = R0;
	ZZ_CLOCKCYCLES(19,0x8002E634);
ZZ_2E594_A0:
	T1 = EMU_ReadU32(SP + 48); //+ 0x30
	EMU_Write32(T1,FP);
	T1 = EMU_ReadU32(SP + 40); //+ 0x28
	T0 = EMU_ReadU32(SP + 112); //+ 0x70
	V0 = S7 + 2;
	EMU_Write32(T0,T1);
	ZZ_CLOCKCYCLES(8,0x8002E908);
	goto ZZ_2E594_374;
ZZ_2E594_C0:
	FP = 0x10;
	T0 = 0x10;
	EMU_Write32(SP + 40,T0); //+ 0x28
	S7 += 1;
	ZZ_CLOCKCYCLES(5,0x8002E5D4);
	goto ZZ_2E594_40;
ZZ_2E594_D4:
	S3 = EMU_ReadS8(S6);
	S4 = EMU_ReadS8(S6 + 1); //+ 0x1
	T1 = EMU_ReadU32(SP + 40); //+ 0x28
	S6 += 2;
	S0 = FP + S3;
	A0 = S0;
	S2 = T1 + S4;
	RA = 0x8002E68C; //ZZ_2E594_F8
	A1 = S2;
	ZZ_CLOCKCYCLES(9,0x8002E27C);
	goto ZZ_2E27C;
ZZ_2E594_F8:
	if (V0)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(2,0x8002E8A0);
		goto ZZ_2E594_30C;
	}
	A0 = S0;
	T0 = EMU_ReadU32(SP + 40); //+ 0x28
	S1 = T0 - S4;
	RA = 0x8002E6A8; //ZZ_2E594_114
	A1 = S1;
	ZZ_CLOCKCYCLES(7,0x8002E27C);
	goto ZZ_2E27C;
ZZ_2E594_114:
	if (V0)
	{
		ZZ_CLOCKCYCLES(2,0x8002E8BC);
		goto ZZ_2E594_328;
	}
	S0 = FP - S3;
	A0 = S0;
	RA = 0x8002E6C0; //ZZ_2E594_12C
	A1 = S2;
	ZZ_CLOCKCYCLES(6,0x8002E27C);
	goto ZZ_2E27C;
ZZ_2E594_12C:
	if (V0)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(2,0x8002E8A0);
		goto ZZ_2E594_30C;
	}
	A0 = S0;
	RA = 0x8002E6D0; //ZZ_2E594_13C
	A1 = S1;
	ZZ_CLOCKCYCLES(4,0x8002E27C);
	goto ZZ_2E27C;
ZZ_2E594_13C:
	if (V0)
	{
		ZZ_CLOCKCYCLES(2,0x8002E8BC);
		goto ZZ_2E594_328;
	}
	if (S3 == S4)
	{
		ZZ_CLOCKCYCLES(4,0x8002E744);
		goto ZZ_2E594_1B0;
	}
	T1 = EMU_ReadU32(SP + 40); //+ 0x28
	S0 = FP + S4;
	A0 = S0;
	S2 = T1 + S3;
	RA = 0x8002E6F8; //ZZ_2E594_164
	A1 = S2;
	ZZ_CLOCKCYCLES(10,0x8002E27C);
	goto ZZ_2E27C;
ZZ_2E594_164:
	if (V0)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(2,0x8002E8A0);
		goto ZZ_2E594_30C;
	}
	A0 = S0;
	T0 = EMU_ReadU32(SP + 40); //+ 0x28
	S1 = T0 - S3;
	RA = 0x8002E714; //ZZ_2E594_180
	A1 = S1;
	ZZ_CLOCKCYCLES(7,0x8002E27C);
	goto ZZ_2E27C;
ZZ_2E594_180:
	if (V0)
	{
		ZZ_CLOCKCYCLES(2,0x8002E8BC);
		goto ZZ_2E594_328;
	}
	S0 = FP - S4;
	A0 = S0;
	RA = 0x8002E72C; //ZZ_2E594_198
	A1 = S2;
	ZZ_CLOCKCYCLES(6,0x8002E27C);
	goto ZZ_2E27C;
ZZ_2E594_198:
	if (V0)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(2,0x8002E8A0);
		goto ZZ_2E594_30C;
	}
	A0 = S0;
	RA = 0x8002E73C; //ZZ_2E594_1A8
	A1 = S1;
	ZZ_CLOCKCYCLES(4,0x8002E27C);
	goto ZZ_2E27C;
ZZ_2E594_1A8:
	if (V0)
	{
		ZZ_CLOCKCYCLES(2,0x8002E8BC);
		goto ZZ_2E594_328;
	}
	ZZ_CLOCKCYCLES(2,0x8002E744);
ZZ_2E594_1B0:
	S5 += 1;
	V0 = (int32_t)S5 < 152;
	if (V0)
	{
		V0 = 0x10;
		ZZ_CLOCKCYCLES(4,0x8002E668);
		goto ZZ_2E594_D4;
	}
	V0 = 0x10;
	if (FP != V0)
	{
		ZZ_CLOCKCYCLES(6,0x8002E76C);
		goto ZZ_2E594_1D8;
	}
	T1 = EMU_ReadU32(SP + 40); //+ 0x28
	if (T1 == FP)
	{
		V0 = (int32_t)S7 < 256;
		ZZ_CLOCKCYCLES(10,0x8002E7D4);
		goto ZZ_2E594_240;
	}
	V0 = (int32_t)S7 < 256;
	ZZ_CLOCKCYCLES(10,0x8002E76C);
ZZ_2E594_1D8:
	T0 = EMU_ReadU32(SP + 116); //+ 0x74
	V0 = EMU_ReadU32(T0 + 88); //+ 0x58
	if (!V0)
	{
		ZZ_CLOCKCYCLES(6,0x8002E7A4);
		goto ZZ_2E594_210;
	}
	V0 = EMU_ReadU32(V0 + 12); //+ 0xC
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	V1 = EMU_ReadU32(V0);
	V0 = 0x22;
	if (V1 == V0)
	{
		V0 = (int32_t)S7 < 256;
		ZZ_CLOCKCYCLES(14,0x8002E7D4);
		goto ZZ_2E594_240;
	}
	V0 = (int32_t)S7 < 256;
	ZZ_CLOCKCYCLES(14,0x8002E7A4);
ZZ_2E594_210:
	S5 = R0;
	A0 = -1;
	V1 = EMU_ReadU32(GP + 584); //+ 0x248
	ZZ_CLOCKCYCLES(3,0x8002E7B0);
ZZ_2E594_21C:
	V0 = EMU_ReadU32(V1);
	if (V0 != A0)
	{
		S5 += 1;
		ZZ_CLOCKCYCLES(5,0x8002E654);
		goto ZZ_2E594_C0;
	}
	S5 += 1;
	V0 = (int32_t)S5 < 32;
	if (V0)
	{
		V1 += 4;
		ZZ_CLOCKCYCLES(8,0x8002E7B0);
		goto ZZ_2E594_21C;
	}
	V1 += 4;
	V0 = (int32_t)S7 < 256;
	ZZ_CLOCKCYCLES(9,0x8002E7D4);
ZZ_2E594_240:
	if (!V0)
	{
		ZZ_CLOCKCYCLES(2,0x8002E8D8);
		goto ZZ_2E594_344;
	}
	T1 = EMU_ReadU32(SP + 116); //+ 0x74
	V0 = EMU_ReadU32(T1 + 88); //+ 0x58
	if (!V0)
	{
		ZZ_CLOCKCYCLES(8,0x8002E814);
		goto ZZ_2E594_280;
	}
	V0 = EMU_ReadU32(V0 + 12); //+ 0xC
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	V1 = EMU_ReadU32(V0);
	V0 = 0x22;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(16,0x8002E8DC);
		goto ZZ_2E594_348;
	}
	ZZ_CLOCKCYCLES(16,0x8002E814);
ZZ_2E594_280:
	T0 = EMU_ReadU32(SP + 116); //+ 0x74
	A2 = EMU_ReadU32(SP + 32); //+ 0x20
	V0 = EMU_ReadU32(T0 + 168); //+ 0xA8
	A3 = EMU_ReadU32(SP + 116); //+ 0x74
	A0 = R0;
	A1 = R0;
	V0 |= 0x8000;
	RA = 0x8002E838; //ZZ_2E594_2A4
	EMU_Write32(T0 + 168,V0); //+ 0xA8
	ZZ_CLOCKCYCLES(9,0x8002E2BC);
	goto ZZ_2E2BC;
ZZ_2E594_2A4:
	if (!V0)
	{
		A0 = 0x1;
		ZZ_CLOCKCYCLES(2,0x8002E86C);
		goto ZZ_2E594_2D8;
	}
	A0 = 0x1;
	A2 = EMU_ReadU32(SP + 32); //+ 0x20
	A3 = EMU_ReadU32(SP + 116); //+ 0x74
	RA = 0x8002E850; //ZZ_2E594_2BC
	A1 = 0x1;
	ZZ_CLOCKCYCLES(6,0x8002E2BC);
	goto ZZ_2E2BC;
ZZ_2E594_2BC:
	A0 = EMU_ReadU32(SP + 32); //+ 0x20
	A1 = EMU_ReadU32(SP + 32); //+ 0x20
	A2 = EMU_ReadU32(SP + 116); //+ 0x74
	A3 = 0x80070000;
	A3 -= 32132;
	RA = 0x8002E86C; //ZZ_2E594_2D8
	EMU_Write32(SP + 16,R0); //+ 0x10
	ZZ_CLOCKCYCLES(7,0x8002D9F8);
	goto ZZ_2D9F8;
ZZ_2E594_2D8:
	A0 = EMU_ReadU32(SP + 32); //+ 0x20
	A2 = EMU_ReadU32(SP + 40); //+ 0x28
	A3 = EMU_ReadU32(SP + 48); //+ 0x30
	T1 = EMU_ReadU32(SP + 112); //+ 0x70
	T0 = EMU_ReadU32(SP + 116); //+ 0x74
	A1 = FP;
	V0 = 0x100;
	EMU_Write32(SP + 24,V0); //+ 0x18
	EMU_Write32(SP + 16,T1); //+ 0x10
	RA = 0x8002E898; //ZZ_2E594_304
	EMU_Write32(SP + 20,T0); //+ 0x14
	ZZ_CLOCKCYCLES(11,0x8002E594);
	goto ZZ_2E594;
ZZ_2E594_304:
	ZZ_CLOCKCYCLES(2,0x8002E908);
	goto ZZ_2E594_374;
ZZ_2E594_30C:
	T1 = EMU_ReadU32(SP + 48); //+ 0x30
	EMU_Write32(T1,S0);
	T0 = EMU_ReadU32(SP + 112); //+ 0x70
	V0 = S7 + 2;
	EMU_Write32(T0,S2);
	ZZ_CLOCKCYCLES(7,0x8002E908);
	goto ZZ_2E594_374;
ZZ_2E594_328:
	T1 = EMU_ReadU32(SP + 48); //+ 0x30
	EMU_Write32(T1,S0);
	T0 = EMU_ReadU32(SP + 112); //+ 0x70
	V0 = S7 + 2;
	EMU_Write32(T0,S1);
	ZZ_CLOCKCYCLES(7,0x8002E908);
	goto ZZ_2E594_374;
ZZ_2E594_344:
	T1 = EMU_ReadU32(SP + 116); //+ 0x74
	ZZ_CLOCKCYCLES(1,0x8002E8DC);
ZZ_2E594_348:
	V1 = EMU_ReadU32(T1 + 168); //+ 0xA8
	A0 = 0x100000;
	V1 |= A0;
	EMU_Write32(T1 + 168,V1); //+ 0xA8
	T0 = EMU_ReadU32(SP + 48); //+ 0x30
	V1 = 0x10;
	EMU_Write32(T0,V1);
	T1 = EMU_ReadU32(SP + 112); //+ 0x70
	V0 = R0;
	EMU_Write32(T1,V1);
	ZZ_CLOCKCYCLES(11,0x8002E908);
ZZ_2E594_374:
	RA = EMU_ReadU32(SP + 92); //+ 0x5C
	FP = EMU_ReadU32(SP + 88); //+ 0x58
	S7 = EMU_ReadU32(SP + 84); //+ 0x54
	S6 = EMU_ReadU32(SP + 80); //+ 0x50
	S5 = EMU_ReadU32(SP + 76); //+ 0x4C
	S4 = EMU_ReadU32(SP + 72); //+ 0x48
	S3 = EMU_ReadU32(SP + 68); //+ 0x44
	S2 = EMU_ReadU32(SP + 64); //+ 0x40
	S1 = EMU_ReadU32(SP + 60); //+ 0x3C
	S0 = EMU_ReadU32(SP + 56); //+ 0x38
	SP += 96;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(13);
	ZZ_JUMPREGISTER(0x8002C520,ZZ_2C404_11C);
	ZZ_JUMPREGISTER(0x8002E898,ZZ_2E594_304);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8002E594,ZZ_2E594);
ZZ_MARK(0x8002E598);
ZZ_MARK(0x8002E59C);
ZZ_MARK(0x8002E5A0);
ZZ_MARK(0x8002E5A4);
ZZ_MARK(0x8002E5A8);
ZZ_MARK(0x8002E5AC);
ZZ_MARK(0x8002E5B0);
ZZ_MARK(0x8002E5B4);
ZZ_MARK(0x8002E5B8);
ZZ_MARK(0x8002E5BC);
ZZ_MARK(0x8002E5C0);
ZZ_MARK(0x8002E5C4);
ZZ_MARK(0x8002E5C8);
ZZ_MARK(0x8002E5CC);
ZZ_MARK(0x8002E5D0);
ZZ_MARK_TARGET(0x8002E5D4,ZZ_2E594_40);
ZZ_MARK(0x8002E5D8);
ZZ_MARK(0x8002E5DC);
ZZ_MARK(0x8002E5E0);
ZZ_MARK(0x8002E5E4);
ZZ_MARK_TARGET(0x8002E5E8,ZZ_2E594_54);
ZZ_MARK(0x8002E5EC);
ZZ_MARK(0x8002E5F0);
ZZ_MARK(0x8002E5F4);
ZZ_MARK(0x8002E5F8);
ZZ_MARK(0x8002E5FC);
ZZ_MARK(0x8002E600);
ZZ_MARK(0x8002E604);
ZZ_MARK(0x8002E608);
ZZ_MARK(0x8002E60C);
ZZ_MARK(0x8002E610);
ZZ_MARK(0x8002E614);
ZZ_MARK(0x8002E618);
ZZ_MARK(0x8002E61C);
ZZ_MARK(0x8002E620);
ZZ_MARK(0x8002E624);
ZZ_MARK(0x8002E628);
ZZ_MARK(0x8002E62C);
ZZ_MARK(0x8002E630);
ZZ_MARK_TARGET(0x8002E634,ZZ_2E594_A0);
ZZ_MARK(0x8002E638);
ZZ_MARK(0x8002E63C);
ZZ_MARK(0x8002E640);
ZZ_MARK(0x8002E644);
ZZ_MARK(0x8002E648);
ZZ_MARK(0x8002E64C);
ZZ_MARK(0x8002E650);
ZZ_MARK_TARGET(0x8002E654,ZZ_2E594_C0);
ZZ_MARK(0x8002E658);
ZZ_MARK(0x8002E65C);
ZZ_MARK(0x8002E660);
ZZ_MARK(0x8002E664);
ZZ_MARK_TARGET(0x8002E668,ZZ_2E594_D4);
ZZ_MARK(0x8002E66C);
ZZ_MARK(0x8002E670);
ZZ_MARK(0x8002E674);
ZZ_MARK(0x8002E678);
ZZ_MARK(0x8002E67C);
ZZ_MARK(0x8002E680);
ZZ_MARK(0x8002E684);
ZZ_MARK(0x8002E688);
ZZ_MARK_TARGET(0x8002E68C,ZZ_2E594_F8);
ZZ_MARK(0x8002E690);
ZZ_MARK(0x8002E694);
ZZ_MARK(0x8002E698);
ZZ_MARK(0x8002E69C);
ZZ_MARK(0x8002E6A0);
ZZ_MARK(0x8002E6A4);
ZZ_MARK_TARGET(0x8002E6A8,ZZ_2E594_114);
ZZ_MARK(0x8002E6AC);
ZZ_MARK(0x8002E6B0);
ZZ_MARK(0x8002E6B4);
ZZ_MARK(0x8002E6B8);
ZZ_MARK(0x8002E6BC);
ZZ_MARK_TARGET(0x8002E6C0,ZZ_2E594_12C);
ZZ_MARK(0x8002E6C4);
ZZ_MARK(0x8002E6C8);
ZZ_MARK(0x8002E6CC);
ZZ_MARK_TARGET(0x8002E6D0,ZZ_2E594_13C);
ZZ_MARK(0x8002E6D4);
ZZ_MARK(0x8002E6D8);
ZZ_MARK(0x8002E6DC);
ZZ_MARK(0x8002E6E0);
ZZ_MARK(0x8002E6E4);
ZZ_MARK(0x8002E6E8);
ZZ_MARK(0x8002E6EC);
ZZ_MARK(0x8002E6F0);
ZZ_MARK(0x8002E6F4);
ZZ_MARK_TARGET(0x8002E6F8,ZZ_2E594_164);
ZZ_MARK(0x8002E6FC);
ZZ_MARK(0x8002E700);
ZZ_MARK(0x8002E704);
ZZ_MARK(0x8002E708);
ZZ_MARK(0x8002E70C);
ZZ_MARK(0x8002E710);
ZZ_MARK_TARGET(0x8002E714,ZZ_2E594_180);
ZZ_MARK(0x8002E718);
ZZ_MARK(0x8002E71C);
ZZ_MARK(0x8002E720);
ZZ_MARK(0x8002E724);
ZZ_MARK(0x8002E728);
ZZ_MARK_TARGET(0x8002E72C,ZZ_2E594_198);
ZZ_MARK(0x8002E730);
ZZ_MARK(0x8002E734);
ZZ_MARK(0x8002E738);
ZZ_MARK_TARGET(0x8002E73C,ZZ_2E594_1A8);
ZZ_MARK(0x8002E740);
ZZ_MARK_TARGET(0x8002E744,ZZ_2E594_1B0);
ZZ_MARK(0x8002E748);
ZZ_MARK(0x8002E74C);
ZZ_MARK(0x8002E750);
ZZ_MARK(0x8002E754);
ZZ_MARK(0x8002E758);
ZZ_MARK(0x8002E75C);
ZZ_MARK(0x8002E760);
ZZ_MARK(0x8002E764);
ZZ_MARK(0x8002E768);
ZZ_MARK_TARGET(0x8002E76C,ZZ_2E594_1D8);
ZZ_MARK(0x8002E770);
ZZ_MARK(0x8002E774);
ZZ_MARK(0x8002E778);
ZZ_MARK(0x8002E77C);
ZZ_MARK(0x8002E780);
ZZ_MARK(0x8002E784);
ZZ_MARK(0x8002E788);
ZZ_MARK(0x8002E78C);
ZZ_MARK(0x8002E790);
ZZ_MARK(0x8002E794);
ZZ_MARK(0x8002E798);
ZZ_MARK(0x8002E79C);
ZZ_MARK(0x8002E7A0);
ZZ_MARK_TARGET(0x8002E7A4,ZZ_2E594_210);
ZZ_MARK(0x8002E7A8);
ZZ_MARK(0x8002E7AC);
ZZ_MARK_TARGET(0x8002E7B0,ZZ_2E594_21C);
ZZ_MARK(0x8002E7B4);
ZZ_MARK(0x8002E7B8);
ZZ_MARK(0x8002E7BC);
ZZ_MARK(0x8002E7C0);
ZZ_MARK(0x8002E7C4);
ZZ_MARK(0x8002E7C8);
ZZ_MARK(0x8002E7CC);
ZZ_MARK(0x8002E7D0);
ZZ_MARK_TARGET(0x8002E7D4,ZZ_2E594_240);
ZZ_MARK(0x8002E7D8);
ZZ_MARK(0x8002E7DC);
ZZ_MARK(0x8002E7E0);
ZZ_MARK(0x8002E7E4);
ZZ_MARK(0x8002E7E8);
ZZ_MARK(0x8002E7EC);
ZZ_MARK(0x8002E7F0);
ZZ_MARK(0x8002E7F4);
ZZ_MARK(0x8002E7F8);
ZZ_MARK(0x8002E7FC);
ZZ_MARK(0x8002E800);
ZZ_MARK(0x8002E804);
ZZ_MARK(0x8002E808);
ZZ_MARK(0x8002E80C);
ZZ_MARK(0x8002E810);
ZZ_MARK_TARGET(0x8002E814,ZZ_2E594_280);
ZZ_MARK(0x8002E818);
ZZ_MARK(0x8002E81C);
ZZ_MARK(0x8002E820);
ZZ_MARK(0x8002E824);
ZZ_MARK(0x8002E828);
ZZ_MARK(0x8002E82C);
ZZ_MARK(0x8002E830);
ZZ_MARK(0x8002E834);
ZZ_MARK_TARGET(0x8002E838,ZZ_2E594_2A4);
ZZ_MARK(0x8002E83C);
ZZ_MARK(0x8002E840);
ZZ_MARK(0x8002E844);
ZZ_MARK(0x8002E848);
ZZ_MARK(0x8002E84C);
ZZ_MARK_TARGET(0x8002E850,ZZ_2E594_2BC);
ZZ_MARK(0x8002E854);
ZZ_MARK(0x8002E858);
ZZ_MARK(0x8002E85C);
ZZ_MARK(0x8002E860);
ZZ_MARK(0x8002E864);
ZZ_MARK(0x8002E868);
ZZ_MARK_TARGET(0x8002E86C,ZZ_2E594_2D8);
ZZ_MARK(0x8002E870);
ZZ_MARK(0x8002E874);
ZZ_MARK(0x8002E878);
ZZ_MARK(0x8002E87C);
ZZ_MARK(0x8002E880);
ZZ_MARK(0x8002E884);
ZZ_MARK(0x8002E888);
ZZ_MARK(0x8002E88C);
ZZ_MARK(0x8002E890);
ZZ_MARK(0x8002E894);
ZZ_MARK_TARGET(0x8002E898,ZZ_2E594_304);
ZZ_MARK(0x8002E89C);
ZZ_MARK_TARGET(0x8002E8A0,ZZ_2E594_30C);
ZZ_MARK(0x8002E8A4);
ZZ_MARK(0x8002E8A8);
ZZ_MARK(0x8002E8AC);
ZZ_MARK(0x8002E8B0);
ZZ_MARK(0x8002E8B4);
ZZ_MARK(0x8002E8B8);
ZZ_MARK_TARGET(0x8002E8BC,ZZ_2E594_328);
ZZ_MARK(0x8002E8C0);
ZZ_MARK(0x8002E8C4);
ZZ_MARK(0x8002E8C8);
ZZ_MARK(0x8002E8CC);
ZZ_MARK(0x8002E8D0);
ZZ_MARK(0x8002E8D4);
ZZ_MARK_TARGET(0x8002E8D8,ZZ_2E594_344);
ZZ_MARK_TARGET(0x8002E8DC,ZZ_2E594_348);
ZZ_MARK(0x8002E8E0);
ZZ_MARK(0x8002E8E4);
ZZ_MARK(0x8002E8E8);
ZZ_MARK(0x8002E8EC);
ZZ_MARK(0x8002E8F0);
ZZ_MARK(0x8002E8F4);
ZZ_MARK(0x8002E8F8);
ZZ_MARK(0x8002E8FC);
ZZ_MARK(0x8002E900);
ZZ_MARK(0x8002E904);
ZZ_MARK_TARGET(0x8002E908,ZZ_2E594_374);
ZZ_MARK(0x8002E90C);
ZZ_MARK(0x8002E910);
ZZ_MARK(0x8002E914);
ZZ_MARK(0x8002E918);
ZZ_MARK(0x8002E91C);
ZZ_MARK(0x8002E920);
ZZ_MARK(0x8002E924);
ZZ_MARK(0x8002E928);
ZZ_MARK(0x8002E92C);
ZZ_MARK(0x8002E930);
ZZ_MARK(0x8002E934);
ZZ_MARK(0x8002E938);
