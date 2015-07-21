#ifdef ZZ_INCLUDE_CODE
ZZ_40A0C:
	SP -= 40;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0;
	V0 = 0x80050000;
	V0 += 19054;
	EMU_Write32(SP + 32,RA); //+ 0x20
	EMU_Write32(SP + 28,S3); //+ 0x1C
	EMU_Write32(SP + 24,S2); //+ 0x18
	EMU_Write32(SP + 20,S1); //+ 0x14
	V0 = EMU_ReadU8(V0);
	V0 = V0 < 2;
	if (V0)
	{
		S3 = 0x8000000;
		ZZ_CLOCKCYCLES(14,0x80040A60);
		goto ZZ_40A0C_54;
	}
	S3 = 0x8000000;
	A0 = 0x80010000;
	A0 += 4920;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 19048); //+ 0x4A68
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x80040A60; //ZZ_40A0C_54
	A1 = S0;
	ZZ_CLOCKCYCLES_JR(21);
	ZZ_JUMPREGISTER(0x8003D730,ZZ_3D730);
	ZZ_JUMPREGISTER_END();
ZZ_40A0C_54:
	V0 = 0x80050000;
	V0 = EMU_ReadU8(V0 + 19052); //+ 0x4A6C
	V0 -= 1;
	V0 = V0 < 2;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(7,0x80040AA0);
		goto ZZ_40A0C_94;
	}
	RA = 0x80040A84; //ZZ_40A0C_78
	A0 = S0;
	ZZ_CLOCKCYCLES(9,0x80041610);
	goto ZZ_41610;
ZZ_40A0C_78:
	V1 = EMU_ReadU16(S0 + 2); //+ 0x2
	V0 &= 0xFFF;
	V1 &= 0xFFF;
	V1 <<= 12;
	V1 |= V0;
	V0 = 0x5000000;
	ZZ_CLOCKCYCLES(7,0x80040ABC);
	goto ZZ_40A0C_B0;
ZZ_40A0C_94:
	V0 = EMU_ReadU16(S0 + 2); //+ 0x2
	V1 = EMU_ReadU16(S0);
	V0 &= 0x3FF;
	V0 <<= 10;
	V1 &= 0x3FF;
	V0 |= V1;
	V1 = 0x5000000;
	ZZ_CLOCKCYCLES(7,0x80040ABC);
ZZ_40A0C_B0:
	A0 = V0 | V1;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 19044); //+ 0x4A64
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x80040ADC; //ZZ_40A0C_D0
	ZZ_CLOCKCYCLES_JR(8);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,80040AD4)
	ZZ_JUMPREGISTER_END();
ZZ_40A0C_D0:
	V0 = 0x80050000;
	V0 += 19168;
	V0 = EMU_ReadU16(V0);
	V1 = EMU_ReadS16(S0 + 8); //+ 0x8
	V0 <<= 16;
	V0 = (int32_t)V0 >> 16;
	if (V0 != V1)
	{
		ZZ_CLOCKCYCLES(8,0x80040B50);
		goto ZZ_40A0C_144;
	}
	V0 = 0x80050000;
	V0 = EMU_ReadU16(V0 + 19170); //+ 0x4AE2
	V1 = EMU_ReadS16(S0 + 10); //+ 0xA
	V0 <<= 16;
	V0 = (int32_t)V0 >> 16;
	if (V0 != V1)
	{
		ZZ_CLOCKCYCLES(15,0x80040B50);
		goto ZZ_40A0C_144;
	}
	V0 = 0x80050000;
	V0 = EMU_ReadU16(V0 + 19172); //+ 0x4AE4
	V1 = EMU_ReadS16(S0 + 12); //+ 0xC
	V0 <<= 16;
	V0 = (int32_t)V0 >> 16;
	if (V0 != V1)
	{
		ZZ_CLOCKCYCLES(22,0x80040B50);
		goto ZZ_40A0C_144;
	}
	V0 = 0x80050000;
	V0 = EMU_ReadU16(V0 + 19174); //+ 0x4AE6
	V1 = EMU_ReadS16(S0 + 14); //+ 0xE
	V0 <<= 16;
	V0 = (int32_t)V0 >> 16;
	if (V0 == V1)
	{
		ZZ_CLOCKCYCLES(29,0x80040D14);
		goto ZZ_40A0C_308;
	}
	ZZ_CLOCKCYCLES(29,0x80040B50);
ZZ_40A0C_144:
	RA = 0x80040B58; //ZZ_40A0C_14C
	ZZ_CLOCKCYCLES(2,0x8003F23C);
	goto ZZ_3F23C;
ZZ_40A0C_14C:
	V1 = EMU_ReadS16(S0 + 8); //+ 0x8
	EMU_Write8(S0 + 18,V0); //+ 0x12
	V0 = V1 << 2;
	V0 += V1;
	V0 <<= 1;
	A1 = V0 + 608;
	V0 = EMU_ReadU8(S0 + 18); //+ 0x12
	A0 = EMU_ReadS16(S0 + 10); //+ 0xA
	if (V0)
	{
		S1 = A0 + 19;
		ZZ_CLOCKCYCLES(10,0x80040B84);
		goto ZZ_40A0C_178;
	}
	S1 = A0 + 19;
	S1 = A0 + 16;
	ZZ_CLOCKCYCLES(11,0x80040B84);
ZZ_40A0C_178:
	V1 = EMU_ReadS16(S0 + 12); //+ 0xC
	if (!V1)
	{
		V0 = V1 << 2;
		ZZ_CLOCKCYCLES(4,0x80040BA4);
		goto ZZ_40A0C_198;
	}
	V0 = V1 << 2;
	V0 += V1;
	V0 <<= 1;
	A2 = A1 + V0;
	ZZ_CLOCKCYCLES(8,0x80040BA8);
	goto ZZ_40A0C_19C;
ZZ_40A0C_198:
	A2 = A1 + 2560;
	ZZ_CLOCKCYCLES(1,0x80040BA8);
ZZ_40A0C_19C:
	V0 = EMU_ReadS16(S0 + 14); //+ 0xE
	if (V0)
	{
		S2 = S1 + V0;
		ZZ_CLOCKCYCLES(4,0x80040BBC);
		goto ZZ_40A0C_1B0;
	}
	S2 = S1 + V0;
	S2 = S1 + 240;
	ZZ_CLOCKCYCLES(5,0x80040BBC);
ZZ_40A0C_1B0:
	V0 = (int32_t)A1 < 500;
	if (V0)
	{
		A0 = 0x1F4;
		ZZ_CLOCKCYCLES(3,0x80040BDC);
		goto ZZ_40A0C_1D0;
	}
	A0 = 0x1F4;
	A0 = A1;
	V0 = (int32_t)A0 < 3291;
	if (V0)
	{
		A1 = A0;
		ZZ_CLOCKCYCLES(7,0x80040BE0);
		goto ZZ_40A0C_1D4;
	}
	A1 = A0;
	A0 = 0xCDA;
	ZZ_CLOCKCYCLES(8,0x80040BDC);
ZZ_40A0C_1D0:
	A1 = A0;
	ZZ_CLOCKCYCLES(1,0x80040BE0);
ZZ_40A0C_1D4:
	V1 = A1 + 80;
	V0 = (int32_t)A2 < (int32_t)V1;
	if (V0)
	{
		V0 = (int32_t)S1 < 16;
		ZZ_CLOCKCYCLES(4,0x80040C04);
		goto ZZ_40A0C_1F8;
	}
	V0 = (int32_t)S1 < 16;
	V1 = A2;
	V0 = (int32_t)V1 < 3291;
	if (V0)
	{
		V0 = (int32_t)S1 < 16;
		ZZ_CLOCKCYCLES(8,0x80040C04);
		goto ZZ_40A0C_1F8;
	}
	V0 = (int32_t)S1 < 16;
	V1 = 0xCDA;
	ZZ_CLOCKCYCLES(9,0x80040C04);
ZZ_40A0C_1F8:
	if (V0)
	{
		A2 = V1;
		ZZ_CLOCKCYCLES(2,0x80040C58);
		goto ZZ_40A0C_24C;
	}
	A2 = V1;
	V0 = EMU_ReadU8(S0 + 18); //+ 0x12
	if (!V0)
	{
		V0 = (int32_t)S1 < 311;
		ZZ_CLOCKCYCLES(6,0x80040C2C);
		goto ZZ_40A0C_220;
	}
	V0 = (int32_t)S1 < 311;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(8,0x80040C38);
		goto ZZ_40A0C_22C;
	}
	A0 = S1;
	ZZ_CLOCKCYCLES(10,0x80040C5C);
	goto ZZ_40A0C_250;
ZZ_40A0C_220:
	V0 = (int32_t)S1 < 257;
	if (V0)
	{
		ZZ_CLOCKCYCLES(3,0x80040C50);
		goto ZZ_40A0C_244;
	}
	ZZ_CLOCKCYCLES(3,0x80040C38);
ZZ_40A0C_22C:
	V0 = EMU_ReadU8(S0 + 18); //+ 0x12
	if (!V0)
	{
		A0 = 0x100;
		ZZ_CLOCKCYCLES(4,0x80040C5C);
		goto ZZ_40A0C_250;
	}
	A0 = 0x100;
	A0 = 0x136;
	ZZ_CLOCKCYCLES(6,0x80040C5C);
	goto ZZ_40A0C_250;
ZZ_40A0C_244:
	A0 = S1;
	ZZ_CLOCKCYCLES(2,0x80040C5C);
	goto ZZ_40A0C_250;
ZZ_40A0C_24C:
	A0 = 0x10;
	ZZ_CLOCKCYCLES(1,0x80040C5C);
ZZ_40A0C_250:
	S1 = A0;
	V1 = S1 + 2;
	V0 = (int32_t)S2 < (int32_t)V1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(5,0x80040CB8);
		goto ZZ_40A0C_2AC;
	}
	V0 = EMU_ReadU8(S0 + 18); //+ 0x12
	if (!V0)
	{
		V0 = (int32_t)S2 < 313;
		ZZ_CLOCKCYCLES(9,0x80040C90);
		goto ZZ_40A0C_284;
	}
	V0 = (int32_t)S2 < 313;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(11,0x80040C9C);
		goto ZZ_40A0C_290;
	}
	V1 = S2;
	ZZ_CLOCKCYCLES(13,0x80040CB8);
	goto ZZ_40A0C_2AC;
ZZ_40A0C_284:
	V0 = (int32_t)S2 < 259;
	if (V0)
	{
		ZZ_CLOCKCYCLES(3,0x80040CB4);
		goto ZZ_40A0C_2A8;
	}
	ZZ_CLOCKCYCLES(3,0x80040C9C);
ZZ_40A0C_290:
	V0 = EMU_ReadU8(S0 + 18); //+ 0x12
	if (!V0)
	{
		V1 = 0x102;
		ZZ_CLOCKCYCLES(4,0x80040CB8);
		goto ZZ_40A0C_2AC;
	}
	V1 = 0x102;
	V1 = 0x138;
	ZZ_CLOCKCYCLES(6,0x80040CB8);
	goto ZZ_40A0C_2AC;
ZZ_40A0C_2A8:
	V1 = S2;
	ZZ_CLOCKCYCLES(1,0x80040CB8);
ZZ_40A0C_2AC:
	S2 = V1;
	V0 = A2 & 0xFFF;
	V0 <<= 12;
	A0 = A1 & 0xFFF;
	V1 = 0x6000000;
	A1 = 0x80050000;
	A1 = EMU_ReadU32(A1 + 19044); //+ 0x4A64
	A0 |= V1;
	V1 = EMU_ReadU32(A1 + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(V1);
	RA = 0x80040CE8; //ZZ_40A0C_2DC
	A0 |= V0;
	ZZ_CLOCKCYCLES_JR(12);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V1,80040CE0)
	ZZ_JUMPREGISTER_END();
ZZ_40A0C_2DC:
	V0 = S2 & 0x3FF;
	V0 <<= 10;
	A0 = S1 & 0x3FF;
	V1 = 0x7000000;
	A1 = 0x80050000;
	A1 = EMU_ReadU32(A1 + 19044); //+ 0x4A64
	A0 |= V1;
	V1 = EMU_ReadU32(A1 + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(V1);
	RA = 0x80040D14; //ZZ_40A0C_308
	A0 |= V0;
	ZZ_CLOCKCYCLES_JR(11);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V1,80040D0C)
	ZZ_JUMPREGISTER_END();
ZZ_40A0C_308:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 19176); //+ 0x4AE8
	V0 = EMU_ReadU32(S0 + 16); //+ 0x10
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(6,0x80040D9C);
		goto ZZ_40A0C_390;
	}
	V0 = 0x80050000;
	V0 = EMU_ReadU16(V0 + 19160); //+ 0x4AD8
	V1 = EMU_ReadS16(S0);
	V0 <<= 16;
	V0 = (int32_t)V0 >> 16;
	if (V0 != V1)
	{
		ZZ_CLOCKCYCLES(13,0x80040D9C);
		goto ZZ_40A0C_390;
	}
	V0 = 0x80050000;
	V0 = EMU_ReadU16(V0 + 19162); //+ 0x4ADA
	V1 = EMU_ReadS16(S0 + 2); //+ 0x2
	V0 <<= 16;
	V0 = (int32_t)V0 >> 16;
	if (V0 != V1)
	{
		ZZ_CLOCKCYCLES(20,0x80040D9C);
		goto ZZ_40A0C_390;
	}
	V0 = 0x80050000;
	V0 = EMU_ReadU16(V0 + 19164); //+ 0x4ADC
	V1 = EMU_ReadS16(S0 + 4); //+ 0x4
	V0 <<= 16;
	V0 = (int32_t)V0 >> 16;
	if (V0 != V1)
	{
		ZZ_CLOCKCYCLES(27,0x80040D9C);
		goto ZZ_40A0C_390;
	}
	V0 = 0x80050000;
	V0 = EMU_ReadU16(V0 + 19166); //+ 0x4ADE
	V1 = EMU_ReadS16(S0 + 6); //+ 0x6
	V0 <<= 16;
	V0 = (int32_t)V0 >> 16;
	if (V0 == V1)
	{
		ZZ_CLOCKCYCLES(34,0x80040E84);
		goto ZZ_40A0C_478;
	}
	ZZ_CLOCKCYCLES(34,0x80040D9C);
ZZ_40A0C_390:
	RA = 0x80040DA4; //ZZ_40A0C_398
	ZZ_CLOCKCYCLES(2,0x8003F23C);
	goto ZZ_3F23C;
ZZ_40A0C_398:
	EMU_Write8(S0 + 18,V0); //+ 0x12
	V1 = EMU_ReadU8(S0 + 18); //+ 0x12
	V0 = 0x1;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(5,0x80040DBC);
		goto ZZ_40A0C_3B0;
	}
	S3 |= 0x8;
	ZZ_CLOCKCYCLES(6,0x80040DBC);
ZZ_40A0C_3B0:
	V0 = EMU_ReadU8(S0 + 17); //+ 0x11
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x80040DD0);
		goto ZZ_40A0C_3C4;
	}
	S3 |= 0x10;
	ZZ_CLOCKCYCLES(5,0x80040DD0);
ZZ_40A0C_3C4:
	V0 = EMU_ReadU8(S0 + 16); //+ 0x10
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x80040DE4);
		goto ZZ_40A0C_3D8;
	}
	S3 |= 0x20;
	ZZ_CLOCKCYCLES(5,0x80040DE4);
ZZ_40A0C_3D8:
	V0 = 0x80050000;
	V0 += 19055;
	V0 = EMU_ReadU8(V0);
	if (!V0)
	{
		ZZ_CLOCKCYCLES(6,0x80040E00);
		goto ZZ_40A0C_3F4;
	}
	S3 |= 0x80;
	ZZ_CLOCKCYCLES(7,0x80040E00);
ZZ_40A0C_3F4:
	V1 = EMU_ReadS16(S0 + 4); //+ 0x4
	V0 = (int32_t)V1 < 281;
	if (V0)
	{
		V0 = (int32_t)V1 < 353;
		ZZ_CLOCKCYCLES(5,0x80040E48);
		goto ZZ_40A0C_43C;
	}
	V0 = (int32_t)V1 < 353;
	if (!V0)
	{
		V0 = (int32_t)V1 < 401;
		ZZ_CLOCKCYCLES(7,0x80040E24);
		goto ZZ_40A0C_418;
	}
	V0 = (int32_t)V1 < 401;
	S3 |= 0x1;
	ZZ_CLOCKCYCLES(9,0x80040E48);
	goto ZZ_40A0C_43C;
ZZ_40A0C_418:
	if (!V0)
	{
		V0 = (int32_t)V1 < 561;
		ZZ_CLOCKCYCLES(2,0x80040E34);
		goto ZZ_40A0C_428;
	}
	V0 = (int32_t)V1 < 561;
	S3 |= 0x40;
	ZZ_CLOCKCYCLES(4,0x80040E48);
	goto ZZ_40A0C_43C;
ZZ_40A0C_428:
	if (!V0)
	{
		ZZ_CLOCKCYCLES(2,0x80040E44);
		goto ZZ_40A0C_438;
	}
	S3 |= 0x2;
	ZZ_CLOCKCYCLES(4,0x80040E48);
	goto ZZ_40A0C_43C;
ZZ_40A0C_438:
	S3 |= 0x3;
	ZZ_CLOCKCYCLES(1,0x80040E48);
ZZ_40A0C_43C:
	V0 = EMU_ReadU8(S0 + 18); //+ 0x12
	V1 = EMU_ReadS16(S0 + 6); //+ 0x6
	if (V0)
	{
		V0 = (int32_t)V1 < 289;
		ZZ_CLOCKCYCLES(4,0x80040E5C);
		goto ZZ_40A0C_450;
	}
	V0 = (int32_t)V1 < 289;
	V0 = (int32_t)V1 < 257;
	ZZ_CLOCKCYCLES(5,0x80040E5C);
ZZ_40A0C_450:
	if (V0)
	{
		ZZ_CLOCKCYCLES(2,0x80040E68);
		goto ZZ_40A0C_45C;
	}
	S3 |= 0x24;
	ZZ_CLOCKCYCLES(3,0x80040E68);
ZZ_40A0C_45C:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 19044); //+ 0x4A64
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x80040E84; //ZZ_40A0C_478
	A0 = S3;
	ZZ_CLOCKCYCLES_JR(7);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,80040E7C)
	ZZ_JUMPREGISTER_END();
ZZ_40A0C_478:
	A0 = 0x80050000;
	A0 += 19160;
	A1 = S0;
	RA = 0x80040E98; //ZZ_40A0C_48C
	A2 = 0x14;
	ZZ_CLOCKCYCLES(5,0x8003D710);
	goto ZZ_3D710;
ZZ_40A0C_48C:
	V0 = S0;
	RA = EMU_ReadU32(SP + 32); //+ 0x20
	S3 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 40;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(9);
	ZZ_JUMPREGISTER(0x80016BD8,ZZ_16A6C_16C);
	ZZ_JUMPREGISTER(0x80017334,ZZ_172E8_4C);
	ZZ_JUMPREGISTER(0x80017258,ZZ_16E5C_3FC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80040A0C,0x80040A60,ZZ_40A0C);
ZZ_MARK_TARGET(0x80040A60,0x80040A84,ZZ_40A0C_54);
ZZ_MARK_TARGET(0x80040A84,0x80040AA0,ZZ_40A0C_78);
ZZ_MARK_TARGET(0x80040AA0,0x80040ABC,ZZ_40A0C_94);
ZZ_MARK_TARGET(0x80040ABC,0x80040ADC,ZZ_40A0C_B0);
ZZ_MARK_TARGET(0x80040ADC,0x80040B50,ZZ_40A0C_D0);
ZZ_MARK_TARGET(0x80040B50,0x80040B58,ZZ_40A0C_144);
ZZ_MARK_TARGET(0x80040B58,0x80040B84,ZZ_40A0C_14C);
ZZ_MARK_TARGET(0x80040B84,0x80040BA4,ZZ_40A0C_178);
ZZ_MARK_TARGET(0x80040BA4,0x80040BA8,ZZ_40A0C_198);
ZZ_MARK_TARGET(0x80040BA8,0x80040BBC,ZZ_40A0C_19C);
ZZ_MARK_TARGET(0x80040BBC,0x80040BDC,ZZ_40A0C_1B0);
ZZ_MARK_TARGET(0x80040BDC,0x80040BE0,ZZ_40A0C_1D0);
ZZ_MARK_TARGET(0x80040BE0,0x80040C04,ZZ_40A0C_1D4);
ZZ_MARK_TARGET(0x80040C04,0x80040C2C,ZZ_40A0C_1F8);
ZZ_MARK_TARGET(0x80040C2C,0x80040C38,ZZ_40A0C_220);
ZZ_MARK_TARGET(0x80040C38,0x80040C50,ZZ_40A0C_22C);
ZZ_MARK_TARGET(0x80040C50,0x80040C58,ZZ_40A0C_244);
ZZ_MARK_TARGET(0x80040C58,0x80040C5C,ZZ_40A0C_24C);
ZZ_MARK_TARGET(0x80040C5C,0x80040C90,ZZ_40A0C_250);
ZZ_MARK_TARGET(0x80040C90,0x80040C9C,ZZ_40A0C_284);
ZZ_MARK_TARGET(0x80040C9C,0x80040CB4,ZZ_40A0C_290);
ZZ_MARK_TARGET(0x80040CB4,0x80040CB8,ZZ_40A0C_2A8);
ZZ_MARK_TARGET(0x80040CB8,0x80040CE8,ZZ_40A0C_2AC);
ZZ_MARK_TARGET(0x80040CE8,0x80040D14,ZZ_40A0C_2DC);
ZZ_MARK_TARGET(0x80040D14,0x80040D9C,ZZ_40A0C_308);
ZZ_MARK_TARGET(0x80040D9C,0x80040DA4,ZZ_40A0C_390);
ZZ_MARK_TARGET(0x80040DA4,0x80040DBC,ZZ_40A0C_398);
ZZ_MARK_TARGET(0x80040DBC,0x80040DD0,ZZ_40A0C_3B0);
ZZ_MARK_TARGET(0x80040DD0,0x80040DE4,ZZ_40A0C_3C4);
ZZ_MARK_TARGET(0x80040DE4,0x80040E00,ZZ_40A0C_3D8);
ZZ_MARK_TARGET(0x80040E00,0x80040E24,ZZ_40A0C_3F4);
ZZ_MARK_TARGET(0x80040E24,0x80040E34,ZZ_40A0C_418);
ZZ_MARK_TARGET(0x80040E34,0x80040E44,ZZ_40A0C_428);
ZZ_MARK_TARGET(0x80040E44,0x80040E48,ZZ_40A0C_438);
ZZ_MARK_TARGET(0x80040E48,0x80040E5C,ZZ_40A0C_43C);
ZZ_MARK_TARGET(0x80040E5C,0x80040E68,ZZ_40A0C_450);
ZZ_MARK_TARGET(0x80040E68,0x80040E84,ZZ_40A0C_45C);
ZZ_MARK_TARGET(0x80040E84,0x80040E98,ZZ_40A0C_478);
ZZ_MARK_TARGET(0x80040E98,0x80040EBC,ZZ_40A0C_48C);
