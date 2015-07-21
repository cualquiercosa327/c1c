#ifdef ZZ_INCLUDE_CODE
ZZ_3ABA4:
	SP -= 24;
	V0 = EMU_ReadU32(GP + 360); //+ 0x168
	A0 = R0;
	EMU_Write32(SP + 16,RA); //+ 0x10
	RA = 0x8003ABBC; //ZZ_3ABA4_18
	EMU_Write32(V0 + 24,R0); //+ 0x18
	ZZ_CLOCKCYCLES(6,0x8003CEF0);
	goto ZZ_3CEF0;
ZZ_3ABA4_18:
	V1 = 0x1;
	if (V0 != V1)
	{
		ZZ_CLOCKCYCLES(3,0x8003ABE8);
		goto ZZ_3ABA4_44;
	}
	RA = 0x8003ABD0; //ZZ_3ABA4_2C
	A0 = 0xA;
	ZZ_CLOCKCYCLES(5,0x8003CAD8);
	goto ZZ_3CAD8;
ZZ_3ABA4_2C:
	RA = 0x8003ABD8; //ZZ_3ABA4_34
	A0 = R0;
	ZZ_CLOCKCYCLES(2,0x8003CAF8);
	goto ZZ_3CAF8;
ZZ_3ABA4_34:
	RA = 0x8003ABE0; //ZZ_3ABA4_3C
	ZZ_CLOCKCYCLES(2,0x8003C9B8);
	goto ZZ_3C9B8;
ZZ_3ABA4_3C:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(2,0x8003AC1C);
	goto ZZ_3ABA4_78;
ZZ_3ABA4_44:
	RA = 0x8003ABF0; //ZZ_3ABA4_4C
	ZZ_CLOCKCYCLES(2,0x8003C3FC);
	goto ZZ_3C3FC;
ZZ_3ABA4_4C:
	if (!V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(2,0x8003AC1C);
		goto ZZ_3ABA4_78;
	}
	V0 = R0;
	RA = 0x8003AC00; //ZZ_3ABA4_5C
	A0 = R0;
	ZZ_CLOCKCYCLES(4,0x8003CA04);
	goto ZZ_3CA04;
ZZ_3ABA4_5C:
	RA = 0x8003AC08; //ZZ_3ABA4_64
	A0 = 0x6;
	ZZ_CLOCKCYCLES(2,0x8003CAD8);
	goto ZZ_3CAD8;
ZZ_3ABA4_64:
	RA = 0x8003AC10; //ZZ_3ABA4_6C
	A0 = 0x8;
	ZZ_CLOCKCYCLES(2,0x8003CAB0);
	goto ZZ_3CAB0;
ZZ_3ABA4_6C:
	RA = 0x8003AC18; //ZZ_3ABA4_74
	A0 = R0;
	ZZ_CLOCKCYCLES(2,0x8003CAF8);
	goto ZZ_3CAF8;
ZZ_3ABA4_74:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(1,0x8003AC1C);
ZZ_3ABA4_78:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x8003AA4C,ZZ_3A94C_100);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003ABA4,0x8003ABBC,ZZ_3ABA4);
ZZ_MARK_TARGET(0x8003ABBC,0x8003ABD0,ZZ_3ABA4_18);
ZZ_MARK_TARGET(0x8003ABD0,0x8003ABD8,ZZ_3ABA4_2C);
ZZ_MARK_TARGET(0x8003ABD8,0x8003ABE0,ZZ_3ABA4_34);
ZZ_MARK_TARGET(0x8003ABE0,0x8003ABE8,ZZ_3ABA4_3C);
ZZ_MARK_TARGET(0x8003ABE8,0x8003ABF0,ZZ_3ABA4_44);
ZZ_MARK_TARGET(0x8003ABF0,0x8003AC00,ZZ_3ABA4_4C);
ZZ_MARK_TARGET(0x8003AC00,0x8003AC08,ZZ_3ABA4_5C);
ZZ_MARK_TARGET(0x8003AC08,0x8003AC10,ZZ_3ABA4_64);
ZZ_MARK_TARGET(0x8003AC10,0x8003AC18,ZZ_3ABA4_6C);
ZZ_MARK_TARGET(0x8003AC18,0x8003AC1C,ZZ_3ABA4_74);
ZZ_MARK_TARGET(0x8003AC1C,0x8003AC2C,ZZ_3ABA4_78);
