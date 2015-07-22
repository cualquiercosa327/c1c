#include "core.h"
#include "emu.h"
#include "ext.h"

int CORE_Main(void)
{
	EMU_Invoke(0x8003E0C0,0);
	EMU_Write32(0x80056410,1);
	EMU_Invoke(0x8001652C,0);
	CORE_Loop(0x19);
	EMU_Invoke(0x8001668C,0);
	return 0;
}

void CORE_Loop(uint32_t levelid)
{
	SP -= 240;
	EMU_Write32(SP + 200,S0); //+ 0xC8
	S1 = levelid;
	EMU_Write32(SP + 204,S1); //+ 0xCC
	V0 = EMU_Invoke(0x80026140,0);
	V0 = EMU_Invoke(0x80015B58,2,0x8005C528,S1);
	V0 = EMU_Invoke(0x80011DD0,0);
	do
	{
		if ((EMU_ReadU32(0x8005E71C) & 0x800) && !EMU_ReadU32(0x80061A30))
    {
      V0 = EMU_ReadU32(0x8005C53C);
      V1 = EMU_ReadU32(V0 + 4);
			if ((V1 != 0x19 && V1 != 0x2D && V1 != 0x38 && (int32_t)EMU_ReadU32(0x800619B4) != -1) || (EMU_ReadU32(0x800619B4) > 0))
			{
        V0 = !EMU_ReadU32(GP + 4);
		   	EMU_Write32(GP + 4,V0); //+ 0x4
				if (V0)
				{
          if (EMU_ReadU32(0x800618BC))
          {
            goto ZZ_11FC4_1C0;
          }
          V0 = EMU_Invoke(0x8001C6C8,6,0x80060DF0,4,4,0,0,0);        
          EMU_Write32(0x800618BC,V0);
          if (V0 >= 0xFFFFFF02)
          {
            EMU_Write32(GP + 4,0);
            EMU_Write32(0x800618BC,0);
          }
          else
          {
            V0 = EMU_ReadU32(0x80058408);
            V1 = EMU_ReadU32(0x80034520);
            V0 = EMU_ReadU32(V0 + 124); //+ 0x7C
            EMU_Write32(GP + 16,1); //+ 0x10
            EMU_Write32(GP + 444,V1); //+ 0x1BC
            EMU_Write32(GP + 448,V0); //+ 0x1C0
            goto ZZ_11FC4_1C0;
				  }
        }
				else
				{
          if (!EMU_ReadU32(0x800618BC))
          {
            goto ZZ_11FC4_1C0;
          }
          A1 = EMU_ReadU32(0x800618BC);
          EMU_Invoke(0x80024040,5,0,A1,0xC00,1,SP + 192); // resume from pause
          V1 = EMU_ReadU32(GP + 444); //+ 0x1BC
          A0 = EMU_ReadU32(0x80058408);
          V0 = EMU_ReadU32(GP + 448); //+ 0x1C0
          EMU_Write32(GP + 16,-1); //+ 0x10
          EMU_Write32(0x800618BC,0);
          EMU_Write32(0x80034520,V1);
          EMU_Write32(A0 + 124,V0); //+ 0x7C
        }
				goto ZZ_11FC4_1C0;
			}
    }
    EMU_Write32(GP + 16,0); //+ 0x10
ZZ_11FC4_1C0:
		if (EMU_ReadU32(0x800566B4) && EMU_ReadU32(0x800566B0) != 0x6396347F)
		{
			EMU_Invoke(0x8002E98C,1,0x800566B0);
		}
		if ((int32_t)EMU_ReadU32(0x80056714) == -1)
		{
			V0 = EMU_ReadU32(0x8005C53C);
			V0 = EMU_ReadU32(V0 + 4); //+ 0x4
			if (V0 != 0x19)
			{
				V1 = EMU_ReadU32(0x800618D0);
				if (V1 == 0x200 || V1 == 0x300 || V1 == 0x400)
				{
					EMU_Write32(0x80056714,0x19);
				}
			}
		}
		if ((int32_t)EMU_ReadU32(0x80056714) != -1)
		{
			S1 = EMU_ReadU32(0x80056714);
			EMU_Invoke(0x80025134,5,0,0x2900,0,0,0);
			if ((int32_t)EMU_ReadU32(0x80056714) != -2)
			{
				S0 = 0;
			}
			else
			{
				S1 = EMU_ReadU32(0x800579A4);
				S0 = 0x1;
			}
			EMU_Write32(0x80056490,S0);
			EMU_Write32(0x8005C54C,0x2);
			EMU_Invoke(0x80016420,1,0x8005C528);
			EMU_Write32(GP + 4,0);
      if (S1 == 0x19)
      {
			  EMU_Write32(0x800618A0,0);
        EMU_Write32(0x80061A3C,0);
        EMU_Write32(0x800618F8,0);
        EMU_Write32(0x800618FC,0);
			  EMU_Write32(0x80061900,0);
        EMU_Write32(0x800619A0,-1);
      }
			EMU_Invoke(0x80015B58,2,0x8005C528,S1);
			EMU_Invoke(0x80011DD0,0);
			if (S0)
			{
				EMU_Write32(0x80056714,-2);
				EMU_Invoke(0x80025928,0);
        EMU_Write32(0x80056714,-1);
        EMU_Invoke(0x80026650,1,0x80057974);
			}
			EMU_Write32(0x80056490,0);
		}
		EMU_Invoke(0x800134C8,1,-1);
    EMU_Invoke(0x80025928,0);
		if (!EMU_ReadU32(GP + 4)) //+ 0x4
		{
      V0 = EMU_ReadU32(0x80057914);
      V0 = EMU_ReadU32(V0 + 16); //+ 0x10
      if (EMU_ReadU32(V0 + 764) & 0x600) //+ 0x2FC
			{
        EMU_Invoke(0x8002EC68,1,0);
      }
      if (!EMU_ReadU32(GP + 4)) //+ 0x4
      {
        V0 = EMU_ReadU32(0x80057914);
        V0 = EMU_ReadU32(V0 + 16); //+ 0x10
        if (EMU_ReadU32(V0 + 764) & 0x100) //+ 0x2FC
		  	{
          EMU_Invoke(0x8002EBB4,1,0);
        }
        if (!EMU_ReadU32(GP + 4)) //+ 0x4
        {
		      EMU_Invoke(0x8002B2BC,0);
        }
      }
    }
    EMU_Invoke(0x80017A14,0);
    if (EMU_ReadU32(0x800618B0) & 1)
    {
      V0 = EMU_ReadU32(0x80057914);
      V1 = EMU_ReadU32(V0 + 16); //+ 0x10
      V0 = EMU_ReadU32(V1);
      if (V0 && !EMU_ReadU32(GP))
      {
        A0 = EMU_ReadU32(V1 + 764); //+ 0x2FC
        if (A0 & 0x400)
        {
          A0 = EMU_ReadU32(0x8005840C);
          EMU_Invoke(0x8001A2E0,1,A0 + 136); //+ 0x88        
        }
        else if ((A0 & 0x210) == 0x210)
        {
          A0 = EMU_ReadU32(0x8005840C);
          EMU_Invoke(0x8001A0CC,1,A0 + 136); //+ 0x88        
        }
        else if (A0 & 0x10)
        {
          A0 = EMU_ReadU32(0x8005840C);
          EMU_Invoke(0x80019BCC,1,A0 + 136); //+ 0x88        
        }
        else if (A0 & 0x100)
        {
          A0 = EMU_ReadU32(0x8005840C);
          EMU_Invoke(0x80019DE0,1,A0 + 136); //+ 0x88        
        }
        else if (A0 & 0x200)
        {
          A0 = EMU_ReadU32(0x8005840C);
          EMU_Invoke(0x80019F90,1,A0 + 136); //+ 0x88        
        }
        else
        {
          A0 = EMU_ReadU32(0x8005840C);
          EMU_Invoke(0x80019508,1,A0 + 136); //+ 0x88        
        }
      }
    }
    A0 = EMU_ReadU32(GP + 4); //+ 0x4
    EMU_Invoke(0x8001D5EC,1,!A0);
    V0 = EMU_ReadU32(0x8005C53C);
    V0 = EMU_ReadU32(V0 + 4);
    if (V0 == 0x19)
    {
      A0 = EMU_ReadU32(0x8005840C);
      EMU_Invoke(0x800326D8,1,A0 + 136); //+ 0x88
    }
    EXT_HandleExtensions();
    EMU_Invoke(0x80016E5C,0);
  } while (!EMU_ReadU32(0x80056428));
  EMU_Write32(0x800618B0,0);
  EMU_Invoke(0x80016E5C,0);
  EMU_Invoke(0x80016E5C,0);
  V0 = EMU_Invoke(0x80016420,1,0x8005C528);	
  S1 = EMU_ReadU32(SP + 204); //+ 0xCC
	S0 = EMU_ReadU32(SP + 200); //+ 0xC8
	SP += 240;
}

void CORE_Start(void)
{
	for (uint32_t i = 0x80056598;i < 0x80061A78;i += 4)
	{
		EMU_Write32(i,0);
	}
	V0 = EMU_ReadU32(0x80056408);
	V0 = EMU_CheckedAdd(V0,-8);
	SP = V0 | 0x80000000;
	A1 = V0 - EMU_ReadU32(0x80056404) - 0x61A78;
	EMU_Write32(0x800538F0,A1);
	EMU_Write32(0x800538EC,0x80061A78);
	EMU_Write32(0x80056694,RA); // $RA is garbage here
	GP = 0x800563FC;
	FP = SP;
	EMU_Invoke(0x80011A18,2,0x80061A7C,A1); // InitHeap
	CORE_Main();
	EMU_Break(1);
}

void CORE_VSync(int32_t count,int32_t timeout)
{
	timeout <<= 15;
	while ((int32_t)EMU_ReadU32(0x800549F0) < count)
	{
		if (!timeout--)
		{
			EMU_Invoke(0x8003E6D4,1,0x80010FF0); // puts
			EMU_Invoke(0x8003E4E0,1,0);
			EMU_Invoke(0x8003E6E4,2,3,0);
			break;
		}
		EMU_Cycle(20);
		EMU_RunInterrupts();
	}
}
