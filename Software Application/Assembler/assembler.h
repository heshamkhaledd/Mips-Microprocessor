#include <iostream>
#include <bitset>
#include <string>

std::string  lAssembler (std::string,std::string,std::string,std::string);
int main()
{
    std::string line=lAssembler("HLT","R7","R5","20");
    std::bitset<16> temp =std::bitset<16>(line);
    std::cout <<std::hex<< temp.to_ulong() << std::endl;
    return 0;
}


std::string lAssembler (std::string inst,std::string args,std::string argt,std::string argd)
{
    std::string returner = "";
    std::bitset <4> op=0;
    std::bitset <3> rs=0;
    std::bitset <3> rt=0;
    std::bitset <3> rd=0;
    std::bitset <3> func=0;
    std::bitset <6> imm=0;
    std::bitset <12> target=0;
    char type='x';

    if(inst=="ADD")
    {
        type='r';
        op = 0;
        func = 0;
    }

    else if(inst=="SUB")
    {
        type='r';
        op = 0;
        func = 1;
    }

    else if(inst=="AND")
    {
        type='r';
        op = 0;
        func = 2;
    }

    else if(inst=="OR")
    {
        type='r';
        op = 0;
        func = 3;
    }

    else if(inst=="NOR")
    {
        type='r';
        op = 0;
        func = 4;
    }

    else if(inst=="XOR")
    {
        type='r';
        op = 0;
        func = 5;
    }

    else if(inst=="SLL")
    {
        type='r';
        op = 0;
        func = 6;
    }

    else if(inst=="SRL")
    {
        type='r';
        op = 0;
        func = 7;
    }
       //imidiates
    else if(inst=="ADDI")
    {
        type='i';
        op = 4;
        rs=argt[1]-48;
        rt=args[1]-48;
        imm=(argd[0]-48)*10+(argd[1]-48);
        //std::cout<<(argd[0]-48)*10+(argd[1]-48)<<"\n";
    }
    else if(inst=="ANDI")
    {
        type='i';
        op = 5;
        rs=argt[1]-48;
        rt=args[1]-48;
        imm=(argd[0]-48)*10+(argd[1]-48);
    }
    else if(inst=="ORI")
    {
        type='i';
        op = 6;
        rs=argt[1]-48;
        rt=args[1]-48;
        imm=(argd[0]-48)*10+(argd[1]-48);
    }
    else if(inst=="LW")
    {
        type='i';
        op = 7;
        rs=argt[1]-48;
        rt=args[1]-48;
        //rd=(argd[0]-48)*10+(argd[1]-48);
        //rd=0;
        imm=0;
    }
    else if(inst=="SW")
    {
        type='i';
        op = 8;
        rs=argt[1]-48;
        rt=args[1]-48;
        //rd=(argd[0]-48)*10+(argd[1]-48);
        imm=0;
    }

    else if(inst=="BEQ")
    {
        type='i';
        op = 9;//change it
        rs=args[1]-48;
        rt=argt[1]-48;
        imm=(argd[0]-48)*10+(argd[1]-48);
    }
    else if(inst=="BNQ")
    {
        type='i';
        op = 10;//change it
        rs=args[1]-48;
        rt=argt[1]-48;
        imm=(argd[0]-48)*10+(argd[1]-48);
    }
    //jumps
    else if(inst=="J"||inst=="j")
    {
        op=11;
        type='j';
        //to be done
    }
    else if(inst=="JAL")
    {
        type='j';
    }


    //set regular types structures
    if(type=='r')
    {
        rs=args[1]-48;
        rt=argt[1]-48;
        rd=argd[1]-48;
        returner = op.to_string() + rs.to_string() + rt.to_string() + rd.to_string() + func.to_string();

    }
    else if (type =='i')
    {
        returner = op.to_string() + rs.to_string() + rt.to_string() + imm.to_string();

    }
    else if(type=='j')
    {
        returner = op.to_string() + target.to_string() ;


    }

    //irregulars

    if(inst=="JR")
    {
        type='r';
        op = 3;
        func = 0;
        rs=args[1]-48;
        rt=0;
        rd=0;
        returner = op.to_string() + rs.to_string() + rt.to_string() + rd.to_string() + func.to_string();
    }
    else if(inst=="IN")
    {
        type='r';
        op = 1;
        rt=0;
        rs=0;
        func = 0;
        rd=args[1]-48;
        returner = op.to_string() + rs.to_string() + rt.to_string() + rd.to_string() + func.to_string();
    }
    else if(inst=="OUT")
    {
        type='r';
        op = 2;
        func = 0;
        rt=0;
        rd=0;
        rs=args[1]-48;
        returner = op.to_string() + rs.to_string() + rt.to_string() + rd.to_string() + func.to_string();
    }
    else if (inst=="NOP")
    {
        op = 14;
        func=0;
        rs=0;
        rt=0;
        rd=0;
       returner = op.to_string() + rs.to_string() + rt.to_string() + rd.to_string() + func.to_string();

    }
        else if (inst=="HLT")
    {
        op = 15;
        func=0;
        rs=0;
        rt=0;
        rd=0;
        returner = op.to_string() + rs.to_string() + rt.to_string() + rd.to_string() + func.to_string();

    }

    return returner;
}
