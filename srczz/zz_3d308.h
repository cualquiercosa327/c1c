#ifdef ZZ_INCLUDE_CODE
ZZ_3D308:
	A0 = EMU_ReadU32(GP + 712); //+ 0x2C8
	SP -= 24;
	EMU_Write32(SP + 20,RA); //+ 0x14
	RA = 0x8003D31C; //ZZ_3D308_14
	EMU_Write32(SP + 16,S0); //+ 0x10
	ZZ_CLOCKCYCLES(5,0x8003E1C8);
	goto ZZ_3E1C8;
ZZ_3D308_14:
	A0 = EMU_ReadU32(GP + 716); //+ 0x2CC
	RA = 0x8003D328; //ZZ_3D308_20
	ZZ_CLOCKCYCLES(3,0x8003E1C8);
	goto ZZ_3E1C8;
ZZ_3D308_20:
	A0 = EMU_ReadU32(GP + 720); //+ 0x2D0
	RA = 0x8003D334; //ZZ_3D308_2C
	ZZ_CLOCKCYCLES(3,0x8003E1C8);
	goto ZZ_3E1C8;
ZZ_3D308_2C:
	A0 = EMU_ReadU32(GP + 724); //+ 0x2D4
	RA = 0x8003D340; //ZZ_3D308_38
	ZZ_CLOCKCYCLES(3,0x8003E1C8);
	goto ZZ_3E1C8;
ZZ_3D308_38:
	RA = 0x8003D348; //ZZ_3D308_40
	A0 = R0;
	ZZ_CLOCKCYCLES(2,0x80051424);
	goto ZZ_51424;
ZZ_3D308_40:
	RA = 0x8003D350; //ZZ_3D308_48
	A0 = 0x3E7;
	ZZ_CLOCKCYCLES(2,0x8002F778);
	goto ZZ_2F778;
ZZ_3D308_48:
	A0 = EMU_ReadU32(GP + 712); //+ 0x2C8
	RA = 0x8003D35C; //ZZ_3D308_54
	S0 = 0x1;
	ZZ_CLOCKCYCLES(3,0x8003E1C8);
	goto ZZ_3E1C8;
ZZ_3D308_54:
	if (V0 == S0)
	{
		V1 = R0;
		ZZ_CLOCKCYCLES(2,0x8003D3AC);
		goto ZZ_3D308_A4;
	}
	V1 = R0;
	A0 = EMU_ReadU32(GP + 716); //+ 0x2CC
	RA = 0x8003D370; //ZZ_3D308_68
	ZZ_CLOCKCYCLES(5,0x8003E1C8);
	goto ZZ_3E1C8;
ZZ_3D308_68:
	if (V0 == S0)
	{
		V1 = 0x1;
		ZZ_CLOCKCYCLES(2,0x8003D3AC);
		goto ZZ_3D308_A4;
	}
	V1 = 0x1;
	A0 = EMU_ReadU32(GP + 720); //+ 0x2D0
	RA = 0x8003D384; //ZZ_3D308_7C
	ZZ_CLOCKCYCLES(5,0x8003E1C8);
	goto ZZ_3E1C8;
ZZ_3D308_7C:
	if (V0 == S0)
	{
		V1 = 0x2;
		ZZ_CLOCKCYCLES(2,0x8003D3AC);
		goto ZZ_3D308_A4;
	}
	V1 = 0x2;
	A0 = EMU_ReadU32(GP + 724); //+ 0x2D4
	RA = 0x8003D398; //ZZ_3D308_90
	ZZ_CLOCKCYCLES(5,0x8003E1C8);
	goto ZZ_3E1C8;
ZZ_3D308_90:
	if (V0 != S0)
	{
		V1 = -1;
		ZZ_CLOCKCYCLES(2,0x8003D3AC);
		goto ZZ_3D308_A4;
	}
	V1 = -1;
	RA = 0x8003D3A8; //ZZ_3D308_A0
	A0 = 0x10;
	ZZ_CLOCKCYCLES(4,0x8003CAB0);
	goto ZZ_3CAB0;
ZZ_3D308_A0:
	V1 = 0x3;
	ZZ_CLOCKCYCLES(1,0x8003D3AC);
ZZ_3D308_A4:
	V0 = -1;
	if (V1 == V0)
	{
		V0 = 0x2;
		ZZ_CLOCKCYCLES(3,0x8003D348);
		goto ZZ_3D308_40;
	}
	V0 = 0x2;
	if (V1 != V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(5,0x8003D3C4);
		goto ZZ_3D308_BC;
	}
	V0 = R0;
	V0 = 0x1;
	ZZ_CLOCKCYCLES(6,0x8003D3C4);
ZZ_3D308_BC:
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x8003D5FC,ZZ_3D4EC_110);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003D308,0x8003D31C,ZZ_3D308);
ZZ_MARK_TARGET(0x8003D31C,0x8003D328,ZZ_3D308_14);
ZZ_MARK_TARGET(0x8003D328,0x8003D334,ZZ_3D308_20);
ZZ_MARK_TARGET(0x8003D334,0x8003D340,ZZ_3D308_2C);
ZZ_MARK_TARGET(0x8003D340,0x8003D348,ZZ_3D308_38);
ZZ_MARK_TARGET(0x8003D348,0x8003D350,ZZ_3D308_40);
ZZ_MARK_TARGET(0x8003D350,0x8003D35C,ZZ_3D308_48);
ZZ_MARK_TARGET(0x8003D35C,0x8003D370,ZZ_3D308_54);
ZZ_MARK_TARGET(0x8003D370,0x8003D384,ZZ_3D308_68);
ZZ_MARK_TARGET(0x8003D384,0x8003D398,ZZ_3D308_7C);
ZZ_MARK_TARGET(0x8003D398,0x8003D3A8,ZZ_3D308_90);
ZZ_MARK_TARGET(0x8003D3A8,0x8003D3AC,ZZ_3D308_A0);
ZZ_MARK_TARGET(0x8003D3AC,0x8003D3C4,ZZ_3D308_A4);
ZZ_MARK_TARGET(0x8003D3C4,0x8003D3D8,ZZ_3D308_BC);