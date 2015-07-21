#ifdef ZZ_INCLUDE_CODE
ZZ_3D4EC:
	SP -= 24;
	V0 = A0 < 11;
	if (!V0)
	{
		EMU_Write32(SP + 16,RA); //+ 0x10
		ZZ_CLOCKCYCLES(4,0x8003D66C);
		goto ZZ_3D4EC_180;
	}
	EMU_Write32(SP + 16,RA); //+ 0x10
	V0 = A0 << 2;
	AT = 0x80010000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 3816); //+ 0xEE8
	ZZ_JUMPREGISTER_BEGIN(V0);
	ZZ_CLOCKCYCLES_JR(11);
	ZZ_JUMPREGISTER(0x8003D66C,ZZ_3D4EC_180);
	ZZ_JUMPREGISTER(0x8003D518,ZZ_3D4EC_2C);
	ZZ_JUMPREGISTER(0x8003D534,ZZ_3D4EC_48);
	ZZ_JUMPREGISTER(0x8003D55C,ZZ_3D4EC_70);
	ZZ_JUMPREGISTER(0x8003D5C4,ZZ_3D4EC_D8);
	ZZ_JUMPREGISTER(0x8003D5D4,ZZ_3D4EC_E8);
	ZZ_JUMPREGISTER(0x8003D5E4,ZZ_3D4EC_F8);
	ZZ_JUMPREGISTER(0x8003D5F4,ZZ_3D4EC_108);
	ZZ_JUMPREGISTER(0x8003D604,ZZ_3D4EC_118);
	ZZ_JUMPREGISTER(0x8003D640,ZZ_3D4EC_154);
	ZZ_JUMPREGISTER_END();
ZZ_3D4EC_2C:
	V1 = EMU_ReadU32(GP + 360); //+ 0x168
	V0 = R0;
	A0 = EMU_ReadU32(V1 + 4); //+ 0x4
	A1 = -33;
	A0 &= A1;
	EMU_Write32(V1 + 4,A0); //+ 0x4
	ZZ_CLOCKCYCLES(7,0x8003D670);
	goto ZZ_3D4EC_184;
ZZ_3D4EC_48:
	A0 = EMU_ReadU32(GP + 360); //+ 0x168
	V1 = EMU_ReadU32(A0 + 4); //+ 0x4
	V0 = V1 & 0xD;
	if (V0)
	{
		A2 = R0;
		ZZ_CLOCKCYCLES(7,0x8003D578);
		goto ZZ_3D4EC_8C;
	}
	A2 = R0;
	V0 = EMU_ReadU32(A0 + 4); //+ 0x4
	V1 = 0x6;
	ZZ_CLOCKCYCLES(10,0x8003D598);
	goto ZZ_3D4EC_AC;
ZZ_3D4EC_70:
	A0 = EMU_ReadU32(GP + 360); //+ 0x168
	V1 = EMU_ReadU32(A0 + 4); //+ 0x4
	V0 = V1 & 0xD;
	if (!V0)
	{
		A2 = R0;
		ZZ_CLOCKCYCLES(7,0x8003D590);
		goto ZZ_3D4EC_A4;
	}
	A2 = R0;
	ZZ_CLOCKCYCLES(7,0x8003D578);
ZZ_3D4EC_8C:
	V0 = V1 | 0x2;
	EMU_Write32(A0 + 4,V0); //+ 0x4
	AT = 0x80060000;
	EMU_Write32(AT + 6520,V0); //+ 0x1978
	A2 = 0x1;
	ZZ_CLOCKCYCLES(6,0x8003D5BC);
	goto ZZ_3D4EC_D0;
ZZ_3D4EC_A4:
	V0 = EMU_ReadU32(A0 + 4); //+ 0x4
	V1 = 0x2;
	ZZ_CLOCKCYCLES(2,0x8003D598);
ZZ_3D4EC_AC:
	EMU_Write32(A0,V1);
	V0 |= 0x1;
	EMU_Write32(A0 + 4,V0); //+ 0x4
	AT = 0x80060000;
	EMU_Write32(AT + 6520,V0); //+ 0x1978
	V0 = 0x20;
	EMU_Write32(A0 + 20,R0); //+ 0x14
	EMU_Write32(A0 + 16,V0); //+ 0x10
	EMU_Write32(A0 + 12,A1); //+ 0xC
	ZZ_CLOCKCYCLES(9,0x8003D5BC);
ZZ_3D4EC_D0:
	V0 = A2;
	ZZ_CLOCKCYCLES(2,0x8003D670);
	goto ZZ_3D4EC_184;
ZZ_3D4EC_D8:
	RA = 0x8003D5CC; //ZZ_3D4EC_E0
	ZZ_CLOCKCYCLES(2,0x8003D444);
	goto ZZ_3D444;
ZZ_3D4EC_E0:
	ZZ_CLOCKCYCLES(2,0x8003D670);
	goto ZZ_3D4EC_184;
ZZ_3D4EC_E8:
	RA = 0x8003D5DC; //ZZ_3D4EC_F0
	ZZ_CLOCKCYCLES(2,0x8003D094);
	goto ZZ_3D094;
ZZ_3D4EC_F0:
	ZZ_CLOCKCYCLES(2,0x8003D670);
	goto ZZ_3D4EC_184;
ZZ_3D4EC_F8:
	RA = 0x8003D5EC; //ZZ_3D4EC_100
	ZZ_CLOCKCYCLES(2,0x8003D1F0);
	goto ZZ_3D1F0;
ZZ_3D4EC_100:
	ZZ_CLOCKCYCLES(2,0x8003D670);
	goto ZZ_3D4EC_184;
ZZ_3D4EC_108:
	RA = 0x8003D5FC; //ZZ_3D4EC_110
	ZZ_CLOCKCYCLES(2,0x8003D308);
	goto ZZ_3D308;
ZZ_3D4EC_110:
	ZZ_CLOCKCYCLES(2,0x8003D670);
	goto ZZ_3D4EC_184;
ZZ_3D4EC_118:
	A1 = 0x80050000;
	A1 += 26000;
	A0 = 0x80050000;
	A0 += 28732;
	EMU_ReadLeft(A1 + 3,&V0); //+ 0x3
	EMU_ReadRight(A1,&V0);
	V1 = EMU_ReadS8(A1 + 4); //+ 0x4
	EMU_WriteLeft(A0 + 3,V0); //+ 0x3
	EMU_WriteRight(A0,V0);
	EMU_Write8(A0 + 4,V1); //+ 0x4
	V0 = EMU_ReadS8(A1 + 5); //+ 0x5
	EMU_Write8(A0 + 5,V0); //+ 0x5
	V0 = R0;
	ZZ_CLOCKCYCLES(15,0x8003D670);
	goto ZZ_3D4EC_184;
ZZ_3D4EC_154:
	V0 = EMU_ReadU32(GP + 360); //+ 0x168
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x8003D66C);
		goto ZZ_3D4EC_180;
	}
	A0 = EMU_ReadU32(V0 + 4); //+ 0x4
	A0 &= 0x10;
	RA = 0x8003D664; //ZZ_3D4EC_178
	A0 |= 0x4;
	ZZ_CLOCKCYCLES(9,0x8003CD60);
	goto ZZ_3CD60;
ZZ_3D4EC_178:
	V0 = R0;
	ZZ_CLOCKCYCLES(2,0x8003D670);
	goto ZZ_3D4EC_184;
ZZ_3D4EC_180:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(1,0x8003D670);
ZZ_3D4EC_184:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	//ZZ_JUMPREGISTER(0x80022A90,ZZ_201DC_28B4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003D4EC,0x8003D518,ZZ_3D4EC);
ZZ_MARK_TARGET(0x8003D518,0x8003D534,ZZ_3D4EC_2C);
ZZ_MARK_TARGET(0x8003D534,0x8003D55C,ZZ_3D4EC_48);
ZZ_MARK_TARGET(0x8003D55C,0x8003D578,ZZ_3D4EC_70);
ZZ_MARK_TARGET(0x8003D578,0x8003D590,ZZ_3D4EC_8C);
ZZ_MARK_TARGET(0x8003D590,0x8003D598,ZZ_3D4EC_A4);
ZZ_MARK_TARGET(0x8003D598,0x8003D5BC,ZZ_3D4EC_AC);
ZZ_MARK_TARGET(0x8003D5BC,0x8003D5C4,ZZ_3D4EC_D0);
ZZ_MARK_TARGET(0x8003D5C4,0x8003D5CC,ZZ_3D4EC_D8);
ZZ_MARK_TARGET(0x8003D5CC,0x8003D5D4,ZZ_3D4EC_E0);
ZZ_MARK_TARGET(0x8003D5D4,0x8003D5DC,ZZ_3D4EC_E8);
ZZ_MARK_TARGET(0x8003D5DC,0x8003D5E4,ZZ_3D4EC_F0);
ZZ_MARK_TARGET(0x8003D5E4,0x8003D5EC,ZZ_3D4EC_F8);
ZZ_MARK_TARGET(0x8003D5EC,0x8003D5F4,ZZ_3D4EC_100);
ZZ_MARK_TARGET(0x8003D5F4,0x8003D5FC,ZZ_3D4EC_108);
ZZ_MARK_TARGET(0x8003D5FC,0x8003D604,ZZ_3D4EC_110);
ZZ_MARK_TARGET(0x8003D604,0x8003D640,ZZ_3D4EC_118);
ZZ_MARK_TARGET(0x8003D640,0x8003D664,ZZ_3D4EC_154);
ZZ_MARK_TARGET(0x8003D664,0x8003D66C,ZZ_3D4EC_178);
ZZ_MARK_TARGET(0x8003D66C,0x8003D670,ZZ_3D4EC_180);
ZZ_MARK_TARGET(0x8003D670,0x8003D680,ZZ_3D4EC_184);