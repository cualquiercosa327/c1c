#ifdef ZZ_INCLUDE_CODE
ZZ_43C6C:
	T8 = EMU_ReadU32(V1 + 8); //+ 0x8
	T9 = EMU_ReadU32(V1 + 16); //+ 0x10
	AT = GTE_GetDataRegister(17);
	A3 = GTE_GetDataRegister(18);
	AT = AT - T9;
	if ((int32_t)AT < 0)
	{
		AT <<= T8;
		ZZ_CLOCKCYCLES(7,0x80043CA0);
		goto ZZ_43C6C_34;
	}
	AT <<= T8;
	GTE_SetDataRegister(6,T5);
	GTE_SetDataRegister(8,AT);
	GTE_Execute(7864336);
	T5 = GTE_GetDataRegister(22);
	ZZ_CLOCKCYCLES(13,0x80043CA0);
ZZ_43C6C_34:
	AT = GTE_GetDataRegister(19);
	A3 = A3 - T9;
	if ((int32_t)A3 < 0)
	{
		A3 <<= T8;
		ZZ_CLOCKCYCLES(4,0x80043CC8);
		goto ZZ_43C6C_5C;
	}
	A3 <<= T8;
	GTE_SetDataRegister(6,T6);
	GTE_SetDataRegister(8,A3);
	GTE_Execute(7864336);
	T6 = GTE_GetDataRegister(22);
	ZZ_CLOCKCYCLES(10,0x80043CC8);
ZZ_43C6C_5C:
	AT = AT - T9;
	if ((int32_t)AT < 0)
	{
		AT <<= T8;
		ZZ_CLOCKCYCLES(3,0x800427E0);
		goto ZZ_420F4_6EC;
	}
	AT <<= T8;
	GTE_SetDataRegister(6,T7);
	GTE_SetDataRegister(8,AT);
	GTE_Execute(7864336);
	T7 = GTE_GetDataRegister(22);
	T8 = T5 | T6;
	T8 |= T7;
	if (T8)
	{
		S2 = EMU_ReadU32(S4 + 660); //+ 0x294
		ZZ_CLOCKCYCLES(13,0x800427E0);
		goto ZZ_420F4_6EC;
	}
	S2 = EMU_ReadU32(S4 + 660); //+ 0x294
	EMU_Write32(S7 + 8,GTE_GetDataRegister(12)); //+ 0x8
	EMU_Write32(S7 + 12,GTE_GetDataRegister(13)); //+ 0xC
	EMU_Write32(S7 + 16,GTE_GetDataRegister(14)); //+ 0x10
	T8 = 0x20000000;
	EMU_Write32(S7 + 4,T8); //+ 0x4
	A0 = 20;
	T9 = 0x4000000;
	ZZ_CLOCKCYCLES(21,0x80042BE0);
	goto ZZ_420F4_AEC;
ZZ_43C6C_B0:
	T8 = EMU_ReadU32(V1 + 8); //+ 0x8
	T9 = EMU_ReadU32(V1 + 16); //+ 0x10
	AT = EMU_ReadU32(V1 + 380); //+ 0x17C
	A3 = GTE_GetDataRegister(17);
	AT = AT - T9;
	if ((int32_t)AT < 0)
	{
		AT <<= T8;
		ZZ_CLOCKCYCLES(7,0x80043D50);
		goto ZZ_43C6C_E4;
	}
	AT <<= T8;
	GTE_SetDataRegister(6,T5);
	GTE_SetDataRegister(8,AT);
	GTE_Execute(7864336);
	T5 = GTE_GetDataRegister(22);
	ZZ_CLOCKCYCLES(13,0x80043D50);
ZZ_43C6C_E4:
	AT = GTE_GetDataRegister(18);
	A3 = A3 - T9;
	if ((int32_t)A3 < 0)
	{
		A3 <<= T8;
		ZZ_CLOCKCYCLES(4,0x80043D78);
		goto ZZ_43C6C_10C;
	}
	A3 <<= T8;
	GTE_SetDataRegister(6,T6);
	GTE_SetDataRegister(8,A3);
	GTE_Execute(7864336);
	T6 = GTE_GetDataRegister(22);
	ZZ_CLOCKCYCLES(10,0x80043D78);
ZZ_43C6C_10C:
	A3 = GTE_GetDataRegister(19);
	AT = AT - T9;
	if ((int32_t)AT < 0)
	{
		AT <<= T8;
		ZZ_CLOCKCYCLES(4,0x80043DA0);
		goto ZZ_43C6C_134;
	}
	AT <<= T8;
	GTE_SetDataRegister(6,T7);
	GTE_SetDataRegister(8,AT);
	GTE_Execute(7864336);
	T7 = GTE_GetDataRegister(22);
	ZZ_CLOCKCYCLES(10,0x80043DA0);
ZZ_43C6C_134:
	A3 = A3 - T9;
	if ((int32_t)A3 < 0)
	{
		A3 <<= T8;
		ZZ_CLOCKCYCLES(3,0x80042AB0);
		goto ZZ_420F4_9BC;
	}
	A3 <<= T8;
	GTE_SetDataRegister(6,A1);
	GTE_SetDataRegister(8,A3);
	T8 = T5 | T6;
	GTE_Execute(7864336);
	A1 = GTE_GetDataRegister(22);
	T8 |= T7;
	T8 |= A1;
	if (T8)
	{
		S2 = EMU_ReadU32(S4 + 660); //+ 0x294
		ZZ_CLOCKCYCLES(13,0x80042AB0);
		goto ZZ_420F4_9BC;
	}
	S2 = EMU_ReadU32(S4 + 660); //+ 0x294
	EMU_Write32(S7 + 12,GTE_GetDataRegister(12)); //+ 0xC
	EMU_Write32(S7 + 16,GTE_GetDataRegister(13)); //+ 0x10
	EMU_Write32(S7 + 20,GTE_GetDataRegister(14)); //+ 0x14
	T8 = 0x28000000;
	EMU_Write32(S7 + 4,T8); //+ 0x4
	A0 = 24;
	T9 = 0x5000000;
	ZZ_CLOCKCYCLES(21,0x80042BE0);
	goto ZZ_420F4_AEC;
ZZ_43C6C_188:
	T8 = EMU_ReadU32(V1 + 192); //+ 0xC0
	T9 = EMU_ReadU32(V1 + 196); //+ 0xC4
	T8 = EMU_CheckedAdd(T8,T9);
	ZZ_JUMPREGISTER_BEGIN(RA);
	EMU_Write32(V1 + 204,T8); //+ 0xCC
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER_END();
ZZ_43C6C_1A0:
	S3 = EMU_ReadU32(V1 + 204); //+ 0xCC
	GP = AT << 13;
	if ((int32_t)GP >= 0)
	{
		GP = A3 << 13;
		ZZ_CLOCKCYCLES(4,0x80043E50);
		goto ZZ_43C6C_1E4;
	}
	GP = A3 << 13;
	T9 = GTE_GetDataRegister(0);
	T8 = T9 >> 16;
	T8 += S3;
	T8 += T9;
	T8 >>= 4;
	T8 &= 0xF;
	T8 += V1;
	T8 = EMU_ReadU8(T8 + 256); //+ 0x100
	T8 <<= 16;
	T9 += T8;
	GTE_SetDataRegister(0,T9);
	ZZ_CLOCKCYCLES(17,0x80043E50);
ZZ_43C6C_1E4:
	if ((int32_t)GP >= 0)
	{
		GP = T0 << 13;
		ZZ_CLOCKCYCLES(2,0x80043E8C);
		goto ZZ_43C6C_220;
	}
	GP = T0 << 13;
	T9 = GTE_GetDataRegister(2);
	T8 = T9 >> 16;
	T8 += S3;
	T8 += T9;
	T8 >>= 4;
	T8 &= 0xF;
	T8 += V1;
	T8 = EMU_ReadU8(T8 + 256); //+ 0x100
	T8 <<= 16;
	T9 += T8;
	GTE_SetDataRegister(2,T9);
	ZZ_CLOCKCYCLES(15,0x80043E8C);
ZZ_43C6C_220:
	if ((int32_t)GP >= 0)
	{
		T8 = V0 >> 16;
		ZZ_CLOCKCYCLES(2,0x800426B8);
		goto ZZ_420F4_5C4;
	}
	T8 = V0 >> 16;
	T8 += S3;
	T8 += V0;
	T8 >>= 4;
	T8 &= 0xF;
	T8 += V1;
	T8 = EMU_ReadU8(T8 + 256); //+ 0x100
	T8 <<= 16;
	V0 += T8;
	GTE_SetDataRegister(4,V0);
	ZZ_CLOCKCYCLES(14,0x800426B8);
	goto ZZ_420F4_5C4;
ZZ_43C6C_258:
	T8 = AT & A3;
	T8 &= T0;
	T8 <<= 12;
	if ((int32_t)T8 >= 0)
	{
		T9 = 928;
		ZZ_CLOCKCYCLES(5,0x800427E0);
		goto ZZ_420F4_6EC;
	}
	T9 = 928;
	ZZ_CLOCKCYCLES(7,0x80044038);
	goto ZZ_43C6C_3CC;
ZZ_43C6C_274:
	S3 = EMU_ReadU32(V1 + 204); //+ 0xCC
	GP = AT << 13;
	if ((int32_t)GP >= 0)
	{
		GP = A3 << 13;
		ZZ_CLOCKCYCLES(4,0x80043F24);
		goto ZZ_43C6C_2B8;
	}
	GP = A3 << 13;
	T9 = GTE_GetDataRegister(0);
	T8 = T9 >> 16;
	T8 += S3;
	T8 += T9;
	T8 >>= 4;
	T8 &= 0xF;
	T8 += V1;
	T8 = EMU_ReadU8(T8 + 256); //+ 0x100
	T8 <<= 16;
	T9 += T8;
	GTE_SetDataRegister(0,T9);
	ZZ_CLOCKCYCLES(17,0x80043F24);
ZZ_43C6C_2B8:
	if ((int32_t)GP >= 0)
	{
		GP = T0 << 13;
		ZZ_CLOCKCYCLES(2,0x80043F60);
		goto ZZ_43C6C_2F4;
	}
	GP = T0 << 13;
	T9 = GTE_GetDataRegister(2);
	T8 = T9 >> 16;
	T8 += S3;
	T8 += T9;
	T8 >>= 4;
	T8 &= 0xF;
	T8 += V1;
	T8 = EMU_ReadU8(T8 + 256); //+ 0x100
	T8 <<= 16;
	T9 += T8;
	GTE_SetDataRegister(2,T9);
	ZZ_CLOCKCYCLES(15,0x80043F60);
ZZ_43C6C_2F4:
	if ((int32_t)GP >= 0)
	{
		GP = A0 << 13;
		ZZ_CLOCKCYCLES(2,0x80043F9C);
		goto ZZ_43C6C_330;
	}
	GP = A0 << 13;
	T9 = GTE_GetDataRegister(4);
	T8 = T9 >> 16;
	T8 += S3;
	T8 += T9;
	T8 >>= 4;
	T8 &= 0xF;
	T8 += V1;
	T8 = EMU_ReadU8(T8 + 256); //+ 0x100
	T8 <<= 16;
	T9 += T8;
	GTE_SetDataRegister(4,T9);
	ZZ_CLOCKCYCLES(15,0x80043F9C);
ZZ_43C6C_330:
	if ((int32_t)GP >= 0)
	{
		T8 = V0 >> 16;
		ZZ_CLOCKCYCLES(2,0x80042938);
		goto ZZ_420F4_844;
	}
	T8 = V0 >> 16;
	T8 += S3;
	T8 += V0;
	T8 >>= 4;
	T8 &= 0xF;
	T8 += V1;
	T8 = EMU_ReadU8(T8 + 256); //+ 0x100
	T8 <<= 16;
	V0 += T8;
	ZZ_CLOCKCYCLES(12,0x80042938);
	goto ZZ_420F4_844;
ZZ_43C6C_360:
	T8 = AT & A3;
	T8 &= T0;
	T8 &= A0;
	T8 <<= 12;
	if ((int32_t)T8 >= 0)
	{
		T9 = 928;
		ZZ_CLOCKCYCLES(6,0x80042AB0);
		goto ZZ_420F4_9BC;
	}
	T9 = 928;
	ZZ_CLOCKCYCLES(8,0x80044158);
	goto ZZ_43C6C_4EC;
ZZ_43C6C_380:
	A0 = EMU_ReadU32(V1 + 28); //+ 0x1C
	GTE_SetControlRegister(21,R0);
	GTE_SetControlRegister(22,R0);
	GTE_SetControlRegister(23,R0);
	T9 = A0 << 7;
	T9 &= 0xFFF;
	T8 = EMU_CheckedAdd(T9,-2048);
	if ((int32_t)T8 <= 0)
	{
		T8 = 4096;
		ZZ_CLOCKCYCLES(9,0x80044014);
		goto ZZ_43C6C_3A8;
	}
	T8 = 4096;
	T9 = T8 - T9;
	ZZ_CLOCKCYCLES(10,0x80044014);
ZZ_43C6C_3A8:
	ZZ_JUMPREGISTER_BEGIN(RA);
	EMU_Write32(V1 + 132,T9); //+ 0x84
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER_END();
ZZ_43C6C_3B0:
	T8 = AT | A3;
	T8 |= T0;
	T8 <<= 12;
	if ((int32_t)T8 < 0)
	{
		T8 = AT << 13;
		ZZ_CLOCKCYCLES(5,0x800440EC);
		goto ZZ_43C6C_480;
	}
	T8 = AT << 13;
	if ((int32_t)T8 >= 0)
	{
		T9 = 728;
		ZZ_CLOCKCYCLES(7,0x800427E0);
		goto ZZ_420F4_6EC;
	}
	T9 = 728;
	ZZ_CLOCKCYCLES(7,0x80044038);
ZZ_43C6C_3CC:
	AT = GTE_GetDataRegister(17);
	A3 = GTE_GetDataRegister(18);
	AT = EMU_CheckedAdd(AT,-600);
	T8 = T9 - AT;
	if ((int32_t)T8 < 0)
	{
		T8 <<= 5;
		ZZ_CLOCKCYCLES(6,0x80044070);
		goto ZZ_43C6C_404;
	}
	T8 <<= 5;
	GTE_SetDataRegister(6,T5);
	if ((int32_t)AT <= 0)
	{
		T5 = 0;
		ZZ_CLOCKCYCLES(9,0x80044070);
		goto ZZ_43C6C_404;
	}
	T5 = 0;
	GTE_SetDataRegister(8,T8);
	GTE_Execute(7864336);
	T5 = GTE_GetDataRegister(22);
	ZZ_CLOCKCYCLES(14,0x80044070);
ZZ_43C6C_404:
	T0 = GTE_GetDataRegister(19);
	A3 = EMU_CheckedAdd(A3,-600);
	T8 = T9 - A3;
	if ((int32_t)T8 < 0)
	{
		T8 <<= 5;
		ZZ_CLOCKCYCLES(5,0x800440A4);
		goto ZZ_43C6C_438;
	}
	T8 <<= 5;
	GTE_SetDataRegister(6,T6);
	if ((int32_t)A3 <= 0)
	{
		T6 = 0;
		ZZ_CLOCKCYCLES(8,0x800440A4);
		goto ZZ_43C6C_438;
	}
	T6 = 0;
	GTE_SetDataRegister(8,T8);
	GTE_Execute(7864336);
	T6 = GTE_GetDataRegister(22);
	ZZ_CLOCKCYCLES(13,0x800440A4);
ZZ_43C6C_438:
	T0 = EMU_CheckedAdd(T0,-600);
	T8 = T9 - T0;
	if ((int32_t)T8 < 0)
	{
		T8 <<= 5;
		ZZ_CLOCKCYCLES(4,0x800440D4);
		goto ZZ_43C6C_468;
	}
	T8 <<= 5;
	GTE_SetDataRegister(6,T7);
	if ((int32_t)T0 <= 0)
	{
		T7 = 0;
		ZZ_CLOCKCYCLES(7,0x800440D4);
		goto ZZ_43C6C_468;
	}
	T7 = 0;
	GTE_SetDataRegister(8,T8);
	GTE_Execute(7864336);
	T7 = GTE_GetDataRegister(22);
	ZZ_CLOCKCYCLES(12,0x800440D4);
ZZ_43C6C_468:
	T9 = T5 | T6;
	T9 |= T7;
	if (T9)
	{
		ZZ_CLOCKCYCLES(4,0x800427E0);
		goto ZZ_420F4_6EC;
	}
	ZZ_CLOCKCYCLES(6,0x80042628);
	goto ZZ_420F4_534;
ZZ_43C6C_480:
	GTE_SetDataRegister(8,EMU_ReadU32(V1 + 132)); //+ 0x84
	AT <<= 12;
	GTE_SetDataRegister(6,T5);
	if ((int32_t)AT >= 0)
	{
		A3 <<= 12;
		ZZ_CLOCKCYCLES(5,0x80044108);
		goto ZZ_43C6C_49C;
	}
	A3 <<= 12;
	GTE_Execute(7864336);
	T5 = GTE_GetDataRegister(22);
	ZZ_CLOCKCYCLES(7,0x80044108);
ZZ_43C6C_49C:
	GTE_SetDataRegister(6,T6);
	if ((int32_t)A3 >= 0)
	{
		T0 <<= 12;
		ZZ_CLOCKCYCLES(3,0x8004411C);
		goto ZZ_43C6C_4B0;
	}
	T0 <<= 12;
	GTE_Execute(7864336);
	T6 = GTE_GetDataRegister(22);
	ZZ_CLOCKCYCLES(5,0x8004411C);
ZZ_43C6C_4B0:
	GTE_SetDataRegister(6,T7);
	if ((int32_t)T0 >= 0)
	{
		ZZ_CLOCKCYCLES(3,0x800427E0);
		goto ZZ_420F4_6EC;
	}
	GTE_Execute(7864336);
	T7 = GTE_GetDataRegister(22);
	ZZ_CLOCKCYCLES(7,0x800427E0);
	goto ZZ_420F4_6EC;
ZZ_43C6C_4CC:
	T8 = AT | A3;
	T8 |= T0;
	T8 |= A0;
	T8 <<= 12;
	if ((int32_t)T8 < 0)
	{
		T8 = AT << 13;
		ZZ_CLOCKCYCLES(6,0x80044244);
		goto ZZ_43C6C_5D8;
	}
	T8 = AT << 13;
	if ((int32_t)T8 >= 0)
	{
		T9 = 728;
		ZZ_CLOCKCYCLES(8,0x80042AB0);
		goto ZZ_420F4_9BC;
	}
	T9 = 728;
	ZZ_CLOCKCYCLES(8,0x80044158);
ZZ_43C6C_4EC:
	AT = EMU_ReadU32(V1 + 380); //+ 0x17C
	A3 = GTE_GetDataRegister(17);
	AT = EMU_CheckedAdd(AT,-600);
	T8 = T9 - AT;
	if ((int32_t)T8 < 0)
	{
		T8 <<= 5;
		ZZ_CLOCKCYCLES(6,0x80044190);
		goto ZZ_43C6C_524;
	}
	T8 <<= 5;
	GTE_SetDataRegister(6,T5);
	if ((int32_t)AT <= 0)
	{
		T5 = 0;
		ZZ_CLOCKCYCLES(9,0x80044190);
		goto ZZ_43C6C_524;
	}
	T5 = 0;
	GTE_SetDataRegister(8,T8);
	GTE_Execute(7864336);
	T5 = GTE_GetDataRegister(22);
	ZZ_CLOCKCYCLES(14,0x80044190);
ZZ_43C6C_524:
	T0 = GTE_GetDataRegister(18);
	A3 = EMU_CheckedAdd(A3,-600);
	T8 = T9 - A3;
	if ((int32_t)T8 < 0)
	{
		T8 <<= 5;
		ZZ_CLOCKCYCLES(5,0x800441C4);
		goto ZZ_43C6C_558;
	}
	T8 <<= 5;
	GTE_SetDataRegister(6,T6);
	if ((int32_t)A3 <= 0)
	{
		T6 = 0;
		ZZ_CLOCKCYCLES(8,0x800441C4);
		goto ZZ_43C6C_558;
	}
	T6 = 0;
	GTE_SetDataRegister(8,T8);
	GTE_Execute(7864336);
	T6 = GTE_GetDataRegister(22);
	ZZ_CLOCKCYCLES(13,0x800441C4);
ZZ_43C6C_558:
	A0 = GTE_GetDataRegister(19);
	T0 = EMU_CheckedAdd(T0,-600);
	T8 = T9 - T0;
	if ((int32_t)T8 < 0)
	{
		T8 <<= 5;
		ZZ_CLOCKCYCLES(5,0x800441F8);
		goto ZZ_43C6C_58C;
	}
	T8 <<= 5;
	GTE_SetDataRegister(6,T7);
	if ((int32_t)T0 <= 0)
	{
		T7 = 0;
		ZZ_CLOCKCYCLES(8,0x800441F8);
		goto ZZ_43C6C_58C;
	}
	T7 = 0;
	GTE_SetDataRegister(8,T8);
	GTE_Execute(7864336);
	T7 = GTE_GetDataRegister(22);
	ZZ_CLOCKCYCLES(13,0x800441F8);
ZZ_43C6C_58C:
	A0 = EMU_CheckedAdd(A0,-600);
	T8 = T9 - A0;
	if ((int32_t)T8 < 0)
	{
		T8 <<= 5;
		ZZ_CLOCKCYCLES(4,0x80044228);
		goto ZZ_43C6C_5BC;
	}
	T8 <<= 5;
	GTE_SetDataRegister(6,A1);
	if ((int32_t)A0 <= 0)
	{
		A1 = 0;
		ZZ_CLOCKCYCLES(7,0x80044228);
		goto ZZ_43C6C_5BC;
	}
	A1 = 0;
	GTE_SetDataRegister(8,T8);
	GTE_Execute(7864336);
	A1 = GTE_GetDataRegister(22);
	ZZ_CLOCKCYCLES(12,0x80044228);
ZZ_43C6C_5BC:
	T9 = T5 | T6;
	T9 |= T7;
	T9 |= A1;
	if (T9)
	{
		ZZ_CLOCKCYCLES(5,0x80042AB0);
		goto ZZ_420F4_9BC;
	}
	ZZ_CLOCKCYCLES(7,0x80042628);
	goto ZZ_420F4_534;
ZZ_43C6C_5D8:
	GTE_SetDataRegister(8,EMU_ReadU32(V1 + 132)); //+ 0x84
	AT <<= 12;
	GTE_SetDataRegister(6,T5);
	if ((int32_t)AT >= 0)
	{
		A3 <<= 12;
		ZZ_CLOCKCYCLES(5,0x80044260);
		goto ZZ_43C6C_5F4;
	}
	A3 <<= 12;
	GTE_Execute(7864336);
	T5 = GTE_GetDataRegister(22);
	ZZ_CLOCKCYCLES(7,0x80044260);
ZZ_43C6C_5F4:
	GTE_SetDataRegister(6,T6);
	if ((int32_t)A3 >= 0)
	{
		T0 <<= 12;
		ZZ_CLOCKCYCLES(3,0x80044274);
		goto ZZ_43C6C_608;
	}
	T0 <<= 12;
	GTE_Execute(7864336);
	T6 = GTE_GetDataRegister(22);
	ZZ_CLOCKCYCLES(5,0x80044274);
ZZ_43C6C_608:
	GTE_SetDataRegister(6,T7);
	if ((int32_t)T0 >= 0)
	{
		A0 <<= 12;
		ZZ_CLOCKCYCLES(3,0x80044288);
		goto ZZ_43C6C_61C;
	}
	A0 <<= 12;
	GTE_Execute(7864336);
	T7 = GTE_GetDataRegister(22);
	ZZ_CLOCKCYCLES(5,0x80044288);
ZZ_43C6C_61C:
	GTE_SetDataRegister(6,A1);
	if ((int32_t)A0 >= 0)
	{
		ZZ_CLOCKCYCLES(3,0x80042AB0);
		goto ZZ_420F4_9BC;
	}
	GTE_Execute(7864336);
	A1 = GTE_GetDataRegister(22);
	ZZ_CLOCKCYCLES(7,0x80042AB0);
	goto ZZ_420F4_9BC;
ZZ_43C6C_638:
	SP = EMU_CheckedAdd(SP,-20);
	EMU_Write32(SP,S0);
	EMU_Write32(SP + 4,S1); //+ 0x4
	EMU_Write32(SP + 8,S2); //+ 0x8
	EMU_Write32(SP + 12,S3); //+ 0xC
	EMU_Write32(SP + 16,RA); //+ 0x10
	S0 = A0;
	S1 = A1;
	S2 = A2;
	S3 = A3;
	T5 = EMU_ReadU32(S1);
	A0 = EMU_ReadU32(S1 + 8); //+ 0x8
	RA = 0x800442DC; //ZZ_43C6C_670
	T3 = 0;
	ZZ_CLOCKCYCLES(14,0x80043508);
	goto ZZ_43508;
ZZ_43C6C_670:
	T4 = 4096;
	T8 = A1 << 16;
	T0 = T8 | V0;
	T8 = EMU_CheckedSubtract(R0,A1);
	T1 = T8 << 16;
	RA = 0x800442F8; //ZZ_43C6C_68C
	T2 = V0;
	ZZ_CLOCKCYCLES(7,0x8004330C);
	goto ZZ_4330C;
ZZ_43C6C_68C:
	if (!T5)
	{
		A0 = T5;
		ZZ_CLOCKCYCLES(2,0x80044324);
		goto ZZ_43C6C_6B8;
	}
	A0 = T5;
	RA = 0x80044308; //ZZ_43C6C_69C
	T0 = 4096;
	ZZ_CLOCKCYCLES(4,0x80043508);
	goto ZZ_43508;
ZZ_43C6C_69C:
	T1 = 0;
	T8 = EMU_CheckedSubtract(R0,A1);
	T8 <<= 16;
	T2 = T8 | V0;
	T3 = A1 << 16;
	RA = 0x80044324; //ZZ_43C6C_6B8
	T4 = V0;
	ZZ_CLOCKCYCLES(7,0x80043268);
	goto ZZ_43268;
ZZ_43C6C_6B8:
	T0 = EMU_ReadU32(S2);
	T2 = EMU_ReadU32(S2 + 4); //+ 0x4
	T4 = EMU_ReadU32(S2 + 8); //+ 0x8
	if (!S3)
	{
		T1 = 0;
		ZZ_CLOCKCYCLES(5,0x80044374);
		goto ZZ_43C6C_708;
	}
	T1 = 0;
	T9 = EMU_ReadU32(S3);
	EMU_UMultiply(T9,T0);
	T9 = EMU_ReadU32(S3 + 4); //+ 0x4
	T0 = LO;
	T0 >>= 12;
	EMU_UMultiply(T9,T2);
	T9 = EMU_ReadU32(S3 + 8); //+ 0x8
	T2 = LO;
	T2 >>= 12;
	EMU_UMultiply(T9,T4);
	T4 = LO;
	T4 >>= 12;
	ZZ_CLOCKCYCLES(20,0x80044374);
ZZ_43C6C_708:
	EMU_Write32(S0 + 20,T0); //+ 0x14
	EMU_Write32(S0 + 24,T2); //+ 0x18
	EMU_Write32(S0 + 28,T4); //+ 0x1C
	T8 = T0 | T2;
	T8 |= T4;
	T9 = 4096;
	if (T8 == T9)
	{
		T3 = 0;
		ZZ_CLOCKCYCLES(8,0x800443CC);
		goto ZZ_43C6C_760;
	}
	T3 = 0;
	RA = 0x8004439C; //ZZ_43C6C_730
	ZZ_CLOCKCYCLES(10,0x80043268);
	goto ZZ_43268;
ZZ_43C6C_730:
	EMU_Write32(S0,T0);
	EMU_Write32(S0 + 4,T1); //+ 0x4
	EMU_Write32(S0 + 8,T2); //+ 0x8
	EMU_Write32(S0 + 12,T3); //+ 0xC
	EMU_Write32(S0 + 16,T4); //+ 0x10
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	S0 = EMU_ReadU32(SP);
	S1 = EMU_ReadU32(SP + 4); //+ 0x4
	S2 = EMU_ReadU32(SP + 8); //+ 0x8
	S3 = EMU_ReadU32(SP + 12); //+ 0xC
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP = EMU_CheckedAdd(SP,20);
	ZZ_CLOCKCYCLES_JR(12);
	ZZ_JUMPREGISTER_END();
ZZ_43C6C_760:
	T0 = GTE_GetControlRegister(0);
	T1 = GTE_GetControlRegister(1);
	T2 = GTE_GetControlRegister(2);
	T3 = GTE_GetControlRegister(3);
	T4 = GTE_GetControlRegister(4);
	EMU_Write32(S0,T0);
	EMU_Write32(S0 + 4,T1); //+ 0x4
	EMU_Write32(S0 + 8,T2); //+ 0x8
	EMU_Write32(S0 + 12,T3); //+ 0xC
	EMU_Write32(S0 + 16,T4); //+ 0x10
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	S0 = EMU_ReadU32(SP);
	S1 = EMU_ReadU32(SP + 4); //+ 0x4
	S2 = EMU_ReadU32(SP + 8); //+ 0x8
	S3 = EMU_ReadU32(SP + 12); //+ 0xC
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP = EMU_CheckedAdd(SP,20);
	ZZ_CLOCKCYCLES_JR(17);
	ZZ_JUMPREGISTER_END();
ZZ_43C6C_7A4:
	SP = EMU_CheckedAdd(SP,-20);
	EMU_Write32(SP,S0);
	EMU_Write32(SP + 4,S1); //+ 0x4
	EMU_Write32(SP + 8,S2); //+ 0x8
	EMU_Write32(SP + 12,S3); //+ 0xC
	EMU_Write32(SP + 16,RA); //+ 0x10
	S0 = A0;
	S1 = A1;
	S2 = A2;
	S3 = A3;
	T7 = EMU_ReadU32(S1 + 8); //+ 0x8
	T6 = EMU_ReadU32(S1 + 4); //+ 0x4
	T5 = EMU_ReadU32(S1);
	A0 = T7;
	RA = 0x80044450; //ZZ_43C6C_7E4
	T2 = 4096;
	ZZ_CLOCKCYCLES(16,0x80043508);
	goto ZZ_43508;
ZZ_43C6C_7E4:
	T1 = A1;
	T8 = EMU_CheckedSubtract(R0,A1);
	T3 = T8 & 0xFFFF;
	T0 = V0;
	RA = 0x8004446C; //ZZ_43C6C_800
	T4 = V0;
	ZZ_CLOCKCYCLES(7,0x8004330C);
	goto ZZ_4330C;
ZZ_43C6C_800:
	if (!T5)
	{
		A0 = T5;
		ZZ_CLOCKCYCLES(2,0x80044498);
		goto ZZ_43C6C_82C;
	}
	A0 = T5;
	RA = 0x8004447C; //ZZ_43C6C_810
	T0 = 4096;
	ZZ_CLOCKCYCLES(4,0x80043508);
	goto ZZ_43508;
ZZ_43C6C_810:
	T1 = 0;
	T8 = EMU_CheckedSubtract(R0,A1);
	T8 <<= 16;
	T2 = T8 | V0;
	T3 = A1 << 16;
	RA = 0x80044498; //ZZ_43C6C_82C
	T4 = V0;
	ZZ_CLOCKCYCLES(7,0x80043268);
	goto ZZ_43268;
ZZ_43C6C_82C:
	A0 = T6 - T7;
	if (!A0)
	{
		ZZ_CLOCKCYCLES(3,0x80044324);
		goto ZZ_43C6C_6B8;
	}
	RA = 0x800444AC; //ZZ_43C6C_840
	T2 = 4096;
	ZZ_CLOCKCYCLES(5,0x80043508);
	goto ZZ_43508;
ZZ_43C6C_840:
	T1 = A1;
	T8 = EMU_CheckedSubtract(R0,A1);
	T3 = T8 & 0xFFFF;
	T0 = V0;
	RA = 0x800444C8; //ZZ_43C6C_85C
	T4 = V0;
	ZZ_CLOCKCYCLES(7,0x80043268);
	goto ZZ_43268;
ZZ_43C6C_85C:
	ZZ_CLOCKCYCLES(2,0x80044324);
	goto ZZ_43C6C_6B8;
ZZ_43C6C_8A8:
	SP = EMU_CheckedAdd(SP,-20);
	EMU_Write32(SP,S0);
	EMU_Write32(SP + 4,S1); //+ 0x4
	EMU_Write32(SP + 8,S2); //+ 0x8
	EMU_Write32(SP + 12,S3); //+ 0xC
	EMU_Write32(SP + 16,RA); //+ 0x10
	S0 = A0;
	S1 = A1;
	S2 = A2;
	S3 = A3;
	T5 = EMU_ReadU32(S1);
	A0 = EMU_ReadU32(S1 + 4); //+ 0x4
	T7 = EMU_ReadU32(S1 + 8); //+ 0x8
	RA = 0x80044550; //ZZ_43C6C_8E4
	T2 = 4096;
	ZZ_CLOCKCYCLES(15,0x80043508);
	goto ZZ_43508;
ZZ_43C6C_8E4:
	T1 = A1;
	T8 = EMU_CheckedSubtract(R0,A1);
	T3 = T8 & 0xFFFF;
	T0 = V0;
	RA = 0x8004456C; //ZZ_43C6C_900
	T4 = V0;
	ZZ_CLOCKCYCLES(7,0x8004330C);
	goto ZZ_4330C;
ZZ_43C6C_900:
	if (!T5)
	{
		A0 = T5;
		ZZ_CLOCKCYCLES(2,0x80044598);
		goto ZZ_43C6C_92C;
	}
	A0 = T5;
	RA = 0x8004457C; //ZZ_43C6C_910
	T0 = 4096;
	ZZ_CLOCKCYCLES(4,0x80043508);
	goto ZZ_43508;
ZZ_43C6C_910:
	T1 = 0;
	T8 = EMU_CheckedSubtract(R0,A1);
	T8 <<= 16;
	T2 = T8 | V0;
	T3 = A1 << 16;
	RA = 0x80044598; //ZZ_43C6C_92C
	T4 = V0;
	ZZ_CLOCKCYCLES(7,0x80043268);
	goto ZZ_43268;
ZZ_43C6C_92C:
	if (!T7)
	{
		A0 = T7;
		ZZ_CLOCKCYCLES(2,0x80044324);
		goto ZZ_43C6C_6B8;
	}
	A0 = T7;
	RA = 0x800445A8; //ZZ_43C6C_93C
	T3 = 0;
	ZZ_CLOCKCYCLES(4,0x80043508);
	goto ZZ_43508;
ZZ_43C6C_93C:
	T4 = 4096;
	T8 = A1 << 16;
	T0 = T8 | V0;
	T8 = EMU_CheckedSubtract(R0,A1);
	T1 = T8 << 16;
	RA = 0x800445C4; //ZZ_43C6C_958
	T2 = V0;
	ZZ_CLOCKCYCLES(7,0x80043268);
	goto ZZ_43268;
ZZ_43C6C_958:
	ZZ_CLOCKCYCLES(2,0x80044324);
	goto ZZ_43C6C_6B8;
ZZ_43C6C_960:
	SP = EMU_CheckedAdd(SP,-20);
	EMU_Write32(SP,S0);
	EMU_Write32(SP + 4,S1); //+ 0x4
	EMU_Write32(SP + 8,S2); //+ 0x8
	EMU_Write32(SP + 12,S3); //+ 0xC
	EMU_Write32(SP + 16,RA); //+ 0x10
	S0 = A0;
	S1 = A1;
	S2 = A2;
	S3 = A3;
	T5 = EMU_ReadU32(S1);
	T6 = EMU_ReadU32(S1 + 4); //+ 0x4
	A0 = EMU_ReadU32(S1 + 8); //+ 0x8
	RA = 0x80044608; //ZZ_43C6C_99C
	T3 = 0;
	ZZ_CLOCKCYCLES(15,0x80043508);
	goto ZZ_43508;
ZZ_43C6C_99C:
	T4 = 4096;
	T8 = A1 << 16;
	T0 = T8 | V0;
	T8 = EMU_CheckedSubtract(R0,A1);
	T1 = T8 << 16;
	RA = 0x80044624; //ZZ_43C6C_9B8
	T2 = V0;
	ZZ_CLOCKCYCLES(7,0x8004330C);
	goto ZZ_4330C;
ZZ_43C6C_9B8:
	if (!T5)
	{
		A0 = T5;
		ZZ_CLOCKCYCLES(2,0x80044650);
		goto ZZ_43C6C_9E4;
	}
	A0 = T5;
	RA = 0x80044634; //ZZ_43C6C_9C8
	T0 = 4096;
	ZZ_CLOCKCYCLES(4,0x80043508);
	goto ZZ_43508;
ZZ_43C6C_9C8:
	T1 = 0;
	T8 = EMU_CheckedSubtract(R0,A1);
	T8 <<= 16;
	T2 = T8 | V0;
	T3 = A1 << 16;
	RA = 0x80044650; //ZZ_43C6C_9E4
	T4 = V0;
	ZZ_CLOCKCYCLES(7,0x80043268);
	goto ZZ_43268;
ZZ_43C6C_9E4:
	if (!T6)
	{
		A0 = T6;
		ZZ_CLOCKCYCLES(2,0x80044324);
		goto ZZ_43C6C_6B8;
	}
	A0 = T6;
	RA = 0x80044660; //ZZ_43C6C_9F4
	T2 = 4096;
	ZZ_CLOCKCYCLES(4,0x80043508);
	goto ZZ_43508;
ZZ_43C6C_9F4:
	T1 = A1;
	T8 = EMU_CheckedSubtract(R0,A1);
	T3 = T8 & 0xFFFF;
	T0 = V0;
	RA = 0x8004467C; //ZZ_43C6C_A10
	T4 = V0;
	ZZ_CLOCKCYCLES(7,0x80043268);
	goto ZZ_43268;
ZZ_43C6C_A10:
	ZZ_CLOCKCYCLES(2,0x80044324);
	goto ZZ_43C6C_6B8;
ZZ_43C6C_A18:
	EMU_Write32(V1 + 100,RA); //+ 0x64
	RA = 0x80044690; //ZZ_43C6C_A24
	ZZ_CLOCKCYCLES(3,0x80043328);
	goto ZZ_43328;
ZZ_43C6C_A24:
	RA = 0x80044698; //ZZ_43C6C_A2C
	A0 = EMU_CheckedAdd(V1,32);
	ZZ_CLOCKCYCLES(2,0x800433A8);
	goto ZZ_433A8;
ZZ_43C6C_A2C:
	RA = EMU_ReadU32(V1 + 100); //+ 0x64
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80043C6C,ZZ_43C6C);
ZZ_MARK(0x80043C70);
ZZ_MARK(0x80043C74);
ZZ_MARK(0x80043C78);
ZZ_MARK(0x80043C7C);
ZZ_MARK(0x80043C80);
ZZ_MARK(0x80043C84);
ZZ_MARK(0x80043C88);
ZZ_MARK(0x80043C8C);
ZZ_MARK(0x80043C90);
ZZ_MARK(0x80043C94);
ZZ_MARK(0x80043C98);
ZZ_MARK(0x80043C9C);
ZZ_MARK_TARGET(0x80043CA0,ZZ_43C6C_34);
ZZ_MARK(0x80043CA4);
ZZ_MARK(0x80043CA8);
ZZ_MARK(0x80043CAC);
ZZ_MARK(0x80043CB0);
ZZ_MARK(0x80043CB4);
ZZ_MARK(0x80043CB8);
ZZ_MARK(0x80043CBC);
ZZ_MARK(0x80043CC0);
ZZ_MARK(0x80043CC4);
ZZ_MARK_TARGET(0x80043CC8,ZZ_43C6C_5C);
ZZ_MARK(0x80043CCC);
ZZ_MARK(0x80043CD0);
ZZ_MARK(0x80043CD4);
ZZ_MARK(0x80043CD8);
ZZ_MARK(0x80043CDC);
ZZ_MARK(0x80043CE0);
ZZ_MARK(0x80043CE4);
ZZ_MARK(0x80043CE8);
ZZ_MARK(0x80043CEC);
ZZ_MARK(0x80043CF0);
ZZ_MARK(0x80043CF4);
ZZ_MARK(0x80043CF8);
ZZ_MARK(0x80043CFC);
ZZ_MARK(0x80043D00);
ZZ_MARK(0x80043D04);
ZZ_MARK(0x80043D08);
ZZ_MARK(0x80043D0C);
ZZ_MARK(0x80043D10);
ZZ_MARK(0x80043D14);
ZZ_MARK(0x80043D18);
ZZ_MARK_TARGET(0x80043D1C,ZZ_43C6C_B0);
ZZ_MARK(0x80043D20);
ZZ_MARK(0x80043D24);
ZZ_MARK(0x80043D28);
ZZ_MARK(0x80043D2C);
ZZ_MARK(0x80043D30);
ZZ_MARK(0x80043D34);
ZZ_MARK(0x80043D38);
ZZ_MARK(0x80043D3C);
ZZ_MARK(0x80043D40);
ZZ_MARK(0x80043D44);
ZZ_MARK(0x80043D48);
ZZ_MARK(0x80043D4C);
ZZ_MARK_TARGET(0x80043D50,ZZ_43C6C_E4);
ZZ_MARK(0x80043D54);
ZZ_MARK(0x80043D58);
ZZ_MARK(0x80043D5C);
ZZ_MARK(0x80043D60);
ZZ_MARK(0x80043D64);
ZZ_MARK(0x80043D68);
ZZ_MARK(0x80043D6C);
ZZ_MARK(0x80043D70);
ZZ_MARK(0x80043D74);
ZZ_MARK_TARGET(0x80043D78,ZZ_43C6C_10C);
ZZ_MARK(0x80043D7C);
ZZ_MARK(0x80043D80);
ZZ_MARK(0x80043D84);
ZZ_MARK(0x80043D88);
ZZ_MARK(0x80043D8C);
ZZ_MARK(0x80043D90);
ZZ_MARK(0x80043D94);
ZZ_MARK(0x80043D98);
ZZ_MARK(0x80043D9C);
ZZ_MARK_TARGET(0x80043DA0,ZZ_43C6C_134);
ZZ_MARK(0x80043DA4);
ZZ_MARK(0x80043DA8);
ZZ_MARK(0x80043DAC);
ZZ_MARK(0x80043DB0);
ZZ_MARK(0x80043DB4);
ZZ_MARK(0x80043DB8);
ZZ_MARK(0x80043DBC);
ZZ_MARK(0x80043DC0);
ZZ_MARK(0x80043DC4);
ZZ_MARK(0x80043DC8);
ZZ_MARK(0x80043DCC);
ZZ_MARK(0x80043DD0);
ZZ_MARK(0x80043DD4);
ZZ_MARK(0x80043DD8);
ZZ_MARK(0x80043DDC);
ZZ_MARK(0x80043DE0);
ZZ_MARK(0x80043DE4);
ZZ_MARK(0x80043DE8);
ZZ_MARK(0x80043DEC);
ZZ_MARK(0x80043DF0);
ZZ_MARK_TARGET(0x80043DF4,ZZ_43C6C_188);
ZZ_MARK(0x80043DF8);
ZZ_MARK(0x80043DFC);
ZZ_MARK(0x80043E00);
ZZ_MARK(0x80043E04);
ZZ_MARK(0x80043E08);
ZZ_MARK_TARGET(0x80043E0C,ZZ_43C6C_1A0);
ZZ_MARK(0x80043E10);
ZZ_MARK(0x80043E14);
ZZ_MARK(0x80043E18);
ZZ_MARK(0x80043E1C);
ZZ_MARK(0x80043E20);
ZZ_MARK(0x80043E24);
ZZ_MARK(0x80043E28);
ZZ_MARK(0x80043E2C);
ZZ_MARK(0x80043E30);
ZZ_MARK(0x80043E34);
ZZ_MARK(0x80043E38);
ZZ_MARK(0x80043E3C);
ZZ_MARK(0x80043E40);
ZZ_MARK(0x80043E44);
ZZ_MARK(0x80043E48);
ZZ_MARK(0x80043E4C);
ZZ_MARK_TARGET(0x80043E50,ZZ_43C6C_1E4);
ZZ_MARK(0x80043E54);
ZZ_MARK(0x80043E58);
ZZ_MARK(0x80043E5C);
ZZ_MARK(0x80043E60);
ZZ_MARK(0x80043E64);
ZZ_MARK(0x80043E68);
ZZ_MARK(0x80043E6C);
ZZ_MARK(0x80043E70);
ZZ_MARK(0x80043E74);
ZZ_MARK(0x80043E78);
ZZ_MARK(0x80043E7C);
ZZ_MARK(0x80043E80);
ZZ_MARK(0x80043E84);
ZZ_MARK(0x80043E88);
ZZ_MARK_TARGET(0x80043E8C,ZZ_43C6C_220);
ZZ_MARK(0x80043E90);
ZZ_MARK(0x80043E94);
ZZ_MARK(0x80043E98);
ZZ_MARK(0x80043E9C);
ZZ_MARK(0x80043EA0);
ZZ_MARK(0x80043EA4);
ZZ_MARK(0x80043EA8);
ZZ_MARK(0x80043EAC);
ZZ_MARK(0x80043EB0);
ZZ_MARK(0x80043EB4);
ZZ_MARK(0x80043EB8);
ZZ_MARK(0x80043EBC);
ZZ_MARK(0x80043EC0);
ZZ_MARK_TARGET(0x80043EC4,ZZ_43C6C_258);
ZZ_MARK(0x80043EC8);
ZZ_MARK(0x80043ECC);
ZZ_MARK(0x80043ED0);
ZZ_MARK(0x80043ED4);
ZZ_MARK(0x80043ED8);
ZZ_MARK(0x80043EDC);
ZZ_MARK_TARGET(0x80043EE0,ZZ_43C6C_274);
ZZ_MARK(0x80043EE4);
ZZ_MARK(0x80043EE8);
ZZ_MARK(0x80043EEC);
ZZ_MARK(0x80043EF0);
ZZ_MARK(0x80043EF4);
ZZ_MARK(0x80043EF8);
ZZ_MARK(0x80043EFC);
ZZ_MARK(0x80043F00);
ZZ_MARK(0x80043F04);
ZZ_MARK(0x80043F08);
ZZ_MARK(0x80043F0C);
ZZ_MARK(0x80043F10);
ZZ_MARK(0x80043F14);
ZZ_MARK(0x80043F18);
ZZ_MARK(0x80043F1C);
ZZ_MARK(0x80043F20);
ZZ_MARK_TARGET(0x80043F24,ZZ_43C6C_2B8);
ZZ_MARK(0x80043F28);
ZZ_MARK(0x80043F2C);
ZZ_MARK(0x80043F30);
ZZ_MARK(0x80043F34);
ZZ_MARK(0x80043F38);
ZZ_MARK(0x80043F3C);
ZZ_MARK(0x80043F40);
ZZ_MARK(0x80043F44);
ZZ_MARK(0x80043F48);
ZZ_MARK(0x80043F4C);
ZZ_MARK(0x80043F50);
ZZ_MARK(0x80043F54);
ZZ_MARK(0x80043F58);
ZZ_MARK(0x80043F5C);
ZZ_MARK_TARGET(0x80043F60,ZZ_43C6C_2F4);
ZZ_MARK(0x80043F64);
ZZ_MARK(0x80043F68);
ZZ_MARK(0x80043F6C);
ZZ_MARK(0x80043F70);
ZZ_MARK(0x80043F74);
ZZ_MARK(0x80043F78);
ZZ_MARK(0x80043F7C);
ZZ_MARK(0x80043F80);
ZZ_MARK(0x80043F84);
ZZ_MARK(0x80043F88);
ZZ_MARK(0x80043F8C);
ZZ_MARK(0x80043F90);
ZZ_MARK(0x80043F94);
ZZ_MARK(0x80043F98);
ZZ_MARK_TARGET(0x80043F9C,ZZ_43C6C_330);
ZZ_MARK(0x80043FA0);
ZZ_MARK(0x80043FA4);
ZZ_MARK(0x80043FA8);
ZZ_MARK(0x80043FAC);
ZZ_MARK(0x80043FB0);
ZZ_MARK(0x80043FB4);
ZZ_MARK(0x80043FB8);
ZZ_MARK(0x80043FBC);
ZZ_MARK(0x80043FC0);
ZZ_MARK(0x80043FC4);
ZZ_MARK(0x80043FC8);
ZZ_MARK_TARGET(0x80043FCC,ZZ_43C6C_360);
ZZ_MARK(0x80043FD0);
ZZ_MARK(0x80043FD4);
ZZ_MARK(0x80043FD8);
ZZ_MARK(0x80043FDC);
ZZ_MARK(0x80043FE0);
ZZ_MARK(0x80043FE4);
ZZ_MARK(0x80043FE8);
ZZ_MARK_TARGET(0x80043FEC,ZZ_43C6C_380);
ZZ_MARK(0x80043FF0);
ZZ_MARK(0x80043FF4);
ZZ_MARK(0x80043FF8);
ZZ_MARK(0x80043FFC);
ZZ_MARK(0x80044000);
ZZ_MARK(0x80044004);
ZZ_MARK(0x80044008);
ZZ_MARK(0x8004400C);
ZZ_MARK(0x80044010);
ZZ_MARK_TARGET(0x80044014,ZZ_43C6C_3A8);
ZZ_MARK(0x80044018);
ZZ_MARK_TARGET(0x8004401C,ZZ_43C6C_3B0);
ZZ_MARK(0x80044020);
ZZ_MARK(0x80044024);
ZZ_MARK(0x80044028);
ZZ_MARK(0x8004402C);
ZZ_MARK(0x80044030);
ZZ_MARK(0x80044034);
ZZ_MARK_TARGET(0x80044038,ZZ_43C6C_3CC);
ZZ_MARK(0x8004403C);
ZZ_MARK(0x80044040);
ZZ_MARK(0x80044044);
ZZ_MARK(0x80044048);
ZZ_MARK(0x8004404C);
ZZ_MARK(0x80044050);
ZZ_MARK(0x80044054);
ZZ_MARK(0x80044058);
ZZ_MARK(0x8004405C);
ZZ_MARK(0x80044060);
ZZ_MARK(0x80044064);
ZZ_MARK(0x80044068);
ZZ_MARK(0x8004406C);
ZZ_MARK_TARGET(0x80044070,ZZ_43C6C_404);
ZZ_MARK(0x80044074);
ZZ_MARK(0x80044078);
ZZ_MARK(0x8004407C);
ZZ_MARK(0x80044080);
ZZ_MARK(0x80044084);
ZZ_MARK(0x80044088);
ZZ_MARK(0x8004408C);
ZZ_MARK(0x80044090);
ZZ_MARK(0x80044094);
ZZ_MARK(0x80044098);
ZZ_MARK(0x8004409C);
ZZ_MARK(0x800440A0);
ZZ_MARK_TARGET(0x800440A4,ZZ_43C6C_438);
ZZ_MARK(0x800440A8);
ZZ_MARK(0x800440AC);
ZZ_MARK(0x800440B0);
ZZ_MARK(0x800440B4);
ZZ_MARK(0x800440B8);
ZZ_MARK(0x800440BC);
ZZ_MARK(0x800440C0);
ZZ_MARK(0x800440C4);
ZZ_MARK(0x800440C8);
ZZ_MARK(0x800440CC);
ZZ_MARK(0x800440D0);
ZZ_MARK_TARGET(0x800440D4,ZZ_43C6C_468);
ZZ_MARK(0x800440D8);
ZZ_MARK(0x800440DC);
ZZ_MARK(0x800440E0);
ZZ_MARK(0x800440E4);
ZZ_MARK(0x800440E8);
ZZ_MARK_TARGET(0x800440EC,ZZ_43C6C_480);
ZZ_MARK(0x800440F0);
ZZ_MARK(0x800440F4);
ZZ_MARK(0x800440F8);
ZZ_MARK(0x800440FC);
ZZ_MARK(0x80044100);
ZZ_MARK(0x80044104);
ZZ_MARK_TARGET(0x80044108,ZZ_43C6C_49C);
ZZ_MARK(0x8004410C);
ZZ_MARK(0x80044110);
ZZ_MARK(0x80044114);
ZZ_MARK(0x80044118);
ZZ_MARK_TARGET(0x8004411C,ZZ_43C6C_4B0);
ZZ_MARK(0x80044120);
ZZ_MARK(0x80044124);
ZZ_MARK(0x80044128);
ZZ_MARK(0x8004412C);
ZZ_MARK(0x80044130);
ZZ_MARK(0x80044134);
ZZ_MARK_TARGET(0x80044138,ZZ_43C6C_4CC);
ZZ_MARK(0x8004413C);
ZZ_MARK(0x80044140);
ZZ_MARK(0x80044144);
ZZ_MARK(0x80044148);
ZZ_MARK(0x8004414C);
ZZ_MARK(0x80044150);
ZZ_MARK(0x80044154);
ZZ_MARK_TARGET(0x80044158,ZZ_43C6C_4EC);
ZZ_MARK(0x8004415C);
ZZ_MARK(0x80044160);
ZZ_MARK(0x80044164);
ZZ_MARK(0x80044168);
ZZ_MARK(0x8004416C);
ZZ_MARK(0x80044170);
ZZ_MARK(0x80044174);
ZZ_MARK(0x80044178);
ZZ_MARK(0x8004417C);
ZZ_MARK(0x80044180);
ZZ_MARK(0x80044184);
ZZ_MARK(0x80044188);
ZZ_MARK(0x8004418C);
ZZ_MARK_TARGET(0x80044190,ZZ_43C6C_524);
ZZ_MARK(0x80044194);
ZZ_MARK(0x80044198);
ZZ_MARK(0x8004419C);
ZZ_MARK(0x800441A0);
ZZ_MARK(0x800441A4);
ZZ_MARK(0x800441A8);
ZZ_MARK(0x800441AC);
ZZ_MARK(0x800441B0);
ZZ_MARK(0x800441B4);
ZZ_MARK(0x800441B8);
ZZ_MARK(0x800441BC);
ZZ_MARK(0x800441C0);
ZZ_MARK_TARGET(0x800441C4,ZZ_43C6C_558);
ZZ_MARK(0x800441C8);
ZZ_MARK(0x800441CC);
ZZ_MARK(0x800441D0);
ZZ_MARK(0x800441D4);
ZZ_MARK(0x800441D8);
ZZ_MARK(0x800441DC);
ZZ_MARK(0x800441E0);
ZZ_MARK(0x800441E4);
ZZ_MARK(0x800441E8);
ZZ_MARK(0x800441EC);
ZZ_MARK(0x800441F0);
ZZ_MARK(0x800441F4);
ZZ_MARK_TARGET(0x800441F8,ZZ_43C6C_58C);
ZZ_MARK(0x800441FC);
ZZ_MARK(0x80044200);
ZZ_MARK(0x80044204);
ZZ_MARK(0x80044208);
ZZ_MARK(0x8004420C);
ZZ_MARK(0x80044210);
ZZ_MARK(0x80044214);
ZZ_MARK(0x80044218);
ZZ_MARK(0x8004421C);
ZZ_MARK(0x80044220);
ZZ_MARK(0x80044224);
ZZ_MARK_TARGET(0x80044228,ZZ_43C6C_5BC);
ZZ_MARK(0x8004422C);
ZZ_MARK(0x80044230);
ZZ_MARK(0x80044234);
ZZ_MARK(0x80044238);
ZZ_MARK(0x8004423C);
ZZ_MARK(0x80044240);
ZZ_MARK_TARGET(0x80044244,ZZ_43C6C_5D8);
ZZ_MARK(0x80044248);
ZZ_MARK(0x8004424C);
ZZ_MARK(0x80044250);
ZZ_MARK(0x80044254);
ZZ_MARK(0x80044258);
ZZ_MARK(0x8004425C);
ZZ_MARK_TARGET(0x80044260,ZZ_43C6C_5F4);
ZZ_MARK(0x80044264);
ZZ_MARK(0x80044268);
ZZ_MARK(0x8004426C);
ZZ_MARK(0x80044270);
ZZ_MARK_TARGET(0x80044274,ZZ_43C6C_608);
ZZ_MARK(0x80044278);
ZZ_MARK(0x8004427C);
ZZ_MARK(0x80044280);
ZZ_MARK(0x80044284);
ZZ_MARK_TARGET(0x80044288,ZZ_43C6C_61C);
ZZ_MARK(0x8004428C);
ZZ_MARK(0x80044290);
ZZ_MARK(0x80044294);
ZZ_MARK(0x80044298);
ZZ_MARK(0x8004429C);
ZZ_MARK(0x800442A0);
ZZ_MARK_TARGET(0x800442A4,ZZ_43C6C_638);
ZZ_MARK(0x800442A8);
ZZ_MARK(0x800442AC);
ZZ_MARK(0x800442B0);
ZZ_MARK(0x800442B4);
ZZ_MARK(0x800442B8);
ZZ_MARK(0x800442BC);
ZZ_MARK(0x800442C0);
ZZ_MARK(0x800442C4);
ZZ_MARK(0x800442C8);
ZZ_MARK(0x800442CC);
ZZ_MARK(0x800442D0);
ZZ_MARK(0x800442D4);
ZZ_MARK(0x800442D8);
ZZ_MARK_TARGET(0x800442DC,ZZ_43C6C_670);
ZZ_MARK(0x800442E0);
ZZ_MARK(0x800442E4);
ZZ_MARK(0x800442E8);
ZZ_MARK(0x800442EC);
ZZ_MARK(0x800442F0);
ZZ_MARK(0x800442F4);
ZZ_MARK_TARGET(0x800442F8,ZZ_43C6C_68C);
ZZ_MARK(0x800442FC);
ZZ_MARK(0x80044300);
ZZ_MARK(0x80044304);
ZZ_MARK_TARGET(0x80044308,ZZ_43C6C_69C);
ZZ_MARK(0x8004430C);
ZZ_MARK(0x80044310);
ZZ_MARK(0x80044314);
ZZ_MARK(0x80044318);
ZZ_MARK(0x8004431C);
ZZ_MARK(0x80044320);
ZZ_MARK_TARGET(0x80044324,ZZ_43C6C_6B8);
ZZ_MARK(0x80044328);
ZZ_MARK(0x8004432C);
ZZ_MARK(0x80044330);
ZZ_MARK(0x80044334);
ZZ_MARK(0x80044338);
ZZ_MARK(0x8004433C);
ZZ_MARK(0x80044340);
ZZ_MARK(0x80044344);
ZZ_MARK(0x80044348);
ZZ_MARK(0x8004434C);
ZZ_MARK(0x80044350);
ZZ_MARK(0x80044354);
ZZ_MARK(0x80044358);
ZZ_MARK(0x8004435C);
ZZ_MARK(0x80044360);
ZZ_MARK(0x80044364);
ZZ_MARK(0x80044368);
ZZ_MARK(0x8004436C);
ZZ_MARK(0x80044370);
ZZ_MARK_TARGET(0x80044374,ZZ_43C6C_708);
ZZ_MARK(0x80044378);
ZZ_MARK(0x8004437C);
ZZ_MARK(0x80044380);
ZZ_MARK(0x80044384);
ZZ_MARK(0x80044388);
ZZ_MARK(0x8004438C);
ZZ_MARK(0x80044390);
ZZ_MARK(0x80044394);
ZZ_MARK(0x80044398);
ZZ_MARK_TARGET(0x8004439C,ZZ_43C6C_730);
ZZ_MARK(0x800443A0);
ZZ_MARK(0x800443A4);
ZZ_MARK(0x800443A8);
ZZ_MARK(0x800443AC);
ZZ_MARK(0x800443B0);
ZZ_MARK(0x800443B4);
ZZ_MARK(0x800443B8);
ZZ_MARK(0x800443BC);
ZZ_MARK(0x800443C0);
ZZ_MARK(0x800443C4);
ZZ_MARK(0x800443C8);
ZZ_MARK_TARGET(0x800443CC,ZZ_43C6C_760);
ZZ_MARK(0x800443D0);
ZZ_MARK(0x800443D4);
ZZ_MARK(0x800443D8);
ZZ_MARK(0x800443DC);
ZZ_MARK(0x800443E0);
ZZ_MARK(0x800443E4);
ZZ_MARK(0x800443E8);
ZZ_MARK(0x800443EC);
ZZ_MARK(0x800443F0);
ZZ_MARK(0x800443F4);
ZZ_MARK(0x800443F8);
ZZ_MARK(0x800443FC);
ZZ_MARK(0x80044400);
ZZ_MARK(0x80044404);
ZZ_MARK(0x80044408);
ZZ_MARK(0x8004440C);
ZZ_MARK_TARGET(0x80044410,ZZ_43C6C_7A4);
ZZ_MARK(0x80044414);
ZZ_MARK(0x80044418);
ZZ_MARK(0x8004441C);
ZZ_MARK(0x80044420);
ZZ_MARK(0x80044424);
ZZ_MARK(0x80044428);
ZZ_MARK(0x8004442C);
ZZ_MARK(0x80044430);
ZZ_MARK(0x80044434);
ZZ_MARK(0x80044438);
ZZ_MARK(0x8004443C);
ZZ_MARK(0x80044440);
ZZ_MARK(0x80044444);
ZZ_MARK(0x80044448);
ZZ_MARK(0x8004444C);
ZZ_MARK_TARGET(0x80044450,ZZ_43C6C_7E4);
ZZ_MARK(0x80044454);
ZZ_MARK(0x80044458);
ZZ_MARK(0x8004445C);
ZZ_MARK(0x80044460);
ZZ_MARK(0x80044464);
ZZ_MARK(0x80044468);
ZZ_MARK_TARGET(0x8004446C,ZZ_43C6C_800);
ZZ_MARK(0x80044470);
ZZ_MARK(0x80044474);
ZZ_MARK(0x80044478);
ZZ_MARK_TARGET(0x8004447C,ZZ_43C6C_810);
ZZ_MARK(0x80044480);
ZZ_MARK(0x80044484);
ZZ_MARK(0x80044488);
ZZ_MARK(0x8004448C);
ZZ_MARK(0x80044490);
ZZ_MARK(0x80044494);
ZZ_MARK_TARGET(0x80044498,ZZ_43C6C_82C);
ZZ_MARK(0x8004449C);
ZZ_MARK(0x800444A0);
ZZ_MARK(0x800444A4);
ZZ_MARK(0x800444A8);
ZZ_MARK_TARGET(0x800444AC,ZZ_43C6C_840);
ZZ_MARK(0x800444B0);
ZZ_MARK(0x800444B4);
ZZ_MARK(0x800444B8);
ZZ_MARK(0x800444BC);
ZZ_MARK(0x800444C0);
ZZ_MARK(0x800444C4);
ZZ_MARK_TARGET(0x800444C8,ZZ_43C6C_85C);
ZZ_MARK(0x800444CC);
ZZ_MARK_TARGET(0x80044514,ZZ_43C6C_8A8);
ZZ_MARK(0x80044518);
ZZ_MARK(0x8004451C);
ZZ_MARK(0x80044520);
ZZ_MARK(0x80044524);
ZZ_MARK(0x80044528);
ZZ_MARK(0x8004452C);
ZZ_MARK(0x80044530);
ZZ_MARK(0x80044534);
ZZ_MARK(0x80044538);
ZZ_MARK(0x8004453C);
ZZ_MARK(0x80044540);
ZZ_MARK(0x80044544);
ZZ_MARK(0x80044548);
ZZ_MARK(0x8004454C);
ZZ_MARK_TARGET(0x80044550,ZZ_43C6C_8E4);
ZZ_MARK(0x80044554);
ZZ_MARK(0x80044558);
ZZ_MARK(0x8004455C);
ZZ_MARK(0x80044560);
ZZ_MARK(0x80044564);
ZZ_MARK(0x80044568);
ZZ_MARK_TARGET(0x8004456C,ZZ_43C6C_900);
ZZ_MARK(0x80044570);
ZZ_MARK(0x80044574);
ZZ_MARK(0x80044578);
ZZ_MARK_TARGET(0x8004457C,ZZ_43C6C_910);
ZZ_MARK(0x80044580);
ZZ_MARK(0x80044584);
ZZ_MARK(0x80044588);
ZZ_MARK(0x8004458C);
ZZ_MARK(0x80044590);
ZZ_MARK(0x80044594);
ZZ_MARK_TARGET(0x80044598,ZZ_43C6C_92C);
ZZ_MARK(0x8004459C);
ZZ_MARK(0x800445A0);
ZZ_MARK(0x800445A4);
ZZ_MARK_TARGET(0x800445A8,ZZ_43C6C_93C);
ZZ_MARK(0x800445AC);
ZZ_MARK(0x800445B0);
ZZ_MARK(0x800445B4);
ZZ_MARK(0x800445B8);
ZZ_MARK(0x800445BC);
ZZ_MARK(0x800445C0);
ZZ_MARK_TARGET(0x800445C4,ZZ_43C6C_958);
ZZ_MARK(0x800445C8);
ZZ_MARK_TARGET(0x800445CC,ZZ_43C6C_960);
ZZ_MARK(0x800445D0);
ZZ_MARK(0x800445D4);
ZZ_MARK(0x800445D8);
ZZ_MARK(0x800445DC);
ZZ_MARK(0x800445E0);
ZZ_MARK(0x800445E4);
ZZ_MARK(0x800445E8);
ZZ_MARK(0x800445EC);
ZZ_MARK(0x800445F0);
ZZ_MARK(0x800445F4);
ZZ_MARK(0x800445F8);
ZZ_MARK(0x800445FC);
ZZ_MARK(0x80044600);
ZZ_MARK(0x80044604);
ZZ_MARK_TARGET(0x80044608,ZZ_43C6C_99C);
ZZ_MARK(0x8004460C);
ZZ_MARK(0x80044610);
ZZ_MARK(0x80044614);
ZZ_MARK(0x80044618);
ZZ_MARK(0x8004461C);
ZZ_MARK(0x80044620);
ZZ_MARK_TARGET(0x80044624,ZZ_43C6C_9B8);
ZZ_MARK(0x80044628);
ZZ_MARK(0x8004462C);
ZZ_MARK(0x80044630);
ZZ_MARK_TARGET(0x80044634,ZZ_43C6C_9C8);
ZZ_MARK(0x80044638);
ZZ_MARK(0x8004463C);
ZZ_MARK(0x80044640);
ZZ_MARK(0x80044644);
ZZ_MARK(0x80044648);
ZZ_MARK(0x8004464C);
ZZ_MARK_TARGET(0x80044650,ZZ_43C6C_9E4);
ZZ_MARK(0x80044654);
ZZ_MARK(0x80044658);
ZZ_MARK(0x8004465C);
ZZ_MARK_TARGET(0x80044660,ZZ_43C6C_9F4);
ZZ_MARK(0x80044664);
ZZ_MARK(0x80044668);
ZZ_MARK(0x8004466C);
ZZ_MARK(0x80044670);
ZZ_MARK(0x80044674);
ZZ_MARK(0x80044678);
ZZ_MARK_TARGET(0x8004467C,ZZ_43C6C_A10);
ZZ_MARK(0x80044680);
ZZ_MARK_TARGET(0x80044684,ZZ_43C6C_A18);
ZZ_MARK(0x80044688);
ZZ_MARK(0x8004468C);
ZZ_MARK_TARGET(0x80044690,ZZ_43C6C_A24);
ZZ_MARK(0x80044694);
ZZ_MARK_TARGET(0x80044698,ZZ_43C6C_A2C);
ZZ_MARK(0x8004469C);
ZZ_MARK(0x800446A0);
ZZ_MARK(0x800446A4);
