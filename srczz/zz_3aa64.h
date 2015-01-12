#ifdef ZZ_INCLUDE_CODE
ZZ_3AA64:
	AT = RA;
	A0 = A1 >> 12;
	V1 = A0 & 0xFFF;
	V1 -= 3056;
	if (!V1)
	{
		A3 = 256;
		ZZ_CLOCKCYCLES(6,0x8003AA8C);
		goto ZZ_3AA64_28;
	}
	A3 = 256;
	RA = 0x8003AA84; //ZZ_3AA64_20
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(8,0x8003A118);
	goto ZZ_3A118;
ZZ_3AA64_20:
	V1 = V0;
	ZZ_CLOCKCYCLES(2,0x8003AA9C);
	goto ZZ_3AA64_38;
ZZ_3AA64_28:
	S6 -= 4;
	A3 = EMU_ReadU32(S6);
	S6 -= 4;
	V1 = EMU_ReadU32(S6);
	ZZ_CLOCKCYCLES(4,0x8003AA9C);
ZZ_3AA64_38:
	A2 = 24;
	RA = 0x8003AAA8; //ZZ_3AA64_44
	A0 = A1;
	ZZ_CLOCKCYCLES(3,0x80039FC4);
	goto ZZ_39FC4;
ZZ_3AA64_44:
	A2 = EMU_ReadU32(V0);
	if ((int32_t)V1 < 0)
	{
		A0 = A2 - V1;
		ZZ_CLOCKCYCLES(3,0x8003AADC);
		goto ZZ_3AA64_78;
	}
	A0 = A2 - V1;
	A0 += A3;
	if ((int32_t)A0 < 0)
	{
		A2 += A3;
		ZZ_CLOCKCYCLES(6,0x8003AAC8);
		goto ZZ_3AA64_64;
	}
	A2 += A3;
	A2 = A3 << 1;
	A2 = A2 - V1;
	ZZ_CLOCKCYCLES(8,0x8003AAC8);
ZZ_3AA64_64:
	if ((int32_t)A2 >= 0)
	{
		A0 = A2;
		ZZ_CLOCKCYCLES(2,0x8003AB00);
		goto ZZ_3AA64_9C;
	}
	A0 = A2;
	A0 = -A2;
	ZZ_JUMPREGISTER_BEGIN(AT);
	EMU_Write32(V0,A2);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x8003AA58,ZZ_3A9B0_A8);
	ZZ_JUMPREGISTER_END();
ZZ_3AA64_78:
	A0 = A0 - A3;
	if ((int32_t)A0 > 0)
	{
		A2 = A2 - A3;
		ZZ_CLOCKCYCLES(3,0x8003AAF4);
		goto ZZ_3AA64_90;
	}
	A2 = A2 - A3;
	A2 = -V1;
	A2 = A2 - A3;
	A2 = A2 - A3;
	ZZ_CLOCKCYCLES(6,0x8003AAF4);
ZZ_3AA64_90:
	if ((int32_t)A2 <= 0)
	{
		A0 = A2;
		ZZ_CLOCKCYCLES(2,0x8003AB00);
		goto ZZ_3AA64_9C;
	}
	A0 = A2;
	A0 = -A2;
	ZZ_CLOCKCYCLES(3,0x8003AB00);
ZZ_3AA64_9C:
	ZZ_JUMPREGISTER_BEGIN(AT);
	EMU_Write32(V0,A2);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x8003AA58,ZZ_3A9B0_A8);
	ZZ_JUMPREGISTER_END();
ZZ_3AA64_A4:
	A0 = A1 >> 10;
	A0 &= 0x1C;
	A0 += S0;
	A0 = EMU_ReadU32(A0 + 64); //+ 0x40
	V1 = A1 >> 14;
	V1 &= 0x7E;
	V1 += A0;
	V1 = EMU_ReadS16(V1 + 32); //+ 0x20
	S6 += 4;
	EMU_Write32(S6 - 4,V1); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(11,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3AA64_D0:
	RA = 0x8003AB3C; //ZZ_3AA64_D8
	A0 = A1;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3AA64_D8:
	A0 = A1 >> 10;
	A0 &= 0x1C;
	A0 += S0;
	A0 = EMU_ReadU32(A0 + 64); //+ 0x40
	V1 = A1 >> 14;
	V1 &= 0x7E;
	V1 += A0;
	EMU_Write16(V1 + 32,V0); //+ 0x20
	ZZ_CLOCKCYCLES(9,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3AA64_FC:
	RA = 0x8003AB68; //ZZ_3AA64_104
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3AA64_104:
	V1 = V0;
	RA = 0x8003AB74; //ZZ_3AA64_110
	A0 = A1 << 21;
	ZZ_CLOCKCYCLES(3,0x8003A0A8);
	goto ZZ_3A0A8;
ZZ_3AA64_110:
	A2 = EMU_ReadU32(S0 + 12); //+ 0xC
	V1 >>= 8;
	A2 = EMU_ReadU32(A2 + 36); //+ 0x24
	V1 <<= 2;
	V1 += A2;
	EMU_Write32(V0,V1);
	ZZ_CLOCKCYCLES(7,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3AA64_12C:
	A3 = 0x80030000;
	A3 |= 0x76E0;
	ZZ_CLOCKCYCLES(3,0x8003A25C);
	goto ZZ_3A234_28;
ZZ_3AA64_138:
	A3 = 0x80030000;
	A3 |= 0x7804;
	ZZ_CLOCKCYCLES(3,0x8003A25C);
	goto ZZ_3A234_28;
ZZ_3AA64_144:
	RA = 0x8003ABB0; //ZZ_3AA64_14C
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3AA64_14C:
	V1 = V0;
	RA = 0x8003ABBC; //ZZ_3AA64_158
	A0 = A1;
	ZZ_CLOCKCYCLES(3,0x8003A118);
	goto ZZ_3A118;
ZZ_3AA64_158:
	V1 >>= 8;
	V1 <<= 2;
	V0 += V1;
	V1 = EMU_ReadU32(V0);
	S6 += 4;
	EMU_Write32(S6 - 4,V1); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(7,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3AA64_174:
	RA = 0x8003ABE0; //ZZ_3AA64_17C
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3AA64_17C:
	V1 = V0;
	RA = 0x8003ABEC; //ZZ_3AA64_188
	A0 = A1;
	ZZ_CLOCKCYCLES(3,0x8003A118);
	goto ZZ_3A118;
ZZ_3AA64_188:
	V1 >>= 8;
	V1 <<= 2;
	V0 += V1;
	S6 -= 4;
	V1 = EMU_ReadU32(S6);
	EMU_Write32(V0,V1);
	ZZ_CLOCKCYCLES(7,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3AA64_1A4:
	RA = 0x8003AC10; //ZZ_3AA64_1AC
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3AA64_1AC:
	V1 = V0;
	RA = 0x8003AC1C; //ZZ_3AA64_1B8
	A0 = A1 << 21;
	ZZ_CLOCKCYCLES(3,0x8003A0A8);
	goto ZZ_3A0A8;
ZZ_3AA64_1B8:
	RA = 0x8003AC24; //ZZ_3AA64_1C0
	A0 = V1;
	ZZ_CLOCKCYCLES(2,0x8003AC50);
	goto ZZ_3AC50;
ZZ_3AA64_1C0:
	EMU_Write32(V0,A0);
	ZZ_CLOCKCYCLES(2,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3AA64_1C8:
	RA = 0x8003AC34; //ZZ_3AA64_1D0
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3AA64_1D0:
	V1 = V0;
	RA = 0x8003AC40; //ZZ_3AA64_1DC
	A0 = A1 << 21;
	ZZ_CLOCKCYCLES(3,0x8003A0A8);
	goto ZZ_3A0A8;
ZZ_3AA64_1DC:
	RA = 0x8003AC48; //ZZ_3AA64_1E4
	A0 = V1 + 1024;
	ZZ_CLOCKCYCLES(2,0x8003AC50);
	goto ZZ_3AC50;
ZZ_3AA64_1E4:
	EMU_Write32(V0,A0);
	ZZ_CLOCKCYCLES(2,0x8003A304);
	goto ZZ_3A2AC_58;
#endif
ZZ_MARK_TARGET(0x8003AA64,ZZ_3AA64);
ZZ_MARK(0x8003AA68);
ZZ_MARK(0x8003AA6C);
ZZ_MARK(0x8003AA70);
ZZ_MARK(0x8003AA74);
ZZ_MARK(0x8003AA78);
ZZ_MARK(0x8003AA7C);
ZZ_MARK(0x8003AA80);
ZZ_MARK_TARGET(0x8003AA84,ZZ_3AA64_20);
ZZ_MARK(0x8003AA88);
ZZ_MARK_TARGET(0x8003AA8C,ZZ_3AA64_28);
ZZ_MARK(0x8003AA90);
ZZ_MARK(0x8003AA94);
ZZ_MARK(0x8003AA98);
ZZ_MARK_TARGET(0x8003AA9C,ZZ_3AA64_38);
ZZ_MARK(0x8003AAA0);
ZZ_MARK(0x8003AAA4);
ZZ_MARK_TARGET(0x8003AAA8,ZZ_3AA64_44);
ZZ_MARK(0x8003AAAC);
ZZ_MARK(0x8003AAB0);
ZZ_MARK(0x8003AAB4);
ZZ_MARK(0x8003AAB8);
ZZ_MARK(0x8003AABC);
ZZ_MARK(0x8003AAC0);
ZZ_MARK(0x8003AAC4);
ZZ_MARK_TARGET(0x8003AAC8,ZZ_3AA64_64);
ZZ_MARK(0x8003AACC);
ZZ_MARK(0x8003AAD0);
ZZ_MARK(0x8003AAD4);
ZZ_MARK(0x8003AAD8);
ZZ_MARK_TARGET(0x8003AADC,ZZ_3AA64_78);
ZZ_MARK(0x8003AAE0);
ZZ_MARK(0x8003AAE4);
ZZ_MARK(0x8003AAE8);
ZZ_MARK(0x8003AAEC);
ZZ_MARK(0x8003AAF0);
ZZ_MARK_TARGET(0x8003AAF4,ZZ_3AA64_90);
ZZ_MARK(0x8003AAF8);
ZZ_MARK(0x8003AAFC);
ZZ_MARK_TARGET(0x8003AB00,ZZ_3AA64_9C);
ZZ_MARK(0x8003AB04);
ZZ_MARK_TARGET(0x8003AB08,ZZ_3AA64_A4);
ZZ_MARK(0x8003AB0C);
ZZ_MARK(0x8003AB10);
ZZ_MARK(0x8003AB14);
ZZ_MARK(0x8003AB18);
ZZ_MARK(0x8003AB1C);
ZZ_MARK(0x8003AB20);
ZZ_MARK(0x8003AB24);
ZZ_MARK(0x8003AB28);
ZZ_MARK(0x8003AB2C);
ZZ_MARK(0x8003AB30);
ZZ_MARK_TARGET(0x8003AB34,ZZ_3AA64_D0);
ZZ_MARK(0x8003AB38);
ZZ_MARK_TARGET(0x8003AB3C,ZZ_3AA64_D8);
ZZ_MARK(0x8003AB40);
ZZ_MARK(0x8003AB44);
ZZ_MARK(0x8003AB48);
ZZ_MARK(0x8003AB4C);
ZZ_MARK(0x8003AB50);
ZZ_MARK(0x8003AB54);
ZZ_MARK(0x8003AB58);
ZZ_MARK(0x8003AB5C);
ZZ_MARK_TARGET(0x8003AB60,ZZ_3AA64_FC);
ZZ_MARK(0x8003AB64);
ZZ_MARK_TARGET(0x8003AB68,ZZ_3AA64_104);
ZZ_MARK(0x8003AB6C);
ZZ_MARK(0x8003AB70);
ZZ_MARK_TARGET(0x8003AB74,ZZ_3AA64_110);
ZZ_MARK(0x8003AB78);
ZZ_MARK(0x8003AB7C);
ZZ_MARK(0x8003AB80);
ZZ_MARK(0x8003AB84);
ZZ_MARK(0x8003AB88);
ZZ_MARK(0x8003AB8C);
ZZ_MARK_TARGET(0x8003AB90,ZZ_3AA64_12C);
ZZ_MARK(0x8003AB94);
ZZ_MARK(0x8003AB98);
ZZ_MARK_TARGET(0x8003AB9C,ZZ_3AA64_138);
ZZ_MARK(0x8003ABA0);
ZZ_MARK(0x8003ABA4);
ZZ_MARK_TARGET(0x8003ABA8,ZZ_3AA64_144);
ZZ_MARK(0x8003ABAC);
ZZ_MARK_TARGET(0x8003ABB0,ZZ_3AA64_14C);
ZZ_MARK(0x8003ABB4);
ZZ_MARK(0x8003ABB8);
ZZ_MARK_TARGET(0x8003ABBC,ZZ_3AA64_158);
ZZ_MARK(0x8003ABC0);
ZZ_MARK(0x8003ABC4);
ZZ_MARK(0x8003ABC8);
ZZ_MARK(0x8003ABCC);
ZZ_MARK(0x8003ABD0);
ZZ_MARK(0x8003ABD4);
ZZ_MARK_TARGET(0x8003ABD8,ZZ_3AA64_174);
ZZ_MARK(0x8003ABDC);
ZZ_MARK_TARGET(0x8003ABE0,ZZ_3AA64_17C);
ZZ_MARK(0x8003ABE4);
ZZ_MARK(0x8003ABE8);
ZZ_MARK_TARGET(0x8003ABEC,ZZ_3AA64_188);
ZZ_MARK(0x8003ABF0);
ZZ_MARK(0x8003ABF4);
ZZ_MARK(0x8003ABF8);
ZZ_MARK(0x8003ABFC);
ZZ_MARK(0x8003AC00);
ZZ_MARK(0x8003AC04);
ZZ_MARK_TARGET(0x8003AC08,ZZ_3AA64_1A4);
ZZ_MARK(0x8003AC0C);
ZZ_MARK_TARGET(0x8003AC10,ZZ_3AA64_1AC);
ZZ_MARK(0x8003AC14);
ZZ_MARK(0x8003AC18);
ZZ_MARK_TARGET(0x8003AC1C,ZZ_3AA64_1B8);
ZZ_MARK(0x8003AC20);
ZZ_MARK_TARGET(0x8003AC24,ZZ_3AA64_1C0);
ZZ_MARK(0x8003AC28);
ZZ_MARK_TARGET(0x8003AC2C,ZZ_3AA64_1C8);
ZZ_MARK(0x8003AC30);
ZZ_MARK_TARGET(0x8003AC34,ZZ_3AA64_1D0);
ZZ_MARK(0x8003AC38);
ZZ_MARK(0x8003AC3C);
ZZ_MARK_TARGET(0x8003AC40,ZZ_3AA64_1DC);
ZZ_MARK(0x8003AC44);
ZZ_MARK_TARGET(0x8003AC48,ZZ_3AA64_1E4);
ZZ_MARK(0x8003AC4C);
