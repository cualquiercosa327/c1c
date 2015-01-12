#ifdef ZZ_INCLUDE_CODE
ZZ_52440:
	SP -= 32;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = -1;
	V1 = R0;
	A1 = 1;
	EMU_Write32(SP + 28,RA); //+ 0x1C
	EMU_Write32(SP + 24,S2); //+ 0x18
	A0 = EMU_ReadU32(S0);
	V0 = A1 << V1;
	ZZ_CLOCKCYCLES(11,0x8005246C);
ZZ_52440_2C:
	V0 &= A0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(3,0x800524FC);
		goto ZZ_52440_BC;
	}
	V1 += 1;
	V0 = (int32_t)V1 < 24;
	if (V0)
	{
		V0 = A1 << V1;
		ZZ_CLOCKCYCLES(7,0x8005246C);
		goto ZZ_52440_2C;
	}
	V0 = A1 << V1;
	ZZ_CLOCKCYCLES(7,0x80052488);
ZZ_52440_48:
	V0 = -1;
	if (S1 == V0)
	{
		A2 = R0;
		ZZ_CLOCKCYCLES(3,0x8005280C);
		goto ZZ_52440_3CC;
	}
	A2 = R0;
	V1 = S1 << 4;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5528); //+ 0xFFFFEA68
	T0 = S1 << 1;
	V1 += V0;
	A1 = EMU_ReadU16(V1);
	A3 = EMU_ReadU16(V1 + 2); //+ 0x2
	V0 = A1 & 0x8000;
	if (!V0)
	{
		S2 = S1 << 3;
		ZZ_CLOCKCYCLES(13,0x80052588);
		goto ZZ_52440_148;
	}
	S2 = S1 << 3;
	V1 = A1 & 0xF000;
	V0 = 0xB000;
	if (V1 == V0)
	{
		V0 = (int32_t)V0 < (int32_t)V1;
		ZZ_CLOCKCYCLES(17,0x80052568);
		goto ZZ_52440_128;
	}
	V0 = (int32_t)V0 < (int32_t)V1;
	if (V0)
	{
		V0 = 0xD000;
		ZZ_CLOCKCYCLES(19,0x80052514);
		goto ZZ_52440_D4;
	}
	V0 = 0xD000;
	V0 = 0x9000;
	if (V1 == V0)
	{
		V0 = (int32_t)V0 < (int32_t)V1;
		ZZ_CLOCKCYCLES(22,0x80052558);
		goto ZZ_52440_118;
	}
	V0 = (int32_t)V0 < (int32_t)V1;
	if (V0)
	{
		V0 = 0xA000;
		ZZ_CLOCKCYCLES(24,0x80052504);
		goto ZZ_52440_C4;
	}
	V0 = 0xA000;
	V0 = 0x8000;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(27,0x80052550);
		goto ZZ_52440_110;
	}
	A1 &= 0xFFF;
	ZZ_CLOCKCYCLES(29,0x80052588);
	goto ZZ_52440_148;
ZZ_52440_BC:
	S1 = V1;
	ZZ_CLOCKCYCLES(2,0x80052488);
	goto ZZ_52440_48;
ZZ_52440_C4:
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(2,0x80052560);
		goto ZZ_52440_120;
	}
	A1 &= 0xFFF;
	ZZ_CLOCKCYCLES(4,0x80052588);
	goto ZZ_52440_148;
ZZ_52440_D4:
	if (V1 == V0)
	{
		V0 = (int32_t)V0 < (int32_t)V1;
		ZZ_CLOCKCYCLES(2,0x80052578);
		goto ZZ_52440_138;
	}
	V0 = (int32_t)V0 < (int32_t)V1;
	if (V0)
	{
		V0 = 0xE000;
		ZZ_CLOCKCYCLES(4,0x80052538);
		goto ZZ_52440_F8;
	}
	V0 = 0xE000;
	V0 = 0xC000;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(7,0x80052570);
		goto ZZ_52440_130;
	}
	A1 &= 0xFFF;
	ZZ_CLOCKCYCLES(9,0x80052588);
	goto ZZ_52440_148;
ZZ_52440_F8:
	if (V1 == V0)
	{
		V0 = 0xF000;
		ZZ_CLOCKCYCLES(2,0x80052580);
		goto ZZ_52440_140;
	}
	V0 = 0xF000;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(4,0x80052580);
		goto ZZ_52440_140;
	}
	A1 &= 0xFFF;
	ZZ_CLOCKCYCLES(6,0x80052588);
	goto ZZ_52440_148;
ZZ_52440_110:
	A2 = 1;
	ZZ_CLOCKCYCLES(2,0x80052584);
	goto ZZ_52440_144;
ZZ_52440_118:
	A2 = 2;
	ZZ_CLOCKCYCLES(2,0x80052584);
	goto ZZ_52440_144;
ZZ_52440_120:
	A2 = 3;
	ZZ_CLOCKCYCLES(2,0x80052584);
	goto ZZ_52440_144;
ZZ_52440_128:
	A2 = 4;
	ZZ_CLOCKCYCLES(2,0x80052584);
	goto ZZ_52440_144;
ZZ_52440_130:
	A2 = 5;
	ZZ_CLOCKCYCLES(2,0x80052584);
	goto ZZ_52440_144;
ZZ_52440_138:
	A2 = 6;
	ZZ_CLOCKCYCLES(2,0x80052584);
	goto ZZ_52440_144;
ZZ_52440_140:
	A2 = 7;
	ZZ_CLOCKCYCLES(1,0x80052584);
ZZ_52440_144:
	A1 &= 0xFFF;
	ZZ_CLOCKCYCLES(1,0x80052588);
ZZ_52440_148:
	V0 = A3 & 0x8000;
	if (!V0)
	{
		A0 = R0;
		ZZ_CLOCKCYCLES(3,0x80052658);
		goto ZZ_52440_218;
	}
	A0 = R0;
	V1 = A3 & 0xF000;
	V0 = 0xB000;
	if (V1 == V0)
	{
		V0 = (int32_t)V0 < (int32_t)V1;
		ZZ_CLOCKCYCLES(7,0x80052638);
		goto ZZ_52440_1F8;
	}
	V0 = (int32_t)V0 < (int32_t)V1;
	if (V0)
	{
		V0 = 0xD000;
		ZZ_CLOCKCYCLES(9,0x800525E4);
		goto ZZ_52440_1A4;
	}
	V0 = 0xD000;
	V0 = 0x9000;
	if (V1 == V0)
	{
		V0 = (int32_t)V0 < (int32_t)V1;
		ZZ_CLOCKCYCLES(12,0x80052628);
		goto ZZ_52440_1E8;
	}
	V0 = (int32_t)V0 < (int32_t)V1;
	if (V0)
	{
		V0 = 0xA000;
		ZZ_CLOCKCYCLES(14,0x800525D4);
		goto ZZ_52440_194;
	}
	V0 = 0xA000;
	V0 = 0x8000;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(17,0x80052620);
		goto ZZ_52440_1E0;
	}
	A3 &= 0xFFF;
	ZZ_CLOCKCYCLES(19,0x80052658);
	goto ZZ_52440_218;
ZZ_52440_194:
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(2,0x80052630);
		goto ZZ_52440_1F0;
	}
	A3 &= 0xFFF;
	ZZ_CLOCKCYCLES(4,0x80052658);
	goto ZZ_52440_218;
ZZ_52440_1A4:
	if (V1 == V0)
	{
		V0 = (int32_t)V0 < (int32_t)V1;
		ZZ_CLOCKCYCLES(2,0x80052648);
		goto ZZ_52440_208;
	}
	V0 = (int32_t)V0 < (int32_t)V1;
	if (V0)
	{
		V0 = 0xE000;
		ZZ_CLOCKCYCLES(4,0x80052608);
		goto ZZ_52440_1C8;
	}
	V0 = 0xE000;
	V0 = 0xC000;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(7,0x80052640);
		goto ZZ_52440_200;
	}
	A3 &= 0xFFF;
	ZZ_CLOCKCYCLES(9,0x80052658);
	goto ZZ_52440_218;
ZZ_52440_1C8:
	if (V1 == V0)
	{
		V0 = 0xF000;
		ZZ_CLOCKCYCLES(2,0x80052650);
		goto ZZ_52440_210;
	}
	V0 = 0xF000;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(4,0x80052650);
		goto ZZ_52440_210;
	}
	A3 &= 0xFFF;
	ZZ_CLOCKCYCLES(6,0x80052658);
	goto ZZ_52440_218;
ZZ_52440_1E0:
	A0 = 1;
	ZZ_CLOCKCYCLES(2,0x80052654);
	goto ZZ_52440_214;
ZZ_52440_1E8:
	A0 = 2;
	ZZ_CLOCKCYCLES(2,0x80052654);
	goto ZZ_52440_214;
ZZ_52440_1F0:
	A0 = 3;
	ZZ_CLOCKCYCLES(2,0x80052654);
	goto ZZ_52440_214;
ZZ_52440_1F8:
	A0 = 4;
	ZZ_CLOCKCYCLES(2,0x80052654);
	goto ZZ_52440_214;
ZZ_52440_200:
	A0 = 5;
	ZZ_CLOCKCYCLES(2,0x80052654);
	goto ZZ_52440_214;
ZZ_52440_208:
	A0 = 6;
	ZZ_CLOCKCYCLES(2,0x80052654);
	goto ZZ_52440_214;
ZZ_52440_210:
	A0 = 7;
	ZZ_CLOCKCYCLES(1,0x80052654);
ZZ_52440_214:
	A3 &= 0xFFF;
	ZZ_CLOCKCYCLES(1,0x80052658);
ZZ_52440_218:
	V1 = A1 & 0xFFFF;
	V0 = V1 < 16384;
	if (V0)
	{
		V0 = 0x8000;
		ZZ_CLOCKCYCLES(4,0x80052674);
		goto ZZ_52440_234;
	}
	V0 = 0x8000;
	V0 = V1 - V0;
	EMU_Write16(S0 + 8,V0); //+ 0x8
	ZZ_CLOCKCYCLES(7,0x80052678);
	goto ZZ_52440_238;
ZZ_52440_234:
	EMU_Write16(S0 + 8,A1); //+ 0x8
	ZZ_CLOCKCYCLES(1,0x80052678);
ZZ_52440_238:
	V1 = A3 & 0xFFFF;
	V0 = V1 < 16384;
	if (V0)
	{
		V0 = 0x8000;
		ZZ_CLOCKCYCLES(4,0x80052694);
		goto ZZ_52440_254;
	}
	V0 = 0x8000;
	V0 = V1 - V0;
	EMU_Write16(S0 + 10,V0); //+ 0xA
	ZZ_CLOCKCYCLES(7,0x80052698);
	goto ZZ_52440_258;
ZZ_52440_254:
	EMU_Write16(S0 + 10,A3); //+ 0xA
	ZZ_CLOCKCYCLES(1,0x80052698);
ZZ_52440_258:
	EMU_Write16(S0 + 14,A0); //+ 0xE
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 5528); //+ 0xFFFFEA68
	V0 = T0 << 1;
	EMU_Write16(S0 + 12,A2); //+ 0xC
	V0 += A0;
	V1 = EMU_ReadU16(V0 + 512); //+ 0x200
	EMU_Write16(S0 + 16,V1); //+ 0x10
	V0 = EMU_ReadU16(V0 + 514); //+ 0x202
	EMU_Write16(S0 + 18,V0); //+ 0x12
	V0 = S2 << 1;
	V0 += A0;
	V0 = EMU_ReadU16(V0 + 4); //+ 0x4
	EMU_Write16(S0 + 20,V0); //+ 0x14
	V0 = S1 << 1;
	A1 = 0x80060000;
	A1 += V0;
	A1 = EMU_ReadU16(A1 - 5356); //+ 0xFFFFEB14
	A2 = EMU_ReadU16(S0 + 20); //+ 0x14
	A0 = A1 >> 8;
	RA = 0x800526FC; //ZZ_52440_2BC
	A1 &= 0xFF;
	ZZ_CLOCKCYCLES(25,0x80052314);
	goto ZZ_52314;
ZZ_52440_2BC:
	if ((int32_t)V0 < 0)
	{
		ZZ_CLOCKCYCLES(2,0x8005270C);
		goto ZZ_52440_2CC;
	}
	EMU_Write16(S0 + 22,V0); //+ 0x16
	ZZ_CLOCKCYCLES(4,0x80052710);
	goto ZZ_52440_2D0;
ZZ_52440_2CC:
	EMU_Write16(S0 + 22,R0); //+ 0x16
	ZZ_CLOCKCYCLES(1,0x80052710);
ZZ_52440_2D0:
	V0 = S1 << 1;
	AT = 0x80060000;
	AT += V0;
	V0 = EMU_ReadU16(AT - 5356); //+ 0xFFFFEB14
	V1 = S2 << 1;
	EMU_Write16(S0 + 24,V0); //+ 0x18
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5528); //+ 0xFFFFEA68
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 5488); //+ 0xFFFFEA90
	V1 += V0;
	V0 = EMU_ReadU16(V1 + 12); //+ 0xC
	EMU_Write16(S0 + 26,V0); //+ 0x1A
	V0 = EMU_ReadU16(V1 + 6); //+ 0x6
	V0 <<= A0;
	EMU_Write32(S0 + 28,V0); //+ 0x1C
	V0 = EMU_ReadU16(V1 + 14); //+ 0xE
	V0 <<= A0;
	EMU_Write32(S0 + 32,V0); //+ 0x20
	A1 = EMU_ReadU16(V1 + 8); //+ 0x8
	A0 = EMU_ReadU16(V1 + 10); //+ 0xA
	V0 = A1 & 0x8000;
	if (V0)
	{
		V0 = 5;
		ZZ_CLOCKCYCLES(27,0x80052780);
		goto ZZ_52440_340;
	}
	V0 = 5;
	V0 = 1;
	ZZ_CLOCKCYCLES(28,0x80052780);
ZZ_52440_340:
	EMU_Write32(S0 + 36,V0); //+ 0x24
	V1 = A0 & 0xE000;
	V0 = 0xC000;
	if (V1 != V0)
	{
		V0 = 0x8000;
		ZZ_CLOCKCYCLES(5,0x8005279C);
		goto ZZ_52440_35C;
	}
	V0 = 0x8000;
	V0 = 7;
	ZZ_CLOCKCYCLES(7,0x800527B8);
	goto ZZ_52440_378;
ZZ_52440_35C:
	if (V1 != V0)
	{
		V0 = 16384;
		ZZ_CLOCKCYCLES(2,0x800527AC);
		goto ZZ_52440_36C;
	}
	V0 = 16384;
	V0 = 5;
	ZZ_CLOCKCYCLES(4,0x800527B8);
	goto ZZ_52440_378;
ZZ_52440_36C:
	if (V1 != V0)
	{
		V0 = 1;
		ZZ_CLOCKCYCLES(2,0x800527B8);
		goto ZZ_52440_378;
	}
	V0 = 1;
	V0 = 3;
	ZZ_CLOCKCYCLES(3,0x800527B8);
ZZ_52440_378:
	EMU_Write32(S0 + 40,V0); //+ 0x28
	V0 = A0 & 0x20;
	if (V0)
	{
		V0 = 7;
		ZZ_CLOCKCYCLES(4,0x800527CC);
		goto ZZ_52440_38C;
	}
	V0 = 7;
	V0 = 3;
	ZZ_CLOCKCYCLES(5,0x800527CC);
ZZ_52440_38C:
	EMU_Write32(S0 + 44,V0); //+ 0x2C
	V0 = A1 >> 8;
	V0 &= 0x3F;
	EMU_Write16(S0 + 48,V0); //+ 0x30
	V0 = A1 & 0xF0;
	V0 >>= 4;
	EMU_Write16(S0 + 50,V0); //+ 0x32
	V0 = A0 >> 6;
	V0 &= 0x7F;
	EMU_Write16(S0 + 52,V0); //+ 0x34
	V0 = A0 & 0x1F;
	EMU_Write16(S0 + 54,V0); //+ 0x36
	V0 = A1 & 0xF;
	EMU_Write16(S0 + 56,V0); //+ 0x38
	EMU_Write16(S0 + 58,A1); //+ 0x3A
	EMU_Write16(S0 + 60,A0); //+ 0x3C
	ZZ_CLOCKCYCLES(16,0x8005280C);
ZZ_52440_3CC:
	RA = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 32;
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x80032CC8,ZZ_32BE0_E8);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80052440,ZZ_52440);
ZZ_MARK(0x80052444);
ZZ_MARK(0x80052448);
ZZ_MARK(0x8005244C);
ZZ_MARK(0x80052450);
ZZ_MARK(0x80052454);
ZZ_MARK(0x80052458);
ZZ_MARK(0x8005245C);
ZZ_MARK(0x80052460);
ZZ_MARK(0x80052464);
ZZ_MARK(0x80052468);
ZZ_MARK_TARGET(0x8005246C,ZZ_52440_2C);
ZZ_MARK(0x80052470);
ZZ_MARK(0x80052474);
ZZ_MARK(0x80052478);
ZZ_MARK(0x8005247C);
ZZ_MARK(0x80052480);
ZZ_MARK(0x80052484);
ZZ_MARK_TARGET(0x80052488,ZZ_52440_48);
ZZ_MARK(0x8005248C);
ZZ_MARK(0x80052490);
ZZ_MARK(0x80052494);
ZZ_MARK(0x80052498);
ZZ_MARK(0x8005249C);
ZZ_MARK(0x800524A0);
ZZ_MARK(0x800524A4);
ZZ_MARK(0x800524A8);
ZZ_MARK(0x800524AC);
ZZ_MARK(0x800524B0);
ZZ_MARK(0x800524B4);
ZZ_MARK(0x800524B8);
ZZ_MARK(0x800524BC);
ZZ_MARK(0x800524C0);
ZZ_MARK(0x800524C4);
ZZ_MARK(0x800524C8);
ZZ_MARK(0x800524CC);
ZZ_MARK(0x800524D0);
ZZ_MARK(0x800524D4);
ZZ_MARK(0x800524D8);
ZZ_MARK(0x800524DC);
ZZ_MARK(0x800524E0);
ZZ_MARK(0x800524E4);
ZZ_MARK(0x800524E8);
ZZ_MARK(0x800524EC);
ZZ_MARK(0x800524F0);
ZZ_MARK(0x800524F4);
ZZ_MARK(0x800524F8);
ZZ_MARK_TARGET(0x800524FC,ZZ_52440_BC);
ZZ_MARK(0x80052500);
ZZ_MARK_TARGET(0x80052504,ZZ_52440_C4);
ZZ_MARK(0x80052508);
ZZ_MARK(0x8005250C);
ZZ_MARK(0x80052510);
ZZ_MARK_TARGET(0x80052514,ZZ_52440_D4);
ZZ_MARK(0x80052518);
ZZ_MARK(0x8005251C);
ZZ_MARK(0x80052520);
ZZ_MARK(0x80052524);
ZZ_MARK(0x80052528);
ZZ_MARK(0x8005252C);
ZZ_MARK(0x80052530);
ZZ_MARK(0x80052534);
ZZ_MARK_TARGET(0x80052538,ZZ_52440_F8);
ZZ_MARK(0x8005253C);
ZZ_MARK(0x80052540);
ZZ_MARK(0x80052544);
ZZ_MARK(0x80052548);
ZZ_MARK(0x8005254C);
ZZ_MARK_TARGET(0x80052550,ZZ_52440_110);
ZZ_MARK(0x80052554);
ZZ_MARK_TARGET(0x80052558,ZZ_52440_118);
ZZ_MARK(0x8005255C);
ZZ_MARK_TARGET(0x80052560,ZZ_52440_120);
ZZ_MARK(0x80052564);
ZZ_MARK_TARGET(0x80052568,ZZ_52440_128);
ZZ_MARK(0x8005256C);
ZZ_MARK_TARGET(0x80052570,ZZ_52440_130);
ZZ_MARK(0x80052574);
ZZ_MARK_TARGET(0x80052578,ZZ_52440_138);
ZZ_MARK(0x8005257C);
ZZ_MARK_TARGET(0x80052580,ZZ_52440_140);
ZZ_MARK_TARGET(0x80052584,ZZ_52440_144);
ZZ_MARK_TARGET(0x80052588,ZZ_52440_148);
ZZ_MARK(0x8005258C);
ZZ_MARK(0x80052590);
ZZ_MARK(0x80052594);
ZZ_MARK(0x80052598);
ZZ_MARK(0x8005259C);
ZZ_MARK(0x800525A0);
ZZ_MARK(0x800525A4);
ZZ_MARK(0x800525A8);
ZZ_MARK(0x800525AC);
ZZ_MARK(0x800525B0);
ZZ_MARK(0x800525B4);
ZZ_MARK(0x800525B8);
ZZ_MARK(0x800525BC);
ZZ_MARK(0x800525C0);
ZZ_MARK(0x800525C4);
ZZ_MARK(0x800525C8);
ZZ_MARK(0x800525CC);
ZZ_MARK(0x800525D0);
ZZ_MARK_TARGET(0x800525D4,ZZ_52440_194);
ZZ_MARK(0x800525D8);
ZZ_MARK(0x800525DC);
ZZ_MARK(0x800525E0);
ZZ_MARK_TARGET(0x800525E4,ZZ_52440_1A4);
ZZ_MARK(0x800525E8);
ZZ_MARK(0x800525EC);
ZZ_MARK(0x800525F0);
ZZ_MARK(0x800525F4);
ZZ_MARK(0x800525F8);
ZZ_MARK(0x800525FC);
ZZ_MARK(0x80052600);
ZZ_MARK(0x80052604);
ZZ_MARK_TARGET(0x80052608,ZZ_52440_1C8);
ZZ_MARK(0x8005260C);
ZZ_MARK(0x80052610);
ZZ_MARK(0x80052614);
ZZ_MARK(0x80052618);
ZZ_MARK(0x8005261C);
ZZ_MARK_TARGET(0x80052620,ZZ_52440_1E0);
ZZ_MARK(0x80052624);
ZZ_MARK_TARGET(0x80052628,ZZ_52440_1E8);
ZZ_MARK(0x8005262C);
ZZ_MARK_TARGET(0x80052630,ZZ_52440_1F0);
ZZ_MARK(0x80052634);
ZZ_MARK_TARGET(0x80052638,ZZ_52440_1F8);
ZZ_MARK(0x8005263C);
ZZ_MARK_TARGET(0x80052640,ZZ_52440_200);
ZZ_MARK(0x80052644);
ZZ_MARK_TARGET(0x80052648,ZZ_52440_208);
ZZ_MARK(0x8005264C);
ZZ_MARK_TARGET(0x80052650,ZZ_52440_210);
ZZ_MARK_TARGET(0x80052654,ZZ_52440_214);
ZZ_MARK_TARGET(0x80052658,ZZ_52440_218);
ZZ_MARK(0x8005265C);
ZZ_MARK(0x80052660);
ZZ_MARK(0x80052664);
ZZ_MARK(0x80052668);
ZZ_MARK(0x8005266C);
ZZ_MARK(0x80052670);
ZZ_MARK_TARGET(0x80052674,ZZ_52440_234);
ZZ_MARK_TARGET(0x80052678,ZZ_52440_238);
ZZ_MARK(0x8005267C);
ZZ_MARK(0x80052680);
ZZ_MARK(0x80052684);
ZZ_MARK(0x80052688);
ZZ_MARK(0x8005268C);
ZZ_MARK(0x80052690);
ZZ_MARK_TARGET(0x80052694,ZZ_52440_254);
ZZ_MARK_TARGET(0x80052698,ZZ_52440_258);
ZZ_MARK(0x8005269C);
ZZ_MARK(0x800526A0);
ZZ_MARK(0x800526A4);
ZZ_MARK(0x800526A8);
ZZ_MARK(0x800526AC);
ZZ_MARK(0x800526B0);
ZZ_MARK(0x800526B4);
ZZ_MARK(0x800526B8);
ZZ_MARK(0x800526BC);
ZZ_MARK(0x800526C0);
ZZ_MARK(0x800526C4);
ZZ_MARK(0x800526C8);
ZZ_MARK(0x800526CC);
ZZ_MARK(0x800526D0);
ZZ_MARK(0x800526D4);
ZZ_MARK(0x800526D8);
ZZ_MARK(0x800526DC);
ZZ_MARK(0x800526E0);
ZZ_MARK(0x800526E4);
ZZ_MARK(0x800526E8);
ZZ_MARK(0x800526EC);
ZZ_MARK(0x800526F0);
ZZ_MARK(0x800526F4);
ZZ_MARK(0x800526F8);
ZZ_MARK_TARGET(0x800526FC,ZZ_52440_2BC);
ZZ_MARK(0x80052700);
ZZ_MARK(0x80052704);
ZZ_MARK(0x80052708);
ZZ_MARK_TARGET(0x8005270C,ZZ_52440_2CC);
ZZ_MARK_TARGET(0x80052710,ZZ_52440_2D0);
ZZ_MARK(0x80052714);
ZZ_MARK(0x80052718);
ZZ_MARK(0x8005271C);
ZZ_MARK(0x80052720);
ZZ_MARK(0x80052724);
ZZ_MARK(0x80052728);
ZZ_MARK(0x8005272C);
ZZ_MARK(0x80052730);
ZZ_MARK(0x80052734);
ZZ_MARK(0x80052738);
ZZ_MARK(0x8005273C);
ZZ_MARK(0x80052740);
ZZ_MARK(0x80052744);
ZZ_MARK(0x80052748);
ZZ_MARK(0x8005274C);
ZZ_MARK(0x80052750);
ZZ_MARK(0x80052754);
ZZ_MARK(0x80052758);
ZZ_MARK(0x8005275C);
ZZ_MARK(0x80052760);
ZZ_MARK(0x80052764);
ZZ_MARK(0x80052768);
ZZ_MARK(0x8005276C);
ZZ_MARK(0x80052770);
ZZ_MARK(0x80052774);
ZZ_MARK(0x80052778);
ZZ_MARK(0x8005277C);
ZZ_MARK_TARGET(0x80052780,ZZ_52440_340);
ZZ_MARK(0x80052784);
ZZ_MARK(0x80052788);
ZZ_MARK(0x8005278C);
ZZ_MARK(0x80052790);
ZZ_MARK(0x80052794);
ZZ_MARK(0x80052798);
ZZ_MARK_TARGET(0x8005279C,ZZ_52440_35C);
ZZ_MARK(0x800527A0);
ZZ_MARK(0x800527A4);
ZZ_MARK(0x800527A8);
ZZ_MARK_TARGET(0x800527AC,ZZ_52440_36C);
ZZ_MARK(0x800527B0);
ZZ_MARK(0x800527B4);
ZZ_MARK_TARGET(0x800527B8,ZZ_52440_378);
ZZ_MARK(0x800527BC);
ZZ_MARK(0x800527C0);
ZZ_MARK(0x800527C4);
ZZ_MARK(0x800527C8);
ZZ_MARK_TARGET(0x800527CC,ZZ_52440_38C);
ZZ_MARK(0x800527D0);
ZZ_MARK(0x800527D4);
ZZ_MARK(0x800527D8);
ZZ_MARK(0x800527DC);
ZZ_MARK(0x800527E0);
ZZ_MARK(0x800527E4);
ZZ_MARK(0x800527E8);
ZZ_MARK(0x800527EC);
ZZ_MARK(0x800527F0);
ZZ_MARK(0x800527F4);
ZZ_MARK(0x800527F8);
ZZ_MARK(0x800527FC);
ZZ_MARK(0x80052800);
ZZ_MARK(0x80052804);
ZZ_MARK(0x80052808);
ZZ_MARK_TARGET(0x8005280C,ZZ_52440_3CC);
ZZ_MARK(0x80052810);
ZZ_MARK(0x80052814);
ZZ_MARK(0x80052818);
ZZ_MARK(0x8005281C);
ZZ_MARK(0x80052820);
