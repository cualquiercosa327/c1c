#ifdef ZZ_INCLUDE_CODE
ZZ_3BEF4:
	T0 = 0xFF0000;
	T0 |= 0xFFFF;
	AT = A0 & T0;
	A1 >>= 6;
	A1 -= 1;
	ZZ_CLOCKCYCLES(5,0x8003BF08);
ZZ_3BEF4_14:
	AT += 4;
	EMU_Write32(A0,AT);
	AT += 4;
	EMU_Write32(A0 + 4,AT); //+ 0x4
	AT += 4;
	EMU_Write32(A0 + 8,AT); //+ 0x8
	AT += 4;
	EMU_Write32(A0 + 12,AT); //+ 0xC
	AT += 4;
	EMU_Write32(A0 + 16,AT); //+ 0x10
	AT += 4;
	EMU_Write32(A0 + 20,AT); //+ 0x14
	AT += 4;
	EMU_Write32(A0 + 24,AT); //+ 0x18
	AT += 4;
	EMU_Write32(A0 + 28,AT); //+ 0x1C
	AT += 4;
	EMU_Write32(A0 + 32,AT); //+ 0x20
	AT += 4;
	EMU_Write32(A0 + 36,AT); //+ 0x24
	AT += 4;
	EMU_Write32(A0 + 40,AT); //+ 0x28
	AT += 4;
	EMU_Write32(A0 + 44,AT); //+ 0x2C
	AT += 4;
	EMU_Write32(A0 + 48,AT); //+ 0x30
	AT += 4;
	EMU_Write32(A0 + 52,AT); //+ 0x34
	AT += 4;
	EMU_Write32(A0 + 56,AT); //+ 0x38
	AT += 4;
	EMU_Write32(A0 + 60,AT); //+ 0x3C
	AT += 4;
	EMU_Write32(A0 + 64,AT); //+ 0x40
	AT += 4;
	EMU_Write32(A0 + 68,AT); //+ 0x44
	AT += 4;
	EMU_Write32(A0 + 72,AT); //+ 0x48
	AT += 4;
	EMU_Write32(A0 + 76,AT); //+ 0x4C
	AT += 4;
	EMU_Write32(A0 + 80,AT); //+ 0x50
	AT += 4;
	EMU_Write32(A0 + 84,AT); //+ 0x54
	AT += 4;
	EMU_Write32(A0 + 88,AT); //+ 0x58
	AT += 4;
	EMU_Write32(A0 + 92,AT); //+ 0x5C
	AT += 4;
	EMU_Write32(A0 + 96,AT); //+ 0x60
	AT += 4;
	EMU_Write32(A0 + 100,AT); //+ 0x64
	AT += 4;
	EMU_Write32(A0 + 104,AT); //+ 0x68
	AT += 4;
	EMU_Write32(A0 + 108,AT); //+ 0x6C
	AT += 4;
	EMU_Write32(A0 + 112,AT); //+ 0x70
	AT += 4;
	EMU_Write32(A0 + 116,AT); //+ 0x74
	AT += 4;
	EMU_Write32(A0 + 120,AT); //+ 0x78
	AT += 4;
	EMU_Write32(A0 + 124,AT); //+ 0x7C
	AT += 4;
	EMU_Write32(A0 + 128,AT); //+ 0x80
	AT += 4;
	EMU_Write32(A0 + 132,AT); //+ 0x84
	AT += 4;
	EMU_Write32(A0 + 136,AT); //+ 0x88
	AT += 4;
	EMU_Write32(A0 + 140,AT); //+ 0x8C
	AT += 4;
	EMU_Write32(A0 + 144,AT); //+ 0x90
	AT += 4;
	EMU_Write32(A0 + 148,AT); //+ 0x94
	AT += 4;
	EMU_Write32(A0 + 152,AT); //+ 0x98
	AT += 4;
	EMU_Write32(A0 + 156,AT); //+ 0x9C
	AT += 4;
	EMU_Write32(A0 + 160,AT); //+ 0xA0
	AT += 4;
	EMU_Write32(A0 + 164,AT); //+ 0xA4
	AT += 4;
	EMU_Write32(A0 + 168,AT); //+ 0xA8
	AT += 4;
	EMU_Write32(A0 + 172,AT); //+ 0xAC
	AT += 4;
	EMU_Write32(A0 + 176,AT); //+ 0xB0
	AT += 4;
	EMU_Write32(A0 + 180,AT); //+ 0xB4
	AT += 4;
	EMU_Write32(A0 + 184,AT); //+ 0xB8
	AT += 4;
	EMU_Write32(A0 + 188,AT); //+ 0xBC
	AT += 4;
	EMU_Write32(A0 + 192,AT); //+ 0xC0
	AT += 4;
	EMU_Write32(A0 + 196,AT); //+ 0xC4
	AT += 4;
	EMU_Write32(A0 + 200,AT); //+ 0xC8
	AT += 4;
	EMU_Write32(A0 + 204,AT); //+ 0xCC
	AT += 4;
	EMU_Write32(A0 + 208,AT); //+ 0xD0
	AT += 4;
	EMU_Write32(A0 + 212,AT); //+ 0xD4
	AT += 4;
	EMU_Write32(A0 + 216,AT); //+ 0xD8
	AT += 4;
	EMU_Write32(A0 + 220,AT); //+ 0xDC
	AT += 4;
	EMU_Write32(A0 + 224,AT); //+ 0xE0
	AT += 4;
	EMU_Write32(A0 + 228,AT); //+ 0xE4
	AT += 4;
	EMU_Write32(A0 + 232,AT); //+ 0xE8
	AT += 4;
	EMU_Write32(A0 + 236,AT); //+ 0xEC
	AT += 4;
	EMU_Write32(A0 + 240,AT); //+ 0xF0
	AT += 4;
	EMU_Write32(A0 + 244,AT); //+ 0xF4
	AT += 4;
	EMU_Write32(A0 + 248,AT); //+ 0xF8
	AT += 4;
	EMU_Write32(A0 + 252,AT); //+ 0xFC
	if (!A1)
	{
		A0 += 256;
		ZZ_CLOCKCYCLES(130,0x8003C118);
		goto ZZ_3BEF4_224;
	}
	A0 += 256;
	A1 = EMU_CheckedAdd(A1,-1);
	ZZ_CLOCKCYCLES(132,0x8003BF08);
	goto ZZ_3BEF4_14;
ZZ_3BEF4_224:
	ZZ_JUMPREGISTER_BEGIN(RA);
	EMU_Write32(A0 - 4,T0); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80016374,ZZ_16328_4C);
	ZZ_JUMPREGISTER(0x80016388,ZZ_16328_60);
	ZZ_JUMPREGISTER(0x80011CDC,ZZ_11800_4DC);
	ZZ_JUMPREGISTER(0x80042170,ZZ_420F4_7C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003BEF4,ZZ_3BEF4);
ZZ_MARK(0x8003BEF8);
ZZ_MARK(0x8003BEFC);
ZZ_MARK(0x8003BF00);
ZZ_MARK(0x8003BF04);
ZZ_MARK_TARGET(0x8003BF08,ZZ_3BEF4_14);
ZZ_MARK(0x8003BF0C);
ZZ_MARK(0x8003BF10);
ZZ_MARK(0x8003BF14);
ZZ_MARK(0x8003BF18);
ZZ_MARK(0x8003BF1C);
ZZ_MARK(0x8003BF20);
ZZ_MARK(0x8003BF24);
ZZ_MARK(0x8003BF28);
ZZ_MARK(0x8003BF2C);
ZZ_MARK(0x8003BF30);
ZZ_MARK(0x8003BF34);
ZZ_MARK(0x8003BF38);
ZZ_MARK(0x8003BF3C);
ZZ_MARK(0x8003BF40);
ZZ_MARK(0x8003BF44);
ZZ_MARK(0x8003BF48);
ZZ_MARK(0x8003BF4C);
ZZ_MARK(0x8003BF50);
ZZ_MARK(0x8003BF54);
ZZ_MARK(0x8003BF58);
ZZ_MARK(0x8003BF5C);
ZZ_MARK(0x8003BF60);
ZZ_MARK(0x8003BF64);
ZZ_MARK(0x8003BF68);
ZZ_MARK(0x8003BF6C);
ZZ_MARK(0x8003BF70);
ZZ_MARK(0x8003BF74);
ZZ_MARK(0x8003BF78);
ZZ_MARK(0x8003BF7C);
ZZ_MARK(0x8003BF80);
ZZ_MARK(0x8003BF84);
ZZ_MARK(0x8003BF88);
ZZ_MARK(0x8003BF8C);
ZZ_MARK(0x8003BF90);
ZZ_MARK(0x8003BF94);
ZZ_MARK(0x8003BF98);
ZZ_MARK(0x8003BF9C);
ZZ_MARK(0x8003BFA0);
ZZ_MARK(0x8003BFA4);
ZZ_MARK(0x8003BFA8);
ZZ_MARK(0x8003BFAC);
ZZ_MARK(0x8003BFB0);
ZZ_MARK(0x8003BFB4);
ZZ_MARK(0x8003BFB8);
ZZ_MARK(0x8003BFBC);
ZZ_MARK(0x8003BFC0);
ZZ_MARK(0x8003BFC4);
ZZ_MARK(0x8003BFC8);
ZZ_MARK(0x8003BFCC);
ZZ_MARK(0x8003BFD0);
ZZ_MARK(0x8003BFD4);
ZZ_MARK(0x8003BFD8);
ZZ_MARK(0x8003BFDC);
ZZ_MARK(0x8003BFE0);
ZZ_MARK(0x8003BFE4);
ZZ_MARK(0x8003BFE8);
ZZ_MARK(0x8003BFEC);
ZZ_MARK(0x8003BFF0);
ZZ_MARK(0x8003BFF4);
ZZ_MARK(0x8003BFF8);
ZZ_MARK(0x8003BFFC);
ZZ_MARK(0x8003C000);
ZZ_MARK(0x8003C004);
ZZ_MARK(0x8003C008);
ZZ_MARK(0x8003C00C);
ZZ_MARK(0x8003C010);
ZZ_MARK(0x8003C014);
ZZ_MARK(0x8003C018);
ZZ_MARK(0x8003C01C);
ZZ_MARK(0x8003C020);
ZZ_MARK(0x8003C024);
ZZ_MARK(0x8003C028);
ZZ_MARK(0x8003C02C);
ZZ_MARK(0x8003C030);
ZZ_MARK(0x8003C034);
ZZ_MARK(0x8003C038);
ZZ_MARK(0x8003C03C);
ZZ_MARK(0x8003C040);
ZZ_MARK(0x8003C044);
ZZ_MARK(0x8003C048);
ZZ_MARK(0x8003C04C);
ZZ_MARK(0x8003C050);
ZZ_MARK(0x8003C054);
ZZ_MARK(0x8003C058);
ZZ_MARK(0x8003C05C);
ZZ_MARK(0x8003C060);
ZZ_MARK(0x8003C064);
ZZ_MARK(0x8003C068);
ZZ_MARK(0x8003C06C);
ZZ_MARK(0x8003C070);
ZZ_MARK(0x8003C074);
ZZ_MARK(0x8003C078);
ZZ_MARK(0x8003C07C);
ZZ_MARK(0x8003C080);
ZZ_MARK(0x8003C084);
ZZ_MARK(0x8003C088);
ZZ_MARK(0x8003C08C);
ZZ_MARK(0x8003C090);
ZZ_MARK(0x8003C094);
ZZ_MARK(0x8003C098);
ZZ_MARK(0x8003C09C);
ZZ_MARK(0x8003C0A0);
ZZ_MARK(0x8003C0A4);
ZZ_MARK(0x8003C0A8);
ZZ_MARK(0x8003C0AC);
ZZ_MARK(0x8003C0B0);
ZZ_MARK(0x8003C0B4);
ZZ_MARK(0x8003C0B8);
ZZ_MARK(0x8003C0BC);
ZZ_MARK(0x8003C0C0);
ZZ_MARK(0x8003C0C4);
ZZ_MARK(0x8003C0C8);
ZZ_MARK(0x8003C0CC);
ZZ_MARK(0x8003C0D0);
ZZ_MARK(0x8003C0D4);
ZZ_MARK(0x8003C0D8);
ZZ_MARK(0x8003C0DC);
ZZ_MARK(0x8003C0E0);
ZZ_MARK(0x8003C0E4);
ZZ_MARK(0x8003C0E8);
ZZ_MARK(0x8003C0EC);
ZZ_MARK(0x8003C0F0);
ZZ_MARK(0x8003C0F4);
ZZ_MARK(0x8003C0F8);
ZZ_MARK(0x8003C0FC);
ZZ_MARK(0x8003C100);
ZZ_MARK(0x8003C104);
ZZ_MARK(0x8003C108);
ZZ_MARK(0x8003C10C);
ZZ_MARK(0x8003C110);
ZZ_MARK(0x8003C114);
ZZ_MARK_TARGET(0x8003C118,ZZ_3BEF4_224);
ZZ_MARK(0x8003C11C);
