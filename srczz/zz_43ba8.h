#ifdef ZZ_INCLUDE_CODE
ZZ_43BA8:
	SP -= 40;
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22628); //+ 0x5864
	V0 = 0x1;
	EMU_Write32(SP + 36,RA); //+ 0x24
	EMU_Write32(SP + 32,S0); //+ 0x20
	EMU_Write8(V1,V0);
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 22640); //+ 0x5870
	V0 = EMU_ReadU8(A0);
	V0 &= 0x7;
	EMU_Write8(SP + 16,V0); //+ 0x10
	V0 = EMU_ReadU8(SP + 16); //+ 0x10
	if (V0)
	{
		S0 = R0;
		ZZ_CLOCKCYCLES(18,0x80043C08);
		goto ZZ_43BA8_60;
	}
	S0 = R0;
	V0 = R0;
	ZZ_CLOCKCYCLES(20,0x800440D8);
	goto ZZ_43BA8_530;
ZZ_43BA8_50:
	V0 = EMU_ReadU8(A0);
	V0 &= 0x7;
	EMU_Write8(SP + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(4,0x80043C08);
ZZ_43BA8_60:
	V0 = EMU_ReadU8(A0);
	V1 = EMU_ReadU8(SP + 16); //+ 0x10
	V0 &= 0x7;
	if (V1 != V0)
	{
		V1 = SP + 24;
		ZZ_CLOCKCYCLES(5,0x80043BF8);
		goto ZZ_43BA8_50;
	}
	V1 = SP + 24;
	A0 = R0;
	ZZ_CLOCKCYCLES(6,0x80043C20);
ZZ_43BA8_78:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 22628); //+ 0x5864
	V0 = EMU_ReadU8(V0);
	V0 &= 0x20;
	if (!V0)
	{
		V0 = (int32_t)A0 < 8;
		ZZ_CLOCKCYCLES(8,0x80043C68);
		goto ZZ_43BA8_C0;
	}
	V0 = (int32_t)A0 < 8;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 22632); //+ 0x5868
	V0 = EMU_ReadU8(V0);
	A0 += 1;
	EMU_Write8(V1,V0);
	V0 = (int32_t)A0 < 8;
	if (V0)
	{
		V1 += 1;
		ZZ_CLOCKCYCLES(17,0x80043C20);
		goto ZZ_43BA8_78;
	}
	V1 += 1;
	V0 = (int32_t)A0 < 8;
	ZZ_CLOCKCYCLES(18,0x80043C68);
ZZ_43BA8_C0:
	if (!V0)
	{
		V0 = SP + 24;
		ZZ_CLOCKCYCLES(2,0x80043C88);
		goto ZZ_43BA8_E0;
	}
	V0 = SP + 24;
	V1 = A0 + V0;
	ZZ_CLOCKCYCLES(3,0x80043C74);
ZZ_43BA8_CC:
	EMU_Write8(V1,R0);
	A0 += 1;
	V0 = (int32_t)A0 < 8;
	if (V0)
	{
		V1 += 1;
		ZZ_CLOCKCYCLES(5,0x80043C74);
		goto ZZ_43BA8_CC;
	}
	V1 += 1;
	ZZ_CLOCKCYCLES(5,0x80043C88);
ZZ_43BA8_E0:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22628); //+ 0x5864
	V0 = 0x1;
	EMU_Write8(V1,V0);
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 22640); //+ 0x5870
	V1 = 0x7;
	EMU_Write8(V0,V1);
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 22636); //+ 0x586C
	EMU_Write8(V0,V1);
	V0 = EMU_ReadU8(SP + 16); //+ 0x10
	V1 = 0x3;
	V0 &= 0xFF;
	if (V0 != V1)
	{
		ZZ_CLOCKCYCLES(17,0x80043CF8);
		goto ZZ_43BA8_150;
	}
	V0 = 0x80050000;
	V0 = EMU_ReadU8(V0 + 21953); //+ 0x55C1
	V0 <<= 2;
	AT = 0x80050000;
	AT += 22372;
	AT += V0;
	V0 = EMU_ReadU32(AT);
	if (!V0)
	{
		ZZ_CLOCKCYCLES(28,0x80043D5C);
		goto ZZ_43BA8_1B4;
	}
	ZZ_CLOCKCYCLES(28,0x80043CF8);
ZZ_43BA8_150:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 21936); //+ 0x55B0
	V0 &= 0x10;
	if (V0)
	{
		ZZ_CLOCKCYCLES(6,0x80043D3C);
		goto ZZ_43BA8_194;
	}
	V0 = EMU_ReadU8(SP + 24); //+ 0x18
	V0 &= 0x10;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(11,0x80043D3C);
		goto ZZ_43BA8_194;
	}
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 21944); //+ 0x55B8
	V0 += 1;
	AT = 0x80050000;
	EMU_Write32(AT + 21944,V0); //+ 0x55B8
	ZZ_CLOCKCYCLES(17,0x80043D3C);
ZZ_43BA8_194:
	V0 = EMU_ReadU8(SP + 24); //+ 0x18
	V1 = EMU_ReadU8(SP + 25); //+ 0x19
	V0 &= 0xFF;
	S0 = V0 & 0x1D;
	AT = 0x80050000;
	EMU_Write32(AT + 21936,V0); //+ 0x55B0
	AT = 0x80050000;
	EMU_Write32(AT + 21940,V1); //+ 0x55B4
	ZZ_CLOCKCYCLES(8,0x80043D5C);
ZZ_43BA8_1B4:
	V0 = EMU_ReadU8(SP + 16); //+ 0x10
	V1 = 0x5;
	V0 &= 0xFF;
	if (V0 != V1)
	{
		ZZ_CLOCKCYCLES(5,0x80043DD0);
		goto ZZ_43BA8_228;
	}
	A0 = 0x80010000;
	A0 += 5412;
	RA = 0x80043D80; //ZZ_43BA8_1D8
	ZZ_CLOCKCYCLES(9,0x8003E6D4);
	goto ZZ_3E6D4;
ZZ_43BA8_1D8:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 21932); //+ 0x55AC
	if ((int32_t)V0 <= 0)
	{
		ZZ_CLOCKCYCLES(5,0x80043DD0);
		goto ZZ_43BA8_228;
	}
	V0 = 0x80050000;
	V0 = EMU_ReadU8(V0 + 21953); //+ 0x55C1
	A2 = 0x80050000;
	A2 = EMU_ReadU32(A2 + 21936); //+ 0x55B0
	A3 = 0x80050000;
	A3 = EMU_ReadU32(A3 + 21940); //+ 0x55B4
	V0 <<= 2;
	AT = 0x80050000;
	AT += 21956;
	AT += V0;
	A1 = EMU_ReadU32(AT);
	A0 = 0x80010000;
	A0 += 5424;
	RA = 0x80043DD0; //ZZ_43BA8_228
	ZZ_CLOCKCYCLES(20,0x8003D730);
	goto ZZ_3D730;
ZZ_43BA8_228:
	V0 = EMU_ReadU8(SP + 16); //+ 0x10
	V1 = V0 - 1;
	V0 = V1 < 5;
	if (!V0)
	{
		V0 = V1 << 2;
		ZZ_CLOCKCYCLES(6,0x800440B0);
		goto ZZ_43BA8_508;
	}
	V0 = V1 << 2;
	AT = 0x80010000;
	AT += 5484;
	AT += V0;
	V0 = EMU_ReadU32(AT);
	ZZ_JUMPREGISTER_BEGIN(V0);
	ZZ_CLOCKCYCLES_JR(13);
	ZZ_JUMPREGISTER(0x80043F54,ZZ_43BA8_3AC);
	ZZ_JUMPREGISTER(0x80043F08,ZZ_43BA8_360);
	ZZ_JUMPREGISTER(0x80043E04,ZZ_43BA8_25C);
	ZZ_JUMPREGISTER(0x80043FA0,ZZ_43BA8_3F8);
	ZZ_JUMPREGISTER(0x80044028,ZZ_43BA8_480);
	ZZ_JUMPREGISTER_END();
ZZ_43BA8_25C:
	if (!S0)
	{
		V0 = 0x5;
		ZZ_CLOCKCYCLES(2,0x80043E50);
		goto ZZ_43BA8_2A8;
	}
	V0 = 0x5;
	V1 = 0x80050000;
	V1 += 22652;
	EMU_Write8(V1,V0);
	V1 = 0x80050000;
	V1 += 29080;
	if (!V1)
	{
		A1 = SP + 24;
		ZZ_CLOCKCYCLES(9,0x80043F4C);
		goto ZZ_43BA8_3A4;
	}
	A1 = SP + 24;
	A0 = 0x7;
	A2 = -1;
	ZZ_CLOCKCYCLES(11,0x80043E30);
ZZ_43BA8_288:
	V0 = EMU_ReadU8(A1);
	A1 += 1;
	A0 -= 1;
	EMU_Write8(V1,V0);
	if (A0 != A2)
	{
		V1 += 1;
		ZZ_CLOCKCYCLES(6,0x80043E30);
		goto ZZ_43BA8_288;
	}
	V1 += 1;
	V0 = 0x2;
	ZZ_CLOCKCYCLES(8,0x800440D8);
	goto ZZ_43BA8_530;
ZZ_43BA8_2A8:
	V0 = 0x80050000;
	V0 = EMU_ReadU8(V0 + 21953); //+ 0x55C1
	V0 <<= 2;
	AT = 0x80050000;
	AT += 22116;
	AT += V0;
	V0 = EMU_ReadU32(AT);
	if (!V0)
	{
		V0 = 0x3;
		ZZ_CLOCKCYCLES(11,0x80043EC0);
		goto ZZ_43BA8_318;
	}
	V0 = 0x3;
	V1 = 0x80050000;
	V1 += 22652;
	EMU_Write8(V1,V0);
	V1 = 0x80050000;
	V1 += 29080;
	if (!V1)
	{
		A1 = SP + 24;
		ZZ_CLOCKCYCLES(18,0x80043EB8);
		goto ZZ_43BA8_310;
	}
	A1 = SP + 24;
	A0 = 0x7;
	A2 = -1;
	ZZ_CLOCKCYCLES(20,0x80043EA0);
ZZ_43BA8_2F8:
	V0 = EMU_ReadU8(A1);
	A1 += 1;
	A0 -= 1;
	EMU_Write8(V1,V0);
	if (A0 != A2)
	{
		V1 += 1;
		ZZ_CLOCKCYCLES(6,0x80043EA0);
		goto ZZ_43BA8_2F8;
	}
	V1 += 1;
	ZZ_CLOCKCYCLES(6,0x80043EB8);
ZZ_43BA8_310:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(2,0x800440D8);
	goto ZZ_43BA8_530;
ZZ_43BA8_318:
	V1 = 0x80050000;
	V1 += 22652;
	V0 = 0x2;
	EMU_Write8(V1,V0);
	V1 = 0x80050000;
	V1 += 29080;
	if (!V1)
	{
		A1 = SP + 24;
		ZZ_CLOCKCYCLES(8,0x80043F4C);
		goto ZZ_43BA8_3A4;
	}
	A1 = SP + 24;
	A0 = 0x7;
	A2 = -1;
	ZZ_CLOCKCYCLES(10,0x80043EE8);
ZZ_43BA8_340:
	V0 = EMU_ReadU8(A1);
	A1 += 1;
	A0 -= 1;
	EMU_Write8(V1,V0);
	if (A0 != A2)
	{
		V1 += 1;
		ZZ_CLOCKCYCLES(6,0x80043EE8);
		goto ZZ_43BA8_340;
	}
	V1 += 1;
	V0 = 0x2;
	ZZ_CLOCKCYCLES(8,0x800440D8);
	goto ZZ_43BA8_530;
ZZ_43BA8_360:
	if (!S0)
	{
		V0 = 0x2;
		ZZ_CLOCKCYCLES(2,0x80043F14);
		goto ZZ_43BA8_36C;
	}
	V0 = 0x2;
	V0 = 0x5;
	ZZ_CLOCKCYCLES(3,0x80043F14);
ZZ_43BA8_36C:
	AT = 0x80050000;
	EMU_Write8(AT + 22652,V0); //+ 0x587C
	V1 = 0x80050000;
	V1 += 29080;
	if (!V1)
	{
		A1 = SP + 24;
		ZZ_CLOCKCYCLES(6,0x80043F4C);
		goto ZZ_43BA8_3A4;
	}
	A1 = SP + 24;
	A0 = 0x7;
	A2 = -1;
	ZZ_CLOCKCYCLES(8,0x80043F34);
ZZ_43BA8_38C:
	V0 = EMU_ReadU8(A1);
	A1 += 1;
	A0 -= 1;
	EMU_Write8(V1,V0);
	if (A0 != A2)
	{
		V1 += 1;
		ZZ_CLOCKCYCLES(6,0x80043F34);
		goto ZZ_43BA8_38C;
	}
	V1 += 1;
	ZZ_CLOCKCYCLES(6,0x80043F4C);
ZZ_43BA8_3A4:
	V0 = 0x2;
	ZZ_CLOCKCYCLES(2,0x800440D8);
	goto ZZ_43BA8_530;
ZZ_43BA8_3AC:
	if (!S0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(2,0x80043F60);
		goto ZZ_43BA8_3B8;
	}
	V0 = 0x1;
	V0 = 0x5;
	ZZ_CLOCKCYCLES(3,0x80043F60);
ZZ_43BA8_3B8:
	AT = 0x80050000;
	EMU_Write8(AT + 22653,V0); //+ 0x587D
	V1 = 0x80050000;
	V1 += 29088;
	if (!V1)
	{
		A1 = SP + 24;
		ZZ_CLOCKCYCLES(6,0x80044020);
		goto ZZ_43BA8_478;
	}
	A1 = SP + 24;
	A0 = 0x7;
	A2 = -1;
	ZZ_CLOCKCYCLES(8,0x80043F80);
ZZ_43BA8_3D8:
	V0 = EMU_ReadU8(A1);
	A1 += 1;
	A0 -= 1;
	EMU_Write8(V1,V0);
	if (A0 != A2)
	{
		V1 += 1;
		ZZ_CLOCKCYCLES(6,0x80043F80);
		goto ZZ_43BA8_3D8;
	}
	V1 += 1;
	V0 = 0x4;
	ZZ_CLOCKCYCLES(8,0x800440D8);
	goto ZZ_43BA8_530;
ZZ_43BA8_3F8:
	A0 = 0x80050000;
	A0 += 29096;
	A1 = SP + 24;
	V0 = 0x4;
	AT = 0x80050000;
	EMU_Write8(AT + 22654,V0); //+ 0x587E
	V1 = 0x80050000;
	V1 = EMU_ReadU8(V1 + 22654); //+ 0x587E
	V0 = 0x80050000;
	V0 += 22653;
	EMU_Write8(V0,V1);
	if (!A0)
	{
		V1 = 0x7;
		ZZ_CLOCKCYCLES(13,0x80043FF0);
		goto ZZ_43BA8_448;
	}
	V1 = 0x7;
	A2 = -1;
	ZZ_CLOCKCYCLES(14,0x80043FD8);
ZZ_43BA8_430:
	V0 = EMU_ReadU8(A1);
	A1 += 1;
	V1 -= 1;
	EMU_Write8(A0,V0);
	if (V1 != A2)
	{
		A0 += 1;
		ZZ_CLOCKCYCLES(6,0x80043FD8);
		goto ZZ_43BA8_430;
	}
	A0 += 1;
	ZZ_CLOCKCYCLES(6,0x80043FF0);
ZZ_43BA8_448:
	V1 = 0x80050000;
	V1 += 29088;
	if (!V1)
	{
		A1 = SP + 24;
		ZZ_CLOCKCYCLES(4,0x80044020);
		goto ZZ_43BA8_478;
	}
	A1 = SP + 24;
	A0 = 0x7;
	A2 = -1;
	ZZ_CLOCKCYCLES(6,0x80044008);
ZZ_43BA8_460:
	V0 = EMU_ReadU8(A1);
	A1 += 1;
	A0 -= 1;
	EMU_Write8(V1,V0);
	if (A0 != A2)
	{
		V1 += 1;
		ZZ_CLOCKCYCLES(6,0x80044008);
		goto ZZ_43BA8_460;
	}
	V1 += 1;
	ZZ_CLOCKCYCLES(6,0x80044020);
ZZ_43BA8_478:
	V0 = 0x4;
	ZZ_CLOCKCYCLES(2,0x800440D8);
	goto ZZ_43BA8_530;
ZZ_43BA8_480:
	A0 = 0x80050000;
	A0 += 29080;
	A1 = SP + 24;
	V0 = 0x5;
	AT = 0x80050000;
	EMU_Write8(AT + 22653,V0); //+ 0x587D
	V1 = 0x80050000;
	V1 = EMU_ReadU8(V1 + 22653); //+ 0x587D
	V0 = 0x80050000;
	V0 += 22652;
	EMU_Write8(V0,V1);
	if (!A0)
	{
		V1 = 0x7;
		ZZ_CLOCKCYCLES(13,0x80044078);
		goto ZZ_43BA8_4D0;
	}
	V1 = 0x7;
	A2 = -1;
	ZZ_CLOCKCYCLES(14,0x80044060);
ZZ_43BA8_4B8:
	V0 = EMU_ReadU8(A1);
	A1 += 1;
	V1 -= 1;
	EMU_Write8(A0,V0);
	if (V1 != A2)
	{
		A0 += 1;
		ZZ_CLOCKCYCLES(6,0x80044060);
		goto ZZ_43BA8_4B8;
	}
	A0 += 1;
	ZZ_CLOCKCYCLES(6,0x80044078);
ZZ_43BA8_4D0:
	V1 = 0x80050000;
	V1 += 29088;
	if (!V1)
	{
		A1 = SP + 24;
		ZZ_CLOCKCYCLES(4,0x800440A8);
		goto ZZ_43BA8_500;
	}
	A1 = SP + 24;
	A0 = 0x7;
	A2 = -1;
	ZZ_CLOCKCYCLES(6,0x80044090);
ZZ_43BA8_4E8:
	V0 = EMU_ReadU8(A1);
	A1 += 1;
	A0 -= 1;
	EMU_Write8(V1,V0);
	if (A0 != A2)
	{
		V1 += 1;
		ZZ_CLOCKCYCLES(6,0x80044090);
		goto ZZ_43BA8_4E8;
	}
	V1 += 1;
	ZZ_CLOCKCYCLES(6,0x800440A8);
ZZ_43BA8_500:
	V0 = 0x6;
	ZZ_CLOCKCYCLES(2,0x800440D8);
	goto ZZ_43BA8_530;
ZZ_43BA8_508:
	A0 = 0x80010000;
	A0 += 5452;
	RA = 0x800440C0; //ZZ_43BA8_518
	ZZ_CLOCKCYCLES(4,0x8003E6D4);
	goto ZZ_3E6D4;
ZZ_43BA8_518:
	A1 = EMU_ReadU8(SP + 16); //+ 0x10
	A0 = 0x80010000;
	A0 += 5472;
	RA = 0x800440D4; //ZZ_43BA8_52C
	ZZ_CLOCKCYCLES(5,0x8003D730);
	goto ZZ_3D730;
ZZ_43BA8_52C:
	V0 = -1;
	ZZ_CLOCKCYCLES(1,0x800440D8);
ZZ_43BA8_530:
	RA = EMU_ReadU32(SP + 36); //+ 0x24
	S0 = EMU_ReadU32(SP + 32); //+ 0x20
	SP += 40;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x80044254,ZZ_440EC_168);
	ZZ_JUMPREGISTER(0x80045784,ZZ_45610_174);
	ZZ_JUMPREGISTER(0x80044958,ZZ_44640_318);
	ZZ_JUMPREGISTER(0x80045B58,ZZ_45B24_34);
	ZZ_JUMPREGISTER(0x800444E0,ZZ_44370_170);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80043BA8,0x80043BF8,ZZ_43BA8);
ZZ_MARK_TARGET(0x80043BF8,0x80043C08,ZZ_43BA8_50);
ZZ_MARK_TARGET(0x80043C08,0x80043C20,ZZ_43BA8_60);
ZZ_MARK_TARGET(0x80043C20,0x80043C68,ZZ_43BA8_78);
ZZ_MARK_TARGET(0x80043C68,0x80043C74,ZZ_43BA8_C0);
ZZ_MARK_TARGET(0x80043C74,0x80043C88,ZZ_43BA8_CC);
ZZ_MARK_TARGET(0x80043C88,0x80043CF8,ZZ_43BA8_E0);
ZZ_MARK_TARGET(0x80043CF8,0x80043D3C,ZZ_43BA8_150);
ZZ_MARK_TARGET(0x80043D3C,0x80043D5C,ZZ_43BA8_194);
ZZ_MARK_TARGET(0x80043D5C,0x80043D80,ZZ_43BA8_1B4);
ZZ_MARK_TARGET(0x80043D80,0x80043DD0,ZZ_43BA8_1D8);
ZZ_MARK_TARGET(0x80043DD0,0x80043E04,ZZ_43BA8_228);
ZZ_MARK_TARGET(0x80043E04,0x80043E30,ZZ_43BA8_25C);
ZZ_MARK_TARGET(0x80043E30,0x80043E50,ZZ_43BA8_288);
ZZ_MARK_TARGET(0x80043E50,0x80043EA0,ZZ_43BA8_2A8);
ZZ_MARK_TARGET(0x80043EA0,0x80043EB8,ZZ_43BA8_2F8);
ZZ_MARK_TARGET(0x80043EB8,0x80043EC0,ZZ_43BA8_310);
ZZ_MARK_TARGET(0x80043EC0,0x80043EE8,ZZ_43BA8_318);
ZZ_MARK_TARGET(0x80043EE8,0x80043F08,ZZ_43BA8_340);
ZZ_MARK_TARGET(0x80043F08,0x80043F14,ZZ_43BA8_360);
ZZ_MARK_TARGET(0x80043F14,0x80043F34,ZZ_43BA8_36C);
ZZ_MARK_TARGET(0x80043F34,0x80043F4C,ZZ_43BA8_38C);
ZZ_MARK_TARGET(0x80043F4C,0x80043F54,ZZ_43BA8_3A4);
ZZ_MARK_TARGET(0x80043F54,0x80043F60,ZZ_43BA8_3AC);
ZZ_MARK_TARGET(0x80043F60,0x80043F80,ZZ_43BA8_3B8);
ZZ_MARK_TARGET(0x80043F80,0x80043FA0,ZZ_43BA8_3D8);
ZZ_MARK_TARGET(0x80043FA0,0x80043FD8,ZZ_43BA8_3F8);
ZZ_MARK_TARGET(0x80043FD8,0x80043FF0,ZZ_43BA8_430);
ZZ_MARK_TARGET(0x80043FF0,0x80044008,ZZ_43BA8_448);
ZZ_MARK_TARGET(0x80044008,0x80044020,ZZ_43BA8_460);
ZZ_MARK_TARGET(0x80044020,0x80044028,ZZ_43BA8_478);
ZZ_MARK_TARGET(0x80044028,0x80044060,ZZ_43BA8_480);
ZZ_MARK_TARGET(0x80044060,0x80044078,ZZ_43BA8_4B8);
ZZ_MARK_TARGET(0x80044078,0x80044090,ZZ_43BA8_4D0);
ZZ_MARK_TARGET(0x80044090,0x800440A8,ZZ_43BA8_4E8);
ZZ_MARK_TARGET(0x800440A8,0x800440B0,ZZ_43BA8_500);
ZZ_MARK_TARGET(0x800440B0,0x800440C0,ZZ_43BA8_508);
ZZ_MARK_TARGET(0x800440C0,0x800440D4,ZZ_43BA8_518);
ZZ_MARK_TARGET(0x800440D4,0x800440D8,ZZ_43BA8_52C);
ZZ_MARK_TARGET(0x800440D8,0x800440EC,ZZ_43BA8_530);
