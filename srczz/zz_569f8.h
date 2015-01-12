#ifdef ZZ_INCLUDE_CODE
ZZ_569F8:
	SP -= 24;
	T0 = A0;
	A0 = T0 << 16;
	A0 = (int32_t)A0 >> 14;
	V1 = A1 << 16;
	V1 = (int32_t)V1 >> 16;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 = V0 - V1;
	EMU_Write32(SP + 16,RA); //+ 0x10
	AT = 0x80070000;
	AT += A0;
	V1 = EMU_ReadU32(AT - 15268); //+ 0xFFFFC45C
	V0 <<= 4;
	A0 = V1 + V0;
	V1 = EMU_ReadU32(A0 + 152); //+ 0x98
	V0 = 1;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(20,0x80056A54);
		goto ZZ_569F8_5C;
	}
	EMU_Write16(A0 + 88,A2); //+ 0x58
	EMU_Write16(A0 + 90,A3); //+ 0x5A
	ZZ_CLOCKCYCLES(23,0x80056A74);
	goto ZZ_569F8_7C;
ZZ_569F8_5C:
	A0 = A1 << 8;
	A0 |= T0;
	A0 <<= 16;
	A0 = (int32_t)A0 >> 16;
	A1 = A2 & 0xFFFF;
	A2 = A3 & 0xFFFF;
	RA = 0x80056A74; //ZZ_569F8_7C
	A3 = 1;
	ZZ_CLOCKCYCLES(8,0x800598A0);
	goto ZZ_598A0;
ZZ_569F8_7C:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80034004,ZZ_33FA8_5C);
	ZZ_JUMPREGISTER(0x800341F0,ZZ_34104_EC);
	ZZ_JUMPREGISTER(0x800348C0,ZZ_347D4_EC);
	ZZ_JUMPREGISTER(0x80034760,ZZ_346F0_70);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800569F8,ZZ_569F8);
ZZ_MARK(0x800569FC);
ZZ_MARK(0x80056A00);
ZZ_MARK(0x80056A04);
ZZ_MARK(0x80056A08);
ZZ_MARK(0x80056A0C);
ZZ_MARK(0x80056A10);
ZZ_MARK(0x80056A14);
ZZ_MARK(0x80056A18);
ZZ_MARK(0x80056A1C);
ZZ_MARK(0x80056A20);
ZZ_MARK(0x80056A24);
ZZ_MARK(0x80056A28);
ZZ_MARK(0x80056A2C);
ZZ_MARK(0x80056A30);
ZZ_MARK(0x80056A34);
ZZ_MARK(0x80056A38);
ZZ_MARK(0x80056A3C);
ZZ_MARK(0x80056A40);
ZZ_MARK(0x80056A44);
ZZ_MARK(0x80056A48);
ZZ_MARK(0x80056A4C);
ZZ_MARK(0x80056A50);
ZZ_MARK_TARGET(0x80056A54,ZZ_569F8_5C);
ZZ_MARK(0x80056A58);
ZZ_MARK(0x80056A5C);
ZZ_MARK(0x80056A60);
ZZ_MARK(0x80056A64);
ZZ_MARK(0x80056A68);
ZZ_MARK(0x80056A6C);
ZZ_MARK(0x80056A70);
ZZ_MARK_TARGET(0x80056A74,ZZ_569F8_7C);
ZZ_MARK(0x80056A78);
ZZ_MARK(0x80056A7C);
ZZ_MARK(0x80056A80);
