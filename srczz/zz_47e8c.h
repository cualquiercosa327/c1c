#ifdef ZZ_INCLUDE_CODE
ZZ_47E8C:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 13712); //+ 0xFFFFCA70
	SP -= 72;
	EMU_Write32(SP + 44,S1); //+ 0x2C
	S1 = A1;
	EMU_Write32(SP + 60,S5); //+ 0x3C
	S5 = A2;
	EMU_Write32(SP + 48,S2); //+ 0x30
	S2 = A3;
	EMU_Write32(SP + 40,S0); //+ 0x28
	S0 = A0;
	EMU_Write32(SP + 64,RA); //+ 0x40
	EMU_Write32(SP + 56,S4); //+ 0x38
	V0 = (int32_t)V0 < 2;
	if (V0)
	{
		EMU_Write32(SP + 52,S3); //+ 0x34
		ZZ_CLOCKCYCLES(16,0x80047EF0);
		goto ZZ_47E8C_64;
	}
	EMU_Write32(SP + 52,S3); //+ 0x34
	V0 = S0 & 0xFF;
	V0 <<= 2;
	AT = 0x80060000;
	AT += V0;
	A1 = EMU_ReadU32(AT - 13684); //+ 0xFFFFCA8C
	A0 = 0x80010000;
	A0 += 2888;
	RA = 0x80047EF0; //ZZ_47E8C_64
	ZZ_CLOCKCYCLES(25,0x800494DC);
	goto ZZ_494DC;
ZZ_47E8C_64:
	V0 = S0 & 0xFF;
	V1 = V0 << 2;
	AT = 0x80060000;
	AT += V1;
	V0 = EMU_ReadU32(AT - 13140); //+ 0xFFFFCCAC
	if (!V0)
	{
		A0 = R0;
		ZZ_CLOCKCYCLES(8,0x80047F50);
		goto ZZ_47E8C_C4;
	}
	A0 = R0;
	if (S1)
	{
		ZZ_CLOCKCYCLES(10,0x80047F50);
		goto ZZ_47E8C_C4;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 13712); //+ 0xFFFFCA70
	if ((int32_t)V0 <= 0)
	{
		V0 = -2;
		ZZ_CLOCKCYCLES(15,0x80048280);
		goto ZZ_47E8C_3F4;
	}
	V0 = -2;
	AT = 0x80060000;
	AT += V1;
	A1 = EMU_ReadU32(AT - 13684); //+ 0xFFFFCA8C
	A0 = 0x80010000;
	A0 += 2896;
	RA = 0x80047F48; //ZZ_47E8C_BC
	ZZ_CLOCKCYCLES(22,0x800494DC);
	goto ZZ_494DC;
ZZ_47E8C_BC:
	V0 = -2;
	ZZ_CLOCKCYCLES(2,0x80048280);
	goto ZZ_47E8C_3F4;
ZZ_47E8C_C4:
	RA = 0x80047F58; //ZZ_47E8C_CC
	A1 = R0;
	ZZ_CLOCKCYCLES(2,0x80047940);
	goto ZZ_47940;
ZZ_47E8C_CC:
	V1 = S0 & 0xFF;
	V0 = 2;
	if (V1 != V0)
	{
		V0 = 14;
		ZZ_CLOCKCYCLES(4,0x80047F98);
		goto ZZ_47E8C_10C;
	}
	V0 = 14;
	A0 = R0;
	V1 = S1;
	ZZ_CLOCKCYCLES(6,0x80047F70);
ZZ_47E8C_E4:
	V0 = EMU_ReadU8(V1);
	AT = 0x80060000;
	AT += A0;
	EMU_Write8(AT - 13696,V0); //+ 0xFFFFCA80
	A0 += 1;
	V0 = (int32_t)A0 < 4;
	if (V0)
	{
		V1 += 1;
		ZZ_CLOCKCYCLES(8,0x80047F70);
		goto ZZ_47E8C_E4;
	}
	V1 += 1;
	V1 = S0 & 0xFF;
	V0 = 14;
	ZZ_CLOCKCYCLES(10,0x80047F98);
ZZ_47E8C_10C:
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(2,0x80047FAC);
		goto ZZ_47E8C_120;
	}
	V0 = EMU_ReadU8(S1);
	AT = 0x80060000;
	EMU_Write8(AT - 13692,V0); //+ 0xFFFFCA84
	ZZ_CLOCKCYCLES(5,0x80047FAC);
ZZ_47E8C_120:
	V0 = 0x80060000;
	V0 -= 12988;
	A0 = V1 << 2;
	EMU_Write8(V0,R0);
	AT = 0x80060000;
	AT += A0;
	V0 = EMU_ReadU32(AT - 13396); //+ 0xFFFFCBAC
	V1 = 0x80060000;
	V1 -= 13396;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(11,0x80047FE0);
		goto ZZ_47E8C_154;
	}
	AT = 0x80060000;
	EMU_Write8(AT - 12987,R0); //+ 0xFFFFCD45
	ZZ_CLOCKCYCLES(13,0x80047FE0);
ZZ_47E8C_154:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 13012); //+ 0xFFFFCD2C
	EMU_Write8(V0,R0);
	V0 = V1 + 256;
	V1 = A0 + V0;
	V0 = EMU_ReadU32(V1);
	if ((int32_t)V0 <= 0)
	{
		A0 = R0;
		ZZ_CLOCKCYCLES(10,0x80048038);
		goto ZZ_47E8C_1AC;
	}
	A0 = R0;
	A2 = V1;
	A1 = S1;
	ZZ_CLOCKCYCLES(12,0x80048010);
ZZ_47E8C_184:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 13004); //+ 0xFFFFCD34
	V0 = EMU_ReadU8(A1);
	A1 += 1;
	EMU_Write8(V1,V0);
	V0 = EMU_ReadU32(A2);
	A0 += 1;
	V0 = (int32_t)A0 < (int32_t)V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(10,0x80048010);
		goto ZZ_47E8C_184;
	}
	ZZ_CLOCKCYCLES(10,0x80048038);
ZZ_47E8C_1AC:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 13008); //+ 0xFFFFCD30
	AT = 0x80060000;
	EMU_Write8(AT - 13691,S0); //+ 0xFFFFCA85
	EMU_Write8(V0,S0);
	if (S2)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(7,0x80048280);
		goto ZZ_47E8C_3F4;
	}
	V0 = R0;
	RA = 0x8004805C; //ZZ_47E8C_1D0
	A0 = -1;
	ZZ_CLOCKCYCLES(9,0x8004A71C);
	goto ZZ_4A71C;
ZZ_47E8C_1D0:
	V0 += 960;
	A0 = 0x80060000;
	A0 -= 12988;
	AT = 0x80060000;
	EMU_Write32(AT + 264,V0); //+ 0x108
	AT = 0x80060000;
	EMU_Write32(AT + 268,R0); //+ 0x10C
	V1 = EMU_ReadU8(A0);
	V0 = 0x80010000;
	V0 += 2912;
	AT = 0x80060000;
	EMU_Write32(AT + 272,V0); //+ 0x110
	if (V1)
	{
		A2 = S5;
		ZZ_CLOCKCYCLES(14,0x80048234);
		goto ZZ_47E8C_3A8;
	}
	A2 = S5;
	S3 = 0x80060000;
	S3 -= 13556;
	S2 = A0;
	S4 = S2 + 1;
	ZZ_CLOCKCYCLES(18,0x800480A4);
ZZ_47E8C_218:
	RA = 0x800480AC; //ZZ_47E8C_220
	A0 = -1;
	ZZ_CLOCKCYCLES(2,0x8004A71C);
	goto ZZ_4A71C;
ZZ_47E8C_220:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 264); //+ 0x108
	V1 = (int32_t)V1 < (int32_t)V0;
	if (V1)
	{
		ZZ_CLOCKCYCLES(6,0x800480EC);
		goto ZZ_47E8C_260;
	}
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 268); //+ 0x10C
	V0 = V1 + 1;
	AT = 0x80060000;
	EMU_Write32(AT + 268,V0); //+ 0x10C
	V0 = 0x3C0000;
	V0 = (int32_t)V0 < (int32_t)V1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(16,0x80048160);
		goto ZZ_47E8C_2D4;
	}
	ZZ_CLOCKCYCLES(16,0x800480EC);
ZZ_47E8C_260:
	A0 = 0x80010000;
	A0 += 2732;
	RA = 0x800480FC; //ZZ_47E8C_270
	ZZ_CLOCKCYCLES(4,0x80049424);
	goto ZZ_49424;
ZZ_47E8C_270:
	A0 = EMU_ReadU8(S2);
	V0 = EMU_ReadU8(S2 + 1); //+ 0x1
	A1 = 0x80060000;
	A1 = EMU_ReadU32(A1 + 272); //+ 0x110
	V0 <<= 2;
	V0 += S3;
	A0 <<= 2;
	V1 = EMU_ReadU32(V0);
	V0 = 0x80060000;
	V0 = EMU_ReadU8(V0 - 13691); //+ 0xFFFFCA85
	A0 += S3;
	V0 <<= 2;
	EMU_Write32(SP + 16,V1); //+ 0x10
	AT = 0x80060000;
	AT += V0;
	A2 = EMU_ReadU32(AT - 13684); //+ 0xFFFFCA8C
	A3 = EMU_ReadU32(A0);
	A0 = 0x80010000;
	A0 += 2748;
	RA = 0x80048150; //ZZ_47E8C_2C4
	ZZ_CLOCKCYCLES(21,0x800494DC);
	goto ZZ_494DC;
ZZ_47E8C_2C4:
	RA = 0x80048158; //ZZ_47E8C_2CC
	ZZ_CLOCKCYCLES(2,0x80048330);
	goto ZZ_48330;
ZZ_47E8C_2CC:
	V0 = -1;
	ZZ_CLOCKCYCLES(2,0x80048164);
	goto ZZ_47E8C_2D8;
ZZ_47E8C_2D4:
	V0 = R0;
	ZZ_CLOCKCYCLES(1,0x80048164);
ZZ_47E8C_2D8:
	if (V0)
	{
		V0 = -1;
		ZZ_CLOCKCYCLES(2,0x80048280);
		goto ZZ_47E8C_3F4;
	}
	V0 = -1;
	RA = 0x80048174; //ZZ_47E8C_2E8
	ZZ_CLOCKCYCLES(4,0x8004AA64);
	goto ZZ_4AA64;
ZZ_47E8C_2E8:
	if (!V0)
	{
		ZZ_CLOCKCYCLES(2,0x80048224);
		goto ZZ_47E8C_398;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 13012); //+ 0xFFFFCD2C
	V0 = EMU_ReadU8(V0);
	S1 = V0 & 0x3;
	ZZ_CLOCKCYCLES(8,0x80048194);
ZZ_47E8C_308:
	RA = 0x8004819C; //ZZ_47E8C_310
	ZZ_CLOCKCYCLES(2,0x800473B8);
	goto ZZ_473B8;
ZZ_47E8C_310:
	S0 = V0;
	if (!S0)
	{
		V0 = S0 & 0x4;
		ZZ_CLOCKCYCLES(3,0x80048214);
		goto ZZ_47E8C_388;
	}
	V0 = S0 & 0x4;
	if (!V0)
	{
		V0 = S0 & 0x2;
		ZZ_CLOCKCYCLES(5,0x800481DC);
		goto ZZ_47E8C_350;
	}
	V0 = S0 & 0x2;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 13720); //+ 0xFFFFCA68
	if (!V0)
	{
		ZZ_CLOCKCYCLES(10,0x800481D8);
		goto ZZ_47E8C_34C;
	}
	A0 = EMU_ReadU8(S4);
	A1 = 0x80060000;
	A1 += 248;
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x800481D8; //ZZ_47E8C_34C
	ZZ_CLOCKCYCLES_JR(15);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,800481D0)
	ZZ_JUMPREGISTER_END();
ZZ_47E8C_34C:
	V0 = S0 & 0x2;
	ZZ_CLOCKCYCLES(1,0x800481DC);
ZZ_47E8C_350:
	if (!V0)
	{
		ZZ_CLOCKCYCLES(2,0x80048194);
		goto ZZ_47E8C_308;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 13724); //+ 0xFFFFCA64
	if (!V0)
	{
		ZZ_CLOCKCYCLES(7,0x80048194);
		goto ZZ_47E8C_308;
	}
	A0 = EMU_ReadU8(S2);
	A1 = 0x80060000;
	A1 += 240;
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x8004820C; //ZZ_47E8C_380
	ZZ_CLOCKCYCLES_JR(12);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,80048204)
	ZZ_JUMPREGISTER_END();
ZZ_47E8C_380:
	ZZ_CLOCKCYCLES(2,0x80048194);
	goto ZZ_47E8C_308;
ZZ_47E8C_388:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 13012); //+ 0xFFFFCD2C
	EMU_Write8(V0,S1);
	ZZ_CLOCKCYCLES(4,0x80048224);
ZZ_47E8C_398:
	V0 = EMU_ReadU8(S2);
	if (!V0)
	{
		A2 = S5;
		ZZ_CLOCKCYCLES(4,0x800480A4);
		goto ZZ_47E8C_218;
	}
	A2 = S5;
	ZZ_CLOCKCYCLES(4,0x80048234);
ZZ_47E8C_3A8:
	A0 = 0x80060000;
	A0 += 240;
	if (!A2)
	{
		ZZ_CLOCKCYCLES(4,0x80048264);
		goto ZZ_47E8C_3D8;
	}
	V1 = 7;
	A1 = -1;
	ZZ_CLOCKCYCLES(6,0x8004824C);
ZZ_47E8C_3C0:
	V0 = EMU_ReadU8(A0);
	A0 += 1;
	V1 -= 1;
	EMU_Write8(A2,V0);
	if (V1 != A1)
	{
		A2 += 1;
		ZZ_CLOCKCYCLES(6,0x8004824C);
		goto ZZ_47E8C_3C0;
	}
	A2 += 1;
	ZZ_CLOCKCYCLES(6,0x80048264);
ZZ_47E8C_3D8:
	V0 = 0x80060000;
	V0 -= 12988;
	V0 = EMU_ReadU8(V0);
	V0 ^= 0x5;
	V0 = V0 < 1;
	V0 = -V0;
	ZZ_CLOCKCYCLES(7,0x80048280);
ZZ_47E8C_3F4:
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
	ZZ_JUMPREGISTER(0x80046EC8,ZZ_46DE8_E0);
	ZZ_JUMPREGISTER(0x80046EA4,ZZ_46DE8_BC);
	ZZ_JUMPREGISTER(0x80046E7C,ZZ_46DE8_94);
	ZZ_JUMPREGISTER(0x800486B8,ZZ_48554_164);
	ZZ_JUMPREGISTER(0x800486E0,ZZ_48554_18C);
	ZZ_JUMPREGISTER(0x800486F4,ZZ_48554_1A0);
	ZZ_JUMPREGISTER(0x80048710,ZZ_48554_1BC);
	ZZ_JUMPREGISTER(0x80046FF8,ZZ_46F20_D8);
	ZZ_JUMPREGISTER(0x80046FD4,ZZ_46F20_B4);
	ZZ_JUMPREGISTER(0x80046FAC,ZZ_46F20_8C);
	ZZ_JUMPREGISTER(0x80047124,ZZ_4704C_D8);
	ZZ_JUMPREGISTER(0x80047100,ZZ_4704C_B4);
	ZZ_JUMPREGISTER(0x800470D8,ZZ_4704C_8C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80047E8C,ZZ_47E8C);
ZZ_MARK(0x80047E90);
ZZ_MARK(0x80047E94);
ZZ_MARK(0x80047E98);
ZZ_MARK(0x80047E9C);
ZZ_MARK(0x80047EA0);
ZZ_MARK(0x80047EA4);
ZZ_MARK(0x80047EA8);
ZZ_MARK(0x80047EAC);
ZZ_MARK(0x80047EB0);
ZZ_MARK(0x80047EB4);
ZZ_MARK(0x80047EB8);
ZZ_MARK(0x80047EBC);
ZZ_MARK(0x80047EC0);
ZZ_MARK(0x80047EC4);
ZZ_MARK(0x80047EC8);
ZZ_MARK(0x80047ECC);
ZZ_MARK(0x80047ED0);
ZZ_MARK(0x80047ED4);
ZZ_MARK(0x80047ED8);
ZZ_MARK(0x80047EDC);
ZZ_MARK(0x80047EE0);
ZZ_MARK(0x80047EE4);
ZZ_MARK(0x80047EE8);
ZZ_MARK(0x80047EEC);
ZZ_MARK_TARGET(0x80047EF0,ZZ_47E8C_64);
ZZ_MARK(0x80047EF4);
ZZ_MARK(0x80047EF8);
ZZ_MARK(0x80047EFC);
ZZ_MARK(0x80047F00);
ZZ_MARK(0x80047F04);
ZZ_MARK(0x80047F08);
ZZ_MARK(0x80047F0C);
ZZ_MARK(0x80047F10);
ZZ_MARK(0x80047F14);
ZZ_MARK(0x80047F18);
ZZ_MARK(0x80047F1C);
ZZ_MARK(0x80047F20);
ZZ_MARK(0x80047F24);
ZZ_MARK(0x80047F28);
ZZ_MARK(0x80047F2C);
ZZ_MARK(0x80047F30);
ZZ_MARK(0x80047F34);
ZZ_MARK(0x80047F38);
ZZ_MARK(0x80047F3C);
ZZ_MARK(0x80047F40);
ZZ_MARK(0x80047F44);
ZZ_MARK_TARGET(0x80047F48,ZZ_47E8C_BC);
ZZ_MARK(0x80047F4C);
ZZ_MARK_TARGET(0x80047F50,ZZ_47E8C_C4);
ZZ_MARK(0x80047F54);
ZZ_MARK_TARGET(0x80047F58,ZZ_47E8C_CC);
ZZ_MARK(0x80047F5C);
ZZ_MARK(0x80047F60);
ZZ_MARK(0x80047F64);
ZZ_MARK(0x80047F68);
ZZ_MARK(0x80047F6C);
ZZ_MARK_TARGET(0x80047F70,ZZ_47E8C_E4);
ZZ_MARK(0x80047F74);
ZZ_MARK(0x80047F78);
ZZ_MARK(0x80047F7C);
ZZ_MARK(0x80047F80);
ZZ_MARK(0x80047F84);
ZZ_MARK(0x80047F88);
ZZ_MARK(0x80047F8C);
ZZ_MARK(0x80047F90);
ZZ_MARK(0x80047F94);
ZZ_MARK_TARGET(0x80047F98,ZZ_47E8C_10C);
ZZ_MARK(0x80047F9C);
ZZ_MARK(0x80047FA0);
ZZ_MARK(0x80047FA4);
ZZ_MARK(0x80047FA8);
ZZ_MARK_TARGET(0x80047FAC,ZZ_47E8C_120);
ZZ_MARK(0x80047FB0);
ZZ_MARK(0x80047FB4);
ZZ_MARK(0x80047FB8);
ZZ_MARK(0x80047FBC);
ZZ_MARK(0x80047FC0);
ZZ_MARK(0x80047FC4);
ZZ_MARK(0x80047FC8);
ZZ_MARK(0x80047FCC);
ZZ_MARK(0x80047FD0);
ZZ_MARK(0x80047FD4);
ZZ_MARK(0x80047FD8);
ZZ_MARK(0x80047FDC);
ZZ_MARK_TARGET(0x80047FE0,ZZ_47E8C_154);
ZZ_MARK(0x80047FE4);
ZZ_MARK(0x80047FE8);
ZZ_MARK(0x80047FEC);
ZZ_MARK(0x80047FF0);
ZZ_MARK(0x80047FF4);
ZZ_MARK(0x80047FF8);
ZZ_MARK(0x80047FFC);
ZZ_MARK(0x80048000);
ZZ_MARK(0x80048004);
ZZ_MARK(0x80048008);
ZZ_MARK(0x8004800C);
ZZ_MARK_TARGET(0x80048010,ZZ_47E8C_184);
ZZ_MARK(0x80048014);
ZZ_MARK(0x80048018);
ZZ_MARK(0x8004801C);
ZZ_MARK(0x80048020);
ZZ_MARK(0x80048024);
ZZ_MARK(0x80048028);
ZZ_MARK(0x8004802C);
ZZ_MARK(0x80048030);
ZZ_MARK(0x80048034);
ZZ_MARK_TARGET(0x80048038,ZZ_47E8C_1AC);
ZZ_MARK(0x8004803C);
ZZ_MARK(0x80048040);
ZZ_MARK(0x80048044);
ZZ_MARK(0x80048048);
ZZ_MARK(0x8004804C);
ZZ_MARK(0x80048050);
ZZ_MARK(0x80048054);
ZZ_MARK(0x80048058);
ZZ_MARK_TARGET(0x8004805C,ZZ_47E8C_1D0);
ZZ_MARK(0x80048060);
ZZ_MARK(0x80048064);
ZZ_MARK(0x80048068);
ZZ_MARK(0x8004806C);
ZZ_MARK(0x80048070);
ZZ_MARK(0x80048074);
ZZ_MARK(0x80048078);
ZZ_MARK(0x8004807C);
ZZ_MARK(0x80048080);
ZZ_MARK(0x80048084);
ZZ_MARK(0x80048088);
ZZ_MARK(0x8004808C);
ZZ_MARK(0x80048090);
ZZ_MARK(0x80048094);
ZZ_MARK(0x80048098);
ZZ_MARK(0x8004809C);
ZZ_MARK(0x800480A0);
ZZ_MARK_TARGET(0x800480A4,ZZ_47E8C_218);
ZZ_MARK(0x800480A8);
ZZ_MARK_TARGET(0x800480AC,ZZ_47E8C_220);
ZZ_MARK(0x800480B0);
ZZ_MARK(0x800480B4);
ZZ_MARK(0x800480B8);
ZZ_MARK(0x800480BC);
ZZ_MARK(0x800480C0);
ZZ_MARK(0x800480C4);
ZZ_MARK(0x800480C8);
ZZ_MARK(0x800480CC);
ZZ_MARK(0x800480D0);
ZZ_MARK(0x800480D4);
ZZ_MARK(0x800480D8);
ZZ_MARK(0x800480DC);
ZZ_MARK(0x800480E0);
ZZ_MARK(0x800480E4);
ZZ_MARK(0x800480E8);
ZZ_MARK_TARGET(0x800480EC,ZZ_47E8C_260);
ZZ_MARK(0x800480F0);
ZZ_MARK(0x800480F4);
ZZ_MARK(0x800480F8);
ZZ_MARK_TARGET(0x800480FC,ZZ_47E8C_270);
ZZ_MARK(0x80048100);
ZZ_MARK(0x80048104);
ZZ_MARK(0x80048108);
ZZ_MARK(0x8004810C);
ZZ_MARK(0x80048110);
ZZ_MARK(0x80048114);
ZZ_MARK(0x80048118);
ZZ_MARK(0x8004811C);
ZZ_MARK(0x80048120);
ZZ_MARK(0x80048124);
ZZ_MARK(0x80048128);
ZZ_MARK(0x8004812C);
ZZ_MARK(0x80048130);
ZZ_MARK(0x80048134);
ZZ_MARK(0x80048138);
ZZ_MARK(0x8004813C);
ZZ_MARK(0x80048140);
ZZ_MARK(0x80048144);
ZZ_MARK(0x80048148);
ZZ_MARK(0x8004814C);
ZZ_MARK_TARGET(0x80048150,ZZ_47E8C_2C4);
ZZ_MARK(0x80048154);
ZZ_MARK_TARGET(0x80048158,ZZ_47E8C_2CC);
ZZ_MARK(0x8004815C);
ZZ_MARK_TARGET(0x80048160,ZZ_47E8C_2D4);
ZZ_MARK_TARGET(0x80048164,ZZ_47E8C_2D8);
ZZ_MARK(0x80048168);
ZZ_MARK(0x8004816C);
ZZ_MARK(0x80048170);
ZZ_MARK_TARGET(0x80048174,ZZ_47E8C_2E8);
ZZ_MARK(0x80048178);
ZZ_MARK(0x8004817C);
ZZ_MARK(0x80048180);
ZZ_MARK(0x80048184);
ZZ_MARK(0x80048188);
ZZ_MARK(0x8004818C);
ZZ_MARK(0x80048190);
ZZ_MARK_TARGET(0x80048194,ZZ_47E8C_308);
ZZ_MARK(0x80048198);
ZZ_MARK_TARGET(0x8004819C,ZZ_47E8C_310);
ZZ_MARK(0x800481A0);
ZZ_MARK(0x800481A4);
ZZ_MARK(0x800481A8);
ZZ_MARK(0x800481AC);
ZZ_MARK(0x800481B0);
ZZ_MARK(0x800481B4);
ZZ_MARK(0x800481B8);
ZZ_MARK(0x800481BC);
ZZ_MARK(0x800481C0);
ZZ_MARK(0x800481C4);
ZZ_MARK(0x800481C8);
ZZ_MARK(0x800481CC);
ZZ_MARK(0x800481D0);
ZZ_MARK(0x800481D4);
ZZ_MARK_TARGET(0x800481D8,ZZ_47E8C_34C);
ZZ_MARK_TARGET(0x800481DC,ZZ_47E8C_350);
ZZ_MARK(0x800481E0);
ZZ_MARK(0x800481E4);
ZZ_MARK(0x800481E8);
ZZ_MARK(0x800481EC);
ZZ_MARK(0x800481F0);
ZZ_MARK(0x800481F4);
ZZ_MARK(0x800481F8);
ZZ_MARK(0x800481FC);
ZZ_MARK(0x80048200);
ZZ_MARK(0x80048204);
ZZ_MARK(0x80048208);
ZZ_MARK_TARGET(0x8004820C,ZZ_47E8C_380);
ZZ_MARK(0x80048210);
ZZ_MARK_TARGET(0x80048214,ZZ_47E8C_388);
ZZ_MARK(0x80048218);
ZZ_MARK(0x8004821C);
ZZ_MARK(0x80048220);
ZZ_MARK_TARGET(0x80048224,ZZ_47E8C_398);
ZZ_MARK(0x80048228);
ZZ_MARK(0x8004822C);
ZZ_MARK(0x80048230);
ZZ_MARK_TARGET(0x80048234,ZZ_47E8C_3A8);
ZZ_MARK(0x80048238);
ZZ_MARK(0x8004823C);
ZZ_MARK(0x80048240);
ZZ_MARK(0x80048244);
ZZ_MARK(0x80048248);
ZZ_MARK_TARGET(0x8004824C,ZZ_47E8C_3C0);
ZZ_MARK(0x80048250);
ZZ_MARK(0x80048254);
ZZ_MARK(0x80048258);
ZZ_MARK(0x8004825C);
ZZ_MARK(0x80048260);
ZZ_MARK_TARGET(0x80048264,ZZ_47E8C_3D8);
ZZ_MARK(0x80048268);
ZZ_MARK(0x8004826C);
ZZ_MARK(0x80048270);
ZZ_MARK(0x80048274);
ZZ_MARK(0x80048278);
ZZ_MARK(0x8004827C);
ZZ_MARK_TARGET(0x80048280,ZZ_47E8C_3F4);
ZZ_MARK(0x80048284);
ZZ_MARK(0x80048288);
ZZ_MARK(0x8004828C);
ZZ_MARK(0x80048290);
ZZ_MARK(0x80048294);
ZZ_MARK(0x80048298);
ZZ_MARK(0x8004829C);
ZZ_MARK(0x800482A0);
ZZ_MARK(0x800482A4);
