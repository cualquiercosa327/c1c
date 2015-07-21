#ifdef ZZ_INCLUDE_CODE
ZZ_3CEF0:
	SP -= 160;
	EMU_Write32(SP + 144,S0); //+ 0x90
	S0 = A0;
	A0 = SP + 16;
	A1 = 0x80;
	EMU_Write32(SP + 152,RA); //+ 0x98
	RA = 0x8003CF10; //ZZ_3CEF0_20
	EMU_Write32(SP + 148,S1); //+ 0x94
	ZZ_CLOCKCYCLES(8,0x8003D700);
	goto ZZ_3D700;
ZZ_3CEF0_20:
	A0 = EMU_ReadU32(GP + 752); //+ 0x2F0
	RA = 0x8003CF1C; //ZZ_3CEF0_2C
	S1 = 0x1;
	ZZ_CLOCKCYCLES(3,0x8003E1C8);
	goto ZZ_3E1C8;
ZZ_3CEF0_2C:
	A0 = EMU_ReadU32(GP + 756); //+ 0x2F4
	RA = 0x8003CF28; //ZZ_3CEF0_38
	ZZ_CLOCKCYCLES(3,0x8003E1C8);
	goto ZZ_3E1C8;
ZZ_3CEF0_38:
	A0 = EMU_ReadU32(GP + 764); //+ 0x2FC
	RA = 0x8003CF34; //ZZ_3CEF0_44
	ZZ_CLOCKCYCLES(3,0x8003E1C8);
	goto ZZ_3E1C8;
ZZ_3CEF0_44:
	A0 = EMU_ReadU32(GP + 768); //+ 0x300
	RA = 0x8003CF40; //ZZ_3CEF0_50
	ZZ_CLOCKCYCLES(3,0x8003E1C8);
	goto ZZ_3E1C8;
ZZ_3CEF0_50:
	RA = 0x8003CF48; //ZZ_3CEF0_58
	ZZ_CLOCKCYCLES(2,0x80051484);
	goto ZZ_51484;
ZZ_3CEF0_58:
	A0 = S0;
	A1 = R0;
	RA = 0x8003CF58; //ZZ_3CEF0_68
	A2 = SP + 16;
	ZZ_CLOCKCYCLES(4,0x80051474);
	goto ZZ_51474;
ZZ_3CEF0_68:
	RA = 0x8003CF60; //ZZ_3CEF0_70
	A0 = 0x3E7;
	ZZ_CLOCKCYCLES(2,0x8002F778);
	goto ZZ_2F778;
ZZ_3CEF0_70:
	A0 = EMU_ReadU32(GP + 752); //+ 0x2F0
	RA = 0x8003CF6C; //ZZ_3CEF0_7C
	ZZ_CLOCKCYCLES(3,0x8003E1C8);
	goto ZZ_3E1C8;
ZZ_3CEF0_7C:
	if (V0 == S1)
	{
		V1 = R0;
		ZZ_CLOCKCYCLES(2,0x8003CFBC);
		goto ZZ_3CEF0_CC;
	}
	V1 = R0;
	A0 = EMU_ReadU32(GP + 756); //+ 0x2F4
	RA = 0x8003CF80; //ZZ_3CEF0_90
	ZZ_CLOCKCYCLES(5,0x8003E1C8);
	goto ZZ_3E1C8;
ZZ_3CEF0_90:
	if (V0 == S1)
	{
		V1 = 0x1;
		ZZ_CLOCKCYCLES(2,0x8003CFBC);
		goto ZZ_3CEF0_CC;
	}
	V1 = 0x1;
	A0 = EMU_ReadU32(GP + 764); //+ 0x2FC
	RA = 0x8003CF94; //ZZ_3CEF0_A4
	ZZ_CLOCKCYCLES(5,0x8003E1C8);
	goto ZZ_3E1C8;
ZZ_3CEF0_A4:
	if (V0 != S1)
	{
		ZZ_CLOCKCYCLES(2,0x8003CFA4);
		goto ZZ_3CEF0_B4;
	}
	V1 = 0x2;
	ZZ_CLOCKCYCLES(4,0x8003CFBC);
	goto ZZ_3CEF0_CC;
ZZ_3CEF0_B4:
	A0 = EMU_ReadU32(GP + 768); //+ 0x300
	RA = 0x8003CFB0; //ZZ_3CEF0_C0
	ZZ_CLOCKCYCLES(3,0x8003E1C8);
	goto ZZ_3E1C8;
ZZ_3CEF0_C0:
	if (V0 != S1)
	{
		V1 = -1;
		ZZ_CLOCKCYCLES(2,0x8003CFBC);
		goto ZZ_3CEF0_CC;
	}
	V1 = -1;
	V1 = 0x3;
	ZZ_CLOCKCYCLES(3,0x8003CFBC);
ZZ_3CEF0_CC:
	V0 = -1;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(3,0x8003CF58);
		goto ZZ_3CEF0_68;
	}
	if (V1)
	{
		V1 = 0x4D;
		ZZ_CLOCKCYCLES(5,0x8003CFF0);
		goto ZZ_3CEF0_100;
	}
	V1 = 0x4D;
	A0 = EMU_ReadU8(SP + 16); //+ 0x10
	if (A0 != V1)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(9,0x8003CFF0);
		goto ZZ_3CEF0_100;
	}
	V0 = R0;
	V0 = EMU_ReadU8(SP + 17); //+ 0x11
	V0 ^= 0x43;
	V0 = V0 < 1;
	ZZ_CLOCKCYCLES(13,0x8003CFF0);
ZZ_3CEF0_100:
	RA = EMU_ReadU32(SP + 152); //+ 0x98
	S1 = EMU_ReadU32(SP + 148); //+ 0x94
	S0 = EMU_ReadU32(SP + 144); //+ 0x90
	SP += 160;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x8003ABBC,ZZ_3ABA4_18);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003CEF0,0x8003CF10,ZZ_3CEF0);
ZZ_MARK_TARGET(0x8003CF10,0x8003CF1C,ZZ_3CEF0_20);
ZZ_MARK_TARGET(0x8003CF1C,0x8003CF28,ZZ_3CEF0_2C);
ZZ_MARK_TARGET(0x8003CF28,0x8003CF34,ZZ_3CEF0_38);
ZZ_MARK_TARGET(0x8003CF34,0x8003CF40,ZZ_3CEF0_44);
ZZ_MARK_TARGET(0x8003CF40,0x8003CF48,ZZ_3CEF0_50);
ZZ_MARK_TARGET(0x8003CF48,0x8003CF58,ZZ_3CEF0_58);
ZZ_MARK_TARGET(0x8003CF58,0x8003CF60,ZZ_3CEF0_68);
ZZ_MARK_TARGET(0x8003CF60,0x8003CF6C,ZZ_3CEF0_70);
ZZ_MARK_TARGET(0x8003CF6C,0x8003CF80,ZZ_3CEF0_7C);
ZZ_MARK_TARGET(0x8003CF80,0x8003CF94,ZZ_3CEF0_90);
ZZ_MARK_TARGET(0x8003CF94,0x8003CFA4,ZZ_3CEF0_A4);
ZZ_MARK_TARGET(0x8003CFA4,0x8003CFB0,ZZ_3CEF0_B4);
ZZ_MARK_TARGET(0x8003CFB0,0x8003CFBC,ZZ_3CEF0_C0);
ZZ_MARK_TARGET(0x8003CFBC,0x8003CFF0,ZZ_3CEF0_CC);
ZZ_MARK_TARGET(0x8003CFF0,0x8003D008,ZZ_3CEF0_100);
