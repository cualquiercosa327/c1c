#ifdef ZZ_INCLUDE_CODE
ZZ_4DDAC:
	SP -= 80;
	EMU_Write32(SP + 52,S1); //+ 0x34
	S1 = A0;
	EMU_Write32(SP + 56,S2); //+ 0x38
	S2 = A1;
	EMU_Write32(SP + 72,RA); //+ 0x48
	EMU_Write32(SP + 68,S5); //+ 0x44
	EMU_Write32(SP + 64,S4); //+ 0x40
	EMU_Write32(SP + 60,S3); //+ 0x3C
	RA = 0x8004DDD8; //ZZ_4DDAC_2C
	EMU_Write32(SP + 48,S0); //+ 0x30
	ZZ_CLOCKCYCLES(11,0x8004EC08);
	goto ZZ_4EC08;
ZZ_4DDAC_2C:
	A1 = EMU_ReadS16(S1 + 4); //+ 0x4
	S5 = R0;
	if ((int32_t)A1 < 0)
	{
		V1 = A1;
		ZZ_CLOCKCYCLES(4,0x8004DE0C);
		goto ZZ_4DDAC_60;
	}
	V1 = A1;
	V0 = 0x80060000;
	V0 = EMU_ReadS16(V0 - 8264); //+ 0xFFFFDFB8
	A0 = V0;
	V0 = (int32_t)V0 < (int32_t)A1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(11,0x8004DE10);
		goto ZZ_4DDAC_64;
	}
	V1 = A0;
	ZZ_CLOCKCYCLES(13,0x8004DE10);
	goto ZZ_4DDAC_64;
ZZ_4DDAC_60:
	V1 = R0;
	ZZ_CLOCKCYCLES(1,0x8004DE10);
ZZ_4DDAC_64:
	A1 = EMU_ReadS16(S1 + 6); //+ 0x6
	EMU_Write16(S1 + 4,V1); //+ 0x4
	if ((int32_t)A1 < 0)
	{
		V1 = A1;
		ZZ_CLOCKCYCLES(4,0x8004DE44);
		goto ZZ_4DDAC_98;
	}
	V1 = A1;
	V0 = 0x80060000;
	V0 = EMU_ReadS16(V0 - 8262); //+ 0xFFFFDFBA
	A0 = V1;
	V1 = V0;
	V0 = (int32_t)V0 < (int32_t)A1;
	if (!V0)
	{
		V0 = A0 << 16;
		ZZ_CLOCKCYCLES(11,0x8004DE4C);
		goto ZZ_4DDAC_A0;
	}
	V0 = A0 << 16;
	A0 = V1;
	ZZ_CLOCKCYCLES(13,0x8004DE48);
	goto ZZ_4DDAC_9C;
ZZ_4DDAC_98:
	A0 = R0;
	ZZ_CLOCKCYCLES(1,0x8004DE48);
ZZ_4DDAC_9C:
	V0 = A0 << 16;
	ZZ_CLOCKCYCLES(1,0x8004DE4C);
ZZ_4DDAC_A0:
	V1 = EMU_ReadS16(S1 + 4); //+ 0x4
	V0 = (int32_t)V0 >> 16;
	EMU_SMultiply(V1,V0);
	EMU_Write16(S1 + 6,A0); //+ 0x6
	A2 = LO;
	V1 = A2 + 1;
	V0 = V1 >> 31;
	V1 += V0;
	A0 = (int32_t)V1 >> 1;
	if ((int32_t)A0 > 0)
	{
		S0 = (int32_t)V1 >> 5;
		ZZ_CLOCKCYCLES(11,0x8004DE80);
		goto ZZ_4DDAC_D4;
	}
	S0 = (int32_t)V1 >> 5;
	V0 = -1;
	ZZ_CLOCKCYCLES(13,0x8004DFC0);
	goto ZZ_4DDAC_214;
ZZ_4DDAC_D4:
	V1 = S0;
	V0 = V1 << 4;
	S0 = A0 - V0;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8056); //+ 0xFFFFE088
	S4 = V1;
	V0 = EMU_ReadU32(V0);
	V1 = 0x4000000;
	V0 &= V1;
	if (V0)
	{
		A0 = 0xA0000000;
		ZZ_CLOCKCYCLES(11,0x8004DEE0);
		goto ZZ_4DDAC_134;
	}
	A0 = 0xA0000000;
	S3 = 0x4000000;
	ZZ_CLOCKCYCLES(12,0x8004DEB0);
ZZ_4DDAC_104:
	RA = 0x8004DEB8; //ZZ_4DDAC_10C
	ZZ_CLOCKCYCLES(2,0x8004EC3C);
	goto ZZ_4EC3C;
ZZ_4DDAC_10C:
	if (V0)
	{
		V0 = -1;
		ZZ_CLOCKCYCLES(2,0x8004DFC0);
		goto ZZ_4DDAC_214;
	}
	V0 = -1;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8056); //+ 0xFFFFE088
	V0 = EMU_ReadU32(V0);
	V0 &= S3;
	if (!V0)
	{
		A0 = 0xA0000000;
		ZZ_CLOCKCYCLES(10,0x8004DEB0);
		goto ZZ_4DDAC_104;
	}
	A0 = 0xA0000000;
	ZZ_CLOCKCYCLES(10,0x8004DEE0);
ZZ_4DDAC_134:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 8056); //+ 0xFFFFE088
	V0 = 0x4000000;
	EMU_Write32(V1,V0);
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 8060); //+ 0xFFFFE084
	V0 = 0x1000000;
	EMU_Write32(V1,V0);
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8060); //+ 0xFFFFE084
	if (!S5)
	{
		ZZ_CLOCKCYCLES(12,0x8004DF14);
		goto ZZ_4DDAC_168;
	}
	A0 = 0xB0000000;
	ZZ_CLOCKCYCLES(13,0x8004DF14);
ZZ_4DDAC_168:
	EMU_Write32(V0,A0);
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 8060); //+ 0xFFFFE084
	V0 = EMU_ReadU32(S1);
	EMU_Write32(V1,V0);
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 8060); //+ 0xFFFFE084
	V0 = EMU_ReadU32(S1 + 4); //+ 0x4
	S0 -= 1;
	EMU_Write32(V1,V0);
	V0 = -1;
	if (S0 == V0)
	{
		ZZ_CLOCKCYCLES(14,0x8004DF70);
		goto ZZ_4DDAC_1C4;
	}
	A0 = -1;
	ZZ_CLOCKCYCLES(15,0x8004DF50);
ZZ_4DDAC_1A4:
	V1 = EMU_ReadU32(S2);
	S2 += 4;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8060); //+ 0xFFFFE084
	S0 -= 1;
	EMU_Write32(V0,V1);
	if (S0 != A0)
	{
		ZZ_CLOCKCYCLES(8,0x8004DF50);
		goto ZZ_4DDAC_1A4;
	}
	ZZ_CLOCKCYCLES(8,0x8004DF70);
ZZ_4DDAC_1C4:
	if (!S4)
	{
		V1 = 0x4000000;
		ZZ_CLOCKCYCLES(2,0x8004DFBC);
		goto ZZ_4DDAC_210;
	}
	V1 = 0x4000000;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8056); //+ 0xFFFFE088
	V1 |= 0x2;
	EMU_Write32(V0,V1);
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8052); //+ 0xFFFFE08C
	A0 = 0x1000000;
	EMU_Write32(V0,S2);
	V0 = S4 << 16;
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 8048); //+ 0xFFFFE090
	V0 |= 0x10;
	EMU_Write32(V1,V0);
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8044); //+ 0xFFFFE094
	A0 |= 0x201;
	EMU_Write32(V0,A0);
	ZZ_CLOCKCYCLES(19,0x8004DFBC);
ZZ_4DDAC_210:
	V0 = R0;
	ZZ_CLOCKCYCLES(1,0x8004DFC0);
ZZ_4DDAC_214:
	RA = EMU_ReadU32(SP + 72); //+ 0x48
	S5 = EMU_ReadU32(SP + 68); //+ 0x44
	S4 = EMU_ReadU32(SP + 64); //+ 0x40
	S3 = EMU_ReadU32(SP + 60); //+ 0x3C
	S2 = EMU_ReadU32(SP + 56); //+ 0x38
	S1 = EMU_ReadU32(SP + 52); //+ 0x34
	S0 = EMU_ReadU32(SP + 48); //+ 0x30
	SP += 80;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(10);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004DDAC,ZZ_4DDAC);
ZZ_MARK(0x8004DDB0);
ZZ_MARK(0x8004DDB4);
ZZ_MARK(0x8004DDB8);
ZZ_MARK(0x8004DDBC);
ZZ_MARK(0x8004DDC0);
ZZ_MARK(0x8004DDC4);
ZZ_MARK(0x8004DDC8);
ZZ_MARK(0x8004DDCC);
ZZ_MARK(0x8004DDD0);
ZZ_MARK(0x8004DDD4);
ZZ_MARK_TARGET(0x8004DDD8,ZZ_4DDAC_2C);
ZZ_MARK(0x8004DDDC);
ZZ_MARK(0x8004DDE0);
ZZ_MARK(0x8004DDE4);
ZZ_MARK(0x8004DDE8);
ZZ_MARK(0x8004DDEC);
ZZ_MARK(0x8004DDF0);
ZZ_MARK(0x8004DDF4);
ZZ_MARK(0x8004DDF8);
ZZ_MARK(0x8004DDFC);
ZZ_MARK(0x8004DE00);
ZZ_MARK(0x8004DE04);
ZZ_MARK(0x8004DE08);
ZZ_MARK_TARGET(0x8004DE0C,ZZ_4DDAC_60);
ZZ_MARK_TARGET(0x8004DE10,ZZ_4DDAC_64);
ZZ_MARK(0x8004DE14);
ZZ_MARK(0x8004DE18);
ZZ_MARK(0x8004DE1C);
ZZ_MARK(0x8004DE20);
ZZ_MARK(0x8004DE24);
ZZ_MARK(0x8004DE28);
ZZ_MARK(0x8004DE2C);
ZZ_MARK(0x8004DE30);
ZZ_MARK(0x8004DE34);
ZZ_MARK(0x8004DE38);
ZZ_MARK(0x8004DE3C);
ZZ_MARK(0x8004DE40);
ZZ_MARK_TARGET(0x8004DE44,ZZ_4DDAC_98);
ZZ_MARK_TARGET(0x8004DE48,ZZ_4DDAC_9C);
ZZ_MARK_TARGET(0x8004DE4C,ZZ_4DDAC_A0);
ZZ_MARK(0x8004DE50);
ZZ_MARK(0x8004DE54);
ZZ_MARK(0x8004DE58);
ZZ_MARK(0x8004DE5C);
ZZ_MARK(0x8004DE60);
ZZ_MARK(0x8004DE64);
ZZ_MARK(0x8004DE68);
ZZ_MARK(0x8004DE6C);
ZZ_MARK(0x8004DE70);
ZZ_MARK(0x8004DE74);
ZZ_MARK(0x8004DE78);
ZZ_MARK(0x8004DE7C);
ZZ_MARK_TARGET(0x8004DE80,ZZ_4DDAC_D4);
ZZ_MARK(0x8004DE84);
ZZ_MARK(0x8004DE88);
ZZ_MARK(0x8004DE8C);
ZZ_MARK(0x8004DE90);
ZZ_MARK(0x8004DE94);
ZZ_MARK(0x8004DE98);
ZZ_MARK(0x8004DE9C);
ZZ_MARK(0x8004DEA0);
ZZ_MARK(0x8004DEA4);
ZZ_MARK(0x8004DEA8);
ZZ_MARK(0x8004DEAC);
ZZ_MARK_TARGET(0x8004DEB0,ZZ_4DDAC_104);
ZZ_MARK(0x8004DEB4);
ZZ_MARK_TARGET(0x8004DEB8,ZZ_4DDAC_10C);
ZZ_MARK(0x8004DEBC);
ZZ_MARK(0x8004DEC0);
ZZ_MARK(0x8004DEC4);
ZZ_MARK(0x8004DEC8);
ZZ_MARK(0x8004DECC);
ZZ_MARK(0x8004DED0);
ZZ_MARK(0x8004DED4);
ZZ_MARK(0x8004DED8);
ZZ_MARK(0x8004DEDC);
ZZ_MARK_TARGET(0x8004DEE0,ZZ_4DDAC_134);
ZZ_MARK(0x8004DEE4);
ZZ_MARK(0x8004DEE8);
ZZ_MARK(0x8004DEEC);
ZZ_MARK(0x8004DEF0);
ZZ_MARK(0x8004DEF4);
ZZ_MARK(0x8004DEF8);
ZZ_MARK(0x8004DEFC);
ZZ_MARK(0x8004DF00);
ZZ_MARK(0x8004DF04);
ZZ_MARK(0x8004DF08);
ZZ_MARK(0x8004DF0C);
ZZ_MARK(0x8004DF10);
ZZ_MARK_TARGET(0x8004DF14,ZZ_4DDAC_168);
ZZ_MARK(0x8004DF18);
ZZ_MARK(0x8004DF1C);
ZZ_MARK(0x8004DF20);
ZZ_MARK(0x8004DF24);
ZZ_MARK(0x8004DF28);
ZZ_MARK(0x8004DF2C);
ZZ_MARK(0x8004DF30);
ZZ_MARK(0x8004DF34);
ZZ_MARK(0x8004DF38);
ZZ_MARK(0x8004DF3C);
ZZ_MARK(0x8004DF40);
ZZ_MARK(0x8004DF44);
ZZ_MARK(0x8004DF48);
ZZ_MARK(0x8004DF4C);
ZZ_MARK_TARGET(0x8004DF50,ZZ_4DDAC_1A4);
ZZ_MARK(0x8004DF54);
ZZ_MARK(0x8004DF58);
ZZ_MARK(0x8004DF5C);
ZZ_MARK(0x8004DF60);
ZZ_MARK(0x8004DF64);
ZZ_MARK(0x8004DF68);
ZZ_MARK(0x8004DF6C);
ZZ_MARK_TARGET(0x8004DF70,ZZ_4DDAC_1C4);
ZZ_MARK(0x8004DF74);
ZZ_MARK(0x8004DF78);
ZZ_MARK(0x8004DF7C);
ZZ_MARK(0x8004DF80);
ZZ_MARK(0x8004DF84);
ZZ_MARK(0x8004DF88);
ZZ_MARK(0x8004DF8C);
ZZ_MARK(0x8004DF90);
ZZ_MARK(0x8004DF94);
ZZ_MARK(0x8004DF98);
ZZ_MARK(0x8004DF9C);
ZZ_MARK(0x8004DFA0);
ZZ_MARK(0x8004DFA4);
ZZ_MARK(0x8004DFA8);
ZZ_MARK(0x8004DFAC);
ZZ_MARK(0x8004DFB0);
ZZ_MARK(0x8004DFB4);
ZZ_MARK(0x8004DFB8);
ZZ_MARK_TARGET(0x8004DFBC,ZZ_4DDAC_210);
ZZ_MARK_TARGET(0x8004DFC0,ZZ_4DDAC_214);
ZZ_MARK(0x8004DFC4);
ZZ_MARK(0x8004DFC8);
ZZ_MARK(0x8004DFCC);
ZZ_MARK(0x8004DFD0);
ZZ_MARK(0x8004DFD4);
ZZ_MARK(0x8004DFD8);
ZZ_MARK(0x8004DFDC);
ZZ_MARK(0x8004DFE0);
ZZ_MARK(0x8004DFE4);
