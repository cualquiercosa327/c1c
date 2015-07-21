#ifdef ZZ_INCLUDE_CODE
ZZ_47718:
	A1 = EMU_ReadU32(A0);
	A2 = A1 < 1;
	if (A2)
	{
		V0 = A1 & 0x1;
		ZZ_CLOCKCYCLES(5,0x80047734);
		goto ZZ_47718_1C;
	}
	V0 = A1 & 0x1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(7,0x80047748);
		goto ZZ_47718_30;
	}
	ZZ_CLOCKCYCLES(7,0x80047734);
ZZ_47718_1C:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 4); //+ 0x4
	EMU_Write16(V1 + 448,V0); //+ 0x1C0
	ZZ_CLOCKCYCLES(5,0x80047748);
ZZ_47718_30:
	if (A2)
	{
		V0 = A1 & 0x2;
		ZZ_CLOCKCYCLES(2,0x80047758);
		goto ZZ_47718_40;
	}
	V0 = A1 & 0x2;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x8004776C);
		goto ZZ_47718_54;
	}
	ZZ_CLOCKCYCLES(4,0x80047758);
ZZ_47718_40:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 6); //+ 0x6
	EMU_Write16(V1 + 450,V0); //+ 0x1C2
	ZZ_CLOCKCYCLES(5,0x8004776C);
ZZ_47718_54:
	if (A2)
	{
		V0 = A1 & 0x4;
		ZZ_CLOCKCYCLES(2,0x8004777C);
		goto ZZ_47718_64;
	}
	V0 = A1 & 0x4;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x80047790);
		goto ZZ_47718_78;
	}
	ZZ_CLOCKCYCLES(4,0x8004777C);
ZZ_47718_64:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 8); //+ 0x8
	EMU_Write16(V1 + 452,V0); //+ 0x1C4
	ZZ_CLOCKCYCLES(5,0x80047790);
ZZ_47718_78:
	if (A2)
	{
		V0 = A1 & 0x8;
		ZZ_CLOCKCYCLES(2,0x800477A0);
		goto ZZ_47718_88;
	}
	V0 = A1 & 0x8;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x800477B4);
		goto ZZ_47718_9C;
	}
	ZZ_CLOCKCYCLES(4,0x800477A0);
ZZ_47718_88:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 10); //+ 0xA
	EMU_Write16(V1 + 454,V0); //+ 0x1C6
	ZZ_CLOCKCYCLES(5,0x800477B4);
ZZ_47718_9C:
	if (A2)
	{
		V0 = A1 & 0x10;
		ZZ_CLOCKCYCLES(2,0x800477C4);
		goto ZZ_47718_AC;
	}
	V0 = A1 & 0x10;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x800477D8);
		goto ZZ_47718_C0;
	}
	ZZ_CLOCKCYCLES(4,0x800477C4);
ZZ_47718_AC:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 12); //+ 0xC
	EMU_Write16(V1 + 456,V0); //+ 0x1C8
	ZZ_CLOCKCYCLES(5,0x800477D8);
ZZ_47718_C0:
	if (A2)
	{
		V0 = A1 & 0x20;
		ZZ_CLOCKCYCLES(2,0x800477E8);
		goto ZZ_47718_D0;
	}
	V0 = A1 & 0x20;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x800477FC);
		goto ZZ_47718_E4;
	}
	ZZ_CLOCKCYCLES(4,0x800477E8);
ZZ_47718_D0:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 14); //+ 0xE
	EMU_Write16(V1 + 458,V0); //+ 0x1CA
	ZZ_CLOCKCYCLES(5,0x800477FC);
ZZ_47718_E4:
	if (A2)
	{
		V0 = A1 & 0x40;
		ZZ_CLOCKCYCLES(2,0x8004780C);
		goto ZZ_47718_F4;
	}
	V0 = A1 & 0x40;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x80047820);
		goto ZZ_47718_108;
	}
	ZZ_CLOCKCYCLES(4,0x8004780C);
ZZ_47718_F4:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 16); //+ 0x10
	EMU_Write16(V1 + 460,V0); //+ 0x1CC
	ZZ_CLOCKCYCLES(5,0x80047820);
ZZ_47718_108:
	if (A2)
	{
		V0 = A1 & 0x80;
		ZZ_CLOCKCYCLES(2,0x80047830);
		goto ZZ_47718_118;
	}
	V0 = A1 & 0x80;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x80047844);
		goto ZZ_47718_12C;
	}
	ZZ_CLOCKCYCLES(4,0x80047830);
ZZ_47718_118:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 18); //+ 0x12
	EMU_Write16(V1 + 462,V0); //+ 0x1CE
	ZZ_CLOCKCYCLES(5,0x80047844);
ZZ_47718_12C:
	if (A2)
	{
		V0 = A1 & 0x100;
		ZZ_CLOCKCYCLES(2,0x80047854);
		goto ZZ_47718_13C;
	}
	V0 = A1 & 0x100;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x80047868);
		goto ZZ_47718_150;
	}
	ZZ_CLOCKCYCLES(4,0x80047854);
ZZ_47718_13C:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 20); //+ 0x14
	EMU_Write16(V1 + 464,V0); //+ 0x1D0
	ZZ_CLOCKCYCLES(5,0x80047868);
ZZ_47718_150:
	if (A2)
	{
		V0 = A1 & 0x200;
		ZZ_CLOCKCYCLES(2,0x80047878);
		goto ZZ_47718_160;
	}
	V0 = A1 & 0x200;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x8004788C);
		goto ZZ_47718_174;
	}
	ZZ_CLOCKCYCLES(4,0x80047878);
ZZ_47718_160:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 22); //+ 0x16
	EMU_Write16(V1 + 466,V0); //+ 0x1D2
	ZZ_CLOCKCYCLES(5,0x8004788C);
ZZ_47718_174:
	if (A2)
	{
		V0 = A1 & 0x400;
		ZZ_CLOCKCYCLES(2,0x8004789C);
		goto ZZ_47718_184;
	}
	V0 = A1 & 0x400;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x800478B0);
		goto ZZ_47718_198;
	}
	ZZ_CLOCKCYCLES(4,0x8004789C);
ZZ_47718_184:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 24); //+ 0x18
	EMU_Write16(V1 + 468,V0); //+ 0x1D4
	ZZ_CLOCKCYCLES(5,0x800478B0);
ZZ_47718_198:
	if (A2)
	{
		V0 = A1 & 0x800;
		ZZ_CLOCKCYCLES(2,0x800478C0);
		goto ZZ_47718_1A8;
	}
	V0 = A1 & 0x800;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x800478D4);
		goto ZZ_47718_1BC;
	}
	ZZ_CLOCKCYCLES(4,0x800478C0);
ZZ_47718_1A8:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 26); //+ 0x1A
	EMU_Write16(V1 + 470,V0); //+ 0x1D6
	ZZ_CLOCKCYCLES(5,0x800478D4);
ZZ_47718_1BC:
	if (A2)
	{
		V0 = A1 & 0x1000;
		ZZ_CLOCKCYCLES(2,0x800478E4);
		goto ZZ_47718_1CC;
	}
	V0 = A1 & 0x1000;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x800478F8);
		goto ZZ_47718_1E0;
	}
	ZZ_CLOCKCYCLES(4,0x800478E4);
ZZ_47718_1CC:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 28); //+ 0x1C
	EMU_Write16(V1 + 472,V0); //+ 0x1D8
	ZZ_CLOCKCYCLES(5,0x800478F8);
ZZ_47718_1E0:
	if (A2)
	{
		V0 = A1 & 0x2000;
		ZZ_CLOCKCYCLES(2,0x80047908);
		goto ZZ_47718_1F0;
	}
	V0 = A1 & 0x2000;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x8004791C);
		goto ZZ_47718_204;
	}
	ZZ_CLOCKCYCLES(4,0x80047908);
ZZ_47718_1F0:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 30); //+ 0x1E
	EMU_Write16(V1 + 474,V0); //+ 0x1DA
	ZZ_CLOCKCYCLES(5,0x8004791C);
ZZ_47718_204:
	if (A2)
	{
		V0 = A1 & 0x4000;
		ZZ_CLOCKCYCLES(2,0x8004792C);
		goto ZZ_47718_214;
	}
	V0 = A1 & 0x4000;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x80047940);
		goto ZZ_47718_228;
	}
	ZZ_CLOCKCYCLES(4,0x8004792C);
ZZ_47718_214:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 32); //+ 0x20
	EMU_Write16(V1 + 476,V0); //+ 0x1DC
	ZZ_CLOCKCYCLES(5,0x80047940);
ZZ_47718_228:
	if (A2)
	{
		V0 = A1 & 0x8000;
		ZZ_CLOCKCYCLES(2,0x80047950);
		goto ZZ_47718_238;
	}
	V0 = A1 & 0x8000;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x80047964);
		goto ZZ_47718_24C;
	}
	ZZ_CLOCKCYCLES(4,0x80047950);
ZZ_47718_238:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 34); //+ 0x22
	EMU_Write16(V1 + 478,V0); //+ 0x1DE
	ZZ_CLOCKCYCLES(5,0x80047964);
ZZ_47718_24C:
	if (A2)
	{
		V0 = 0x10000;
		ZZ_CLOCKCYCLES(2,0x80047978);
		goto ZZ_47718_260;
	}
	V0 = 0x10000;
	V0 &= A1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x8004798C);
		goto ZZ_47718_274;
	}
	ZZ_CLOCKCYCLES(5,0x80047978);
ZZ_47718_260:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 36); //+ 0x24
	EMU_Write16(V1 + 480,V0); //+ 0x1E0
	ZZ_CLOCKCYCLES(5,0x8004798C);
ZZ_47718_274:
	if (A2)
	{
		V0 = 0x20000;
		ZZ_CLOCKCYCLES(2,0x800479A0);
		goto ZZ_47718_288;
	}
	V0 = 0x20000;
	V0 &= A1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x800479B4);
		goto ZZ_47718_29C;
	}
	ZZ_CLOCKCYCLES(5,0x800479A0);
ZZ_47718_288:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 38); //+ 0x26
	EMU_Write16(V1 + 482,V0); //+ 0x1E2
	ZZ_CLOCKCYCLES(5,0x800479B4);
ZZ_47718_29C:
	if (A2)
	{
		V0 = 0x40000;
		ZZ_CLOCKCYCLES(2,0x800479C8);
		goto ZZ_47718_2B0;
	}
	V0 = 0x40000;
	V0 &= A1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x800479DC);
		goto ZZ_47718_2C4;
	}
	ZZ_CLOCKCYCLES(5,0x800479C8);
ZZ_47718_2B0:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 40); //+ 0x28
	EMU_Write16(V1 + 484,V0); //+ 0x1E4
	ZZ_CLOCKCYCLES(5,0x800479DC);
ZZ_47718_2C4:
	if (A2)
	{
		V0 = 0x80000;
		ZZ_CLOCKCYCLES(2,0x800479F0);
		goto ZZ_47718_2D8;
	}
	V0 = 0x80000;
	V0 &= A1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80047A04);
		goto ZZ_47718_2EC;
	}
	ZZ_CLOCKCYCLES(5,0x800479F0);
ZZ_47718_2D8:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 42); //+ 0x2A
	EMU_Write16(V1 + 486,V0); //+ 0x1E6
	ZZ_CLOCKCYCLES(5,0x80047A04);
ZZ_47718_2EC:
	if (A2)
	{
		V0 = 0x100000;
		ZZ_CLOCKCYCLES(2,0x80047A18);
		goto ZZ_47718_300;
	}
	V0 = 0x100000;
	V0 &= A1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80047A2C);
		goto ZZ_47718_314;
	}
	ZZ_CLOCKCYCLES(5,0x80047A18);
ZZ_47718_300:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 44); //+ 0x2C
	EMU_Write16(V1 + 488,V0); //+ 0x1E8
	ZZ_CLOCKCYCLES(5,0x80047A2C);
ZZ_47718_314:
	if (A2)
	{
		V0 = 0x200000;
		ZZ_CLOCKCYCLES(2,0x80047A40);
		goto ZZ_47718_328;
	}
	V0 = 0x200000;
	V0 &= A1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80047A54);
		goto ZZ_47718_33C;
	}
	ZZ_CLOCKCYCLES(5,0x80047A40);
ZZ_47718_328:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 46); //+ 0x2E
	EMU_Write16(V1 + 490,V0); //+ 0x1EA
	ZZ_CLOCKCYCLES(5,0x80047A54);
ZZ_47718_33C:
	if (A2)
	{
		V0 = 0x400000;
		ZZ_CLOCKCYCLES(2,0x80047A68);
		goto ZZ_47718_350;
	}
	V0 = 0x400000;
	V0 &= A1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80047A7C);
		goto ZZ_47718_364;
	}
	ZZ_CLOCKCYCLES(5,0x80047A68);
ZZ_47718_350:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 48); //+ 0x30
	EMU_Write16(V1 + 492,V0); //+ 0x1EC
	ZZ_CLOCKCYCLES(5,0x80047A7C);
ZZ_47718_364:
	if (A2)
	{
		V0 = 0x800000;
		ZZ_CLOCKCYCLES(2,0x80047A90);
		goto ZZ_47718_378;
	}
	V0 = 0x800000;
	V0 &= A1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80047AA4);
		goto ZZ_47718_38C;
	}
	ZZ_CLOCKCYCLES(5,0x80047A90);
ZZ_47718_378:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 50); //+ 0x32
	EMU_Write16(V1 + 494,V0); //+ 0x1EE
	ZZ_CLOCKCYCLES(5,0x80047AA4);
ZZ_47718_38C:
	if (A2)
	{
		V0 = 0x1000000;
		ZZ_CLOCKCYCLES(2,0x80047AB8);
		goto ZZ_47718_3A0;
	}
	V0 = 0x1000000;
	V0 &= A1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80047ACC);
		goto ZZ_47718_3B4;
	}
	ZZ_CLOCKCYCLES(5,0x80047AB8);
ZZ_47718_3A0:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 52); //+ 0x34
	EMU_Write16(V1 + 496,V0); //+ 0x1F0
	ZZ_CLOCKCYCLES(5,0x80047ACC);
ZZ_47718_3B4:
	if (A2)
	{
		V0 = 0x2000000;
		ZZ_CLOCKCYCLES(2,0x80047AE0);
		goto ZZ_47718_3C8;
	}
	V0 = 0x2000000;
	V0 &= A1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80047AF4);
		goto ZZ_47718_3DC;
	}
	ZZ_CLOCKCYCLES(5,0x80047AE0);
ZZ_47718_3C8:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 54); //+ 0x36
	EMU_Write16(V1 + 498,V0); //+ 0x1F2
	ZZ_CLOCKCYCLES(5,0x80047AF4);
ZZ_47718_3DC:
	if (A2)
	{
		V0 = 0x4000000;
		ZZ_CLOCKCYCLES(2,0x80047B08);
		goto ZZ_47718_3F0;
	}
	V0 = 0x4000000;
	V0 &= A1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80047B1C);
		goto ZZ_47718_404;
	}
	ZZ_CLOCKCYCLES(5,0x80047B08);
ZZ_47718_3F0:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 56); //+ 0x38
	EMU_Write16(V1 + 500,V0); //+ 0x1F4
	ZZ_CLOCKCYCLES(5,0x80047B1C);
ZZ_47718_404:
	if (A2)
	{
		V0 = 0x8000000;
		ZZ_CLOCKCYCLES(2,0x80047B30);
		goto ZZ_47718_418;
	}
	V0 = 0x8000000;
	V0 &= A1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80047B44);
		goto ZZ_47718_42C;
	}
	ZZ_CLOCKCYCLES(5,0x80047B30);
ZZ_47718_418:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 58); //+ 0x3A
	EMU_Write16(V1 + 502,V0); //+ 0x1F6
	ZZ_CLOCKCYCLES(5,0x80047B44);
ZZ_47718_42C:
	if (A2)
	{
		V0 = 0x10000000;
		ZZ_CLOCKCYCLES(2,0x80047B58);
		goto ZZ_47718_440;
	}
	V0 = 0x10000000;
	V0 &= A1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80047B6C);
		goto ZZ_47718_454;
	}
	ZZ_CLOCKCYCLES(5,0x80047B58);
ZZ_47718_440:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 60); //+ 0x3C
	EMU_Write16(V1 + 504,V0); //+ 0x1F8
	ZZ_CLOCKCYCLES(5,0x80047B6C);
ZZ_47718_454:
	if (A2)
	{
		V0 = 0x20000000;
		ZZ_CLOCKCYCLES(2,0x80047B80);
		goto ZZ_47718_468;
	}
	V0 = 0x20000000;
	V0 &= A1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80047B94);
		goto ZZ_47718_47C;
	}
	ZZ_CLOCKCYCLES(5,0x80047B80);
ZZ_47718_468:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 62); //+ 0x3E
	EMU_Write16(V1 + 506,V0); //+ 0x1FA
	ZZ_CLOCKCYCLES(5,0x80047B94);
ZZ_47718_47C:
	if (A2)
	{
		V0 = 0x40000000;
		ZZ_CLOCKCYCLES(2,0x80047BA8);
		goto ZZ_47718_490;
	}
	V0 = 0x40000000;
	V0 &= A1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80047BBC);
		goto ZZ_47718_4A4;
	}
	ZZ_CLOCKCYCLES(5,0x80047BA8);
ZZ_47718_490:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 64); //+ 0x40
	EMU_Write16(V1 + 508,V0); //+ 0x1FC
	ZZ_CLOCKCYCLES(5,0x80047BBC);
ZZ_47718_4A4:
	if (A2)
	{
		ZZ_CLOCKCYCLES(2,0x80047BCC);
		goto ZZ_47718_4B4;
	}
	if ((int32_t)A1 >= 0)
	{
		ZZ_CLOCKCYCLES(4,0x80047BE0);
		goto ZZ_47718_4C8;
	}
	ZZ_CLOCKCYCLES(4,0x80047BCC);
ZZ_47718_4B4:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 = EMU_ReadU16(A0 + 66); //+ 0x42
	EMU_Write16(V1 + 510,V0); //+ 0x1FE
	ZZ_CLOCKCYCLES(5,0x80047BE0);
ZZ_47718_4C8:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80047684,ZZ_47208_47C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80047718,0x80047734,ZZ_47718);
ZZ_MARK_TARGET(0x80047734,0x80047748,ZZ_47718_1C);
ZZ_MARK_TARGET(0x80047748,0x80047758,ZZ_47718_30);
ZZ_MARK_TARGET(0x80047758,0x8004776C,ZZ_47718_40);
ZZ_MARK_TARGET(0x8004776C,0x8004777C,ZZ_47718_54);
ZZ_MARK_TARGET(0x8004777C,0x80047790,ZZ_47718_64);
ZZ_MARK_TARGET(0x80047790,0x800477A0,ZZ_47718_78);
ZZ_MARK_TARGET(0x800477A0,0x800477B4,ZZ_47718_88);
ZZ_MARK_TARGET(0x800477B4,0x800477C4,ZZ_47718_9C);
ZZ_MARK_TARGET(0x800477C4,0x800477D8,ZZ_47718_AC);
ZZ_MARK_TARGET(0x800477D8,0x800477E8,ZZ_47718_C0);
ZZ_MARK_TARGET(0x800477E8,0x800477FC,ZZ_47718_D0);
ZZ_MARK_TARGET(0x800477FC,0x8004780C,ZZ_47718_E4);
ZZ_MARK_TARGET(0x8004780C,0x80047820,ZZ_47718_F4);
ZZ_MARK_TARGET(0x80047820,0x80047830,ZZ_47718_108);
ZZ_MARK_TARGET(0x80047830,0x80047844,ZZ_47718_118);
ZZ_MARK_TARGET(0x80047844,0x80047854,ZZ_47718_12C);
ZZ_MARK_TARGET(0x80047854,0x80047868,ZZ_47718_13C);
ZZ_MARK_TARGET(0x80047868,0x80047878,ZZ_47718_150);
ZZ_MARK_TARGET(0x80047878,0x8004788C,ZZ_47718_160);
ZZ_MARK_TARGET(0x8004788C,0x8004789C,ZZ_47718_174);
ZZ_MARK_TARGET(0x8004789C,0x800478B0,ZZ_47718_184);
ZZ_MARK_TARGET(0x800478B0,0x800478C0,ZZ_47718_198);
ZZ_MARK_TARGET(0x800478C0,0x800478D4,ZZ_47718_1A8);
ZZ_MARK_TARGET(0x800478D4,0x800478E4,ZZ_47718_1BC);
ZZ_MARK_TARGET(0x800478E4,0x800478F8,ZZ_47718_1CC);
ZZ_MARK_TARGET(0x800478F8,0x80047908,ZZ_47718_1E0);
ZZ_MARK_TARGET(0x80047908,0x8004791C,ZZ_47718_1F0);
ZZ_MARK_TARGET(0x8004791C,0x8004792C,ZZ_47718_204);
ZZ_MARK_TARGET(0x8004792C,0x80047940,ZZ_47718_214);
ZZ_MARK_TARGET(0x80047940,0x80047950,ZZ_47718_228);
ZZ_MARK_TARGET(0x80047950,0x80047964,ZZ_47718_238);
ZZ_MARK_TARGET(0x80047964,0x80047978,ZZ_47718_24C);
ZZ_MARK_TARGET(0x80047978,0x8004798C,ZZ_47718_260);
ZZ_MARK_TARGET(0x8004798C,0x800479A0,ZZ_47718_274);
ZZ_MARK_TARGET(0x800479A0,0x800479B4,ZZ_47718_288);
ZZ_MARK_TARGET(0x800479B4,0x800479C8,ZZ_47718_29C);
ZZ_MARK_TARGET(0x800479C8,0x800479DC,ZZ_47718_2B0);
ZZ_MARK_TARGET(0x800479DC,0x800479F0,ZZ_47718_2C4);
ZZ_MARK_TARGET(0x800479F0,0x80047A04,ZZ_47718_2D8);
ZZ_MARK_TARGET(0x80047A04,0x80047A18,ZZ_47718_2EC);
ZZ_MARK_TARGET(0x80047A18,0x80047A2C,ZZ_47718_300);
ZZ_MARK_TARGET(0x80047A2C,0x80047A40,ZZ_47718_314);
ZZ_MARK_TARGET(0x80047A40,0x80047A54,ZZ_47718_328);
ZZ_MARK_TARGET(0x80047A54,0x80047A68,ZZ_47718_33C);
ZZ_MARK_TARGET(0x80047A68,0x80047A7C,ZZ_47718_350);
ZZ_MARK_TARGET(0x80047A7C,0x80047A90,ZZ_47718_364);
ZZ_MARK_TARGET(0x80047A90,0x80047AA4,ZZ_47718_378);
ZZ_MARK_TARGET(0x80047AA4,0x80047AB8,ZZ_47718_38C);
ZZ_MARK_TARGET(0x80047AB8,0x80047ACC,ZZ_47718_3A0);
ZZ_MARK_TARGET(0x80047ACC,0x80047AE0,ZZ_47718_3B4);
ZZ_MARK_TARGET(0x80047AE0,0x80047AF4,ZZ_47718_3C8);
ZZ_MARK_TARGET(0x80047AF4,0x80047B08,ZZ_47718_3DC);
ZZ_MARK_TARGET(0x80047B08,0x80047B1C,ZZ_47718_3F0);
ZZ_MARK_TARGET(0x80047B1C,0x80047B30,ZZ_47718_404);
ZZ_MARK_TARGET(0x80047B30,0x80047B44,ZZ_47718_418);
ZZ_MARK_TARGET(0x80047B44,0x80047B58,ZZ_47718_42C);
ZZ_MARK_TARGET(0x80047B58,0x80047B6C,ZZ_47718_440);
ZZ_MARK_TARGET(0x80047B6C,0x80047B80,ZZ_47718_454);
ZZ_MARK_TARGET(0x80047B80,0x80047B94,ZZ_47718_468);
ZZ_MARK_TARGET(0x80047B94,0x80047BA8,ZZ_47718_47C);
ZZ_MARK_TARGET(0x80047BA8,0x80047BBC,ZZ_47718_490);
ZZ_MARK_TARGET(0x80047BBC,0x80047BCC,ZZ_47718_4A4);
ZZ_MARK_TARGET(0x80047BCC,0x80047BE0,ZZ_47718_4B4);
ZZ_MARK_TARGET(0x80047BE0,0x80047BE8,ZZ_47718_4C8);