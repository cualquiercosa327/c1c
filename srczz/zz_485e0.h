#ifdef ZZ_INCLUDE_CODE
ZZ_485E0:
	SP -= 32;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = -1;
	V1 = R0;
	A1 = 0x1;
	EMU_Write32(SP + 28,RA); //+ 0x1C
	EMU_Write32(SP + 24,S2); //+ 0x18
	A0 = EMU_ReadU32(S0);
	V0 = A1 << V1;
	ZZ_CLOCKCYCLES(11,0x8004860C);
ZZ_485E0_2C:
	V0 &= A0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(3,0x8004869C);
		goto ZZ_485E0_BC;
	}
	V1 += 1;
	V0 = (int32_t)V1 < 24;
	if (V0)
	{
		V0 = A1 << V1;
		ZZ_CLOCKCYCLES(7,0x8004860C);
		goto ZZ_485E0_2C;
	}
	V0 = A1 << V1;
	ZZ_CLOCKCYCLES(7,0x80048628);
ZZ_485E0_48:
	V0 = -1;
	if (S1 == V0)
	{
		A1 = R0;
		ZZ_CLOCKCYCLES(3,0x8004899C);
		goto ZZ_485E0_3BC;
	}
	A1 = R0;
	V1 = S1 << 4;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 22756); //+ 0x58E4
	T0 = S1 << 1;
	V1 += V0;
	A2 = EMU_ReadU16(V1);
	A3 = EMU_ReadU16(V1 + 2); //+ 0x2
	V0 = A2 & 0x8000;
	if (!V0)
	{
		S2 = S1 << 3;
		ZZ_CLOCKCYCLES(13,0x80048728);
		goto ZZ_485E0_148;
	}
	S2 = S1 << 3;
	V1 = A2 & 0xF000;
	V0 = 0xB000;
	if (V1 == V0)
	{
		V0 = (int32_t)V0 < (int32_t)V1;
		ZZ_CLOCKCYCLES(17,0x80048708);
		goto ZZ_485E0_128;
	}
	V0 = (int32_t)V0 < (int32_t)V1;
	if (V0)
	{
		V0 = 0xD000;
		ZZ_CLOCKCYCLES(19,0x800486B4);
		goto ZZ_485E0_D4;
	}
	V0 = 0xD000;
	V0 = 0x9000;
	if (V1 == V0)
	{
		V0 = (int32_t)V0 < (int32_t)V1;
		ZZ_CLOCKCYCLES(22,0x800486F8);
		goto ZZ_485E0_118;
	}
	V0 = (int32_t)V0 < (int32_t)V1;
	if (V0)
	{
		V0 = 0xA000;
		ZZ_CLOCKCYCLES(24,0x800486A4);
		goto ZZ_485E0_C4;
	}
	V0 = 0xA000;
	V0 = 0x8000;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(27,0x800486F0);
		goto ZZ_485E0_110;
	}
	A2 &= 0xFFF;
	ZZ_CLOCKCYCLES(29,0x80048728);
	goto ZZ_485E0_148;
ZZ_485E0_BC:
	S1 = V1;
	ZZ_CLOCKCYCLES(2,0x80048628);
	goto ZZ_485E0_48;
ZZ_485E0_C4:
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(2,0x80048700);
		goto ZZ_485E0_120;
	}
	A2 &= 0xFFF;
	ZZ_CLOCKCYCLES(4,0x80048728);
	goto ZZ_485E0_148;
ZZ_485E0_D4:
	if (V1 == V0)
	{
		V0 = (int32_t)V0 < (int32_t)V1;
		ZZ_CLOCKCYCLES(2,0x80048718);
		goto ZZ_485E0_138;
	}
	V0 = (int32_t)V0 < (int32_t)V1;
	if (V0)
	{
		V0 = 0xE000;
		ZZ_CLOCKCYCLES(4,0x800486D8);
		goto ZZ_485E0_F8;
	}
	V0 = 0xE000;
	V0 = 0xC000;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(7,0x80048710);
		goto ZZ_485E0_130;
	}
	A2 &= 0xFFF;
	ZZ_CLOCKCYCLES(9,0x80048728);
	goto ZZ_485E0_148;
ZZ_485E0_F8:
	if (V1 == V0)
	{
		V0 = 0xF000;
		ZZ_CLOCKCYCLES(2,0x80048720);
		goto ZZ_485E0_140;
	}
	V0 = 0xF000;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(4,0x80048720);
		goto ZZ_485E0_140;
	}
	A2 &= 0xFFF;
	ZZ_CLOCKCYCLES(6,0x80048728);
	goto ZZ_485E0_148;
ZZ_485E0_110:
	A1 = 0x1;
	ZZ_CLOCKCYCLES(2,0x80048724);
	goto ZZ_485E0_144;
ZZ_485E0_118:
	A1 = 0x2;
	ZZ_CLOCKCYCLES(2,0x80048724);
	goto ZZ_485E0_144;
ZZ_485E0_120:
	A1 = 0x3;
	ZZ_CLOCKCYCLES(2,0x80048724);
	goto ZZ_485E0_144;
ZZ_485E0_128:
	A1 = 0x4;
	ZZ_CLOCKCYCLES(2,0x80048724);
	goto ZZ_485E0_144;
ZZ_485E0_130:
	A1 = 0x5;
	ZZ_CLOCKCYCLES(2,0x80048724);
	goto ZZ_485E0_144;
ZZ_485E0_138:
	A1 = 0x6;
	ZZ_CLOCKCYCLES(2,0x80048724);
	goto ZZ_485E0_144;
ZZ_485E0_140:
	A1 = 0x7;
	ZZ_CLOCKCYCLES(1,0x80048724);
ZZ_485E0_144:
	A2 &= 0xFFF;
	ZZ_CLOCKCYCLES(1,0x80048728);
ZZ_485E0_148:
	V0 = A3 & 0x8000;
	if (!V0)
	{
		A0 = R0;
		ZZ_CLOCKCYCLES(3,0x800487F8);
		goto ZZ_485E0_218;
	}
	A0 = R0;
	V1 = A3 & 0xF000;
	V0 = 0xB000;
	if (V1 == V0)
	{
		V0 = (int32_t)V0 < (int32_t)V1;
		ZZ_CLOCKCYCLES(7,0x800487D8);
		goto ZZ_485E0_1F8;
	}
	V0 = (int32_t)V0 < (int32_t)V1;
	if (V0)
	{
		V0 = 0xD000;
		ZZ_CLOCKCYCLES(9,0x80048784);
		goto ZZ_485E0_1A4;
	}
	V0 = 0xD000;
	V0 = 0x9000;
	if (V1 == V0)
	{
		V0 = (int32_t)V0 < (int32_t)V1;
		ZZ_CLOCKCYCLES(12,0x800487C8);
		goto ZZ_485E0_1E8;
	}
	V0 = (int32_t)V0 < (int32_t)V1;
	if (V0)
	{
		V0 = 0xA000;
		ZZ_CLOCKCYCLES(14,0x80048774);
		goto ZZ_485E0_194;
	}
	V0 = 0xA000;
	V0 = 0x8000;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(17,0x800487C0);
		goto ZZ_485E0_1E0;
	}
	A3 &= 0xFFF;
	ZZ_CLOCKCYCLES(19,0x800487F8);
	goto ZZ_485E0_218;
ZZ_485E0_194:
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(2,0x800487D0);
		goto ZZ_485E0_1F0;
	}
	A3 &= 0xFFF;
	ZZ_CLOCKCYCLES(4,0x800487F8);
	goto ZZ_485E0_218;
ZZ_485E0_1A4:
	if (V1 == V0)
	{
		V0 = (int32_t)V0 < (int32_t)V1;
		ZZ_CLOCKCYCLES(2,0x800487E8);
		goto ZZ_485E0_208;
	}
	V0 = (int32_t)V0 < (int32_t)V1;
	if (V0)
	{
		V0 = 0xE000;
		ZZ_CLOCKCYCLES(4,0x800487A8);
		goto ZZ_485E0_1C8;
	}
	V0 = 0xE000;
	V0 = 0xC000;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(7,0x800487E0);
		goto ZZ_485E0_200;
	}
	A3 &= 0xFFF;
	ZZ_CLOCKCYCLES(9,0x800487F8);
	goto ZZ_485E0_218;
ZZ_485E0_1C8:
	if (V1 == V0)
	{
		V0 = 0xF000;
		ZZ_CLOCKCYCLES(2,0x800487F0);
		goto ZZ_485E0_210;
	}
	V0 = 0xF000;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(4,0x800487F0);
		goto ZZ_485E0_210;
	}
	A3 &= 0xFFF;
	ZZ_CLOCKCYCLES(6,0x800487F8);
	goto ZZ_485E0_218;
ZZ_485E0_1E0:
	A0 = 0x1;
	ZZ_CLOCKCYCLES(2,0x800487F4);
	goto ZZ_485E0_214;
ZZ_485E0_1E8:
	A0 = 0x2;
	ZZ_CLOCKCYCLES(2,0x800487F4);
	goto ZZ_485E0_214;
ZZ_485E0_1F0:
	A0 = 0x3;
	ZZ_CLOCKCYCLES(2,0x800487F4);
	goto ZZ_485E0_214;
ZZ_485E0_1F8:
	A0 = 0x4;
	ZZ_CLOCKCYCLES(2,0x800487F4);
	goto ZZ_485E0_214;
ZZ_485E0_200:
	A0 = 0x5;
	ZZ_CLOCKCYCLES(2,0x800487F4);
	goto ZZ_485E0_214;
ZZ_485E0_208:
	A0 = 0x6;
	ZZ_CLOCKCYCLES(2,0x800487F4);
	goto ZZ_485E0_214;
ZZ_485E0_210:
	A0 = 0x7;
	ZZ_CLOCKCYCLES(1,0x800487F4);
ZZ_485E0_214:
	A3 &= 0xFFF;
	ZZ_CLOCKCYCLES(1,0x800487F8);
ZZ_485E0_218:
	V1 = A2 & 0xFFFF;
	V0 = V1 < 16384;
	if (!V0)
	{
		V0 = 0x8000;
		ZZ_CLOCKCYCLES(4,0x80048810);
		goto ZZ_485E0_230;
	}
	V0 = 0x8000;
	EMU_Write16(S0 + 8,A2); //+ 0x8
	ZZ_CLOCKCYCLES(6,0x80048818);
	goto ZZ_485E0_238;
ZZ_485E0_230:
	V0 = V1 - V0;
	EMU_Write16(S0 + 8,V0); //+ 0x8
	ZZ_CLOCKCYCLES(2,0x80048818);
ZZ_485E0_238:
	V1 = A3 & 0xFFFF;
	V0 = V1 < 16384;
	if (!V0)
	{
		V0 = 0x8000;
		ZZ_CLOCKCYCLES(4,0x80048830);
		goto ZZ_485E0_250;
	}
	V0 = 0x8000;
	EMU_Write16(S0 + 10,A3); //+ 0xA
	ZZ_CLOCKCYCLES(6,0x80048838);
	goto ZZ_485E0_258;
ZZ_485E0_250:
	V0 = V1 - V0;
	EMU_Write16(S0 + 10,V0); //+ 0xA
	ZZ_CLOCKCYCLES(2,0x80048838);
ZZ_485E0_258:
	EMU_Write16(S0 + 14,A0); //+ 0xE
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 22756); //+ 0x58E4
	V0 = T0 << 1;
	EMU_Write16(S0 + 12,A1); //+ 0xC
	V0 += A0;
	V1 = EMU_ReadU16(V0 + 512); //+ 0x200
	EMU_Write16(S0 + 16,V1); //+ 0x10
	V0 = EMU_ReadU16(V0 + 514); //+ 0x202
	EMU_Write16(S0 + 18,V0); //+ 0x12
	V0 = S2 << 1;
	V0 += A0;
	V0 = EMU_ReadU16(V0 + 4); //+ 0x4
	V1 = 0x80050000;
	V1 += 22896;
	EMU_Write16(S0 + 20,V0); //+ 0x14
	V0 = S1 << 1;
	V0 += V1;
	A0 = EMU_ReadU16(V0);
	A1 = EMU_ReadU8(V0);
	A2 = EMU_ReadU16(S0 + 20); //+ 0x14
	RA = 0x8004889C; //ZZ_485E0_2BC
	A0 >>= 8;
	ZZ_CLOCKCYCLES(25,0x80048FB4);
	goto ZZ_48FB4;
ZZ_485E0_2BC:
	if ((int32_t)V0 < 0)
	{
		ZZ_CLOCKCYCLES(2,0x800488AC);
		goto ZZ_485E0_2CC;
	}
	EMU_Write16(S0 + 22,V0); //+ 0x16
	ZZ_CLOCKCYCLES(4,0x800488B0);
	goto ZZ_485E0_2D0;
ZZ_485E0_2CC:
	EMU_Write16(S0 + 22,R0); //+ 0x16
	ZZ_CLOCKCYCLES(1,0x800488B0);
ZZ_485E0_2D0:
	V0 = S1 << 1;
	AT = 0x80050000;
	AT += V0;
	V0 = EMU_ReadU16(AT + 22896); //+ 0x5970
	V1 = S2 << 1;
	EMU_Write16(S0 + 24,V0); //+ 0x18
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 22756); //+ 0x58E4
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 22792); //+ 0x5908
	V1 += V0;
	V0 = EMU_ReadU16(V1 + 12); //+ 0xC
	EMU_Write16(S0 + 26,V0); //+ 0x1A
	V0 = EMU_ReadU16(V1 + 6); //+ 0x6
	V0 <<= A0;
	EMU_Write32(S0 + 28,V0); //+ 0x1C
	V0 = EMU_ReadU16(V1 + 14); //+ 0xE
	V0 <<= A0;
	EMU_Write32(S0 + 32,V0); //+ 0x20
	A0 = EMU_ReadU16(V1 + 8); //+ 0x8
	V1 = EMU_ReadU16(V1 + 10); //+ 0xA
	V0 = A0 & 0x80;
	if (V0)
	{
		V0 = 0x5;
		ZZ_CLOCKCYCLES(27,0x80048920);
		goto ZZ_485E0_340;
	}
	V0 = 0x5;
	V0 = 0x1;
	ZZ_CLOCKCYCLES(28,0x80048920);
ZZ_485E0_340:
	EMU_Write32(S0 + 36,V0); //+ 0x24
	V0 = V1 & 0x300;
	if (V0)
	{
		V0 = 0x7;
		ZZ_CLOCKCYCLES(4,0x8004894C);
		goto ZZ_485E0_36C;
	}
	V0 = 0x7;
	V0 = V1 & 0x200;
	if (V0)
	{
		V0 = 0x5;
		ZZ_CLOCKCYCLES(7,0x8004894C);
		goto ZZ_485E0_36C;
	}
	V0 = 0x5;
	V0 = V1 & 0x100;
	if (V0)
	{
		V0 = 0x3;
		ZZ_CLOCKCYCLES(10,0x8004894C);
		goto ZZ_485E0_36C;
	}
	V0 = 0x3;
	V0 = 0x1;
	ZZ_CLOCKCYCLES(11,0x8004894C);
ZZ_485E0_36C:
	EMU_Write32(S0 + 40,V0); //+ 0x28
	V0 = V1 & 0x20;
	if (V0)
	{
		V0 = 0x7;
		ZZ_CLOCKCYCLES(4,0x80048960);
		goto ZZ_485E0_380;
	}
	V0 = 0x7;
	V0 = 0x3;
	ZZ_CLOCKCYCLES(5,0x80048960);
ZZ_485E0_380:
	EMU_Write32(S0 + 44,V0); //+ 0x2C
	V0 = A0 >> 8;
	EMU_Write16(S0 + 48,V0); //+ 0x30
	V0 = A0 & 0xF0;
	V0 >>= 4;
	EMU_Write16(S0 + 50,V0); //+ 0x32
	V0 = V1 >> 6;
	V0 &= 0xFCFF;
	EMU_Write16(S0 + 52,V0); //+ 0x34
	V0 = V1 & 0x1F;
	EMU_Write16(S0 + 54,V0); //+ 0x36
	V0 = A0 & 0xF;
	EMU_Write16(S0 + 56,V0); //+ 0x38
	EMU_Write16(S0 + 58,A0); //+ 0x3A
	EMU_Write16(S0 + 60,V1); //+ 0x3C
	ZZ_CLOCKCYCLES(15,0x8004899C);
ZZ_485E0_3BC:
	RA = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x80030414,ZZ_30328_EC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800485E0,0x8004860C,ZZ_485E0);
ZZ_MARK_TARGET(0x8004860C,0x80048628,ZZ_485E0_2C);
ZZ_MARK_TARGET(0x80048628,0x8004869C,ZZ_485E0_48);
ZZ_MARK_TARGET(0x8004869C,0x800486A4,ZZ_485E0_BC);
ZZ_MARK_TARGET(0x800486A4,0x800486B4,ZZ_485E0_C4);
ZZ_MARK_TARGET(0x800486B4,0x800486D8,ZZ_485E0_D4);
ZZ_MARK_TARGET(0x800486D8,0x800486F0,ZZ_485E0_F8);
ZZ_MARK_TARGET(0x800486F0,0x800486F8,ZZ_485E0_110);
ZZ_MARK_TARGET(0x800486F8,0x80048700,ZZ_485E0_118);
ZZ_MARK_TARGET(0x80048700,0x80048708,ZZ_485E0_120);
ZZ_MARK_TARGET(0x80048708,0x80048710,ZZ_485E0_128);
ZZ_MARK_TARGET(0x80048710,0x80048718,ZZ_485E0_130);
ZZ_MARK_TARGET(0x80048718,0x80048720,ZZ_485E0_138);
ZZ_MARK_TARGET(0x80048720,0x80048724,ZZ_485E0_140);
ZZ_MARK_TARGET(0x80048724,0x80048728,ZZ_485E0_144);
ZZ_MARK_TARGET(0x80048728,0x80048774,ZZ_485E0_148);
ZZ_MARK_TARGET(0x80048774,0x80048784,ZZ_485E0_194);
ZZ_MARK_TARGET(0x80048784,0x800487A8,ZZ_485E0_1A4);
ZZ_MARK_TARGET(0x800487A8,0x800487C0,ZZ_485E0_1C8);
ZZ_MARK_TARGET(0x800487C0,0x800487C8,ZZ_485E0_1E0);
ZZ_MARK_TARGET(0x800487C8,0x800487D0,ZZ_485E0_1E8);
ZZ_MARK_TARGET(0x800487D0,0x800487D8,ZZ_485E0_1F0);
ZZ_MARK_TARGET(0x800487D8,0x800487E0,ZZ_485E0_1F8);
ZZ_MARK_TARGET(0x800487E0,0x800487E8,ZZ_485E0_200);
ZZ_MARK_TARGET(0x800487E8,0x800487F0,ZZ_485E0_208);
ZZ_MARK_TARGET(0x800487F0,0x800487F4,ZZ_485E0_210);
ZZ_MARK_TARGET(0x800487F4,0x800487F8,ZZ_485E0_214);
ZZ_MARK_TARGET(0x800487F8,0x80048810,ZZ_485E0_218);
ZZ_MARK_TARGET(0x80048810,0x80048818,ZZ_485E0_230);
ZZ_MARK_TARGET(0x80048818,0x80048830,ZZ_485E0_238);
ZZ_MARK_TARGET(0x80048830,0x80048838,ZZ_485E0_250);
ZZ_MARK_TARGET(0x80048838,0x8004889C,ZZ_485E0_258);
ZZ_MARK_TARGET(0x8004889C,0x800488AC,ZZ_485E0_2BC);
ZZ_MARK_TARGET(0x800488AC,0x800488B0,ZZ_485E0_2CC);
ZZ_MARK_TARGET(0x800488B0,0x80048920,ZZ_485E0_2D0);
ZZ_MARK_TARGET(0x80048920,0x8004894C,ZZ_485E0_340);
ZZ_MARK_TARGET(0x8004894C,0x80048960,ZZ_485E0_36C);
ZZ_MARK_TARGET(0x80048960,0x8004899C,ZZ_485E0_380);
ZZ_MARK_TARGET(0x8004899C,0x800489B8,ZZ_485E0_3BC);
