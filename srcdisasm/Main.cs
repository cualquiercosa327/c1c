using System;
using System.Collections.Generic;

namespace PSXDiscompile
{
    internal static class MainClass
    {
        private static Program p;

        private static void Main()
        {
            p = Program.LoadEXE(@"..\SCUS_949.00");
            DefineSwitchTables();
            DefineFunctionPointers();
            DefineWeirdReturns();
            DefineBIOSStubs();
            DefineOther();
            DefineHacks();
            p.FlushMarks();
            DefineUnknown();
            p.Discompile();
            p.Disassemble(@"..\zz_dis.txt");
            p.DumpCodemap(@"..\zz_map.txt");
        }

        private static void DefineSwitchTables()
        {
            // Compiler-generated switch-case tables
            p[0x1277C].DefineSwitchTable(0x10088,26);
            p[0x129A0].DefineSwitchTable(0x100F0,15);
            p[0x12AB4].DefineSwitchTable(0x10130,15);
            p[0x13D98].DefineSwitchTable(0x10170,30);
            p[0x16198].DefineSwitchTable(0x101E8,9);
            p[0x16C54].DefineSwitchTable(0x102D8,28);
            p[0x16D9C].DefineSwitchTable(0x10348,28);
            p[0x1EB68].DefineSwitchTable(0x104F8,7);
            p[0x21F64].DefineSwitchTable(0x10760,16);
            p[0x222EC].DefineSwitchTable(0x107A0,10);
            p[0x2265C].DefineSwitchTable(0x107C8,12);
            p[0x23280].DefineSwitchTable(0x107F8,6);
            p[0x2339C].DefineSwitchTable(0x10810,8);
            p[0x2383C].DefineSwitchTable(0x10830,7);
            p[0x24D0C].DefineSwitchTable(0x10850,5);
            p[0x26314].DefineSwitchTable(0x10864,42);
            p[0x27E04].DefineSwitchTable(0x1090C,5);
            p[0x2B358].DefineSwitchTable(0x10924,9);
            p[0x2C3FC].DefineSwitchTable(0x1094C,12);
            p[0x2EBEC].DefineSwitchTable(0x1097C,37);
            p[0x2ECF8].DefineSwitchTable(0x10A14,53);
            p[0x2EE88].DefineSwitchTable(0x10AEC,53);
            p[0x2FF44].DefineSwitchTable(0x10BD8,48);
            p[0x30978].DefineSwitchTable(0x10C98,13);
            p[0x31344].DefineSwitchTable(0x10CD0,49);
            p[0x31A7C].DefineSwitchTable(0x10D98,5);
            p[0x31F00].DefineSwitchTable(0x10DAC,15);
            p[0x31F74].DefineSwitchTable(0x10DEC,11);
            p[0x320A8].DefineSwitchTable(0x10E1C,15);
            p[0x3A9D4].DefineSwitchTable(0x10EC0,9);
            p[0x3D510].DefineSwitchTable(0x10EE8,11);
            p[0x3DA00].DefineSwitchTable(0x10F3C,45);
            p[0x43DFC].DefineSwitchTable(0x1156C,5);
            p[0x483D8].DefineSwitchTable(0x116A8,8);
            p[0x484A8].DefineSwitchTable(0x116C8,8);
            p[0x48C4C].DefineSwitchTable(0x11708,8);

            // GOOL Opcode Jump Table
            p[0x20250].DefineSwitchTable(0x10518,146);
        }

        private static void DefineFunctionPointers()
        {
            List<Word> fs;

            // Subsystems Function 2
            fs = new List<Word>();
            fs.Add(p[0x16C18]);
            fs.Add(p[0x29A58]);
            fs.Add(p[0x2D638]);
            fs.Add(p[0x1AAD8]);
            fs.Add(p[0x2FDE0]);
            fs.Add(p[0x31244]);
            fs.Add(p[0x31BAC]);
            fs.Add(p[0x2E8A4]);
            p[0x15E40].AddCalleeList(fs);

            // Subsystems Function 3
            fs = new List<Word>();
            fs.Add(p[0x253A0]);
            fs.Add(p[0x1AC60]);
            fs.Add(p[0x31BF8]);
            p[0x163E0].AddCalleeList(fs);

            // Subsystems Function 4
            fs = new List<Word>();
            fs.Add(p[0x1767C]);
            fs.Add(p[0x25628]);
            fs.Add(p[0x256DC]);
            p[0x13060].AddCalleeList(fs);
            p[0x1328C].AddCalleeList(fs);

            // Subsystems Function 5
            fs = new List<Word>();
            p[0x13450].AddCalleeList(fs);

            // Subsystems Function 6
            fs = new List<Word>();
            fs.Add(p[0x16D14]);
            fs.Add(p[0x29AD8]);
            fs.Add(p[0x2D694]);
            fs.Add(p[0x1AC28]);
            fs.Add(p[0x2FFC0]);
            fs.Add(p[0x31938]);
            fs.Add(p[0x32298]);
            fs.Add(p[0x2E8BC]);
            p[0x16468].AddCalleeList(fs);

            // Argument
            fs = new List<Word>();
            fs.Add(p[0x1DA0C]);
            p[0x1B66C].AddCalleeList(fs);
            p[0x1B8A4].AddCalleeList(fs);

            // Argument
            fs = new List<Word>();
            fs.Add(p[0x1D11C]);
            fs.Add(p[0x1D1E0]);
            fs.Add(p[0x24CC8]);
            p[0x1B75C].AddCalleeList(fs);
            p[0x1B9C8].AddCalleeList(fs);

            // Argument
            fs = new List<Word>();
            fs.Add(p[0x1BA90]);
            fs.Add(p[0x1BAB0]);
            fs.Add(p[0x1BCA4]);
            p[0x1B7CC].AddCalleeList(fs);

            // Argument
            fs = new List<Word>();
            fs.Add(p[0x1B92C]);
            p[0x1BA54].AddCalleeList(fs);

            // Argument
            fs = new List<Word>();
            fs.Add(p[0x2C3B8]);
            p[0x38CEC].AddCalleeList(fs);

            // for start? __do_global_dtors? vsynccallbacks (3)
          
            // 8003F650; GPU printf call
            fs = new List<Word>();
            fs.Add(p[0x3D730]);
            p[0x3F65C].AddCalleeList(fs);
            p[0x3F6A8].AddCalleeList(fs);
            p[0x3F6EC].AddCalleeList(fs);
            p[0x3FC44].AddCalleeList(fs);
            p[0x3FCA8].AddCalleeList(fs);
            p[0x3FCF8].AddCalleeList(fs);
            p[0x3FD44].AddCalleeList(fs);
            p[0x3FD6C].AddCalleeList(fs);
            p[0x3FD88].AddCalleeList(fs);
            p[0x3FDA4].AddCalleeList(fs);
            p[0x3FEDC].AddCalleeList(fs);
            p[0x3FF60].AddCalleeList(fs);
            p[0x40078].AddCalleeList(fs);
            p[0x400E0].AddCalleeList(fs);
            p[0x40194].AddCalleeList(fs);
            p[0x40200].AddCalleeList(fs);
            p[0x40290].AddCalleeList(fs);
            p[0x403AC].AddCalleeList(fs);
            p[0x403D4].AddCalleeList(fs);
            p[0x4064C].AddCalleeList(fs);
            p[0x40708].AddCalleeList(fs);
            p[0x407F4].AddCalleeList(fs);
            p[0x40878].AddCalleeList(fs);
            p[0x40948].AddCalleeList(fs);
            p[0x40A58].AddCalleeList(fs);
            
            fs = new List<Word>();
            fs.Add(p[0x4BB7C]);
            p[0x4B850].AddCalleeList(fs);
            p[0x4B8A0].AddCalleeList(fs);        
        }

        private static void DefineWeirdReturns()
        {

            p[0x33D08].IsWeirdReturn = true;
            p[0x33D8C].IsWeirdReturn = true;
            p[0x33E50].IsWeirdReturn = true;
            p[0x33EF0].IsWeirdReturn = true;
            p[0x34028].IsWeirdReturn = true;
            p[0x340AC].IsWeirdReturn = true;
            p[0x34170].IsWeirdReturn = true;
            p[0x34208].IsWeirdReturn = true;
            p[0x37ECC].IsWeirdReturn = true;
            p[0x37F20].IsWeirdReturn = true;
            p[0x37F70].IsWeirdReturn = true;
            p[0x38058].IsWeirdReturn = true;
            p[0x4CBF4].IsWeirdReturn = true;
            p[0x3AA40].IsWeirdReturn = true;
            p[0x3AA48].IsWeirdReturn = true;
            p[0x3AAD4].IsWeirdReturn = true;
            p[0x3AB00].IsWeirdReturn = true;
        }

        private static void DefineBIOSStubs()
        {
            // Stubs for BIOS calls
            // BIOS addresses are too far away to use a direct call/jump
            p[0x3D684].DirectBranch = 0xB0;
            p[0x3D694].DirectBranch = 0xA0;
            p[0x3D6A4].DirectBranch = 0xA0;
            p[0x3D6B4].DirectBranch = 0xA0;
            p[0x3D6C4].DirectBranch = 0xA0;
            p[0x3D6D4].DirectBranch = 0xA0;
            p[0x3D6E4].DirectBranch = 0xA0;
            p[0x3D6F4].DirectBranch = 0xA0;
            p[0x3D704].DirectBranch = 0xA0;
            p[0x3D714].DirectBranch = 0xA0;
            p[0x3D724].DirectBranch = 0xA0;
            p[0x3D734].DirectBranch = 0xA0;
            p[0x3DFA0].DirectBranch = 0xA0;
            p[0x3E19C].DirectBranch = 0xA0;
            p[0x3E1AC].DirectBranch = 0xB0;
            p[0x3E1BC].DirectBranch = 0xB0;
            p[0x3E1CC].DirectBranch = 0xB0;
            p[0x3E1DC].DirectBranch = 0xB0;
            p[0x3E1EC].DirectBranch = 0xB0;
            p[0x3E21C].DirectBranch = 0xB0;
            p[0x3E1AC].DirectBranch = 0xB0;
            p[0x3E1BC].DirectBranch = 0xB0;
            p[0x3E1CC].DirectBranch = 0xB0;
            p[0x3E1DC].DirectBranch = 0xB0;
            p[0x3E1EC].DirectBranch = 0xB0;
            p[0x3E1FC].DirectBranch = 0xB0;
            p[0x3E20C].DirectBranch = 0xB0;
            p[0x3E21C].DirectBranch = 0xB0;
            p[0x3E22C].DirectBranch = 0xB0;
            p[0x3E23C].DirectBranch = 0xB0;
            p[0x3E24C].DirectBranch = 0xB0;
            p[0x3E25C].DirectBranch = 0xB0;
            p[0x3E26C].DirectBranch = 0xB0;
            p[0x3E27C].DirectBranch = 0xB0;
            p[0x3E28C].DirectBranch = 0xB0;
            p[0x3E4B4].DirectBranch = 0xB0;
            p[0x3E4C4].DirectBranch = 0xB0;
            p[0x3E4D4].DirectBranch = 0xB0;
            p[0x3E4E4].DirectBranch = 0xB0;
            p[0x3E6D8].DirectBranch = 0xB0;
            p[0x3E6E8].DirectBranch = 0xC0;
            p[0x3EE08].DirectBranch = 0xA0;
            p[0x3EE18].DirectBranch = 0xA0;
            p[0x3EE28].DirectBranch = 0xB0;
            p[0x3EE38].DirectBranch = 0xB0;
            p[0x3EE48].DirectBranch = 0xB0;
            p[0x42B10].DirectBranch = 0xA0;
            p[0x43240].DirectBranch = 0xA0;
            p[0x43358].DirectBranch = 0xB0;
            p[0x47ED8].DirectBranch = 0xB0;
            p[0x51428].DirectBranch = 0xA0;
            p[0x51438].DirectBranch = 0xA0;
            p[0x51448].DirectBranch = 0xB0;
            p[0x51458].DirectBranch = 0xB0;
            p[0x51468].DirectBranch = 0xB0;
            p[0x51478].DirectBranch = 0xB0;
            p[0x51488].DirectBranch = 0xB0;
        }

        private static void DefineOther()
        {
            // Strange -0 -n construct
            p[0x33D08].AddDestination(0x33D38); //  -0 words
            p[0x33D08].AddDestination(0x33D28); //  -4 words
            p[0x33D08].AddDestination(0x33D18); //  -8 words
            p[0x33D8C].AddDestination(0x33DF8); //  -0 words
            p[0x33D8C].AddDestination(0x33DD0); // -10 words
            p[0x33D8C].AddDestination(0x33DA8); // -20 words
            p[0x33E50].AddDestination(0x33EBC); //  -0 words
            p[0x33E50].AddDestination(0x33E94); // -10 words
            p[0x33E50].AddDestination(0x33E6C); // -20 words
            p[0x34028].AddDestination(0x34058); //  -0 words
            p[0x34028].AddDestination(0x34048); //  -4 words
            p[0x34028].AddDestination(0x34038); //  -8 words
            p[0x340AC].AddDestination(0x34118); //  -0 words
            p[0x340AC].AddDestination(0x340F0); // -10 words
            p[0x340AC].AddDestination(0x340C8); // -20 words
            p[0x34170].AddDestination(0x341DC); //  -0 words
            p[0x34170].AddDestination(0x341B4); // -10 words
            p[0x34170].AddDestination(0x3418C); // -20 words

            // *n skip construct
            p[0x33EF0].AddDestination(0x33EF8); // 0*8 words
            p[0x33EF0].AddDestination(0x33F18); // 1*8 words
            p[0x33EF0].AddDestination(0x33F38); // 2*8 words
            p[0x33EF0].AddDestination(0x33F58); // 3*8 words
            p[0x33EF0].AddDestination(0x33F78); // 4*8 words
            p[0x33EF0].AddDestination(0x33F98); // 5*8 words
            p[0x34208].AddDestination(0x34210); // 0*8 words
            p[0x34208].AddDestination(0x34230); // 1*8 words
            p[0x34208].AddDestination(0x34250); // 2*8 words
            p[0x34208].AddDestination(0x34270); // 3*8 words
            p[0x34208].AddDestination(0x34290); // 4*8 words
            p[0x34208].AddDestination(0x342B0); // 5*8 words

            // potential for -1*2 here for infinite loop or what
            p[0x37ECC].AddDestination(0x37ED4); // 0*2 words
            p[0x37ECC].AddDestination(0x37EDC); // 1*2 words
            p[0x37ECC].AddDestination(0x37EE4); // 2*2 words
            p[0x37ECC].AddDestination(0x37EEC); // 3*2 words
            p[0x37ECC].AddDestination(0x37EF4); // 4*2 words
            p[0x37ECC].AddDestination(0x37EFC); // 5*2 words
            p[0x37ECC].AddDestination(0x37F04); // 6*2 words
            p[0x37F20].AddDestination(0x37F28); // 0*2 words
            p[0x37F20].AddDestination(0x37F30); // 1*2 words
            p[0x37F20].AddDestination(0x37F38); // 2*2 words
            p[0x37F20].AddDestination(0x37F40); // 3*2 words
            p[0x37F20].AddDestination(0x37F48); // 4*2 words
            p[0x37F20].AddDestination(0x37F50); // 5*2 words
            p[0x37F20].AddDestination(0x37F58); // 6*2 words
            p[0x37F20].AddDestination(0x37F60); // 7*2 words
            p[0x37F70].AddDestination(0x37F78); //  0*2 words
            p[0x37F70].AddDestination(0x37F80); //  1*2 words
            p[0x37F70].AddDestination(0x37F88); //  2*2 words
            p[0x37F70].AddDestination(0x37F90); //  3*2 words
            p[0x37F70].AddDestination(0x37F98); //  4*2 words
            p[0x37F70].AddDestination(0x37FA0); //  5*2 words
            p[0x37F70].AddDestination(0x37FA8); //  6*2 words
            p[0x37F70].AddDestination(0x37FB0); //  7*2 words
            p[0x37F70].AddDestination(0x37FB8); //  8*2 words
            p[0x37F70].AddDestination(0x37FC0); //  9*2 words
            p[0x37F70].AddDestination(0x37FC8); // 10*2 words
            p[0x37F70].AddDestination(0x37FD0); // 11*2 words
            p[0x37F70].AddDestination(0x37FD8); // 12*2 words
            p[0x37F70].AddDestination(0x37FE0); // 13*2 words
            p[0x37F70].AddDestination(0x37FE8); // 14*2 words
            p[0x37F70].AddDestination(0x37FF0); // 15*2 words
            p[0x37F70].AddDestination(0x37FF8); // 16*2 words
            p[0x37F70].AddDestination(0x38000); // 17*2 words
            p[0x37F70].AddDestination(0x38008); // 18*2 words
            p[0x37F70].AddDestination(0x38010); // 19*2 words
            p[0x37F70].AddDestination(0x38018); // 20*2 words
            p[0x37F70].AddDestination(0x38020); // 21*2 words
            p[0x37F70].AddDestination(0x38028); // 22*2 words
            p[0x37F70].AddDestination(0x38030); // 23*2 words
            p[0x37F70].AddDestination(0x38038); // 24*2 words
            p[0x37F70].AddDestination(0x38040); // 25*2 words
            p[0x38058].AddDestination(0x38060); // 0*2 words
            p[0x38058].AddDestination(0x38068); // 1*2 words
            p[0x38058].AddDestination(0x38070); // 2*2 words
            p[0x38058].AddDestination(0x38078); // 3*2 words
            p[0x38058].AddDestination(0x38080); // 4*2 words
            p[0x38058].AddDestination(0x38088); // 5*2 words
            p[0x38058].AddDestination(0x38090); // 6*2 words
            
            p[0x4CBF4].AddDestination(0x4CBFC);
            p[0x4CBF4].AddDestination(0x4CC24);
            p[0x4CBF4].AddDestination(0x4CC4C);
            p[0x4CBF4].AddDestination(0x4CC60);
            p[0x4CBF4].AddDestination(0x4CC74);
            p[0x4CBF4].AddDestination(0x4CC8C);
            p[0x4CBF4].AddDestination(0x4CCB0);
            p[0x4CBF4].AddDestination(0x4CCC4);
                                            
        } 

        static void DefineUnknown()
        {
            p.MarkUnknown(0x195CC);  // unused wgeo render routine
            p.MarkUnknown(0x2FD30);
            p.MarkUnknown(0x2FD38);
            p.MarkUnknown(0x2FD40);
            p.MarkUnknown(0x2FD48);
            p.MarkUnknown(0x2FD50);
            p.MarkUnknown(0x2FD58);
            p.MarkUnknown(0x2FD60);
            p.MarkUnknown(0x2FD68);
            p.MarkUnknown(0x2FD70);
            p.MarkUnknown(0x2FD78);
            p.MarkUnknown(0x2FD80);
            p.MarkUnknown(0x2FD88);
            p.MarkUnknown(0x2FD90);
            p.MarkUnknown(0x2FD98);
            p.MarkUnknown(0x2FDA0);
            p.MarkUnknown(0x2FDA8);
            p.MarkUnknown(0x2FDB0);
            p.MarkUnknown(0x2FDB8);
            p.MarkUnknown(0x2FDC0);
            p.MarkUnknown(0x2FDC8);
            // 0x32298 is unused
            p.MarkUnknown(0x34504);
            p.MarkUnknown(0x36D9C);
            p.MarkUnknown(0x3E818);
            p.MarkUnknown(0x3E858);
            p.MarkUnknown(0x3E88C);
            p.MarkUnknown(0x3EB50);
            p.MarkUnknown(0x3ECA4);
            p.MarkUnknown(0x3ED50);
            p.MarkUnknown(0x3EEAC);
            p.MarkUnknown(0x3EF24);
            p.MarkUnknown(0x3EFCC);
            p.MarkUnknown(0x3F150);
            p.MarkUnknown(0x416CC); 
            p.MarkUnknown(0x416E4);
            p.MarkUnknown(0x417CC);
            p.MarkUnknown(0x419E4);
            p.MarkUnknown(0x41C38);
            p.MarkUnknown(0x41ED4);
            p.MarkUnknown(0x41EFC);            
            p.MarkUnknown(0x41F10);
            p.MarkUnknown(0x41FDC);
            p.MarkUnknown(0x4271C);
            p.MarkUnknown(0x432DC);
            p.MarkUnknown(0x43304);
            p.MarkUnknown(0x4332C);
            p.MarkUnknown(0x44370);
            p.MarkUnknown(0x44AA8);
            p.MarkUnknown(0x45B24); // IDA doesn't mark this as a routine?
            p.MarkUnknown(0x45C04);
            p.MarkUnknown(0x466A0);
            p.MarkUnknown(0x49BA0);
            p.MarkUnknown(0x49C20);
            p.MarkUnknown(0x4A060);
            p.MarkUnknown(0x4A128);
            p.MarkUnknown(0x4A1EC);
            p.MarkUnknown(0x4A298);
            p.MarkUnknown(0x4A324);
            p.MarkUnknown(0x4A44C);
            p.MarkUnknown(0x4A594);
            p.MarkUnknown(0x4A608);
            p.MarkUnknown(0x4A67C);
            p.MarkUnknown(0x4A740);
            p.MarkUnknown(0x4A7E8);
            p.MarkUnknown(0x4A9FC);
            p.MarkUnknown(0x4AD64);    
            p.MarkUnknown(0x4AE44);
            p.MarkUnknown(0x4B828);
            p.MarkUnknown(0x4B868);
            //p.MarkUnknown(0x4BDB4);
            //p.MarkUnknown(0x4C074);
            //p.MarkUnknown(0x4C300);
            //p.MarkUnknown(0x4C39C);
            //p.MarkUnknown(0x4C764);       
            //p.MarkUnknown(0x4CDCC);
                
            /*
            p.MarkUnknown(0x3E968);
            p.MarkUnknown(0x3EDD8);
            p.MarkUnknown(0x3EE04);
            p.MarkUnknown(0x3EE14);
            p.MarkUnknown(0x3EE24);
            p.MarkUnknown(0x3EE34);
            p.MarkUnknown(0x3EE44);
            p.MarkUnknown(0x3EE54);
            p.MarkUnknown(0x3EF50);
            p.MarkUnknown(0x3EF7C);
            p.MarkUnknown(0x3F1F8);
            p.MarkUnknown(0x41F60);
            p.MarkUnknown(0x41FAC);
            p.MarkUnknown(0x42000);
            p.MarkUnknown(0x422E4);
            p.MarkUnknown(0x42864);
            p.MarkUnknown(0x42898);           
            p.MarkUnknown(0x43354);
            p.MarkUnknown(0x45A34);            
            p.MarkUnknown(0x4AF70);            
            p.MarkUnknown(0x4C3C8);
            p.MarkUnknown(0x4C4D4);        
            p.MarkUnknown(0x4D080);
            p.MarkUnknown(0x4D184);
            p.MarkUnknown(0x4D3BC);
            p.MarkUnknown(0x4D478); 
            p.MarkUnknown(0x4D498);
            p.MarkUnknown(0x4D65C);
            p.MarkUnknown(0x4D66C);
            p.MarkUnknown(0x4DDE4);
            p.MarkUnknown(0x4E330);
            p.MarkUnknown(0x4E59C);
            p.MarkUnknown(0x4E80C);
            p.MarkUnknown(0x4EA24);
            p.MarkUnknown(0x4EADC);
            p.MarkUnknown(0x4EBDC);
            p.MarkUnknown(0x4F090);
            p.MarkUnknown(0x4F1A4);
            p.MarkUnknown(0x4F680);
            p.MarkUnknown(0x4F8AC);
            p.MarkUnknown(0x500F8);
            p.MarkUnknown(0x501A8);
            p.MarkUnknown(0x50728);
            */
            
            /* these are used as args
            p.MarkUnknown(0x18DD0);
            p.MarkUnknown(0x1C850);
            p.MarkUnknown(0x18F84);
            p.MarkUnknown(0x18FA4);
            p.MarkUnknown(0x1D014); 
            p.MarkUnknown(0x2A4CC);
            */
            
            /*
            p.MarkBranch(0x4AD64);
            p.MarkBranch(0x4AE44);
            0x4a9fc
            0x4a740
            0x4a7e8
            0x49ba0
            0x4a060
            0x4a128
            0x4a1ec
            0x4a324
            0x4a44c
            
            p.MarkBranch(0x3E170);
            
            
            p.MarkUnknown(0x5519C);
            p.MarkUnknown(0x191B0);
            p.MarkUnknown(0x19E68);
            p.MarkUnknown(0x54498);
            p.MarkBranch(0x42D50);
            p.MarkUnknown(0x53408);
            p.MarkUnknown(0x53D10);
            p.MarkUnknown(0x5510C);
            p.MarkUnknown(0x53FE0);
            p.MarkBranch(0x4573C);
            p.MarkAnonymousJumpTable(0x5B8F0,0x5B924);
            p.MarkAnonymousJumpTable(0x5B930,0x5B99C);
            p.MarkAnonymousJumpTable(0x5B9A4,0x5B9AC);
            p.MarkAnonymousJumpTable(0x5B9B4,0x5BA00);
            p.MarkAnonymousJumpTable(0x5BA08,0x5BA44);
            p.MarkBranch(0x41FAC);
            p.MarkUnknown(0x54090);
            p.MarkUnknown(0x5456C);
            p.MarkUnknown(0x542C8);
            p.MarkUnknown(0x46BB4);
            p.MarkUnknown(0x48B90);
            p.MarkUnknown(0x4AAA8);
            p.MarkUnknown(0x4AD6C);
            p.MarkBranch(0x420E8);
            p.MarkBranch(0x42DDC);
            p.MarkBranch(0x42C34);
            p.MarkBranch(0x42EC4);
            p.MarkBranch(0x44138);
            p.MarkBranch(0x44C9C);
            p.MarkUnknown(0x4B1F8);
            p.MarkBranch(0x43FEC);
            p.MarkBranch(0x4401C);
            p.MarkBranch(0x44D08);
            p.MarkBranch(0x45158);
            p.MarkUnknown(0x48AAC);
            p.MarkUnknown(0x4B0D8);
            p.MarkBranch(0x42F08);
            p.MarkBranch(0x3E794);
            p.MarkBranch(0x44C18);
            p.MarkUnknown(0x4B37C);
            p.MarkBranch(0x42E14);
            p.MarkBranch(0x43C34);
            p.MarkUnknown(0x53830);
            p.MarkUnknown(0x4F9D0);
            p.MarkBranch(0x44C48);
            p.MarkUnknown(0x46C04);
            p.MarkBranch(0x43DF4);
            p.MarkBranch(0x43EE0);
            p.MarkBranch(0x43FCC);
            p.MarkBranch(0x43E0C);
            p.MarkBranch(0x43EC4);
            p.MarkBranch(0x4311C);
            p.MarkBranch(0x42930);
            p.MarkBranch(0x431A0);
            p.MarkUnknown(0x4A454);
            p.MarkUnknown(0x3C120);

            // JAN 05 2015 - Night Fight
            p.MarkBranch(0x44D38);
            p.MarkBranch(0x450E0);
            p.MarkBranch(0x44D40);
            p.MarkBranch(0x44D98);

            // JAN 07 2015 - Road To Ruin
            p.MarkBranch(0x43D1C);
            p.MarkUnknown(0x43C6C);

            // JAN 07 2015 - Ruination
            p.MarkBranch(0x45C34);
            p.MarkBranch(0x45C40);
            p.MarkBranch(0x45D4C);

            // JAN 07 2015 - Diggin' It
            p.MarkBranch(0x45EB0);
            p.MarkUnknown(0x46020);
            p.MarkBranch(0x461D8);

            // JAN 10 2015 - Table Discovered From Save Game Screen
            p.MarkAnonymousCallTable(0x5DF70,0x5DFA8);

            //p.MarkBranch(0x3BC64);
            /*p.MarkAnonymousJumpTable(0x5B8F0,0x5B924);
            p.MarkAnonymousJumpTable(0x5B930,0x5B99C);
            p.MarkAnonymousJumpTable(0x5B9A4,0x5B9AC);
            p.MarkAnonymousJumpTable(0x5B9B4,0x5BA00);
            p.MarkAnonymousJumpTable(0x5BA08,0x5BA44);
            p.MarkAnonymousJumpTable(0x5DEE4,0x5DEEC);

            p.FlushMarks();
            p.MarkUnknown(0x11E98);
            p.MarkUnknown(0x12100);
            p.MarkUnknown(0x1232C);
            p.MarkUnknown(0x14324);
            p.MarkUnknown(0x14D0C);
            p.MarkUnknown(0x14D4C);
            p.MarkUnknown(0x16328);
            p.MarkUnknown(0x1642C);
            p.MarkUnknown(0x16518);
            p.MarkUnknown(0x16538);
            p.MarkUnknown(0x16548);
            p.MarkUnknown(0x17020);
            p.MarkUnknown(0x172BC);
            p.MarkUnknown(0x172E4);
            p.MarkUnknown(0x1747C);
            p.MarkUnknown(0x18558);
            p.MarkUnknown(0x18AE8);
            p.MarkUnknown(0x18DD0);
            p.MarkUnknown(0x18F84);
            p.MarkUnknown(0x18FA4);
            p.MarkUnknown(0x191B0);
            p.MarkUnknown(0x19E68);
            p.MarkUnknown(0x1C850);
            p.MarkUnknown(0x1D014);
            p.MarkUnknown(0x1F0AC);
            p.MarkUnknown(0x1F220);
            p.MarkUnknown(0x1FC0C);
            p.MarkUnknown(0x20024);
            p.MarkUnknown(0x20178);
            p.MarkUnknown(0x243FC);
            p.MarkUnknown(0x27CAC);
            p.MarkUnknown(0x27E10);
            p.MarkUnknown(0x299B0);
            p.MarkUnknown(0x299DC);
            p.MarkUnknown(0x29A3C);
            p.MarkUnknown(0x2A4CC);
            p.MarkUnknown(0x2CE28);
            p.MarkUnknown(0x2E93C);
            p.MarkUnknown(0x2E9F4);
            p.MarkUnknown(0x2EB68);
            p.MarkUnknown(0x2FFDC);
            p.MarkUnknown(0x2FFF4);
            p.MarkUnknown(0x2FFFC);
            p.MarkUnknown(0x31780);
            p.MarkUnknown(0x31788);
            p.MarkUnknown(0x31964);
            p.MarkUnknown(0x32618);
            p.MarkUnknown(0x32620);
            p.MarkUnknown(0x32628);
            p.MarkUnknown(0x32630);
            p.MarkUnknown(0x32638);
            p.MarkUnknown(0x32640);
            p.MarkUnknown(0x32648);
            p.MarkUnknown(0x32650);
            p.MarkUnknown(0x32658);
            p.MarkUnknown(0x32660);
            p.MarkUnknown(0x32668);
            p.MarkUnknown(0x32670);
            p.MarkUnknown(0x32678);
            p.MarkUnknown(0x32680);
            p.MarkUnknown(0x32688);
            p.MarkUnknown(0x32690);
            p.MarkUnknown(0x32698);
            p.MarkUnknown(0x326A0);
            p.MarkUnknown(0x326A8);
            p.MarkUnknown(0x326B0);
            p.MarkUnknown(0x327A4);
            p.MarkUnknown(0x327B4);
            p.MarkUnknown(0x328E8);
            p.MarkUnknown(0x34034);
            p.MarkUnknown(0x34E0C);
            p.MarkUnknown(0x35DA8);
            p.MarkUnknown(0x35E80);
            p.MarkUnknown(0x362B4);
            p.MarkUnknown(0x36F90);
            p.MarkUnknown(0x376D8);
            p.MarkUnknown(0x376E0);
            p.MarkUnknown(0x37804);
            p.MarkUnknown(0x38414);
            p.MarkUnknown(0x38998);
            p.MarkUnknown(0x38D94);
            p.MarkUnknown(0x38EAC);
            p.MarkUnknown(0x38FA0);
            p.MarkUnknown(0x39198);
            p.MarkUnknown(0x392A4);
            p.MarkUnknown(0x3939C);
            p.MarkUnknown(0x39470);
            p.MarkUnknown(0x395A8);
            p.MarkUnknown(0x3975C);
            p.MarkUnknown(0x3991C);
            p.MarkUnknown(0x39CAC);
            p.MarkUnknown(0x39D3C);
            p.MarkUnknown(0x39DAC);
            p.MarkUnknown(0x39EA0);
            p.MarkUnknown(0x3C120);
            p.MarkUnknown(0x3C198);
            p.MarkUnknown(0x3E170);
            p.MarkUnknown(0x3E794);
            p.MarkUnknown(0x426B8);
            p.MarkUnknown(0x4573C);
            p.MarkUnknown(0x46BB4);
            p.MarkUnknown(0x46BDC);
            p.MarkUnknown(0x46C4C);
            p.MarkUnknown(0x46D10);
            p.MarkUnknown(0x46D44);
            p.MarkUnknown(0x47190);
            p.MarkUnknown(0x48B90);
            p.MarkUnknown(0x49170);
            p.MarkUnknown(0x49EDC);
            //p.MarkUnknown(0x49F54);
            p.MarkUnknown(0x4A100);
            p.MarkUnknown(0x4A1DC);
            p.MarkUnknown(0x4A1FC);
            p.MarkUnknown(0x4A454);
            p.MarkUnknown(0x4A4BC);
            //p.MarkUnknown(0x4A52C);
            p.MarkUnknown(0x4A5FC);
            p.MarkUnknown(0x4A9D4);
            p.MarkUnknown(0x4AA34);
            p.MarkUnknown(0x4AA74);
            p.MarkUnknown(0x4B0D8);
            p.MarkUnknown(0x4B478);
            p.MarkUnknown(0x4B564);
            p.MarkUnknown(0x4B5CC);
            p.MarkUnknown(0x4B77C);
            p.MarkUnknown(0x4B890);
            p.MarkUnknown(0x4B8CC);
            p.MarkUnknown(0x4B930);
            p.MarkUnknown(0x4B958);
            p.MarkUnknown(0x4B96C);
            p.MarkUnknown(0x4B9BC);
            p.MarkUnknown(0x4B9D0);
            p.MarkUnknown(0x4B9E4);
            p.MarkUnknown(0x4B9F8);
            p.MarkUnknown(0x4BA0C);
            p.MarkUnknown(0x4BA20);
            p.MarkUnknown(0x4BA34);
            p.MarkUnknown(0x4BA48);
            p.MarkUnknown(0x4BA5C);
            p.MarkUnknown(0x4BA70);
            p.MarkUnknown(0x4BA84);
            p.MarkUnknown(0x4BA98);
            p.MarkUnknown(0x4BFA0);
            p.MarkUnknown(0x4C118);
            p.MarkUnknown(0x4C1D4);
            p.MarkUnknown(0x4C1E4);
            p.MarkUnknown(0x4C470);
            p.MarkUnknown(0x4C504);
            p.MarkUnknown(0x4C72C);
            p.MarkUnknown(0x4C7E4);
            p.MarkUnknown(0x4CA54);
            p.MarkUnknown(0x4CB70);
            p.MarkUnknown(0x4D050);
            p.MarkUnknown(0x4D088);
            p.MarkUnknown(0x4D0B8);
            p.MarkUnknown(0x4D240);
            p.MarkUnknown(0x4F500);
            p.MarkUnknown(0x4F9D0);
            p.MarkUnknown(0x4FA8C);
            p.MarkUnknown(0x4FE38);
            p.MarkUnknown(0x4FF84);
            p.MarkUnknown(0x4FFC0);
            p.MarkUnknown(0x50330);
            p.MarkUnknown(0x519F0);
            p.MarkUnknown(0x52150);
            p.MarkUnknown(0x529AC);
            p.MarkUnknown(0x52B28);
            p.MarkUnknown(0x52DB0);
            p.MarkUnknown(0x53390);
            p.MarkUnknown(0x53408);
            p.MarkUnknown(0x53830);
            p.MarkUnknown(0x54B44);
            p.MarkUnknown(0x54B98);
            p.MarkUnknown(0x54CA4);
            p.MarkUnknown(0x550EC);
            p.MarkUnknown(0x5510C);
            p.MarkUnknown(0x5514C);
            p.MarkUnknown(0x56574);
            p.MarkUnknown(0x5690C);
            p.MarkUnknown(0x56A84);
            p.MarkUnknown(0x5817C);
            p.MarkUnknown(0x59E40);
            p.MarkUnknown(0x59E88);
            p.MarkUnknown(0x5AB04);
            p.MarkUnknown(0x5AB34);
            p.MarkUnknown(0x1F260);
            p.MarkUnknown(0x390AC);
            p.MarkUnknown(0x41FAC);
            p.MarkUnknown(0x42D50);
            /*p.MarkUnknown(0x80043C34);
            p.MarkUnknown(0x800444D0);
            p.MarkUnknown(0x80044C18);
            p.MarkUnknown(0x80046C04);
            p.MarkUnknown(0x80048A9C);
            p.MarkUnknown(0x80048E60);
            p.MarkUnknown(0x);
            p.MarkUnknown(0x);
            p.MarkUnknown(0x);
            p.MarkUnknown(0x);
            p.MarkUnknown(0x);
            p.MarkUnknown(0x);
            p.MarkUnknown(0x);
            p.MarkUnknown(0x);
            p.MarkUnknown(0x);
            p.MarkUnknown(0x);
            p.MarkUnknown(0x);
            p.MarkUnknown(0x);
            p.MarkUnknown(0x);
            p.MarkUnknown(0x);
            p.MarkUnknown(0x);*/
        }

        public static void DefineHacks()
        {
            //p[0x430A0].HackString = "GTE_GetDataRegister(9);";
            //p[0x3AD6C].HackMustInvalidateICache = true;
        }
    }
}
