#ifdef ZZ_INCLUDE_CODE
ZZ_4E59C:
	SP -= 40;
	EMU_Write32(SP + 36,RA); //+ 0x24
	EMU_Write32(SP + 32,S0); //+ 0x20
	S0 = 0x63;
	T3 = 0xFFFF;
	T2 = R0;
	T0 = R0;
	T4 = 0x80060000;
	T4 = EMU_ReadU8(T4 - 6809); //+ 0xFFFFE567
	V0 = 0x80060000;
	V0 = EMU_ReadU8(V0 - 7360); //+ 0xFFFFE340
	T1 = 0x63;
	if (!V0)
	{
		A3 = R0;
		ZZ_CLOCKCYCLES(14,0x8004E70C);
		goto ZZ_4E59C_170;
	}
	A3 = R0;
	V0 = A3 & 0xFF;
	ZZ_CLOCKCYCLES(15,0x8004E5D8);
ZZ_4E59C_3C:
	V1 = V0 << 1;
	V1 += V0;
	V1 <<= 2;
	V1 += V0;
	V1 <<= 2;
	AT = 0x80050000;
	AT += V1;
	V0 = EMU_ReadU8(AT + 29383); //+ 0x72C7
	if (V0)
	{
		V0 = A3 & 0xFF;
		ZZ_CLOCKCYCLES(11,0x8004E624);
		goto ZZ_4E59C_88;
	}
	V0 = A3 & 0xFF;
	AT = 0x80050000;
	AT += V1;
	V0 = EMU_ReadU16(AT + 29362); //+ 0x72B2
	if (V0)
	{
		V0 = A3 & 0xFF;
		ZZ_CLOCKCYCLES(17,0x8004E624);
		goto ZZ_4E59C_88;
	}
	V0 = A3 & 0xFF;
	S0 = A3;
	ZZ_CLOCKCYCLES(19,0x8004E70C);
	goto ZZ_4E59C_170;
ZZ_4E59C_88:
	V1 = V0 << 1;
	V1 += V0;
	V1 <<= 2;
	V1 += V0;
	V1 <<= 2;
	AT = 0x80050000;
	AT += V1;
	A2 = EMU_ReadS16(AT + 29380); //+ 0x72C4
	A0 = T4 & 0xFFFF;
	V0 = (int32_t)A2 < (int32_t)A0;
	if (!V0)
	{
		A1 = A2;
		ZZ_CLOCKCYCLES(12,0x8004E67C);
		goto ZZ_4E59C_E0;
	}
	A1 = A2;
	T4 = A1;
	AT = 0x80050000;
	AT += V1;
	T3 = EMU_ReadU16(AT + 29362); //+ 0x72B2
	AT = 0x80050000;
	AT += V1;
	T0 = EMU_ReadU16(AT + 29358); //+ 0x72AE
	T1 = A3;
	T2 = 0x1;
	ZZ_CLOCKCYCLES(22,0x8004E6F0);
	goto ZZ_4E59C_154;
ZZ_4E59C_E0:
	if (A2 != A0)
	{
		A0 = T3 & 0xFFFF;
		ZZ_CLOCKCYCLES(2,0x8004E6F0);
		goto ZZ_4E59C_154;
	}
	A0 = T3 & 0xFFFF;
	AT = 0x80050000;
	AT += V1;
	A1 = EMU_ReadU16(AT + 29362); //+ 0x72B2
	V0 = A1 < A0;
	if (!V0)
	{
		T2 += 1;
		ZZ_CLOCKCYCLES(9,0x8004E6C0);
		goto ZZ_4E59C_124;
	}
	T2 += 1;
	AT = 0x80050000;
	AT += V1;
	T3 = EMU_ReadU16(AT + 29362); //+ 0x72B2
	AT = 0x80050000;
	AT += V1;
	T0 = EMU_ReadU16(AT + 29358); //+ 0x72AE
	T1 = A3;
	ZZ_CLOCKCYCLES(17,0x8004E6F0);
	goto ZZ_4E59C_154;
ZZ_4E59C_124:
	if (A1 != A0)
	{
		ZZ_CLOCKCYCLES(2,0x8004E6F0);
		goto ZZ_4E59C_154;
	}
	AT = 0x80050000;
	AT += V1;
	V0 = EMU_ReadS16(AT + 29358); //+ 0x72AE
	V1 = V0;
	V0 = (int32_t)T0 < (int32_t)V0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(10,0x8004E6F0);
		goto ZZ_4E59C_154;
	}
	T0 = V1;
	T1 = A3;
	ZZ_CLOCKCYCLES(12,0x8004E6F0);
ZZ_4E59C_154:
	V1 = 0x80060000;
	V1 = EMU_ReadU8(V1 - 7360); //+ 0xFFFFE340
	A3 += 1;
	V0 = A3 & 0xFF;
	V0 = V0 < V1;
	if (V0)
	{
		V0 = A3 & 0xFF;
		ZZ_CLOCKCYCLES(7,0x8004E5D8);
		goto ZZ_4E59C_3C;
	}
	V0 = A3 & 0xFF;
	ZZ_CLOCKCYCLES(7,0x8004E70C);
ZZ_4E59C_170:
	V1 = S0 & 0xFF;
	V0 = 0x63;
	if (V1 != V0)
	{
		V0 = T2 & 0xFF;
		ZZ_CLOCKCYCLES(4,0x8004E72C);
		goto ZZ_4E59C_190;
	}
	V0 = T2 & 0xFF;
	if (V0)
	{
		S0 = T1;
		ZZ_CLOCKCYCLES(6,0x8004E72C);
		goto ZZ_4E59C_190;
	}
	S0 = T1;
	S0 = 0x80060000;
	S0 = EMU_ReadU8(S0 - 7360); //+ 0xFFFFE340
	ZZ_CLOCKCYCLES(8,0x8004E72C);
ZZ_4E59C_190:
	A0 = 0x80060000;
	A0 = EMU_ReadU8(A0 - 7360); //+ 0xFFFFE340
	V0 = S0 & 0xFF;
	V0 = V0 < A0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(6,0x8004E7F8);
		goto ZZ_4E59C_25C;
	}
	if (!A0)
	{
		A3 = R0;
		ZZ_CLOCKCYCLES(8,0x8004E798);
		goto ZZ_4E59C_1FC;
	}
	A3 = R0;
	A1 = 0x80050000;
	A1 += 29356;
	V1 = A3 & 0xFF;
	ZZ_CLOCKCYCLES(11,0x8004E758);
ZZ_4E59C_1BC:
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 += V1;
	V0 <<= 2;
	AT = 0x80050000;
	AT += V0;
	V1 = EMU_ReadU16(AT + 29358); //+ 0x72AE
	A3 += 1;
	V0 += A1;
	V1 += 1;
	EMU_Write16(V0 + 2,V1); //+ 0x2
	V0 = A3 & 0xFF;
	V0 = V0 < A0;
	if (V0)
	{
		V1 = A3 & 0xFF;
		ZZ_CLOCKCYCLES(16,0x8004E758);
		goto ZZ_4E59C_1BC;
	}
	V1 = A3 & 0xFF;
	ZZ_CLOCKCYCLES(16,0x8004E798);
ZZ_4E59C_1FC:
	V1 = S0 & 0xFF;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 += V1;
	V0 <<= 2;
	AT = 0x80050000;
	AT += V0;
	EMU_Write16(AT + 29358,R0); //+ 0x72AE
	V1 = 0x80060000;
	V1 = EMU_ReadU8(V1 - 6809); //+ 0xFFFFE567
	AT = 0x80050000;
	AT += V0;
	A0 = EMU_ReadU8(AT + 29383); //+ 0x72C7
	AT = 0x80050000;
	AT += V0;
	EMU_Write16(AT + 29380,V1); //+ 0x72C4
	V0 = 0x2;
	if (A0 != V0)
	{
		V0 = S0 & 0xFF;
		ZZ_CLOCKCYCLES(20,0x8004E7FC);
		goto ZZ_4E59C_260;
	}
	V0 = S0 & 0xFF;
	A0 = R0;
	A1 = 0xFF0000;
	RA = 0x8004E7F8; //ZZ_4E59C_25C
	A1 |= 0xFFFF;
	ZZ_CLOCKCYCLES(24,0x8004DA78);
	goto ZZ_4DA78;
ZZ_4E59C_25C:
	V0 = S0 & 0xFF;
	ZZ_CLOCKCYCLES(1,0x8004E7FC);
ZZ_4E59C_260:
	RA = EMU_ReadU32(SP + 36); //+ 0x24
	S0 = EMU_ReadU32(SP + 32); //+ 0x20
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 40;
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x8004E07C,ZZ_4DDE4_298);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004E59C,0x8004E5D8,ZZ_4E59C);
ZZ_MARK_TARGET(0x8004E5D8,0x8004E624,ZZ_4E59C_3C);
ZZ_MARK_TARGET(0x8004E624,0x8004E67C,ZZ_4E59C_88);
ZZ_MARK_TARGET(0x8004E67C,0x8004E6C0,ZZ_4E59C_E0);
ZZ_MARK_TARGET(0x8004E6C0,0x8004E6F0,ZZ_4E59C_124);
ZZ_MARK_TARGET(0x8004E6F0,0x8004E70C,ZZ_4E59C_154);
ZZ_MARK_TARGET(0x8004E70C,0x8004E72C,ZZ_4E59C_170);
ZZ_MARK_TARGET(0x8004E72C,0x8004E758,ZZ_4E59C_190);
ZZ_MARK_TARGET(0x8004E758,0x8004E798,ZZ_4E59C_1BC);
ZZ_MARK_TARGET(0x8004E798,0x8004E7F8,ZZ_4E59C_1FC);
ZZ_MARK_TARGET(0x8004E7F8,0x8004E7FC,ZZ_4E59C_25C);
ZZ_MARK_TARGET(0x8004E7FC,0x8004E80C,ZZ_4E59C_260);
