#ifdef ZZ_INCLUDE_CODE
ZZ_3A2AC:
	SP -= 60;
	EMU_Write32(SP + 16,S0); //+ 0x10
	EMU_Write32(SP + 20,S1); //+ 0x14
	EMU_Write32(SP + 24,S2); //+ 0x18
	EMU_Write32(SP + 28,S3); //+ 0x1C
	EMU_Write32(SP + 32,S4); //+ 0x20
	EMU_Write32(SP + 36,S5); //+ 0x24
	EMU_Write32(SP + 40,S6); //+ 0x28
	EMU_Write32(SP + 44,S7); //+ 0x2C
	EMU_Write32(SP + 48,FP); //+ 0x30
	EMU_Write32(SP + 52,RA); //+ 0x34
	S0 = A0;
	S1 = A1;
	S2 = A2;
	FP = 0x1F800000;
	S5 = EMU_ReadU32(S0 + 192); //+ 0xC0
	S6 = EMU_ReadU32(S0 + 188); //+ 0xBC
	S7 = EMU_ReadU32(S0 + 196); //+ 0xC4
	S3 = EMU_ReadU32(S0 + 20); //+ 0x14
	S4 = EMU_ReadU32(S0 + 16); //+ 0x10
	S3 = EMU_ReadU32(S3 + 24); //+ 0x18
	S4 = EMU_ReadU32(S4 + 24); //+ 0x18
	ZZ_CLOCKCYCLES(22,0x8003A304);
ZZ_3A2AC_58:
	A1 = EMU_ReadU32(S5);
	S5 += 4;
	EMU_Write32(S0 + 192,S5); //+ 0xC0
	A0 = EMU_ReadU32(FP + 92); //+ 0x5C
	A3 = A1 >> 22;
	A3 &= 0x3FC;
	A3 += A0;
	A3 = EMU_ReadU32(A3);
	ZZ_JUMPREGISTER_BEGIN(A3);
	ZZ_CLOCKCYCLES_JR(11);
	ZZ_JUMPREGISTER(0x8003A36C,ZZ_3A2AC_C0);
	ZZ_JUMPREGISTER(0x8003A390,ZZ_3A2AC_E4);
	ZZ_JUMPREGISTER(0x8003A3B4,ZZ_3A2AC_108);
	ZZ_JUMPREGISTER(0x8003A3DC,ZZ_3A2AC_130);
	ZZ_JUMPREGISTER(0x8003A498,ZZ_3A2AC_1EC);
	ZZ_JUMPREGISTER(0x8003A44C,ZZ_3A2AC_1A0);
	ZZ_JUMPREGISTER(0x8003A474,ZZ_3A2AC_1C8);
	ZZ_JUMPREGISTER(0x8003A578,ZZ_3A2AC_2CC);
	ZZ_JUMPREGISTER(0x8003A4C0,ZZ_3A2AC_214);
	ZZ_JUMPREGISTER(0x8003A4E4,ZZ_3A2AC_238);
	ZZ_JUMPREGISTER(0x8003A50C,ZZ_3A2AC_260);
	ZZ_JUMPREGISTER(0x8003A530,ZZ_3A2AC_284);
	ZZ_JUMPREGISTER(0x8003A404,ZZ_3A2AC_158);
	ZZ_JUMPREGISTER(0x8003A59C,ZZ_3A2AC_2F0);
	ZZ_JUMPREGISTER(0x8003A5C0,ZZ_3A2AC_314);
	ZZ_JUMPREGISTER(0x8003A5EC,ZZ_3A2AC_340);
	ZZ_JUMPREGISTER(0x8003A658,ZZ_3A2AC_3AC);
	ZZ_JUMPREGISTER(0x8003A42C,ZZ_3A2AC_180);
	ZZ_JUMPREGISTER(0x8003AA50,ZZ_3A9B0_A0);
	ZZ_JUMPREGISTER(0x8003A674,ZZ_3A2AC_3C8);
	ZZ_JUMPREGISTER(0x8003A694,ZZ_3A2AC_3E8);
	ZZ_JUMPREGISTER(0x8003A6C4,ZZ_3A2AC_418);
	ZZ_JUMPREGISTER(0x8003A558,ZZ_3A2AC_2AC);
	ZZ_JUMPREGISTER(0x8003A73C,ZZ_3A2AC_490);
	ZZ_JUMPREGISTER(0x8003A780,ZZ_3A2AC_4D4);
	ZZ_JUMPREGISTER(0x8003A7A8,ZZ_3A2AC_4FC);
	ZZ_JUMPREGISTER(0x8003A7C8,ZZ_3A2AC_51C);
	ZZ_JUMPREGISTER(0x8003A7FC,ZZ_3A2AC_550);
	ZZ_JUMPREGISTER(0x8003A824,ZZ_3A2AC_578);
	ZZ_JUMPREGISTER(0x8003A880,ZZ_3A2AC_5D4);
	ZZ_JUMPREGISTER(0x8003A8B0,ZZ_3A2AC_604);
	ZZ_JUMPREGISTER(0x8003A8D8,ZZ_3A2AC_62C);
	ZZ_JUMPREGISTER(0x8003ACDC,ZZ_3AC50_8C);
	ZZ_JUMPREGISTER(0x8003A904,ZZ_3A2AC_658);
	ZZ_JUMPREGISTER(0x8003AB08,ZZ_3AA64_A4);
	ZZ_JUMPREGISTER(0x8003AB34,ZZ_3AA64_D0);
	ZZ_JUMPREGISTER(0x8003A99C,ZZ_3A918_84);
	ZZ_JUMPREGISTER(0x8003A704,ZZ_3A2AC_458);
	ZZ_JUMPREGISTER(0x8003AB60,ZZ_3AA64_FC);
	ZZ_JUMPREGISTER(0x8003AB90,ZZ_3AA64_12C);
	ZZ_JUMPREGISTER(0x8003AB9C,ZZ_3AA64_138);
	ZZ_JUMPREGISTER(0x8003ABA8,ZZ_3AA64_144);
	ZZ_JUMPREGISTER(0x8003AC08,ZZ_3AA64_1A4);
	ZZ_JUMPREGISTER(0x8003AC2C,ZZ_3AA64_1C8);
	ZZ_JUMPREGISTER(0x8003ACAC,ZZ_3AC50_5C);
	ZZ_JUMPREGISTER(0x8003B070,ZZ_3AC50_420);
	ZZ_JUMPREGISTER(0x8003A304,ZZ_3A2AC_58);
	ZZ_JUMPREGISTER(0x8003AD0C,ZZ_3AC50_BC);
	ZZ_JUMPREGISTER(0x8003AE80,ZZ_3AC50_230);
	ZZ_JUMPREGISTER(0x8003AF30,ZZ_3AC50_2E0);
	ZZ_JUMPREGISTER(0x8003AF4C,ZZ_3AC50_2FC);
	ZZ_JUMPREGISTER(0x8003AF7C,ZZ_3AC50_32C);
	ZZ_JUMPREGISTER(0x8003AFA0,ZZ_3AC50_350);
	ZZ_JUMPREGISTER(0x8003AFAC,ZZ_3AC50_35C);
	ZZ_JUMPREGISTER(0x8003AFD4,ZZ_3AC50_384);
	ZZ_JUMPREGISTER(0x8003B000,ZZ_3AC50_3B0);
	ZZ_JUMPREGISTER(0x8003B00C,ZZ_3AC50_3BC);
	ZZ_JUMPREGISTER(0x8003AD18,ZZ_3AC50_C8);
	ZZ_JUMPREGISTER(0x8003AD84,ZZ_3AC50_134);
	ZZ_JUMPREGISTER(0x8003B018,ZZ_3AC50_3C8);
	ZZ_JUMPREGISTER(0x8003B03C,ZZ_3AC50_3EC);
	ZZ_JUMPREGISTER(0x8003AD30,ZZ_3AC50_E0);
	ZZ_JUMPREGISTER(0x8003AD60,ZZ_3AC50_110);
	ZZ_JUMPREGISTER(0x8003AD3C,ZZ_3AC50_EC);
	ZZ_JUMPREGISTER(0x8003AD48,ZZ_3AC50_F8);
	ZZ_JUMPREGISTER(0x8003AD24,ZZ_3AC50_D4);
	ZZ_JUMPREGISTER(0x8003B030,ZZ_3AC50_3E0);
	ZZ_JUMPREGISTER(0x8003B024,ZZ_3AC50_3D4);
	ZZ_JUMPREGISTER(0x8003ADFC,ZZ_3AC50_1AC);
	ZZ_JUMPREGISTER(0x8003AD54,ZZ_3AC50_104);
	ZZ_JUMPREGISTER(0x8003AD6C,ZZ_3AC50_11C);
	ZZ_JUMPREGISTER(0x8003B0BC,ZZ_3AC50_46C);
	ZZ_JUMPREGISTER(0x8003B0C8,ZZ_3AC50_478);
	ZZ_JUMPREGISTER(0x8003B0D4,ZZ_3AC50_484);
	ZZ_JUMPREGISTER(0x8003B0E0,ZZ_3AC50_490);
	ZZ_JUMPREGISTER(0x8003ABD8,ZZ_3AA64_174);
	ZZ_JUMPREGISTER_END();
ZZ_3A2AC_84:
	EMU_Write32(S0 + 192,S5); //+ 0xC0
	EMU_Write32(S0 + 188,S6); //+ 0xBC
	EMU_Write32(S0 + 196,S7); //+ 0xC4
	RA = EMU_ReadU32(SP + 52); //+ 0x34
	FP = EMU_ReadU32(SP + 48); //+ 0x30
	S7 = EMU_ReadU32(SP + 44); //+ 0x2C
	S6 = EMU_ReadU32(SP + 40); //+ 0x28
	S5 = EMU_ReadU32(SP + 36); //+ 0x24
	S4 = EMU_ReadU32(SP + 32); //+ 0x20
	S3 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 60;
	ZZ_CLOCKCYCLES_JR(15);
	ZZ_JUMPREGISTER(0x8001CDEC,ZZ_1CD48_A4);
	ZZ_JUMPREGISTER(0x8001CEF4,ZZ_1CD48_1AC);
	ZZ_JUMPREGISTER(0x8001C6A0,ZZ_1C478_228);
	ZZ_JUMPREGISTER(0x8001C720,ZZ_1C478_2A8);
	ZZ_JUMPREGISTER(0x8001CA9C,ZZ_1C850_24C);
	ZZ_JUMPREGISTER(0x8001CAF4,ZZ_1C850_2A4);
	ZZ_JUMPREGISTER(0x8001D4C8,ZZ_1D448_80);
	ZZ_JUMPREGISTER_END();
ZZ_3A2AC_C0:
	RA = 0x8003A374; //ZZ_3A2AC_C8
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_C8:
	V1 = V0;
	RA = 0x8003A380; //ZZ_3A2AC_D4
	A0 = A1;
	ZZ_CLOCKCYCLES(3,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_D4:
	S6 += 4;
	V1 += V0;
	EMU_Write32(S6 - 4,V1); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(4,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_E4:
	RA = 0x8003A398; //ZZ_3A2AC_EC
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_EC:
	V1 = V0;
	RA = 0x8003A3A4; //ZZ_3A2AC_F8
	A0 = A1;
	ZZ_CLOCKCYCLES(3,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_F8:
	S6 += 4;
	V1 = V0 - V1;
	EMU_Write32(S6 - 4,V1); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(4,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_108:
	RA = 0x8003A3BC; //ZZ_3A2AC_110
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_110:
	V1 = V0;
	RA = 0x8003A3C8; //ZZ_3A2AC_11C
	A0 = A1;
	ZZ_CLOCKCYCLES(3,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_11C:
	S6 += 4;
	EMU_SMultiply(V1,V0);
	V1 = LO;
	EMU_Write32(S6 - 4,V1); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(5,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_130:
	RA = 0x8003A3E4; //ZZ_3A2AC_138
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_138:
	V1 = V0;
	RA = 0x8003A3F0; //ZZ_3A2AC_144
	A0 = A1;
	ZZ_CLOCKCYCLES(3,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_144:
	S6 += 4;
	EMU_SDivide(V0,V1);
	V1 = LO;
	EMU_Write32(S6 - 4,V1); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(5,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_158:
	RA = 0x8003A40C; //ZZ_3A2AC_160
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_160:
	V1 = V0;
	RA = 0x8003A418; //ZZ_3A2AC_16C
	A0 = A1;
	ZZ_CLOCKCYCLES(3,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_16C:
	S6 += 4;
	EMU_SDivide(V0,V1);
	V1 = HI;
	EMU_Write32(S6 - 4,V1); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(5,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_180:
	RA = 0x8003A434; //ZZ_3A2AC_188
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_188:
	V1 = V0;
	RA = 0x8003A440; //ZZ_3A2AC_194
	A0 = A1 << 21;
	ZZ_CLOCKCYCLES(3,0x8003A0A8);
	goto ZZ_3A0A8;
ZZ_3A2AC_194:
	V1 = V1 < 1;
	EMU_Write32(V0,V1);
	ZZ_CLOCKCYCLES(3,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_1A0:
	RA = 0x8003A454; //ZZ_3A2AC_1A8
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_1A8:
	V1 = V0;
	RA = 0x8003A460; //ZZ_3A2AC_1B4
	A0 = A1;
	ZZ_CLOCKCYCLES(3,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_1B4:
	if (!V1)
	{
		S6 += 4;
		ZZ_CLOCKCYCLES(2,0x8003A46C);
		goto ZZ_3A2AC_1C0;
	}
	S6 += 4;
	V1 = V0;
	ZZ_CLOCKCYCLES(3,0x8003A46C);
ZZ_3A2AC_1C0:
	EMU_Write32(S6 - 4,V1); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(2,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_1C8:
	RA = 0x8003A47C; //ZZ_3A2AC_1D0
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_1D0:
	V1 = V0;
	RA = 0x8003A488; //ZZ_3A2AC_1DC
	A0 = A1;
	ZZ_CLOCKCYCLES(3,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_1DC:
	S6 += 4;
	V1 |= V0;
	EMU_Write32(S6 - 4,V1); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(4,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_1EC:
	RA = 0x8003A4A0; //ZZ_3A2AC_1F4
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_1F4:
	V1 = V0;
	RA = 0x8003A4AC; //ZZ_3A2AC_200
	A0 = A1;
	ZZ_CLOCKCYCLES(3,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_200:
	S6 += 4;
	V1 ^= V0;
	V1 = V1 < 1;
	EMU_Write32(S6 - 4,V1); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(5,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_214:
	RA = 0x8003A4C8; //ZZ_3A2AC_21C
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_21C:
	V1 = V0;
	RA = 0x8003A4D4; //ZZ_3A2AC_228
	A0 = A1;
	ZZ_CLOCKCYCLES(3,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_228:
	S6 += 4;
	V1 = (int32_t)V0 < (int32_t)V1;
	EMU_Write32(S6 - 4,V1); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(4,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_238:
	RA = 0x8003A4EC; //ZZ_3A2AC_240
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_240:
	V1 = V0;
	RA = 0x8003A4F8; //ZZ_3A2AC_24C
	A0 = A1;
	ZZ_CLOCKCYCLES(3,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_24C:
	S6 += 4;
	V1 = (int32_t)V1 < (int32_t)V0;
	V1 ^= 0x1;
	EMU_Write32(S6 - 4,V1); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(5,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_260:
	RA = 0x8003A514; //ZZ_3A2AC_268
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_268:
	V1 = V0;
	RA = 0x8003A520; //ZZ_3A2AC_274
	A0 = A1;
	ZZ_CLOCKCYCLES(3,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_274:
	S6 += 4;
	V1 = (int32_t)V1 < (int32_t)V0;
	EMU_Write32(S6 - 4,V1); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(4,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_284:
	RA = 0x8003A538; //ZZ_3A2AC_28C
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_28C:
	V1 = V0;
	RA = 0x8003A544; //ZZ_3A2AC_298
	A0 = A1;
	ZZ_CLOCKCYCLES(3,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_298:
	S6 += 4;
	V1 = (int32_t)V0 < (int32_t)V1;
	V1 ^= 0x1;
	EMU_Write32(S6 - 4,V1); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(5,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_2AC:
	RA = 0x8003A560; //ZZ_3A2AC_2B4
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_2B4:
	V1 = V0;
	RA = 0x8003A56C; //ZZ_3A2AC_2C0
	A0 = A1 << 21;
	ZZ_CLOCKCYCLES(3,0x8003A0A8);
	goto ZZ_3A0A8;
ZZ_3A2AC_2C0:
	V1 = ~V1;
	EMU_Write32(V0,V1);
	ZZ_CLOCKCYCLES(3,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_2CC:
	RA = 0x8003A580; //ZZ_3A2AC_2D4
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_2D4:
	V1 = V0;
	RA = 0x8003A58C; //ZZ_3A2AC_2E0
	A0 = A1;
	ZZ_CLOCKCYCLES(3,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_2E0:
	S6 += 4;
	V1 &= V0;
	EMU_Write32(S6 - 4,V1); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(4,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_2F0:
	RA = 0x8003A5A4; //ZZ_3A2AC_2F8
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_2F8:
	V1 = V0;
	RA = 0x8003A5B0; //ZZ_3A2AC_304
	A0 = A1;
	ZZ_CLOCKCYCLES(3,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_304:
	S6 += 4;
	V1 ^= V0;
	EMU_Write32(S6 - 4,V1); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(4,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_314:
	RA = 0x8003A5C8; //ZZ_3A2AC_31C
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_31C:
	V1 = V0;
	RA = 0x8003A5D4; //ZZ_3A2AC_328
	A0 = A1;
	ZZ_CLOCKCYCLES(3,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_328:
	S6 += 4;
	V0 &= V1;
	V1 ^= V0;
	V1 = V1 < 1;
	EMU_Write32(S6 - 4,V1); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(6,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_340:
	RA = 0x8003A5F4; //ZZ_3A2AC_348
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_348:
	V1 = V0;
	RA = 0x8003A600; //ZZ_3A2AC_354
	A0 = A1;
	ZZ_CLOCKCYCLES(3,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_354:
	AT = 0x80060000;
	AT -= 2764;
	A1 = EMU_ReadU32(AT + 4); //+ 0x4
	A0 = EMU_ReadU32(AT);
	A2 = A1 << 24;
	A1 >>= 8;
	A3 = A0 + A1;
	A0 >>= 8;
	A0 |= A2;
	A2 = A0 >> 8;
	A3 += A2;
	A3 <<= 24;
	A1 |= A3;
	A2 = V1 - V0;
	EMU_UDivide(A1,A2);
	EMU_Write32(AT + 4,A1); //+ 0x4
	EMU_Write32(AT,A0);
	S6 += 4;
	V1 = HI;
	V1 += V0;
	EMU_Write32(S6 - 4,V1); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(22,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_3AC:
	RA = 0x8003A660; //ZZ_3A2AC_3B4
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_3B4:
	V1 = V0;
	RA = 0x8003A66C; //ZZ_3A2AC_3C0
	A0 = A1 << 21;
	ZZ_CLOCKCYCLES(3,0x8003A0A8);
	goto ZZ_3A0A8;
ZZ_3A2AC_3C0:
	EMU_Write32(V0,V1);
	ZZ_CLOCKCYCLES(2,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_3C8:
	A2 = 28;
	RA = 0x8003A680; //ZZ_3A2AC_3D4
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(3,0x80039FC4);
	goto ZZ_39FC4;
ZZ_3A2AC_3D4:
	V1 = V0;
	RA = 0x8003A68C; //ZZ_3A2AC_3E0
	A0 = A1 << 21;
	ZZ_CLOCKCYCLES(3,0x8003A0A8);
	goto ZZ_3A0A8;
ZZ_3A2AC_3E0:
	EMU_Write32(V0,V1);
	ZZ_CLOCKCYCLES(2,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_3E8:
	RA = 0x8003A69C; //ZZ_3A2AC_3F0
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_3F0:
	V1 = V0;
	RA = 0x8003A6A8; //ZZ_3A2AC_3FC
	A0 = A1;
	ZZ_CLOCKCYCLES(3,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_3FC:
	if ((int32_t)V1 >= 0)
	{
		A0 = V0 << V1;
		ZZ_CLOCKCYCLES(2,0x8003A6B8);
		goto ZZ_3A2AC_40C;
	}
	A0 = V0 << V1;
	V1 = -V1;
	A0 = (int32_t)V0 >> V1;
	ZZ_CLOCKCYCLES(4,0x8003A6B8);
ZZ_3A2AC_40C:
	S6 += 4;
	EMU_Write32(S6 - 4,A0); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(3,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_418:
	A2 = 28;
	RA = 0x8003A6D0; //ZZ_3A2AC_424
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(3,0x80039FC4);
	goto ZZ_39FC4;
ZZ_3A2AC_424:
	V1 = V0;
	RA = 0x8003A6DC; //ZZ_3A2AC_430
	A0 = A1;
	ZZ_CLOCKCYCLES(3,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_430:
	if (!V1)
	{
		ZZ_CLOCKCYCLES(2,0x8003A6E8);
		goto ZZ_3A2AC_43C;
	}
	A0 = EMU_ReadU32(V1);
	ZZ_CLOCKCYCLES(3,0x8003A6E8);
ZZ_3A2AC_43C:
	S6 += 4;
	EMU_Write32(S6 - 4,V0); //+ 0xFFFFFFFC
	if (!V1)
	{
		ZZ_CLOCKCYCLES(4,0x8003A304);
		goto ZZ_3A2AC_58;
	}
	S6 += 4;
	EMU_Write32(S6 - 4,A0); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(7,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_458:
	A2 = 28;
	RA = 0x8003A710; //ZZ_3A2AC_464
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(3,0x80039FC4);
	goto ZZ_39FC4;
ZZ_3A2AC_464:
	V1 = V0;
	A2 = 24;
	RA = 0x8003A720; //ZZ_3A2AC_474
	A0 = A1;
	ZZ_CLOCKCYCLES(4,0x80039FC4);
	goto ZZ_39FC4;
ZZ_3A2AC_474:
	S6 += 4;
	EMU_Write32(S6 - 4,V0); //+ 0xFFFFFFFC
	if (!V1)
	{
		ZZ_CLOCKCYCLES(4,0x8003A304);
		goto ZZ_3A2AC_58;
	}
	S6 += 4;
	EMU_Write32(S6 - 4,V1); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(7,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_490:
	A0 = A1 >> 18;
	RA = 0x8003A748; //ZZ_3A2AC_49C
	A0 &= 0x3F;
	ZZ_CLOCKCYCLES(3,0x8003A234);
	goto ZZ_3A234;
ZZ_3A2AC_49C:
	V1 = A1 & 0x3FFF;
	A0 = V1 - 16383;
	if (!A0)
	{
		A0 = 0;
		ZZ_CLOCKCYCLES(4,0x8003A778);
		goto ZZ_3A2AC_4CC;
	}
	A0 = 0;
	A0 = A1 & 0x4000;
	if (!A0)
	{
		A0 = EMU_ReadU32(S0 + 12); //+ 0xC
		ZZ_CLOCKCYCLES(7,0x8003A768);
		goto ZZ_3A2AC_4BC;
	}
	A0 = EMU_ReadU32(S0 + 12); //+ 0xC
	A0 = EMU_ReadU32(S0 + 20); //+ 0x14
	ZZ_CLOCKCYCLES(8,0x8003A768);
ZZ_3A2AC_4BC:
	V1 <<= 2;
	A0 = EMU_ReadU32(A0 + 20); //+ 0x14
	A0 += V1;
	ZZ_CLOCKCYCLES(4,0x8003A778);
ZZ_3A2AC_4CC:
	EMU_Write32(V0,A0);
	ZZ_CLOCKCYCLES(2,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_4D4:
	RA = 0x8003A788; //ZZ_3A2AC_4DC
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_4DC:
	V1 = V0;
	RA = 0x8003A794; //ZZ_3A2AC_4E8
	A0 = A1 << 21;
	ZZ_CLOCKCYCLES(3,0x8003A0A8);
	goto ZZ_3A0A8;
ZZ_3A2AC_4E8:
	if ((int32_t)V1 >= 0)
	{
		EMU_Write32(V0,V1);
		ZZ_CLOCKCYCLES(2,0x8003A304);
		goto ZZ_3A2AC_58;
	}
	EMU_Write32(V0,V1);
	V1 = -V1;
	EMU_Write32(V0,V1);
	ZZ_CLOCKCYCLES(5,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_4FC:
	A0 = 0x1F0000;
	A0 |= 0xFFFF;
	A0 &= A1;
	RA = 0x8003A7BC; //ZZ_3A2AC_510
	A1 = 0;
	ZZ_CLOCKCYCLES(5,0x80037244);
	goto ZZ_37244;
ZZ_3A2AC_510:
	S6 += 4;
	EMU_Write32(S6 - 4,V0); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(3,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_51C:
	A3 = EMU_ReadU32(FP + 84); //+ 0x54
	RA = 0x8003A7D4; //ZZ_3A2AC_528
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(3,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_528:
	V1 = V0;
	RA = 0x8003A7E0; //ZZ_3A2AC_534
	A0 = A1;
	ZZ_CLOCKCYCLES(3,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_534:
	EMU_SMultiply(V1,A3);
	A0 = LO;
	A0 = (int32_t)A0 >> 10;
	A0 += V0;
	S6 += 4;
	EMU_Write32(S6 - 4,A0); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(7,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_550:
	EMU_Write32(S0 + 188,S6); //+ 0xBC
	EMU_Write32(S0 + 196,S7); //+ 0xC4
	RA = 0x8003A80C; //ZZ_3A2AC_560
	A0 = S0;
	ZZ_CLOCKCYCLES(4,0x80037930);
	goto ZZ_37930;
ZZ_3A2AC_560:
	S3 = EMU_ReadU32(S0 + 20); //+ 0x14
	S4 = EMU_ReadU32(S0 + 16); //+ 0x10
	S3 = EMU_ReadU32(S3 + 24); //+ 0x18
	S4 = EMU_ReadU32(S4 + 24); //+ 0x18
	S6 = EMU_ReadU32(S0 + 188); //+ 0xBC
	ZZ_CLOCKCYCLES(6,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_578:
	RA = 0x8003A82C; //ZZ_3A2AC_580
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_580:
	V1 = V0;
	RA = 0x8003A838; //ZZ_3A2AC_58C
	A0 = A1;
	ZZ_CLOCKCYCLES(3,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_58C:
	V0 <<= 11;
	EMU_SDivide(V0,V1);
	AT = 0xFFFF;
	AT = (int32_t)AT < (int32_t)V1;
	A0 = LO;
	RA = 0x8003A854; //ZZ_3A2AC_5A8
	A0 -= 1024;
	ZZ_CLOCKCYCLES(7,0x8003AC50);
	goto ZZ_3AC50;
ZZ_3A2AC_5A8:
	AT <<= 1;
	A0 = EMU_CheckedAdd(A0,4096);
	A0 = (int32_t)A0 >> AT;
	EMU_SMultiply(A0,V1);
	A0 = 13;
	AT = A0 - AT;
	A0 = LO;
	A0 = (int32_t)A0 >> AT;
	S6 += 4;
	EMU_Write32(S6 - 4,A0); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(11,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_5D4:
	A3 = EMU_ReadU32(FP + 80); //+ 0x50
	RA = 0x8003A88C; //ZZ_3A2AC_5E0
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(3,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_5E0:
	V1 = V0;
	RA = 0x8003A898; //ZZ_3A2AC_5EC
	A0 = A1;
	ZZ_CLOCKCYCLES(3,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_5EC:
	V1 += A3;
	EMU_SDivide(V1,V0);
	S6 += 4;
	V1 = HI;
	EMU_Write32(S6 - 4,V1); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(6,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_604:
	RA = 0x8003A8B8; //ZZ_3A2AC_60C
	A0 = A1;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_60C:
	A0 = EMU_ReadU32(FP + 88); //+ 0x58
	V0 = (int32_t)V0 >> 8;
	V0 <<= 2;
	V0 += A0;
	V0 = EMU_ReadU32(V0);
	S6 += 4;
	EMU_Write32(S6 - 4,V0); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(8,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_62C:
	RA = 0x8003A8E0; //ZZ_3A2AC_634
	A0 = A1 >> 12;
	ZZ_CLOCKCYCLES(2,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_634:
	V1 = V0;
	RA = 0x8003A8EC; //ZZ_3A2AC_640
	A0 = A1;
	ZZ_CLOCKCYCLES(3,0x8003A118);
	goto ZZ_3A118;
ZZ_3A2AC_640:
	A0 = EMU_ReadU32(FP + 88); //+ 0x58
	V0 = (int32_t)V0 >> 8;
	V0 <<= 2;
	V0 += A0;
	EMU_Write32(V0,V1);
	ZZ_CLOCKCYCLES(6,0x8003A304);
	goto ZZ_3A2AC_58;
ZZ_3A2AC_658:
	RA = 0x8003A90C; //ZZ_3A2AC_660
	ZZ_CLOCKCYCLES(2,0x8003A918);
	goto ZZ_3A918;
ZZ_3A2AC_660:
	S6 += 4;
	EMU_Write32(S6 - 4,A0); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(3,0x8003A304);
	goto ZZ_3A2AC_58;
#endif
ZZ_MARK_TARGET(0x8003A2AC,ZZ_3A2AC);
ZZ_MARK(0x8003A2B0);
ZZ_MARK(0x8003A2B4);
ZZ_MARK(0x8003A2B8);
ZZ_MARK(0x8003A2BC);
ZZ_MARK(0x8003A2C0);
ZZ_MARK(0x8003A2C4);
ZZ_MARK(0x8003A2C8);
ZZ_MARK(0x8003A2CC);
ZZ_MARK(0x8003A2D0);
ZZ_MARK(0x8003A2D4);
ZZ_MARK(0x8003A2D8);
ZZ_MARK(0x8003A2DC);
ZZ_MARK(0x8003A2E0);
ZZ_MARK(0x8003A2E4);
ZZ_MARK(0x8003A2E8);
ZZ_MARK(0x8003A2EC);
ZZ_MARK(0x8003A2F0);
ZZ_MARK(0x8003A2F4);
ZZ_MARK(0x8003A2F8);
ZZ_MARK(0x8003A2FC);
ZZ_MARK(0x8003A300);
ZZ_MARK_TARGET(0x8003A304,ZZ_3A2AC_58);
ZZ_MARK(0x8003A308);
ZZ_MARK(0x8003A30C);
ZZ_MARK(0x8003A310);
ZZ_MARK(0x8003A314);
ZZ_MARK(0x8003A318);
ZZ_MARK(0x8003A31C);
ZZ_MARK(0x8003A320);
ZZ_MARK(0x8003A324);
ZZ_MARK(0x8003A328);
ZZ_MARK(0x8003A32C);
ZZ_MARK_TARGET(0x8003A330,ZZ_3A2AC_84);
ZZ_MARK(0x8003A334);
ZZ_MARK(0x8003A338);
ZZ_MARK(0x8003A33C);
ZZ_MARK(0x8003A340);
ZZ_MARK(0x8003A344);
ZZ_MARK(0x8003A348);
ZZ_MARK(0x8003A34C);
ZZ_MARK(0x8003A350);
ZZ_MARK(0x8003A354);
ZZ_MARK(0x8003A358);
ZZ_MARK(0x8003A35C);
ZZ_MARK(0x8003A360);
ZZ_MARK(0x8003A364);
ZZ_MARK(0x8003A368);
ZZ_MARK_TARGET(0x8003A36C,ZZ_3A2AC_C0);
ZZ_MARK(0x8003A370);
ZZ_MARK_TARGET(0x8003A374,ZZ_3A2AC_C8);
ZZ_MARK(0x8003A378);
ZZ_MARK(0x8003A37C);
ZZ_MARK_TARGET(0x8003A380,ZZ_3A2AC_D4);
ZZ_MARK(0x8003A384);
ZZ_MARK(0x8003A388);
ZZ_MARK(0x8003A38C);
ZZ_MARK_TARGET(0x8003A390,ZZ_3A2AC_E4);
ZZ_MARK(0x8003A394);
ZZ_MARK_TARGET(0x8003A398,ZZ_3A2AC_EC);
ZZ_MARK(0x8003A39C);
ZZ_MARK(0x8003A3A0);
ZZ_MARK_TARGET(0x8003A3A4,ZZ_3A2AC_F8);
ZZ_MARK(0x8003A3A8);
ZZ_MARK(0x8003A3AC);
ZZ_MARK(0x8003A3B0);
ZZ_MARK_TARGET(0x8003A3B4,ZZ_3A2AC_108);
ZZ_MARK(0x8003A3B8);
ZZ_MARK_TARGET(0x8003A3BC,ZZ_3A2AC_110);
ZZ_MARK(0x8003A3C0);
ZZ_MARK(0x8003A3C4);
ZZ_MARK_TARGET(0x8003A3C8,ZZ_3A2AC_11C);
ZZ_MARK(0x8003A3CC);
ZZ_MARK(0x8003A3D0);
ZZ_MARK(0x8003A3D4);
ZZ_MARK(0x8003A3D8);
ZZ_MARK_TARGET(0x8003A3DC,ZZ_3A2AC_130);
ZZ_MARK(0x8003A3E0);
ZZ_MARK_TARGET(0x8003A3E4,ZZ_3A2AC_138);
ZZ_MARK(0x8003A3E8);
ZZ_MARK(0x8003A3EC);
ZZ_MARK_TARGET(0x8003A3F0,ZZ_3A2AC_144);
ZZ_MARK(0x8003A3F4);
ZZ_MARK(0x8003A3F8);
ZZ_MARK(0x8003A3FC);
ZZ_MARK(0x8003A400);
ZZ_MARK_TARGET(0x8003A404,ZZ_3A2AC_158);
ZZ_MARK(0x8003A408);
ZZ_MARK_TARGET(0x8003A40C,ZZ_3A2AC_160);
ZZ_MARK(0x8003A410);
ZZ_MARK(0x8003A414);
ZZ_MARK_TARGET(0x8003A418,ZZ_3A2AC_16C);
ZZ_MARK(0x8003A41C);
ZZ_MARK(0x8003A420);
ZZ_MARK(0x8003A424);
ZZ_MARK(0x8003A428);
ZZ_MARK_TARGET(0x8003A42C,ZZ_3A2AC_180);
ZZ_MARK(0x8003A430);
ZZ_MARK_TARGET(0x8003A434,ZZ_3A2AC_188);
ZZ_MARK(0x8003A438);
ZZ_MARK(0x8003A43C);
ZZ_MARK_TARGET(0x8003A440,ZZ_3A2AC_194);
ZZ_MARK(0x8003A444);
ZZ_MARK(0x8003A448);
ZZ_MARK_TARGET(0x8003A44C,ZZ_3A2AC_1A0);
ZZ_MARK(0x8003A450);
ZZ_MARK_TARGET(0x8003A454,ZZ_3A2AC_1A8);
ZZ_MARK(0x8003A458);
ZZ_MARK(0x8003A45C);
ZZ_MARK_TARGET(0x8003A460,ZZ_3A2AC_1B4);
ZZ_MARK(0x8003A464);
ZZ_MARK(0x8003A468);
ZZ_MARK_TARGET(0x8003A46C,ZZ_3A2AC_1C0);
ZZ_MARK(0x8003A470);
ZZ_MARK_TARGET(0x8003A474,ZZ_3A2AC_1C8);
ZZ_MARK(0x8003A478);
ZZ_MARK_TARGET(0x8003A47C,ZZ_3A2AC_1D0);
ZZ_MARK(0x8003A480);
ZZ_MARK(0x8003A484);
ZZ_MARK_TARGET(0x8003A488,ZZ_3A2AC_1DC);
ZZ_MARK(0x8003A48C);
ZZ_MARK(0x8003A490);
ZZ_MARK(0x8003A494);
ZZ_MARK_TARGET(0x8003A498,ZZ_3A2AC_1EC);
ZZ_MARK(0x8003A49C);
ZZ_MARK_TARGET(0x8003A4A0,ZZ_3A2AC_1F4);
ZZ_MARK(0x8003A4A4);
ZZ_MARK(0x8003A4A8);
ZZ_MARK_TARGET(0x8003A4AC,ZZ_3A2AC_200);
ZZ_MARK(0x8003A4B0);
ZZ_MARK(0x8003A4B4);
ZZ_MARK(0x8003A4B8);
ZZ_MARK(0x8003A4BC);
ZZ_MARK_TARGET(0x8003A4C0,ZZ_3A2AC_214);
ZZ_MARK(0x8003A4C4);
ZZ_MARK_TARGET(0x8003A4C8,ZZ_3A2AC_21C);
ZZ_MARK(0x8003A4CC);
ZZ_MARK(0x8003A4D0);
ZZ_MARK_TARGET(0x8003A4D4,ZZ_3A2AC_228);
ZZ_MARK(0x8003A4D8);
ZZ_MARK(0x8003A4DC);
ZZ_MARK(0x8003A4E0);
ZZ_MARK_TARGET(0x8003A4E4,ZZ_3A2AC_238);
ZZ_MARK(0x8003A4E8);
ZZ_MARK_TARGET(0x8003A4EC,ZZ_3A2AC_240);
ZZ_MARK(0x8003A4F0);
ZZ_MARK(0x8003A4F4);
ZZ_MARK_TARGET(0x8003A4F8,ZZ_3A2AC_24C);
ZZ_MARK(0x8003A4FC);
ZZ_MARK(0x8003A500);
ZZ_MARK(0x8003A504);
ZZ_MARK(0x8003A508);
ZZ_MARK_TARGET(0x8003A50C,ZZ_3A2AC_260);
ZZ_MARK(0x8003A510);
ZZ_MARK_TARGET(0x8003A514,ZZ_3A2AC_268);
ZZ_MARK(0x8003A518);
ZZ_MARK(0x8003A51C);
ZZ_MARK_TARGET(0x8003A520,ZZ_3A2AC_274);
ZZ_MARK(0x8003A524);
ZZ_MARK(0x8003A528);
ZZ_MARK(0x8003A52C);
ZZ_MARK_TARGET(0x8003A530,ZZ_3A2AC_284);
ZZ_MARK(0x8003A534);
ZZ_MARK_TARGET(0x8003A538,ZZ_3A2AC_28C);
ZZ_MARK(0x8003A53C);
ZZ_MARK(0x8003A540);
ZZ_MARK_TARGET(0x8003A544,ZZ_3A2AC_298);
ZZ_MARK(0x8003A548);
ZZ_MARK(0x8003A54C);
ZZ_MARK(0x8003A550);
ZZ_MARK(0x8003A554);
ZZ_MARK_TARGET(0x8003A558,ZZ_3A2AC_2AC);
ZZ_MARK(0x8003A55C);
ZZ_MARK_TARGET(0x8003A560,ZZ_3A2AC_2B4);
ZZ_MARK(0x8003A564);
ZZ_MARK(0x8003A568);
ZZ_MARK_TARGET(0x8003A56C,ZZ_3A2AC_2C0);
ZZ_MARK(0x8003A570);
ZZ_MARK(0x8003A574);
ZZ_MARK_TARGET(0x8003A578,ZZ_3A2AC_2CC);
ZZ_MARK(0x8003A57C);
ZZ_MARK_TARGET(0x8003A580,ZZ_3A2AC_2D4);
ZZ_MARK(0x8003A584);
ZZ_MARK(0x8003A588);
ZZ_MARK_TARGET(0x8003A58C,ZZ_3A2AC_2E0);
ZZ_MARK(0x8003A590);
ZZ_MARK(0x8003A594);
ZZ_MARK(0x8003A598);
ZZ_MARK_TARGET(0x8003A59C,ZZ_3A2AC_2F0);
ZZ_MARK(0x8003A5A0);
ZZ_MARK_TARGET(0x8003A5A4,ZZ_3A2AC_2F8);
ZZ_MARK(0x8003A5A8);
ZZ_MARK(0x8003A5AC);
ZZ_MARK_TARGET(0x8003A5B0,ZZ_3A2AC_304);
ZZ_MARK(0x8003A5B4);
ZZ_MARK(0x8003A5B8);
ZZ_MARK(0x8003A5BC);
ZZ_MARK_TARGET(0x8003A5C0,ZZ_3A2AC_314);
ZZ_MARK(0x8003A5C4);
ZZ_MARK_TARGET(0x8003A5C8,ZZ_3A2AC_31C);
ZZ_MARK(0x8003A5CC);
ZZ_MARK(0x8003A5D0);
ZZ_MARK_TARGET(0x8003A5D4,ZZ_3A2AC_328);
ZZ_MARK(0x8003A5D8);
ZZ_MARK(0x8003A5DC);
ZZ_MARK(0x8003A5E0);
ZZ_MARK(0x8003A5E4);
ZZ_MARK(0x8003A5E8);
ZZ_MARK_TARGET(0x8003A5EC,ZZ_3A2AC_340);
ZZ_MARK(0x8003A5F0);
ZZ_MARK_TARGET(0x8003A5F4,ZZ_3A2AC_348);
ZZ_MARK(0x8003A5F8);
ZZ_MARK(0x8003A5FC);
ZZ_MARK_TARGET(0x8003A600,ZZ_3A2AC_354);
ZZ_MARK(0x8003A604);
ZZ_MARK(0x8003A608);
ZZ_MARK(0x8003A60C);
ZZ_MARK(0x8003A610);
ZZ_MARK(0x8003A614);
ZZ_MARK(0x8003A618);
ZZ_MARK(0x8003A61C);
ZZ_MARK(0x8003A620);
ZZ_MARK(0x8003A624);
ZZ_MARK(0x8003A628);
ZZ_MARK(0x8003A62C);
ZZ_MARK(0x8003A630);
ZZ_MARK(0x8003A634);
ZZ_MARK(0x8003A638);
ZZ_MARK(0x8003A63C);
ZZ_MARK(0x8003A640);
ZZ_MARK(0x8003A644);
ZZ_MARK(0x8003A648);
ZZ_MARK(0x8003A64C);
ZZ_MARK(0x8003A650);
ZZ_MARK(0x8003A654);
ZZ_MARK_TARGET(0x8003A658,ZZ_3A2AC_3AC);
ZZ_MARK(0x8003A65C);
ZZ_MARK_TARGET(0x8003A660,ZZ_3A2AC_3B4);
ZZ_MARK(0x8003A664);
ZZ_MARK(0x8003A668);
ZZ_MARK_TARGET(0x8003A66C,ZZ_3A2AC_3C0);
ZZ_MARK(0x8003A670);
ZZ_MARK_TARGET(0x8003A674,ZZ_3A2AC_3C8);
ZZ_MARK(0x8003A678);
ZZ_MARK(0x8003A67C);
ZZ_MARK_TARGET(0x8003A680,ZZ_3A2AC_3D4);
ZZ_MARK(0x8003A684);
ZZ_MARK(0x8003A688);
ZZ_MARK_TARGET(0x8003A68C,ZZ_3A2AC_3E0);
ZZ_MARK(0x8003A690);
ZZ_MARK_TARGET(0x8003A694,ZZ_3A2AC_3E8);
ZZ_MARK(0x8003A698);
ZZ_MARK_TARGET(0x8003A69C,ZZ_3A2AC_3F0);
ZZ_MARK(0x8003A6A0);
ZZ_MARK(0x8003A6A4);
ZZ_MARK_TARGET(0x8003A6A8,ZZ_3A2AC_3FC);
ZZ_MARK(0x8003A6AC);
ZZ_MARK(0x8003A6B0);
ZZ_MARK(0x8003A6B4);
ZZ_MARK_TARGET(0x8003A6B8,ZZ_3A2AC_40C);
ZZ_MARK(0x8003A6BC);
ZZ_MARK(0x8003A6C0);
ZZ_MARK_TARGET(0x8003A6C4,ZZ_3A2AC_418);
ZZ_MARK(0x8003A6C8);
ZZ_MARK(0x8003A6CC);
ZZ_MARK_TARGET(0x8003A6D0,ZZ_3A2AC_424);
ZZ_MARK(0x8003A6D4);
ZZ_MARK(0x8003A6D8);
ZZ_MARK_TARGET(0x8003A6DC,ZZ_3A2AC_430);
ZZ_MARK(0x8003A6E0);
ZZ_MARK(0x8003A6E4);
ZZ_MARK_TARGET(0x8003A6E8,ZZ_3A2AC_43C);
ZZ_MARK(0x8003A6EC);
ZZ_MARK(0x8003A6F0);
ZZ_MARK(0x8003A6F4);
ZZ_MARK(0x8003A6F8);
ZZ_MARK(0x8003A6FC);
ZZ_MARK(0x8003A700);
ZZ_MARK_TARGET(0x8003A704,ZZ_3A2AC_458);
ZZ_MARK(0x8003A708);
ZZ_MARK(0x8003A70C);
ZZ_MARK_TARGET(0x8003A710,ZZ_3A2AC_464);
ZZ_MARK(0x8003A714);
ZZ_MARK(0x8003A718);
ZZ_MARK(0x8003A71C);
ZZ_MARK_TARGET(0x8003A720,ZZ_3A2AC_474);
ZZ_MARK(0x8003A724);
ZZ_MARK(0x8003A728);
ZZ_MARK(0x8003A72C);
ZZ_MARK(0x8003A730);
ZZ_MARK(0x8003A734);
ZZ_MARK(0x8003A738);
ZZ_MARK_TARGET(0x8003A73C,ZZ_3A2AC_490);
ZZ_MARK(0x8003A740);
ZZ_MARK(0x8003A744);
ZZ_MARK_TARGET(0x8003A748,ZZ_3A2AC_49C);
ZZ_MARK(0x8003A74C);
ZZ_MARK(0x8003A750);
ZZ_MARK(0x8003A754);
ZZ_MARK(0x8003A758);
ZZ_MARK(0x8003A75C);
ZZ_MARK(0x8003A760);
ZZ_MARK(0x8003A764);
ZZ_MARK_TARGET(0x8003A768,ZZ_3A2AC_4BC);
ZZ_MARK(0x8003A76C);
ZZ_MARK(0x8003A770);
ZZ_MARK(0x8003A774);
ZZ_MARK_TARGET(0x8003A778,ZZ_3A2AC_4CC);
ZZ_MARK(0x8003A77C);
ZZ_MARK_TARGET(0x8003A780,ZZ_3A2AC_4D4);
ZZ_MARK(0x8003A784);
ZZ_MARK_TARGET(0x8003A788,ZZ_3A2AC_4DC);
ZZ_MARK(0x8003A78C);
ZZ_MARK(0x8003A790);
ZZ_MARK_TARGET(0x8003A794,ZZ_3A2AC_4E8);
ZZ_MARK(0x8003A798);
ZZ_MARK(0x8003A79C);
ZZ_MARK(0x8003A7A0);
ZZ_MARK(0x8003A7A4);
ZZ_MARK_TARGET(0x8003A7A8,ZZ_3A2AC_4FC);
ZZ_MARK(0x8003A7AC);
ZZ_MARK(0x8003A7B0);
ZZ_MARK(0x8003A7B4);
ZZ_MARK(0x8003A7B8);
ZZ_MARK_TARGET(0x8003A7BC,ZZ_3A2AC_510);
ZZ_MARK(0x8003A7C0);
ZZ_MARK(0x8003A7C4);
ZZ_MARK_TARGET(0x8003A7C8,ZZ_3A2AC_51C);
ZZ_MARK(0x8003A7CC);
ZZ_MARK(0x8003A7D0);
ZZ_MARK_TARGET(0x8003A7D4,ZZ_3A2AC_528);
ZZ_MARK(0x8003A7D8);
ZZ_MARK(0x8003A7DC);
ZZ_MARK_TARGET(0x8003A7E0,ZZ_3A2AC_534);
ZZ_MARK(0x8003A7E4);
ZZ_MARK(0x8003A7E8);
ZZ_MARK(0x8003A7EC);
ZZ_MARK(0x8003A7F0);
ZZ_MARK(0x8003A7F4);
ZZ_MARK(0x8003A7F8);
ZZ_MARK_TARGET(0x8003A7FC,ZZ_3A2AC_550);
ZZ_MARK(0x8003A800);
ZZ_MARK(0x8003A804);
ZZ_MARK(0x8003A808);
ZZ_MARK_TARGET(0x8003A80C,ZZ_3A2AC_560);
ZZ_MARK(0x8003A810);
ZZ_MARK(0x8003A814);
ZZ_MARK(0x8003A818);
ZZ_MARK(0x8003A81C);
ZZ_MARK(0x8003A820);
ZZ_MARK_TARGET(0x8003A824,ZZ_3A2AC_578);
ZZ_MARK(0x8003A828);
ZZ_MARK_TARGET(0x8003A82C,ZZ_3A2AC_580);
ZZ_MARK(0x8003A830);
ZZ_MARK(0x8003A834);
ZZ_MARK_TARGET(0x8003A838,ZZ_3A2AC_58C);
ZZ_MARK(0x8003A83C);
ZZ_MARK(0x8003A840);
ZZ_MARK(0x8003A844);
ZZ_MARK(0x8003A848);
ZZ_MARK(0x8003A84C);
ZZ_MARK(0x8003A850);
ZZ_MARK_TARGET(0x8003A854,ZZ_3A2AC_5A8);
ZZ_MARK(0x8003A858);
ZZ_MARK(0x8003A85C);
ZZ_MARK(0x8003A860);
ZZ_MARK(0x8003A864);
ZZ_MARK(0x8003A868);
ZZ_MARK(0x8003A86C);
ZZ_MARK(0x8003A870);
ZZ_MARK(0x8003A874);
ZZ_MARK(0x8003A878);
ZZ_MARK(0x8003A87C);
ZZ_MARK_TARGET(0x8003A880,ZZ_3A2AC_5D4);
ZZ_MARK(0x8003A884);
ZZ_MARK(0x8003A888);
ZZ_MARK_TARGET(0x8003A88C,ZZ_3A2AC_5E0);
ZZ_MARK(0x8003A890);
ZZ_MARK(0x8003A894);
ZZ_MARK_TARGET(0x8003A898,ZZ_3A2AC_5EC);
ZZ_MARK(0x8003A89C);
ZZ_MARK(0x8003A8A0);
ZZ_MARK(0x8003A8A4);
ZZ_MARK(0x8003A8A8);
ZZ_MARK(0x8003A8AC);
ZZ_MARK_TARGET(0x8003A8B0,ZZ_3A2AC_604);
ZZ_MARK(0x8003A8B4);
ZZ_MARK_TARGET(0x8003A8B8,ZZ_3A2AC_60C);
ZZ_MARK(0x8003A8BC);
ZZ_MARK(0x8003A8C0);
ZZ_MARK(0x8003A8C4);
ZZ_MARK(0x8003A8C8);
ZZ_MARK(0x8003A8CC);
ZZ_MARK(0x8003A8D0);
ZZ_MARK(0x8003A8D4);
ZZ_MARK_TARGET(0x8003A8D8,ZZ_3A2AC_62C);
ZZ_MARK(0x8003A8DC);
ZZ_MARK_TARGET(0x8003A8E0,ZZ_3A2AC_634);
ZZ_MARK(0x8003A8E4);
ZZ_MARK(0x8003A8E8);
ZZ_MARK_TARGET(0x8003A8EC,ZZ_3A2AC_640);
ZZ_MARK(0x8003A8F0);
ZZ_MARK(0x8003A8F4);
ZZ_MARK(0x8003A8F8);
ZZ_MARK(0x8003A8FC);
ZZ_MARK(0x8003A900);
ZZ_MARK_TARGET(0x8003A904,ZZ_3A2AC_658);
ZZ_MARK(0x8003A908);
ZZ_MARK_TARGET(0x8003A90C,ZZ_3A2AC_660);
ZZ_MARK(0x8003A910);
ZZ_MARK(0x8003A914);
