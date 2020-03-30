#pragma once
#include<stdlib.h>
#include<string.h>
#include"Header.h"
//int intTurn();
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			loadFile();
			//
			//TODO: Add the constructor code here
			//
		}
		void upData()
		{
			//String s ;
			textBox1->Text = hexString(reg[0]);
			textBox2->Text = hexString(reg[1]);
			textBox3->Text = hexString(reg[2]);
			textBox4->Text = hexString(reg[3]);
			textBox5->Text = hexString(reg[4]);
			textBox6->Text = hexString(reg[5]);
			textBox7->Text = hexString(reg[6]);
			textBox8->Text = hexString(reg[7]);

			textBox30->Text = hexString(mem[0]);
			textBox31->Text = hexString(mem[1]);
			textBox32->Text = hexString(mem[2]);
			textBox33->Text = hexString(mem[3]);

			textBox34->Text = hexString(mem[4]);
			textBox35->Text = hexString(mem[5]);
			textBox36->Text = hexString(mem[6]);
			textBox37->Text = hexString(mem[7]);

			textBox38->Text = hexString(mem[8]);
			textBox39->Text = hexString(mem[9]);
			textBox40->Text = hexString(mem[10]);
			textBox41->Text = hexString(mem[11]);

			textBox42->Text = hexString(mem[12]);
			textBox43->Text = hexString(mem[13]);
			textBox44->Text = hexString(mem[14]);
			textBox45->Text = hexString(mem[15]);

			textBox9->Text = intString(programCounter);

			textBox11->Text = hexString(inputReg);
			textBox10->Text = hexString(outputReg);


			currentLineBox->Text = gcnew System::String(showLine.c_str()) ;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label30;

	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox31;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox32;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox33;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox34;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox35;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox36;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox37;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBox45;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  textBox44;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox43;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  textBox42;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TextBox^  textBox41;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  textBox40;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::TextBox^  textBox39;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  textBox38;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::TextBox^  textBox11;
private: System::Windows::Forms::Button^  untillbut;
private: System::Windows::Forms::TextBox^  pauserTb;


private: System::Windows::Forms::TextBox^  currentLineBox;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::Button^  button6;






































	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->untillbut = (gcnew System::Windows::Forms::Button());
			this->pauserTb = (gcnew System::Windows::Forms::TextBox());
			this->currentLineBox = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(51, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(148, 24);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"trash";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(315, 105);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 27);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Run";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"REG0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"REG1";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(51, 42);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(148, 24);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"trash";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"REG2";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(51, 72);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(148, 24);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"trash";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"REG3";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(51, 102);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(148, 24);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"trash";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 135);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"REG4";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(51, 132);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(148, 24);
			this->textBox5->TabIndex = 9;
			this->textBox5->Text = L"trash";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 165);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 17);
			this->label6->TabIndex = 12;
			this->label6->Text = L"REG5";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(51, 162);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(148, 24);
			this->textBox6->TabIndex = 11;
			this->textBox6->Text = L"trash";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(3, 195);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 17);
			this->label7->TabIndex = 14;
			this->label7->Text = L"REG6";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(51, 192);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(148, 24);
			this->textBox7->TabIndex = 13;
			this->textBox7->Text = L"trash";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(3, 225);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 17);
			this->label8->TabIndex = 16;
			this->label8->Text = L"REG7";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(51, 222);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(148, 24);
			this->textBox8->TabIndex = 15;
			this->textBox8->Text = L"trash";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(521, 11);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(52, 17);
			this->label30->TabIndex = 20;
			this->label30->Text = L"MEM00";
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(584, 8);
			this->textBox30->Name = L"textBox30";
			this->textBox30->ReadOnly = true;
			this->textBox30->Size = System::Drawing::Size(148, 24);
			this->textBox30->TabIndex = 20;
			this->textBox30->Text = L"trash mem";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(521, 41);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 17);
			this->label9->TabIndex = 21;
			this->label9->Text = L"MEM01";
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(584, 38);
			this->textBox31->Name = L"textBox31";
			this->textBox31->ReadOnly = true;
			this->textBox31->Size = System::Drawing::Size(148, 24);
			this->textBox31->TabIndex = 22;
			this->textBox31->Text = L"trash mem";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(521, 71);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(52, 17);
			this->label10->TabIndex = 23;
			this->label10->Text = L"MEM02";
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(584, 68);
			this->textBox32->Name = L"textBox32";
			this->textBox32->ReadOnly = true;
			this->textBox32->Size = System::Drawing::Size(148, 24);
			this->textBox32->TabIndex = 24;
			this->textBox32->Text = L"trash mem";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(521, 100);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(52, 17);
			this->label11->TabIndex = 25;
			this->label11->Text = L"MEM03";
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(584, 97);
			this->textBox33->Name = L"textBox33";
			this->textBox33->ReadOnly = true;
			this->textBox33->Size = System::Drawing::Size(148, 24);
			this->textBox33->TabIndex = 26;
			this->textBox33->Text = L"trash mem";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(521, 130);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(52, 17);
			this->label12->TabIndex = 27;
			this->label12->Text = L"MEM04";
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(584, 127);
			this->textBox34->Name = L"textBox34";
			this->textBox34->ReadOnly = true;
			this->textBox34->Size = System::Drawing::Size(148, 24);
			this->textBox34->TabIndex = 28;
			this->textBox34->Text = L"trash mem";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(521, 160);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(52, 17);
			this->label13->TabIndex = 29;
			this->label13->Text = L"MEM05";
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(584, 157);
			this->textBox35->Name = L"textBox35";
			this->textBox35->ReadOnly = true;
			this->textBox35->Size = System::Drawing::Size(148, 24);
			this->textBox35->TabIndex = 30;
			this->textBox35->Text = L"trash mem";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(521, 191);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(52, 17);
			this->label14->TabIndex = 31;
			this->label14->Text = L"MEM06";
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(584, 188);
			this->textBox36->Name = L"textBox36";
			this->textBox36->ReadOnly = true;
			this->textBox36->Size = System::Drawing::Size(148, 24);
			this->textBox36->TabIndex = 32;
			this->textBox36->Text = L"trash mem";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(521, 221);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(52, 17);
			this->label15->TabIndex = 33;
			this->label15->Text = L"MEM07";
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(584, 218);
			this->textBox37->Name = L"textBox37";
			this->textBox37->ReadOnly = true;
			this->textBox37->Size = System::Drawing::Size(148, 24);
			this->textBox37->TabIndex = 34;
			this->textBox37->Text = L"trash mem";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(521, 461);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(52, 17);
			this->label16->TabIndex = 49;
			this->label16->Text = L"MEM15";
			// 
			// textBox45
			// 
			this->textBox45->Location = System::Drawing::Point(584, 458);
			this->textBox45->Name = L"textBox45";
			this->textBox45->ReadOnly = true;
			this->textBox45->Size = System::Drawing::Size(148, 24);
			this->textBox45->TabIndex = 50;
			this->textBox45->Text = L"trash mem";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(521, 431);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(52, 17);
			this->label17->TabIndex = 47;
			this->label17->Text = L"MEM14";
			// 
			// textBox44
			// 
			this->textBox44->Location = System::Drawing::Point(584, 428);
			this->textBox44->Name = L"textBox44";
			this->textBox44->ReadOnly = true;
			this->textBox44->Size = System::Drawing::Size(148, 24);
			this->textBox44->TabIndex = 48;
			this->textBox44->Text = L"trash mem";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(521, 400);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(52, 17);
			this->label18->TabIndex = 45;
			this->label18->Text = L"MEM13";
			// 
			// textBox43
			// 
			this->textBox43->Location = System::Drawing::Point(584, 397);
			this->textBox43->Name = L"textBox43";
			this->textBox43->ReadOnly = true;
			this->textBox43->Size = System::Drawing::Size(148, 24);
			this->textBox43->TabIndex = 46;
			this->textBox43->Text = L"trash mem";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(521, 370);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(52, 17);
			this->label19->TabIndex = 43;
			this->label19->Text = L"MEM12";
			// 
			// textBox42
			// 
			this->textBox42->Location = System::Drawing::Point(584, 367);
			this->textBox42->Name = L"textBox42";
			this->textBox42->ReadOnly = true;
			this->textBox42->Size = System::Drawing::Size(148, 24);
			this->textBox42->TabIndex = 44;
			this->textBox42->Text = L"trash mem";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(521, 340);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(52, 17);
			this->label20->TabIndex = 41;
			this->label20->Text = L"MEM11";
			// 
			// textBox41
			// 
			this->textBox41->Location = System::Drawing::Point(584, 337);
			this->textBox41->Name = L"textBox41";
			this->textBox41->ReadOnly = true;
			this->textBox41->Size = System::Drawing::Size(148, 24);
			this->textBox41->TabIndex = 42;
			this->textBox41->Text = L"trash mem";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(521, 311);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(52, 17);
			this->label21->TabIndex = 39;
			this->label21->Text = L"MEM10";
			// 
			// textBox40
			// 
			this->textBox40->Location = System::Drawing::Point(584, 308);
			this->textBox40->Name = L"textBox40";
			this->textBox40->ReadOnly = true;
			this->textBox40->Size = System::Drawing::Size(148, 24);
			this->textBox40->TabIndex = 40;
			this->textBox40->Text = L"trash mem";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(521, 281);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(52, 17);
			this->label22->TabIndex = 37;
			this->label22->Text = L"MEM09";
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(584, 278);
			this->textBox39->Name = L"textBox39";
			this->textBox39->ReadOnly = true;
			this->textBox39->Size = System::Drawing::Size(148, 24);
			this->textBox39->TabIndex = 38;
			this->textBox39->Text = L"trash mem";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(521, 251);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(52, 17);
			this->label23->TabIndex = 35;
			this->label23->Text = L"MEM08";
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(584, 248);
			this->textBox38->Name = L"textBox38";
			this->textBox38->ReadOnly = true;
			this->textBox38->Size = System::Drawing::Size(148, 24);
			this->textBox38->TabIndex = 36;
			this->textBox38->Text = L"trash mem";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(411, 448);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 27);
			this->button2->TabIndex = 51;
			this->button2->Text = L"Restart";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(292, 38);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(113, 17);
			this->label24->TabIndex = 52;
			this->label24->Text = L"program counter";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(295, 60);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(148, 24);
			this->textBox9->TabIndex = 53;
			this->textBox9->Text = L"0";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(315, 222);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(104, 27);
			this->button3->TabIndex = 54;
			this->button3->Text = L"LineByLine";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(236, 448);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(104, 27);
			this->button4->TabIndex = 55;
			this->button4->Text = L"Continue";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(3, 308);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(74, 17);
			this->label25->TabIndex = 58;
			this->label25->Text = L"outputReg";
			this->label25->Click += gcnew System::EventHandler(this, &MyForm::label25_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(51, 328);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(148, 24);
			this->textBox10->TabIndex = 59;
			this->textBox10->Text = L"trash mem";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(3, 263);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(63, 17);
			this->label26->TabIndex = 56;
			this->label26->Text = L"inputReg";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(51, 283);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(148, 24);
			this->textBox11->TabIndex = 57;
			this->textBox11->Text = L"trash mem";
			// 
			// untillbut
			// 
			this->untillbut->Location = System::Drawing::Point(6, 451);
			this->untillbut->Name = L"untillbut";
			this->untillbut->Size = System::Drawing::Size(104, 27);
			this->untillbut->TabIndex = 60;
			this->untillbut->Text = L"pause at";
			this->untillbut->UseVisualStyleBackColor = true;
			this->untillbut->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// pauserTb
			// 
			this->pauserTb->Location = System::Drawing::Point(127, 450);
			this->pauserTb->Name = L"pauserTb";
			this->pauserTb->Size = System::Drawing::Size(94, 24);
			this->pauserTb->TabIndex = 61;
			this->pauserTb->TextChanged += gcnew System::EventHandler(this, &MyForm::pauser_TextChanged);
			// 
			// currentLineBox
			// 
			this->currentLineBox->Location = System::Drawing::Point(7, 395);
			this->currentLineBox->Name = L"currentLineBox";
			this->currentLineBox->Size = System::Drawing::Size(507, 24);
			this->currentLineBox->TabIndex = 62;
			this->currentLineBox->TextChanged += gcnew System::EventHandler(this, &MyForm::currentLineBox_TextChanged);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(410, 360);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(104, 27);
			this->button5->TabIndex = 63;
			this->button5->Text = L"binary";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click_1);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(285, 360);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(104, 27);
			this->button6->TabIndex = 64;
			this->button6->Text = L"print mem";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(739, 493);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->currentLineBox);
			this->Controls->Add(this->pauserTb);
			this->Controls->Add(this->untillbut);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox45);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox44);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->textBox43);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->textBox42);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->textBox41);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->textBox40);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->textBox39);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->textBox38);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox37);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox36);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox35);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox34);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox33);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox32);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox31);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->textBox30);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Mips Simulator v1.053";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		processProgram("all");
		upData();
		//}
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//system("cls");restart button 
		loadFile();
		init();
		upData();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		//processLine();
		processProgram("LineByLine");
		upData();
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		processProgram("coninue");
		upData();
	}


	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
	{
		System::String^ pausertext = pauserTb->Text;
		x = System::Convert::ToInt32(pausertext);

			while (programCounter<x)
		{
			processProgram("LineByLine");
		}
			upData();
	}
private: System::Void pauser_TextChanged(System::Object^  sender, System::EventArgs^  e) 
{

}
private: System::Void currentLineBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label25_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button5_Click_1(System::Object^  sender, System::EventArgs^  e) {
	//bin here
	processProgram("bin");
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	processProgram("pmem");
	//std::cout << mem[65535]<<"\n";
	//std::cout << mem[0]<< "\n";
}
};
}

