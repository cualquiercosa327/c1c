#ifdef ZZ_INCLUDE_CODE
ZZ_26F14:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 11632); //+ 0x2D70
	SP -= 48;
	EMU_Write32(SP + 40,RA); //+ 0x28
	EMU_Write32(SP + 36,S1); //+ 0x24
	V0 &= 0x400;
	if (!V0)
	{
		EMU_Write32(SP + 32,S0); //+ 0x20
		ZZ_CLOCKCYCLES(8,0x80026F74);
		goto ZZ_26F14_60;
	}
	EMU_Write32(SP + 32,S0); //+ 0x20
	V0 = 0x80070000;
	V0 = EMU_ReadU32(V0 - 25632); //+ 0xFFFF9BE0
	V0 &= 0xE0;
	if (!V0)
	{
		A0 = R0;
		ZZ_CLOCKCYCLES(14,0x80026F74);
		goto ZZ_26F14_60;
	}
	A0 = R0;
	A1 = SP + 24;
	V0 = 0x8000;
	RA = 0x80026F5C; //ZZ_26F14_48
	EMU_Write32(SP + 24,V0); //+ 0x18
	ZZ_CLOCKCYCLES(18,0x80026250);
	goto ZZ_26250;
ZZ_26F14_48:
	A0 = R0;
	A1 = 0x4300;
	A2 = R0;
	A3 = R0;
	RA = 0x80026F74; //ZZ_26F14_60
	EMU_Write32(SP + 16,R0); //+ 0x10
	ZZ_CLOCKCYCLES(6,0x8001D360);
	goto ZZ_1D360;
ZZ_26F14_60:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 2524); //+ 0xFFFFF624
	if (!A0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(5,0x80027150);
		goto ZZ_26F14_23C;
	}
	V0 = R0;
	A1 = 0x80070000;
	A1 -= 12756;
	V1 = EMU_ReadU32(A1);
	V0 = V1 & 0x2;
	if (V0)
	{
		V0 = 0x20000;
		ZZ_CLOCKCYCLES(12,0x80026FAC);
		goto ZZ_26F14_98;
	}
	V0 = 0x20000;
	V0 = R0;
	ZZ_CLOCKCYCLES(14,0x80027150);
	goto ZZ_26F14_23C;
ZZ_26F14_98:
	AT = 0x80060000;
	EMU_Write8(AT - 17357,R0); //+ 0xFFFFBC33
	V0 &= V1;
	if (!V0)
	{
		S1 = R0;
		ZZ_CLOCKCYCLES(5,0x80026FC8);
		goto ZZ_26F14_B4;
	}
	S1 = R0;
	S0 = A1 + 476;
	ZZ_CLOCKCYCLES(7,0x80026FCC);
	goto ZZ_26F14_B8;
ZZ_26F14_B4:
	S0 = A0 + 96;
	ZZ_CLOCKCYCLES(1,0x80026FCC);
ZZ_26F14_B8:
	RA = 0x80026FD4; //ZZ_26F14_C0
	A0 = S0;
	ZZ_CLOCKCYCLES(2,0x80025F8C);
	goto ZZ_25F8C;
ZZ_26F14_C0:
	RA = 0x80026FDC; //ZZ_26F14_C8
	ZZ_CLOCKCYCLES(2,0x80023A6C);
	goto ZZ_23A6C;
ZZ_26F14_C8:
	RA = 0x80026FE4; //ZZ_26F14_D0
	ZZ_CLOCKCYCLES(2,0x80026310);
	goto ZZ_26310;
ZZ_26F14_D0:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 11632); //+ 0x2D70
	V1 = 0x80060000;
	V1 = EMU_ReadS8(V1 - 17364); //+ 0xFFFFBC2C
	V0 &= 0x400;
	V0 = V0 < 1;
	V0 <<= 8;
	AT = 0x80070000;
	EMU_Write32(AT - 12724,V0); //+ 0xFFFFCE4C
	V0 = 0x5;
	if (V1 == V0)
	{
		V0 = 0x7;
		ZZ_CLOCKCYCLES(12,0x80027088);
		goto ZZ_26F14_174;
	}
	V0 = 0x7;
	if (V1 == V0)
	{
		V0 = (int32_t)V1 < 8;
		ZZ_CLOCKCYCLES(14,0x80027058);
		goto ZZ_26F14_144;
	}
	V0 = (int32_t)V1 < 8;
	if (!V0)
	{
		V0 = 0x6;
		ZZ_CLOCKCYCLES(16,0x80027034);
		goto ZZ_26F14_120;
	}
	V0 = 0x6;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(18,0x80027048);
		goto ZZ_26F14_134;
	}
	ZZ_CLOCKCYCLES(20,0x80027074);
	goto ZZ_26F14_160;
ZZ_26F14_120:
	V0 = 0x9;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(3,0x80027068);
		goto ZZ_26F14_154;
	}
	ZZ_CLOCKCYCLES(5,0x80027074);
	goto ZZ_26F14_160;
ZZ_26F14_134:
	RA = 0x80027050; //ZZ_26F14_13C
	A0 = S0;
	ZZ_CLOCKCYCLES(2,0x80022CD0);
	goto ZZ_22CD0;
ZZ_26F14_13C:
	ZZ_CLOCKCYCLES(2,0x80027074);
	goto ZZ_26F14_160;
ZZ_26F14_144:
	RA = 0x80027060; //ZZ_26F14_14C
	A0 = S0;
	ZZ_CLOCKCYCLES(2,0x800230E8);
	goto ZZ_230E8;
ZZ_26F14_14C:
	S1 = 0x1;
	ZZ_CLOCKCYCLES(2,0x80027074);
	goto ZZ_26F14_160;
ZZ_26F14_154:
	RA = 0x80027070; //ZZ_26F14_15C
	A0 = S0;
	ZZ_CLOCKCYCLES(2,0x800231CC);
	goto ZZ_231CC;
ZZ_26F14_15C:
	S1 = 0x1;
	ZZ_CLOCKCYCLES(1,0x80027074);
ZZ_26F14_160:
	V1 = 0x80060000;
	V1 = EMU_ReadS8(V1 - 17364); //+ 0xFFFFBC2C
	V0 = 0x5;
	if (V1 != V0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(5,0x80027150);
		goto ZZ_26F14_23C;
	}
	V0 = 0x1;
	ZZ_CLOCKCYCLES(5,0x80027088);
ZZ_26F14_174:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 2952); //+ 0xB88
	V0 = V1 < 11;
	if (!V0)
	{
		V0 = V1 << 2;
		ZZ_CLOCKCYCLES(6,0x8002712C);
		goto ZZ_26F14_218;
	}
	V0 = V1 << 2;
	AT = 0x80010000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 1152); //+ 0x480
	ZZ_JUMPREGISTER_BEGIN(V0);
	ZZ_CLOCKCYCLES_JR(12);
	ZZ_JUMPREGISTER(0x800270B8,ZZ_26F14_1A4);
	ZZ_JUMPREGISTER(0x8002712C,ZZ_26F14_218);
	ZZ_JUMPREGISTER(0x800270CC,ZZ_26F14_1B8);
	ZZ_JUMPREGISTER(0x80027104,ZZ_26F14_1F0);
	ZZ_JUMPREGISTER(0x800270DC,ZZ_26F14_1C8);
	ZZ_JUMPREGISTER(0x80027118,ZZ_26F14_204);
	ZZ_JUMPREGISTER(0x800270F0,ZZ_26F14_1DC);
	ZZ_JUMPREGISTER_END();
ZZ_26F14_1A4:
	A0 = S0;
	RA = 0x800270C4; //ZZ_26F14_1B0
	A1 = S1;
	ZZ_CLOCKCYCLES(3,0x80022978);
	goto ZZ_22978;
ZZ_26F14_1B0:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(2,0x80027150);
	goto ZZ_26F14_23C;
ZZ_26F14_1B8:
	RA = 0x800270D4; //ZZ_26F14_1C0
	A0 = S0;
	ZZ_CLOCKCYCLES(2,0x80022AD4);
	goto ZZ_22AD4;
ZZ_26F14_1C0:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(2,0x80027150);
	goto ZZ_26F14_23C;
ZZ_26F14_1C8:
	A0 = S0;
	RA = 0x800270E8; //ZZ_26F14_1D4
	A1 = S1;
	ZZ_CLOCKCYCLES(3,0x80021C64);
	goto ZZ_21C64;
ZZ_26F14_1D4:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(2,0x80027150);
	goto ZZ_26F14_23C;
ZZ_26F14_1DC:
	A0 = S0;
	RA = 0x800270FC; //ZZ_26F14_1E8
	A1 = S1;
	ZZ_CLOCKCYCLES(3,0x800221A8);
	goto ZZ_221A8;
ZZ_26F14_1E8:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(2,0x80027150);
	goto ZZ_26F14_23C;
ZZ_26F14_1F0:
	A0 = S0;
	RA = 0x80027110; //ZZ_26F14_1FC
	A1 = S1;
	ZZ_CLOCKCYCLES(3,0x80022570);
	goto ZZ_22570;
ZZ_26F14_1FC:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(2,0x80027150);
	goto ZZ_26F14_23C;
ZZ_26F14_204:
	A0 = S0;
	RA = 0x80027124; //ZZ_26F14_210
	A1 = S1;
	ZZ_CLOCKCYCLES(3,0x8002281C);
	goto ZZ_2281C;
ZZ_26F14_210:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(2,0x80027150);
	goto ZZ_26F14_23C;
ZZ_26F14_218:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 2916); //+ 0xB64
	A1 = 0x80060000;
	A1 = EMU_ReadU32(A1 + 2924); //+ 0xB6C
	A2 = 0x80060000;
	A2 = EMU_ReadU32(A2 + 2936); //+ 0xB78
	RA = 0x8002714C; //ZZ_26F14_238
	A3 = R0;
	ZZ_CLOCKCYCLES(8,0x80020304);
	goto ZZ_20304;
ZZ_26F14_238:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(1,0x80027150);
ZZ_26F14_23C:
	RA = EMU_ReadU32(SP + 40); //+ 0x28
	S1 = EMU_ReadU32(SP + 36); //+ 0x24
	S0 = EMU_ReadU32(SP + 32); //+ 0x20
	SP += 48;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x80011B68,ZZ_11800_368);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80026F14,ZZ_26F14);
ZZ_MARK(0x80026F18);
ZZ_MARK(0x80026F1C);
ZZ_MARK(0x80026F20);
ZZ_MARK(0x80026F24);
ZZ_MARK(0x80026F28);
ZZ_MARK(0x80026F2C);
ZZ_MARK(0x80026F30);
ZZ_MARK(0x80026F34);
ZZ_MARK(0x80026F38);
ZZ_MARK(0x80026F3C);
ZZ_MARK(0x80026F40);
ZZ_MARK(0x80026F44);
ZZ_MARK(0x80026F48);
ZZ_MARK(0x80026F4C);
ZZ_MARK(0x80026F50);
ZZ_MARK(0x80026F54);
ZZ_MARK(0x80026F58);
ZZ_MARK_TARGET(0x80026F5C,ZZ_26F14_48);
ZZ_MARK(0x80026F60);
ZZ_MARK(0x80026F64);
ZZ_MARK(0x80026F68);
ZZ_MARK(0x80026F6C);
ZZ_MARK(0x80026F70);
ZZ_MARK_TARGET(0x80026F74,ZZ_26F14_60);
ZZ_MARK(0x80026F78);
ZZ_MARK(0x80026F7C);
ZZ_MARK(0x80026F80);
ZZ_MARK(0x80026F84);
ZZ_MARK(0x80026F88);
ZZ_MARK(0x80026F8C);
ZZ_MARK(0x80026F90);
ZZ_MARK(0x80026F94);
ZZ_MARK(0x80026F98);
ZZ_MARK(0x80026F9C);
ZZ_MARK(0x80026FA0);
ZZ_MARK(0x80026FA4);
ZZ_MARK(0x80026FA8);
ZZ_MARK_TARGET(0x80026FAC,ZZ_26F14_98);
ZZ_MARK(0x80026FB0);
ZZ_MARK(0x80026FB4);
ZZ_MARK(0x80026FB8);
ZZ_MARK(0x80026FBC);
ZZ_MARK(0x80026FC0);
ZZ_MARK(0x80026FC4);
ZZ_MARK_TARGET(0x80026FC8,ZZ_26F14_B4);
ZZ_MARK_TARGET(0x80026FCC,ZZ_26F14_B8);
ZZ_MARK(0x80026FD0);
ZZ_MARK_TARGET(0x80026FD4,ZZ_26F14_C0);
ZZ_MARK(0x80026FD8);
ZZ_MARK_TARGET(0x80026FDC,ZZ_26F14_C8);
ZZ_MARK(0x80026FE0);
ZZ_MARK_TARGET(0x80026FE4,ZZ_26F14_D0);
ZZ_MARK(0x80026FE8);
ZZ_MARK(0x80026FEC);
ZZ_MARK(0x80026FF0);
ZZ_MARK(0x80026FF4);
ZZ_MARK(0x80026FF8);
ZZ_MARK(0x80026FFC);
ZZ_MARK(0x80027000);
ZZ_MARK(0x80027004);
ZZ_MARK(0x80027008);
ZZ_MARK(0x8002700C);
ZZ_MARK(0x80027010);
ZZ_MARK(0x80027014);
ZZ_MARK(0x80027018);
ZZ_MARK(0x8002701C);
ZZ_MARK(0x80027020);
ZZ_MARK(0x80027024);
ZZ_MARK(0x80027028);
ZZ_MARK(0x8002702C);
ZZ_MARK(0x80027030);
ZZ_MARK_TARGET(0x80027034,ZZ_26F14_120);
ZZ_MARK(0x80027038);
ZZ_MARK(0x8002703C);
ZZ_MARK(0x80027040);
ZZ_MARK(0x80027044);
ZZ_MARK_TARGET(0x80027048,ZZ_26F14_134);
ZZ_MARK(0x8002704C);
ZZ_MARK_TARGET(0x80027050,ZZ_26F14_13C);
ZZ_MARK(0x80027054);
ZZ_MARK_TARGET(0x80027058,ZZ_26F14_144);
ZZ_MARK(0x8002705C);
ZZ_MARK_TARGET(0x80027060,ZZ_26F14_14C);
ZZ_MARK(0x80027064);
ZZ_MARK_TARGET(0x80027068,ZZ_26F14_154);
ZZ_MARK(0x8002706C);
ZZ_MARK_TARGET(0x80027070,ZZ_26F14_15C);
ZZ_MARK_TARGET(0x80027074,ZZ_26F14_160);
ZZ_MARK(0x80027078);
ZZ_MARK(0x8002707C);
ZZ_MARK(0x80027080);
ZZ_MARK(0x80027084);
ZZ_MARK_TARGET(0x80027088,ZZ_26F14_174);
ZZ_MARK(0x8002708C);
ZZ_MARK(0x80027090);
ZZ_MARK(0x80027094);
ZZ_MARK(0x80027098);
ZZ_MARK(0x8002709C);
ZZ_MARK(0x800270A0);
ZZ_MARK(0x800270A4);
ZZ_MARK(0x800270A8);
ZZ_MARK(0x800270AC);
ZZ_MARK(0x800270B0);
ZZ_MARK(0x800270B4);
ZZ_MARK_TARGET(0x800270B8,ZZ_26F14_1A4);
ZZ_MARK(0x800270BC);
ZZ_MARK(0x800270C0);
ZZ_MARK_TARGET(0x800270C4,ZZ_26F14_1B0);
ZZ_MARK(0x800270C8);
ZZ_MARK_TARGET(0x800270CC,ZZ_26F14_1B8);
ZZ_MARK(0x800270D0);
ZZ_MARK_TARGET(0x800270D4,ZZ_26F14_1C0);
ZZ_MARK(0x800270D8);
ZZ_MARK_TARGET(0x800270DC,ZZ_26F14_1C8);
ZZ_MARK(0x800270E0);
ZZ_MARK(0x800270E4);
ZZ_MARK_TARGET(0x800270E8,ZZ_26F14_1D4);
ZZ_MARK(0x800270EC);
ZZ_MARK_TARGET(0x800270F0,ZZ_26F14_1DC);
ZZ_MARK(0x800270F4);
ZZ_MARK(0x800270F8);
ZZ_MARK_TARGET(0x800270FC,ZZ_26F14_1E8);
ZZ_MARK(0x80027100);
ZZ_MARK_TARGET(0x80027104,ZZ_26F14_1F0);
ZZ_MARK(0x80027108);
ZZ_MARK(0x8002710C);
ZZ_MARK_TARGET(0x80027110,ZZ_26F14_1FC);
ZZ_MARK(0x80027114);
ZZ_MARK_TARGET(0x80027118,ZZ_26F14_204);
ZZ_MARK(0x8002711C);
ZZ_MARK(0x80027120);
ZZ_MARK_TARGET(0x80027124,ZZ_26F14_210);
ZZ_MARK(0x80027128);
ZZ_MARK_TARGET(0x8002712C,ZZ_26F14_218);
ZZ_MARK(0x80027130);
ZZ_MARK(0x80027134);
ZZ_MARK(0x80027138);
ZZ_MARK(0x8002713C);
ZZ_MARK(0x80027140);
ZZ_MARK(0x80027144);
ZZ_MARK(0x80027148);
ZZ_MARK_TARGET(0x8002714C,ZZ_26F14_238);
ZZ_MARK_TARGET(0x80027150,ZZ_26F14_23C);
ZZ_MARK(0x80027154);
ZZ_MARK(0x80027158);
ZZ_MARK(0x8002715C);
ZZ_MARK(0x80027160);
ZZ_MARK(0x80027164);
