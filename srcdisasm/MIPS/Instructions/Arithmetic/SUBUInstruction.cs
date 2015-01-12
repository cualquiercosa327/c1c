using System.IO;

namespace PSXDiscompile
{
    public sealed class SUBUInstruction : Instruction
    {
        private Register rs;
        private Register rt;
        private Register rd;

        public SUBUInstruction(Register rs,Register rt,Register rd)
        {
            this.rs = rs;
            this.rt = rt;
            this.rd = rd;
        }

        public override string ToString()
        {
            return string.Format("SUBU ${0},${1},${2}",rd,rs,rt);
        }

        public override void Discompile(Program p,int address,bool direct)
        {
            //p.WriteLine("ZZ_ONCE(0x{0:X});",address);return;
            if (rs == Register.R0)
                p.WriteLine("{0} = -{1};",rd,rt);
            else
                p.WriteLine("{0} = {1} - {2};",rd,rs,rt);
        }
    }
}
