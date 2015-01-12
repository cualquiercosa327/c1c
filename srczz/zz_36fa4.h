#ifdef ZZ_INCLUDE_CODE
ZZ_36FA4:
	SP -= 16;
	A2 = 0x1F800000;
	V0 = A1 & 0x800;
	if (!V0)
	{
		A2 |= 0x40;
		ZZ_CLOCKCYCLES(5,0x8003708C);
		goto ZZ_36FA4_E8;
	}
	A2 |= 0x40;
	V0 = A1 & 0x400;
	if (!V0)
	{
		V0 = A1 >> 4;
		ZZ_CLOCKCYCLES(8,0x80036FEC);
		goto ZZ_36FA4_48;
	}
	V0 = A1 >> 4;
	V0 &= 0x1C;
	V0 += A0;
	V1 = EMU_ReadU32(V0 + 64); //+ 0x40
	if (!V1)
	{
		V0 = A1 & 0x3F;
		ZZ_CLOCKCYCLES(14,0x80037014);
		goto ZZ_36FA4_70;
	}
	V0 = A1 & 0x3F;
	V0 <<= 2;
	V0 += 64;
	V0 += V1;
	ZZ_CLOCKCYCLES(18,0x800370BC);
	goto ZZ_36FA4_118;
ZZ_36FA4_48:
	V0 = A1 & 0x200;
	if (!V0)
	{
		V0 = A1 & 0x100;
		ZZ_CLOCKCYCLES(3,0x80037064);
		goto ZZ_36FA4_C0;
	}
	V0 = A1 & 0x100;
	if (!V0)
	{
		V0 = A1 & 0x80;
		ZZ_CLOCKCYCLES(5,0x8003703C);
		goto ZZ_36FA4_98;
	}
	V0 = A1 & 0x80;
	if (!V0)
	{
		V0 = A1 << 25;
		ZZ_CLOCKCYCLES(7,0x8003702C);
		goto ZZ_36FA4_88;
	}
	V0 = A1 << 25;
	V0 = 0xBE0;
	if (A1 != V0)
	{
		V0 = 0xBF0;
		ZZ_CLOCKCYCLES(10,0x8003701C);
		goto ZZ_36FA4_78;
	}
	V0 = 0xBF0;
	ZZ_CLOCKCYCLES(10,0x80037014);
ZZ_36FA4_70:
	V0 = R0;
	ZZ_CLOCKCYCLES(2,0x800370BC);
	goto ZZ_36FA4_118;
ZZ_36FA4_78:
	if (A1 != V0)
	{
		ZZ_CLOCKCYCLES(2,0x800370BC);
		goto ZZ_36FA4_118;
	}
	V0 = 0x1;
	ZZ_CLOCKCYCLES(4,0x800370BC);
	goto ZZ_36FA4_118;
ZZ_36FA4_88:
	V1 = EMU_ReadU32(A0 + 196); //+ 0xC4
	V0 = (int32_t)V0 >> 23;
	V0 += V1;
	ZZ_CLOCKCYCLES(4,0x800370BC);
	goto ZZ_36FA4_118;
ZZ_36FA4_98:
	V1 = EMU_ReadU32(GP + 276); //+ 0x114
	V1 = V1 < 1;
	V0 = V1 << 2;
	V0 += A2;
	EMU_Write32(GP + 276,V1); //+ 0x114
	V1 = A1 << 24;
	V1 = (int32_t)V1 >> 20;
	EMU_Write32(V0,V1);
	ZZ_CLOCKCYCLES(10,0x800370BC);
	goto ZZ_36FA4_118;
ZZ_36FA4_C0:
	V1 = EMU_ReadU32(GP + 276); //+ 0x114
	V1 = V1 < 1;
	V0 = V1 << 2;
	V0 += A2;
	EMU_Write32(GP + 276,V1); //+ 0x114
	V1 = A1 << 23;
	V1 = (int32_t)V1 >> 15;
	EMU_Write32(V0,V1);
	ZZ_CLOCKCYCLES(10,0x800370BC);
	goto ZZ_36FA4_118;
ZZ_36FA4_E8:
	V0 = A1 & 0x400;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(3,0x800370A4);
		goto ZZ_36FA4_100;
	}
	V0 = EMU_ReadU32(A0 + 20); //+ 0x14
	ZZ_CLOCKCYCLES(6,0x800370A8);
	goto ZZ_36FA4_104;
ZZ_36FA4_100:
	V0 = EMU_ReadU32(A0 + 16); //+ 0x10
	ZZ_CLOCKCYCLES(1,0x800370A8);
ZZ_36FA4_104:
	V1 = EMU_ReadU32(V0 + 24); //+ 0x18
	V0 = A1 & 0x3FF;
	V0 <<= 2;
	V0 += V1;
	ZZ_CLOCKCYCLES(5,0x800370BC);
ZZ_36FA4_118:
	SP += 16;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0x80039D90,ZZ_39D3C_54);
	ZZ_JUMPREGISTER(0x80039D0C,ZZ_39CAC_60);
	ZZ_JUMPREGISTER(0x80039008,ZZ_38FA0_68);
	ZZ_JUMPREGISTER(0x800394DC,ZZ_39470_6C);
	ZZ_JUMPREGISTER(0x8003998C,ZZ_3991C_70);
	ZZ_JUMPREGISTER(0x80037750,ZZ_376E0_70);
	ZZ_JUMPREGISTER(0x80037874,ZZ_37804_70);
	ZZ_JUMPREGISTER(0x80038F20,ZZ_38EAC_74);
	ZZ_JUMPREGISTER(0x80039120,ZZ_390AC_74);
	ZZ_JUMPREGISTER(0x80039E20,ZZ_39DAC_74);
	ZZ_JUMPREGISTER(0x80039F14,ZZ_39EA0_74);
	ZZ_JUMPREGISTER(0x8003962C,ZZ_395A8_84);
	ZZ_JUMPREGISTER(0x800397E0,ZZ_3975C_84);
	ZZ_JUMPREGISTER(0x800377A0,ZZ_376E0_C0);
	ZZ_JUMPREGISTER(0x800378C8,ZZ_37804_C4);
	ZZ_JUMPREGISTER(0x800384A0,ZZ_38414_8C);
	ZZ_JUMPREGISTER(0x80038F70,ZZ_38EAC_C4);
	ZZ_JUMPREGISTER(0x80039170,ZZ_390AC_C4);
	ZZ_JUMPREGISTER(0x80039E70,ZZ_39DAC_C4);
	ZZ_JUMPREGISTER(0x80039F68,ZZ_39EA0_C8);
	ZZ_JUMPREGISTER(0x80038BD0,ZZ_38998_238);
	ZZ_JUMPREGISTER(0x80038AC0,ZZ_38998_128);
	ZZ_JUMPREGISTER(0x80038D1C,ZZ_38998_384);
	ZZ_JUMPREGISTER(0x800379A4,ZZ_37930_74);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80036FA4,ZZ_36FA4);
ZZ_MARK(0x80036FA8);
ZZ_MARK(0x80036FAC);
ZZ_MARK(0x80036FB0);
ZZ_MARK(0x80036FB4);
ZZ_MARK(0x80036FB8);
ZZ_MARK(0x80036FBC);
ZZ_MARK(0x80036FC0);
ZZ_MARK(0x80036FC4);
ZZ_MARK(0x80036FC8);
ZZ_MARK(0x80036FCC);
ZZ_MARK(0x80036FD0);
ZZ_MARK(0x80036FD4);
ZZ_MARK(0x80036FD8);
ZZ_MARK(0x80036FDC);
ZZ_MARK(0x80036FE0);
ZZ_MARK(0x80036FE4);
ZZ_MARK(0x80036FE8);
ZZ_MARK_TARGET(0x80036FEC,ZZ_36FA4_48);
ZZ_MARK(0x80036FF0);
ZZ_MARK(0x80036FF4);
ZZ_MARK(0x80036FF8);
ZZ_MARK(0x80036FFC);
ZZ_MARK(0x80037000);
ZZ_MARK(0x80037004);
ZZ_MARK(0x80037008);
ZZ_MARK(0x8003700C);
ZZ_MARK(0x80037010);
ZZ_MARK_TARGET(0x80037014,ZZ_36FA4_70);
ZZ_MARK(0x80037018);
ZZ_MARK_TARGET(0x8003701C,ZZ_36FA4_78);
ZZ_MARK(0x80037020);
ZZ_MARK(0x80037024);
ZZ_MARK(0x80037028);
ZZ_MARK_TARGET(0x8003702C,ZZ_36FA4_88);
ZZ_MARK(0x80037030);
ZZ_MARK(0x80037034);
ZZ_MARK(0x80037038);
ZZ_MARK_TARGET(0x8003703C,ZZ_36FA4_98);
ZZ_MARK(0x80037040);
ZZ_MARK(0x80037044);
ZZ_MARK(0x80037048);
ZZ_MARK(0x8003704C);
ZZ_MARK(0x80037050);
ZZ_MARK(0x80037054);
ZZ_MARK(0x80037058);
ZZ_MARK(0x8003705C);
ZZ_MARK(0x80037060);
ZZ_MARK_TARGET(0x80037064,ZZ_36FA4_C0);
ZZ_MARK(0x80037068);
ZZ_MARK(0x8003706C);
ZZ_MARK(0x80037070);
ZZ_MARK(0x80037074);
ZZ_MARK(0x80037078);
ZZ_MARK(0x8003707C);
ZZ_MARK(0x80037080);
ZZ_MARK(0x80037084);
ZZ_MARK(0x80037088);
ZZ_MARK_TARGET(0x8003708C,ZZ_36FA4_E8);
ZZ_MARK(0x80037090);
ZZ_MARK(0x80037094);
ZZ_MARK(0x80037098);
ZZ_MARK(0x8003709C);
ZZ_MARK(0x800370A0);
ZZ_MARK_TARGET(0x800370A4,ZZ_36FA4_100);
ZZ_MARK_TARGET(0x800370A8,ZZ_36FA4_104);
ZZ_MARK(0x800370AC);
ZZ_MARK(0x800370B0);
ZZ_MARK(0x800370B4);
ZZ_MARK(0x800370B8);
ZZ_MARK_TARGET(0x800370BC,ZZ_36FA4_118);
ZZ_MARK(0x800370C0);
ZZ_MARK(0x800370C4);
