#ifdef ZZ_INCLUDE_CODE
ZZ_296A8:
	SP -= 96;
	EMU_Write32(SP + 72,S2); //+ 0x48
	S2 = A0;
	if ((int32_t)A1 >= 0)
	{
		ZZ_CLOCKCYCLES(5,0x800296C0);
		goto ZZ_296A8_18;
	}
	A1 = -A1;
	ZZ_CLOCKCYCLES(6,0x800296C0);
ZZ_296A8_18:
	EMU_Write32(SP + 88,S6); //+ 0x58
	S6 = (int32_t)A1 >> 8;
	V1 = S6 << 1;
	V1 += S6;
	V1 <<= 2;
	EMU_Write32(SP + 92,RA); //+ 0x5C
	EMU_Write32(SP + 84,S5); //+ 0x54
	EMU_Write32(SP + 80,S4); //+ 0x50
	EMU_Write32(SP + 76,S3); //+ 0x4C
	EMU_Write32(SP + 68,S1); //+ 0x44
	EMU_Write32(SP + 64,S0); //+ 0x40
	V0 = EMU_ReadU32(S2 + 4); //+ 0x4
	V1 += S2;
	S5 = EMU_ReadU32(V0 + 20); //+ 0x14
	V0 = EMU_ReadS16(V1 + 50); //+ 0x32
	A0 = EMU_ReadU32(S5);
	S1 = A2;
	V0 += A0;
	V0 <<= 8;
	EMU_Write32(S1,V0);
	A0 = EMU_ReadU32(S5 + 4); //+ 0x4
	V0 = EMU_ReadS16(V1 + 52); //+ 0x34
	V0 += A0;
	V0 <<= 8;
	EMU_Write32(S1 + 4,V0); //+ 0x4
	A0 = EMU_ReadU32(S5 + 8); //+ 0x8
	V0 = EMU_ReadS16(V1 + 54); //+ 0x36
	V0 += A0;
	V0 <<= 8;
	EMU_Write32(S1 + 8,V0); //+ 0x8
	V0 = EMU_ReadS16(V1 + 56); //+ 0x38
	EMU_Write32(S1 + 12,V0); //+ 0xC
	V0 = EMU_ReadS16(V1 + 58); //+ 0x3A
	EMU_Write32(S1 + 16,V0); //+ 0x10
	V0 = EMU_ReadS16(V1 + 60); //+ 0x3C
	S3 = 0x1;
	EMU_Write32(S1 + 20,V0); //+ 0x14
	V0 = EMU_ReadU16(S2 + 30); //+ 0x1E
	V0 -= 1;
	if (S6 != V0)
	{
		S4 = A1 & 0xFF;
		ZZ_CLOCKCYCLES(46,0x800298AC);
		goto ZZ_296A8_204;
	}
	S4 = A1 & 0xFF;
	if (!S4)
	{
		ZZ_CLOCKCYCLES(48,0x800298AC);
		goto ZZ_296A8_204;
	}
	V0 = EMU_ReadU32(S2 + 8); //+ 0x8
	if (!V0)
	{
		V1 = R0;
		ZZ_CLOCKCYCLES(52,0x800298AC);
		goto ZZ_296A8_204;
	}
	V1 = R0;
	S0 = S2;
	ZZ_CLOCKCYCLES(53,0x80029794);
ZZ_296A8_EC:
	V0 = EMU_ReadU8(S0 + 12); //+ 0xC
	V0 &= 0x2;
	if (!V0)
	{
		V1 += 1;
		ZZ_CLOCKCYCLES(5,0x80029898);
		goto ZZ_296A8_1F0;
	}
	V1 += 1;
	A0 = EMU_ReadU8(S0 + 13); //+ 0xD
	V0 = EMU_ReadU32(S2 + 4); //+ 0x4
	A0 <<= 2;
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	A0 += 532;
	RA = 0x800297C4; //ZZ_296A8_11C
	A0 += V0;
	ZZ_CLOCKCYCLES(12,0x80015A98);
	goto ZZ_15A98;
ZZ_296A8_11C:
	A0 = EMU_ReadU32(V0 + 16); //+ 0x10
	V1 = EMU_ReadU8(S0 + 14); //+ 0xE
	A0 = EMU_ReadU32(A0 + 516); //+ 0x204
	V1 += A0;
	V1 <<= 2;
	V1 += V0;
	A1 = EMU_ReadU32(V1 + 16); //+ 0x10
	A2 = EMU_ReadU32(V0 + 20); //+ 0x14
	V1 = EMU_ReadS16(A1 + 32); //+ 0x20
	A0 = 0x1;
	if (V1 == A0)
	{
		ZZ_CLOCKCYCLES(13,0x800298AC);
		goto ZZ_296A8_204;
	}
	V0 = EMU_ReadU8(S0 + 15); //+ 0xF
	V0 &= 0x2;
	if (!V0)
	{
		A0 = R0;
		ZZ_CLOCKCYCLES(18,0x80029818);
		goto ZZ_296A8_170;
	}
	A0 = R0;
	V0 = EMU_ReadU16(A1 + 30); //+ 0x1E
	A0 = V0 - 1;
	ZZ_CLOCKCYCLES(21,0x80029818);
ZZ_296A8_170:
	V1 = A0 << 1;
	V1 += A0;
	V1 <<= 2;
	V1 += A1;
	A0 = EMU_ReadU32(A2);
	V0 = EMU_ReadS16(V1 + 50); //+ 0x32
	V0 += A0;
	V0 <<= 8;
	EMU_Write32(SP + 16,V0); //+ 0x10
	A0 = EMU_ReadU32(A2 + 4); //+ 0x4
	V0 = EMU_ReadS16(V1 + 52); //+ 0x34
	V0 += A0;
	V0 <<= 8;
	EMU_Write32(SP + 20,V0); //+ 0x14
	A0 = EMU_ReadU32(A2 + 8); //+ 0x8
	V0 = EMU_ReadS16(V1 + 54); //+ 0x36
	V0 += A0;
	V0 <<= 8;
	EMU_Write32(SP + 24,V0); //+ 0x18
	V0 = EMU_ReadS16(V1 + 56); //+ 0x38
	EMU_Write32(SP + 28,V0); //+ 0x1C
	V0 = EMU_ReadS16(V1 + 58); //+ 0x3A
	EMU_Write32(SP + 32,V0); //+ 0x20
	V0 = EMU_ReadS16(V1 + 60); //+ 0x3C
	S3 = R0;
	EMU_Write32(SP + 36,V0); //+ 0x24
	ZZ_CLOCKCYCLES(32,0x800298AC);
	goto ZZ_296A8_204;
ZZ_296A8_1F0:
	V0 = EMU_ReadU32(S2 + 8); //+ 0x8
	V0 = V1 < V0;
	if (V0)
	{
		S0 += 4;
		ZZ_CLOCKCYCLES(5,0x80029794);
		goto ZZ_296A8_EC;
	}
	S0 += 4;
	ZZ_CLOCKCYCLES(5,0x800298AC);
ZZ_296A8_204:
	if (!S3)
	{
		A0 = S6 + 1;
		ZZ_CLOCKCYCLES(2,0x8002994C);
		goto ZZ_296A8_2A4;
	}
	A0 = S6 + 1;
	V0 = EMU_ReadU16(S2 + 30); //+ 0x1E
	V1 = V0 - 1;
	V0 = (int32_t)V1 < (int32_t)A0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(8,0x800298D0);
		goto ZZ_296A8_228;
	}
	A0 = V1;
	ZZ_CLOCKCYCLES(9,0x800298D0);
ZZ_296A8_228:
	V1 = A0 << 1;
	V1 += A0;
	V1 <<= 2;
	V1 += S2;
	A0 = EMU_ReadU32(S5);
	V0 = EMU_ReadS16(V1 + 50); //+ 0x32
	V0 += A0;
	V0 <<= 8;
	EMU_Write32(SP + 16,V0); //+ 0x10
	A0 = EMU_ReadU32(S5 + 4); //+ 0x4
	V0 = EMU_ReadS16(V1 + 52); //+ 0x34
	V0 += A0;
	V0 <<= 8;
	EMU_Write32(SP + 20,V0); //+ 0x14
	A0 = EMU_ReadU32(S5 + 8); //+ 0x8
	V0 = EMU_ReadS16(V1 + 54); //+ 0x36
	V0 += A0;
	V0 <<= 8;
	EMU_Write32(SP + 24,V0); //+ 0x18
	V0 = EMU_ReadS16(V1 + 56); //+ 0x38
	EMU_Write32(SP + 28,V0); //+ 0x1C
	V0 = EMU_ReadS16(V1 + 58); //+ 0x3A
	EMU_Write32(SP + 32,V0); //+ 0x20
	V0 = EMU_ReadS16(V1 + 60); //+ 0x3C
	EMU_Write32(SP + 36,V0); //+ 0x24
	ZZ_CLOCKCYCLES(31,0x8002994C);
ZZ_296A8_2A4:
	V0 = EMU_ReadU32(SP + 16); //+ 0x10
	V1 = EMU_ReadU32(S1);
	V0 = V0 - V1;
	EMU_SMultiply(V0,S4);
	V0 = LO;
	V0 = (int32_t)V0 >> 8;
	V0 += V1;
	EMU_Write32(S1,V0);
	V0 = EMU_ReadU32(SP + 20); //+ 0x14
	V1 = EMU_ReadU32(S1 + 4); //+ 0x4
	V0 = V0 - V1;
	EMU_SMultiply(V0,S4);
	V0 = LO;
	V0 = (int32_t)V0 >> 8;
	V0 += V1;
	EMU_Write32(S1 + 4,V0); //+ 0x4
	V0 = EMU_ReadU32(SP + 24); //+ 0x18
	V1 = EMU_ReadU32(S1 + 8); //+ 0x8
	V0 = V0 - V1;
	EMU_SMultiply(V0,S4);
	V0 = LO;
	V0 = (int32_t)V0 >> 8;
	V0 += V1;
	EMU_Write32(S1 + 8,V0); //+ 0x8
	V0 = EMU_ReadU32(SP + 28); //+ 0x1C
	V1 = EMU_ReadU32(S1 + 12); //+ 0xC
	V0 = V0 - V1;
	EMU_SMultiply(V0,S4);
	A0 = EMU_ReadU32(S1 + 16); //+ 0x10
	V0 = LO;
	V0 = (int32_t)V0 >> 8;
	V0 += V1;
	EMU_Write32(S1 + 12,V0); //+ 0xC
	A1 = EMU_ReadU32(SP + 32); //+ 0x20
	RA = 0x800299EC; //ZZ_296A8_344
	ZZ_CLOCKCYCLES(40,0x800245F0);
	goto ZZ_245F0;
ZZ_296A8_344:
	EMU_SMultiply(V0,S4);
	V1 = EMU_ReadU32(S1 + 16); //+ 0x10
	V0 = LO;
	V0 = (int32_t)V0 >> 8;
	V0 += V1;
	EMU_Write32(S1 + 16,V0); //+ 0x10
	V0 = EMU_ReadU32(SP + 36); //+ 0x24
	V1 = EMU_ReadU32(S1 + 20); //+ 0x14
	V0 = V0 - V1;
	EMU_SMultiply(V0,S4);
	V0 = LO;
	V0 = (int32_t)V0 >> 8;
	V0 += V1;
	EMU_Write32(S1 + 20,V0); //+ 0x14
	V0 = EMU_ReadU16(S2 + 30); //+ 0x1E
	RA = EMU_ReadU32(SP + 92); //+ 0x5C
	S6 = EMU_ReadU32(SP + 88); //+ 0x58
	S5 = EMU_ReadU32(SP + 84); //+ 0x54
	S4 = EMU_ReadU32(SP + 80); //+ 0x50
	S3 = EMU_ReadU32(SP + 76); //+ 0x4C
	S2 = EMU_ReadU32(SP + 72); //+ 0x48
	S1 = EMU_ReadU32(SP + 68); //+ 0x44
	S0 = EMU_ReadU32(SP + 64); //+ 0x40
	SP += 96;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(27);
	ZZ_JUMPREGISTER(0x80026044,ZZ_25A60_5E4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800296A8,0x800296C0,ZZ_296A8);
ZZ_MARK_TARGET(0x800296C0,0x80029794,ZZ_296A8_18);
ZZ_MARK_TARGET(0x80029794,0x800297C4,ZZ_296A8_EC);
ZZ_MARK_TARGET(0x800297C4,0x80029818,ZZ_296A8_11C);
ZZ_MARK_TARGET(0x80029818,0x80029898,ZZ_296A8_170);
ZZ_MARK_TARGET(0x80029898,0x800298AC,ZZ_296A8_1F0);
ZZ_MARK_TARGET(0x800298AC,0x800298D0,ZZ_296A8_204);
ZZ_MARK_TARGET(0x800298D0,0x8002994C,ZZ_296A8_228);
ZZ_MARK_TARGET(0x8002994C,0x800299EC,ZZ_296A8_2A4);
ZZ_MARK_TARGET(0x800299EC,0x80029A58,ZZ_296A8_344);
