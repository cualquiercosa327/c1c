#ifdef ZZ_INCLUDE_CODE
ZZ_1CDD0:
	SP -= 40;
	EMU_Write32(SP + 28,S1); //+ 0x1C
	S1 = A0;
	EMU_Write32(SP + 32,S2); //+ 0x20
	S2 = A1;
	EMU_Write32(SP + 36,RA); //+ 0x24
	if (!S1)
	{
		EMU_Write32(SP + 24,S0); //+ 0x18
		ZZ_CLOCKCYCLES(8,0x8001D0FC);
		goto ZZ_1CDD0_32C;
	}
	EMU_Write32(SP + 24,S0); //+ 0x18
	V0 = EMU_ReadU32(GP + 696); //+ 0x2B8
	if (S1 != V0)
	{
		ZZ_CLOCKCYCLES(12,0x8001CE1C);
		goto ZZ_1CDD0_4C;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 15044); //+ 0xFFFFC53C
	V1 = EMU_ReadU32(V0 + 4); //+ 0x4
	V0 = 0x19;
	if (V1 != V0)
	{
		V0 = -255;
		ZZ_CLOCKCYCLES(19,0x8001D100);
		goto ZZ_1CDD0_330;
	}
	V0 = -255;
	ZZ_CLOCKCYCLES(19,0x8001CE1C);
ZZ_1CDD0_4C:
	if (!S2)
	{
		A0 = R0;
		ZZ_CLOCKCYCLES(2,0x8001CE38);
		goto ZZ_1CDD0_68;
	}
	A0 = R0;
	EMU_Write32(SP + 16,R0); //+ 0x10
	A1 = S1;
	A2 = 0x1A00;
	RA = 0x8001CE38; //ZZ_1CDD0_68
	A3 = R0;
	ZZ_CLOCKCYCLES(7,0x80024040);
	goto ZZ_24040;
ZZ_1CDD0_68:
	A0 = EMU_ReadU32(S1 + 108); //+ 0x6C
	if (!A0)
	{
		ZZ_CLOCKCYCLES(4,0x8001CE60);
		goto ZZ_1CDD0_90;
	}
	ZZ_CLOCKCYCLES(4,0x8001CE48);
ZZ_1CDD0_78:
	S0 = EMU_ReadU32(A0 + 104); //+ 0x68
	RA = 0x8001CE54; //ZZ_1CDD0_84
	A1 = S2;
	ZZ_CLOCKCYCLES(3,0x8001CDD0);
	goto ZZ_1CDD0;
ZZ_1CDD0_84:
	A0 = S0;
	if (A0)
	{
		ZZ_CLOCKCYCLES(3,0x8001CE48);
		goto ZZ_1CDD0_78;
	}
	ZZ_CLOCKCYCLES(3,0x8001CE60);
ZZ_1CDD0_90:
	RA = 0x8001CE68; //ZZ_1CDD0_98
	A0 = S1;
	ZZ_CLOCKCYCLES(2,0x80030260);
	goto ZZ_30260;
ZZ_1CDD0_98:
	V1 = 0x80060000;
	V1 -= 168;
	V0 = EMU_ReadU32(S1 + 216); //+ 0xD8
	A0 = -2;
	V0 = (int32_t)V0 >> 8;
	V0 <<= 2;
	V0 += V1;
	V1 = EMU_ReadU32(V0);
	A1 = EMU_ReadU32(GP + 696); //+ 0x2B8
	V1 &= A0;
	EMU_Write32(V0,V1);
	if (S1 != A1)
	{
		EMU_Write32(S1,R0);
		ZZ_CLOCKCYCLES(13,0x8001D010);
		goto ZZ_1CDD0_240;
	}
	EMU_Write32(S1,R0);
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 3576); //+ 0xDF8
	V0 = 0x2;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(18,0x8001CEC0);
		goto ZZ_1CDD0_F0;
	}
	A2 = 0x80060000;
	A2 = EMU_ReadU32(A2 + 3580); //+ 0xDFC
	ZZ_CLOCKCYCLES(22,0x8001CEC8);
	goto ZZ_1CDD0_F8;
ZZ_1CDD0_F0:
	A2 = 0x80060000;
	A2 = EMU_ReadU32(A2 + 3684); //+ 0xE64
	ZZ_CLOCKCYCLES(2,0x8001CEC8);
ZZ_1CDD0_F8:
	A0 = EMU_ReadU32(S1 + 100); //+ 0x64
	A1 = 0x80060000;
	A1 += 3576;
	if (!A0)
	{
		V0 = 0x2;
		ZZ_CLOCKCYCLES(5,0x8001CF5C);
		goto ZZ_1CDD0_18C;
	}
	V0 = 0x2;
	V1 = EMU_ReadU32(A0);
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(9,0x8001CEF8);
		goto ZZ_1CDD0_128;
	}
	V1 = EMU_ReadU32(A0 + 4); //+ 0x4
	ZZ_CLOCKCYCLES(12,0x8001CEFC);
	goto ZZ_1CDD0_12C;
ZZ_1CDD0_128:
	V1 = EMU_ReadU32(A0 + 108); //+ 0x6C
	ZZ_CLOCKCYCLES(1,0x8001CEFC);
ZZ_1CDD0_12C:
	if (V1 != S1)
	{
		V0 = 0x2;
		ZZ_CLOCKCYCLES(3,0x8001CF34);
		goto ZZ_1CDD0_164;
	}
	V0 = 0x2;
	V1 = EMU_ReadU32(A0);
	if (V1 != V0)
	{
		V1 = A0 + 108;
		ZZ_CLOCKCYCLES(7,0x8001CF1C);
		goto ZZ_1CDD0_14C;
	}
	V1 = A0 + 108;
	V1 = A0 + 4;
	ZZ_CLOCKCYCLES(8,0x8001CF1C);
ZZ_1CDD0_14C:
	V0 = EMU_ReadU32(S1 + 104); //+ 0x68
	EMU_Write32(V1,V0);
	ZZ_CLOCKCYCLES(3,0x8001CF5C);
	goto ZZ_1CDD0_18C;
ZZ_1CDD0_158:
	if (!V1)
	{
		ZZ_CLOCKCYCLES(2,0x8001CFB4);
		goto ZZ_1CDD0_1E4;
	}
	V1 = EMU_ReadU32(V1 + 104); //+ 0x68
	ZZ_CLOCKCYCLES(3,0x8001CF34);
ZZ_1CDD0_164:
	if (!V1)
	{
		ZZ_CLOCKCYCLES(3,0x8001CFB4);
		goto ZZ_1CDD0_1E4;
	}
	V0 = EMU_ReadU32(V1 + 104); //+ 0x68
	if (V0 != S1)
	{
		ZZ_CLOCKCYCLES(7,0x8001CF28);
		goto ZZ_1CDD0_158;
	}
	V0 = EMU_ReadU32(S1 + 104); //+ 0x68
	EMU_Write32(V1 + 104,V0); //+ 0x68
	ZZ_CLOCKCYCLES(10,0x8001CF5C);
ZZ_1CDD0_18C:
	EMU_Write32(S1 + 100,A1); //+ 0x64
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 3576); //+ 0xDF8
	V0 = 0x2;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(6,0x8001CF84);
		goto ZZ_1CDD0_1B4;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 3580); //+ 0xDFC
	ZZ_CLOCKCYCLES(10,0x8001CF8C);
	goto ZZ_1CDD0_1BC;
ZZ_1CDD0_1B4:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 3684); //+ 0xE64
	ZZ_CLOCKCYCLES(2,0x8001CF8C);
ZZ_1CDD0_1BC:
	A0 = 0x80060000;
	A0 += 3684;
	EMU_Write32(S1 + 104,V0); //+ 0x68
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 3576); //+ 0xDF8
	V0 = 0x2;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(8,0x8001CFB0);
		goto ZZ_1CDD0_1E0;
	}
	A0 -= 104;
	ZZ_CLOCKCYCLES(9,0x8001CFB0);
ZZ_1CDD0_1E0:
	EMU_Write32(A0,S1);
	ZZ_CLOCKCYCLES(1,0x8001CFB4);
ZZ_1CDD0_1E4:
	A0 = 0x80060000;
	A0 += 3576;
	V1 = EMU_ReadU32(A0);
	V0 = 0x2;
	if (V1 != V0)
	{
		A1 = A0 + 108;
		ZZ_CLOCKCYCLES(6,0x8001CFD0);
		goto ZZ_1CDD0_200;
	}
	A1 = A0 + 108;
	A1 = A0 + 4;
	ZZ_CLOCKCYCLES(7,0x8001CFD0);
ZZ_1CDD0_200:
	EMU_Write32(A1,A2);
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 3504); //+ 0xDB0
	EMU_Write32(V0 + 100,R0); //+ 0x64
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 3504); //+ 0xDB0
	EMU_Write32(V0 + 108,R0); //+ 0x6C
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 3504); //+ 0xDB0
	EMU_Write32(V0 + 104,R0); //+ 0x68
	EMU_Write32(GP + 696,R0); //+ 0x2B8
	V0 = -255;
	ZZ_CLOCKCYCLES(16,0x8001D100);
	goto ZZ_1CDD0_330;
ZZ_1CDD0_240:
	A0 = EMU_ReadU32(S1 + 100); //+ 0x64
	A1 = 0x80060000;
	A1 += 3576;
	if (!A0)
	{
		V0 = 0x2;
		ZZ_CLOCKCYCLES(5,0x8001D0A4);
		goto ZZ_1CDD0_2D4;
	}
	V0 = 0x2;
	V1 = EMU_ReadU32(A0);
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(9,0x8001D040);
		goto ZZ_1CDD0_270;
	}
	V1 = EMU_ReadU32(A0 + 4); //+ 0x4
	ZZ_CLOCKCYCLES(12,0x8001D044);
	goto ZZ_1CDD0_274;
ZZ_1CDD0_270:
	V1 = EMU_ReadU32(A0 + 108); //+ 0x6C
	ZZ_CLOCKCYCLES(1,0x8001D044);
ZZ_1CDD0_274:
	if (V1 != S1)
	{
		V0 = 0x2;
		ZZ_CLOCKCYCLES(3,0x8001D07C);
		goto ZZ_1CDD0_2AC;
	}
	V0 = 0x2;
	V1 = EMU_ReadU32(A0);
	if (V1 != V0)
	{
		V1 = A0 + 108;
		ZZ_CLOCKCYCLES(7,0x8001D064);
		goto ZZ_1CDD0_294;
	}
	V1 = A0 + 108;
	V1 = A0 + 4;
	ZZ_CLOCKCYCLES(8,0x8001D064);
ZZ_1CDD0_294:
	V0 = EMU_ReadU32(S1 + 104); //+ 0x68
	EMU_Write32(V1,V0);
	ZZ_CLOCKCYCLES(3,0x8001D0A4);
	goto ZZ_1CDD0_2D4;
ZZ_1CDD0_2A0:
	if (!V1)
	{
		V0 = -255;
		ZZ_CLOCKCYCLES(2,0x8001D100);
		goto ZZ_1CDD0_330;
	}
	V0 = -255;
	V1 = EMU_ReadU32(V1 + 104); //+ 0x68
	ZZ_CLOCKCYCLES(3,0x8001D07C);
ZZ_1CDD0_2AC:
	if (!V1)
	{
		V0 = -255;
		ZZ_CLOCKCYCLES(3,0x8001D100);
		goto ZZ_1CDD0_330;
	}
	V0 = -255;
	V0 = EMU_ReadU32(V1 + 104); //+ 0x68
	if (V0 != S1)
	{
		ZZ_CLOCKCYCLES(7,0x8001D070);
		goto ZZ_1CDD0_2A0;
	}
	V0 = EMU_ReadU32(S1 + 104); //+ 0x68
	EMU_Write32(V1 + 104,V0); //+ 0x68
	ZZ_CLOCKCYCLES(10,0x8001D0A4);
ZZ_1CDD0_2D4:
	EMU_Write32(S1 + 100,A1); //+ 0x64
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 3576); //+ 0xDF8
	V0 = 0x2;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(6,0x8001D0CC);
		goto ZZ_1CDD0_2FC;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 3580); //+ 0xDFC
	ZZ_CLOCKCYCLES(10,0x8001D0D4);
	goto ZZ_1CDD0_304;
ZZ_1CDD0_2FC:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 3684); //+ 0xE64
	ZZ_CLOCKCYCLES(2,0x8001D0D4);
ZZ_1CDD0_304:
	A0 = 0x80060000;
	A0 += 3684;
	EMU_Write32(S1 + 104,V0); //+ 0x68
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 3576); //+ 0xDF8
	V0 = 0x2;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(8,0x8001D0F8);
		goto ZZ_1CDD0_328;
	}
	A0 -= 104;
	ZZ_CLOCKCYCLES(9,0x8001D0F8);
ZZ_1CDD0_328:
	EMU_Write32(A0,S1);
	ZZ_CLOCKCYCLES(1,0x8001D0FC);
ZZ_1CDD0_32C:
	V0 = -255;
	ZZ_CLOCKCYCLES(1,0x8001D100);
ZZ_1CDD0_330:
	RA = EMU_ReadU32(SP + 36); //+ 0x24
	S2 = EMU_ReadU32(SP + 32); //+ 0x20
	S1 = EMU_ReadU32(SP + 28); //+ 0x1C
	S0 = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 40;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x8001D1F0,ZZ_1D1E0_10);
	ZZ_JUMPREGISTER(0x8001CE54,ZZ_1CDD0_84);
	ZZ_JUMPREGISTER(0x8001B9E4,ZZ_1B92C_B8);
	ZZ_JUMPREGISTER(0x8001B9B8,ZZ_1B92C_8C);
	ZZ_JUMPREGISTER(0x8001D1BC,ZZ_1D11C_A0);
	ZZ_JUMPREGISTER(0x80025290,ZZ_251B8_D8);
	ZZ_JUMPREGISTER(0x80025264,ZZ_251B8_AC);
	ZZ_JUMPREGISTER(0x8001B8BC,ZZ_1B84C_70);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001CDD0,0x8001CE1C,ZZ_1CDD0);
ZZ_MARK_TARGET(0x8001CE1C,0x8001CE38,ZZ_1CDD0_4C);
ZZ_MARK_TARGET(0x8001CE38,0x8001CE48,ZZ_1CDD0_68);
ZZ_MARK_TARGET(0x8001CE48,0x8001CE54,ZZ_1CDD0_78);
ZZ_MARK_TARGET(0x8001CE54,0x8001CE60,ZZ_1CDD0_84);
ZZ_MARK_TARGET(0x8001CE60,0x8001CE68,ZZ_1CDD0_90);
ZZ_MARK_TARGET(0x8001CE68,0x8001CEC0,ZZ_1CDD0_98);
ZZ_MARK_TARGET(0x8001CEC0,0x8001CEC8,ZZ_1CDD0_F0);
ZZ_MARK_TARGET(0x8001CEC8,0x8001CEF8,ZZ_1CDD0_F8);
ZZ_MARK_TARGET(0x8001CEF8,0x8001CEFC,ZZ_1CDD0_128);
ZZ_MARK_TARGET(0x8001CEFC,0x8001CF1C,ZZ_1CDD0_12C);
ZZ_MARK_TARGET(0x8001CF1C,0x8001CF28,ZZ_1CDD0_14C);
ZZ_MARK_TARGET(0x8001CF28,0x8001CF34,ZZ_1CDD0_158);
ZZ_MARK_TARGET(0x8001CF34,0x8001CF5C,ZZ_1CDD0_164);
ZZ_MARK_TARGET(0x8001CF5C,0x8001CF84,ZZ_1CDD0_18C);
ZZ_MARK_TARGET(0x8001CF84,0x8001CF8C,ZZ_1CDD0_1B4);
ZZ_MARK_TARGET(0x8001CF8C,0x8001CFB0,ZZ_1CDD0_1BC);
ZZ_MARK_TARGET(0x8001CFB0,0x8001CFB4,ZZ_1CDD0_1E0);
ZZ_MARK_TARGET(0x8001CFB4,0x8001CFD0,ZZ_1CDD0_1E4);
ZZ_MARK_TARGET(0x8001CFD0,0x8001D010,ZZ_1CDD0_200);
ZZ_MARK_TARGET(0x8001D010,0x8001D040,ZZ_1CDD0_240);
ZZ_MARK_TARGET(0x8001D040,0x8001D044,ZZ_1CDD0_270);
ZZ_MARK_TARGET(0x8001D044,0x8001D064,ZZ_1CDD0_274);
ZZ_MARK_TARGET(0x8001D064,0x8001D070,ZZ_1CDD0_294);
ZZ_MARK_TARGET(0x8001D070,0x8001D07C,ZZ_1CDD0_2A0);
ZZ_MARK_TARGET(0x8001D07C,0x8001D0A4,ZZ_1CDD0_2AC);
ZZ_MARK_TARGET(0x8001D0A4,0x8001D0CC,ZZ_1CDD0_2D4);
ZZ_MARK_TARGET(0x8001D0CC,0x8001D0D4,ZZ_1CDD0_2FC);
ZZ_MARK_TARGET(0x8001D0D4,0x8001D0F8,ZZ_1CDD0_304);
ZZ_MARK_TARGET(0x8001D0F8,0x8001D0FC,ZZ_1CDD0_328);
ZZ_MARK_TARGET(0x8001D0FC,0x8001D100,ZZ_1CDD0_32C);
ZZ_MARK_TARGET(0x8001D100,0x8001D11C,ZZ_1CDD0_330);