#ifdef ZZ_INCLUDE_CODE
ZZ_416E4:
	SP -= 32;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A1;
	A1 = 0x80050000;
	A1 = EMU_ReadU32(A1 + 19292); //+ 0x4B5C
	EMU_Write32(SP + 24,RA); //+ 0x18
	EMU_Write32(SP + 20,S1); //+ 0x14
	V0 = EMU_ReadU32(A1);
	V1 = 0x8000000;
	V0 |= V1;
	EMU_Write32(A1,V0);
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 19288); //+ 0x4B58
	EMU_Write32(V0,R0);
	V0 = S0 << 2;
	V0 -= 4;
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 19280); //+ 0x4B50
	A0 += V0;
	EMU_Write32(V1,A0);
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 19284); //+ 0x4B54
	V1 = 0x11000000;
	EMU_Write32(V0,S0);
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 19288); //+ 0x4B58
	V1 |= 0x2;
	EMU_Write32(V0,V1);
	RA = 0x80041760; //ZZ_416E4_7C
	ZZ_CLOCKCYCLES(31,0x80042864);
	goto ZZ_42864;
ZZ_416E4_7C:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 19288); //+ 0x4B58
	V0 = EMU_ReadU32(V0);
	V1 = 0x1000000;
	V0 &= V1;
	if (!V0)
	{
		V0 = S0;
		ZZ_CLOCKCYCLES(8,0x800417B4);
		goto ZZ_416E4_D0;
	}
	V0 = S0;
	S1 = 0x1000000;
	ZZ_CLOCKCYCLES(9,0x80041784);
ZZ_416E4_A0:
	RA = 0x8004178C; //ZZ_416E4_A8
	ZZ_CLOCKCYCLES(2,0x80042898);
	goto ZZ_42898;
ZZ_416E4_A8:
	if (V0)
	{
		V0 = -1;
		ZZ_CLOCKCYCLES(2,0x800417B4);
		goto ZZ_416E4_D0;
	}
	V0 = -1;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 19288); //+ 0x4B58
	V0 = EMU_ReadU32(V0);
	V0 &= S1;
	if (V0)
	{
		V0 = S0;
		ZZ_CLOCKCYCLES(10,0x80041784);
		goto ZZ_416E4_A0;
	}
	V0 = S0;
	ZZ_CLOCKCYCLES(10,0x800417B4);
ZZ_416E4_D0:
	RA = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800416E4,0x80041760,ZZ_416E4);
ZZ_MARK_TARGET(0x80041760,0x80041784,ZZ_416E4_7C);
ZZ_MARK_TARGET(0x80041784,0x8004178C,ZZ_416E4_A0);
ZZ_MARK_TARGET(0x8004178C,0x800417B4,ZZ_416E4_A8);
ZZ_MARK_TARGET(0x800417B4,0x800417CC,ZZ_416E4_D0);