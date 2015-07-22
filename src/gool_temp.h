/* 
to quickly find a faulty ported gool operation, include this header file in
gool.cc and place the following commented code before the opcode switch table.
enable the appropriate sequence of divide and conquer defines to override 
a subset of the ported operations with the correctly functioning discompiled code.
repeat as necessary with each observation to ultimately narrow the search to a 
single operation.

#define GOOL_DEBUG_INTERPRETER_OP(x) \
case 0x ## x: \
  GOOL_OP_ ## x(obj,instruction); \
  break;
  
#ifdef GOOL_DEBUG_INTERPRETER_DAC
switch (opcode)
{
#if defined(GOOL_DEBUG_INTERPRETER_DAC_L)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLLR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLLLR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLLLLR)
GOOL_DEBUG_INTERPRETER_OP(0);
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLLLLL)
GOOL_DEBUG_INTERPRETER_OP(1);
#endif
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLLLL)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLLLRR)
GOOL_DEBUG_INTERPRETER_OP(2);
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLLLRL)
GOOL_DEBUG_INTERPRETER_OP(3);
#endif
#endif
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLLL)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLLRR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLLRLR)
GOOL_DEBUG_INTERPRETER_OP(4);
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLLRLL)
GOOL_DEBUG_INTERPRETER_OP(5);
#endif
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLLRL)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLLRRR)
GOOL_DEBUG_INTERPRETER_OP(6);
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLLRRL)
GOOL_DEBUG_INTERPRETER_OP(7);
#endif
#endif
#endif
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLL)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLRR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLRLR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLRLLR)
GOOL_DEBUG_INTERPRETER_OP(8);
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLRLLL)
GOOL_DEBUG_INTERPRETER_OP(9);
#endif
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLRLL)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLRLRR)
GOOL_DEBUG_INTERPRETER_OP(A);
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLRLRL)
GOOL_DEBUG_INTERPRETER_OP(B);
#endif
#endif
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLRL)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLRRR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLRRLR)   
GOOL_DEBUG_INTERPRETER_OP(C);
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLRRLL)
GOOL_DEBUG_INTERPRETER_OP(D);
#endif
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLRRL)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLRRRR)
GOOL_DEBUG_INTERPRETER_OP(E);
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LLRRRL)
GOOL_DEBUG_INTERPRETER_OP(F);
#endif
#endif
#endif
#endif
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LL)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LRR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LRLR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LRLLR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LRLLLR)
GOOL_DEBUG_INTERPRETER_OP(10);
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LRLLLL)
GOOL_DEBUG_INTERPRETER_OP(11);
#endif
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LRLLL)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LRLLRR)
GOOL_DEBUG_INTERPRETER_OP(12);
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LRLLRL)
GOOL_DEBUG_INTERPRETER_OP(13);
#endif
#endif
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LRLL)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LRLRR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LRLRLR)
GOOL_DEBUG_INTERPRETER_OP(14);
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LRLRLL)
GOOL_DEBUG_INTERPRETER_OP(15);
#endif
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LRLRL)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LRLRRR)
case 0x16:
case 0x26:
  GOOL_OP_1626(obj,instruction);
  break;
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LRLRRL)
GOOL_DEBUG_INTERPRETER_OP(17);
#endif
#endif
#endif
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LRL)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LRRR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LRRLR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_LRRLLR)
GOOL_DEBUG_INTERPRETER_OP(18);
#endif
#endif
#endif
#endif
#endif
#endif
#if defined(GOOL_DEBUG_INTERPRETER_DAC_R)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLLR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLLLR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLLLLR)
GOOL_DEBUG_INTERPRETER_OP(19);
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLLLLL)
GOOL_DEBUG_INTERPRETER_OP(1A);
#endif
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLLLL)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLLLRR)
GOOL_DEBUG_INTERPRETER_OP(1B);
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLLLRL)
GOOL_DEBUG_INTERPRETER_OP(1C);
#endif
#endif
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLLL)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLLRR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLLRLR)
GOOL_DEBUG_INTERPRETER_OP(1D);
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLLRLL)
GOOL_DEBUG_INTERPRETER_OP(1E);
#endif
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLLRL)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLLRRR)
GOOL_DEBUG_INTERPRETER_OP(1F);
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLLRRL)
GOOL_DEBUG_INTERPRETER_OP(20);
#endif
#endif
#endif
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLL)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLRR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLRLR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLRLLR)
GOOL_DEBUG_INTERPRETER_OP(21);
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLRLLL)
case 0x22:
case 0x25:
  GOOL_OP_2225(obj,instruction);
  break;
#endif
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLRLL)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLRLRR)
GOOL_DEBUG_INTERPRETER_OP(23);
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLRLRL)
GOOL_DEBUG_INTERPRETER_OP(24);
#endif
#endif
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLRL)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLRRR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLRRLR)   
GOOL_DEBUG_INTERPRETER_OP(27);
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLRRLL)
case 0x82:
  //GOOL_OP_82(obj,instruction,flags,transition);
  GOOL_OP_ControlFlow(obj,instruction,flags,transition);      
  break;
#endif
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLRRL)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLRRRR)
case 0x83:
  GOOL_OP_83(obj,instruction,flags);
  break;
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RLRRRL)
case 0x84:
  GOOL_OP_84(obj,instruction,flags);
  break;
#endif
#endif
#endif
#endif
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RL)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RRR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RRLR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RRLLR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RRLLLR)
GOOL_DEBUG_INTERPRETER_OP(85);
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RRLLLL)
case 0x86:
  GOOL_OP_86(obj,instruction,flags);
  break;    
#endif
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RRLLL)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RRLLRR)
case 0x87:
case 0x90:
{
  uint32_t index = (instruction >> 21) & 0x7;
  recipient = ((uint32_t*)&obj->self)[index];
}
case 0x8F:
  GOOL_OP_8F(obj,instruction,flags,recipient,opcode);
  break;   
#endif      
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RRLLRL)
case 0x88:
case 0x89:
  GOOL_OP_8889(obj,instruction,flags,transition,opcode);
  break;    
#endif
#endif
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RRLL)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RRLRR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RRLRLR)
case 0x8A:
case 0x91:
  GOOL_OP_8A91(obj,instruction,opcode);
  break;
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RRLRLL)
GOOL_DEBUG_INTERPRETER_OP(8B);
#endif
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RRLRL)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RRLRRR)
GOOL_DEBUG_INTERPRETER_OP(8C);
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RRLRRL)
GOOL_DEBUG_INTERPRETER_OP(8D);
#endif
#endif
#endif
#endif
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RRL)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RRRR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RRRLR)
#if !defined(GOOL_DEBUG_INTERPRETER_DAC_RRRLLR)
GOOL_DEBUG_INTERPRETER_OP(8E);
#endif
#endif
#endif
#endif
#endif    
#endif
default:
{
#endif
    
also, place this after the end of the switch table:

#ifdef GOOL_DEBUG_INTERPRETER_DAC
}
}
#endif

*/

GOOL_OPERATION GOOL_OP_0(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_92C;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_91C;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	S0 = V0;
	EMU_Write32(S2 + 220,S0); //+ 0xDC
	goto ZZ_201DC_938;
ZZ_201DC_91C:
	V0 <<= 2;
	V0 += 96;
	S0 = S2 + V0;
	goto ZZ_201DC_938;
ZZ_201DC_92C:	
  A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	S0 = V0;
ZZ_201DC_938:
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_97C;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_96C;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	V1 = V0;
	EMU_Write32(S2 + 220,V1); //+ 0xDC
	goto ZZ_201DC_988;
ZZ_201DC_96C:
	V0 <<= 2;
	V0 += 96;
	V1 = S2 + V0;
	goto ZZ_201DC_988;
ZZ_201DC_97C:
  A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	V1 = V0;
ZZ_201DC_988:
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = A0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = EMU_ReadU32(S0);
	V1 = EMU_ReadU32(V1);
	V0 += V1;
	EMU_Write32(A0,V0);
}
  
GOOL_OPERATION GOOL_OP_1(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_9F8;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_9E8;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	S0 = V0;
	EMU_Write32(S2 + 220,S0); //+ 0xDC
	goto ZZ_201DC_A04;
ZZ_201DC_9E8:
	V0 <<= 2;
	V0 += 96;
	S0 = S2 + V0;
	goto ZZ_201DC_A04;
ZZ_201DC_9F8:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	S0 = V0;
ZZ_201DC_A04:
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_A4C;
	}
	A1 = V1;
	if (V1 != FP)
	{
		goto ZZ_201DC_A38;
	}
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	A1 = V0;
	EMU_Write32(S2 + 220,A1); //+ 0xDC
	goto ZZ_201DC_A58;
ZZ_201DC_A38:
	V0 = S1 & 0x1FF;
	V0 <<= 2;
	V0 += 96;
	A1 = S2 + V0;
	goto ZZ_201DC_A58;
ZZ_201DC_A4C:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	A1 = V0;
ZZ_201DC_A58:
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = A0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V1 = EMU_ReadU32(S0);
	V0 = EMU_ReadU32(A1);
	V0 = V0 - V1;
	EMU_Write32(A0,V0);
}

GOOL_OPERATION GOOL_OP_2(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_B70;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_B60;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	S0 = V0;
	EMU_Write32(S2 + 220,S0); //+ 0xDC
	goto ZZ_201DC_B7C;
ZZ_201DC_B60:
	V0 <<= 2;
	V0 += 96;
	S0 = S2 + V0;
	goto ZZ_201DC_B7C;
ZZ_201DC_B70:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	S0 = V0;
ZZ_201DC_B7C:
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_BC0;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_BB0;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	A1 = V0;
	EMU_Write32(S2 + 220,A1); //+ 0xDC
	goto ZZ_201DC_BCC;
ZZ_201DC_BB0:
	V0 <<= 2;
	V0 += 96;
	A1 = S2 + V0;
	goto ZZ_201DC_BCC;
ZZ_201DC_BC0:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	A1 = V0;
ZZ_201DC_BCC:
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = A0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V1 = EMU_ReadU32(S0);
	V0 = EMU_ReadU32(A1);
	EMU_SMultiply(V1,V0);
	V0 = LO;
	EMU_Write32(A0,V0);
	return;
}

GOOL_OPERATION GOOL_OP_3(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_C40;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_C30;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	S0 = V0;
	EMU_Write32(S2 + 220,S0); //+ 0xDC
	goto ZZ_201DC_C4C;
ZZ_201DC_C30:
	V0 <<= 2;
	V0 += 96;
	S0 = S2 + V0;
	goto ZZ_201DC_C4C;
ZZ_201DC_C40:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	S0 = V0;
ZZ_201DC_C4C:
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_C90;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_C80;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	V1 = V0;
	EMU_Write32(S2 + 220,V1); //+ 0xDC
	goto ZZ_201DC_C9C;
ZZ_201DC_C80:
	V0 <<= 2;
	V0 += 96;
	V1 = S2 + V0;
	goto ZZ_201DC_C9C;
ZZ_201DC_C90:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	V1 = V0;
ZZ_201DC_C9C:
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = A0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V1 = EMU_ReadU32(V1);
	V0 = EMU_ReadU32(S0);
	EMU_SDivide(V1,V0);
	if (V0)
	{
		goto ZZ_201DC_CC8;
	}
	EMU_Break(7168);
ZZ_201DC_CC8:
	AT = -1;
	if (V0 != AT)
	{
		AT = 0x80000000;
		goto ZZ_201DC_CE0;
	}
	AT = 0x80000000;
	if (V1 != AT)
	{
		goto ZZ_201DC_CE0;
	}
	EMU_Break(6144);
ZZ_201DC_CE0:
	V1 = LO;
	EMU_Write32(A0,V1);
}

GOOL_OPERATION GOOL_OP_4(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_12B8;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_12A8;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	S0 = V0;
	EMU_Write32(S2 + 220,S0); //+ 0xDC
	goto ZZ_201DC_12C4;
ZZ_201DC_12A8:
	V0 <<= 2;
	V0 += 96;
	S0 = S2 + V0;
	goto ZZ_201DC_12C4;
ZZ_201DC_12B8:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	S0 = V0;
ZZ_201DC_12C4:
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_130C;
	}
	A1 = V1;
	if (V1 != FP)
	{
		goto ZZ_201DC_12F8;
	}
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	V1 = V0;
	EMU_Write32(S2 + 220,V1); //+ 0xDC
	goto ZZ_201DC_1318;
ZZ_201DC_12F8:
	V0 = S1 & 0x1FF;
	V0 <<= 2;
	V0 += 96;
	V1 = S2 + V0;
	goto ZZ_201DC_1318;
ZZ_201DC_130C:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	V1 = V0;
ZZ_201DC_1318:
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = A0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = EMU_ReadU32(S0);
	V1 = EMU_ReadU32(V1);
	V0 ^= V1;
	V0 = V0 < 1;
	EMU_Write32(A0,V0);
}

GOOL_OPERATION GOOL_OP_5(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_16A8;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_1698;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	S0 = V0;
	EMU_Write32(S2 + 220,S0); //+ 0xDC
	goto ZZ_201DC_16B4;
ZZ_201DC_1698:
	V0 <<= 2;
	V0 += 96;
	S0 = S2 + V0;
	goto ZZ_201DC_16B4;
ZZ_201DC_16A8:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	S0 = V0;
ZZ_201DC_16B4:
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_16F8;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_16E8;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	V1 = V0;
	EMU_Write32(S2 + 220,V1); //+ 0xDC
	goto ZZ_201DC_1704;
ZZ_201DC_16E8:
	V0 <<= 2;
	V0 += 96;
	V1 = S2 + V0;
	goto ZZ_201DC_1704;
ZZ_201DC_16F8:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	V1 = V0;
ZZ_201DC_1704:
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = A0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = EMU_ReadU32(V1);
	if (!V0)
	{
		V1 = R0;
	  EMU_Write32(A0,V1);
	}
	V1 = R0;
	V0 = EMU_ReadU32(S0);
	V1 = R0 < V0;
	EMU_Write32(A0,V1);
}

GOOL_OPERATION GOOL_OP_6(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_1778;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_1768;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	S0 = V0;
	EMU_Write32(S2 + 220,S0); //+ 0xDC
	goto ZZ_201DC_1784;
ZZ_201DC_1768:
	V0 <<= 2;
	V0 += 96;
	S0 = S2 + V0;
	goto ZZ_201DC_1784;
ZZ_201DC_1778:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	S0 = V0;
ZZ_201DC_1784:
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_17C8;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_17B8;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	V1 = V0;
	EMU_Write32(S2 + 220,V1); //+ 0xDC
	goto ZZ_201DC_17D4;
ZZ_201DC_17B8:
	V0 <<= 2;
	V0 += 96;
	V1 = S2 + V0;
	goto ZZ_201DC_17D4;
ZZ_201DC_17C8:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	V1 = V0;
ZZ_201DC_17D4:
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = A0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = EMU_ReadU32(V1);
	if (V0)
	{
		V1 = R0;
		goto ZZ_201DC_1804;
	}
	V1 = R0;
	V0 = EMU_ReadU32(S0);
	if (!V0)
	{
	  EMU_Write32(A0,V1);
	}
ZZ_201DC_1804:
	V1 = 0x1;
	EMU_Write32(A0,V1);
}

GOOL_OPERATION GOOL_OP_7(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_F94;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_F84;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	S0 = V0;
	EMU_Write32(S2 + 220,S0); //+ 0xDC
	goto ZZ_201DC_FA0;
ZZ_201DC_F84:
	V0 <<= 2;
	V0 += 96;
	S0 = S2 + V0;
	goto ZZ_201DC_FA0;
ZZ_201DC_F94:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	S0 = V0;
ZZ_201DC_FA0:
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_FE8;
	}
	A1 = V1;
	if (V1 != FP)
	{
		goto ZZ_201DC_FD4;
	}
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	V1 = V0;
	EMU_Write32(S2 + 220,V1); //+ 0xDC
	goto ZZ_201DC_FF4;
ZZ_201DC_FD4:
	V0 = S1 & 0x1FF;
	V0 <<= 2;
	V0 += 96;
	V1 = S2 + V0;
	goto ZZ_201DC_FF4;
ZZ_201DC_FE8:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	V1 = V0;
ZZ_201DC_FF4:
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = A0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = EMU_ReadU32(S0);
	V1 = EMU_ReadU32(V1);
	V0 &= V1;
	EMU_Write32(A0,V0);
}

GOOL_OPERATION GOOL_OP_8(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_105C;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_104C;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	S0 = V0;
	EMU_Write32(S2 + 220,S0); //+ 0xDC
	goto ZZ_201DC_1068;
ZZ_201DC_104C:
	V0 <<= 2;
	V0 += 96;
	S0 = S2 + V0;
	goto ZZ_201DC_1068;
ZZ_201DC_105C:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	S0 = V0;
ZZ_201DC_1068:
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_10B0;
	}
	A1 = V1;
	if (V1 != FP)
	{
		goto ZZ_201DC_109C;
	}
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	V1 = V0;
	EMU_Write32(S2 + 220,V1); //+ 0xDC
	goto ZZ_201DC_10BC;
ZZ_201DC_109C:
	V0 = S1 & 0x1FF;
	V0 <<= 2;
	V0 += 96;
	V1 = S2 + V0;
	goto ZZ_201DC_10BC;
ZZ_201DC_10B0:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	V1 = V0;
ZZ_201DC_10BC:
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = A0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = EMU_ReadU32(S0);
	V1 = EMU_ReadU32(V1);
	V0 |= V1;
	EMU_Write32(A0,V0);
}

GOOL_OPERATION GOOL_OP_9(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_1388;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_1378;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	S0 = V0;
	EMU_Write32(S2 + 220,S0); //+ 0xDC
	goto ZZ_201DC_1394;
ZZ_201DC_1378:
	V0 <<= 2;
	V0 += 96;
	S0 = S2 + V0;
	goto ZZ_201DC_1394;
ZZ_201DC_1388:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	S0 = V0;
ZZ_201DC_1394:
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_13D8;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_13C8;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	A1 = V0;
	EMU_Write32(S2 + 220,A1); //+ 0xDC
	goto ZZ_201DC_13E4;
ZZ_201DC_13C8:
	V0 <<= 2;
	V0 += 96;
	A1 = S2 + V0;
	goto ZZ_201DC_13E4;
ZZ_201DC_13D8:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	A1 = V0;
ZZ_201DC_13E4:
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = A0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V1 = EMU_ReadU32(S0);
	V0 = EMU_ReadU32(A1);
	V0 = (int32_t)V0 < (int32_t)V1;
	EMU_Write32(A0,V0);
}

GOOL_OPERATION GOOL_OP_A(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_144C;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_143C;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	S0 = V0;
	EMU_Write32(S2 + 220,S0); //+ 0xDC
	goto ZZ_201DC_1458;
ZZ_201DC_143C:
	V0 <<= 2;
	V0 += 96;
	S0 = S2 + V0;
	goto ZZ_201DC_1458;
ZZ_201DC_144C:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	S0 = V0;
ZZ_201DC_1458:
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_149C;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_148C;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	V1 = V0;
	EMU_Write32(S2 + 220,V1); //+ 0xDC
	goto ZZ_201DC_14A8;
ZZ_201DC_148C:
	V0 <<= 2;
	V0 += 96;
	V1 = S2 + V0;
	goto ZZ_201DC_14A8;
ZZ_201DC_149C:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	V1 = V0;
ZZ_201DC_14A8:
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = A0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = EMU_ReadU32(S0);
	V1 = EMU_ReadU32(V1);
	V0 = (int32_t)V0 < (int32_t)V1;
	V0 ^= 0x1;
  EMU_Write32(A0,V0);
}

GOOL_OPERATION GOOL_OP_B(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_1510;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_1500;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	S0 = V0;
	EMU_Write32(S2 + 220,S0); //+ 0xDC
	goto ZZ_201DC_151C;
ZZ_201DC_1500:
	V0 <<= 2;
	V0 += 96;
	S0 = S2 + V0;
	goto ZZ_201DC_151C;
ZZ_201DC_1510:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	S0 = V0;
ZZ_201DC_151C:
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_1564;
	}
	A1 = V1;
	if (V1 != FP)
	{
		goto ZZ_201DC_1550;
	}
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	V1 = V0;
	EMU_Write32(S2 + 220,V1); //+ 0xDC
	goto ZZ_201DC_1570;
ZZ_201DC_1550:
	V0 = S1 & 0x1FF;
	V0 <<= 2;
	V0 += 96;
	V1 = S2 + V0;
	goto ZZ_201DC_1570;
ZZ_201DC_1564:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	V1 = V0;
ZZ_201DC_1570:
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = A0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = EMU_ReadU32(S0);
	V1 = EMU_ReadU32(V1);
	V0 = (int32_t)V0 < (int32_t)V1;
	EMU_Write32(A0,V0);
}

GOOL_OPERATION GOOL_OP_C(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_15D8;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_15C8;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	S0 = V0;
	EMU_Write32(S2 + 220,S0); //+ 0xDC
	goto ZZ_201DC_15E4;
ZZ_201DC_15C8:
	V0 <<= 2;
	V0 += 96;
	S0 = S2 + V0;
	goto ZZ_201DC_15E4;
ZZ_201DC_15D8:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	S0 = V0;
ZZ_201DC_15E4:
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_162C;
	}
	A1 = V1;
	if (V1 != FP)
	{
		goto ZZ_201DC_1618;
	}
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	A1 = V0;
	EMU_Write32(S2 + 220,A1); //+ 0xDC
	goto ZZ_201DC_1638;
ZZ_201DC_1618:
	V0 = S1 & 0x1FF;
	V0 <<= 2;
	V0 += 96;
	A1 = S2 + V0;
	goto ZZ_201DC_1638;
ZZ_201DC_162C:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	A1 = V0;
ZZ_201DC_1638:
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = A0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V1 = EMU_ReadU32(S0);
	V0 = EMU_ReadU32(A1);
	V0 = (int32_t)V0 < (int32_t)V1;
	V0 ^= 0x1;
	EMU_Write32(A0,V0);
}

GOOL_OPERATION GOOL_OP_D(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_D30;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_D20;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_D38;
ZZ_201DC_D20:
	V0 <<= 2;
	V0 += 96;
	V0 += S2;
	goto ZZ_201DC_D38;
ZZ_201DC_D30:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
ZZ_201DC_D38:
	S0 = EMU_ReadU32(V0);
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_D80;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_D70;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	V1 = V0;
	EMU_Write32(S2 + 220,V1); //+ 0xDC
	goto ZZ_201DC_D8C;
ZZ_201DC_D70:
	V0 <<= 2;
	V0 += 96;
	V1 = S2 + V0;
	goto ZZ_201DC_D8C;
ZZ_201DC_D80:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	V1 = V0;
ZZ_201DC_D8C:
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = A0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = EMU_ReadU32(V1);
	EMU_SDivide(V0,S0);
	if (S0)
	{
		goto ZZ_201DC_DB4;
	}
	EMU_Break(7168);
ZZ_201DC_DB4:
	AT = -1;
	if (S0 != AT)
	{
		AT = 0x80000000;
		goto ZZ_201DC_DCC;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		goto ZZ_201DC_DCC;
	}
	EMU_Break(6144);
ZZ_201DC_DCC:
	V1 = HI;
	EMU_Write32(A0,V1);
}

GOOL_OPERATION GOOL_OP_E(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_1124;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_1114;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	S0 = V0;
	EMU_Write32(S2 + 220,S0); //+ 0xDC
	goto ZZ_201DC_1130;
ZZ_201DC_1114:
	V0 <<= 2;
	V0 += 96;
	S0 = S2 + V0;
	goto ZZ_201DC_1130;
ZZ_201DC_1124:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	S0 = V0;
ZZ_201DC_1130:
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_1178;
	}
	A1 = V1;
	if (V1 != FP)
	{
		goto ZZ_201DC_1164;
	}
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	V1 = V0;
	EMU_Write32(S2 + 220,V1); //+ 0xDC
	goto ZZ_201DC_1184;
ZZ_201DC_1164:
	V0 = S1 & 0x1FF;
	V0 <<= 2;
	V0 += 96;
	V1 = S2 + V0;
	goto ZZ_201DC_1184;
ZZ_201DC_1178:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	V1 = V0;
ZZ_201DC_1184:
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = A0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = EMU_ReadU32(S0);
	V1 = EMU_ReadU32(V1);
	V0 ^= V1;
	EMU_Write32(A0,V0);
}

GOOL_OPERATION GOOL_OP_F(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_11E8;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_11D8;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_11F0;
ZZ_201DC_11D8:
	V0 <<= 2;
	V0 += 96;
	V0 += S2;
	goto ZZ_201DC_11F0;
ZZ_201DC_11E8:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
ZZ_201DC_11F0:
	S0 = EMU_ReadU32(V0);
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_1238;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_1228;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	A0 = V0;
	EMU_Write32(S2 + 220,A0); //+ 0xDC
	goto ZZ_201DC_1244;
ZZ_201DC_1228:
	V0 <<= 2;
	V0 += 96;
	A0 = S2 + V0;
	goto ZZ_201DC_1244;
ZZ_201DC_1238:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	A0 = V0;
ZZ_201DC_1244:
	V1 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = V1 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = EMU_ReadU32(A0);
	V0 &= S0;
	V0 ^= S0;
	V0 = V0 < 1;
	EMU_Write32(V1,V0);
}

GOOL_OPERATION GOOL_OP_10(emuptr<goolobj> obj, uint32_t instruction)
{ 
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_E1C;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_E0C;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_E24;
ZZ_201DC_E0C:
	V0 <<= 2;
	V0 += 96;
	V0 += S2;
	goto ZZ_201DC_E24;
ZZ_201DC_E1C:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
ZZ_201DC_E24:
	S3 = EMU_ReadU32(V0);
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_E6C;
	}
	A1 = V1;
	if (V1 != FP)
	{
		goto ZZ_201DC_E58;
	}
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_E74;
ZZ_201DC_E58:
	V0 = S1 & 0x1FF;
	V0 <<= 2;
	V0 += 96;
	V0 += S2;
	goto ZZ_201DC_E74;
ZZ_201DC_E6C:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
ZZ_201DC_E74:
	S0 = EMU_ReadU32(V0);
	A0 = S3 - S0;
	V0 = EMU_Invoke(0x8002F6B0,0);
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 += S0;
  V1 = A0 + 4;
	EMU_Write32(S2 + 220,V1); //+ 0xDC
	EMU_Write32(A0,V0);  
}

GOOL_OPERATION GOOL_OP_11(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_C0;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_B0;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_C8;
ZZ_201DC_B0:
	V0 <<= 2;
	V0 += 96;
	V0 += S2;
	goto ZZ_201DC_C8;
ZZ_201DC_C0:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
ZZ_201DC_C8:
	S0 = EMU_ReadU32(V0);
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_2C8;
	}
	A1 = V1;
	if (V1 == FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_2A0;
	}
	V0 = S1 & 0x1FF;
	goto ZZ_201DC_2B8;
  
ZZ_201DC_2A0:
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = V0;
	V0 = V1 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_2D4;
ZZ_201DC_2B8:
	V0 <<= 2;
	V0 += 96;
	V1 = S2 + V0;
	goto ZZ_201DC_2D4;
ZZ_201DC_2C8:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	V1 = V0;
ZZ_201DC_2D4:
	if (!V1)
	{
		return;
	}
	EMU_Write32(V1,S0);
	return;
}

GOOL_OPERATION GOOL_OP_12(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_514;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_504;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_51C;
ZZ_201DC_504:
	V0 <<= 2;
	V0 += 96;
	V0 += S2;
	goto ZZ_201DC_51C;
ZZ_201DC_514:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
ZZ_201DC_51C:
	S0 = EMU_ReadU32(V0);
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_564;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_554;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = V0;
	V0 = V1 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_570;
ZZ_201DC_554:
	V0 <<= 2;
	V0 += 96;
	V1 = S2 + V0;
	goto ZZ_201DC_570;
ZZ_201DC_564:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	V1 = V0;
ZZ_201DC_570:
	if (!V1)
	{
		V0 = S0 < 1;
		return;
	}
	V0 = S0 < 1;
	EMU_Write32(V1,V0);
}

GOOL_OPERATION GOOL_OP_13(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A1 = V1 & 0xFFF;
	V0 = 0xBF0;
	if (A1 != V0)
	{
		V0 = V1 & 0xE00;
		goto ZZ_201DC_66C;
	}
	V0 = V1 & 0xE00;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = V0 - 4;
	EMU_Write32(S2 + 220,V1); //+ 0xDC
	S4 = EMU_ReadU32(V0 - 4); //+ 0xFFFFFFFC
	V1 = V0 - 8;
	EMU_Write32(S2 + 220,V1); //+ 0xDC
	S3 = EMU_ReadU32(V0 - 8); //+ 0xFFFFFFF8
	V1 = S1 & 0xFFF;
	goto ZZ_201DC_6B4;
ZZ_201DC_66C:
	T1 = 0xE00;
	if (V0 != T1)
	{
		S4 = 0x100;
		goto ZZ_201DC_6A4;
	}
	S4 = 0x100;
	if (A1 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_694;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_6AC;
ZZ_201DC_694:
	V0 <<= 2;
	V0 += 96;
	V0 += S2;
	goto ZZ_201DC_6AC;
ZZ_201DC_6A4:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
ZZ_201DC_6AC:
	S3 = EMU_ReadU32(V0);
	V1 = S1 & 0xFFF;
ZZ_201DC_6B4:
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_6F0;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_6E0;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_6F8;
ZZ_201DC_6E0:
	V0 <<= 2;
	V0 += 96;
	V0 += S2;
	goto ZZ_201DC_6F8;
ZZ_201DC_6F0:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
ZZ_201DC_6F8:
	if (!V0)
	{
		return;
	}
	S0 = EMU_ReadU32(V0);
	if ((int32_t)S3 < 0)
	{
		goto ZZ_201DC_738;
	}
	S0 += S4;
	V0 = (int32_t)S0 < (int32_t)S3;
	if (V0)
	{
		V1 = S1 & 0xFFF;
		goto ZZ_201DC_724;
	}
	V1 = S1 & 0xFFF;
	V0 = S4 << 1;
	S0 = V0 - S3;
ZZ_201DC_724:
	if ((int32_t)S0 >= 0)
	{
		S3 = S0;
		goto ZZ_201DC_730;
	}
	S3 = S0;
	S3 = -S3;
ZZ_201DC_730:
	V0 = S1 & 0xE00;
	goto ZZ_201DC_768;
ZZ_201DC_738:
	S0 = S0 - S4;
	V0 = (int32_t)S3 < (int32_t)S0;
	if (V0)
	{
		V1 = -S3;
		goto ZZ_201DC_750;
	}
	V1 = -S3;
	V0 = S4 << 1;
	S0 = V1 - V0;
ZZ_201DC_750:
	if ((int32_t)S0 >= 0)
	{
		V0 = S0;
		goto ZZ_201DC_75C;
	}
	V0 = S0;
	V0 = -V0;
ZZ_201DC_75C:
	S3 = -V0;
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
ZZ_201DC_768:
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_7A4;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_794;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = V0;
	V0 = V1 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_7B0;
ZZ_201DC_794:
	V0 <<= 2;
	V0 += 96;
	V1 = S2 + V0;
	goto ZZ_201DC_7B0;
ZZ_201DC_7A4:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	V1 = V0;
ZZ_201DC_7B0:
	EMU_Write32(V1,S0);
	V1 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = V1 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	EMU_Write32(V1,S3);
}

GOOL_OPERATION GOOL_OP_14(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_278;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_268;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	S0 = V0;
	EMU_Write32(S2 + 220,S0); //+ 0xDC
	goto ZZ_201DC_284;
ZZ_201DC_268:
	V0 <<= 2;
	V0 += 96;
	S0 = S2 + V0;
	goto ZZ_201DC_284;
ZZ_201DC_278:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	S0 = V0;
ZZ_201DC_284:
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_2C8;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_2B8;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = V0;
	V0 = V1 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_2D4;
ZZ_201DC_2B8:
	V0 <<= 2;
	V0 += 96;
	V1 = S2 + V0;
	goto ZZ_201DC_2D4;
ZZ_201DC_2C8:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	V1 = V0;
ZZ_201DC_2D4:
	if (!V1)
	{
		return;
	}
	EMU_Write32(V1,S0);
}

GOOL_OPERATION GOOL_OP_15(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_ED0;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_EC0;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_ED8;
ZZ_201DC_EC0:
	V0 <<= 2;
	V0 += 96;
	V0 += S2;
	goto ZZ_201DC_ED8;
ZZ_201DC_ED0:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
ZZ_201DC_ED8:
	S0 = EMU_ReadU32(V0);
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_F1C;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_F0C;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_F24;
ZZ_201DC_F0C:
	V0 <<= 2;
	V0 += 96;
	V0 += S2;
	goto ZZ_201DC_F24;
ZZ_201DC_F1C:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
ZZ_201DC_F24:
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = EMU_ReadU32(V0);
	V0 = A0 + 4;
	if ((int32_t)S0 >= 0)
	{
		EMU_Write32(S2 + 220,V0); //+ 0xDC
		goto ZZ_201DC_F44;
	}
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = -S0;
	V0 = (int32_t)V1 >> V0;
	EMU_Write32(A0,V0);

ZZ_201DC_F44:
	V0 = V1 << S0;
	EMU_Write32(A0,V0);

}

GOOL_OPERATION GOOL_OP_1626(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_138;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_128;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	S0 = V0;
	EMU_Write32(S2 + 220,S0); //+ 0xDC
	goto ZZ_201DC_144;
ZZ_201DC_128:
	V0 <<= 2;
	V0 += 96;
	S0 = S2 + V0;
	goto ZZ_201DC_144;
ZZ_201DC_138:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	S0 = V0;
ZZ_201DC_144:
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_188;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_178;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	A0 = V0;
	EMU_Write32(S2 + 220,A0); //+ 0xDC
	goto ZZ_201DC_194;
ZZ_201DC_178:
	V0 <<= 2;
	V0 += 96;
	A0 = S2 + V0;
	goto ZZ_201DC_194;
ZZ_201DC_188:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	A0 = V0;
ZZ_201DC_194:
	V1 = S1 >> 24;
	V0 = 0x26;
	if (V1 != V0)
	{
		goto ZZ_201DC_1DC;
	}
	if (!A0)
	{
		return;
	}
	V1 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = V1 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	if (!S0)
	{
		EMU_Write32(V1,A0);
		return;
	}
	EMU_Write32(V1,A0);
	V1 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = V1 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	EMU_Write32(V1,S0);
	return;
ZZ_201DC_1DC:
	if (!A0)
	{
		return;
	}
	if (!S0)
	{
		goto ZZ_201DC_1F8;
	}
	T1 = EMU_ReadU32(S0);
	EMU_Write32(SP + 232,T1); //+ 0xE8
ZZ_201DC_1F8:
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = V0 + 4;
	EMU_Write32(S2 + 220,V1); //+ 0xDC
	V1 = EMU_ReadU32(A0);
	if (!S0)
	{
		EMU_Write32(V0,V1);
		return;
	}
	EMU_Write32(V0,V1);
	V1 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = V1 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	T1 = EMU_ReadU32(SP + 232); //+ 0xE8
	EMU_Write32(V1,T1);
}

GOOL_OPERATION GOOL_OP_17(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_5C4;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_5B4;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_5CC;
ZZ_201DC_5B4:
	V0 <<= 2;
	V0 += 96;
	V0 += S2;
	goto ZZ_201DC_5CC;
ZZ_201DC_5C4:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
ZZ_201DC_5CC:
	S0 = EMU_ReadU32(V0);
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_614;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_604;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = V0;
	V0 = V1 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_620;
ZZ_201DC_604:
	V0 <<= 2;
	V0 += 96;
	V1 = S2 + V0;
	goto ZZ_201DC_620;
ZZ_201DC_614:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	V1 = V0;
ZZ_201DC_620:
	if (!V1)
	{
		V0 = ~S0;
		return;
	}
	V0 = ~S0;
	EMU_Write32(V1,V0);
}

GOOL_OPERATION GOOL_OP_18(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 14;
	V1 &= 0x3F;
	V0 = 0x1F;
	if (V1 != V0)
	{
		A0 = V1;
		goto ZZ_201DC_490;
	}
	A0 = V1;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	T0 = V0;
	V0 = T0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_49C;
ZZ_201DC_490:
	V0 = A0 << 2;
	V0 += 96;
	T0 = S2 + V0;
ZZ_201DC_49C:
	A0 = S1 & 0x3FFF;
	V0 = 0x3FFF;
	if (A0 == V0)
	{
		goto ZZ_201DC_4C8;
	}
	V0 = EMU_ReadU32(S2 + 32); //+ 0x20
	V1 = EMU_ReadU32(V0 + 20); //+ 0x14
	V0 = A0 << 2;
	V0 += V1;
	EMU_Write32(T0,V0);
	return;
ZZ_201DC_4C8:
	EMU_Write32(T0,R0);
}

GOOL_OPERATION GOOL_OP_19(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_3EC;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_3DC;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_3F4;
ZZ_201DC_3DC:
	V0 <<= 2;
	V0 += 96;
	V0 += S2;
	goto ZZ_201DC_3F4;
ZZ_201DC_3EC:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
ZZ_201DC_3F4:
	S0 = EMU_ReadU32(V0);
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_43C;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_42C;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = V0;
	V0 = V1 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_448;
ZZ_201DC_42C:
	V0 <<= 2;
	V0 += 96;
	V1 = S2 + V0;
	goto ZZ_201DC_448;
ZZ_201DC_43C:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	V1 = V0;
ZZ_201DC_448:
	if (!V1)
	{
		return;
	}
	if ((int32_t)S0 >= 0)
	{
		V0 = S0;
		goto ZZ_201DC_45C;
	}
	V0 = S0;
	V0 = -V0;
ZZ_201DC_45C:
	EMU_Write32(V1,V0);
}

GOOL_OPERATION GOOL_OP_1A(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	A0 = 0x1F0000;
	A0 |= 0xFFFF;
	A0 &= S1;
	A1 = R0;
	V0 = EMU_Invoke(0x8001FDC4,0);
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = A0 + 4;
	EMU_Write32(S2 + 220,V1); //+ 0xDC
  EMU_Write32(A0,V0);
}

GOOL_OPERATION GOOL_OP_1B(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_1870;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_1860;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_1878;
ZZ_201DC_1860:
	V0 <<= 2;
	V0 += 96;
	V0 += S2;
	goto ZZ_201DC_1878;
ZZ_201DC_1870:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
ZZ_201DC_1878:
	S0 = EMU_ReadU32(V0);
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_18BC;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_18AC;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_18C4;
ZZ_201DC_18AC:
	V0 <<= 2;
	V0 += 96;
	V0 += S2;
	goto ZZ_201DC_18C4;
ZZ_201DC_18BC:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
ZZ_201DC_18C4:
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	A1 = EMU_ReadU32(V0);
	V0 = A0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 31740); //+ 0xFFFF8404
	V1 = EMU_ReadU32(V0 + 132); //+ 0x84
	V0 = V1 < 103;
	if (V0)
	{
		EMU_SMultiply(S0,V1);
		goto ZZ_201DC_18FC;
	}
	EMU_SMultiply(S0,V1);
	V1 = 0x66;
	EMU_SMultiply(S0,V1);
ZZ_201DC_18FC:
	V0 = LO;
	if ((int32_t)V0 >= 0)
	{
		goto ZZ_201DC_190C;
	}
	V0 += 1023;
ZZ_201DC_190C:
	V0 = (int32_t)V0 >> 10;
	V0 += A1;
	EMU_Write32(A0,V0);
}

GOOL_OPERATION GOOL_OP_1C(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
// ZZ_201DC_1D0C:
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_1D50;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_1D40;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	S3 = V0;
	EMU_Write32(S2 + 220,S3); //+ 0xDC
	goto ZZ_201DC_1D5C;
ZZ_201DC_1D40:
	V0 <<= 2;
	V0 += 96;
	S3 = S2 + V0;
	goto ZZ_201DC_1D5C;
ZZ_201DC_1D50:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	S3 = V0;
ZZ_201DC_1D5C:
	V0 = S1 << 12;
	A2 = (int32_t)V0 >> 27;
	V0 = S1 >> 20;
	V1 = V0 & 0xF;
	V0 = V1 < 16;
	if (!V0)
	{
		V0 = V1 << 2;
		return;
	}
	V0 = V1 << 2;
	AT = 0x80010000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 1888); //+ 0x760
	if (V1 == 0) { goto ZZ_201DC_1D90; }
	if (V1 == 1) { goto ZZ_201DC_1DD0; }
	if (V1 == 2) { goto ZZ_201DC_1EB8; }
	if (V1 == 3) { goto ZZ_201DC_1F18; }
	if (V1 == 4) { goto ZZ_201DC_1F50; }
	if (V1 == 5) { goto ZZ_201DC_1E6C; }
  if (V1 == 6) { goto ZZ_201DC_1DD0; }
	if (V1 == 7) { goto ZZ_201DC_1F88; }
	if (V1 == 8) { goto ZZ_201DC_2090; }
	if (V1 == 9) { goto ZZ_201DC_2418; }
	if (V1 == 10) { goto ZZ_201DC_20F0; }
	if (V1 == 11) { goto ZZ_201DC_2318; }
	if (V1 == 12) { goto ZZ_201DC_2464; }
	if (V1 == 13) { goto ZZ_201DC_26F8; }
	if (V1 == 14) { goto ZZ_201DC_280C; }
	if (V1 == 15) { goto ZZ_201DC_28A8; }
ZZ_201DC_1D90:
	if (!S3)
	{
		return;
	}
	V0 = EMU_ReadU32(S3);
	if (!V0)
	{
		goto ZZ_201DC_27F4;
	}
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = A0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V1 = EMU_ReadU32(S3);
	V0 = A2 << 2;
	V0 += V1;
	V0 = EMU_ReadU32(V0);
	EMU_Write32(A0,V0);
	return;
ZZ_201DC_1DD0:
	V0 = S1 >> 20;
	V0 &= 0xF;
	V1 = 0x6;
	if (V0 != V1)
	{
		A0 = S2 + 128;
		goto ZZ_201DC_1DE8;
	}
	A0 = S2 + 128;
	A0 = S3;
ZZ_201DC_1DE8:
	V0 = S1 >> 10;
	V0 &= 0x1C;
	V0 += S2;
	V1 = EMU_ReadU32(V0 + 96); //+ 0x60
	V0 = A2 & 0x2;
	if (!V0)
	{
		A1 = V1 + 128;
		goto ZZ_201DC_1E38;
	}
	A1 = V1 + 128;
	V0 = EMU_ReadU32(A0);
	EMU_Write32(SP + 28,R0); //+ 0x1C
	EMU_Write32(SP + 24,V0); //+ 0x18
	V0 = EMU_ReadU32(A0 + 8); //+ 0x8
	EMU_Write32(SP + 32,V0); //+ 0x20
	V0 = EMU_ReadU32(V1 + 128); //+ 0x80
	A1 = SP + 40;
	EMU_Write32(SP + 44,R0); //+ 0x2C
	EMU_Write32(SP + 40,V0); //+ 0x28
	V0 = EMU_ReadU32(V1 + 136); //+ 0x88
	A0 = SP + 24;
	EMU_Write32(SP + 48,V0); //+ 0x30
ZZ_201DC_1E38:
	V0 = A2 & 0x1;
	if (!V0)
	{
		goto ZZ_201DC_1E58;
	}
 //ZZ_201DC_1E4C
	V0 = EMU_Invoke(0x80029D30,0);
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = A0 + 4;
  EMU_Write32(S2 + 220,V1); //+ 0xDC
	EMU_Write32(A0,V0);
  return;
ZZ_201DC_1E58:
 //ZZ_201DC_1E60
	V0 = EMU_Invoke(0x80029B90,0);
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = A0 + 4;
  EMU_Write32(S2 + 220,V1); //+ 0xDC
	EMU_Write32(A0,V0);
  return;
ZZ_201DC_1E6C:
	V0 = S1 >> 10;
	V0 &= 0x1C;
	V0 += S2;
	A1 = EMU_ReadU32(V0 + 96); //+ 0x60
	A0 = S2 + 128;
	A1 += 128;
	V0 = EMU_Invoke(0x80029E10,0);
	V1 = EMU_ReadU32(S2 + 144); //+ 0x90
	V1 &= 0xFFF;
	A0 = V0 - V1;
	if ((int32_t)A0 >= 0)
	{
		V0 = A0;
		goto ZZ_201DC_1EA4;
	}
	V0 = A0;
	V0 = -V0;
ZZ_201DC_1EA4:
	V0 = (int32_t)V0 < 2048;
	if (V0)
	{
		V0 = -A0;
		goto ZZ_201DC_2078;
	}
	V0 = -A0;
	A0 = V0 & 0xFFF;
	goto ZZ_201DC_2078;
ZZ_201DC_1EB8:
	V1 = 0x200000;
	V0 = EMU_ReadU32(S2 + 204); //+ 0xCC
	V1 |= 0x200;
	V0 &= V1;
	if (V0)
	{
		V0 = S1 >> 10;
		goto ZZ_201DC_1EF4;
	}
	V0 = S1 >> 10;
	V0 &= 0x1C;
	V0 += S2;
	A0 = EMU_ReadU32(V0 + 96); //+ 0x60
	A1 = S3;
	A0 += 128;
	V0 = EMU_Invoke(0x80029E10,0);
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = A0 + 4;
  EMU_Write32(S2 + 220,V1); //+ 0xDC
	EMU_Write32(A0,V0);
  return;
ZZ_201DC_1EF4:
	V0 &= 0x1C;
	V0 += S2;
	A0 = EMU_ReadU32(V0 + 96); //+ 0x60
	A1 = S3;
	A0 += 128;
	V0 = EMU_Invoke(0x80029E48,0);
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = A0 + 4;
  EMU_Write32(S2 + 220,V1); //+ 0xDC
	EMU_Write32(A0,V0);
  return;
ZZ_201DC_1F18:
	V1 = S1 >> 10;
	V1 &= 0x1C;
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 += S2;
	V0 = A0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = EMU_ReadU32(S3);
	V1 = EMU_ReadU32(V1 + 96); //+ 0x60
	V0 >>= 8;
	V0 <<= 2;
	V0 += V1;
	V0 = EMU_ReadU32(V0 + 96); //+ 0x60
	EMU_Write32(A0,V0);
	return;
ZZ_201DC_1F50:
	V0 = S1 >> 10;
	V0 &= 0x1C;
	V0 += S2;
	A1 = EMU_ReadU32(V0 + 96); //+ 0x60
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = EMU_ReadU32(S3);
	V1 = A0 - 4;
	V0 >>= 8;
	V0 <<= 2;
	EMU_Write32(S2 + 220,V1); //+ 0xDC
	V1 = EMU_ReadU32(A0 - 4); //+ 0xFFFFFFFC
	V0 += A1;
	EMU_Write32(V0 + 96,V1); //+ 0x60
	return;
ZZ_201DC_1F88:
	if (!S3)
	{
		return;
	}
	V0 = EMU_ReadU32(S3);
	if (!V0)
	{
		V0 >>= 8;
		goto ZZ_201DC_27F4;
	}
	V0 >>= 8;
	V0 <<= 2;
	T1 = 0x80060000;
	T1 -= 168;
	V0 += T1;
	V0 = EMU_ReadU32(V0);
	V0 &= 0x1;
	if (!V0)
	{
		S4 = 0x3;
		goto ZZ_201DC_27F4;
	}
	S4 = 0x3;
	V1 = S4 << 3;
ZZ_201DC_1FC8:
	S4 += 1;
	V0 = 0x80060000;
	V0 += 3512;
	S0 = V1 + V0;
	S1 = EMU_ReadU32(S3);
	if (S0)
	{
		A1 = R0;
		goto ZZ_201DC_1FEC;
	}
	A1 = R0;
	A0 = R0;
	goto ZZ_201DC_2068;
ZZ_201DC_1FEC:
	V0 = EMU_ReadU32(S0);
	T1 = 0x2;
	if (V0 == T1)
	{
		A0 = S0;
		goto ZZ_201DC_2020;
	}
	A0 = S0;
	A1 = S1;
	V0 = EMU_Invoke(0x8001BA90,0);
	A1 = V0;
	if (A1)
	{
		A0 = A1;
		goto ZZ_201DC_2068;
	}
	A0 = A1;
	V0 = EMU_ReadU32(S0);
	T1 = 0x2;
	if (V0 != T1)
	{
		goto ZZ_201DC_202C;
	}
ZZ_201DC_2020:
	A0 = EMU_ReadU32(S0 + 4); //+ 0x4
	goto ZZ_201DC_2054;
ZZ_201DC_202C:
	A0 = EMU_ReadU32(S0 + 108); //+ 0x6C
	goto ZZ_201DC_2054;
ZZ_201DC_2038:
	A1 = 0x80020000;
	A1 -= 17776;
	S0 = EMU_ReadU32(A0 + 104); //+ 0x68
	A2 = S1;
	V0 = EMU_Invoke(0x8001B788,0);
	A1 = V0;
	A0 = S0;
ZZ_201DC_2054:
	if (!A0)
	{
		goto ZZ_201DC_2064;
	}
	if (!A1)
	{
		goto ZZ_201DC_2038;
	}
ZZ_201DC_2064:
	A0 = A1;
ZZ_201DC_2068:
	if (A0)
	{
		V0 = (int32_t)S4 < 5;
		goto ZZ_201DC_2078;
	}
	V0 = (int32_t)S4 < 5;
	if (V0)
	{
		V1 = S4 << 3;
		goto ZZ_201DC_1FC8;
	}
	V1 = S4 << 3;
ZZ_201DC_2078:
	V1 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = V1 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	EMU_Write32(V1,A0);
	return;
ZZ_201DC_2090:
	if (!S3)
	{
		return;
	}
	if (!A2)
	{
		A0 = -3;
		goto ZZ_201DC_20C4;
	}
	A0 = -3;
	V0 = EMU_ReadU32(S3);
	T1 = 0x80060000;
	T1 -= 168;
	V0 >>= 8;
	V0 <<= 2;
	V0 += T1;
	V1 = EMU_ReadU32(V0);
	V1 &= A0;
	goto ZZ_201DC_2310;
ZZ_201DC_20C4:
	V0 = EMU_ReadU32(S3);
	T1 = 0x80060000;
	T1 -= 168;
	V0 >>= 8;
	V0 <<= 2;
	V0 += T1;
	V1 = EMU_ReadU32(V0);
	V1 |= 0x2;
	EMU_Write32(V0,V1);
	return;
ZZ_201DC_20F0:
	if (!S3)
	{
		V0 = A2 < 10;
		return;
	}
	V0 = A2 < 10;
	if (!V0)
	{
		V0 = A2 << 2;
		return;
	}
	V0 = A2 << 2;
	AT = 0x80010000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 1952); //+ 0x7A0
	if (A2 == 0) { goto ZZ_201DC_2118; }
	if (A2 == 1) { goto ZZ_201DC_213C; }
	if (A2 == 2) { goto ZZ_201DC_21DC; }
	if (A2 == 3) { goto ZZ_201DC_2294; }
	if (A2 == 4) { goto ZZ_201DC_2170; }
	if (A2 == 5) { goto ZZ_201DC_2200; }
	if (A2 == 6) { return; }
  if (A2 == 7) { return; }
	if (A2 == 8) { goto ZZ_201DC_22EC; }
	if (A2 == 9) { goto ZZ_201DC_22C0; }
ZZ_201DC_2118:
	V0 = EMU_ReadU32(S3);
	T1 = 0x80060000;
	T1 -= 168;
	V0 >>= 8;
	V0 <<= 2;
	V0 += T1;
	V1 = EMU_ReadU32(V0);
	A0 = -5;
	goto ZZ_201DC_230C;
ZZ_201DC_213C:
	V0 = EMU_ReadU32(S3);
	T1 = 0x80060000;
	T1 -= 168;
	V0 >>= 8;
	V0 <<= 2;
	V0 += T1;
	V1 = EMU_ReadU32(V0);
	V1 |= 0x4;
	EMU_Write32(V0,V1);
	return;
ZZ_201DC_2168:
	EMU_Write16(A1,V0);
	goto ZZ_201DC_21DC;
ZZ_201DC_2170:
	A1 = 0x80060000;
	A1 -= 7352;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 15044); //+ 0xFFFFC53C
	V1 = EMU_ReadU32(S3);
	A0 = EMU_ReadU16(A1);
	V0 = EMU_ReadU16(V0 + 4); //+ 0x4
	V1 = (int32_t)V1 >> 8;
	V0 <<= 9;
	if (!A0)
	{
		V1 |= V0;
		goto ZZ_201DC_21DC;
	}
	V1 |= V0;
	V1 &= 0xFFFF;
	V0 = EMU_ReadU16(A1);
ZZ_201DC_21A4:
	if (V0 != V1)
	{
		goto ZZ_201DC_21C8;
	}
	V0 = EMU_ReadU16(A1 + 2); //+ 0x2
	if (V0)
	{
		V0 = 0x1;
		goto ZZ_201DC_2168;
	}
	V0 = 0x1;
	EMU_Write16(A1,R0);
	goto ZZ_201DC_21DC;
ZZ_201DC_21C8:
	A1 += 2;
	V0 = EMU_ReadU16(A1);
	if (V0)
	{
		goto ZZ_201DC_21A4;
	}
ZZ_201DC_21DC:
	V0 = EMU_ReadU32(S3);
	T1 = 0x80060000;
	T1 -= 168;
	V0 >>= 8;
	V0 <<= 2;
	V0 += T1;
	V1 = EMU_ReadU32(V0);
	A0 = -9;
	goto ZZ_201DC_230C;
ZZ_201DC_2200:
	A2 = 0x80060000;
	A2 -= 7352;
	A3 = R0;
	A1 = EMU_ReadU32(S3);
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 15044); //+ 0xFFFFC53C
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 30996); //+ 0x7914
	A1 = (int32_t)A1 >> 8;
	V1 = EMU_ReadU16(V0 + 4); //+ 0x4
	V0 = EMU_ReadU32(A0 + 16); //+ 0x10
	V1 <<= 9;
	V0 = EMU_ReadU32(V0 + 764); //+ 0x2FC
	V0 &= 0x2000;
	if (V0)
	{
		A1 |= V1;
		goto ZZ_201DC_2294;
	}
	A1 |= V1;
	V0 = EMU_ReadU16(A2);
	if (!V0)
	{
		goto ZZ_201DC_2284;
	}
	V1 = A1 & 0xFFFF;
	A0 = 0x1;
ZZ_201DC_225C:
	if (V0 == V1)
	{
		goto ZZ_201DC_2294;
	}
	if (V0 != A0)
	{
		goto ZZ_201DC_2270;
	}
	A3 = A2;
ZZ_201DC_2270:
	A2 += 2;
	V0 = EMU_ReadU16(A2);
	if (V0)
	{
		goto ZZ_201DC_225C;
	}
ZZ_201DC_2284:
	if (A3)
	{
		goto ZZ_201DC_2290;
	}
	A3 = A2;
ZZ_201DC_2290:
	EMU_Write16(A3,A1);
ZZ_201DC_2294:
	V0 = EMU_ReadU32(S3);
	T1 = 0x80060000;
	T1 -= 168;
	V0 >>= 8;
	V0 <<= 2;
	V0 += T1;
	V1 = EMU_ReadU32(V0);
	V1 |= 0x8;
	EMU_Write32(V0,V1);
	return;
ZZ_201DC_22C0:
	V0 = EMU_ReadU32(S3);
	T1 = 0x80060000;
	T1 -= 168;
	V0 >>= 8;
	V0 <<= 2;
	V0 += T1;
	V1 = EMU_ReadU32(V0);
	V1 |= 0x1;
	EMU_Write32(V0,V1);
	return;
ZZ_201DC_22EC:
	V0 = EMU_ReadU32(S3);
	T1 = 0x80060000;
	T1 -= 168;
	V0 >>= 8;
	V0 <<= 2;
	V0 += T1;
	V1 = EMU_ReadU32(V0);
	A0 = -2;
ZZ_201DC_230C:
	V1 &= A0;
ZZ_201DC_2310:
	EMU_Write32(V0,V1);
	return;
ZZ_201DC_2318:
	T1 = 0x2;
	if (A2 == T1)
	{
		V0 = (int32_t)A2 < 3;
		goto ZZ_201DC_2398;
	}
	V0 = (int32_t)A2 < 3;
	if (!V0)
	{
		V0 = 0x1;
		goto ZZ_201DC_233C;
	}
	V0 = 0x1;
	if (A2 == V0)
	{
		goto ZZ_201DC_2350;
	}
	return;
ZZ_201DC_233C:
	V0 = 0x3;
	if (A2 == V0)
	{
		goto ZZ_201DC_23D8;
	}
	return;
ZZ_201DC_2350:
	V1 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = V1 + 4;
	if (!S3)
	{
		EMU_Write32(S2 + 220,V0); //+ 0xDC
		goto ZZ_201DC_2804;
	}
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = EMU_ReadU32(S3);
	T1 = 0x80060000;
	T1 -= 168;
	V0 >>= 8;
	V0 <<= 2;
	V0 += T1;
	V0 = EMU_ReadU32(V0);
	V0 >>= 1;
	V0 ^= 0x1;
	V0 &= 0x1;
	EMU_Write32(V1,V0);
	return;
ZZ_201DC_2398:
	V1 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = V1 + 4;
	if (!S3)
	{
		EMU_Write32(S2 + 220,V0); //+ 0xDC
		goto ZZ_201DC_2804;
	}
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = EMU_ReadU32(S3);
	T1 = 0x80060000;
	T1 -= 168;
	V0 >>= 8;
	V0 <<= 2;
	V0 += T1;
	V0 = EMU_ReadU32(V0);
	V0 &= 0x4;
	EMU_Write32(V1,V0);
	return;
ZZ_201DC_23D8:
	V1 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = V1 + 4;
	if (!S3)
	{
		EMU_Write32(S2 + 220,V0); //+ 0xDC
		goto ZZ_201DC_2804;
	}
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = EMU_ReadU32(S3);
	T1 = 0x80060000;
	T1 -= 168;
	V0 >>= 8;
	V0 <<= 2;
	V0 += T1;
	V0 = EMU_ReadU32(V0);
	V0 &= 0x8;
	EMU_Write32(V1,V0);
	return;
ZZ_201DC_2418:
	if (S3)
	{
		goto ZZ_201DC_2430;
	}
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 30996); //+ 0x7914
	V0 = (int32_t)V1 < -254;
	goto ZZ_201DC_2448;
ZZ_201DC_2430:
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 30996); //+ 0x7914
	A1 = S3;
	V0 = EMU_Invoke(0x80026DD4,0);
	V1 = V0;
	V0 = (int32_t)V1 < -254;
ZZ_201DC_2448:
	if (!V0)
	{
		V0 = S1 >> 10;
		return;
	}
	V0 = S1 >> 10;
	V0 &= 0x1C;
	V0 += S2;
	V0 = EMU_ReadU32(V0 + 96); //+ 0x60
	EMU_Write32(V0 + 40,V1); //+ 0x28
	return;
ZZ_201DC_2464:
	V0 = A2 < 12;
	if (!V0)
	{
		V0 = A2 << 2;
		return;
	}
	V0 = A2 << 2;
	AT = 0x80010000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 1992); //+ 0x7C8
	if (A2 == 0) { goto ZZ_201DC_2488; }
	if (A2 == 1) { goto ZZ_201DC_24A4; }
	if (A2 == 2) { goto ZZ_201DC_24BC; }
	if (A2 == 3) { goto ZZ_201DC_25A4; }
	if (A2 == 4) { goto ZZ_201DC_25B8; }
	if (A2 == 5) { goto ZZ_201DC_25CC; }
	if (A2 == 6) { goto ZZ_201DC_25DC; }
	if (A2 == 7) { goto ZZ_201DC_25F0; }
	if (A2 == 8) { goto ZZ_201DC_267C; }
	if (A2 == 9) { goto ZZ_201DC_26B8; }
	if (A2 == 10) { goto ZZ_201DC_26D4; }
	if (A2 == 11) { goto ZZ_201DC_26E8; }
ZZ_201DC_2488:
	A0 = S2;
	A1 = 0x80050000;
	A1 += 31092;
	A2 = R0;
	V0 = EMU_Invoke(0x80026460,0);
	return;
ZZ_201DC_24A4:
	A0 = 0x80050000;
	A0 += 31092;
 //ZZ_201DC_24B4
	V0 = EMU_Invoke(0x80026650,0);
	return;
ZZ_201DC_24BC:
	V1 = 0x80060000;
	V1 += 3512;
	V0 = EMU_ReadU32(S3);
	A0 = EMU_ReadU32(S2 + 100); //+ 0x64
	V0 >>= 8;
	V0 <<= 3;
	if (!A0)
	{
		A1 = V0 + V1;
		goto ZZ_201DC_255C;
	}
	A1 = V0 + V1;
	V0 = EMU_ReadU32(A0);
	T1 = 0x2;
	if (V0 != T1)
	{
		goto ZZ_201DC_24F8;
	}
	V1 = EMU_ReadU32(A0 + 4); //+ 0x4
	goto ZZ_201DC_24FC;
ZZ_201DC_24F8:
	V1 = EMU_ReadU32(A0 + 108); //+ 0x6C
ZZ_201DC_24FC:
	if (V1 != S2)
	{
		T1 = 0x2;
		goto ZZ_201DC_2534;
	}
	T1 = 0x2;
	V0 = EMU_ReadU32(A0);
	if (V0 != T1)
	{
		V1 = A0 + 108;
		goto ZZ_201DC_251C;
	}
	V1 = A0 + 108;
	V1 = A0 + 4;
ZZ_201DC_251C:
	V0 = EMU_ReadU32(S2 + 104); //+ 0x68
	EMU_Write32(V1,V0);
	goto ZZ_201DC_255C;
ZZ_201DC_2528:
	if (!V1)
	{
		return;
	}
	V1 = EMU_ReadU32(V1 + 104); //+ 0x68
ZZ_201DC_2534:
	if (!V1)
	{
		// goto ZZ_201DC_38;
    return;
	}
	V0 = EMU_ReadU32(V1 + 104); //+ 0x68
	if (V0 != S2)
	{
		goto ZZ_201DC_2528;
	}
	V0 = EMU_ReadU32(S2 + 104); //+ 0x68
	EMU_Write32(V1 + 104,V0); //+ 0x68
ZZ_201DC_255C:
	EMU_Write32(S2 + 100,A1); //+ 0x64
	V0 = EMU_ReadU32(A1);
	T1 = 0x2;
	if (V0 != T1)
	{
		goto ZZ_201DC_257C;
	}
	V0 = EMU_ReadU32(A1 + 4); //+ 0x4
	EMU_Write32(S2 + 104,V0); //+ 0x68
	goto ZZ_201DC_2588;
ZZ_201DC_257C:
	V0 = EMU_ReadU32(A1 + 108); //+ 0x6C
	EMU_Write32(S2 + 104,V0); //+ 0x68
ZZ_201DC_2588:
	V0 = EMU_ReadU32(A1);
	T1 = 0x2;
	if (V0 != T1)
	{
		V0 = A1 + 108;
		goto ZZ_201DC_259C;
	}
	V0 = A1 + 108;
	V0 = A1 + 4;
ZZ_201DC_259C:
	EMU_Write32(V0,S2);
	return;
ZZ_201DC_25A4:
	A0 = EMU_ReadU32(S3);
 //ZZ_201DC_25B0
	V0 = EMU_Invoke(0x8002FDD8,0);
	return;
ZZ_201DC_25B8:
	V1 = EMU_ReadU32(S3);
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 31000); //+ 0x7918
	EMU_Write32(V1 + 40,V0); //+ 0x28
	return;
ZZ_201DC_25CC:
 //ZZ_201DC_25D4
	V0 = EMU_Invoke(0x800313B4,0);
	return;
ZZ_201DC_25DC:
	A0 = EMU_ReadU32(S3);
 //ZZ_201DC_25E8
	V0 = EMU_Invoke(0x800313C4,0);
	return;
ZZ_201DC_25F0:
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 30996); //+ 0x7914
	if (!A0)
	{
		return;
	}
	S6 = EMU_ReadU32(A0 + 16); //+ 0x10
	V0 = EMU_ReadU32(S6 + 528); //+ 0x210
	if ((int32_t)V0 <= 0)
	{
		S3 = R0;
		return;
	}
	S3 = R0;
	S7 = 0x80060000;
	S7 += 3512;
	S4 = 0x214;
ZZ_201DC_2628:
	A0 = S6 + S4;
	V0 = EMU_Invoke(0x80015A98,0);
	S5 = V0;
	S1 = R0;
	S0 = S7;
ZZ_201DC_263C:
	A0 = S0;
	A1 = 0x80020000;
	A1 -= 12004;
	A2 = S5;
	V0 = EMU_Invoke(0x8001B92C,0);
	S1 += 1;
	V0 = (int32_t)S1 < 8;
	if (V0)
	{
		S0 += 8;
		goto ZZ_201DC_263C;
	}
	S0 += 8;
	V0 = EMU_ReadU32(S6 + 528); //+ 0x210
	S3 += 1;
	V0 = (int32_t)S3 < (int32_t)V0;
	if (V0)
	{
		S4 += 4;
		goto ZZ_201DC_2628;
	}
	S4 += 4;
	return;
ZZ_201DC_267C:
	V0 = S1 >> 10;
	V0 &= 0x1C;
	V0 += S2;
	S0 = EMU_ReadU32(V0 + 96); //+ 0x60
	A1 = S3;
	A0 = S0 + 128;
	V0 = EMU_Invoke(0x80029DB0,0);
	V1 = EMU_ReadU32(S0 + 132); //+ 0x84
	A0 = EMU_ReadU32(S3 + 4); //+ 0x4
	A1 = V0;
	A0 = V1 - A0;
	V0 = EMU_Invoke(0x8004301C,0);
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = A0 + 4;
  EMU_Write32(S2 + 220,V1); //+ 0xDC
	EMU_Write32(A0,V0);
  return;
ZZ_201DC_26B8:
	V0 = EMU_ReadU32(S3);
	V0 >>= 8;
	AT = 0x80050000;
	EMU_Write32(AT + 26388,V0); //+ 0x6714
	return;
ZZ_201DC_26D4:
	A0 = EMU_ReadU32(S3);
	A0 >>= 8;
	V0 = EMU_Invoke(0x80013798,0);
	return;
ZZ_201DC_26E8:
	A0 = 0x1;
	V0 = EMU_Invoke(0x80026200,0);
	return;
ZZ_201DC_26F8:
	V1 = 0x7FFF0000;
	V0 = S1 >> 15;
	V0 &= 0x1F;
	EMU_Write32(SP + 56,V0); //+ 0x38
	V0 = S1 >> 10;
	V0 &= 0x1C;
	V0 += S2;
	V0 = EMU_ReadU32(V0 + 96); //+ 0x60
	V1 |= 0xFFFF;
	EMU_Write32(SP + 68,V1); //+ 0x44
	V1 = R0;
	EMU_Write32(SP + 64,R0); //+ 0x40
	EMU_Write32(SP + 60,V0); //+ 0x3C
	V0 = EMU_ReadU32(S3);
	A0 = 0x80060000;
	A0 += 3544;
	if (!A0)
	{
		EMU_Write32(SP + 72,V0); //+ 0x48
		goto ZZ_201DC_27C8;
	}
	EMU_Write32(SP + 72,V0); //+ 0x48
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 3544); //+ 0xDD8
	T1 = 0x2;
	if (V0 == T1)
	{
		goto ZZ_201DC_277C;
	}
	A1 = SP + 56;
	V0 = EMU_Invoke(0x8001BAB0,0);
	V1 = V0;
	if (V1)
	{
		T1 = 0x2;
		goto ZZ_201DC_27C8;
	}
	T1 = 0x2;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 3544); //+ 0xDD8
	if (V0 != T1)
	{
		goto ZZ_201DC_278C;
	}
ZZ_201DC_277C:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 3548); //+ 0xDDC
	goto ZZ_201DC_27B8;
ZZ_201DC_278C:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 3652); //+ 0xE44
	goto ZZ_201DC_27B8;
ZZ_201DC_279C:
	A1 = 0x80020000;
	A1 -= 17744;
	S0 = EMU_ReadU32(A0 + 104); //+ 0x68
	A2 = SP + 56;
	V0 = EMU_Invoke(0x8001B788,0);
	V1 = V0;
	A0 = S0;
ZZ_201DC_27B8:
	if (!A0)
	{
		goto ZZ_201DC_27C8;
	}
	if (!V1)
	{
		goto ZZ_201DC_279C;
	}
ZZ_201DC_27C8:
	V0 = EMU_ReadU32(SP + 64); //+ 0x40
	if (!V0)
	{
		goto ZZ_201DC_27F4;
	}
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = V0 + 4;
	EMU_Write32(S2 + 220,V1); //+ 0xDC
	V1 = EMU_ReadU32(SP + 64); //+ 0x40
	EMU_Write32(V0,V1);
	return;
ZZ_201DC_27F4:
	V1 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = V1 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
ZZ_201DC_2804:
	EMU_Write32(V1,R0);
	return;
ZZ_201DC_280C:
	V0 = S1 >> 10;
	V0 &= 0x1C;
	V0 += S2;
	A1 = EMU_ReadU32(V0 + 96); //+ 0x60
	V0 = EMU_ReadU32(A1 + 128); //+ 0x80
	V1 = EMU_ReadU32(A1 + 8); //+ 0x8
	V0 += V1;
	EMU_Write32(SP + 80,V0); //+ 0x50
	V0 = EMU_ReadU32(A1 + 132); //+ 0x84
	V1 = EMU_ReadU32(A1 + 12); //+ 0xC
	V0 += V1;
	EMU_Write32(SP + 84,V0); //+ 0x54
	V0 = EMU_ReadU32(A1 + 136); //+ 0x88
	V1 = EMU_ReadU32(A1 + 16); //+ 0x10
	V0 += V1;
	EMU_Write32(SP + 88,V0); //+ 0x58
	V0 = EMU_ReadU32(A1 + 128); //+ 0x80
	V1 = EMU_ReadU32(A1 + 20); //+ 0x14
	V0 += V1;
	EMU_Write32(SP + 92,V0); //+ 0x5C
	V0 = EMU_ReadU32(A1 + 132); //+ 0x84
	V1 = EMU_ReadU32(A1 + 24); //+ 0x18
	A0 = S3;
	V0 += V1;
	EMU_Write32(SP + 96,V0); //+ 0x60
	V0 = EMU_ReadU32(A1 + 136); //+ 0x88
	V1 = EMU_ReadU32(A1 + 28); //+ 0x1C
	A1 = SP + 80;
	V0 += V1;
	EMU_Write32(SP + 100,V0); //+ 0x64
	V0 = EMU_Invoke(0x80026B80,0);
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = A0 + 4;
  EMU_Write32(S2 + 220,V1); //+ 0xDC
	EMU_Write32(A0,V0);
  return;
ZZ_201DC_28A8:
	A1 = EMU_ReadU32(S3);
	A0 = A2;
	V0 = EMU_Invoke(0x8003D4EC,0);
	EMU_Write32(S2 + 244,V0); //+ 0xF4
	return;
}

GOOL_OPERATION GOOL_OP_1D(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_195C;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_194C;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_1964;
ZZ_201DC_194C:
	V0 <<= 2;
	V0 += 96;
	V0 += S2;
	goto ZZ_201DC_1964;
ZZ_201DC_195C:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
ZZ_201DC_1964:
	S3 = EMU_ReadU32(V0);
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_19AC;
	}
	A1 = V1;
	if (V1 != FP)
	{
		goto ZZ_201DC_1998;
	}
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_19B4;
ZZ_201DC_1998:
	V0 = S1 & 0x1FF;
	V0 <<= 2;
	V0 += 96;
	V0 += S2;
	goto ZZ_201DC_19B4;
ZZ_201DC_19AC:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
ZZ_201DC_19B4:
	A0 = EMU_ReadU32(V0);
	A0 <<= 11;
	EMU_SDivide(A0,S3);
	if (S3)
	{
		goto ZZ_201DC_19D0;
	}
	EMU_Break(7168);
ZZ_201DC_19D0:
	AT = -1;
	if (S3 != AT)
	{
		AT = 0x80000000;
		goto ZZ_201DC_19E8;
	}
	AT = 0x80000000;
	if (A0 != AT)
	{
		goto ZZ_201DC_19E8;
	}
	EMU_Break(6144);
ZZ_201DC_19E8:
	A0 = LO;
	S0 = 0xFFFF;
	S0 = (int32_t)S0 < (int32_t)S3;
	S0 <<= 1;
	A0 -= 1024;
	V0 = EMU_Invoke(0x8003905C,0);
	V0 += 4096;
	V0 = (int32_t)V0 >> S0;
	EMU_SMultiply(V0,S3);
	V1 = 0xD;
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = V1 - S0;
	V0 = A0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = LO;
	V0 = (int32_t)V0 >> V1;
	EMU_Write32(A0,V0);

}

GOOL_OPERATION GOOL_OP_1E(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_1A70;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_1A60;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_1A78;
ZZ_201DC_1A60:
	V0 <<= 2;
	V0 += 96;
	V0 += S2;
	goto ZZ_201DC_1A78;
ZZ_201DC_1A70:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
ZZ_201DC_1A78:
	S0 = EMU_ReadU32(V0);
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_1ABC;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_1AAC;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_1AC4;
ZZ_201DC_1AAC:
	V0 <<= 2;
	V0 += 96;
	V0 += S2;
	goto ZZ_201DC_1AC4;
ZZ_201DC_1ABC:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
ZZ_201DC_1AC4:
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = EMU_ReadU32(V0);
	V0 = A0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 31072); //+ 0x7960
	V0 += S0;
	EMU_SDivide(V0,V1);
	if (V1)
	{
		goto ZZ_201DC_1AF4;
	}
	EMU_Break(7168);
ZZ_201DC_1AF4:
	AT = -1;
	if (V1 != AT)
	{
		AT = 0x80000000;
		goto ZZ_201DC_1B0C;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		goto ZZ_201DC_1B0C;
	}
	EMU_Break(6144);
ZZ_201DC_1B0C:
	V1 = HI;
	EMU_Write32(A0,V1);
}

GOOL_OPERATION GOOL_OP_1F(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_1B5C;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_1B4C;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	A0 = V0;
	EMU_Write32(S2 + 220,A0); //+ 0xDC
	goto ZZ_201DC_1B68;
ZZ_201DC_1B4C:
	V0 <<= 2;
	V0 += 96;
	A0 = S2 + V0;
	goto ZZ_201DC_1B68;
ZZ_201DC_1B5C:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	A0 = V0;
ZZ_201DC_1B68:
	V1 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = V1 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = EMU_ReadU32(A0);
	V0 = (int32_t)V0 >> 8;
	V0 <<= 2;
	AT = 0x80060000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 6284); //+ 0x188C
	EMU_Write32(V1,V0);
}

GOOL_OPERATION GOOL_OP_20(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_1BE4;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_1BD4;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	S0 = V0;
	EMU_Write32(S2 + 220,S0); //+ 0xDC
	goto ZZ_201DC_1BF0;
ZZ_201DC_1BD4:
	V0 <<= 2;
	V0 += 96;
	S0 = S2 + V0;
	goto ZZ_201DC_1BF0;
ZZ_201DC_1BE4:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	S0 = V0;
ZZ_201DC_1BF0:
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_1C30;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_1C20;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_1C38;
ZZ_201DC_1C20:
	V0 <<= 2;
	V0 += 96;
	V0 += S2;
	goto ZZ_201DC_1C38;
ZZ_201DC_1C30:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
ZZ_201DC_1C38:
	V0 = EMU_ReadU32(V0);
	V1 = EMU_ReadU32(S0);
	V0 = (int32_t)V0 >> 8;
	V0 <<= 2;
	AT = 0x80060000;
	AT += V0;
	EMU_Write32(AT + 6284,V1); //+ 0x188C
}

GOOL_OPERATION GOOL_OP_21(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_ABC;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_AAC;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_AC4;
ZZ_201DC_AAC:
	V0 <<= 2;
	V0 += 96;
	V0 += S2;
	goto ZZ_201DC_AC4;
ZZ_201DC_ABC:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
ZZ_201DC_AC4:
	S0 = EMU_ReadU32(V0);
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_B08;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_AF8;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_B10;
ZZ_201DC_AF8:
	V0 <<= 2;
	V0 += 96;
	V0 += S2;
	goto ZZ_201DC_B10;
ZZ_201DC_B08:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
ZZ_201DC_B10:
	A0 = EMU_ReadU32(V0);
	A1 = S0;
	V0 = EMU_Invoke(0x800245F0,0);
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = A0 + 4;
	EMU_Write32(S2 + 220,V1); //+ 0xDC
  EMU_Write32(A0,V0);
}

GOOL_OPERATION GOOL_OP_2225(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V1 = S1 >> 12;
	A1 = V1 & 0xFFF;
	V0 = 0xBF0;
	if (A1 != V0)
	{
		V0 = V1 & 0xE00;
		goto ZZ_201DC_808;
	}
	V0 = V1 & 0xE00;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = V0 - 4;
	EMU_Write32(S2 + 220,V1); //+ 0xDC
	S0 = EMU_ReadU32(V0 - 4); //+ 0xFFFFFFFC
	V1 = V0 - 8;
	EMU_Write32(S2 + 220,V1); //+ 0xDC
	S3 = EMU_ReadU32(V0 - 8); //+ 0xFFFFFFF8
	V1 = S1 & 0xFFF;
	goto ZZ_201DC_850;
ZZ_201DC_808:
	T1 = 0xE00;
	if (V0 != T1)
	{
		S0 = 0x100;
		goto ZZ_201DC_840;
	}
	S0 = 0x100;
	if (A1 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_830;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_848;
ZZ_201DC_830:
	V0 <<= 2;
	V0 += 96;
	V0 += S2;
	goto ZZ_201DC_848;
ZZ_201DC_840:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
ZZ_201DC_848:
	S3 = EMU_ReadU32(V0);
	V1 = S1 & 0xFFF;
ZZ_201DC_850:
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_88C;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_87C;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_894;
ZZ_201DC_87C:
	V0 <<= 2;
	V0 += 96;
	V0 += S2;
	goto ZZ_201DC_894;
ZZ_201DC_88C:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
ZZ_201DC_894:
	if (!V0)
	{
		V1 = S1 >> 24;
	  V1 = EMU_ReadU32(S2 + 220); //+ 0xDC
	  V0 = V1 + 4;
	  EMU_Write32(S2 + 220,V0); //+ 0xDC
	  EMU_Write32(V1,R0);	
    return;
  }
	V1 = S1 >> 24;
	A0 = EMU_ReadU32(V0);
	V0 = 0x22;
	if (V1 != V0)
	{
		A1 = S3;
		goto ZZ_201DC_8CC;
	}
	A1 = S3;
	if ((int32_t)S0 >= 0)
	{
		goto ZZ_201DC_8B8;
	}
	S0 = -S0;
ZZ_201DC_8B8:
	A2 = S0;
	V0 = EMU_Invoke(0x80024628,0);
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = A0 + 4;
	EMU_Write32(S2 + 220,V1); //+ 0xDC
  EMU_Write32(A0,V0);  
  return;
ZZ_201DC_8CC:
	A2 = S0;
	A3 = R0;
	V0 = EMU_Invoke(0x800243A0,0);
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = A0 + 4;
	EMU_Write32(S2 + 220,V1); //+ 0xDC
  EMU_Write32(A0,V0);  
}

GOOL_OPERATION GOOL_OP_23(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V0 = S1 >> 10;
	V0 &= 0x1C;
	V0 += S2;
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = EMU_ReadU32(V0 + 96); //+ 0x60
	V0 = A0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = S1 >> 14;
	V0 &= 0x7E;
	V0 += V1;
	V0 = EMU_ReadU16(V0 + 48); //+ 0x30
	EMU_Write32(A0,V0);
}

GOOL_OPERATION GOOL_OP_24(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  
	V0 = S1 >> 10;
	V0 &= 0x1C;
	V0 += S2;
	S3 = EMU_ReadU32(V0 + 96); //+ 0x60
	V0 = S1 >> 15;
	S0 = V0 & 0x3F;
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_1CEC;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_1CDC;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	V1 = V0;
	EMU_Write32(S2 + 220,V1); //+ 0xDC
	goto ZZ_201DC_1CF8;
ZZ_201DC_1CDC:
	V0 <<= 2;
	V0 += 96;
	V1 = S2 + V0;
	goto ZZ_201DC_1CF8;
ZZ_201DC_1CEC:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	V1 = V0;
ZZ_201DC_1CF8:
	V0 = S0 << 1;
	V1 = EMU_ReadU16(V1);
	V0 += S3;
	EMU_Write16(V0 + 48,V1); //+ 0x30
}

GOOL_OPERATION GOOL_OP_27(emuptr<goolobj> obj, uint32_t instruction)
{
  S1 = instruction;
  S2 = obj;
  FP = GOOL_GOP_STACKTOPREF;

	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_32C;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_31C;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	S0 = V0;
	EMU_Write32(S2 + 220,S0); //+ 0xDC
	goto ZZ_201DC_338;
ZZ_201DC_31C:
	V0 <<= 2;
	V0 += 96;
	S0 = S2 + V0;
	goto ZZ_201DC_338;
ZZ_201DC_32C:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	S0 = V0;
ZZ_201DC_338:
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_37C;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_36C;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	A0 = V0;
	V0 = A0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_388;
ZZ_201DC_36C:
	V0 <<= 2;
	V0 += 96;
	A0 = S2 + V0;
	goto ZZ_201DC_388;
ZZ_201DC_37C:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	A0 = V0;
ZZ_201DC_388:
	if (!A0)
	{
		return;
	}
	V0 = EMU_ReadU32(S0);
	V1 = EMU_ReadU32(S2 + 32); //+ 0x20
	V0 >>= 8;
	V1 = EMU_ReadU32(V1 + 36); //+ 0x24
	V0 <<= 2;
	V0 += V1;
	EMU_Write32(A0,V0);
}

GOOL_OPERATION GOOL_OP_82(emuptr<goolobj> obj, uint32_t instruction, uint32_t &flags, emuptr<goolstateref> transition)
{
  S1 = instruction;
  S2 = obj;
  EMU_Write32(SP + 208, flags); //+ 0xD0
  EMU_Write32(SP + 216, transition);
  
	V0 = S1 >> 22;
	A0 = V0 & 0x3;
	V0 = S1 >> 20;
	V1 = V0 & 0x3;
	V0 = 0x1;
	if (V1 == V0)
	{
		goto ZZ_201DC_2B08;
	}
	if (!V1)
	{
		T1 = 0x2;
		goto ZZ_201DC_2AFC;
	}
	T1 = 0x2;
	if (V1 == T1)
	{
		goto ZZ_201DC_2B44;
	}
	goto ZZ_201DC_2B84;
ZZ_201DC_2AFC:
	T1 = 0x1;
	EMU_Write32(SP + 248,T1); //+ 0xF8
	goto ZZ_201DC_2B84;
ZZ_201DC_2B08:
	V0 = S1 >> 14;
	V1 = V0 & 0x3F;
	V0 = 0x1F;
	if (V1 != V0)
	{
		V0 = V1 << 2;
		goto ZZ_201DC_2B30;
	}
	V0 = V1 << 2;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_2B38;
ZZ_201DC_2B30:
	V0 += 96;
	V0 += S2;
ZZ_201DC_2B38:
	V0 = EMU_ReadU32(V0);
	EMU_Write32(SP + 248,V0); //+ 0xF8
	goto ZZ_201DC_2B84;
ZZ_201DC_2B44:
	V0 = S1 >> 14;
	V1 = V0 & 0x3F;
	V0 = 0x1F;
	if (V1 != V0)
	{
		V0 = V1 << 2;
		goto ZZ_201DC_2B6C;
	}
	V0 = V1 << 2;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_2B74;
ZZ_201DC_2B6C:
	V0 += 96;
	V0 += S2;
ZZ_201DC_2B74:
	V0 = EMU_ReadU32(V0);
	V0 = V0 < 1;
	EMU_Write32(SP + 248,V0); //+ 0xF8
ZZ_201DC_2B84:
	T1 = EMU_ReadU32(SP + 248); //+ 0xF8
	if (!T1)
	{
		V0 = 0x1;
		return;
	}
	V0 = 0x1;
	if (A0 == V0)
	{
		goto ZZ_201DC_2CF8;
	}
	if (!A0)
	{
		T1 = 0x2;
		goto ZZ_201DC_2CD4;
	}
	T1 = 0x2;
	if (A0 != T1)
	{
		return;
	}
	T1 = EMU_ReadU32(SP + 208); //+ 0xD0
	EMU_Write32(SP + 104,T1); //+ 0x68
	V1 = EMU_ReadU32(S2 + 228); //+ 0xE4
	V0 = V1 + 8;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	A1 = EMU_ReadU32(V1 + 8); //+ 0x8
	A2 = A1 >> 16;
	if (A2)
	{
		V0 = V1 + 4;
		goto ZZ_201DC_2BE4;
	}
	V0 = V1 + 4;
	A0 = -25;
	goto ZZ_201DC_2C34;
ZZ_201DC_2BE4:
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = EMU_ReadU32(V1 + 4); //+ 0x4
	V1 = EMU_ReadU32(S2 + 220); //+ 0xDC
	A0 = -255;
	EMU_Write32(S2 + 224,V0); //+ 0xE0
	V0 = V1 - 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = 0xFFFF0000;
	T1 = EMU_ReadU32(SP + 208); //+ 0xD0
	V1 = EMU_ReadU16(V1 - 4); //+ 0xFFFFFFFC
	V0 &= T1;
	V0 |= V1;
	EMU_Write32(SP + 104,V0); //+ 0x68
	V0 = A1 & 0xFFFF;
	V0 += 96;
	V0 += S2;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = A2 + 96;
	V0 += S2;
	EMU_Write32(S2 + 228,V0); //+ 0xE4
ZZ_201DC_2C34:
	T1 = EMU_ReadU32(SP + 208); //+ 0xD0
	V0 = T1 & 0x8;
	if (!V0)
	{
		V0 = T1 & 0x20;
		goto ZZ_201DC_2C6C;
	}
	V0 = T1 & 0x20;
	if (!V0)
	{
		goto ZZ_201DC_2C64;
	}
	T1 = EMU_ReadU32(SP + 216); //+ 0xD8
	V0 = 0xFF;
	EMU_Write32(T1,V0);
	V0 = -255;
	greturn(V0);
ZZ_201DC_2C64:
	V0 = -26;
  greturn(V0);
ZZ_201DC_2C6C:
	V0 = T1 & 0x1;
	if (V0)
	{
		V0 = T1 & 0x10;
		goto ZZ_201DC_2C90;
	}
	V0 = T1 & 0x10;
	V0 = (int32_t)A0 < -254;
	if (V0)
	{
		V0 = 0xFFFF;
		goto ZZ_201DC_2CB8;
	}
	V0 = 0xFFFF;
	T1 = EMU_ReadU32(SP + 208); //+ 0xD0
	V0 = T1 & 0x10;
ZZ_201DC_2C90:
	if (!V0)
	{
		V0 = (int32_t)A0 < -254;
		goto ZZ_201DC_2D7C;
	}
	V0 = (int32_t)A0 < -254;
	if (!V0)
	{
		V0 = A0;
    greturn(V0);
	}
	V0 = A0;
	V1 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = V1 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	EMU_Write32(V1,R0);
	goto ZZ_201DC_2D7C;
ZZ_201DC_2CB8:
	A0 = EMU_ReadU32(SP + 104); //+ 0x68
	V1 = A0 & 0xFFFF;
	if (V1 == V0)
	{
		return;
	}
	EMU_Write32(SP + 208,A0); //+ 0xD0
  flags = A0;
	return;
ZZ_201DC_2CD4:
	V0 = S1 << 22;
	V1 = EMU_ReadU32(S2 + 224); //+ 0xE0
	V0 = (int32_t)V0 >> 20;
	V0 += V1;
	EMU_Write32(S2 + 224,V0); //+ 0xE0
	V0 = S1 >> 8;
	V1 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 &= 0x3C;
	V1 = V1 - V0;
	EMU_Write32(S2 + 220,V1); //+ 0xDC  
ZZ_201DC_2CF8:
	V1 = S1 & 0x3FFF;
	V1 <<= 4;
	V0 = EMU_ReadU32(S2 + 32); //+ 0x20
	A1 = EMU_ReadU32(S2 + 296); //+ 0x128
	V0 = EMU_ReadU32(V0 + 32); //+ 0x20
	A0 = EMU_ReadU32(S2 + 208); //+ 0xD0
	V1 += V0;
	V0 = A1 - 3;
	V0 = V0 < 2;
	V1 = EMU_ReadU32(V1);
	if (V0)
	{
		T1 = 0x2;
		goto ZZ_201DC_2D30;
	}
	T1 = 0x2;
	if (A1 != T1)
	{
		goto ZZ_201DC_2D3C;
	}
ZZ_201DC_2D30:
	V0 = A0 | 0x1002;
	V0 &= V1;
	goto ZZ_201DC_2D40;
ZZ_201DC_2D3C:
	V0 = A0 & V1;
ZZ_201DC_2D40:
	if (V0)
	{
		A0 = S2;
		return;
	}
	A0 = S2;
	A1 = S1 & 0x3FFF;
	A2 = R0;
	RA = 0x80022F34; //ZZ_201DC_2D58
	A3 = R0;
	GOOL_ChangeObjectState(emuptr<goolobj>(A0),A1,A2,emuptr<uint32_t>(A3));
	A0 = V0;
	V0 = (int32_t)A0 < -254;
	if (!V0)
	{
	  V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	  V0 -= 4;
	  EMU_Write32(S2 + 220,V0); //+ 0xDC
    return;
	}
	T1 = EMU_ReadU32(SP + 208); //+ 0xD0
	V0 = T1 & 0x2;
	if (!V0)
	{
	  V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	  V0 -= 4;
	  EMU_Write32(S2 + 220,V0); //+ 0xDC
    return;
	}
ZZ_201DC_2D7C:
	V0 = A0;
  greturn(V0);
}

GOOL_OPERATION GOOL_OP_83(emuptr<goolobj> obj, uint32_t instruction, uint32_t &flags)
{
  //setup
  S1 = instruction;
  S2 = obj;
  EMU_Write32(SP + 208, flags); //+ 0xD0

	V0 = S1 & 0x7F;
	V1 = EMU_ReadU32(S2 + 32); //+ 0x20
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = EMU_ReadU32(V1 + 36); //+ 0x24
	V0 <<= 8;
	EMU_Write32(S2 + 268,V0); //+ 0x10C
	V0 = A0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = S1 >> 5;
	V0 &= 0x7FC;
	V0 += V1;
	EMU_Write32(S2 + 264,V0); //+ 0x108
	V0 = S1 >> 16;
	V0 &= 0x3F;
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 3588); //+ 0xE04
	V0 <<= 24;
	V0 |= V1;
	EMU_Write32(A0,V0);
	V0 = S1 >> 22;
	V1 = V0 & 0x3;
	V0 = 0x1;
	if (V1 == V0)
	{
		goto ZZ_201DC_2EC0;
	}
	if (!V1)
	{
		T1 = 0x2;
		goto ZZ_201DC_2EA8;
	}
	T1 = 0x2;
	if (V1 == T1)
	{
		goto ZZ_201DC_2ED8;
	}
	goto ZZ_201DC_2EE8;
ZZ_201DC_2EA8:
	V0 = EMU_ReadU32(S2 + 152); //+ 0x98
	if ((int32_t)V0 >= 0)
	{
		V0 = -V0;
		goto ZZ_201DC_2EE8;
	}
	V0 = -V0;
	goto ZZ_201DC_2EE4;
ZZ_201DC_2EC0:
	V0 = EMU_ReadU32(S2 + 152); //+ 0x98
	if ((int32_t)V0 <= 0)
	{
		V0 = -V0;
		goto ZZ_201DC_2EE8;
	}
	V0 = -V0;
	goto ZZ_201DC_2EE4;
ZZ_201DC_2ED8:
	V0 = EMU_ReadU32(S2 + 152); //+ 0x98
	V0 = -V0;
ZZ_201DC_2EE4:
	EMU_Write32(S2 + 152,V0); //+ 0x98
ZZ_201DC_2EE8:
	V0 = EMU_ReadU32(S2 + 204); //+ 0xCC
	V0 &= 0x18;
	if (!V0)
	{
		V1 = 0xA0000;
		goto ZZ_201DC_303C;
	}
	V1 = 0xA0000;
	V1 |= 0xF000;
	V0 = 0x70000;
	V0 |= 0xD000;
	A0 = S2;
	A1 = S2 + 128;
	A3 = 0x70000;
	A2 = EMU_ReadU32(GP + 696); //+ 0x2B8
	A3 |= 0xD000;
	EMU_Write32(SP + 16,V1); //+ 0x10
	EMU_Write32(SP + 20,V0); //+ 0x14
	A2 += 128;
  V0 = EMU_Invoke(0x80029C90,0);
	if (!V0)
	{
		A0 = S2;
		goto ZZ_201DC_3034;
	}
	A0 = S2;
	V0 = EMU_ReadU32(S2 + 204); //+ 0xCC
	if ((int32_t)V0 < 0)
	{
		goto ZZ_201DC_3034;
	}
	goto ZZ_201DC_303C;
//...
ZZ_201DC_3034:
	RA = 0x80023218; //ZZ_201DC_303C
	A1 = S2 + 152;
	V0 = EMU_Invoke(0x8001D33C,0);
ZZ_201DC_303C:
	T1 = EMU_ReadU32(SP + 208); //+ 0xD0
	V0 = T1 & 0x4;
  flags = EMU_ReadU32(SP + 208); //+ 0xD0
	if (V0)
  {
    greturn(ERROR_CODE_SUCCESS);
  }
}

GOOL_OPERATION GOOL_OP_84(emuptr<goolobj> obj, uint32_t instruction, uint32_t &flags)
{
  // setup
  S1 = instruction;
  S2 = obj;
  EMU_Write32(SP + 208, flags); //+ 0xD0
  
//ZZ_201DC_2F4C:
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_2F8C;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_2F7C;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_2F94;
ZZ_201DC_2F7C:
	V0 <<= 2;
	V0 += 96;
	V0 += S2;
	goto ZZ_201DC_2F94;
ZZ_201DC_2F8C:	
  A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
ZZ_201DC_2F94:
	V0 = EMU_ReadU32(V0);
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	EMU_Write32(S2 + 268,V0); //+ 0x10C
	V0 = A0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = S1 >> 16;
	V0 &= 0x3F;
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 3588); //+ 0xE04
	V0 <<= 24;
	V0 |= V1;
	EMU_Write32(A0,V0);
	V0 = S1 >> 22;
	V1 = V0 & 0x3;
	V0 = 0x1;
	if (V1 == V0)
	{
		goto ZZ_201DC_3008;
	}
	if (!V1)
	{
		T1 = 0x2;
		goto ZZ_201DC_2FF0;
	}
	T1 = 0x2;
	if (V1 == T1)
	{
		A0 = S2;
		goto ZZ_201DC_3020;
	}
	A0 = S2;
	goto ZZ_201DC_3034;
ZZ_201DC_2FF0:
	V0 = EMU_ReadU32(S2 + 152); //+ 0x98
	if ((int32_t)V0 >= 0)
	{
		A0 = S2;
		goto ZZ_201DC_3034;
	}
	A0 = S2;
	V0 = -V0;
	goto ZZ_201DC_302C;
ZZ_201DC_3008:
	V0 = EMU_ReadU32(S2 + 152); //+ 0x98
	if ((int32_t)V0 <= 0)
	{
		A0 = S2;
		goto ZZ_201DC_3034;
	}
	A0 = S2;
	V0 = -V0;
	goto ZZ_201DC_302C;
ZZ_201DC_3020:
	V0 = EMU_ReadU32(S2 + 152); //+ 0x98
	V0 = -V0;
ZZ_201DC_302C:
	EMU_Write32(S2 + 152,V0); //+ 0x98
	A0 = S2;
ZZ_201DC_3034:	
  A1 = S2 + 152;
	V0 = EMU_Invoke(0x8001D33C,0);
	T1 = EMU_ReadU32(SP + 208); //+ 0xD0
	V0 = T1 & 0x4;
  flags = EMU_ReadU32(SP + 208); //+ 0xD0
  
	if (V0)
  {
    greturn(ERROR_CODE_SUCCESS);
  } 
}

GOOL_OPERATION GOOL_OP_85(emuptr<goolobj> obj, uint32_t instruction)
{
  // setup
  S1 = instruction;
  S2 = obj;
  
// ZZ_201DC_3130:
	V0 = S1 >> 12;
	V0 &= 0x7;
	V1 = V0 << 1;
	V1 += V0;
	V1 <<= 2;
	V1 += 128;
	S4 = S2 + V1;
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_3190;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_3180;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	S3 = V0;
	EMU_Write32(S2 + 220,S3); //+ 0xDC
	goto ZZ_201DC_319C;
ZZ_201DC_3180:
	V0 <<= 2;
	V0 += 96;
	S3 = S2 + V0;
	goto ZZ_201DC_319C;
ZZ_201DC_3190:
	RA = 0x80023374; //ZZ_201DC_3198
	A0 = S2;
  V0 = EMU_Invoke(0x8001FB34,0);
	S3 = V0;
ZZ_201DC_319C:
	V0 = S1 >> 18;
	V1 = V0 & 0x7;
	V0 = V1 < 8;
	if (!V0)
	{
		V0 = V1 << 2;
		return;
	}
	V0 = V1 << 2;
	AT = 0x80010000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 2064); //+ 0x810
	if (V1 == 0) { goto ZZ_201DC_31C8; }
	if (V1 == 1) { goto ZZ_201DC_34B8; }
	if (V1 == 2) { goto ZZ_201DC_322C; }
	if (V1 == 3) { return; }
	if (V1 == 4) { goto ZZ_201DC_32C0; }
  if (V1 == 5) { goto ZZ_201DC_32C0; }
	if (V1 == 6) { goto ZZ_201DC_3358; }
	if (V1 == 7) { goto ZZ_201DC_35E0; }
ZZ_201DC_31C8:
	if (!S3)
	{
		return;
	}
	V0 = EMU_ReadU32(S2 + 272); //+ 0x110
	if (!V0)
	{
		return;
	}
	V0 = EMU_ReadU32(S4);
	V1 = EMU_ReadU32(S4 + 4); //+ 0x4
	A0 = EMU_ReadU32(S4 + 8); //+ 0x8
	EMU_Write32(SP + 40,V0); //+ 0x28
	EMU_Write32(SP + 44,V1); //+ 0x2C
	EMU_Write32(SP + 48,A0); //+ 0x30
	A0 = S2;
	A1 = EMU_ReadU32(S3);
  A2 = SP + 40;
	V0 = EMU_Invoke(0x8001AC9C,0);
	V0 = EMU_ReadU32(SP + 40); //+ 0x28
	V1 = EMU_ReadU32(SP + 44); //+ 0x2C
	A0 = EMU_ReadU32(SP + 48); //+ 0x30
	EMU_Write32(S4,V0);
	EMU_Write32(S4 + 4,V1); //+ 0x4
	EMU_Write32(S4 + 8,A0); //+ 0x8
	V0 = EMU_ReadU32(S4 + 4); //+ 0x4
	EMU_Write32(S2 + 284,V0); //+ 0x11C
	return;
ZZ_201DC_322C:
	A0 = EMU_ReadU32(S2 + 180); //+ 0xB4
  A0 &= 0xFFF;
	V0 = EMU_Invoke(0x8003905C,0);
	V1 = EMU_ReadU32(S3);
	V0 = (int32_t)V0 >> 4;
	EMU_SMultiply(V0,V1);
	V1 = 0x200000;
	V0 = LO;
	V0 = (int32_t)V0 >> 8;
	EMU_Write32(S4,V0);
	V0 = EMU_ReadU32(S2 + 204); //+ 0xCC
	V1 |= 0x200;
	V0 &= V1;
	if (V0)
	{
		goto ZZ_201DC_3290;
	}
	A0 = EMU_ReadU32(S2 + 180); //+ 0xB4
  A0 &= 0xFFF;
	V0 = EMU_Invoke(0x800390D0,0);
	V1 = EMU_ReadU32(S3);
	V0 = (int32_t)V0 >> 4;
	EMU_SMultiply(V0,V1);
	V0 = LO;
	V0 = (int32_t)V0 >> 8;
	EMU_Write32(S4 + 8,V0); //+ 0x8
	goto ZZ_201DC_32B4;
ZZ_201DC_3290:
	A0 = EMU_ReadU32(S2 + 180); //+ 0xB4
  A0 &= 0xFFF;
	V0 = EMU_Invoke(0x800390D0,0);
	V1 = EMU_ReadU32(S3);
	V0 = (int32_t)V0 >> 4;
	EMU_SMultiply(V0,V1);
	V0 = LO;
	V0 = (int32_t)V0 >> 8;
	EMU_Write32(S4 + 4,V0); //+ 0x4
ZZ_201DC_32B4:
	V0 = EMU_ReadU32(S3);
	EMU_Write32(S2 + 292,V0); //+ 0x124
	return;
ZZ_201DC_32C0:
	V0 = EMU_ReadU32(S3);
	EMU_Write32(SP + 32,V0); //+ 0x20
	V1 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = V1 - 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = EMU_ReadU32(V1 - 4); //+ 0xFFFFFFFC
	EMU_Write32(SP + 28,V0); //+ 0x1C
	V1 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 = V1 - 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = EMU_ReadU32(V1 - 4); //+ 0xFFFFFFFC
	V1 = S1 >> 15;
	V1 &= 0x7;
	EMU_Write32(SP + 24,V0); //+ 0x18
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 += 128;
	A0 = S2 + V0;
	V0 = S1 >> 18;
	V0 &= 0x7;
	V1 = 0x4;
	if (V0 != V1)
	{
		A3 = R0;
		goto ZZ_201DC_333C;
	}
	A3 = R0;
	A2 = S2 + 140;
	A3 = S2 + 152;
	goto ZZ_201DC_3340;
ZZ_201DC_333C:
	A2 = S2 + 176;
ZZ_201DC_3340:
	EMU_Write32(SP + 16,A0); //+ 0x10
	A0 = SP + 24;
  A1 = S4;
	V0 = EMU_Invoke(0x8002465C,0);
	return;
ZZ_201DC_3358:
	V0 = S1 >> 19;
	V0 &= 0x1C;
	V0 += S2;
	S1 = EMU_ReadU32(V0 + 96); //+ 0x60
	A0 = EMU_ReadU32(S1 + 264); //+ 0x108
	if (!A0)
	{
		V0 = 0x1;
		return;
	}
	V0 = 0x1;
	V1 = EMU_ReadU8(A0);
	if (V1 != V0)
	{
		return;
	}
  A0 += 4;
	V0 = EMU_Invoke(0x80015A98,0);
	A0 = EMU_ReadU32(S1 + 264); //+ 0x108
	V1 = EMU_ReadU32(S1 + 268); //+ 0x10C
	V1 >>= 8;
	V1 <<= 2;
	V1 += V0;
	S0 = EMU_ReadU32(V1 + 16); //+ 0x10
  A0 += 4;
	V0 = EMU_Invoke(0x80015A98,0);
	V1 = EMU_ReadU32(S1 + 268); //+ 0x10C
	V1 >>= 8;
	V1 <<= 2;
	V1 += V0;
	A0 = EMU_ReadU32(V1 + 16); //+ 0x10
  A0 += 4;
	V0 = EMU_Invoke(0x80015A98,0);
	V1 = EMU_ReadU32(S3);
	V1 >>= 8;
	A0 = V1 << 1;
	A0 += V1;
	A0 <<= 1;
	A0 += 56;
	A0 += S0;
	V1 = EMU_ReadU8(A0);
	A1 = EMU_ReadU32(S0 + 8); //+ 0x8
	V1 -= 128;
	V1 += A1;
	A1 = EMU_ReadU32(V0 + 16); //+ 0x10
	V1 <<= 10;
	EMU_Write32(SP + 56,V1); //+ 0x38
	V0 = EMU_ReadU8(A0 + 1); //+ 0x1
	V1 = EMU_ReadU32(S0 + 12); //+ 0xC
	V0 -= 128;
	V0 += V1;
	V0 <<= 10;
	EMU_Write32(SP + 60,V0); //+ 0x3C
	V0 = EMU_ReadU8(A0 + 2); //+ 0x2
	V1 = EMU_ReadU32(S0 + 16); //+ 0x10
	V0 -= 128;
	V0 += V1;
	V0 <<= 10;
	EMU_Write32(SP + 64,V0); //+ 0x40
	V1 = EMU_ReadU32(S1 + 152); //+ 0x98
	V0 = EMU_ReadU32(A1 + 4); //+ 0x4
	EMU_SMultiply(V1,V0);
	V0 = LO;
	V0 = (int32_t)V0 >> 12;
	EMU_Write32(SP + 80,V0); //+ 0x50
	V1 = EMU_ReadU32(S1 + 156); //+ 0x9C
	V0 = EMU_ReadU32(A1 + 8); //+ 0x8
	EMU_SMultiply(V1,V0);
	V0 = LO;
	V0 = (int32_t)V0 >> 12;
	EMU_Write32(SP + 84,V0); //+ 0x54
	V1 = EMU_ReadU32(S1 + 160); //+ 0xA0
	V0 = EMU_ReadU32(A1 + 12); //+ 0xC
	EMU_SMultiply(V1,V0);
	A2 = S1 + 140;
	A3 = SP + 80;
	A0 = SP + 56;
	A1 = S1 + 128;
	V0 = LO;
	V0 = (int32_t)V0 >> 12;
	EMU_Write32(SP + 88,V0); //+ 0x58
  EMU_Write32(SP + 16,S4);
	V0 = EMU_Invoke(0x8002465C,0);
	return;
ZZ_201DC_34B8:
	A0 = S4;
	V1 = S1 >> 15;
	V1 &= 0x7;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 += 128;
	S0 = S2 + V0;
  A1 = S0;
	V0 = EMU_Invoke(0x800249E0,0);
	V1 = EMU_ReadU32(S3);
	if (!V1)
	{
		return;
	}
	V0 = EMU_ReadU32(S0 + 8); //+ 0x8
	A2 = (int32_t)V0 >> 8;
	if (!A2)
	{
		A1 = V1 << 3;
		return;
	}
	A1 = V1 << 3;
	A1 += V1;
	A1 <<= 2;
	A1 = A1 - V1;
	A1 <<= 3;
	EMU_SDivide(A1,A2);
	if (A2)
	{
		goto ZZ_201DC_3524;
	}
	EMU_Break(7168);
ZZ_201DC_3524:
	AT = -1;
	if (A2 != AT)
	{
		AT = 0x80000000;
		goto ZZ_201DC_353C;
	}
	AT = 0x80000000;
	if (A1 != AT)
	{
		goto ZZ_201DC_353C;
	}
	EMU_Break(6144);
ZZ_201DC_353C:
	A1 = LO;
	V0 = EMU_ReadU32(S3 + 4); //+ 0x4
	V1 = V0 << 3;
	V1 += V0;
	V1 <<= 2;
	V1 = V1 - V0;
	V1 <<= 3;
	EMU_SDivide(V1,A2);
	if (A2)
	{
		goto ZZ_201DC_356C;
	}
	EMU_Break(7168);
ZZ_201DC_356C:
	AT = -1;
	if (A2 != AT)
	{
		AT = 0x80000000;
		goto ZZ_201DC_3584;
	}
	AT = 0x80000000;
	if (V1 != AT)
	{
		goto ZZ_201DC_3584;
	}
	EMU_Break(6144);
ZZ_201DC_3584:
	V1 = LO;
	A0 = EMU_ReadU32(S3 + 8); //+ 0x8
	V0 = A0 << 3;
	V0 += A0;
	V0 <<= 2;
	V0 = V0 - A0;
	V0 <<= 3;
	EMU_SDivide(V0,A2);
	if (A2)
	{
		goto ZZ_201DC_35B4;
	}
	EMU_Break(7168);
ZZ_201DC_35B4:
	AT = -1;
	if (A2 != AT)
	{
		AT = 0x80000000;
		goto ZZ_201DC_35CC;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		goto ZZ_201DC_35CC;
	}
	EMU_Break(6144);
ZZ_201DC_35CC:
	V0 = LO;
	EMU_Write32(S3,A1);
	EMU_Write32(S3 + 4,V1); //+ 0x4
	EMU_Write32(S3 + 8,V0); //+ 0x8
	return;
ZZ_201DC_35E0:
	A0 = S4;
	V0 = S1 >> 15;
	V0 &= 0x7;
	A1 = V0 << 1;
	A1 += V0;
	A1 <<= 2;
	A1 += 128;
	A1 += S2;
  A2 = R0;
	V0 = EMU_Invoke(0x800248A0,0);
}

GOOL_OPERATION GOOL_OP_86(emuptr<goolobj> obj, uint32_t instruction, uint32_t &flags)
{
  // setup
  S1 = instruction;
  S2 = obj;
  EMU_Write32(SP + 208,flags); //+ 0xD0

// ZZ_201DC_2D84:
	V1 = EMU_ReadU32(S2 + 220); //+ 0xDC
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	A1 = EMU_ReadU32(S2 + 228); //+ 0xE4
	V0 = A0 + 4;
	A1 -= 96;
	EMU_Write32(S2 + 228,V1); //+ 0xE4
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	T1 = EMU_ReadU32(SP + 208); //+ 0xD0
	A1 = A1 - S2;
	EMU_Write32(A0,T1);
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	A2 = EMU_ReadU32(S2 + 224); //+ 0xE0
	V0 = A0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	EMU_Write32(A0,A2);
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	A1 <<= 16;
	V0 = A0 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = S1 >> 18;
	V0 &= 0x3C;
	V1 = V1 - V0;
	V1 -= 96;
	V1 = V1 - S2;
	V1 |= A1;
	EMU_Write32(A0,V1);
	A0 = S1 & 0x3FFF;
	V0 = 0x3FFF;
	if (A0 == V0)
	{
		goto ZZ_201DC_2E18;
	}
	V0 = EMU_ReadU32(S2 + 32); //+ 0x20
	V1 = EMU_ReadU32(V0 + 20); //+ 0x14
	V0 = A0 << 2;
	V0 += V1;
	EMU_Write32(S2 + 224,V0); //+ 0xE0
	goto ZZ_201DC_2E1C;
ZZ_201DC_2E18:
	EMU_Write32(S2 + 224,R0); //+ 0xE0
ZZ_201DC_2E1C:
	T1 = EMU_ReadU32(SP + 208); //+ 0xD0
	V0 = -10;
	T1 &= V0;
	EMU_Write32(SP + 208,T1); //+ 0xD0
  
  flags = T1;
}

GOOL_OPERATION GOOL_OP_8889(emuptr<goolobj> obj,
                           uint32_t instruction, 
                                uint32_t &flags, 
                emuptr<goolstateref> transition, 
                                uint32_t opcode)
{
  S1 = instruction;
  S2 = obj;
  EMU_Write32(SP + 208, flags); //+ 0xD0
  EMU_Write32(SP + 216, transition);
  S5 = opcode;
  
	V0 = S1 >> 22;
	A0 = V0 & 0x3;
	V0 = S1 >> 20;
	T1 = EMU_ReadU32(SP + 208); //+ 0xD0
	V1 = V0 & 0x3;
	V0 = T1 & 0x8;
	if (!V0)
	{
		V0 = 0x1;
		V0 = -14;
    greturn(V0);
	}
	V0 = 0x1;
	if (V1 == V0)
	{
		goto ZZ_201DC_2908;
	}
	if (!V1)
	{
		T1 = 0x2;
		goto ZZ_201DC_28FC;
	}
	T1 = 0x2;
	if (V1 == T1)
	{
		goto ZZ_201DC_2944;
	}
	goto ZZ_201DC_2984;
ZZ_201DC_28FC:
	T1 = 0x1;
	EMU_Write32(SP + 240,T1); //+ 0xF0
	goto ZZ_201DC_2984;
ZZ_201DC_2908:
	V0 = S1 >> 14;
	V1 = V0 & 0x3F;
	V0 = 0x1F;
	if (V1 != V0)
	{
		V0 = V1 << 2;
		goto ZZ_201DC_2930;
	}
	V0 = V1 << 2;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_2938;
ZZ_201DC_2930:
	V0 += 96;
	V0 += S2;
ZZ_201DC_2938:
	V0 = EMU_ReadU32(V0);
	EMU_Write32(SP + 240,V0); //+ 0xF0
	goto ZZ_201DC_2984;
ZZ_201DC_2944:
	V0 = S1 >> 14;
	V1 = V0 & 0x3F;
	V0 = 0x1F;
	if (V1 != V0)
	{
		V0 = V1 << 2;
		goto ZZ_201DC_296C;
	}
	V0 = V1 << 2;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_2974;
ZZ_201DC_296C:
	V0 += 96;
	V0 += S2;
ZZ_201DC_2974:
	V0 = EMU_ReadU32(V0);
	V0 = V0 < 1;
	EMU_Write32(SP + 240,V0); //+ 0xF0
ZZ_201DC_2984:
	T1 = EMU_ReadU32(SP + 240); //+ 0xF0
	if (!T1)
	{
		V0 = S5 ^ 0x88;
		goto ZZ_201DC_2AA0;
	}
	V0 = S5 ^ 0x88;
	T1 = EMU_ReadU32(SP + 208); //+ 0xD0
	T1 |= 0x20;
	EMU_Write32(SP + 208,T1); //+ 0xD0
  flags = T1;
	T1 = EMU_ReadU32(SP + 216); //+ 0xD8
	V0 = R0 < V0;
	EMU_Write32(T1 + 4,V0); //+ 0x4
	V0 = 0x1;
	if (A0 == V0)
	{
		T1 = 0x2;
		goto ZZ_201DC_2A30;
	}
	T1 = 0x2;
	if (A0 != T1)
	{
		return;
	}
	V1 = EMU_ReadU32(S2 + 228); //+ 0xE4
	V0 = V1 + 8;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	A1 = EMU_ReadU32(V1 + 8); //+ 0x8
	A2 = A1 >> 16;
	if (A2)
	{
		A0 = -255;
		goto ZZ_201DC_29F0;
	}
	A0 = -255;
	A0 = -25;
	goto ZZ_201DC_2A1C;
ZZ_201DC_29F0:
	V0 = V1 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = A1 & 0xFFFF;
	V0 += 96;
	V1 = EMU_ReadU32(V1 + 4); //+ 0x4
	V0 += S2;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = A2 + 96;
	V0 += S2;
	EMU_Write32(S2 + 228,V0); //+ 0xE4
	EMU_Write32(S2 + 224,V1); //+ 0xE0
ZZ_201DC_2A1C:
	V0 = (int32_t)A0 < -254;
	if (!V0)
	{
		V0 = A0;
    greturn(V0);
	}
	T1 = EMU_ReadU32(SP + 216);
  V0 = 0xFF;
  EMU_Write32(T1,V0);
  V0 = -255;
  greturn(V0);
ZZ_201DC_2A30:
	V1 = EMU_ReadU32(S2 + 228); //+ 0xE4
	V0 = V1 + 8;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	A1 = EMU_ReadU32(V1 + 8); //+ 0x8
	A2 = A1 >> 16;
	if (A2)
	{
		A0 = -255;
		goto ZZ_201DC_2A5C;
	}
	A0 = -255;
	A0 = -25;
	goto ZZ_201DC_2A88;
ZZ_201DC_2A5C:
	V0 = V1 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = A1 & 0xFFFF;
	V0 += 96;
	V1 = EMU_ReadU32(V1 + 4); //+ 0x4
	V0 += S2;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	V0 = A2 + 96;
	V0 += S2;
	EMU_Write32(S2 + 228,V0); //+ 0xE4
	EMU_Write32(S2 + 224,V1); //+ 0xE0
ZZ_201DC_2A88:
	V0 = (int32_t)A0 < -254;
	if (!V0)
	{
		V0 = S1 & 0x3FFF;
	  V0 = A0;
    greturn(V0);
	}
	V0 = S1 & 0x3FFF;
	T1 = EMU_ReadU32(SP + 216); //+ 0xD8
	EMU_Write32(T1,V0);
	V0 = -255;
  greturn(V0);
ZZ_201DC_2AA0:
	if (A0)
	{
		V0 = S1 << 22;
		return;
	}
	V0 = S1 << 22;
	V1 = EMU_ReadU32(S2 + 224); //+ 0xE0
	V0 = (int32_t)V0 >> 20;
	V0 += V1;
	EMU_Write32(S2 + 224,V0); //+ 0xE0
	V0 = S1 >> 8;
	V1 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 &= 0x3C;
	V1 = V1 - V0;
	EMU_Write32(S2 + 220,V1); //+ 0xDC
}

GOOL_OPERATION GOOL_OP_8A91(emuptr<goolobj> obj, uint32_t instruction, uint32_t opcode)
{
  // setup
  S1 = instruction;
  S2 = obj;
  S5 = opcode;

// ZZ_201DC_3BE4:
	S3 = S1 & 0x3F;
	A3 = S1 >> 20;
	if (S3)
	{
		S4 = A3 & 0xF;
		goto ZZ_201DC_3C0C;
	}
	S4 = A3 & 0xF;
	V0 = S4 + 1;
	S4 = V0;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = S4 << 2;
	V0 = V0 - V1;
	S3 = EMU_ReadU32(V0);
ZZ_201DC_3C0C:
	if ((int32_t)S3 <= 0)
	{
		S0 = R0;
		goto ZZ_201DC_3C88;
	}
	S0 = R0;
	S6 = A3 & 0xF;
	V0 = -S6;
	S7 = V0 << 2;
	V0 = S5 ^ 0x91;
	S5 = V0 < 1;
	A0 = S2;
ZZ_201DC_3C30:
	A1 = S1 >> 12;
	A1 &= 0xFF;
	A2 = S1 >> 6;
	A2 &= 0x3F;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	A3 = S6;
	EMU_Write32(SP + 20,S5); //+ 0x14
	V0 += S7;
	RA = 0x80023E34; //ZZ_201DC_3C58
	EMU_Write32(SP + 16,V0); //+ 0x10
  V0 = GOOL_CreateObject((emuptr<goolobj>)A0,A1,A2,A3,(emuptr<uint32_t>)V0,S5);
	V1 = V0;
	V0 = (int32_t)V1 < -254;
	if (!V0)
	{
		goto ZZ_201DC_3C74;
	}
	EMU_Write32(V1 + 112,S2); //+ 0x70
	EMU_Write32(S2 + 244,V1); //+ 0xF4
	goto ZZ_201DC_3C78;
ZZ_201DC_3C74:
	EMU_Write32(S2 + 244,R0); //+ 0xF4
ZZ_201DC_3C78:
	S0 += 1;
	V0 = (int32_t)S0 < (int32_t)S3;
	if (V0)
	{
		A0 = S2;
		goto ZZ_201DC_3C30;
	}
	A0 = S2;
ZZ_201DC_3C88:
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = S4 << 2;
	V0 = V0 - V1;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
}

GOOL_OPERATION GOOL_OP_8B(emuptr<goolobj> obj, uint32_t instruction)
{
  // setup
  S1 = instruction;
  S2 = obj;
  
// ZZ_201DC_3058:
	A0 = S2;
	A1 = S1 >> 12;
	A1 &= 0xFFF;	
  A2 = R0;
	V0 = EMU_Invoke(0x8001FC4C,0);
	A0 = S2;
	A1 = S1 & 0xFFF;
	S0 = EMU_ReadU32(V0);	
  A2 = R0;
	V0 = EMU_Invoke(0x8001FC4C,0);
	A0 = V0;
	S0 -= 1;
	V0 = S0 < 6;
	if (!V0)
	{
		V0 = S0 << 2;
		return;
	}
	V0 = S0 << 2;
	AT = 0x80010000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 2040); //+ 0x7F8
	if (S0 == 0) { goto ZZ_201DC_30AC; }
	if (S0 == 1) { goto ZZ_201DC_30C8; }
	if (S0 == 2) { goto ZZ_201DC_30D8; }
	if (S0 == 3) { goto ZZ_201DC_30EC; }
	if (S0 == 4) { goto ZZ_201DC_3100; }
	if (S0 == 5) { goto ZZ_201DC_30B4; }
ZZ_201DC_30AC:
	A1 = R0;
	goto ZZ_201DC_30B8;
ZZ_201DC_30B4:
	A1 = 0x1;
ZZ_201DC_30B8:	
  A2 = 0x1;
	V0 = EMU_Invoke(0x80015118,0);
	EMU_Write32(S2 + 244,V0); //+ 0xF4
  return;
ZZ_201DC_30C8:	
  A1 = 0x1;
	V0 = EMU_Invoke(0x80015458,0);
	EMU_Write32(S2 + 244,V0); //+ 0xF4
  return;
ZZ_201DC_30D8:	
  A1 = R0;
	V0 = EMU_Invoke(0x80015458,0);
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = A0 + 4;
	goto ZZ_201DC_3128;
ZZ_201DC_30EC: //ZZ_201DC_30F4
	V0 = EMU_Invoke(0x800156D4,0);
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V1 = A0 + 4;
	goto ZZ_201DC_3128;
ZZ_201DC_3100:
	S0 = EMU_ReadU32(A0);
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	A0 = S0 << 2;
	A0 = V0 - A0;	
  A1 = S0;
	V0 = EMU_Invoke(0x8001579C,0);
	A0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	S0 <<= 2;
	A0 = A0 - S0;
	V1 = A0 + 4;
ZZ_201DC_3128:
	EMU_Write32(S2 + 220,V1); //+ 0xDC
  EMU_Write32(A0,V0);
}

GOOL_OPERATION GOOL_OP_8C(emuptr<goolobj> obj, uint32_t instruction)
{
  // setup
  S1 = instruction;
  S2 = obj;
  
// ZZ_201DC_3C9C:
	V1 = S1 >> 12;
	A0 = V1 & 0xFFF;
	V0 = V1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = A0;
		goto ZZ_201DC_3CE4;
	}
	A1 = A0;
	if (A0 != FP)
	{
		V0 = V1 & 0x1FF;
		goto ZZ_201DC_3CD4;
	}
	V0 = V1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	S0 = V0;
	EMU_Write32(S2 + 220,S0); //+ 0xDC
	goto ZZ_201DC_3CF0;
ZZ_201DC_3CD4:
	V0 <<= 2;
	V0 += 96;
	S0 = S2 + V0;
	goto ZZ_201DC_3CF0;
ZZ_201DC_3CE4:	
  A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	S0 = V0;
ZZ_201DC_3CF0:
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_3D30;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_3D20;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_3D38;
ZZ_201DC_3D20:
	V0 <<= 2;
	V0 += 96;
	V0 += S2;
	goto ZZ_201DC_3D38;
ZZ_201DC_3D30:	
  A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
ZZ_201DC_3D38:
	A0 = S2;
	A2 = EMU_ReadS16(S0);	
  A1 = V0;
	V0 = EMU_Invoke(0x800304C8,0);
	EMU_Write32(S2 + 332,V0); //+ 0x14C
}

GOOL_OPERATION GOOL_OP_8D(emuptr<goolobj> obj, uint32_t instruction)
{
  // setup
  S1 = instruction;
  S2 = obj;
  
// ZZ_201DC_3D50:
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_3D94;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_3D84;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	A2 = V0;
	EMU_Write32(S2 + 220,A2); //+ 0xDC
	goto ZZ_201DC_3DA0;
ZZ_201DC_3D84:
	V0 <<= 2;
	V0 += 96;
	A2 = S2 + V0;
	goto ZZ_201DC_3DA0;
ZZ_201DC_3D94:
  A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	A2 = V0;
ZZ_201DC_3DA0:
	V0 = S1 >> 20;
	A1 = V0 & 0xF;
	V0 = S1 >> 12;
	V1 = V0 & 0x3F;
	if (V1)
	{
		V0 = 0x1F;
		goto ZZ_201DC_3DC0;
	}
	V0 = 0x1F;
	A0 = R0;
	goto ZZ_201DC_3DE8;
ZZ_201DC_3DC0:
	if (V1 != V0)
	{
		V0 = V1 << 2;
		goto ZZ_201DC_3DDC;
	}
	V0 = V1 << 2;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_3DE4;
ZZ_201DC_3DDC:
	V0 += 96;
	V0 += S2;
ZZ_201DC_3DE4:
	A0 = EMU_ReadU32(V0);
ZZ_201DC_3DE8:
	V0 = 0xF;
	if (A1 != V0)
	{
		V0 = 0x40000;
		goto ZZ_201DC_3DF8;
	}
	V0 = 0x40000;
	A1 = 0x80000000;
ZZ_201DC_3DF8:
	V0 &= S1;
	if (!V0)
	{
		V0 = 0x40000000;
		goto ZZ_201DC_3E08;
	}
	V0 = 0x40000000;
	A1 |= V0;
ZZ_201DC_3E08:
	V0 = 0x80000;
	V0 &= S1;
	if (!V0)
	{
		V0 = 0x20000000;
		goto ZZ_201DC_3E1C;
	}
	V0 = 0x20000000;
	A1 |= V0;
ZZ_201DC_3E1C:
  A3 = S2;
	V0 = EMU_Invoke(0x80030840,0);
}

GOOL_OPERATION GOOL_OP_8E(emuptr<goolobj> obj, uint32_t instruction)
{
  // setup
  S1 = instruction;
  S2 = obj;
  
// ZZ_201DC_3610:
	A0 = S2;
	A1 = S1 & 0xFFF;
	A2 = R0;
	V1 = S1 >> 12;
	V1 &= 0x7;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 += 128;
	S0 = S2 + V0;
	V0 = EMU_Invoke(0x8001FC4C,0);
	V0 = S1 >> 18;
	V1 = V0 & 0x7;
	V0 = V1 < 7;
	if (!V0)
	{
		V0 = V1 << 2;
    return;
	}
	V0 = V1 << 2;
	AT = 0x80010000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 2096); //+ 0x830
	if (V1 == 0) { goto ZZ_201DC_3668; }
	if (V1 == 1) { goto ZZ_201DC_376C; }
	if (V1 == 2) { goto ZZ_201DC_387C; }
  if (V1 == 3) { goto ZZ_201DC_387C; }
  if (V1 == 4) { goto ZZ_201DC_387C; }
	if (V1 == 5) { goto ZZ_201DC_387C; }
	if (V1 == 6) { goto ZZ_201DC_39C8; }
ZZ_201DC_3668:
	V0 = EMU_ReadU32(S2 + 128); //+ 0x80
	V1 = EMU_ReadU32(S2 + 132); //+ 0x84
	A0 = EMU_ReadU32(S2 + 136); //+ 0x88
	EMU_Write32(SP + 40,V0); //+ 0x28
	EMU_Write32(SP + 44,V1); //+ 0x2C
	EMU_Write32(SP + 48,A0); //+ 0x30
	V0 = EMU_ReadU32(S0);
	V1 = EMU_ReadU32(S0 + 4); //+ 0x4
	A0 = EMU_ReadU32(S0 + 8); //+ 0x8
	EMU_Write32(SP + 24,V0); //+ 0x18
	EMU_Write32(SP + 28,V1); //+ 0x1C
	EMU_Write32(SP + 32,A0); //+ 0x20
	A0 = SP + 40;
	V0 = EMU_ReadU32(S2 + 24); //+ 0x18
	A1 = SP + 24;
	V1 = V0 >> 31;
	V0 += V1;
	V1 = EMU_ReadU32(SP + 44); //+ 0x2C
	V0 = (int32_t)V0 >> 1;
	V0 += V1;
	EMU_Write32(SP + 44,V0); //+ 0x2C
	V0 = EMU_Invoke(0x800277EC,0);
	A1 = S1 & 0xFFF;
	EMU_Write32(S2 + 244,V0); //+ 0xF4
	V0 = 0xBE0;
	if (A1 == V0)
	{
		V0 = S1 & 0xE00;
		goto ZZ_201DC_3734;
	}
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		goto ZZ_201DC_3710;
	}
	if (A1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_3700;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	A2 = V0;
	V0 = A2 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_371C;
ZZ_201DC_3700:
	V0 <<= 2;
	V0 += 96;
	A2 = S2 + V0;
	goto ZZ_201DC_371C;
ZZ_201DC_3710:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	A2 = V0;
ZZ_201DC_371C:
	V0 = EMU_ReadU32(SP + 24); //+ 0x18
	V1 = EMU_ReadU32(SP + 28); //+ 0x1C
	A0 = EMU_ReadU32(SP + 32); //+ 0x20
	EMU_Write32(A2,V0);
	EMU_Write32(A2 + 4,V1); //+ 0x4
	EMU_Write32(A2 + 8,A0); //+ 0x8
ZZ_201DC_3734:
	V1 = S1 >> 15;
	V1 &= 0x7;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 += S2;
	V1 = EMU_ReadU32(SP + 40); //+ 0x28
	A0 = EMU_ReadU32(SP + 44); //+ 0x2C
	A1 = EMU_ReadU32(SP + 48); //+ 0x30
	EMU_Write32(V0 + 128,V1); //+ 0x80
	EMU_Write32(V0 + 132,A0); //+ 0x84
	EMU_Write32(V0 + 136,A1); //+ 0x88
  return;
ZZ_201DC_376C:
	V0 = EMU_ReadU32(S2 + 128); //+ 0x80
	V1 = EMU_ReadU32(S2 + 132); //+ 0x84
	A0 = EMU_ReadU32(S2 + 136); //+ 0x88
	EMU_Write32(SP + 56,V0); //+ 0x38
	EMU_Write32(SP + 60,V1); //+ 0x3C
	EMU_Write32(SP + 64,A0); //+ 0x40
	V0 = EMU_ReadU32(S2 + 128); //+ 0x80
	V1 = EMU_ReadU32(S2 + 132); //+ 0x84
	A0 = EMU_ReadU32(S2 + 136); //+ 0x88
	EMU_Write32(SP + 80,V0); //+ 0x50
	EMU_Write32(SP + 84,V1); //+ 0x54
	EMU_Write32(SP + 88,A0); //+ 0x58
	V1 = EMU_ReadU32(GP + 696); //+ 0x2B8
	if (S2 == V1)
	{
		A1 = SP + 56;
		goto ZZ_201DC_37BC;
	}
	A1 = SP + 56;
	V0 = EMU_ReadU32(S2 + 100); //+ 0x64
	if (V0 != V1)
	{
		A0 = S2;
		goto ZZ_201DC_37C8;
	}
	A0 = S2;
ZZ_201DC_37BC:
	A0 = S2;
	V0 = EMU_Invoke(0x800289B4,0);
	A0 = S2;
ZZ_201DC_37C8:
	A1 = SP + 80;
	V0 = EMU_Invoke(0x80028644,0);
	EMU_Write32(S2 + 244,V0); //+ 0xF4
	A1 = S1 & 0xFFF;
	V0 = 0xBE0;
	if (A1 == V0)
	{
		V0 = S1 & 0xE00;
		goto ZZ_201DC_3844;
	}
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		goto ZZ_201DC_3820;
	}
	if (A1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_3810;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	A2 = V0;
	V0 = A2 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_382C;
ZZ_201DC_3810:
	V0 <<= 2;
	V0 += 96;
	A2 = S2 + V0;
	goto ZZ_201DC_382C;
ZZ_201DC_3820:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	A2 = V0;
ZZ_201DC_382C:
	V0 = EMU_ReadU32(SP + 112); //+ 0x70
	V1 = EMU_ReadU32(SP + 116); //+ 0x74
	A0 = EMU_ReadU32(SP + 120); //+ 0x78
	EMU_Write32(A2,V0);
	EMU_Write32(A2 + 4,V1); //+ 0x4
	EMU_Write32(A2 + 8,A0); //+ 0x8
ZZ_201DC_3844:
	V1 = S1 >> 15;
	V1 &= 0x7;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 += S2;
	V1 = EMU_ReadU32(SP + 80); //+ 0x50
	A0 = EMU_ReadU32(SP + 84); //+ 0x54
	A1 = EMU_ReadU32(SP + 88); //+ 0x58
	EMU_Write32(V0 + 128,V1); //+ 0x80
	EMU_Write32(V0 + 132,A0); //+ 0x84
	EMU_Write32(V0 + 136,A1); //+ 0x88
  return;
ZZ_201DC_387C:
	V0 = S1 >> 18;
	V1 = V0 & 0x7;
	A3 = V1 - 4;
	A3 = A3 < 2;
	V0 = 0x5;
	if (V1 == V0)
	{
		T0 = R0;
		goto ZZ_201DC_38A4;
	}
	T0 = R0;
	V0 = 0x3;
	if (V1 != V0)
	{
		goto ZZ_201DC_38A8;
	}
ZZ_201DC_38A4:
	T0 = 0x1;
ZZ_201DC_38A8:
	V0 = EMU_ReadU32(S2 + 128); //+ 0x80
	V1 = EMU_ReadU32(S2 + 132); //+ 0x84
	A0 = EMU_ReadU32(S2 + 136); //+ 0x88
	EMU_Write32(SP + 112,V0); //+ 0x70
	EMU_Write32(SP + 116,V1); //+ 0x74
	EMU_Write32(SP + 120,A0); //+ 0x78
	V0 = EMU_ReadU32(S2 + 40); //+ 0x28
	if (V0)
	{
		A1 = SP + 112;
		goto ZZ_201DC_38D8;
	}
	A1 = SP + 112;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 30996); //+ 0x7914
ZZ_201DC_38D8:
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	V0 = EMU_ReadU32(V0 + 764); //+ 0x2FC
	V0 &= 0x1;
	if (!V0)
	{
		goto ZZ_201DC_3908;
	}
	if (!T0)
	{
		A2 = 0x2;
		goto ZZ_201DC_3914;
	}
	A2 = 0x2;
	A2 = 0x6;
	goto ZZ_201DC_3914;
ZZ_201DC_3908:
	if (!T0)
	{
		A2 = 0x1;
		goto ZZ_201DC_3914;
	}
	A2 = 0x1;
	A2 = 0x5;
ZZ_201DC_3914:
	A0 = S2;
	A3 = A3 < 1;
	V0 = EMU_Invoke(0x80028E3C,0);
	A1 = S1 & 0xFFF;
	V0 = 0xBE0;
	if (A1 == V0)
	{
		V0 = S1 & 0xE00;
		goto ZZ_201DC_3990;
	}
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		goto ZZ_201DC_396C;
	}
	if (A1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_395C;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	A2 = V0;
	V0 = A2 + 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_3978;
ZZ_201DC_395C:
	V0 <<= 2;
	V0 += 96;
	A2 = S2 + V0;
	goto ZZ_201DC_3978;
ZZ_201DC_396C:
	A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	A2 = V0;
ZZ_201DC_3978:
	V0 = EMU_ReadU32(SP + 128); //+ 0x80
	V1 = EMU_ReadU32(SP + 132); //+ 0x84
	A0 = EMU_ReadU32(SP + 136); //+ 0x88
	EMU_Write32(A2,V0);
	EMU_Write32(A2 + 4,V1); //+ 0x4
	EMU_Write32(A2 + 8,A0); //+ 0x8
ZZ_201DC_3990:
	V1 = S1 >> 15;
	V1 &= 0x7;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 += S2;
	V1 = EMU_ReadU32(SP + 112); //+ 0x70
	A0 = EMU_ReadU32(SP + 116); //+ 0x74
	A1 = EMU_ReadU32(SP + 120); //+ 0x78
	EMU_Write32(V0 + 128,V1); //+ 0x80
	EMU_Write32(V0 + 132,A0); //+ 0x84
	EMU_Write32(V0 + 136,A1); //+ 0x88
  return;
ZZ_201DC_39C8:
	A0 = S2;
	V0 = EMU_Invoke(0x8002940C,0);
}

GOOL_OPERATION GOOL_OP_8F(emuptr<goolobj> obj, uint32_t instruction, uint32_t &flags, emuptr<goolobj> recipient, uint32_t opcode)
{
  // setup
  S1 = instruction;
  S2 = obj;
  S5 = opcode;
  EMU_Write32(SP + 208,flags); //+ 0xD0
  EMU_Write32(SP + 224,recipient); //+ 0xE0
  
// ZZ_201DC_39F0:
	V1 = S1 & 0xFFF;
	V0 = S1 & 0xE00;
	T1 = 0xE00;
	if (V0 != T1)
	{
		A1 = V1;
		goto ZZ_201DC_3A34;
	}
	A1 = V1;
	if (V1 != FP)
	{
		V0 = S1 & 0x1FF;
		goto ZZ_201DC_3A24;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	T0 = V0;
	EMU_Write32(S2 + 220,T0); //+ 0xDC
	goto ZZ_201DC_3A40;
ZZ_201DC_3A24:
	V0 <<= 2;
	V0 += 96;
	T0 = S2 + V0;
	goto ZZ_201DC_3A40;
ZZ_201DC_3A34:	
  A0 = S2;
	V0 = EMU_Invoke(0x8001FB34,0);
	T0 = V0;
ZZ_201DC_3A40:
	V1 = 0xFFFD0000;
	V0 = EMU_ReadU32(S2 + 200); //+ 0xC8
	V1 |= 0xFFFF;
	V0 &= V1;
	V1 = S1 >> 12;
	V1 &= 0x3F;
	EMU_Write32(S2 + 200,V0); //+ 0xC8
	V0 = 0x1F;
	if (V1 != V0)
	{
		A0 = V1;
		goto ZZ_201DC_3A7C;
	}
	A0 = V1;
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
	goto ZZ_201DC_3A88;
ZZ_201DC_3A7C:
	V0 = A0 << 2;
	V0 += 96;
	V0 += S2;
ZZ_201DC_3A88:
	V0 = EMU_ReadU32(V0);
	if (!V0)
	{
		V0 = 0x8F;
		goto ZZ_201DC_3B90;
	}
	V0 = 0x8F;
	if (S5 == V0)
	{
		goto ZZ_201DC_3AB0;
	}
	T1 = EMU_ReadU32(SP + 224); //+ 0xE0
	if (!T1)
	{
		goto ZZ_201DC_3B90;
	}
ZZ_201DC_3AB0:
	if (!T0)
	{
		V0 = S1 >> 18;
		goto ZZ_201DC_3B90;
	}
	V0 = S1 >> 18;
	A3 = V0 & 0x7;
	if (!A3)
	{
		A0 = R0;
		goto ZZ_201DC_3AF0;
	}
	A0 = R0;
	A1 = SP + 24;
ZZ_201DC_3AC8:
	V0 = A0 - A3;
	V1 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 <<= 2;
	V0 += V1;
	V0 = EMU_ReadU32(V0);
	A0 += 1;
	EMU_Write32(A1 + 120,V0); //+ 0x78
	V0 = (int32_t)A0 < (int32_t)A3;
	if (V0)
	{
		A1 += 4;
		goto ZZ_201DC_3AC8;
	}
	A1 += 4;
ZZ_201DC_3AF0:
	V0 = 0x8F;
	if (S5 == V0)
	{
		V0 = S5 < 144;
		goto ZZ_201DC_3B6C;
	}
	V0 = S5 < 144;
	if (!V0)
	{
		V0 = 0x87;
		goto ZZ_201DC_3B14;
	}
	V0 = 0x87;
	if (S5 == V0)
	{
		V0 = SP + 144;
		goto ZZ_201DC_3B28;
	}
	V0 = SP + 144;
	goto ZZ_201DC_3B94;
ZZ_201DC_3B14:
	V0 = 0x90;
	if (S5 == V0)
	{
		A0 = S2;
		goto ZZ_201DC_3B44;
	}
	A0 = S2;
	goto ZZ_201DC_3B94;
ZZ_201DC_3B28:
	A1 = EMU_ReadU32(SP + 224); //+ 0xE0
	EMU_Write32(SP + 16,V0); //+ 0x10
	A2 = EMU_ReadU32(T0);	
  A0 = S2;
	V0 = EMU_Invoke(0x80024040,0);
	goto ZZ_201DC_3B94;
ZZ_201DC_3B44:
	A1 = EMU_ReadU32(SP + 224); //+ 0xE0
	V0 = SP + 144;
	EMU_Write32(SP + 16,A3); //+ 0x10
	A3 = S1 >> 21;
	EMU_Write32(SP + 20,V0); //+ 0x14
	A2 = EMU_ReadU32(T0);	
  A3 &= 0x7;
	V0 = EMU_Invoke(0x800251B8,0);
	goto ZZ_201DC_3B94;
ZZ_201DC_3B6C:
	A0 = S2;
	A2 = S1 >> 21;
	V0 = SP + 144;
	EMU_Write32(SP + 16,V0); //+ 0x10
	A1 = EMU_ReadU32(T0);	
  A2 &= 0x7;
	V0 = EMU_Invoke(0x80025134,0);
	goto ZZ_201DC_3B94;
ZZ_201DC_3B90:
	EMU_Write32(S2 + 244,R0); //+ 0xF4
ZZ_201DC_3B94:
	V0 = EMU_ReadU32(S2 + 200); //+ 0xC8
	V1 = 0x20000;
	V0 &= V1;
	if (V0)
	{
		V0 = S1 >> 16;
		goto ZZ_201DC_3BBC;
	}
	V0 = S1 >> 16;
	V1 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 &= 0x1C;
	V1 = V1 - V0;
	EMU_Write32(S2 + 220,V1); //+ 0xDC
  flags = EMU_ReadU32(SP + 208); //+ 0xD0
  return;
ZZ_201DC_3BBC:
	T1 = EMU_ReadU32(SP + 208); //+ 0xD0
	V0 = T1 & 0x2;
  flags = EMU_ReadU32(SP + 208); //+ 0xD0
	if (V0)
	{
		greturn (ERROR_CODE_SUCCESS);
	}
	V0 = EMU_ReadU32(S2 + 220); //+ 0xDC
	V0 -= 4;
	EMU_Write32(S2 + 220,V0); //+ 0xDC
}