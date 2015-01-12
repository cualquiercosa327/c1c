#ifdef ZZ_INCLUDE_CODE
ZZ_55410:
	SP -= 72;
	A3 = A0;
	V0 = A3 << 16;
	V1 = 0x80070000;
	V1 -= 15268;
	V0 = (int32_t)V0 >> 14;
	EMU_Write32(SP + 52,S3); //+ 0x34
	S3 = V0 + V1;
	V1 = A1 << 16;
	V1 = (int32_t)V1 >> 16;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 = V0 - V1;
	EMU_Write32(SP + 48,S2); //+ 0x30
	S2 = V0 << 4;
	EMU_Write32(SP + 64,RA); //+ 0x40
	EMU_Write32(SP + 60,S5); //+ 0x3C
	EMU_Write32(SP + 56,S4); //+ 0x38
	EMU_Write32(SP + 44,S1); //+ 0x2C
	EMU_Write32(SP + 40,S0); //+ 0x28
	V1 = EMU_ReadU32(S3);
	S5 = A3;
	S0 = V1 + S2;
	V0 = EMU_ReadU32(S0 + 160); //+ 0xA0
	S4 = A1;
	V0 -= 1;
	if ((int32_t)V0 >= 0)
	{
		EMU_Write32(S0 + 160,V0); //+ 0xA0
		ZZ_CLOCKCYCLES(29,0x80055490);
		goto ZZ_55410_80;
	}
	EMU_Write32(S0 + 160,V0); //+ 0xA0
	V0 = EMU_ReadU32(S3);
	V0 += S2;
	ZZ_CLOCKCYCLES(32,0x800556DC);
	goto ZZ_55410_2CC;
ZZ_55410_80:
	A2 = EMU_ReadS16(S0 + 76); //+ 0x4C
	if ((int32_t)A2 <= 0)
	{
		V1 = A2;
		ZZ_CLOCKCYCLES(4,0x80055548);
		goto ZZ_55410_138;
	}
	V1 = A2;
	EMU_SDivide(V0,A2);
	if (A2)
	{
		ZZ_CLOCKCYCLES(7,0x800554B0);
		goto ZZ_55410_A0;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(8,0x800554B0);
ZZ_55410_A0:
	AT = -1;
	if (A2 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x800554C8);
		goto ZZ_55410_B8;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x800554C8);
		goto ZZ_55410_B8;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x800554C8);
ZZ_55410_B8:
	V0 = HI;
	if (V0)
	{
		A0 = S4 << 8;
		ZZ_CLOCKCYCLES(4,0x800556F0);
		goto ZZ_55410_2E0;
	}
	A0 = S4 << 8;
	V0 = EMU_ReadU16(S0 + 74); //+ 0x4A
	V0 -= 1;
	EMU_Write16(S0 + 74,V0); //+ 0x4A
	V0 <<= 16;
	if ((int32_t)V0 < 0)
	{
		V0 = A1 << 8;
		ZZ_CLOCKCYCLES(11,0x8005564C);
		goto ZZ_55410_23C;
	}
	V0 = A1 << 8;
	V0 |= A3;
	V0 <<= 16;
	S1 = (int32_t)V0 >> 16;
	A0 = S1;
	A1 = SP + 16;
	RA = 0x80055510; //ZZ_55410_100
	A2 = SP + 18;
	ZZ_CLOCKCYCLES(18,0x80059DDC);
	goto ZZ_59DDC;
ZZ_55410_100:
	A1 = EMU_ReadU16(SP + 16); //+ 0x10
	V1 = EMU_ReadS16(S0 + 74); //+ 0x4A
	V0 = A1 & 0xFFFF;
	A0 = V0 + 1;
	V0 += V1;
	V0 = (int32_t)V0 < (int32_t)A0;
	if (V0)
	{
		A0 = S1;
		ZZ_CLOCKCYCLES(8,0x80055688);
		goto ZZ_55410_278;
	}
	A0 = S1;
	A1 += 1;
	A1 &= 0xFFFF;
	A2 = EMU_ReadU16(SP + 18); //+ 0x12
	A3 = 1;
	A2 += 1;
	ZZ_CLOCKCYCLES(14,0x8005563C);
	goto ZZ_55410_22C;
ZZ_55410_138:
	if ((int32_t)A2 >= 0)
	{
		A0 = S4 << 8;
		ZZ_CLOCKCYCLES(2,0x800556F0);
		goto ZZ_55410_2E0;
	}
	A0 = S4 << 8;
	V0 = EMU_ReadU16(S0 + 74); //+ 0x4A
	V0 += V1;
	EMU_Write16(S0 + 74,V0); //+ 0x4A
	V0 <<= 16;
	if ((int32_t)V0 < 0)
	{
		V0 = A1 << 8;
		ZZ_CLOCKCYCLES(9,0x8005564C);
		goto ZZ_55410_23C;
	}
	V0 = A1 << 8;
	V0 |= A3;
	V0 <<= 16;
	S1 = (int32_t)V0 >> 16;
	A0 = S1;
	A1 = SP + 16;
	RA = 0x80055588; //ZZ_55410_178
	A2 = SP + 18;
	ZZ_CLOCKCYCLES(16,0x80059DDC);
	goto ZZ_59DDC;
ZZ_55410_178:
	V0 = EMU_ReadU16(SP + 16); //+ 0x10
	V1 = EMU_ReadS16(S0 + 76); //+ 0x4C
	V0 = V0 - V1;
	V0 = (int32_t)V0 < 127;
	if (V0)
	{
		ZZ_CLOCKCYCLES(7,0x800555E8);
		goto ZZ_55410_1D8;
	}
	V0 = EMU_ReadU16(SP + 18); //+ 0x12
	V0 = V0 - V1;
	V0 = (int32_t)V0 < 127;
	if (V0)
	{
		A0 = S1;
		ZZ_CLOCKCYCLES(13,0x800555E8);
		goto ZZ_55410_1D8;
	}
	A0 = S1;
	A1 = 127;
	A2 = 127;
	RA = 0x800555CC; //ZZ_55410_1BC
	A3 = 1;
	ZZ_CLOCKCYCLES(17,0x800598A0);
	goto ZZ_598A0;
ZZ_55410_1BC:
	V0 = EMU_ReadU32(S3);
	V0 += S2;
	V1 = EMU_ReadU32(V0 + 152); //+ 0x98
	A0 = -17;
	V1 &= A0;
	EMU_Write32(V0 + 152,V1); //+ 0x98
	ZZ_CLOCKCYCLES(7,0x800555E8);
ZZ_55410_1D8:
	V1 = EMU_ReadU32(S0 + 156); //+ 0x9C
	V0 = EMU_ReadU32(S0 + 160); //+ 0xA0
	A0 = EMU_ReadS16(S0 + 76); //+ 0x4C
	V1 = V1 - V0;
	V0 = -A0;
	EMU_SMultiply(V1,V0);
	V0 = EMU_ReadS16(S0 + 72); //+ 0x48
	T0 = LO;
	V0 = (int32_t)T0 < (int32_t)V0;
	if (!V0)
	{
		V1 = A0;
		ZZ_CLOCKCYCLES(11,0x80055688);
		goto ZZ_55410_278;
	}
	V1 = A0;
	A0 = S4 << 8;
	A0 |= S5;
	A0 <<= 16;
	A0 = (int32_t)A0 >> 16;
	A3 = 1;
	A1 = EMU_ReadU16(SP + 16); //+ 0x10
	A2 = EMU_ReadU16(SP + 18); //+ 0x12
	A1 = A1 - V1;
	A1 &= 0xFFFF;
	A2 = A2 - V1;
	ZZ_CLOCKCYCLES(21,0x8005563C);
ZZ_55410_22C:
	RA = 0x80055644; //ZZ_55410_234
	A2 &= 0xFFFF;
	ZZ_CLOCKCYCLES(2,0x800598A0);
	goto ZZ_598A0;
ZZ_55410_234:
	ZZ_CLOCKCYCLES(2,0x80055688);
	goto ZZ_55410_278;
ZZ_55410_23C:
	A0 = A1 << 8;
	A0 |= A3;
	A0 <<= 16;
	A0 = (int32_t)A0 >> 16;
	A1 = 127;
	A2 = 127;
	RA = 0x8005566C; //ZZ_55410_25C
	A3 = 1;
	ZZ_CLOCKCYCLES(8,0x800598A0);
	goto ZZ_598A0;
ZZ_55410_25C:
	V1 = EMU_ReadU32(S3);
	V1 += S2;
	V0 = EMU_ReadU32(V1 + 152); //+ 0x98
	A0 = -17;
	V0 &= A0;
	EMU_Write32(V1 + 152,V0); //+ 0x98
	ZZ_CLOCKCYCLES(7,0x80055688);
ZZ_55410_278:
	V0 = EMU_ReadU32(S0 + 160); //+ 0xA0
	if (!V0)
	{
		A0 = S5 << 16;
		ZZ_CLOCKCYCLES(4,0x800556AC);
		goto ZZ_55410_29C;
	}
	A0 = S5 << 16;
	V0 = EMU_ReadS16(S0 + 74); //+ 0x4A
	if ((int32_t)V0 > 0)
	{
		A0 = S4 << 8;
		ZZ_CLOCKCYCLES(8,0x800556F0);
		goto ZZ_55410_2E0;
	}
	A0 = S4 << 8;
	A0 = S5 << 16;
	ZZ_CLOCKCYCLES(9,0x800556AC);
ZZ_55410_29C:
	A0 = (int32_t)A0 >> 14;
	V1 = S4 << 16;
	V1 = (int32_t)V1 >> 16;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 = V0 - V1;
	AT = 0x80070000;
	AT += A0;
	V1 = EMU_ReadU32(AT - 15268); //+ 0xFFFFC45C
	V0 <<= 4;
	V0 += V1;
	ZZ_CLOCKCYCLES(12,0x800556DC);
ZZ_55410_2CC:
	V1 = EMU_ReadU32(V0 + 152); //+ 0x98
	A0 = -17;
	V1 &= A0;
	EMU_Write32(V0 + 152,V1); //+ 0x98
	A0 = S4 << 8;
	ZZ_CLOCKCYCLES(5,0x800556F0);
ZZ_55410_2E0:
	A0 |= S5;
	A0 <<= 16;
	A0 = (int32_t)A0 >> 16;
	A1 = S0 + 92;
	RA = 0x80055708; //ZZ_55410_2F8
	A2 = S0 + 94;
	ZZ_CLOCKCYCLES(6,0x80059DDC);
	goto ZZ_59DDC;
ZZ_55410_2F8:
	RA = EMU_ReadU32(SP + 64); //+ 0x40
	S5 = EMU_ReadU32(SP + 60); //+ 0x3C
	S4 = EMU_ReadU32(SP + 56); //+ 0x38
	S3 = EMU_ReadU32(SP + 52); //+ 0x34
	S2 = EMU_ReadU32(SP + 48); //+ 0x30
	S1 = EMU_ReadU32(SP + 44); //+ 0x2C
	S0 = EMU_ReadU32(SP + 40); //+ 0x28
	SP += 72;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(10);
	ZZ_JUMPREGISTER(0x8005529C,ZZ_5519C_100);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80055410,ZZ_55410);
ZZ_MARK(0x80055414);
ZZ_MARK(0x80055418);
ZZ_MARK(0x8005541C);
ZZ_MARK(0x80055420);
ZZ_MARK(0x80055424);
ZZ_MARK(0x80055428);
ZZ_MARK(0x8005542C);
ZZ_MARK(0x80055430);
ZZ_MARK(0x80055434);
ZZ_MARK(0x80055438);
ZZ_MARK(0x8005543C);
ZZ_MARK(0x80055440);
ZZ_MARK(0x80055444);
ZZ_MARK(0x80055448);
ZZ_MARK(0x8005544C);
ZZ_MARK(0x80055450);
ZZ_MARK(0x80055454);
ZZ_MARK(0x80055458);
ZZ_MARK(0x8005545C);
ZZ_MARK(0x80055460);
ZZ_MARK(0x80055464);
ZZ_MARK(0x80055468);
ZZ_MARK(0x8005546C);
ZZ_MARK(0x80055470);
ZZ_MARK(0x80055474);
ZZ_MARK(0x80055478);
ZZ_MARK(0x8005547C);
ZZ_MARK(0x80055480);
ZZ_MARK(0x80055484);
ZZ_MARK(0x80055488);
ZZ_MARK(0x8005548C);
ZZ_MARK_TARGET(0x80055490,ZZ_55410_80);
ZZ_MARK(0x80055494);
ZZ_MARK(0x80055498);
ZZ_MARK(0x8005549C);
ZZ_MARK(0x800554A0);
ZZ_MARK(0x800554A4);
ZZ_MARK(0x800554A8);
ZZ_MARK(0x800554AC);
ZZ_MARK_TARGET(0x800554B0,ZZ_55410_A0);
ZZ_MARK(0x800554B4);
ZZ_MARK(0x800554B8);
ZZ_MARK(0x800554BC);
ZZ_MARK(0x800554C0);
ZZ_MARK(0x800554C4);
ZZ_MARK_TARGET(0x800554C8,ZZ_55410_B8);
ZZ_MARK(0x800554CC);
ZZ_MARK(0x800554D0);
ZZ_MARK(0x800554D4);
ZZ_MARK(0x800554D8);
ZZ_MARK(0x800554DC);
ZZ_MARK(0x800554E0);
ZZ_MARK(0x800554E4);
ZZ_MARK(0x800554E8);
ZZ_MARK(0x800554EC);
ZZ_MARK(0x800554F0);
ZZ_MARK(0x800554F4);
ZZ_MARK(0x800554F8);
ZZ_MARK(0x800554FC);
ZZ_MARK(0x80055500);
ZZ_MARK(0x80055504);
ZZ_MARK(0x80055508);
ZZ_MARK(0x8005550C);
ZZ_MARK_TARGET(0x80055510,ZZ_55410_100);
ZZ_MARK(0x80055514);
ZZ_MARK(0x80055518);
ZZ_MARK(0x8005551C);
ZZ_MARK(0x80055520);
ZZ_MARK(0x80055524);
ZZ_MARK(0x80055528);
ZZ_MARK(0x8005552C);
ZZ_MARK(0x80055530);
ZZ_MARK(0x80055534);
ZZ_MARK(0x80055538);
ZZ_MARK(0x8005553C);
ZZ_MARK(0x80055540);
ZZ_MARK(0x80055544);
ZZ_MARK_TARGET(0x80055548,ZZ_55410_138);
ZZ_MARK(0x8005554C);
ZZ_MARK(0x80055550);
ZZ_MARK(0x80055554);
ZZ_MARK(0x80055558);
ZZ_MARK(0x8005555C);
ZZ_MARK(0x80055560);
ZZ_MARK(0x80055564);
ZZ_MARK(0x80055568);
ZZ_MARK(0x8005556C);
ZZ_MARK(0x80055570);
ZZ_MARK(0x80055574);
ZZ_MARK(0x80055578);
ZZ_MARK(0x8005557C);
ZZ_MARK(0x80055580);
ZZ_MARK(0x80055584);
ZZ_MARK_TARGET(0x80055588,ZZ_55410_178);
ZZ_MARK(0x8005558C);
ZZ_MARK(0x80055590);
ZZ_MARK(0x80055594);
ZZ_MARK(0x80055598);
ZZ_MARK(0x8005559C);
ZZ_MARK(0x800555A0);
ZZ_MARK(0x800555A4);
ZZ_MARK(0x800555A8);
ZZ_MARK(0x800555AC);
ZZ_MARK(0x800555B0);
ZZ_MARK(0x800555B4);
ZZ_MARK(0x800555B8);
ZZ_MARK(0x800555BC);
ZZ_MARK(0x800555C0);
ZZ_MARK(0x800555C4);
ZZ_MARK(0x800555C8);
ZZ_MARK_TARGET(0x800555CC,ZZ_55410_1BC);
ZZ_MARK(0x800555D0);
ZZ_MARK(0x800555D4);
ZZ_MARK(0x800555D8);
ZZ_MARK(0x800555DC);
ZZ_MARK(0x800555E0);
ZZ_MARK(0x800555E4);
ZZ_MARK_TARGET(0x800555E8,ZZ_55410_1D8);
ZZ_MARK(0x800555EC);
ZZ_MARK(0x800555F0);
ZZ_MARK(0x800555F4);
ZZ_MARK(0x800555F8);
ZZ_MARK(0x800555FC);
ZZ_MARK(0x80055600);
ZZ_MARK(0x80055604);
ZZ_MARK(0x80055608);
ZZ_MARK(0x8005560C);
ZZ_MARK(0x80055610);
ZZ_MARK(0x80055614);
ZZ_MARK(0x80055618);
ZZ_MARK(0x8005561C);
ZZ_MARK(0x80055620);
ZZ_MARK(0x80055624);
ZZ_MARK(0x80055628);
ZZ_MARK(0x8005562C);
ZZ_MARK(0x80055630);
ZZ_MARK(0x80055634);
ZZ_MARK(0x80055638);
ZZ_MARK_TARGET(0x8005563C,ZZ_55410_22C);
ZZ_MARK(0x80055640);
ZZ_MARK_TARGET(0x80055644,ZZ_55410_234);
ZZ_MARK(0x80055648);
ZZ_MARK_TARGET(0x8005564C,ZZ_55410_23C);
ZZ_MARK(0x80055650);
ZZ_MARK(0x80055654);
ZZ_MARK(0x80055658);
ZZ_MARK(0x8005565C);
ZZ_MARK(0x80055660);
ZZ_MARK(0x80055664);
ZZ_MARK(0x80055668);
ZZ_MARK_TARGET(0x8005566C,ZZ_55410_25C);
ZZ_MARK(0x80055670);
ZZ_MARK(0x80055674);
ZZ_MARK(0x80055678);
ZZ_MARK(0x8005567C);
ZZ_MARK(0x80055680);
ZZ_MARK(0x80055684);
ZZ_MARK_TARGET(0x80055688,ZZ_55410_278);
ZZ_MARK(0x8005568C);
ZZ_MARK(0x80055690);
ZZ_MARK(0x80055694);
ZZ_MARK(0x80055698);
ZZ_MARK(0x8005569C);
ZZ_MARK(0x800556A0);
ZZ_MARK(0x800556A4);
ZZ_MARK(0x800556A8);
ZZ_MARK_TARGET(0x800556AC,ZZ_55410_29C);
ZZ_MARK(0x800556B0);
ZZ_MARK(0x800556B4);
ZZ_MARK(0x800556B8);
ZZ_MARK(0x800556BC);
ZZ_MARK(0x800556C0);
ZZ_MARK(0x800556C4);
ZZ_MARK(0x800556C8);
ZZ_MARK(0x800556CC);
ZZ_MARK(0x800556D0);
ZZ_MARK(0x800556D4);
ZZ_MARK(0x800556D8);
ZZ_MARK_TARGET(0x800556DC,ZZ_55410_2CC);
ZZ_MARK(0x800556E0);
ZZ_MARK(0x800556E4);
ZZ_MARK(0x800556E8);
ZZ_MARK(0x800556EC);
ZZ_MARK_TARGET(0x800556F0,ZZ_55410_2E0);
ZZ_MARK(0x800556F4);
ZZ_MARK(0x800556F8);
ZZ_MARK(0x800556FC);
ZZ_MARK(0x80055700);
ZZ_MARK(0x80055704);
ZZ_MARK_TARGET(0x80055708,ZZ_55410_2F8);
ZZ_MARK(0x8005570C);
ZZ_MARK(0x80055710);
ZZ_MARK(0x80055714);
ZZ_MARK(0x80055718);
ZZ_MARK(0x8005571C);
ZZ_MARK(0x80055720);
ZZ_MARK(0x80055724);
ZZ_MARK(0x80055728);
ZZ_MARK(0x8005572C);
