#pragma once
#include <iomanip>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <bitset>
#include<stdlib.h>
std::string assembler(std::string inst, std::string args, std::string argt, std::string argd);
//#include"MyForm.h"
//using namespace std;
int16_t reg[8] = {0};
int x = 50;
std::string showLine;
//int x = n>255 ? 255 : n;
//int programPointer = 0;
int programCounter = 0;
int inputCounter = 0;
const int memSize=65536;
int16_t mem[memSize] = {0};
int16_t inputReg=0;
int16_t outputReg = 0;
std::stringstream outString;
std::ofstream output;

int File_Size = 0;
int inputFileSize=0;
std::string Temp;

std::string *Program_String;
std::string *Input_String;
const int numberOfLabels = 200;
std::string LABELS[numberOfLabels];//CHANGED FROM 80 TO 200

void init()
{
	programCounter = 0;
	inputCounter = 0;
	for (int16_t o = 0; o <= 7; o++)reg[o] = 0;
	//mem[memSize] = { 0 };
	for (int o = 0; o < memSize; o++) mem[o] = 0 ;
	//mem[3] = 0x2B;//FE01 ADD
	//mem[3] = 0x2D;
	//reg[0] = 0x8000;
     //FE01
				  //mem[8] = 0x5;//FE01
				  /*mem[0] = 0x1;
				  mem[1] = 0x7;
				  mem[2] = 0x1;

				  mem[4] = 0x2;
				  mem[5] = 0x7;
				  mem[6] = 0x1;
				  */
	inputReg = 0;
	outputReg = 0;

}
//std::string *Input_String = new std::string[File_Size];
void findlabels(std::string program_String[],int size)
{
	//std::string label = "";
	int labelStackPointer = 0;

	for (int o = 0; o < size; o++)
	{
	//int searchLine = 0;
	std::string currentLine="";
	std::string currentLabelName="";
	currentLine=program_String[o];
	//std::cout << currentLine << " " << currentLabelName << "\n";
	if (currentLine[0] == 'x')
	{

		//LABELS[labelStackPointer] = std::to_string(o + 1);
		LABELS[labelStackPointer] = std::to_string(o );
		for (int p = 0; p < abs((int)currentLine.length()); p++)
		{
			if (currentLine[p]==':')break;
			else currentLabelName += currentLine[p];
		}
		LABELS[labelStackPointer + 1]=currentLabelName;
		labelStackPointer += 2;
	}

	}
}
void loadFile()
{
	//std::cout << "load file\n";
	//search how many lines to make a dynamic array

	//output.open("Output.txt");
	std::ifstream App_File0;
	std::string line;
	App_File0.open("app.txt");
	File_Size = 0;
	 inputCounter = 0;

	if (App_File0.is_open())
	{
		while (!App_File0.eof())
		{
			File_Size++;
			getline(App_File0, line);
		}
	}
	App_File0.close();

	//put the program in the array
	Program_String = new std::string[File_Size];
	std::ifstream App_File2;
	App_File2.open("app.txt");

	for (int i = 0; i < File_Size; i++)
	{
		getline(App_File2, Program_String[i]);
	}
	findlabels(Program_String, File_Size);
	App_File2.close();
	/*
	for (int s = 0; s < numberOfLabels/2; s=s+2)
	{
		std::cout <<"number: "<< LABELS[s]<<" name : "<< LABELS[s+1]<<std::endl;
	}
	*/

	//load the input
	std::cout << "safe\n";
	std::ifstream input_File;
	input_File.open("input.txt");
	inputFileSize=0;
	std::string lineIn;
	if (input_File.is_open())
	{
		while (!input_File.eof())
		{
			inputFileSize++;
			getline(input_File, lineIn);
		}
	}
	input_File.close();

	//std::ifstream input_File;
	input_File.open("input.txt");
	Input_String = new std::string[inputFileSize];
	for (int i = 0; i < inputFileSize; i++)
	{
		getline(input_File, Input_String[i]);
	}
	input_File.close();
	
	/*for(int i =0;i<inputFileSize;i++)
		std::cout << "\n" << Input_String[i];*/

}


void processProgram(std::string toDO)
{
	int m;
	bool bin = false;
	std::stringstream binSS;
	std::stringstream hexSS;
	std::ofstream binFile;
	std::ofstream hexFile;
	std::string binLine="";
	bool processWholeProgram = true;
	if (toDO=="all")
	{
		processWholeProgram = true;
		init();
	}
	else if(toDO=="LineByLine")
	{
		processWholeProgram = false;
		if(programCounter<File_Size)goto oneLineOnly;
		
	}
	else if (toDO == "continue")
	{
		processWholeProgram = true;
		m = 0;
	}
	else if (toDO=="pmem")
	{
		processWholeProgram = false;
		//goto shit;
	}
	else if (toDO == "bin")
	{
		processWholeProgram = true;
		bin = true;
	}

	//std::string *Input_String = new std::string[File_Size];


	//int programCounter = 0;
	while(programCounter<File_Size)
	{
	oneLineOnly:
		//Input_File2.open("Input.txt");
		//getline(Input_File2, Input_String[programCounter]);
		std::string Temp = Program_String[programCounter];
		std::string Instruction = "";
		std::string arg1 = "";
		std::string arg2 = "";
		std::string arg3 = "";
		int j = 0;
	if (toDO == "pmem")
	{
		processWholeProgram = false;
		//goto shit;
	}
		if (Temp[0] == 'x')
		{
			for (int p = 0; p < abs((int)Temp.length()); p++)
			{
				if (Temp[p] == ':')
				{
					j = p + 1;
				}
			}
		}
		while (Temp[j] != ' ' && j < abs((int)Temp.length()))
		{
			Instruction = Instruction + Temp[j];
			j++;
		}
		if (Temp[j] == ' ' || Temp[j] == ',')j++;
		if (Temp[j] == ' ' || Temp[j] == ',')j++;
		if (Temp[j] == ' ' || Temp[j] == ',')j++;
		if (Temp[j] == ' ' || Temp[j] == ',')j++;
		while (Temp[j] != ' '&&Temp[j] != ',' && j < abs((int)Temp.length()))
		{
			arg1 = arg1 + Temp[j];
			j++;
		}
		if (Temp[j] == ' ' || Temp[j] == ',')j++;
		if (Temp[j] == ' ' || Temp[j] == ',')j++;
		if (Temp[j] == ' ' || Temp[j] == ',')j++;
		if (Temp[j] == ' ' || Temp[j] == ',')j++;
		while (Temp[j] != ' '&&Temp[j] != ',' && j < abs((int)Temp.length()))
		{
			arg2 = arg2 + Temp[j];
			j++;
		}
		if (Temp[j] == ' ' || Temp[j] == ',')j++;
		if (Temp[j] == ' ' || Temp[j] == ',')j++;
		if (Temp[j] == ' ' || Temp[j] == ',')j++;
		if (Temp[j] == ' ' || Temp[j] == ',')j++;
		while (Temp[j] != ' '&&Temp[j] != ',' && j < abs((int)Temp.length()))
		{
			arg3 = arg3 + Temp[j];
			j++;
		}
		//printf("%s,%s,%s,%s",Instruction,arg1,arg2,arg3);
		std::cout << "*************\n" << Temp << "\n";
		std::cout << programCounter << "," << Instruction <<
			" Rs:" << arg1 <<
			" Rt:" << arg2 <<
			" Rd:" << arg3 << ";\n";//the red is the right name
		if (toDO == "bin") // ASSEMBLER
		{
			binLine = assembler(Instruction, arg1, arg2, arg3);
			binSS << binLine << "\n";
			//hexSS << std::hex << binLine << "\n";
			std::bitset<16> temp = std::bitset<16>(binLine);
			hexSS << std::hex << temp.to_ulong() << std::endl;
			goto cont;
		}
		// i mixed the naming up but the positions are right
		//arg1 corresponds to regester S
		// arg2 corresponds to regster t
		// arg3 corresponds to regester d
		showLine = Temp;
		if (Instruction == "ADD")//1
		{
			reg[int16_t(arg1[1] - '0')] = reg[int16_t(arg2[1] - '0')] + reg[int16_t(arg3[1] - '0')];
		}
		else if (Instruction == "SUB")//2
		{
			//std::cout << "sub sub sub \n";
			reg[int16_t(arg1[1] - '0')] = reg[int16_t(arg2[1] - '0')] - reg[int16_t(arg3[1] - '0')];
		}
		else if (Instruction == "AND")//3
		{
			reg[int16_t(arg1[1] - '0')] = reg[int16_t(arg2[1] - '0')] & reg[int16_t(arg3[1] - '0')];
		}
		else if (Instruction == "OR")//4
		{
			//std::cout << reg[int16_t(arg1[1] - '0')] << reg[int16_t(arg2[1] - '0')] << int16_t(arg3[1] - '0')<<std::endl;
			reg[int16_t(arg1[1] - '0')] = reg[int16_t(arg2[1] - '0')] | reg[int16_t(arg3[1] - '0')];
			//std::cout << reg[int16_t(arg1[1] - '0')] << reg[int16_t(arg2[1] - '0')] << int16_t(arg3[1] - '0');
		}
		else if (Instruction == "NOR")//5
		{
			int16_t TEMP = reg[int16_t(arg2[1] - '0')] | reg[int16_t(arg3[1] - '0')];
			reg[int16_t(arg1[1] - '0')] = ~TEMP;
		}
		else if (Instruction == "XOR")//6
		{
			int16_t TEMP = reg[int16_t(arg2[1] - '0')] ^ reg[int16_t(arg3[1] - '0')];
			reg[int16_t(arg1[1] - '0')] = TEMP;
		}
		else if (Instruction == "SLL")//7
		{
			reg[int16_t(arg1[1] - '0')] = reg[int16_t(arg2[1] - '0')] << 1;
		}
		else if (Instruction == "SRL")//8
		{
			//reg[int16_t(arg1[1] - '0')] = reg[int16_t(arg2[1] - '0')]>>1;
			//unsigned int two = 2;
			//unsigned int temp = reg[int16_t(arg2[1] - '0')];
			//temp = temp / two;
			int16_t temp = 0x7fff;

			reg[int16_t(arg1[1] - '0')] = reg[int16_t(arg2[1] - '0')] >> 1;
			reg[int16_t(arg1[1] - '0')] = reg[int16_t(arg1[1] - '0')] & temp;
			//reg[int16_t(arg1[1] - '0')] = reg[int16_t(arg2[1] - '0')] / a7a;
			//reg[int16_t(arg1[1] - '0')] = 1>>reg[int16_t(arg2[1] - '0')];// >> 1;
		}
		else if (Instruction == "ADDI")//9
		{
			reg[int16_t(arg1[1] - '0')] = reg[int16_t(arg2[1] - '0')] + (int16_t(arg3[0] - '0') * 10 + int16_t(arg3[1] - '0'));
		}
		else if (Instruction == "ANDI")//10
		{
			reg[int16_t(arg1[1] - '0')] = reg[int16_t(arg2[1] - '0')] & (int16_t(arg3[0] - '0') * 10 + int16_t(arg3[1] - '0'));
		}
		else if (Instruction == "ORI")//11
		{
			reg[int16_t(arg1[1] - '0')] = reg[int16_t(arg2[1] - '0')] | (int16_t(arg3[0] - '0') * 10 + int16_t(arg3[1] - '0'));
		}
		else if (Instruction == "LW")//12
		{
			uint16_t addr = reg[int16_t(arg2[1] - '0')];
			reg[int16_t(arg1[1] - '0')] = mem[addr];
		}
		else if (Instruction == "SW")//12
		{
			uint16_t addr =reg[int16_t(arg2[1] - '0')]  ;
			mem[addr] = reg[int16_t(arg1[1] - '0')];
		}
		else if (Instruction == "J" || Instruction == "j")//12
		{
			std::string label = "";
			label = arg1;
			for (int p = 1; p <= numberOfLabels; p = p + 2)
			{
				if (label == LABELS[p])
				{
					programCounter = std::stoi(LABELS[p - 1]);

					goto shit;
				}
			}
			//std::cout<<"\n"<< label
			//if(programCounter>=550)system("pause");
		}
		else if (Instruction == "JAL" || Instruction == "jal")//12
		{
			reg[7]=programCounter + 1;
			std::string label = "";
			label = arg1;
			for (int p = 1; p <= numberOfLabels; p = p + 2)
			{
				if (label == LABELS[p])
				{
					programCounter = std::stoi(LABELS[p - 1]);

					goto shit;
				}
			}
			//std::cout<<"\n"<< label
			//if(programCounter>=550)system("pause");
		}
		else if (Instruction == "JR")//12
		{
			programCounter = reg[int16_t(arg1[1] - '0')];
			goto shit;
			//std::cout<<"\n"<< label
			//if(programCounter>=550)system("pause");
		}
		else if (Instruction == "BEQ")//17
		{
			if (reg[int16_t(arg1[1] - '0')] == reg[int16_t(arg2[1] - '0')])
			{
				programCounter += int16_t(arg3[0] - '0') * 10 + int16_t(arg3[1] - '0');
			}
		}
		else if (Instruction == "BNQ"|| Instruction == "BNE")//18
		{
			if (reg[int16_t(arg1[1] - '0')] != reg[int16_t(arg2[1] - '0')])
			{
				programCounter += int16_t(arg3[0] - '0') * 10 + int16_t(arg3[1] - '0');
			}
		}
		else if (Instruction == "IN")//19
		{
			if (inputCounter<inputFileSize - 1)
			{
				inputReg = std::stoi(Input_String[inputCounter]);
				reg[int16_t(arg1[1] - '0')] = inputReg;
				inputCounter++;
			}
			else std::cout << "shortage on input \n";
		}
		else if (Instruction == "OUT")//19
		{
			outputReg = reg[int16_t(arg1[1] - '0')];//std::stoi(Input_String[inputCounter]);
													//output.open("Output.txt");
			outString << std::hex << outputReg << std::endl;
		}
		else if (Instruction == "HLT")//19
		{
			processWholeProgram = false;
			goto shit;
		}
	cont:
		programCounter++;

	shit:
		m = 0;
		//std::cout << mem[7] << "\n";
		//std::cout << "\n R0= " << reg[0] << ", R1= " << reg[1] << ", R2= " << reg[2];
		//std::cout << "\n R4= " << reg[4] << ", R5= " << reg[5] << "\n";
		if (!processWholeProgram)
		{
			break;
		}
		//MyForm form->upData();
	}
	//Input_File2.close();
	//std::cout << outString.str();
	if (bin == true)
	{
		binFile.open("bin.txt");
	    binFile << binSS.str();
		//binFile.close();

		hexFile.open("hex.txt");
		hexFile << hexSS.str();

	}
	if (toDO == "pmem")
	{
		std::ofstream memFile;
		std::stringstream memSS;
		for (int m = 0; m < memSize; m++)
		{
			if (mem[m] != 0)
			{
				uint16_t temp= mem[m];
				memSS <<std::hex<< temp << " in Address:" << std::hex << m << "\n";
			}
		}
		memFile.open("mem.txt");
		memFile << memSS.str();
		memFile.close();
	}
	output.open("Output.txt");
	output  << outString.str();// outFile << ss.rdbuf();
	output.close();
	hexFile.close();
	binFile.close();
}

System::String^ hexString(int16_t a)
{
	std::stringstream stream;
	stream << std::hex << std::uppercase << a;
	std::string result(stream.str());
	System::String^ str2 = gcnew System::String(result.c_str());
	//textBox1->Text = System::Convert::ToString(result);
	return str2;
}
System::String^ intString(int16_t a)
{
	std::stringstream stream;
	stream  << a;
	std::string result(stream.str());
	System::String^ str2 = gcnew System::String(result.c_str());
	//textBox1->Text = System::Convert::ToString(result);
	return str2;
}


std::string assembler(std::string inst, std::string arg1, std::string arg2, std::string arg3)
{
	//std::cout << inst << " " << arg1 << " " << arg2 << " " << arg3 << "\n";
	std::string returner = "";
	std::bitset <4> op = 0;
	std::bitset <3> rs = 0;
	std::bitset <3> rt = 0;
	std::bitset <3> rd = 0;
	std::bitset <3> func = 0;
	std::bitset <6> imm = 0;
	std::bitset <12> target = 0;
	char type = 'x';
	bool knownInstruction = true;
	if (inst == "ADD")
	{
		type = 'r';
		op = 0;
		func = 0;
	}

	else if (inst == "SUB")
	{
		type = 'r';
		op = 0;
		func = 1;
	}

	else if (inst == "AND")
	{
		type = 'r';
		op = 0;
		func = 2;
	}

	else if (inst == "OR")
	{
		type = 'r';
		op = 0;
		func = 3;
	}

	else if (inst == "NOR")
	{
		type = 'r';
		op = 0;
		func = 4;
	}

	else if (inst == "XOR")
	{
		type = 'r';
		op = 0;
		func = 5;
	}

	else if (inst == "SLL")
	{
		type = 'r';
		op = 0;
		func = 6;
		rt = 0;
		arg3 = "00";
	}

	else if (inst == "SRL")
	{
		type = 'r';
		op = 0;
		func = 7;
		arg3 = "00";
	}
	//imidiates
	else if (inst == "ADDI")
	{
		type = 'i';
		op = 4;
		rs = arg2[1] - 48;
		rt = arg1[1] - 48;
		imm = (arg3[0] - 48) * 10 + (arg3[1] - 48);
		//std::cout<<(arg3[0]-48)*10+(arg3[1]-48)<<"\n";
	}
	else if (inst == "ANDI")
	{
		type = 'i';
		op = 5;
		rs = arg2[1] - 48;
		rt = arg1[1] - 48;
		imm = (arg3[0] - 48) * 10 + (arg3[1] - 48);
	}
	else if (inst == "ORI")
	{
		type = 'i';
		op = 6;
		rs = arg2[1] - 48;
		rt = arg1[1] - 48;
		imm = (arg3[0] - 48) * 10 + (arg3[1] - 48);
	}
	else if (inst == "LW")
	{
		type = 'i';
		op = 7;
		rs = arg2[1] - 48;
		rt = arg1[1] - 48;
		//rd=(arg3[0]-48)*10+(arg3[1]-48);
		//rd=0;
		imm = 0;
		arg3 = "00";
	}
	else if (inst == "SW")
	{
		type = 'i';
		op = 8;
		rs = arg2[1] - 48;
		rt = arg1[1] - 48;
		//rd=(arg3[0]-48)*10+(arg3[1]-48);
		imm = 0;
		arg3 = "00";
	}

	else if (inst == "BEQ")
	{
		type = 'i';
		op = 9;//change it
		rs = arg1[1] - 48;
		rt = arg2[1] - 48;
		imm = (arg3[0] - 48) * 10 + (arg3[1] - 48);
	}
	else if (inst == "BNQ"|| inst == "BNE")
	{
		type = 'i';
		op = 10;//change it
		rs = arg1[1] - 48;
		rt = arg2[1] - 48;
		imm = (arg3[0] - 48) * 10 + (arg3[1] - 48);
	}
	//jumps
	else if (inst == "J" || inst == "j")
	{
		op = 11;
		type = 'j';
		for (int s =1; s < numberOfLabels;s=s+2)
		{
			if (LABELS[s] == arg1)
			{
				//int addr = LABELS[s - 1].stio();
				int addr = std::stoi(LABELS[s - 1]);
				target = addr;
				break;
			}
		}

		//to be done
	}
	else if (inst == "JAL")
	{
		type = 'j';
		op = 12;
		for (int s = 1; s < numberOfLabels; s = s + 2)
		{
			if (LABELS[s] == arg1)
			{
				//int addr = LABELS[s - 1].stio();
				int addr = std::stoi(LABELS[s - 1]);
				target = addr;
				break;
			}
		}

	}
	else knownInstruction = false;
	//end of 1st pack pf instructions


	//set regular types structures
	if (type == 'r')
	{
		//arg1 d , arg2 s ,arg3 t

		rd = arg1[1] - 48;
		rs = arg2[1] - 48;
		rt = arg3[1] - 48;
		returner = op.to_string() + rs.to_string()
			+ rt.to_string() + rd.to_string() + func.to_string();
		//knownInstruction = true;
	}
	else if (type == 'i')
	{
		returner = op.to_string() + rs.to_string()
			+ rt.to_string() + imm.to_string();
		//knownInstruction = true;

	}
	else if (type == 'j')
	{
		returner = op.to_string() + target.to_string();
		//knownInstruction = true;
	}

	//irregulars

	if (inst == "JR")
	{
		type = 'r';
		op = 3;
		func = 0;
		rs = arg1[1] - 48;
		rt = 0;
		rd = 0;
		returner = op.to_string() + rs.to_string()
			+ rt.to_string() + rd.to_string() + func.to_string();
		knownInstruction = true;
	}
	else if (inst == "IN")
	{
		type = 'r';
		op = 1;
		rt = 0;
		rs = 0;
		func = 0;
		rd = arg1[1] - 48;
		returner = op.to_string() + rs.to_string()
			+ rt.to_string() + rd.to_string() + func.to_string();
		knownInstruction = true;
	}
	else if (inst == "OUT")
	{
		type = 'r';
		op = 2;
		func = 0;
		rt = 0;
		rd = 0;
		rs = arg1[1] - 48;
		returner = op.to_string() + rs.to_string()
			+ rt.to_string() + rd.to_string() + func.to_string();
		knownInstruction = true;
	}
	else if (inst == "NOP")
	{
		op = 14;
		func = 0;
		rs = 0;
		rt = 0;
		rd = 0;
		returner = op.to_string() + rs.to_string()
			+ rt.to_string() + rd.to_string() + func.to_string();
		knownInstruction = true;
	}
	else if (inst == "HLT")
	{
		op = 15;
		func = 0;
		rs = 0;
		rt = 0;
		rd = 0;
		returner = op.to_string() + rs.to_string()
			+ rt.to_string() + rd.to_string() + func.to_string();
		knownInstruction = true;
	}
	if (!knownInstruction)
	{
		op = 14;
		func = 0;
		rs = 0;
		rt = 0;
		rd = 0;
		returner = op.to_string() + rs.to_string()
			+ rt.to_string() + rd.to_string() + func.to_string();
	}

	return returner;
}


