#ifdef ZZ_INCLUDE_CODE
ZZ_35620:
	SP -= 112;
	EMU_Write32(SP + 104,S2); //+ 0x68
	S2 = A0;
	EMU_Write32(SP + 96,S0); //+ 0x60
	S0 = A1;
	EMU_Write32(SP + 100,S1); //+ 0x64
	S1 = R0;
	A0 = SP + 16;
	EMU_Write32(SP + 108,RA); //+ 0x6C
	RA = 0x8003564C; //ZZ_35620_2C
	A1 = S2;
	ZZ_CLOCKCYCLES(11,0x8004947C);
	goto ZZ_4947C;
ZZ_35620_2C:
	A2 = S2;
	A3 = SP + 16;
	if ((int32_t)S0 <= 0)
	{
		T0 = R0;
		ZZ_CLOCKCYCLES(4,0x8003573C);
		goto ZZ_35620_11C;
	}
	T0 = R0;
	T3 = 0x8140;
	ZZ_CLOCKCYCLES(5,0x80035660);
ZZ_35620_40:
	A1 = EMU_ReadU8(A3);
	if (!S1)
	{
		V0 = A1 - 97;
		ZZ_CLOCKCYCLES(3,0x80035674);
		goto ZZ_35620_54;
	}
	V0 = A1 - 97;
	EMU_Write16(A2,T3);
	ZZ_CLOCKCYCLES(5,0x80035728);
	goto ZZ_35620_108;
ZZ_35620_54:
	V0 = V0 < 26;
	if (!V0)
	{
		V0 = A1 - 32224;
		ZZ_CLOCKCYCLES(3,0x80035688);
		goto ZZ_35620_68;
	}
	V0 = A1 - 32224;
	EMU_Write16(A2,V0);
	ZZ_CLOCKCYCLES(5,0x80035728);
	goto ZZ_35620_108;
ZZ_35620_68:
	V0 = A1 - 65;
	V0 = V0 < 26;
	if (V0)
	{
		V0 = A1 - 32225;
		ZZ_CLOCKCYCLES(4,0x800356A8);
		goto ZZ_35620_88;
	}
	V0 = A1 - 32225;
	V0 = A1 - 48;
	V0 = V0 < 10;
	if (!V0)
	{
		V0 = A1 - 32225;
		ZZ_CLOCKCYCLES(8,0x800356CC);
		goto ZZ_35620_AC;
	}
	V0 = A1 - 32225;
	ZZ_CLOCKCYCLES(8,0x800356A8);
ZZ_35620_88:
	EMU_Write16(A2,V0);
	ZZ_CLOCKCYCLES(2,0x80035728);
	goto ZZ_35620_108;
ZZ_35620_90:
	AT = 0x80060000;
	AT += A0;
	V0 = EMU_ReadU8(AT - 14515); //+ 0xFFFFC74D
	V0 |= 0x8100;
	EMU_Write16(A2,V0);
	ZZ_CLOCKCYCLES(7,0x80035718);
	goto ZZ_35620_F8;
ZZ_35620_AC:
	EMU_Write16(A2,T3);
	V1 = 0x80060000;
	V1 = EMU_ReadU8(V1 - 14516); //+ 0xFFFFC74C
	V0 = 0xFF;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(6,0x80035718);
		goto ZZ_35620_F8;
	}
	T1 = A1 & 0xFF;
	T2 = 0xFF;
	V1 = 0x80060000;
	V1 -= 14516;
	A0 = R0;
	V0 = EMU_ReadU8(V1);
	ZZ_CLOCKCYCLES(12,0x800356FC);
ZZ_35620_DC:
	if (V0 == T1)
	{
		V1 += 2;
		ZZ_CLOCKCYCLES(3,0x800356B0);
		goto ZZ_35620_90;
	}
	V1 += 2;
	V0 = EMU_ReadU8(V1);
	if (V0 != T2)
	{
		A0 += 2;
		ZZ_CLOCKCYCLES(7,0x800356FC);
		goto ZZ_35620_DC;
	}
	A0 += 2;
	ZZ_CLOCKCYCLES(7,0x80035718);
ZZ_35620_F8:
	if (A1)
	{
		ZZ_CLOCKCYCLES(2,0x80035728);
		goto ZZ_35620_108;
	}
	S1 = 0x1;
	EMU_Write16(A2,R0);
	ZZ_CLOCKCYCLES(4,0x80035728);
ZZ_35620_108:
	A3 += 1;
	T0 += 1;
	V0 = (int32_t)T0 < (int32_t)S0;
	if (V0)
	{
		A2 += 2;
		ZZ_CLOCKCYCLES(5,0x80035660);
		goto ZZ_35620_40;
	}
	A2 += 2;
	ZZ_CLOCKCYCLES(5,0x8003573C);
ZZ_35620_11C:
	A3 = S2;
	if ((int32_t)S0 <= 0)
	{
		T0 = R0;
		ZZ_CLOCKCYCLES(3,0x80035770);
		goto ZZ_35620_150;
	}
	T0 = R0;
	V1 = A3 + 1;
	ZZ_CLOCKCYCLES(4,0x8003574C);
ZZ_35620_12C:
	A1 = EMU_ReadU8(A3);
	V0 = EMU_ReadU8(V1);
	T0 += 1;
	EMU_Write8(A3,V0);
	EMU_Write8(V1,A1);
	V1 += 2;
	V0 = (int32_t)T0 < (int32_t)S0;
	if (V0)
	{
		A3 += 2;
		ZZ_CLOCKCYCLES(9,0x8003574C);
		goto ZZ_35620_12C;
	}
	A3 += 2;
	ZZ_CLOCKCYCLES(9,0x80035770);
ZZ_35620_150:
	RA = EMU_ReadU32(SP + 108); //+ 0x6C
	S2 = EMU_ReadU32(SP + 104); //+ 0x68
	S1 = EMU_ReadU32(SP + 100); //+ 0x64
	S0 = EMU_ReadU32(SP + 96); //+ 0x60
	SP += 112;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x80035B4C,ZZ_3578C_3C0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80035620,ZZ_35620);
ZZ_MARK(0x80035624);
ZZ_MARK(0x80035628);
ZZ_MARK(0x8003562C);
ZZ_MARK(0x80035630);
ZZ_MARK(0x80035634);
ZZ_MARK(0x80035638);
ZZ_MARK(0x8003563C);
ZZ_MARK(0x80035640);
ZZ_MARK(0x80035644);
ZZ_MARK(0x80035648);
ZZ_MARK_TARGET(0x8003564C,ZZ_35620_2C);
ZZ_MARK(0x80035650);
ZZ_MARK(0x80035654);
ZZ_MARK(0x80035658);
ZZ_MARK(0x8003565C);
ZZ_MARK_TARGET(0x80035660,ZZ_35620_40);
ZZ_MARK(0x80035664);
ZZ_MARK(0x80035668);
ZZ_MARK(0x8003566C);
ZZ_MARK(0x80035670);
ZZ_MARK_TARGET(0x80035674,ZZ_35620_54);
ZZ_MARK(0x80035678);
ZZ_MARK(0x8003567C);
ZZ_MARK(0x80035680);
ZZ_MARK(0x80035684);
ZZ_MARK_TARGET(0x80035688,ZZ_35620_68);
ZZ_MARK(0x8003568C);
ZZ_MARK(0x80035690);
ZZ_MARK(0x80035694);
ZZ_MARK(0x80035698);
ZZ_MARK(0x8003569C);
ZZ_MARK(0x800356A0);
ZZ_MARK(0x800356A4);
ZZ_MARK_TARGET(0x800356A8,ZZ_35620_88);
ZZ_MARK(0x800356AC);
ZZ_MARK_TARGET(0x800356B0,ZZ_35620_90);
ZZ_MARK(0x800356B4);
ZZ_MARK(0x800356B8);
ZZ_MARK(0x800356BC);
ZZ_MARK(0x800356C0);
ZZ_MARK(0x800356C4);
ZZ_MARK(0x800356C8);
ZZ_MARK_TARGET(0x800356CC,ZZ_35620_AC);
ZZ_MARK(0x800356D0);
ZZ_MARK(0x800356D4);
ZZ_MARK(0x800356D8);
ZZ_MARK(0x800356DC);
ZZ_MARK(0x800356E0);
ZZ_MARK(0x800356E4);
ZZ_MARK(0x800356E8);
ZZ_MARK(0x800356EC);
ZZ_MARK(0x800356F0);
ZZ_MARK(0x800356F4);
ZZ_MARK(0x800356F8);
ZZ_MARK_TARGET(0x800356FC,ZZ_35620_DC);
ZZ_MARK(0x80035700);
ZZ_MARK(0x80035704);
ZZ_MARK(0x80035708);
ZZ_MARK(0x8003570C);
ZZ_MARK(0x80035710);
ZZ_MARK(0x80035714);
ZZ_MARK_TARGET(0x80035718,ZZ_35620_F8);
ZZ_MARK(0x8003571C);
ZZ_MARK(0x80035720);
ZZ_MARK(0x80035724);
ZZ_MARK_TARGET(0x80035728,ZZ_35620_108);
ZZ_MARK(0x8003572C);
ZZ_MARK(0x80035730);
ZZ_MARK(0x80035734);
ZZ_MARK(0x80035738);
ZZ_MARK_TARGET(0x8003573C,ZZ_35620_11C);
ZZ_MARK(0x80035740);
ZZ_MARK(0x80035744);
ZZ_MARK(0x80035748);
ZZ_MARK_TARGET(0x8003574C,ZZ_35620_12C);
ZZ_MARK(0x80035750);
ZZ_MARK(0x80035754);
ZZ_MARK(0x80035758);
ZZ_MARK(0x8003575C);
ZZ_MARK(0x80035760);
ZZ_MARK(0x80035764);
ZZ_MARK(0x80035768);
ZZ_MARK(0x8003576C);
ZZ_MARK_TARGET(0x80035770,ZZ_35620_150);
ZZ_MARK(0x80035774);
ZZ_MARK(0x80035778);
ZZ_MARK(0x8003577C);
ZZ_MARK(0x80035780);
ZZ_MARK(0x80035784);
ZZ_MARK(0x80035788);
