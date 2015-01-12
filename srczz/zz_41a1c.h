#ifdef ZZ_INCLUDE_CODE
ZZ_41A1C:
	A0 = EMU_ReadU32(V1 + 300); //+ 0x12C
	if ((int32_t)T9 < 0)
	{
		T8 = EMU_ReadU32(V1 + 304); //+ 0x130
		ZZ_CLOCKCYCLES(3,0x80041A40);
		goto ZZ_41A1C_24;
	}
	T8 = EMU_ReadU32(V1 + 304); //+ 0x130
	T5 >>= A0;
	T6 >>= A0;
	T7 >>= A0;
	T5 &= T8;
	T6 &= T8;
	T7 &= T8;
	ZZ_CLOCKCYCLES(9,0x80041A40);
ZZ_41A1C_24:
	ZZ_JUMPREGISTER_BEGIN(S3);
	ZZ_CLOCKCYCLES_JR(2);
	// UNIMPLEMENTED INDIRECT JUMP (S3,80041A40)
	// PC IS 80041A40
	ZZ_JUMPREGISTER_END();
ZZ_41A1C_2C:
	EMU_Write32(V1 + 104,RA); //+ 0x68
	RA = 0x80041A54; //ZZ_41A1C_38
	T9 = EMU_ReadU32(SP + 72); //+ 0x48
	ZZ_CLOCKCYCLES(3,0x80043A34);
	goto ZZ_43A34;
ZZ_41A1C_38:
	RA = 0x80041A5C; //ZZ_41A1C_40
	T8 = EMU_ReadU32(SP + 32); //+ 0x20
	ZZ_CLOCKCYCLES(2,0x8004398C);
	goto ZZ_4398C;
ZZ_41A1C_40:
	RA = 0x80041A64; //ZZ_41A1C_48
	T9 = EMU_ReadU32(GP + 168); //+ 0xA8
	ZZ_CLOCKCYCLES(2,0x80043A10);
	goto ZZ_43A10;
ZZ_41A1C_48:
	ZZ_JUMPREGISTER_BEGIN(T8);
	RA = 0x80041A6C; //ZZ_41A1C_50
	S3 = EMU_ReadU32(SP + 36); //+ 0x24
	ZZ_CLOCKCYCLES_JR(2);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (T8,80041A64)
	ZZ_JUMPREGISTER_END();
ZZ_41A1C_50:
	if (T8)
	{
		ZZ_CLOCKCYCLES(2,0x8003E784);
		goto ZZ_3DFAC_7D8;
	}
	RA = 0x80041A7C; //ZZ_41A1C_60
	ZZ_CLOCKCYCLES(4,0x800438F0);
	goto ZZ_438F0;
ZZ_41A1C_60:
	if (!T9)
	{
		ZZ_CLOCKCYCLES(2,0x8003E784);
		goto ZZ_3DFAC_7D8;
	}
	RA = 0x80041A8C; //ZZ_41A1C_70
	EMU_Write32(V1 + 288,T0); //+ 0x120
	ZZ_CLOCKCYCLES(4,0x8003EFAC);
	goto ZZ_3EFAC;
ZZ_41A1C_70:
	GTE_SetDataRegister(0,T9);
	GTE_SetDataRegister(1,T8);
	T0 = EMU_ReadU32(S2);
	RA = 0x80041AA0; //ZZ_41A1C_84
	T5 = A0;
	ZZ_CLOCKCYCLES(5,0x8003EFAC);
	goto ZZ_3EFAC;
ZZ_41A1C_84:
	GTE_SetDataRegister(2,T9);
	GTE_SetDataRegister(3,T8);
	T0 = EMU_ReadU32(S2 + 4); //+ 0x4
	RA = 0x80041AB4; //ZZ_41A1C_98
	T6 = A0;
	ZZ_CLOCKCYCLES(5,0x8003EFAC);
	goto ZZ_3EFAC;
ZZ_41A1C_98:
	GTE_SetDataRegister(4,T9);
	GTE_SetDataRegister(5,T8);
	T7 = A0;
	T0 = EMU_ReadU32(V1 + 288); //+ 0x120
	GTE_Execute(2621488);
	S2 = EMU_CheckedAdd(S2,8);
	EMU_Write32(V1 + 128,GTE_GetDataRegister(12)); //+ 0x80
	EMU_Write32(V1 + 132,GTE_GetDataRegister(17)); //+ 0x84
	EMU_Write32(V1 + 144,GTE_GetDataRegister(13)); //+ 0x90
	EMU_Write32(V1 + 148,GTE_GetDataRegister(18)); //+ 0x94
	EMU_Write32(V1 + 160,GTE_GetDataRegister(14)); //+ 0xA0
	EMU_Write32(V1 + 164,GTE_GetDataRegister(19)); //+ 0xA4
	T8 = EMU_ReadU32(V1 + 116); //+ 0x74
	T9 = GTE_GetDataRegister(0);
	A0 = GTE_GetDataRegister(2);
	A1 = GTE_GetDataRegister(4);
	A3 = 0xFFFF0000;
	A2 = T9 & 0xFFFF;
	T9 &= A3;
	T9 = T8 - T9;
	T9 |= A2;
	A2 = A0 & 0xFFFF;
	A0 &= A3;
	A0 = T8 - A0;
	A0 |= A2;
	A2 = A1 & 0xFFFF;
	A1 &= A3;
	A1 = T8 - A1;
	A1 |= A2;
	GTE_SetDataRegister(0,T9);
	GTE_SetDataRegister(2,A0);
	GTE_SetDataRegister(4,A1);
	GTE_Execute(2621488);
	ZZ_CLOCKCYCLES(35,0x80041B40);
ZZ_41A1C_124:
	A0 = T0 << 23;
	if (!A0)
	{
		A2 = T0 & 0xFF;
		ZZ_CLOCKCYCLES(3,0x80041B9C);
		goto ZZ_41A1C_180;
	}
	A2 = T0 & 0xFF;
	if ((int32_t)A0 > 0)
	{
		A0 = A2 << 2;
		ZZ_CLOCKCYCLES(5,0x80041B90);
		goto ZZ_41A1C_174;
	}
	ZZ_CLOCKCYCLES(4,0x80041B50);
ZZ_41A1C_134:
	A0 = A2 << 2;
	A0 += S0;
	A2 = EMU_ReadU32(A0);
	A0 = EMU_ReadU32(V1 + 28); //+ 0x1C
	A1 = A2 >> 26;
	A1 &= 0x1F;
	A0 >>= A1;
	A1 = A2 >> 19;
	A0 += A1;
	A1 = A2 >> 12;
	A1 &= 0x7F;
	A0 &= A1;
	A1 = A2 << 20;
	A2 += A0;
	if ((int32_t)A1 < 0)
	{
		A2 &= 0x7FF;
		ZZ_CLOCKCYCLES(16,0x80041B50);
		goto ZZ_41A1C_134;
	}
	A2 &= 0x7FF;
	ZZ_CLOCKCYCLES(16,0x80041B90);
ZZ_41A1C_174:
	A0 = A2 << 1;
	A2 += A0;
	A2 <<= 2;
	ZZ_CLOCKCYCLES(3,0x80041B9C);
ZZ_41A1C_180:
	T8 = A2 + S1;
	T9 = EMU_ReadS16(V1 + 238); //+ 0xEE
	EMU_Write32(V1 + 112,T8); //+ 0x70
	T9 ^= 0x8000;
	EMU_Write16(V1 + 238,T9); //+ 0xEE
	T8 = EMU_ReadU32(V1 + 248); //+ 0xF8
	ZZ_JUMPREGISTER_BEGIN(S3);
	RA = 0x80041BBC; //ZZ_41A1C_1A0
	EMU_Write32(V1 + 240,T8); //+ 0xF0
	ZZ_CLOCKCYCLES_JR(8);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (S3,80041BB4)
	ZZ_JUMPREGISTER_END();
ZZ_41A1C_1A0:
	EMU_Write32(V1 + 208,GTE_GetDataRegister(12)); //+ 0xD0
	EMU_Write32(V1 + 212,GTE_GetDataRegister(17)); //+ 0xD4
	EMU_Write32(V1 + 216,GTE_GetDataRegister(13)); //+ 0xD8
	EMU_Write32(V1 + 220,GTE_GetDataRegister(18)); //+ 0xDC
	EMU_Write32(V1 + 224,GTE_GetDataRegister(14)); //+ 0xE0
	EMU_Write32(V1 + 228,GTE_GetDataRegister(19)); //+ 0xE4
	GTE_SetDataRegister(12,EMU_ReadU32(V1 + 128)); //+ 0x80
	GTE_SetDataRegister(17,EMU_ReadU32(V1 + 132)); //+ 0x84
	GTE_SetDataRegister(13,EMU_ReadU32(V1 + 144)); //+ 0x90
	GTE_SetDataRegister(18,EMU_ReadU32(V1 + 148)); //+ 0x94
	GTE_SetDataRegister(14,EMU_ReadU32(V1 + 160)); //+ 0xA0
	T9 = EMU_ReadS16(V1 + 238); //+ 0xEE
	GTE_SetDataRegister(19,EMU_ReadU32(V1 + 164)); //+ 0xA4
	T9 ^= 0x8000;
	EMU_Write16(V1 + 238,T9); //+ 0xEE
	T8 = EMU_ReadU32(V1 + 244); //+ 0xF4
	ZZ_JUMPREGISTER_BEGIN(S3);
	RA = 0x80041C04; //ZZ_41A1C_1E8
	EMU_Write32(V1 + 240,T8); //+ 0xF0
	ZZ_CLOCKCYCLES_JR(18);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (S3,80041BFC)
	ZZ_JUMPREGISTER_END();
ZZ_41A1C_1E8:
	T0 = EMU_ReadU32(S2);
	S2 = EMU_CheckedAdd(S2,4);
	if ((int32_t)T0 < 0)
	{
		T9 = EMU_CheckedAdd(T0,1);
		ZZ_CLOCKCYCLES(4,0x80041A7C);
		goto ZZ_41A1C_60;
	}
	T9 = EMU_CheckedAdd(T0,1);
	T9 = T0 >> 16;
	if (T9)
	{
		A0 = T0 << 1;
		ZZ_CLOCKCYCLES(7,0x80041C6C);
		goto ZZ_41A1C_250;
	}
	A0 = T0 << 1;
	T9 = T0 << 31;
	T8 = T0 >> 7;
	if ((int32_t)T9 < 0)
	{
		T8 &= 0x1FC;
		ZZ_CLOCKCYCLES(11,0x80041C3C);
		goto ZZ_41A1C_220;
	}
	T8 &= 0x1FC;
	T8 += S6;
	T6 = EMU_ReadU32(T8);
	ZZ_CLOCKCYCLES(14,0x80041C44);
	goto ZZ_41A1C_228;
ZZ_41A1C_220:
	T8 += V1;
	T6 = EMU_ReadU32(T8 + 320); //+ 0x140
	ZZ_CLOCKCYCLES(2,0x80041C44);
ZZ_41A1C_228:
	T9 = T0 << 30;
	if ((int32_t)T9 < 0)
	{
		T8 = T0 & 0x1FC;
		ZZ_CLOCKCYCLES(3,0x80041C5C);
		goto ZZ_41A1C_240;
	}
	T8 = T0 & 0x1FC;
	T8 += S6;
	T7 = EMU_ReadU32(T8);
	ZZ_CLOCKCYCLES(6,0x80041C64);
	goto ZZ_41A1C_248;
ZZ_41A1C_240:
	T8 += V1;
	T7 = EMU_ReadU32(T8 + 320); //+ 0x140
	ZZ_CLOCKCYCLES(2,0x80041C64);
ZZ_41A1C_248:
	T5 = T6;
	ZZ_CLOCKCYCLES(2,0x80041C04);
	goto ZZ_41A1C_1E8;
ZZ_41A1C_250:
	if ((int32_t)A0 >= 0)
	{
		ZZ_CLOCKCYCLES(2,0x80041C98);
		goto ZZ_41A1C_27C;
	}
	A0 = GTE_GetDataRegister(12);
	A1 = GTE_GetDataRegister(17);
	GTE_SetDataRegister(13,A0);
	GTE_SetDataRegister(18,A1);
	T6 = T5;
	A0 = EMU_ReadU32(V1 + 208); //+ 0xD0
	A1 = EMU_ReadU32(V1 + 212); //+ 0xD4
	EMU_Write32(V1 + 216,A0); //+ 0xD8
	EMU_Write32(V1 + 220,A1); //+ 0xDC
	ZZ_CLOCKCYCLES(11,0x80041C98);
ZZ_41A1C_27C:
	RA = 0x80041CA0; //ZZ_41A1C_284
	T5 = T6;
	ZZ_CLOCKCYCLES(2,0x8003EFAC);
	goto ZZ_3EFAC;
ZZ_41A1C_284:
	GTE_SetDataRegister(0,T9);
	GTE_SetDataRegister(1,T8);
	T6 = T7;
	T7 = A0;
	GTE_Execute(1572865);
	EMU_Write32(V1 + 128,GTE_GetDataRegister(12)); //+ 0x80
	EMU_Write32(V1 + 132,GTE_GetDataRegister(17)); //+ 0x84
	EMU_Write32(V1 + 144,GTE_GetDataRegister(13)); //+ 0x90
	EMU_Write32(V1 + 148,GTE_GetDataRegister(18)); //+ 0x94
	EMU_Write32(V1 + 160,GTE_GetDataRegister(14)); //+ 0xA0
	EMU_Write32(V1 + 164,GTE_GetDataRegister(19)); //+ 0xA4
	T8 = EMU_ReadU32(V1 + 116); //+ 0x74
	T9 = GTE_GetDataRegister(0);
	A3 = 0xFFFF0000;
	A2 = T9 & 0xFFFF;
	T9 &= A3;
	T9 = T8 - T9;
	T9 |= A2;
	GTE_SetDataRegister(0,T9);
	GTE_SetDataRegister(13,EMU_ReadU32(V1 + 216)); //+ 0xD8
	GTE_SetDataRegister(18,EMU_ReadU32(V1 + 220)); //+ 0xDC
	GTE_SetDataRegister(14,EMU_ReadU32(V1 + 224)); //+ 0xE0
	GTE_SetDataRegister(19,EMU_ReadU32(V1 + 228)); //+ 0xE4
	GTE_Execute(1572865);
	ZZ_CLOCKCYCLES(28,0x80041B40);
	goto ZZ_41A1C_124;
#endif
ZZ_MARK_TARGET(0x80041A1C,ZZ_41A1C);
ZZ_MARK(0x80041A20);
ZZ_MARK(0x80041A24);
ZZ_MARK(0x80041A28);
ZZ_MARK(0x80041A2C);
ZZ_MARK(0x80041A30);
ZZ_MARK(0x80041A34);
ZZ_MARK(0x80041A38);
ZZ_MARK(0x80041A3C);
ZZ_MARK_TARGET(0x80041A40,ZZ_41A1C_24);
ZZ_MARK(0x80041A44);
ZZ_MARK_TARGET(0x80041A48,ZZ_41A1C_2C);
ZZ_MARK(0x80041A4C);
ZZ_MARK(0x80041A50);
ZZ_MARK_TARGET(0x80041A54,ZZ_41A1C_38);
ZZ_MARK(0x80041A58);
ZZ_MARK_TARGET(0x80041A5C,ZZ_41A1C_40);
ZZ_MARK(0x80041A60);
ZZ_MARK_TARGET(0x80041A64,ZZ_41A1C_48);
ZZ_MARK(0x80041A68);
ZZ_MARK_TARGET(0x80041A6C,ZZ_41A1C_50);
ZZ_MARK(0x80041A70);
ZZ_MARK(0x80041A74);
ZZ_MARK(0x80041A78);
ZZ_MARK_TARGET(0x80041A7C,ZZ_41A1C_60);
ZZ_MARK(0x80041A80);
ZZ_MARK(0x80041A84);
ZZ_MARK(0x80041A88);
ZZ_MARK_TARGET(0x80041A8C,ZZ_41A1C_70);
ZZ_MARK(0x80041A90);
ZZ_MARK(0x80041A94);
ZZ_MARK(0x80041A98);
ZZ_MARK(0x80041A9C);
ZZ_MARK_TARGET(0x80041AA0,ZZ_41A1C_84);
ZZ_MARK(0x80041AA4);
ZZ_MARK(0x80041AA8);
ZZ_MARK(0x80041AAC);
ZZ_MARK(0x80041AB0);
ZZ_MARK_TARGET(0x80041AB4,ZZ_41A1C_98);
ZZ_MARK(0x80041AB8);
ZZ_MARK(0x80041ABC);
ZZ_MARK(0x80041AC0);
ZZ_MARK(0x80041AC4);
ZZ_MARK(0x80041AC8);
ZZ_MARK(0x80041ACC);
ZZ_MARK(0x80041AD0);
ZZ_MARK(0x80041AD4);
ZZ_MARK(0x80041AD8);
ZZ_MARK(0x80041ADC);
ZZ_MARK(0x80041AE0);
ZZ_MARK(0x80041AE4);
ZZ_MARK(0x80041AE8);
ZZ_MARK(0x80041AEC);
ZZ_MARK(0x80041AF0);
ZZ_MARK(0x80041AF4);
ZZ_MARK(0x80041AF8);
ZZ_MARK(0x80041AFC);
ZZ_MARK(0x80041B00);
ZZ_MARK(0x80041B04);
ZZ_MARK(0x80041B08);
ZZ_MARK(0x80041B0C);
ZZ_MARK(0x80041B10);
ZZ_MARK(0x80041B14);
ZZ_MARK(0x80041B18);
ZZ_MARK(0x80041B1C);
ZZ_MARK(0x80041B20);
ZZ_MARK(0x80041B24);
ZZ_MARK(0x80041B28);
ZZ_MARK(0x80041B2C);
ZZ_MARK(0x80041B30);
ZZ_MARK(0x80041B34);
ZZ_MARK(0x80041B38);
ZZ_MARK(0x80041B3C);
ZZ_MARK_TARGET(0x80041B40,ZZ_41A1C_124);
ZZ_MARK(0x80041B44);
ZZ_MARK(0x80041B48);
ZZ_MARK(0x80041B4C);
ZZ_MARK_TARGET(0x80041B50,ZZ_41A1C_134);
ZZ_MARK(0x80041B54);
ZZ_MARK(0x80041B58);
ZZ_MARK(0x80041B5C);
ZZ_MARK(0x80041B60);
ZZ_MARK(0x80041B64);
ZZ_MARK(0x80041B68);
ZZ_MARK(0x80041B6C);
ZZ_MARK(0x80041B70);
ZZ_MARK(0x80041B74);
ZZ_MARK(0x80041B78);
ZZ_MARK(0x80041B7C);
ZZ_MARK(0x80041B80);
ZZ_MARK(0x80041B84);
ZZ_MARK(0x80041B88);
ZZ_MARK(0x80041B8C);
ZZ_MARK_TARGET(0x80041B90,ZZ_41A1C_174);
ZZ_MARK(0x80041B94);
ZZ_MARK(0x80041B98);
ZZ_MARK_TARGET(0x80041B9C,ZZ_41A1C_180);
ZZ_MARK(0x80041BA0);
ZZ_MARK(0x80041BA4);
ZZ_MARK(0x80041BA8);
ZZ_MARK(0x80041BAC);
ZZ_MARK(0x80041BB0);
ZZ_MARK(0x80041BB4);
ZZ_MARK(0x80041BB8);
ZZ_MARK_TARGET(0x80041BBC,ZZ_41A1C_1A0);
ZZ_MARK(0x80041BC0);
ZZ_MARK(0x80041BC4);
ZZ_MARK(0x80041BC8);
ZZ_MARK(0x80041BCC);
ZZ_MARK(0x80041BD0);
ZZ_MARK(0x80041BD4);
ZZ_MARK(0x80041BD8);
ZZ_MARK(0x80041BDC);
ZZ_MARK(0x80041BE0);
ZZ_MARK(0x80041BE4);
ZZ_MARK(0x80041BE8);
ZZ_MARK(0x80041BEC);
ZZ_MARK(0x80041BF0);
ZZ_MARK(0x80041BF4);
ZZ_MARK(0x80041BF8);
ZZ_MARK(0x80041BFC);
ZZ_MARK(0x80041C00);
ZZ_MARK_TARGET(0x80041C04,ZZ_41A1C_1E8);
ZZ_MARK(0x80041C08);
ZZ_MARK(0x80041C0C);
ZZ_MARK(0x80041C10);
ZZ_MARK(0x80041C14);
ZZ_MARK(0x80041C18);
ZZ_MARK(0x80041C1C);
ZZ_MARK(0x80041C20);
ZZ_MARK(0x80041C24);
ZZ_MARK(0x80041C28);
ZZ_MARK(0x80041C2C);
ZZ_MARK(0x80041C30);
ZZ_MARK(0x80041C34);
ZZ_MARK(0x80041C38);
ZZ_MARK_TARGET(0x80041C3C,ZZ_41A1C_220);
ZZ_MARK(0x80041C40);
ZZ_MARK_TARGET(0x80041C44,ZZ_41A1C_228);
ZZ_MARK(0x80041C48);
ZZ_MARK(0x80041C4C);
ZZ_MARK(0x80041C50);
ZZ_MARK(0x80041C54);
ZZ_MARK(0x80041C58);
ZZ_MARK_TARGET(0x80041C5C,ZZ_41A1C_240);
ZZ_MARK(0x80041C60);
ZZ_MARK_TARGET(0x80041C64,ZZ_41A1C_248);
ZZ_MARK(0x80041C68);
ZZ_MARK_TARGET(0x80041C6C,ZZ_41A1C_250);
ZZ_MARK(0x80041C70);
ZZ_MARK(0x80041C74);
ZZ_MARK(0x80041C78);
ZZ_MARK(0x80041C7C);
ZZ_MARK(0x80041C80);
ZZ_MARK(0x80041C84);
ZZ_MARK(0x80041C88);
ZZ_MARK(0x80041C8C);
ZZ_MARK(0x80041C90);
ZZ_MARK(0x80041C94);
ZZ_MARK_TARGET(0x80041C98,ZZ_41A1C_27C);
ZZ_MARK(0x80041C9C);
ZZ_MARK_TARGET(0x80041CA0,ZZ_41A1C_284);
ZZ_MARK(0x80041CA4);
ZZ_MARK(0x80041CA8);
ZZ_MARK(0x80041CAC);
ZZ_MARK(0x80041CB0);
ZZ_MARK(0x80041CB4);
ZZ_MARK(0x80041CB8);
ZZ_MARK(0x80041CBC);
ZZ_MARK(0x80041CC0);
ZZ_MARK(0x80041CC4);
ZZ_MARK(0x80041CC8);
ZZ_MARK(0x80041CCC);
ZZ_MARK(0x80041CD0);
ZZ_MARK(0x80041CD4);
ZZ_MARK(0x80041CD8);
ZZ_MARK(0x80041CDC);
ZZ_MARK(0x80041CE0);
ZZ_MARK(0x80041CE4);
ZZ_MARK(0x80041CE8);
ZZ_MARK(0x80041CEC);
ZZ_MARK(0x80041CF0);
ZZ_MARK(0x80041CF4);
ZZ_MARK(0x80041CF8);
ZZ_MARK(0x80041CFC);
ZZ_MARK(0x80041D00);
ZZ_MARK(0x80041D04);
ZZ_MARK(0x80041D08);
ZZ_MARK(0x80041D0C);
