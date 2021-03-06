#ifdef ZZ_INCLUDE_CODE
ZZ_146F0:
	SP -= 40;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0;
	EMU_Write32(SP + 28,S3); //+ 0x1C
	S3 = A1;
	EMU_Write32(SP + 24,S2); //+ 0x18
	S2 = A2;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = A3;
	A1 = EMU_ReadU32(SP + 56); //+ 0x38
	EMU_Write32(SP + 32,RA); //+ 0x20
	RA = 0x80014724; //ZZ_146F0_34
	A0 = S1;
	ZZ_CLOCKCYCLES(13,0x800141F4);
	goto ZZ_141F4;
ZZ_146F0_34:
	V1 = V0;
	V0 = -1;
	if (V1 == V0)
	{
		V0 = -12;
		ZZ_CLOCKCYCLES(4,0x800148A4);
		goto ZZ_146F0_1B4;
	}
	V0 = -12;
	A0 = EMU_ReadU32(S1);
	V0 = V1 + A0;
	V1 = V0 << 1;
	V1 += V0;
	V1 <<= 2;
	V1 = V1 - V0;
	V1 <<= 2;
	V0 = 0x80060000;
	V0 -= 15064;
	if (!S0)
	{
		A2 = V1 + V0;
		ZZ_CLOCKCYCLES(16,0x80014840);
		goto ZZ_146F0_150;
	}
	A2 = V1 + V0;
	A3 = A0 - 1;
	V0 = EMU_ReadU32(S0 + 20); //+ 0x14
	if ((int32_t)A3 < 0)
	{
		T0 = A2;
		ZZ_CLOCKCYCLES(20,0x80014838);
		goto ZZ_146F0_148;
	}
	T0 = A2;
	A0 = (int32_t)V0 >> 1;
	T1 = 0x63960000;
	T1 |= 0x347F;
	T3 = 0x1;
	T2 = 0x2;
	A1 = A2 + 20;
	ZZ_CLOCKCYCLES(26,0x8001478C);
ZZ_146F0_9C:
	V0 = A0 + A3;
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 12356); //+ 0xFFFFCFBC
	V0 <<= 2;
	V0 += V1;
	S0 = EMU_ReadU32(V0);
	V0 = EMU_ReadU32(S0 + 20); //+ 0x14
	if (S2 == T1)
	{
		EMU_Write32(A1,V0);
		ZZ_CLOCKCYCLES(10,0x800147BC);
		goto ZZ_146F0_CC;
	}
	EMU_Write32(A1,V0);
	EMU_Write32(A1 + 4,S2); //+ 0x4
	ZZ_CLOCKCYCLES(12,0x800147C8);
	goto ZZ_146F0_D8;
ZZ_146F0_CC:
	V0 = EMU_ReadU32(S0 + 24); //+ 0x18
	EMU_Write32(A1 + 4,V0); //+ 0x4
	ZZ_CLOCKCYCLES(3,0x800147C8);
ZZ_146F0_D8:
	V0 = EMU_ReadU16(S0 + 10); //+ 0xA
	EMU_Write16(S0 + 4,T3); //+ 0x4
	EMU_Write16(A1 - 10,V0); //+ 0xFFFFFFF6
	V0 = EMU_ReadU32(S0 + 40); //+ 0x28
	EMU_Write32(A1 + 20,V0); //+ 0x14
	V0 = EMU_ReadU32(S1);
	EMU_Write32(A1 + 16,T0); //+ 0x10
	EMU_Write32(A1 + 8,V0); //+ 0x8
	V0 = EMU_ReadU32(S1);
	V0 -= 1;
	if (A3 != V0)
	{
		V0 = 0xC;
		ZZ_CLOCKCYCLES(14,0x80014808);
		goto ZZ_146F0_118;
	}
	V0 = 0xC;
	EMU_Write16(A1 - 16,T2); //+ 0xFFFFFFF0
	ZZ_CLOCKCYCLES(16,0x8001480C);
	goto ZZ_146F0_11C;
ZZ_146F0_118:
	EMU_Write16(A1 - 16,V0); //+ 0xFFFFFFF0
	ZZ_CLOCKCYCLES(1,0x8001480C);
ZZ_146F0_11C:
	V0 = EMU_ReadU32(A1);
	A1 -= 44;
	A3 -= 1;
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 12356); //+ 0xFFFFCFBC
	V0 = (int32_t)V0 >> 1;
	V0 <<= 2;
	V0 += V1;
	EMU_Write32(V0,A2);
	if ((int32_t)A3 >= 0)
	{
		A2 -= 44;
		ZZ_CLOCKCYCLES(11,0x8001478C);
		goto ZZ_146F0_9C;
	}
	A2 -= 44;
	ZZ_CLOCKCYCLES(11,0x80014838);
ZZ_146F0_148:
	V0 = T0;
	ZZ_CLOCKCYCLES(2,0x800148A4);
	goto ZZ_146F0_1B4;
ZZ_146F0_150:
	A0 = 0x1;
	EMU_Write32(S1,A0);
	V0 = 0x80030000;
	V0 = EMU_ReadU32(V0 + 17696); //+ 0x4520
	EMU_Write32(A2 + 20,S3); //+ 0x14
	EMU_Write32(A2 + 24,S2); //+ 0x18
	EMU_Write16(A2 + 10,R0); //+ 0xA
	EMU_Write32(A2 + 40,V0); //+ 0x28
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 12376); //+ 0xFFFFCFA8
	V0 = A2;
	V1 += 1;
	AT = 0x80060000;
	EMU_Write32(AT - 12376,V1); //+ 0xFFFFCFA8
	V1 = EMU_ReadU32(V0 + 20); //+ 0x14
	EMU_Write32(V0 + 28,A0); //+ 0x1C
	A0 = 0x2;
	EMU_Write32(V0 + 36,V0); //+ 0x24
	EMU_Write16(V0 + 4,A0); //+ 0x4
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 12356); //+ 0xFFFFCFBC
	V1 = (int32_t)V1 >> 1;
	V1 <<= 2;
	V1 += A0;
	EMU_Write32(V1,V0);
	ZZ_CLOCKCYCLES(25,0x800148A4);
ZZ_146F0_1B4:
	RA = EMU_ReadU32(SP + 32); //+ 0x20
	S3 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 40;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x80014C5C,ZZ_14C08_54);
	ZZ_JUMPREGISTER(0x800136DC,ZZ_134C8_214);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800146F0,0x80014724,ZZ_146F0);
ZZ_MARK_TARGET(0x80014724,0x8001478C,ZZ_146F0_34);
ZZ_MARK_TARGET(0x8001478C,0x800147BC,ZZ_146F0_9C);
ZZ_MARK_TARGET(0x800147BC,0x800147C8,ZZ_146F0_CC);
ZZ_MARK_TARGET(0x800147C8,0x80014808,ZZ_146F0_D8);
ZZ_MARK_TARGET(0x80014808,0x8001480C,ZZ_146F0_118);
ZZ_MARK_TARGET(0x8001480C,0x80014838,ZZ_146F0_11C);
ZZ_MARK_TARGET(0x80014838,0x80014840,ZZ_146F0_148);
ZZ_MARK_TARGET(0x80014840,0x800148A4,ZZ_146F0_150);
ZZ_MARK_TARGET(0x800148A4,0x800148C4,ZZ_146F0_1B4);
