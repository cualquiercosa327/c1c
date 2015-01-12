#ifdef ZZ_INCLUDE_CODE
ZZ_59F6C:
	T1 = A0;
	A3 = R0;
	V1 = 0x80070000;
	V1 -= 26628;
	V0 = EMU_ReadU8(V1);
	if (!V0)
	{
		A2 = R0;
		ZZ_CLOCKCYCLES(8,0x8005A018);
		goto ZZ_59F6C_AC;
	}
	A2 = R0;
	T0 = V1 + 7;
	T2 = V1;
	ZZ_CLOCKCYCLES(10,0x80059F94);
ZZ_59F6C_28:
	V0 = EMU_ReadU8(T0);
	V1 = A2 & 0xFF;
	V0 <<= 4;
	V0 += V1;
	V1 = 0x80070000;
	V1 = EMU_ReadU32(V1 - 32140); //+ 0xFFFF8274
	V0 <<= 5;
	A0 = V0 + V1;
	V0 = EMU_ReadU8(A0 + 6); //+ 0x6
	V1 = EMU_ReadU8(T0 - 5); //+ 0xFFFFFFFB
	V0 = V1 < V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(14,0x8005A000);
		goto ZZ_59F6C_94;
	}
	V0 = EMU_ReadU8(A0 + 7); //+ 0x7
	V0 = V0 < V1;
	if (V0)
	{
		V0 = A3 & 0xFF;
		ZZ_CLOCKCYCLES(19,0x8005A000);
		goto ZZ_59F6C_94;
	}
	V0 = A3 & 0xFF;
	V1 = A3;
	A3 += 1;
	V0 += A1;
	V1 &= 0xFF;
	A0 = EMU_ReadU16(A0 + 22); //+ 0x16
	V1 += T1;
	EMU_Write8(V0,A0);
	EMU_Write8(V1,A2);
	ZZ_CLOCKCYCLES(27,0x8005A000);
ZZ_59F6C_94:
	A2 += 1;
	V1 = EMU_ReadU8(T2);
	V0 = A2 & 0xFF;
	V0 = V0 < V1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(6,0x80059F94);
		goto ZZ_59F6C_28;
	}
	ZZ_CLOCKCYCLES(6,0x8005A018);
ZZ_59F6C_AC:
	ZZ_JUMPREGISTER_BEGIN(RA);
	V0 = A3 & 0xFF;
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80057C78,ZZ_57AAC_1CC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80059F6C,ZZ_59F6C);
ZZ_MARK(0x80059F70);
ZZ_MARK(0x80059F74);
ZZ_MARK(0x80059F78);
ZZ_MARK(0x80059F7C);
ZZ_MARK(0x80059F80);
ZZ_MARK(0x80059F84);
ZZ_MARK(0x80059F88);
ZZ_MARK(0x80059F8C);
ZZ_MARK(0x80059F90);
ZZ_MARK_TARGET(0x80059F94,ZZ_59F6C_28);
ZZ_MARK(0x80059F98);
ZZ_MARK(0x80059F9C);
ZZ_MARK(0x80059FA0);
ZZ_MARK(0x80059FA4);
ZZ_MARK(0x80059FA8);
ZZ_MARK(0x80059FAC);
ZZ_MARK(0x80059FB0);
ZZ_MARK(0x80059FB4);
ZZ_MARK(0x80059FB8);
ZZ_MARK(0x80059FBC);
ZZ_MARK(0x80059FC0);
ZZ_MARK(0x80059FC4);
ZZ_MARK(0x80059FC8);
ZZ_MARK(0x80059FCC);
ZZ_MARK(0x80059FD0);
ZZ_MARK(0x80059FD4);
ZZ_MARK(0x80059FD8);
ZZ_MARK(0x80059FDC);
ZZ_MARK(0x80059FE0);
ZZ_MARK(0x80059FE4);
ZZ_MARK(0x80059FE8);
ZZ_MARK(0x80059FEC);
ZZ_MARK(0x80059FF0);
ZZ_MARK(0x80059FF4);
ZZ_MARK(0x80059FF8);
ZZ_MARK(0x80059FFC);
ZZ_MARK_TARGET(0x8005A000,ZZ_59F6C_94);
ZZ_MARK(0x8005A004);
ZZ_MARK(0x8005A008);
ZZ_MARK(0x8005A00C);
ZZ_MARK(0x8005A010);
ZZ_MARK(0x8005A014);
ZZ_MARK_TARGET(0x8005A018,ZZ_59F6C_AC);
ZZ_MARK(0x8005A01C);
