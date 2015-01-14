#ifdef ZZ_INCLUDE_CODE
ZZ_38998:
	SP -= 128;
	EMU_Write32(SP + 112,S0); //+ 0x70
	S0 = A0;
	EMU_Write32(SP + 116,S1); //+ 0x74
	S1 = A1;
	A1 = S1 & 0xFFF;
	A2 = R0;
	V1 = S1 >> 12;
	V1 &= 0x7;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 += 96;
	EMU_Write32(SP + 120,S2); //+ 0x78
	EMU_Write32(SP + 124,RA); //+ 0x7C
	RA = 0x800389DC; //ZZ_38998_44
	S2 = S0 + V0;
	ZZ_CLOCKCYCLES(17,0x800370C8);
	goto ZZ_370C8;
ZZ_38998_44:
	V0 = S1 >> 18;
	V1 = V0 & 0x7;
	V0 = V1 < 7;
	if (!V0)
	{
		V0 = V1 << 2;
		ZZ_CLOCKCYCLES(5,0x80038D78);
		goto ZZ_38998_3E0;
	}
	V0 = V1 << 2;
	AT = 0x80010000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 2328); //+ 0x918
	ZZ_JUMPREGISTER_BEGIN(V0);
	ZZ_CLOCKCYCLES_JR(11);
	ZZ_JUMPREGISTER(0x80038A08,ZZ_38998_70);
	ZZ_JUMPREGISTER(0x80038B14,ZZ_38998_17C);
	ZZ_JUMPREGISTER(0x80038C24,ZZ_38998_28C);
	ZZ_JUMPREGISTER(0x80038D70,ZZ_38998_3D8);
	ZZ_JUMPREGISTER_END();
ZZ_38998_70:
	V0 = EMU_ReadU32(S0 + 96); //+ 0x60
	V1 = EMU_ReadU32(S0 + 100); //+ 0x64
	A0 = EMU_ReadU32(S0 + 104); //+ 0x68
	EMU_Write32(SP + 16,V0); //+ 0x10
	EMU_Write32(SP + 20,V1); //+ 0x14
	EMU_Write32(SP + 24,A0); //+ 0x18
	V0 = EMU_ReadU32(S2);
	V1 = EMU_ReadU32(S2 + 4); //+ 0x4
	A0 = EMU_ReadU32(S2 + 8); //+ 0x8
	EMU_Write32(SP + 32,V0); //+ 0x20
	EMU_Write32(SP + 36,V1); //+ 0x24
	EMU_Write32(SP + 40,A0); //+ 0x28
	V0 = EMU_ReadU32(S0 + 8); //+ 0x8
	V0 = EMU_ReadU32(V0 + 64); //+ 0x40
	A0 = SP + 16;
	A1 = SP + 32;
	A2 = EMU_ReadU32(SP + 20); //+ 0x14
	V1 = V0 >> 31;
	V0 += V1;
	V0 = (int32_t)V0 >> 1;
	A2 += V0;
	RA = 0x80038A68; //ZZ_38998_D0
	EMU_Write32(SP + 20,A2); //+ 0x14
	ZZ_CLOCKCYCLES(24,0x800289C4);
	goto ZZ_289C4;
ZZ_38998_D0:
	A1 = S1 & 0xFFF;
	EMU_Write32(S0 + 212,V0); //+ 0xD4
	V0 = 0xBE0;
	if (A1 == V0)
	{
		V1 = S1 & 0xE00;
		ZZ_CLOCKCYCLES(5,0x80038ADC);
		goto ZZ_38998_144;
	}
	V1 = S1 & 0xE00;
	V0 = 0xE00;
	if (V1 != V0)
	{
		V0 = 0xE1F;
		ZZ_CLOCKCYCLES(8,0x80038AB8);
		goto ZZ_38998_120;
	}
	V0 = 0xE1F;
	if (A1 != V0)
	{
		V0 = S1 & 0x1FF;
		ZZ_CLOCKCYCLES(10,0x80038AA8);
		goto ZZ_38998_110;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S0 + 188); //+ 0xBC
	A2 = V0;
	V0 = A2 + 4;
	EMU_Write32(S0 + 188,V0); //+ 0xBC
	ZZ_CLOCKCYCLES(16,0x80038AC4);
	goto ZZ_38998_12C;
ZZ_38998_110:
	V0 <<= 2;
	V0 += 64;
	A2 = S0 + V0;
	ZZ_CLOCKCYCLES(4,0x80038AC4);
	goto ZZ_38998_12C;
ZZ_38998_120:
	RA = 0x80038AC0; //ZZ_38998_128
	A0 = S0;
	ZZ_CLOCKCYCLES(2,0x80036FA4);
	goto ZZ_36FA4;
ZZ_38998_128:
	A2 = V0;
	ZZ_CLOCKCYCLES(1,0x80038AC4);
ZZ_38998_12C:
	V0 = EMU_ReadU32(SP + 32); //+ 0x20
	V1 = EMU_ReadU32(SP + 36); //+ 0x24
	A0 = EMU_ReadU32(SP + 40); //+ 0x28
	EMU_Write32(A2,V0);
	EMU_Write32(A2 + 4,V1); //+ 0x4
	EMU_Write32(A2 + 8,A0); //+ 0x8
	ZZ_CLOCKCYCLES(6,0x80038ADC);
ZZ_38998_144:
	V1 = S1 >> 15;
	V1 &= 0x7;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 += S0;
	V1 = EMU_ReadU32(SP + 16); //+ 0x10
	A0 = EMU_ReadU32(SP + 20); //+ 0x14
	A1 = EMU_ReadU32(SP + 24); //+ 0x18
	EMU_Write32(V0 + 96,V1); //+ 0x60
	EMU_Write32(V0 + 100,A0); //+ 0x64
	EMU_Write32(V0 + 104,A1); //+ 0x68
	ZZ_CLOCKCYCLES(14,0x80038D78);
	goto ZZ_38998_3E0;
ZZ_38998_17C:
	A2 = 0x80060000;
	A2 = EMU_ReadU32(A2 - 2524); //+ 0xFFFFF624
	V0 = EMU_ReadU32(S0 + 96); //+ 0x60
	V1 = EMU_ReadU32(S0 + 100); //+ 0x64
	A0 = EMU_ReadU32(S0 + 104); //+ 0x68
	EMU_Write32(SP + 48,V0); //+ 0x30
	EMU_Write32(SP + 52,V1); //+ 0x34
	EMU_Write32(SP + 56,A0); //+ 0x38
	V0 = EMU_ReadU32(S0 + 96); //+ 0x60
	V1 = EMU_ReadU32(S0 + 100); //+ 0x64
	A0 = EMU_ReadU32(S0 + 104); //+ 0x68
	EMU_Write32(SP + 64,V0); //+ 0x40
	EMU_Write32(SP + 68,V1); //+ 0x44
	EMU_Write32(SP + 72,A0); //+ 0x48
	if (S0 == A2)
	{
		A1 = SP + 48;
		ZZ_CLOCKCYCLES(16,0x80038B64);
		goto ZZ_38998_1CC;
	}
	A1 = SP + 48;
	V0 = EMU_ReadU32(S0 + 68); //+ 0x44
	if (V0 != A2)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(20,0x80038B70);
		goto ZZ_38998_1D8;
	}
	A0 = S0;
	ZZ_CLOCKCYCLES(20,0x80038B64);
ZZ_38998_1CC:
	RA = 0x80038B6C; //ZZ_38998_1D4
	A0 = S0;
	ZZ_CLOCKCYCLES(2,0x80028EBC);
	goto ZZ_28EBC;
ZZ_38998_1D4:
	A0 = S0;
	ZZ_CLOCKCYCLES(1,0x80038B70);
ZZ_38998_1D8:
	RA = 0x80038B78; //ZZ_38998_1E0
	A1 = SP + 64;
	ZZ_CLOCKCYCLES(2,0x80028C9C);
	goto ZZ_28C9C;
ZZ_38998_1E0:
	EMU_Write32(S0 + 212,V0); //+ 0xD4
	A1 = S1 & 0xFFF;
	V0 = 0xBE0;
	if (A1 == V0)
	{
		V1 = S1 & 0xE00;
		ZZ_CLOCKCYCLES(5,0x80038BEC);
		goto ZZ_38998_254;
	}
	V1 = S1 & 0xE00;
	V0 = 0xE00;
	if (V1 != V0)
	{
		V0 = 0xE1F;
		ZZ_CLOCKCYCLES(8,0x80038BC8);
		goto ZZ_38998_230;
	}
	V0 = 0xE1F;
	if (A1 != V0)
	{
		V0 = S1 & 0x1FF;
		ZZ_CLOCKCYCLES(10,0x80038BB8);
		goto ZZ_38998_220;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S0 + 188); //+ 0xBC
	A2 = V0;
	V0 = A2 + 4;
	EMU_Write32(S0 + 188,V0); //+ 0xBC
	ZZ_CLOCKCYCLES(16,0x80038BD4);
	goto ZZ_38998_23C;
ZZ_38998_220:
	V0 <<= 2;
	V0 += 64;
	A2 = S0 + V0;
	ZZ_CLOCKCYCLES(4,0x80038BD4);
	goto ZZ_38998_23C;
ZZ_38998_230:
	RA = 0x80038BD0; //ZZ_38998_238
	A0 = S0;
	ZZ_CLOCKCYCLES(2,0x80036FA4);
	goto ZZ_36FA4;
ZZ_38998_238:
	A2 = V0;
	ZZ_CLOCKCYCLES(1,0x80038BD4);
ZZ_38998_23C:
	V0 = EMU_ReadU32(SP + 80); //+ 0x50
	V1 = EMU_ReadU32(SP + 84); //+ 0x54
	A0 = EMU_ReadU32(SP + 88); //+ 0x58
	EMU_Write32(A2,V0);
	EMU_Write32(A2 + 4,V1); //+ 0x4
	EMU_Write32(A2 + 8,A0); //+ 0x8
	ZZ_CLOCKCYCLES(6,0x80038BEC);
ZZ_38998_254:
	V1 = S1 >> 15;
	V1 &= 0x7;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 += S0;
	V1 = EMU_ReadU32(SP + 64); //+ 0x40
	A0 = EMU_ReadU32(SP + 68); //+ 0x44
	A1 = EMU_ReadU32(SP + 72); //+ 0x48
	EMU_Write32(V0 + 96,V1); //+ 0x60
	EMU_Write32(V0 + 100,A0); //+ 0x64
	EMU_Write32(V0 + 104,A1); //+ 0x68
	ZZ_CLOCKCYCLES(14,0x80038D78);
	goto ZZ_38998_3E0;
ZZ_38998_28C:
	V0 = S1 >> 18;
	V1 = V0 & 0x7;
	A3 = V1 - 4;
	A3 = A3 < 2;
	V0 = 0x5;
	if (V1 == V0)
	{
		T0 = R0;
		ZZ_CLOCKCYCLES(7,0x80038C4C);
		goto ZZ_38998_2B4;
	}
	T0 = R0;
	V0 = 0x3;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(10,0x80038C50);
		goto ZZ_38998_2B8;
	}
	ZZ_CLOCKCYCLES(10,0x80038C4C);
ZZ_38998_2B4:
	T0 = 0x1;
	ZZ_CLOCKCYCLES(1,0x80038C50);
ZZ_38998_2B8:
	V0 = EMU_ReadU32(S0 + 96); //+ 0x60
	V1 = EMU_ReadU32(S0 + 100); //+ 0x64
	A0 = EMU_ReadU32(S0 + 104); //+ 0x68
	EMU_Write32(SP + 80,V0); //+ 0x50
	EMU_Write32(SP + 84,V1); //+ 0x54
	EMU_Write32(SP + 88,A0); //+ 0x58
	V0 = EMU_ReadU32(S0 + 24); //+ 0x18
	if (V0)
	{
		A1 = SP + 80;
		ZZ_CLOCKCYCLES(10,0x80038C80);
		goto ZZ_38998_2E8;
	}
	A1 = SP + 80;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 2916); //+ 0xB64
	ZZ_CLOCKCYCLES(12,0x80038C80);
ZZ_38998_2E8:
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	V0 = EMU_ReadU32(V0 + 668); //+ 0x29C
	V0 &= 0x1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(8,0x80038CB0);
		goto ZZ_38998_318;
	}
	if (!T0)
	{
		A2 = 0x2;
		ZZ_CLOCKCYCLES(10,0x80038CBC);
		goto ZZ_38998_324;
	}
	A2 = 0x2;
	A2 = 0x6;
	ZZ_CLOCKCYCLES(12,0x80038CBC);
	goto ZZ_38998_324;
ZZ_38998_318:
	if (!T0)
	{
		A2 = 0x1;
		ZZ_CLOCKCYCLES(2,0x80038CBC);
		goto ZZ_38998_324;
	}
	A2 = 0x1;
	A2 = 0x5;
	ZZ_CLOCKCYCLES(3,0x80038CBC);
ZZ_38998_324:
	A0 = S0;
	RA = 0x80038CC8; //ZZ_38998_330
	A3 = A3 < 1;
	ZZ_CLOCKCYCLES(3,0x80029254);
	goto ZZ_29254;
ZZ_38998_330:
	A1 = S1 & 0xFFF;
	V0 = 0xBE0;
	if (A1 == V0)
	{
		V1 = S1 & 0xE00;
		ZZ_CLOCKCYCLES(4,0x80038D38);
		goto ZZ_38998_3A0;
	}
	V1 = S1 & 0xE00;
	V0 = 0xE00;
	if (V1 != V0)
	{
		V0 = 0xE1F;
		ZZ_CLOCKCYCLES(7,0x80038D14);
		goto ZZ_38998_37C;
	}
	V0 = 0xE1F;
	if (A1 != V0)
	{
		V0 = S1 & 0x1FF;
		ZZ_CLOCKCYCLES(9,0x80038D04);
		goto ZZ_38998_36C;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S0 + 188); //+ 0xBC
	A2 = V0;
	V0 = A2 + 4;
	EMU_Write32(S0 + 188,V0); //+ 0xBC
	ZZ_CLOCKCYCLES(15,0x80038D20);
	goto ZZ_38998_388;
ZZ_38998_36C:
	V0 <<= 2;
	V0 += 64;
	A2 = S0 + V0;
	ZZ_CLOCKCYCLES(4,0x80038D20);
	goto ZZ_38998_388;
ZZ_38998_37C:
	RA = 0x80038D1C; //ZZ_38998_384
	A0 = S0;
	ZZ_CLOCKCYCLES(2,0x80036FA4);
	goto ZZ_36FA4;
ZZ_38998_384:
	A2 = V0;
	ZZ_CLOCKCYCLES(1,0x80038D20);
ZZ_38998_388:
	V0 = EMU_ReadU32(SP + 96); //+ 0x60
	V1 = EMU_ReadU32(SP + 100); //+ 0x64
	A0 = EMU_ReadU32(SP + 104); //+ 0x68
	EMU_Write32(A2,V0);
	EMU_Write32(A2 + 4,V1); //+ 0x4
	EMU_Write32(A2 + 8,A0); //+ 0x8
	ZZ_CLOCKCYCLES(6,0x80038D38);
ZZ_38998_3A0:
	V1 = S1 >> 15;
	V1 &= 0x7;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 += S0;
	V1 = EMU_ReadU32(SP + 80); //+ 0x50
	A0 = EMU_ReadU32(SP + 84); //+ 0x54
	A1 = EMU_ReadU32(SP + 88); //+ 0x58
	EMU_Write32(V0 + 96,V1); //+ 0x60
	EMU_Write32(V0 + 100,A0); //+ 0x64
	EMU_Write32(V0 + 104,A1); //+ 0x68
	ZZ_CLOCKCYCLES(14,0x80038D78);
	goto ZZ_38998_3E0;
ZZ_38998_3D8:
	RA = 0x80038D78; //ZZ_38998_3E0
	A0 = S0;
	ZZ_CLOCKCYCLES(2,0x80029728);
	goto ZZ_29728;
ZZ_38998_3E0:
	RA = EMU_ReadU32(SP + 124); //+ 0x7C
	S2 = EMU_ReadU32(SP + 120); //+ 0x78
	S1 = EMU_ReadU32(SP + 116); //+ 0x74
	S0 = EMU_ReadU32(SP + 112); //+ 0x70
	SP += 128;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x8003A26C,ZZ_3A234_38);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80038998,ZZ_38998);
ZZ_MARK(0x8003899C);
ZZ_MARK(0x800389A0);
ZZ_MARK(0x800389A4);
ZZ_MARK(0x800389A8);
ZZ_MARK(0x800389AC);
ZZ_MARK(0x800389B0);
ZZ_MARK(0x800389B4);
ZZ_MARK(0x800389B8);
ZZ_MARK(0x800389BC);
ZZ_MARK(0x800389C0);
ZZ_MARK(0x800389C4);
ZZ_MARK(0x800389C8);
ZZ_MARK(0x800389CC);
ZZ_MARK(0x800389D0);
ZZ_MARK(0x800389D4);
ZZ_MARK(0x800389D8);
ZZ_MARK_TARGET(0x800389DC,ZZ_38998_44);
ZZ_MARK(0x800389E0);
ZZ_MARK(0x800389E4);
ZZ_MARK(0x800389E8);
ZZ_MARK(0x800389EC);
ZZ_MARK(0x800389F0);
ZZ_MARK(0x800389F4);
ZZ_MARK(0x800389F8);
ZZ_MARK(0x800389FC);
ZZ_MARK(0x80038A00);
ZZ_MARK(0x80038A04);
ZZ_MARK_TARGET(0x80038A08,ZZ_38998_70);
ZZ_MARK(0x80038A0C);
ZZ_MARK(0x80038A10);
ZZ_MARK(0x80038A14);
ZZ_MARK(0x80038A18);
ZZ_MARK(0x80038A1C);
ZZ_MARK(0x80038A20);
ZZ_MARK(0x80038A24);
ZZ_MARK(0x80038A28);
ZZ_MARK(0x80038A2C);
ZZ_MARK(0x80038A30);
ZZ_MARK(0x80038A34);
ZZ_MARK(0x80038A38);
ZZ_MARK(0x80038A3C);
ZZ_MARK(0x80038A40);
ZZ_MARK(0x80038A44);
ZZ_MARK(0x80038A48);
ZZ_MARK(0x80038A4C);
ZZ_MARK(0x80038A50);
ZZ_MARK(0x80038A54);
ZZ_MARK(0x80038A58);
ZZ_MARK(0x80038A5C);
ZZ_MARK(0x80038A60);
ZZ_MARK(0x80038A64);
ZZ_MARK_TARGET(0x80038A68,ZZ_38998_D0);
ZZ_MARK(0x80038A6C);
ZZ_MARK(0x80038A70);
ZZ_MARK(0x80038A74);
ZZ_MARK(0x80038A78);
ZZ_MARK(0x80038A7C);
ZZ_MARK(0x80038A80);
ZZ_MARK(0x80038A84);
ZZ_MARK(0x80038A88);
ZZ_MARK(0x80038A8C);
ZZ_MARK(0x80038A90);
ZZ_MARK(0x80038A94);
ZZ_MARK(0x80038A98);
ZZ_MARK(0x80038A9C);
ZZ_MARK(0x80038AA0);
ZZ_MARK(0x80038AA4);
ZZ_MARK_TARGET(0x80038AA8,ZZ_38998_110);
ZZ_MARK(0x80038AAC);
ZZ_MARK(0x80038AB0);
ZZ_MARK(0x80038AB4);
ZZ_MARK_TARGET(0x80038AB8,ZZ_38998_120);
ZZ_MARK(0x80038ABC);
ZZ_MARK_TARGET(0x80038AC0,ZZ_38998_128);
ZZ_MARK_TARGET(0x80038AC4,ZZ_38998_12C);
ZZ_MARK(0x80038AC8);
ZZ_MARK(0x80038ACC);
ZZ_MARK(0x80038AD0);
ZZ_MARK(0x80038AD4);
ZZ_MARK(0x80038AD8);
ZZ_MARK_TARGET(0x80038ADC,ZZ_38998_144);
ZZ_MARK(0x80038AE0);
ZZ_MARK(0x80038AE4);
ZZ_MARK(0x80038AE8);
ZZ_MARK(0x80038AEC);
ZZ_MARK(0x80038AF0);
ZZ_MARK(0x80038AF4);
ZZ_MARK(0x80038AF8);
ZZ_MARK(0x80038AFC);
ZZ_MARK(0x80038B00);
ZZ_MARK(0x80038B04);
ZZ_MARK(0x80038B08);
ZZ_MARK(0x80038B0C);
ZZ_MARK(0x80038B10);
ZZ_MARK_TARGET(0x80038B14,ZZ_38998_17C);
ZZ_MARK(0x80038B18);
ZZ_MARK(0x80038B1C);
ZZ_MARK(0x80038B20);
ZZ_MARK(0x80038B24);
ZZ_MARK(0x80038B28);
ZZ_MARK(0x80038B2C);
ZZ_MARK(0x80038B30);
ZZ_MARK(0x80038B34);
ZZ_MARK(0x80038B38);
ZZ_MARK(0x80038B3C);
ZZ_MARK(0x80038B40);
ZZ_MARK(0x80038B44);
ZZ_MARK(0x80038B48);
ZZ_MARK(0x80038B4C);
ZZ_MARK(0x80038B50);
ZZ_MARK(0x80038B54);
ZZ_MARK(0x80038B58);
ZZ_MARK(0x80038B5C);
ZZ_MARK(0x80038B60);
ZZ_MARK_TARGET(0x80038B64,ZZ_38998_1CC);
ZZ_MARK(0x80038B68);
ZZ_MARK_TARGET(0x80038B6C,ZZ_38998_1D4);
ZZ_MARK_TARGET(0x80038B70,ZZ_38998_1D8);
ZZ_MARK(0x80038B74);
ZZ_MARK_TARGET(0x80038B78,ZZ_38998_1E0);
ZZ_MARK(0x80038B7C);
ZZ_MARK(0x80038B80);
ZZ_MARK(0x80038B84);
ZZ_MARK(0x80038B88);
ZZ_MARK(0x80038B8C);
ZZ_MARK(0x80038B90);
ZZ_MARK(0x80038B94);
ZZ_MARK(0x80038B98);
ZZ_MARK(0x80038B9C);
ZZ_MARK(0x80038BA0);
ZZ_MARK(0x80038BA4);
ZZ_MARK(0x80038BA8);
ZZ_MARK(0x80038BAC);
ZZ_MARK(0x80038BB0);
ZZ_MARK(0x80038BB4);
ZZ_MARK_TARGET(0x80038BB8,ZZ_38998_220);
ZZ_MARK(0x80038BBC);
ZZ_MARK(0x80038BC0);
ZZ_MARK(0x80038BC4);
ZZ_MARK_TARGET(0x80038BC8,ZZ_38998_230);
ZZ_MARK(0x80038BCC);
ZZ_MARK_TARGET(0x80038BD0,ZZ_38998_238);
ZZ_MARK_TARGET(0x80038BD4,ZZ_38998_23C);
ZZ_MARK(0x80038BD8);
ZZ_MARK(0x80038BDC);
ZZ_MARK(0x80038BE0);
ZZ_MARK(0x80038BE4);
ZZ_MARK(0x80038BE8);
ZZ_MARK_TARGET(0x80038BEC,ZZ_38998_254);
ZZ_MARK(0x80038BF0);
ZZ_MARK(0x80038BF4);
ZZ_MARK(0x80038BF8);
ZZ_MARK(0x80038BFC);
ZZ_MARK(0x80038C00);
ZZ_MARK(0x80038C04);
ZZ_MARK(0x80038C08);
ZZ_MARK(0x80038C0C);
ZZ_MARK(0x80038C10);
ZZ_MARK(0x80038C14);
ZZ_MARK(0x80038C18);
ZZ_MARK(0x80038C1C);
ZZ_MARK(0x80038C20);
ZZ_MARK_TARGET(0x80038C24,ZZ_38998_28C);
ZZ_MARK(0x80038C28);
ZZ_MARK(0x80038C2C);
ZZ_MARK(0x80038C30);
ZZ_MARK(0x80038C34);
ZZ_MARK(0x80038C38);
ZZ_MARK(0x80038C3C);
ZZ_MARK(0x80038C40);
ZZ_MARK(0x80038C44);
ZZ_MARK(0x80038C48);
ZZ_MARK_TARGET(0x80038C4C,ZZ_38998_2B4);
ZZ_MARK_TARGET(0x80038C50,ZZ_38998_2B8);
ZZ_MARK(0x80038C54);
ZZ_MARK(0x80038C58);
ZZ_MARK(0x80038C5C);
ZZ_MARK(0x80038C60);
ZZ_MARK(0x80038C64);
ZZ_MARK(0x80038C68);
ZZ_MARK(0x80038C6C);
ZZ_MARK(0x80038C70);
ZZ_MARK(0x80038C74);
ZZ_MARK(0x80038C78);
ZZ_MARK(0x80038C7C);
ZZ_MARK_TARGET(0x80038C80,ZZ_38998_2E8);
ZZ_MARK(0x80038C84);
ZZ_MARK(0x80038C88);
ZZ_MARK(0x80038C8C);
ZZ_MARK(0x80038C90);
ZZ_MARK(0x80038C94);
ZZ_MARK(0x80038C98);
ZZ_MARK(0x80038C9C);
ZZ_MARK(0x80038CA0);
ZZ_MARK(0x80038CA4);
ZZ_MARK(0x80038CA8);
ZZ_MARK(0x80038CAC);
ZZ_MARK_TARGET(0x80038CB0,ZZ_38998_318);
ZZ_MARK(0x80038CB4);
ZZ_MARK(0x80038CB8);
ZZ_MARK_TARGET(0x80038CBC,ZZ_38998_324);
ZZ_MARK(0x80038CC0);
ZZ_MARK(0x80038CC4);
ZZ_MARK_TARGET(0x80038CC8,ZZ_38998_330);
ZZ_MARK(0x80038CCC);
ZZ_MARK(0x80038CD0);
ZZ_MARK(0x80038CD4);
ZZ_MARK(0x80038CD8);
ZZ_MARK(0x80038CDC);
ZZ_MARK(0x80038CE0);
ZZ_MARK(0x80038CE4);
ZZ_MARK(0x80038CE8);
ZZ_MARK(0x80038CEC);
ZZ_MARK(0x80038CF0);
ZZ_MARK(0x80038CF4);
ZZ_MARK(0x80038CF8);
ZZ_MARK(0x80038CFC);
ZZ_MARK(0x80038D00);
ZZ_MARK_TARGET(0x80038D04,ZZ_38998_36C);
ZZ_MARK(0x80038D08);
ZZ_MARK(0x80038D0C);
ZZ_MARK(0x80038D10);
ZZ_MARK_TARGET(0x80038D14,ZZ_38998_37C);
ZZ_MARK(0x80038D18);
ZZ_MARK_TARGET(0x80038D1C,ZZ_38998_384);
ZZ_MARK_TARGET(0x80038D20,ZZ_38998_388);
ZZ_MARK(0x80038D24);
ZZ_MARK(0x80038D28);
ZZ_MARK(0x80038D2C);
ZZ_MARK(0x80038D30);
ZZ_MARK(0x80038D34);
ZZ_MARK_TARGET(0x80038D38,ZZ_38998_3A0);
ZZ_MARK(0x80038D3C);
ZZ_MARK(0x80038D40);
ZZ_MARK(0x80038D44);
ZZ_MARK(0x80038D48);
ZZ_MARK(0x80038D4C);
ZZ_MARK(0x80038D50);
ZZ_MARK(0x80038D54);
ZZ_MARK(0x80038D58);
ZZ_MARK(0x80038D5C);
ZZ_MARK(0x80038D60);
ZZ_MARK(0x80038D64);
ZZ_MARK(0x80038D68);
ZZ_MARK(0x80038D6C);
ZZ_MARK_TARGET(0x80038D70,ZZ_38998_3D8);
ZZ_MARK(0x80038D74);
ZZ_MARK_TARGET(0x80038D78,ZZ_38998_3E0);
ZZ_MARK(0x80038D7C);
ZZ_MARK(0x80038D80);
ZZ_MARK(0x80038D84);
ZZ_MARK(0x80038D88);
ZZ_MARK(0x80038D8C);
ZZ_MARK(0x80038D90);