#ifdef ZZ_INCLUDE_CODE
ZZ_55EF0:
	SP -= 48;
	V0 = A0 << 16;
	T2 = (int32_t)V0 >> 16;
	V0 = 0x80070000;
	V0 -= 15268;
	A2 = T2 << 2;
	A2 += V0;
	V0 = A1 << 16;
	T0 = (int32_t)V0 >> 16;
	V0 = T0 << 1;
	V0 += T0;
	V0 <<= 2;
	V0 = V0 - T0;
	V0 <<= 4;
	EMU_Write32(SP + 36,S5); //+ 0x24
	EMU_Write32(SP + 40,RA); //+ 0x28
	EMU_Write32(SP + 32,S4); //+ 0x20
	EMU_Write32(SP + 28,S3); //+ 0x1C
	EMU_Write32(SP + 24,S2); //+ 0x18
	EMU_Write32(SP + 20,S1); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	V1 = EMU_ReadU32(A2);
	S3 = V1 + V0;
	A3 = EMU_ReadU32(S3);
	T1 = A3 + 1;
	EMU_Write32(S3,T1);
	V1 = EMU_ReadU32(A2);
	S2 = EMU_ReadU8(A3);
	V0 += V1;
	V0 = EMU_ReadU32(V0 + 152); //+ 0x98
	V1 = 1025;
	V0 &= 0x401;
	if (V0 != V1)
	{
		S5 = R0;
		ZZ_CLOCKCYCLES(36,0x80055FAC);
		goto ZZ_55EF0_BC;
	}
	S5 = R0;
	V1 = EMU_ReadU32(S3 + 16); //+ 0x10
	V0 = V1 + 1;
	if (T1 != V0)
	{
		V0 = S2 & 0x80;
		ZZ_CLOCKCYCLES(41,0x80055FB0);
		goto ZZ_55EF0_C0;
	}
	V0 = S2 & 0x80;
	A0 = T2;
	A2 = EMU_ReadU8(V1 + 1); //+ 0x1
	RA = 0x80055FA4; //ZZ_55EF0_B4
	A1 = T0;
	ZZ_CLOCKCYCLES(45,0x80055CAC);
	goto ZZ_55CAC;
ZZ_55EF0_B4:
	V0 = -1;
	ZZ_CLOCKCYCLES(2,0x8005626C);
	goto ZZ_55EF0_37C;
ZZ_55EF0_BC:
	V0 = S2 & 0x80;
	ZZ_CLOCKCYCLES(1,0x80055FB0);
ZZ_55EF0_C0:
	if (!V0)
	{
		V0 = S2 & 0xF;
		ZZ_CLOCKCYCLES(2,0x8005610C);
		goto ZZ_55EF0_21C;
	}
	V0 = S2 & 0xF;
	EMU_Write8(S3 + 23,V0); //+ 0x17
	A2 = S2 & 0xF0;
	V0 = 192;
	if (A2 == V0)
	{
		V0 = (int32_t)A2 < 193;
		ZZ_CLOCKCYCLES(7,0x80056090);
		goto ZZ_55EF0_1A0;
	}
	V0 = (int32_t)A2 < 193;
	if (!V0)
	{
		V0 = 144;
		ZZ_CLOCKCYCLES(9,0x80055FEC);
		goto ZZ_55EF0_FC;
	}
	V0 = 144;
	if (A2 == V0)
	{
		V0 = 176;
		ZZ_CLOCKCYCLES(11,0x80056008);
		goto ZZ_55EF0_118;
	}
	V0 = 176;
	if (A2 == V0)
	{
		A0 <<= 16;
		ZZ_CLOCKCYCLES(13,0x80056064);
		goto ZZ_55EF0_174;
	}
	A0 <<= 16;
	V0 = S5;
	ZZ_CLOCKCYCLES(15,0x8005626C);
	goto ZZ_55EF0_37C;
ZZ_55EF0_FC:
	V0 = 224;
	if (A2 == V0)
	{
		V0 = 240;
		ZZ_CLOCKCYCLES(3,0x800560C0);
		goto ZZ_55EF0_1D0;
	}
	V0 = 240;
	if (A2 == V0)
	{
		V0 = 255;
		ZZ_CLOCKCYCLES(5,0x800560E4);
		goto ZZ_55EF0_1F4;
	}
	V0 = 255;
	V0 = S5;
	ZZ_CLOCKCYCLES(7,0x8005626C);
	goto ZZ_55EF0_37C;
ZZ_55EF0_118:
	S1 = A0 << 16;
	S1 = (int32_t)S1 >> 16;
	A0 = S1;
	S0 = A1 << 16;
	S0 = (int32_t)S0 >> 16;
	V1 = EMU_ReadU32(S3);
	V0 = 144;
	EMU_Write8(S3 + 22,V0); //+ 0x16
	V0 = V1 + 1;
	EMU_Write32(S3,V0);
	S2 = EMU_ReadU8(V1);
	V0 = V1 + 2;
	EMU_Write32(S3,V0);
	S4 = EMU_ReadU8(V1 + 1); //+ 0x1
	RA = 0x80056048; //ZZ_55EF0_158
	A1 = S0;
	ZZ_CLOCKCYCLES(16,0x800545DC);
	goto ZZ_545DC;
ZZ_55EF0_158:
	A0 = S1;
	A1 = S0;
	EMU_Write32(S3 + 144,V0); //+ 0x90
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 1040); //+ 0x410
	A2 = S2;
	ZZ_CLOCKCYCLES(7,0x800561A0);
	goto ZZ_55EF0_2B0;
ZZ_55EF0_174:
	A0 = (int32_t)A0 >> 16;
	V0 = 176;
	V1 = EMU_ReadU32(S3);
	EMU_Write8(S3 + 22,V0); //+ 0x16
	V0 = V1 + 1;
	EMU_Write32(S3,V0);
	A2 = EMU_ReadU8(V1);
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 1056); //+ 0x420
	A1 <<= 16;
	ZZ_CLOCKCYCLES(11,0x8005625C);
	goto ZZ_55EF0_36C;
ZZ_55EF0_1A0:
	A0 <<= 16;
	A0 = (int32_t)A0 >> 16;
	V0 = 192;
	V1 = EMU_ReadU32(S3);
	EMU_Write8(S3 + 22,V0); //+ 0x16
	V0 = V1 + 1;
	EMU_Write32(S3,V0);
	A2 = EMU_ReadU8(V1);
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 1044); //+ 0x414
	A1 <<= 16;
	ZZ_CLOCKCYCLES(12,0x8005625C);
	goto ZZ_55EF0_36C;
ZZ_55EF0_1D0:
	A0 <<= 16;
	A0 = (int32_t)A0 >> 16;
	V1 = 224;
	V0 = EMU_ReadU32(S3);
	A1 <<= 16;
	EMU_Write8(S3 + 22,V1); //+ 0x16
	V0 += 1;
	EMU_Write32(S3,V0);
	ZZ_CLOCKCYCLES(9,0x800561FC);
	goto ZZ_55EF0_30C;
ZZ_55EF0_1F4:
	V1 = EMU_ReadU32(S3);
	EMU_Write8(S3 + 22,V0); //+ 0x16
	V0 = V1 + 1;
	EMU_Write32(S3,V0);
	A2 = EMU_ReadU8(V1);
	V0 = 47;
	if (A2 == V0)
	{
		ZZ_CLOCKCYCLES(8,0x80056224);
		goto ZZ_55EF0_334;
	}
	A0 <<= 16;
	ZZ_CLOCKCYCLES(10,0x8005624C);
	goto ZZ_55EF0_35C;
ZZ_55EF0_21C:
	V1 = EMU_ReadU8(S3 + 22); //+ 0x16
	V0 = 192;
	if (V1 == V0)
	{
		V0 = (int32_t)V1 < 193;
		ZZ_CLOCKCYCLES(4,0x800561D0);
		goto ZZ_55EF0_2E0;
	}
	V0 = (int32_t)V1 < 193;
	if (!V0)
	{
		V0 = 144;
		ZZ_CLOCKCYCLES(6,0x8005613C);
		goto ZZ_55EF0_24C;
	}
	V0 = 144;
	if (V1 == V0)
	{
		V0 = 176;
		ZZ_CLOCKCYCLES(8,0x80056158);
		goto ZZ_55EF0_268;
	}
	V0 = 176;
	if (V1 == V0)
	{
		A0 <<= 16;
		ZZ_CLOCKCYCLES(10,0x800561B4);
		goto ZZ_55EF0_2C4;
	}
	A0 <<= 16;
	V0 = S5;
	ZZ_CLOCKCYCLES(12,0x8005626C);
	goto ZZ_55EF0_37C;
ZZ_55EF0_24C:
	V0 = 224;
	if (V1 == V0)
	{
		V0 = 255;
		ZZ_CLOCKCYCLES(3,0x800561F0);
		goto ZZ_55EF0_300;
	}
	V0 = 255;
	if (V1 == V0)
	{
		A2 = S2 & 0xFF;
		ZZ_CLOCKCYCLES(5,0x80056218);
		goto ZZ_55EF0_328;
	}
	A2 = S2 & 0xFF;
	V0 = S5;
	ZZ_CLOCKCYCLES(7,0x8005626C);
	goto ZZ_55EF0_37C;
ZZ_55EF0_268:
	S1 = A0 << 16;
	S1 = (int32_t)S1 >> 16;
	A0 = S1;
	S0 = A1 << 16;
	S0 = (int32_t)S0 >> 16;
	V1 = EMU_ReadU32(S3);
	V0 = V1 + 1;
	EMU_Write32(S3,V0);
	S4 = EMU_ReadU8(V1);
	RA = 0x80056188; //ZZ_55EF0_298
	A1 = S0;
	ZZ_CLOCKCYCLES(12,0x800545DC);
	goto ZZ_545DC;
ZZ_55EF0_298:
	A0 = S1;
	A1 = S0;
	A2 = S2;
	EMU_Write32(S3 + 144,V0); //+ 0x90
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 1040); //+ 0x410
	ZZ_CLOCKCYCLES(6,0x800561A0);
ZZ_55EF0_2B0:
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x800561AC; //ZZ_55EF0_2BC
	A3 = S4;
	ZZ_CLOCKCYCLES_JR(3);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,800561A4)
	ZZ_JUMPREGISTER_END();
ZZ_55EF0_2BC:
	V0 = S5;
	ZZ_CLOCKCYCLES(2,0x8005626C);
	goto ZZ_55EF0_37C;
ZZ_55EF0_2C4:
	A0 = (int32_t)A0 >> 16;
	A1 <<= 16;
	A1 = (int32_t)A1 >> 16;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 1056); //+ 0x420
	A2 = S2;
	ZZ_CLOCKCYCLES(7,0x80056260);
	goto ZZ_55EF0_370;
ZZ_55EF0_2E0:
	A0 <<= 16;
	A0 = (int32_t)A0 >> 16;
	A1 <<= 16;
	A1 = (int32_t)A1 >> 16;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 1044); //+ 0x414
	A2 = S2;
	ZZ_CLOCKCYCLES(8,0x80056260);
	goto ZZ_55EF0_370;
ZZ_55EF0_300:
	A0 <<= 16;
	A0 = (int32_t)A0 >> 16;
	A1 <<= 16;
	ZZ_CLOCKCYCLES(3,0x800561FC);
ZZ_55EF0_30C:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 1048); //+ 0x418
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x80056210; //ZZ_55EF0_320
	A1 = (int32_t)A1 >> 16;
	ZZ_CLOCKCYCLES_JR(5);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,80056208)
	ZZ_JUMPREGISTER_END();
ZZ_55EF0_320:
	V0 = S5;
	ZZ_CLOCKCYCLES(2,0x8005626C);
	goto ZZ_55EF0_37C;
ZZ_55EF0_328:
	V0 = 47;
	if (A2 != V0)
	{
		ZZ_CLOCKCYCLES(3,0x80056248);
		goto ZZ_55EF0_358;
	}
	ZZ_CLOCKCYCLES(3,0x80056224);
ZZ_55EF0_334:
	S5 = 1;
	A0 <<= 16;
	A0 = (int32_t)A0 >> 16;
	A1 <<= 16;
	A1 = (int32_t)A1 >> 16;
	RA = 0x80056240; //ZZ_55EF0_350
	A2 = 47;
	ZZ_CLOCKCYCLES(7,0x80055CAC);
	goto ZZ_55CAC;
ZZ_55EF0_350:
	V0 = S5;
	ZZ_CLOCKCYCLES(2,0x8005626C);
	goto ZZ_55EF0_37C;
ZZ_55EF0_358:
	A0 <<= 16;
	ZZ_CLOCKCYCLES(1,0x8005624C);
ZZ_55EF0_35C:
	A0 = (int32_t)A0 >> 16;
	A1 <<= 16;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 1052); //+ 0x41C
	ZZ_CLOCKCYCLES(4,0x8005625C);
ZZ_55EF0_36C:
	A1 = (int32_t)A1 >> 16;
	ZZ_CLOCKCYCLES(1,0x80056260);
ZZ_55EF0_370:
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x80056268; //ZZ_55EF0_378
	ZZ_CLOCKCYCLES_JR(2);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,80056260)
	ZZ_JUMPREGISTER_END();
ZZ_55EF0_378:
	V0 = S5;
	ZZ_CLOCKCYCLES(1,0x8005626C);
ZZ_55EF0_37C:
	RA = EMU_ReadU32(SP + 40); //+ 0x28
	S5 = EMU_ReadU32(SP + 36); //+ 0x24
	S4 = EMU_ReadU32(SP + 32); //+ 0x20
	S3 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 48;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(10);
	ZZ_JUMPREGISTER(0x80055C64,ZZ_55BA4_C0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80055EF0,ZZ_55EF0);
ZZ_MARK(0x80055EF4);
ZZ_MARK(0x80055EF8);
ZZ_MARK(0x80055EFC);
ZZ_MARK(0x80055F00);
ZZ_MARK(0x80055F04);
ZZ_MARK(0x80055F08);
ZZ_MARK(0x80055F0C);
ZZ_MARK(0x80055F10);
ZZ_MARK(0x80055F14);
ZZ_MARK(0x80055F18);
ZZ_MARK(0x80055F1C);
ZZ_MARK(0x80055F20);
ZZ_MARK(0x80055F24);
ZZ_MARK(0x80055F28);
ZZ_MARK(0x80055F2C);
ZZ_MARK(0x80055F30);
ZZ_MARK(0x80055F34);
ZZ_MARK(0x80055F38);
ZZ_MARK(0x80055F3C);
ZZ_MARK(0x80055F40);
ZZ_MARK(0x80055F44);
ZZ_MARK(0x80055F48);
ZZ_MARK(0x80055F4C);
ZZ_MARK(0x80055F50);
ZZ_MARK(0x80055F54);
ZZ_MARK(0x80055F58);
ZZ_MARK(0x80055F5C);
ZZ_MARK(0x80055F60);
ZZ_MARK(0x80055F64);
ZZ_MARK(0x80055F68);
ZZ_MARK(0x80055F6C);
ZZ_MARK(0x80055F70);
ZZ_MARK(0x80055F74);
ZZ_MARK(0x80055F78);
ZZ_MARK(0x80055F7C);
ZZ_MARK(0x80055F80);
ZZ_MARK(0x80055F84);
ZZ_MARK(0x80055F88);
ZZ_MARK(0x80055F8C);
ZZ_MARK(0x80055F90);
ZZ_MARK(0x80055F94);
ZZ_MARK(0x80055F98);
ZZ_MARK(0x80055F9C);
ZZ_MARK(0x80055FA0);
ZZ_MARK_TARGET(0x80055FA4,ZZ_55EF0_B4);
ZZ_MARK(0x80055FA8);
ZZ_MARK_TARGET(0x80055FAC,ZZ_55EF0_BC);
ZZ_MARK_TARGET(0x80055FB0,ZZ_55EF0_C0);
ZZ_MARK(0x80055FB4);
ZZ_MARK(0x80055FB8);
ZZ_MARK(0x80055FBC);
ZZ_MARK(0x80055FC0);
ZZ_MARK(0x80055FC4);
ZZ_MARK(0x80055FC8);
ZZ_MARK(0x80055FCC);
ZZ_MARK(0x80055FD0);
ZZ_MARK(0x80055FD4);
ZZ_MARK(0x80055FD8);
ZZ_MARK(0x80055FDC);
ZZ_MARK(0x80055FE0);
ZZ_MARK(0x80055FE4);
ZZ_MARK(0x80055FE8);
ZZ_MARK_TARGET(0x80055FEC,ZZ_55EF0_FC);
ZZ_MARK(0x80055FF0);
ZZ_MARK(0x80055FF4);
ZZ_MARK(0x80055FF8);
ZZ_MARK(0x80055FFC);
ZZ_MARK(0x80056000);
ZZ_MARK(0x80056004);
ZZ_MARK_TARGET(0x80056008,ZZ_55EF0_118);
ZZ_MARK(0x8005600C);
ZZ_MARK(0x80056010);
ZZ_MARK(0x80056014);
ZZ_MARK(0x80056018);
ZZ_MARK(0x8005601C);
ZZ_MARK(0x80056020);
ZZ_MARK(0x80056024);
ZZ_MARK(0x80056028);
ZZ_MARK(0x8005602C);
ZZ_MARK(0x80056030);
ZZ_MARK(0x80056034);
ZZ_MARK(0x80056038);
ZZ_MARK(0x8005603C);
ZZ_MARK(0x80056040);
ZZ_MARK(0x80056044);
ZZ_MARK_TARGET(0x80056048,ZZ_55EF0_158);
ZZ_MARK(0x8005604C);
ZZ_MARK(0x80056050);
ZZ_MARK(0x80056054);
ZZ_MARK(0x80056058);
ZZ_MARK(0x8005605C);
ZZ_MARK(0x80056060);
ZZ_MARK_TARGET(0x80056064,ZZ_55EF0_174);
ZZ_MARK(0x80056068);
ZZ_MARK(0x8005606C);
ZZ_MARK(0x80056070);
ZZ_MARK(0x80056074);
ZZ_MARK(0x80056078);
ZZ_MARK(0x8005607C);
ZZ_MARK(0x80056080);
ZZ_MARK(0x80056084);
ZZ_MARK(0x80056088);
ZZ_MARK(0x8005608C);
ZZ_MARK_TARGET(0x80056090,ZZ_55EF0_1A0);
ZZ_MARK(0x80056094);
ZZ_MARK(0x80056098);
ZZ_MARK(0x8005609C);
ZZ_MARK(0x800560A0);
ZZ_MARK(0x800560A4);
ZZ_MARK(0x800560A8);
ZZ_MARK(0x800560AC);
ZZ_MARK(0x800560B0);
ZZ_MARK(0x800560B4);
ZZ_MARK(0x800560B8);
ZZ_MARK(0x800560BC);
ZZ_MARK_TARGET(0x800560C0,ZZ_55EF0_1D0);
ZZ_MARK(0x800560C4);
ZZ_MARK(0x800560C8);
ZZ_MARK(0x800560CC);
ZZ_MARK(0x800560D0);
ZZ_MARK(0x800560D4);
ZZ_MARK(0x800560D8);
ZZ_MARK(0x800560DC);
ZZ_MARK(0x800560E0);
ZZ_MARK_TARGET(0x800560E4,ZZ_55EF0_1F4);
ZZ_MARK(0x800560E8);
ZZ_MARK(0x800560EC);
ZZ_MARK(0x800560F0);
ZZ_MARK(0x800560F4);
ZZ_MARK(0x800560F8);
ZZ_MARK(0x800560FC);
ZZ_MARK(0x80056100);
ZZ_MARK(0x80056104);
ZZ_MARK(0x80056108);
ZZ_MARK_TARGET(0x8005610C,ZZ_55EF0_21C);
ZZ_MARK(0x80056110);
ZZ_MARK(0x80056114);
ZZ_MARK(0x80056118);
ZZ_MARK(0x8005611C);
ZZ_MARK(0x80056120);
ZZ_MARK(0x80056124);
ZZ_MARK(0x80056128);
ZZ_MARK(0x8005612C);
ZZ_MARK(0x80056130);
ZZ_MARK(0x80056134);
ZZ_MARK(0x80056138);
ZZ_MARK_TARGET(0x8005613C,ZZ_55EF0_24C);
ZZ_MARK(0x80056140);
ZZ_MARK(0x80056144);
ZZ_MARK(0x80056148);
ZZ_MARK(0x8005614C);
ZZ_MARK(0x80056150);
ZZ_MARK(0x80056154);
ZZ_MARK_TARGET(0x80056158,ZZ_55EF0_268);
ZZ_MARK(0x8005615C);
ZZ_MARK(0x80056160);
ZZ_MARK(0x80056164);
ZZ_MARK(0x80056168);
ZZ_MARK(0x8005616C);
ZZ_MARK(0x80056170);
ZZ_MARK(0x80056174);
ZZ_MARK(0x80056178);
ZZ_MARK(0x8005617C);
ZZ_MARK(0x80056180);
ZZ_MARK(0x80056184);
ZZ_MARK_TARGET(0x80056188,ZZ_55EF0_298);
ZZ_MARK(0x8005618C);
ZZ_MARK(0x80056190);
ZZ_MARK(0x80056194);
ZZ_MARK(0x80056198);
ZZ_MARK(0x8005619C);
ZZ_MARK_TARGET(0x800561A0,ZZ_55EF0_2B0);
ZZ_MARK(0x800561A4);
ZZ_MARK(0x800561A8);
ZZ_MARK_TARGET(0x800561AC,ZZ_55EF0_2BC);
ZZ_MARK(0x800561B0);
ZZ_MARK_TARGET(0x800561B4,ZZ_55EF0_2C4);
ZZ_MARK(0x800561B8);
ZZ_MARK(0x800561BC);
ZZ_MARK(0x800561C0);
ZZ_MARK(0x800561C4);
ZZ_MARK(0x800561C8);
ZZ_MARK(0x800561CC);
ZZ_MARK_TARGET(0x800561D0,ZZ_55EF0_2E0);
ZZ_MARK(0x800561D4);
ZZ_MARK(0x800561D8);
ZZ_MARK(0x800561DC);
ZZ_MARK(0x800561E0);
ZZ_MARK(0x800561E4);
ZZ_MARK(0x800561E8);
ZZ_MARK(0x800561EC);
ZZ_MARK_TARGET(0x800561F0,ZZ_55EF0_300);
ZZ_MARK(0x800561F4);
ZZ_MARK(0x800561F8);
ZZ_MARK_TARGET(0x800561FC,ZZ_55EF0_30C);
ZZ_MARK(0x80056200);
ZZ_MARK(0x80056204);
ZZ_MARK(0x80056208);
ZZ_MARK(0x8005620C);
ZZ_MARK_TARGET(0x80056210,ZZ_55EF0_320);
ZZ_MARK(0x80056214);
ZZ_MARK_TARGET(0x80056218,ZZ_55EF0_328);
ZZ_MARK(0x8005621C);
ZZ_MARK(0x80056220);
ZZ_MARK_TARGET(0x80056224,ZZ_55EF0_334);
ZZ_MARK(0x80056228);
ZZ_MARK(0x8005622C);
ZZ_MARK(0x80056230);
ZZ_MARK(0x80056234);
ZZ_MARK(0x80056238);
ZZ_MARK(0x8005623C);
ZZ_MARK_TARGET(0x80056240,ZZ_55EF0_350);
ZZ_MARK(0x80056244);
ZZ_MARK_TARGET(0x80056248,ZZ_55EF0_358);
ZZ_MARK_TARGET(0x8005624C,ZZ_55EF0_35C);
ZZ_MARK(0x80056250);
ZZ_MARK(0x80056254);
ZZ_MARK(0x80056258);
ZZ_MARK_TARGET(0x8005625C,ZZ_55EF0_36C);
ZZ_MARK_TARGET(0x80056260,ZZ_55EF0_370);
ZZ_MARK(0x80056264);
ZZ_MARK_TARGET(0x80056268,ZZ_55EF0_378);
ZZ_MARK_TARGET(0x8005626C,ZZ_55EF0_37C);
ZZ_MARK(0x80056270);
ZZ_MARK(0x80056274);
ZZ_MARK(0x80056278);
ZZ_MARK(0x8005627C);
ZZ_MARK(0x80056280);
ZZ_MARK(0x80056284);
ZZ_MARK(0x80056288);
ZZ_MARK(0x8005628C);
ZZ_MARK(0x80056290);
