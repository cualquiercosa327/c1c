using System.IO;

namespace PSXDiscompile
{
    public sealed class COPInstruction : Instruction
    {
        private int copid;
        private int copargs;

        public COPInstruction(int copid,int copargs)
        {
            this.copid = copid;
            this.copargs = copargs;
        }

        public override string ToString()
        {
            return string.Format("COP{0} 0x{1:X7}",copid,copargs);
        }

        public override void Discompile(Program p,int address,bool direct)
        {
            //p.WriteLine("ZZ_ONCE(0x{0:X});",address);return;
            if (copid == 0)
            {
                p.WriteLine("COP0_Execute({0});",copargs);
            }
            else if (copid == 2)
            {
                switch(copargs)
                {
                    case 0x180001: p.WriteLine("GTE_RotateTranslateProjectSingle();"); break;
                    case 0x280030: p.WriteLine("GTE_RotateTranslateProjectTriple();"); break;
                    case 0x1400006:p.WriteLine("GTE_NormalClip();"); break;
                    case 0x118043F:p.WriteLine("GTE_NormalColorTriple();"); break;
                    case 0x486012: p.WriteLine("GTE_Multiply_V0_Rotation();"); break;
                    case 0x48E012: p.WriteLine("GTE_Multiply_V1_Rotation();"); break;
                    case 0x496012: p.WriteLine("GTE_Multiply_V2_Rotation();"); break;
                    case 0x49E012: p.WriteLine("GTE_Multiply_IR_Rotation();"); break;
                    case 0x4A6012: p.WriteLine("GTE_Multiply_V0_Light();"); break;
                    case 0x4AE012: p.WriteLine("GTE_Multiply_V1_Light();"); break;
                    case 0x4B6012: p.WriteLine("GTE_Multiply_V2_Light();"); break;
                    case 0x4BE012: p.WriteLine("GTE_Multiply_IR_Light();"); break;
                    case 0x480012: p.WriteLine("GTE_MultiplyAdd_V0_Rotation_Translation();"); break;
                    case 0x780010: p.WriteLine("GTE_DepthCueSingle();"); break;
                    case 0xF8002A: p.WriteLine("GTE_DepthCueTriple();"); break;
                    case 0x680029: p.WriteLine("GTE_DepthCueColorLight();"); break;
                    default: 
                        System.Console.WriteLine("GTE: address: 0x{0:X}, op: 0x{1:X}", address, copargs);
                        throw new PSXException();                
                }
            }
            else
            {
                throw new PSXException();
            }
        }
    }
}
