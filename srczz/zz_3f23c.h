#ifdef ZZ_INCLUDE_CODE
ZZ_3F23C:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 18976); //+ 0x4A20
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x8004CB80,ZZ_4CB6C_14);
	ZZ_JUMPREGISTER(0x8003F43C,ZZ_3F408_34);
	ZZ_JUMPREGISTER(0x80040B58,ZZ_40A0C_14C);
	ZZ_JUMPREGISTER(0x80040DA4,ZZ_40A0C_398);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003F23C,0x8003F24C,ZZ_3F23C);
