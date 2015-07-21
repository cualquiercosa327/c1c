#ifdef ZZ_INCLUDE_CODE
ZZ_4F0D4:
	A0 = 0x80060000;
	A0 = EMU_ReadU16(A0 - 6798); //+ 0xFFFFE572
	V1 = A0 & 0xFFFF;
	V0 = V1 < 16;
	if (!V0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(7,0x8004F0FC);
		goto ZZ_4F0D4_28;
	}
	V0 = 0x1;
	A3 = V0 << V1;
	A2 = R0;
	ZZ_CLOCKCYCLES(10,0x8004F10C);
	goto ZZ_4F0D4_38;
ZZ_4F0D4_28:
	A3 = R0;
	V1 -= 16;
	A2 = V0 << V1;
	V1 = A0 & 0xFFFF;
	ZZ_CLOCKCYCLES(4,0x8004F10C);
ZZ_4F0D4_38:
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 += V1;
	V0 <<= 2;
	AT = 0x80050000;
	AT += V0;
	EMU_Write8(AT + 29383,R0); //+ 0x72C7
	AT = 0x80050000;
	AT += V0;
	EMU_Write16(AT + 29360,R0); //+ 0x72B0
	AT = 0x80050000;
	AT += V0;
	EMU_Write16(AT + 29356,R0); //+ 0x72AC
	A0 = 0x80060000;
	A0 = EMU_ReadU16(A0 + 6760); //+ 0x1A68
	A1 = 0x80060000;
	A1 = EMU_ReadU16(A1 + 6768); //+ 0x1A70
	V0 = 0x80050000;
	V0 = EMU_ReadU16(V0 + 29260); //+ 0x724C
	V1 = 0x80050000;
	V1 = EMU_ReadU16(V1 + 29268); //+ 0x7254
	A0 |= A3;
	AT = 0x80060000;
	EMU_Write16(AT + 6760,A0); //+ 0x1A68
	A1 |= A2;
	AT = 0x80060000;
	EMU_Write16(AT + 6768,A1); //+ 0x1A70
	A0 = ~A0;
	V0 &= A0;
	AT = 0x80050000;
	EMU_Write16(AT + 29260,V0); //+ 0x724C
	A1 = ~A1;
	V1 &= A1;
	AT = 0x80050000;
	EMU_Write16(AT + 29268,V1); //+ 0x7254
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(38);
	ZZ_JUMPREGISTER(0x800500C8,ZZ_50060_68);
	ZZ_JUMPREGISTER(0x8004DD08,ZZ_4DA9C_26C);
	ZZ_JUMPREGISTER(0x8004E430,ZZ_4E330_100);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004F0D4,0x8004F0FC,ZZ_4F0D4);
ZZ_MARK_TARGET(0x8004F0FC,0x8004F10C,ZZ_4F0D4_28);
ZZ_MARK_TARGET(0x8004F10C,0x8004F1A4,ZZ_4F0D4_38);
