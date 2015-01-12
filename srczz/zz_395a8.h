#ifdef ZZ_INCLUDE_CODE
ZZ_395A8:
	SP -= 120;
	EMU_Write32(SP + 96,S0); //+ 0x60
	S0 = A0;
	EMU_Write32(SP + 100,S1); //+ 0x64
	S1 = A1;
	EMU_Write32(SP + 108,S3); //+ 0x6C
	S3 = A2;
	V0 = S1 >> 19;
	V0 &= 0x1C;
	V0 += S0;
	EMU_Write32(SP + 112,RA); //+ 0x70
	EMU_Write32(SP + 104,S2); //+ 0x68
	S2 = EMU_ReadU32(V0 + 64); //+ 0x40
	A0 = S1 & 0xFFF;
	V1 = S1 & 0xE00;
	V0 = 0xE00;
	if (V1 != V0)
	{
		A1 = A0;
		ZZ_CLOCKCYCLES(18,0x80039624);
		goto ZZ_395A8_7C;
	}
	A1 = A0;
	V0 = 0xE1F;
	if (A0 != V0)
	{
		V0 = S1 & 0x1FF;
		ZZ_CLOCKCYCLES(21,0x80039614);
		goto ZZ_395A8_6C;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S0 + 188); //+ 0xBC
	V0 -= 4;
	A2 = V0;
	EMU_Write32(S0 + 188,A2); //+ 0xBC
	ZZ_CLOCKCYCLES(27,0x80039630);
	goto ZZ_395A8_88;
ZZ_395A8_6C:
	V0 <<= 2;
	V0 += 64;
	A2 = S0 + V0;
	ZZ_CLOCKCYCLES(4,0x80039630);
	goto ZZ_395A8_88;
ZZ_395A8_7C:
	RA = 0x8003962C; //ZZ_395A8_84
	A0 = S0;
	ZZ_CLOCKCYCLES(2,0x80036FA4);
	goto ZZ_36FA4;
ZZ_395A8_84:
	A2 = V0;
	ZZ_CLOCKCYCLES(1,0x80039630);
ZZ_395A8_88:
	V0 = EMU_ReadU32(S0 + 168); //+ 0xA8
	V1 = 0xFFFD0000;
	V1 |= 0xFFFF;
	V0 &= V1;
	EMU_Write32(S0 + 168,V0); //+ 0xA8
	V0 = S1 >> 12;
	V0 &= 0x3F;
	V1 = 0x1F;
	if (V0 != V1)
	{
		A0 = V0;
		ZZ_CLOCKCYCLES(10,0x8003966C);
		goto ZZ_395A8_C4;
	}
	A0 = V0;
	V0 = EMU_ReadU32(S0 + 188); //+ 0xBC
	V0 -= 4;
	EMU_Write32(S0 + 188,V0); //+ 0xBC
	ZZ_CLOCKCYCLES(15,0x80039678);
	goto ZZ_395A8_D0;
ZZ_395A8_C4:
	V0 = A0 << 2;
	V0 += 64;
	V0 += S0;
	ZZ_CLOCKCYCLES(3,0x80039678);
ZZ_395A8_D0:
	V0 = EMU_ReadU32(V0);
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x800396F0);
		goto ZZ_395A8_148;
	}
	if (!S2)
	{
		ZZ_CLOCKCYCLES(6,0x800396F0);
		goto ZZ_395A8_148;
	}
	if (!A2)
	{
		V0 = S1 >> 18;
		ZZ_CLOCKCYCLES(8,0x800396F0);
		goto ZZ_395A8_148;
	}
	V0 = S1 >> 18;
	A3 = V0 & 0x7;
	if (!A3)
	{
		A0 = R0;
		ZZ_CLOCKCYCLES(11,0x800396D0);
		goto ZZ_395A8_128;
	}
	A0 = R0;
	A1 = SP + 24;
	ZZ_CLOCKCYCLES(12,0x800396A8);
ZZ_395A8_100:
	V1 = EMU_ReadU32(S0 + 188); //+ 0xBC
	V0 = A0 - A3;
	V0 <<= 2;
	V0 += V1;
	V0 = EMU_ReadU32(V0);
	A0 += 1;
	EMU_Write32(A1,V0);
	V0 = (int32_t)A0 < (int32_t)A3;
	if (V0)
	{
		A1 += 4;
		ZZ_CLOCKCYCLES(10,0x800396A8);
		goto ZZ_395A8_100;
	}
	A1 += 4;
	ZZ_CLOCKCYCLES(10,0x800396D0);
ZZ_395A8_128:
	V0 = SP + 24;
	EMU_Write32(SP + 16,V0); //+ 0x10
	A2 = EMU_ReadU32(A2);
	A0 = S0;
	RA = 0x800396E8; //ZZ_395A8_140
	A1 = S2;
	ZZ_CLOCKCYCLES(6,0x8001CD48);
	goto ZZ_1CD48;
ZZ_395A8_140:
	ZZ_CLOCKCYCLES(2,0x800396F4);
	goto ZZ_395A8_14C;
ZZ_395A8_148:
	EMU_Write32(S0 + 212,R0); //+ 0xD4
	ZZ_CLOCKCYCLES(1,0x800396F4);
ZZ_395A8_14C:
	V0 = EMU_ReadU32(S0 + 168); //+ 0xA8
	V1 = 0x20000;
	V0 &= V1;
	if (V0)
	{
		V0 = S3 & 0x2;
		ZZ_CLOCKCYCLES(5,0x80039720);
		goto ZZ_395A8_178;
	}
	V0 = S3 & 0x2;
	V1 = EMU_ReadU32(S0 + 188); //+ 0xBC
	V0 = S1 >> 16;
	V0 &= 0x1C;
	V1 = V1 - V0;
	EMU_Write32(S0 + 188,V1); //+ 0xBC
	ZZ_CLOCKCYCLES(11,0x80039738);
	goto ZZ_395A8_190;
ZZ_395A8_178:
	if (V0)
	{
		V0 = -255;
		ZZ_CLOCKCYCLES(2,0x8003973C);
		goto ZZ_395A8_194;
	}
	V0 = -255;
	V0 = EMU_ReadU32(S0 + 188); //+ 0xBC
	V0 -= 4;
	EMU_Write32(S0 + 188,V0); //+ 0xBC
	ZZ_CLOCKCYCLES(6,0x80039738);
ZZ_395A8_190:
	V0 = R0;
	ZZ_CLOCKCYCLES(1,0x8003973C);
ZZ_395A8_194:
	RA = EMU_ReadU32(SP + 112); //+ 0x70
	S3 = EMU_ReadU32(SP + 108); //+ 0x6C
	S2 = EMU_ReadU32(SP + 104); //+ 0x68
	S1 = EMU_ReadU32(SP + 100); //+ 0x64
	S0 = EMU_ReadU32(SP + 96); //+ 0x60
	SP += 120;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x8003A294,ZZ_3A234_60);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800395A8,ZZ_395A8);
ZZ_MARK(0x800395AC);
ZZ_MARK(0x800395B0);
ZZ_MARK(0x800395B4);
ZZ_MARK(0x800395B8);
ZZ_MARK(0x800395BC);
ZZ_MARK(0x800395C0);
ZZ_MARK(0x800395C4);
ZZ_MARK(0x800395C8);
ZZ_MARK(0x800395CC);
ZZ_MARK(0x800395D0);
ZZ_MARK(0x800395D4);
ZZ_MARK(0x800395D8);
ZZ_MARK(0x800395DC);
ZZ_MARK(0x800395E0);
ZZ_MARK(0x800395E4);
ZZ_MARK(0x800395E8);
ZZ_MARK(0x800395EC);
ZZ_MARK(0x800395F0);
ZZ_MARK(0x800395F4);
ZZ_MARK(0x800395F8);
ZZ_MARK(0x800395FC);
ZZ_MARK(0x80039600);
ZZ_MARK(0x80039604);
ZZ_MARK(0x80039608);
ZZ_MARK(0x8003960C);
ZZ_MARK(0x80039610);
ZZ_MARK_TARGET(0x80039614,ZZ_395A8_6C);
ZZ_MARK(0x80039618);
ZZ_MARK(0x8003961C);
ZZ_MARK(0x80039620);
ZZ_MARK_TARGET(0x80039624,ZZ_395A8_7C);
ZZ_MARK(0x80039628);
ZZ_MARK_TARGET(0x8003962C,ZZ_395A8_84);
ZZ_MARK_TARGET(0x80039630,ZZ_395A8_88);
ZZ_MARK(0x80039634);
ZZ_MARK(0x80039638);
ZZ_MARK(0x8003963C);
ZZ_MARK(0x80039640);
ZZ_MARK(0x80039644);
ZZ_MARK(0x80039648);
ZZ_MARK(0x8003964C);
ZZ_MARK(0x80039650);
ZZ_MARK(0x80039654);
ZZ_MARK(0x80039658);
ZZ_MARK(0x8003965C);
ZZ_MARK(0x80039660);
ZZ_MARK(0x80039664);
ZZ_MARK(0x80039668);
ZZ_MARK_TARGET(0x8003966C,ZZ_395A8_C4);
ZZ_MARK(0x80039670);
ZZ_MARK(0x80039674);
ZZ_MARK_TARGET(0x80039678,ZZ_395A8_D0);
ZZ_MARK(0x8003967C);
ZZ_MARK(0x80039680);
ZZ_MARK(0x80039684);
ZZ_MARK(0x80039688);
ZZ_MARK(0x8003968C);
ZZ_MARK(0x80039690);
ZZ_MARK(0x80039694);
ZZ_MARK(0x80039698);
ZZ_MARK(0x8003969C);
ZZ_MARK(0x800396A0);
ZZ_MARK(0x800396A4);
ZZ_MARK_TARGET(0x800396A8,ZZ_395A8_100);
ZZ_MARK(0x800396AC);
ZZ_MARK(0x800396B0);
ZZ_MARK(0x800396B4);
ZZ_MARK(0x800396B8);
ZZ_MARK(0x800396BC);
ZZ_MARK(0x800396C0);
ZZ_MARK(0x800396C4);
ZZ_MARK(0x800396C8);
ZZ_MARK(0x800396CC);
ZZ_MARK_TARGET(0x800396D0,ZZ_395A8_128);
ZZ_MARK(0x800396D4);
ZZ_MARK(0x800396D8);
ZZ_MARK(0x800396DC);
ZZ_MARK(0x800396E0);
ZZ_MARK(0x800396E4);
ZZ_MARK_TARGET(0x800396E8,ZZ_395A8_140);
ZZ_MARK(0x800396EC);
ZZ_MARK_TARGET(0x800396F0,ZZ_395A8_148);
ZZ_MARK_TARGET(0x800396F4,ZZ_395A8_14C);
ZZ_MARK(0x800396F8);
ZZ_MARK(0x800396FC);
ZZ_MARK(0x80039700);
ZZ_MARK(0x80039704);
ZZ_MARK(0x80039708);
ZZ_MARK(0x8003970C);
ZZ_MARK(0x80039710);
ZZ_MARK(0x80039714);
ZZ_MARK(0x80039718);
ZZ_MARK(0x8003971C);
ZZ_MARK_TARGET(0x80039720,ZZ_395A8_178);
ZZ_MARK(0x80039724);
ZZ_MARK(0x80039728);
ZZ_MARK(0x8003972C);
ZZ_MARK(0x80039730);
ZZ_MARK(0x80039734);
ZZ_MARK_TARGET(0x80039738,ZZ_395A8_190);
ZZ_MARK_TARGET(0x8003973C,ZZ_395A8_194);
ZZ_MARK(0x80039740);
ZZ_MARK(0x80039744);
ZZ_MARK(0x80039748);
ZZ_MARK(0x8003974C);
ZZ_MARK(0x80039750);
ZZ_MARK(0x80039754);
ZZ_MARK(0x80039758);
