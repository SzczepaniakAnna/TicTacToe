#pragma once

//k


namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();

		}
		

	protected:
		/// <summary>
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^  TitleGame;
	private: System::Windows::Forms::Label^  GameTitle;
	private: System::Windows::Forms::Panel^  Panel3x3;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  ChangeButton;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  PanelChooseLvl;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  LvlHardButton;
	private: System::Windows::Forms::Button^  LvlNormalButton;
	private: System::Windows::Forms::Panel^  Panel10x10;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Button^  ChangeButton2;
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button110;
	private: System::Windows::Forms::Button^  button111;
	private: System::Windows::Forms::Button^  button112;
	private: System::Windows::Forms::Button^  button113;
	private: System::Windows::Forms::Button^  button114;
	private: System::Windows::Forms::Button^  button115;
	private: System::Windows::Forms::Button^  button116;
	private: System::Windows::Forms::Button^  button117;
	private: System::Windows::Forms::Button^  button118;
	private: System::Windows::Forms::Button^  button119;
	private: System::Windows::Forms::Button^  button100;
	private: System::Windows::Forms::Button^  button101;
	private: System::Windows::Forms::Button^  button102;
	private: System::Windows::Forms::Button^  button103;
	private: System::Windows::Forms::Button^  button104;
	private: System::Windows::Forms::Button^  button105;
	private: System::Windows::Forms::Button^  button106;
	private: System::Windows::Forms::Button^  button107;
	private: System::Windows::Forms::Button^  button108;
	private: System::Windows::Forms::Button^  button109;
	private: System::Windows::Forms::Button^  button90;
	private: System::Windows::Forms::Button^  button91;
	private: System::Windows::Forms::Button^  button92;
	private: System::Windows::Forms::Button^  button93;
	private: System::Windows::Forms::Button^  button94;
	private: System::Windows::Forms::Button^  button95;
	private: System::Windows::Forms::Button^  button96;
	private: System::Windows::Forms::Button^  button97;
	private: System::Windows::Forms::Button^  button98;
	private: System::Windows::Forms::Button^  button99;
	private: System::Windows::Forms::Button^  button80;
	private: System::Windows::Forms::Button^  button81;
	private: System::Windows::Forms::Button^  button82;
	private: System::Windows::Forms::Button^  button83;
	private: System::Windows::Forms::Button^  button84;
	private: System::Windows::Forms::Button^  button85;
	private: System::Windows::Forms::Button^  button86;
	private: System::Windows::Forms::Button^  button87;
	private: System::Windows::Forms::Button^  button88;
	private: System::Windows::Forms::Button^  button89;
	private: System::Windows::Forms::Button^  button70;
	private: System::Windows::Forms::Button^  button71;
	private: System::Windows::Forms::Button^  button72;
	private: System::Windows::Forms::Button^  button73;
	private: System::Windows::Forms::Button^  button74;
	private: System::Windows::Forms::Button^  button75;
	private: System::Windows::Forms::Button^  button76;
	private: System::Windows::Forms::Button^  button77;
	private: System::Windows::Forms::Button^  button78;
	private: System::Windows::Forms::Button^  button79;
	private: System::Windows::Forms::Button^  button60;
	private: System::Windows::Forms::Button^  button61;
	private: System::Windows::Forms::Button^  button62;
	private: System::Windows::Forms::Button^  button63;
	private: System::Windows::Forms::Button^  button64;
	private: System::Windows::Forms::Button^  button65;
	private: System::Windows::Forms::Button^  button66;
	private: System::Windows::Forms::Button^  button67;
	private: System::Windows::Forms::Button^  button68;
	private: System::Windows::Forms::Button^  button69;
	private: System::Windows::Forms::Button^  button50;
	private: System::Windows::Forms::Button^  button51;
	private: System::Windows::Forms::Button^  button52;
	private: System::Windows::Forms::Button^  button53;
	private: System::Windows::Forms::Button^  button54;
	private: System::Windows::Forms::Button^  button55;
	private: System::Windows::Forms::Button^  button56;
	private: System::Windows::Forms::Button^  button57;
	private: System::Windows::Forms::Button^  button58;
	private: System::Windows::Forms::Button^  button59;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Button^  button43;
	private: System::Windows::Forms::Button^  button44;
	private: System::Windows::Forms::Button^  button45;
	private: System::Windows::Forms::Button^  button46;
	private: System::Windows::Forms::Button^  button47;
	private: System::Windows::Forms::Button^  button48;
	private: System::Windows::Forms::Button^  button49;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button23;
	

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TitleGame = (gcnew System::Windows::Forms::Panel());
			this->GameTitle = (gcnew System::Windows::Forms::Label());
			this->Panel3x3 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->ChangeButton = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Panel10x10 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->ChangeButton2 = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->button110 = (gcnew System::Windows::Forms::Button());
			this->button111 = (gcnew System::Windows::Forms::Button());
			this->button112 = (gcnew System::Windows::Forms::Button());
			this->button113 = (gcnew System::Windows::Forms::Button());
			this->button114 = (gcnew System::Windows::Forms::Button());
			this->button115 = (gcnew System::Windows::Forms::Button());
			this->button116 = (gcnew System::Windows::Forms::Button());
			this->button117 = (gcnew System::Windows::Forms::Button());
			this->button118 = (gcnew System::Windows::Forms::Button());
			this->button119 = (gcnew System::Windows::Forms::Button());
			this->button100 = (gcnew System::Windows::Forms::Button());
			this->button101 = (gcnew System::Windows::Forms::Button());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->button103 = (gcnew System::Windows::Forms::Button());
			this->button104 = (gcnew System::Windows::Forms::Button());
			this->button105 = (gcnew System::Windows::Forms::Button());
			this->button106 = (gcnew System::Windows::Forms::Button());
			this->button107 = (gcnew System::Windows::Forms::Button());
			this->button108 = (gcnew System::Windows::Forms::Button());
			this->button109 = (gcnew System::Windows::Forms::Button());
			this->button90 = (gcnew System::Windows::Forms::Button());
			this->button91 = (gcnew System::Windows::Forms::Button());
			this->button92 = (gcnew System::Windows::Forms::Button());
			this->button93 = (gcnew System::Windows::Forms::Button());
			this->button94 = (gcnew System::Windows::Forms::Button());
			this->button95 = (gcnew System::Windows::Forms::Button());
			this->button96 = (gcnew System::Windows::Forms::Button());
			this->button97 = (gcnew System::Windows::Forms::Button());
			this->button98 = (gcnew System::Windows::Forms::Button());
			this->button99 = (gcnew System::Windows::Forms::Button());
			this->button80 = (gcnew System::Windows::Forms::Button());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->button82 = (gcnew System::Windows::Forms::Button());
			this->button83 = (gcnew System::Windows::Forms::Button());
			this->button84 = (gcnew System::Windows::Forms::Button());
			this->button85 = (gcnew System::Windows::Forms::Button());
			this->button86 = (gcnew System::Windows::Forms::Button());
			this->button87 = (gcnew System::Windows::Forms::Button());
			this->button88 = (gcnew System::Windows::Forms::Button());
			this->button89 = (gcnew System::Windows::Forms::Button());
			this->button70 = (gcnew System::Windows::Forms::Button());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->button73 = (gcnew System::Windows::Forms::Button());
			this->button74 = (gcnew System::Windows::Forms::Button());
			this->button75 = (gcnew System::Windows::Forms::Button());
			this->button76 = (gcnew System::Windows::Forms::Button());
			this->button77 = (gcnew System::Windows::Forms::Button());
			this->button78 = (gcnew System::Windows::Forms::Button());
			this->button79 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->button69 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->PanelChooseLvl = (gcnew System::Windows::Forms::Panel());
			this->LvlHardButton = (gcnew System::Windows::Forms::Button());
			this->LvlNormalButton = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TitleGame->SuspendLayout();
			this->Panel3x3->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->Panel10x10->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->PanelChooseLvl->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// TitleGame
			// 
			this->TitleGame->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->TitleGame->Controls->Add(this->GameTitle);
			this->TitleGame->Location = System::Drawing::Point(84, 12);
			this->TitleGame->Name = L"TitleGame";
			this->TitleGame->Size = System::Drawing::Size(603, 60);
			this->TitleGame->TabIndex = 9;
			// 
			// GameTitle
			// 
			this->GameTitle->AutoSize = true;
			this->GameTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->GameTitle->Location = System::Drawing::Point(152, 8);
			this->GameTitle->Name = L"GameTitle";
			this->GameTitle->Size = System::Drawing::Size(304, 38);
			this->GameTitle->TabIndex = 15;
			this->GameTitle->Text = L"Tic Tac Toe Game";
			// 
			// Panel3x3
			// 
			this->Panel3x3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Panel3x3->Controls->Add(this->panel3);
			this->Panel3x3->Controls->Add(this->panel2);
			this->Panel3x3->Location = System::Drawing::Point(84, 89);
			this->Panel3x3->Name = L"Panel3x3";
			this->Panel3x3->Size = System::Drawing::Size(603, 449);
			this->Panel3x3->TabIndex = 10;
			this->Panel3x3->Visible = false;
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->ChangeButton);
			this->panel3->Location = System::Drawing::Point(348, 21);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(233, 300);
			this->panel3->TabIndex = 11;
			// 
			// ChangeButton
			// 
			this->ChangeButton->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ChangeButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ChangeButton->Location = System::Drawing::Point(20, 128);
			this->ChangeButton->Name = L"ChangeButton";
			this->ChangeButton->Size = System::Drawing::Size(190, 57);
			this->ChangeButton->TabIndex = 9;
			this->ChangeButton->Text = L"New Game";
			this->ChangeButton->UseVisualStyleBackColor = false;
			this->ChangeButton->Click += gcnew System::EventHandler(this, &Form1::ChangeButton_Click);
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Location = System::Drawing::Point(18, 21);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(324, 300);
			this->panel2->TabIndex = 10;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button7->Location = System::Drawing::Point(23, 199);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(88, 87);
			this->button7->TabIndex = 8;
			this->button7->Tag = L"3";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button8->Location = System::Drawing::Point(117, 199);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(88, 87);
			this->button8->TabIndex = 7;
			this->button8->Tag = L"3";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button9->Location = System::Drawing::Point(211, 199);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(88, 87);
			this->button9->TabIndex = 6;
			this->button9->Tag = L"3";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(23, 106);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(88, 87);
			this->button4->TabIndex = 5;
			this->button4->Tag = L"2";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->Location = System::Drawing::Point(211, 106);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(88, 87);
			this->button6->TabIndex = 3;
			this->button6->Tag = L"2";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->Location = System::Drawing::Point(117, 106);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(88, 87);
			this->button5->TabIndex = 4;
			this->button5->Tag = L"2";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(211, 13);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(88, 87);
			this->button3->TabIndex = 2;
			this->button3->Tag = L"1";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(117, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 87);
			this->button2->TabIndex = 1;
			this->button2->Tag = L"1";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(23, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 87);
			this->button1->TabIndex = 0;
			this->button1->Tag = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Panel10x10
			// 
			this->Panel10x10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Panel10x10->Controls->Add(this->panel7);
			this->Panel10x10->Controls->Add(this->panel8);
			this->Panel10x10->Location = System::Drawing::Point(84, 92);
			this->Panel10x10->Name = L"Panel10x10";
			this->Panel10x10->Size = System::Drawing::Size(603, 441);
			this->Panel10x10->TabIndex = 12;
			this->Panel10x10->Visible = false;
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel7->Controls->Add(this->ChangeButton2);
			this->panel7->Location = System::Drawing::Point(348, 21);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(233, 319);
			this->panel7->TabIndex = 11;
			// 
			// ChangeButton2
			// 
			this->ChangeButton2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ChangeButton2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ChangeButton2->Location = System::Drawing::Point(18, 127);
			this->ChangeButton2->Name = L"ChangeButton2";
			this->ChangeButton2->Size = System::Drawing::Size(190, 57);
			this->ChangeButton2->TabIndex = 9;
			this->ChangeButton2->Text = L"New Game";
			this->ChangeButton2->UseVisualStyleBackColor = false;
			this->ChangeButton2->Click += gcnew System::EventHandler(this, &Form1::ChangeButton2_Click);
			// 
			// panel8
			// 
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel8->Controls->Add(this->button110);
			this->panel8->Controls->Add(this->button111);
			this->panel8->Controls->Add(this->button112);
			this->panel8->Controls->Add(this->button113);
			this->panel8->Controls->Add(this->button114);
			this->panel8->Controls->Add(this->button115);
			this->panel8->Controls->Add(this->button116);
			this->panel8->Controls->Add(this->button117);
			this->panel8->Controls->Add(this->button118);
			this->panel8->Controls->Add(this->button119);
			this->panel8->Controls->Add(this->button100);
			this->panel8->Controls->Add(this->button101);
			this->panel8->Controls->Add(this->button102);
			this->panel8->Controls->Add(this->button103);
			this->panel8->Controls->Add(this->button104);
			this->panel8->Controls->Add(this->button105);
			this->panel8->Controls->Add(this->button106);
			this->panel8->Controls->Add(this->button107);
			this->panel8->Controls->Add(this->button108);
			this->panel8->Controls->Add(this->button109);
			this->panel8->Controls->Add(this->button90);
			this->panel8->Controls->Add(this->button91);
			this->panel8->Controls->Add(this->button92);
			this->panel8->Controls->Add(this->button93);
			this->panel8->Controls->Add(this->button94);
			this->panel8->Controls->Add(this->button95);
			this->panel8->Controls->Add(this->button96);
			this->panel8->Controls->Add(this->button97);
			this->panel8->Controls->Add(this->button98);
			this->panel8->Controls->Add(this->button99);
			this->panel8->Controls->Add(this->button80);
			this->panel8->Controls->Add(this->button81);
			this->panel8->Controls->Add(this->button82);
			this->panel8->Controls->Add(this->button83);
			this->panel8->Controls->Add(this->button84);
			this->panel8->Controls->Add(this->button85);
			this->panel8->Controls->Add(this->button86);
			this->panel8->Controls->Add(this->button87);
			this->panel8->Controls->Add(this->button88);
			this->panel8->Controls->Add(this->button89);
			this->panel8->Controls->Add(this->button70);
			this->panel8->Controls->Add(this->button71);
			this->panel8->Controls->Add(this->button72);
			this->panel8->Controls->Add(this->button73);
			this->panel8->Controls->Add(this->button74);
			this->panel8->Controls->Add(this->button75);
			this->panel8->Controls->Add(this->button76);
			this->panel8->Controls->Add(this->button77);
			this->panel8->Controls->Add(this->button78);
			this->panel8->Controls->Add(this->button79);
			this->panel8->Controls->Add(this->button60);
			this->panel8->Controls->Add(this->button61);
			this->panel8->Controls->Add(this->button62);
			this->panel8->Controls->Add(this->button63);
			this->panel8->Controls->Add(this->button64);
			this->panel8->Controls->Add(this->button65);
			this->panel8->Controls->Add(this->button66);
			this->panel8->Controls->Add(this->button67);
			this->panel8->Controls->Add(this->button68);
			this->panel8->Controls->Add(this->button69);
			this->panel8->Controls->Add(this->button50);
			this->panel8->Controls->Add(this->button51);
			this->panel8->Controls->Add(this->button52);
			this->panel8->Controls->Add(this->button53);
			this->panel8->Controls->Add(this->button54);
			this->panel8->Controls->Add(this->button55);
			this->panel8->Controls->Add(this->button56);
			this->panel8->Controls->Add(this->button57);
			this->panel8->Controls->Add(this->button58);
			this->panel8->Controls->Add(this->button59);
			this->panel8->Controls->Add(this->button40);
			this->panel8->Controls->Add(this->button41);
			this->panel8->Controls->Add(this->button42);
			this->panel8->Controls->Add(this->button43);
			this->panel8->Controls->Add(this->button44);
			this->panel8->Controls->Add(this->button45);
			this->panel8->Controls->Add(this->button46);
			this->panel8->Controls->Add(this->button47);
			this->panel8->Controls->Add(this->button48);
			this->panel8->Controls->Add(this->button49);
			this->panel8->Controls->Add(this->button30);
			this->panel8->Controls->Add(this->button31);
			this->panel8->Controls->Add(this->button32);
			this->panel8->Controls->Add(this->button33);
			this->panel8->Controls->Add(this->button34);
			this->panel8->Controls->Add(this->button35);
			this->panel8->Controls->Add(this->button36);
			this->panel8->Controls->Add(this->button37);
			this->panel8->Controls->Add(this->button38);
			this->panel8->Controls->Add(this->button39);
			this->panel8->Controls->Add(this->button28);
			this->panel8->Controls->Add(this->button29);
			this->panel8->Controls->Add(this->button24);
			this->panel8->Controls->Add(this->button25);
			this->panel8->Controls->Add(this->button26);
			this->panel8->Controls->Add(this->button27);
			this->panel8->Controls->Add(this->button11);
			this->panel8->Controls->Add(this->button23);
			this->panel8->Controls->Add(this->button10);
			this->panel8->Controls->Add(this->button22);
			this->panel8->Location = System::Drawing::Point(32, 21);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(310, 319);
			this->panel8->TabIndex = 10;
			// 
			// button110
			// 
			this->button110->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button110->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button110->Location = System::Drawing::Point(264, 272);
			this->button110->Name = L"button110";
			this->button110->Size = System::Drawing::Size(32, 35);
			this->button110->TabIndex = 99;
			this->button110->Tag = L"10";
			this->button110->UseVisualStyleBackColor = false;
			this->button110->Click += gcnew System::EventHandler(this, &Form1::button110_Click);
			// 
			// button111
			// 
			this->button111->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button111->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button111->Location = System::Drawing::Point(235, 272);
			this->button111->Name = L"button111";
			this->button111->Size = System::Drawing::Size(32, 35);
			this->button111->TabIndex = 98;
			this->button111->Tag = L"10";
			this->button111->UseVisualStyleBackColor = false;
			this->button111->Click += gcnew System::EventHandler(this, &Form1::button111_Click);
			// 
			// button112
			// 
			this->button112->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button112->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button112->Location = System::Drawing::Point(205, 272);
			this->button112->Name = L"button112";
			this->button112->Size = System::Drawing::Size(32, 35);
			this->button112->TabIndex = 97;
			this->button112->Tag = L"10";
			this->button112->UseVisualStyleBackColor = false;
			this->button112->Click += gcnew System::EventHandler(this, &Form1::button112_Click);
			// 
			// button113
			// 
			this->button113->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button113->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button113->Location = System::Drawing::Point(176, 272);
			this->button113->Name = L"button113";
			this->button113->Size = System::Drawing::Size(32, 35);
			this->button113->TabIndex = 96;
			this->button113->Tag = L"10";
			this->button113->UseVisualStyleBackColor = false;
			this->button113->Click += gcnew System::EventHandler(this, &Form1::button113_Click);
			// 
			// button114
			// 
			this->button114->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button114->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button114->Location = System::Drawing::Point(146, 272);
			this->button114->Name = L"button114";
			this->button114->Size = System::Drawing::Size(32, 35);
			this->button114->TabIndex = 95;
			this->button114->Tag = L"10";
			this->button114->UseVisualStyleBackColor = false;
			this->button114->Click += gcnew System::EventHandler(this, &Form1::button114_Click);
			// 
			// button115
			// 
			this->button115->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button115->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button115->Location = System::Drawing::Point(117, 272);
			this->button115->Name = L"button115";
			this->button115->Size = System::Drawing::Size(32, 35);
			this->button115->TabIndex = 94;
			this->button115->Tag = L"10";
			this->button115->UseVisualStyleBackColor = false;
			this->button115->Click += gcnew System::EventHandler(this, &Form1::button115_Click);
			// 
			// button116
			// 
			this->button116->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button116->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button116->Location = System::Drawing::Point(89, 272);
			this->button116->Name = L"button116";
			this->button116->Size = System::Drawing::Size(32, 35);
			this->button116->TabIndex = 93;
			this->button116->Tag = L"10";
			this->button116->UseVisualStyleBackColor = false;
			this->button116->Click += gcnew System::EventHandler(this, &Form1::button116_Click);
			// 
			// button117
			// 
			this->button117->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button117->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button117->Location = System::Drawing::Point(60, 272);
			this->button117->Name = L"button117";
			this->button117->Size = System::Drawing::Size(32, 35);
			this->button117->TabIndex = 92;
			this->button117->Tag = L"10";
			this->button117->UseVisualStyleBackColor = false;
			this->button117->Click += gcnew System::EventHandler(this, &Form1::button117_Click);
			// 
			// button118
			// 
			this->button118->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button118->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button118->Location = System::Drawing::Point(30, 272);
			this->button118->Name = L"button118";
			this->button118->Size = System::Drawing::Size(32, 35);
			this->button118->TabIndex = 91;
			this->button118->Tag = L"10";
			this->button118->UseVisualStyleBackColor = false;
			this->button118->Click += gcnew System::EventHandler(this, &Form1::button118_Click);
			// 
			// button119
			// 
			this->button119->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button119->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button119->Location = System::Drawing::Point(1, 272);
			this->button119->Name = L"button119";
			this->button119->Size = System::Drawing::Size(32, 35);
			this->button119->TabIndex = 90;
			this->button119->Tag = L"10";
			this->button119->UseVisualStyleBackColor = false;
			this->button119->Click += gcnew System::EventHandler(this, &Form1::button119_Click);
			// 
			// button100
			// 
			this->button100->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button100->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button100->Location = System::Drawing::Point(264, 240);
			this->button100->Name = L"button100";
			this->button100->Size = System::Drawing::Size(32, 35);
			this->button100->TabIndex = 89;
			this->button100->Tag = L"10";
			this->button100->UseVisualStyleBackColor = false;
			this->button100->Click += gcnew System::EventHandler(this, &Form1::button100_Click);
			// 
			// button101
			// 
			this->button101->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button101->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button101->Location = System::Drawing::Point(235, 240);
			this->button101->Name = L"button101";
			this->button101->Size = System::Drawing::Size(32, 35);
			this->button101->TabIndex = 88;
			this->button101->Tag = L"10";
			this->button101->UseVisualStyleBackColor = false;
			this->button101->Click += gcnew System::EventHandler(this, &Form1::button101_Click);
			// 
			// button102
			// 
			this->button102->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button102->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button102->Location = System::Drawing::Point(205, 240);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(32, 35);
			this->button102->TabIndex = 87;
			this->button102->Tag = L"10";
			this->button102->UseVisualStyleBackColor = false;
			this->button102->Click += gcnew System::EventHandler(this, &Form1::button102_Click);
			// 
			// button103
			// 
			this->button103->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button103->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button103->Location = System::Drawing::Point(176, 240);
			this->button103->Name = L"button103";
			this->button103->Size = System::Drawing::Size(32, 35);
			this->button103->TabIndex = 86;
			this->button103->Tag = L"10";
			this->button103->UseVisualStyleBackColor = false;
			this->button103->Click += gcnew System::EventHandler(this, &Form1::button103_Click);
			// 
			// button104
			// 
			this->button104->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button104->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button104->Location = System::Drawing::Point(146, 240);
			this->button104->Name = L"button104";
			this->button104->Size = System::Drawing::Size(32, 35);
			this->button104->TabIndex = 85;
			this->button104->Tag = L"10";
			this->button104->UseVisualStyleBackColor = false;
			this->button104->Click += gcnew System::EventHandler(this, &Form1::button104_Click);
			// 
			// button105
			// 
			this->button105->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button105->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button105->Location = System::Drawing::Point(117, 240);
			this->button105->Name = L"button105";
			this->button105->Size = System::Drawing::Size(32, 35);
			this->button105->TabIndex = 84;
			this->button105->Tag = L"10";
			this->button105->UseVisualStyleBackColor = false;
			this->button105->Click += gcnew System::EventHandler(this, &Form1::button105_Click);
			// 
			// button106
			// 
			this->button106->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button106->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button106->Location = System::Drawing::Point(89, 240);
			this->button106->Name = L"button106";
			this->button106->Size = System::Drawing::Size(32, 35);
			this->button106->TabIndex = 83;
			this->button106->Tag = L"10";
			this->button106->UseVisualStyleBackColor = false;
			this->button106->Click += gcnew System::EventHandler(this, &Form1::button106_Click);
			// 
			// button107
			// 
			this->button107->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button107->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button107->Location = System::Drawing::Point(60, 240);
			this->button107->Name = L"button107";
			this->button107->Size = System::Drawing::Size(32, 35);
			this->button107->TabIndex = 82;
			this->button107->Tag = L"10";
			this->button107->UseVisualStyleBackColor = false;
			this->button107->Click += gcnew System::EventHandler(this, &Form1::button107_Click);
			// 
			// button108
			// 
			this->button108->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button108->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button108->Location = System::Drawing::Point(30, 240);
			this->button108->Name = L"button108";
			this->button108->Size = System::Drawing::Size(32, 35);
			this->button108->TabIndex = 81;
			this->button108->Tag = L"10";
			this->button108->UseVisualStyleBackColor = false;
			this->button108->Click += gcnew System::EventHandler(this, &Form1::button108_Click);
			// 
			// button109
			// 
			this->button109->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button109->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button109->Location = System::Drawing::Point(1, 240);
			this->button109->Name = L"button109";
			this->button109->Size = System::Drawing::Size(32, 35);
			this->button109->TabIndex = 80;
			this->button109->Tag = L"10";
			this->button109->UseVisualStyleBackColor = false;
			this->button109->Click += gcnew System::EventHandler(this, &Form1::button109_Click);
			// 
			// button90
			// 
			this->button90->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button90->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button90->Location = System::Drawing::Point(264, 209);
			this->button90->Name = L"button90";
			this->button90->Size = System::Drawing::Size(32, 35);
			this->button90->TabIndex = 79;
			this->button90->Tag = L"10";
			this->button90->UseVisualStyleBackColor = false;
			this->button90->Click += gcnew System::EventHandler(this, &Form1::button90_Click);
			// 
			// button91
			// 
			this->button91->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button91->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button91->Location = System::Drawing::Point(235, 209);
			this->button91->Name = L"button91";
			this->button91->Size = System::Drawing::Size(32, 35);
			this->button91->TabIndex = 78;
			this->button91->Tag = L"10";
			this->button91->UseVisualStyleBackColor = false;
			this->button91->Click += gcnew System::EventHandler(this, &Form1::button91_Click);
			// 
			// button92
			// 
			this->button92->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button92->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button92->Location = System::Drawing::Point(205, 209);
			this->button92->Name = L"button92";
			this->button92->Size = System::Drawing::Size(32, 35);
			this->button92->TabIndex = 77;
			this->button92->Tag = L"10";
			this->button92->UseVisualStyleBackColor = false;
			this->button92->Click += gcnew System::EventHandler(this, &Form1::button92_Click);
			// 
			// button93
			// 
			this->button93->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button93->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button93->Location = System::Drawing::Point(176, 209);
			this->button93->Name = L"button93";
			this->button93->Size = System::Drawing::Size(32, 35);
			this->button93->TabIndex = 76;
			this->button93->Tag = L"10";
			this->button93->UseVisualStyleBackColor = false;
			this->button93->Click += gcnew System::EventHandler(this, &Form1::button93_Click);
			// 
			// button94
			// 
			this->button94->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button94->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button94->Location = System::Drawing::Point(146, 209);
			this->button94->Name = L"button94";
			this->button94->Size = System::Drawing::Size(32, 35);
			this->button94->TabIndex = 75;
			this->button94->Tag = L"10";
			this->button94->UseVisualStyleBackColor = false;
			this->button94->Click += gcnew System::EventHandler(this, &Form1::button94_Click);
			// 
			// button95
			// 
			this->button95->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button95->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button95->Location = System::Drawing::Point(117, 209);
			this->button95->Name = L"button95";
			this->button95->Size = System::Drawing::Size(32, 35);
			this->button95->TabIndex = 74;
			this->button95->Tag = L"10";
			this->button95->UseVisualStyleBackColor = false;
			this->button95->Click += gcnew System::EventHandler(this, &Form1::button95_Click);
			// 
			// button96
			// 
			this->button96->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button96->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button96->Location = System::Drawing::Point(89, 209);
			this->button96->Name = L"button96";
			this->button96->Size = System::Drawing::Size(32, 35);
			this->button96->TabIndex = 73;
			this->button96->Tag = L"10";
			this->button96->UseVisualStyleBackColor = false;
			this->button96->Click += gcnew System::EventHandler(this, &Form1::button96_Click);
			// 
			// button97
			// 
			this->button97->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button97->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button97->Location = System::Drawing::Point(60, 209);
			this->button97->Name = L"button97";
			this->button97->Size = System::Drawing::Size(32, 35);
			this->button97->TabIndex = 72;
			this->button97->Tag = L"10";
			this->button97->UseVisualStyleBackColor = false;
			this->button97->Click += gcnew System::EventHandler(this, &Form1::button97_Click);
			// 
			// button98
			// 
			this->button98->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button98->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button98->Location = System::Drawing::Point(30, 209);
			this->button98->Name = L"button98";
			this->button98->Size = System::Drawing::Size(32, 35);
			this->button98->TabIndex = 71;
			this->button98->Tag = L"10";
			this->button98->UseVisualStyleBackColor = false;
			this->button98->Click += gcnew System::EventHandler(this, &Form1::button98_Click);
			// 
			// button99
			// 
			this->button99->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button99->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button99->Location = System::Drawing::Point(1, 209);
			this->button99->Name = L"button99";
			this->button99->Size = System::Drawing::Size(32, 35);
			this->button99->TabIndex = 70;
			this->button99->Tag = L"10";
			this->button99->UseVisualStyleBackColor = false;
			this->button99->Click += gcnew System::EventHandler(this, &Form1::button99_Click);
			// 
			// button80
			// 
			this->button80->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button80->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button80->Location = System::Drawing::Point(264, 177);
			this->button80->Name = L"button80";
			this->button80->Size = System::Drawing::Size(32, 35);
			this->button80->TabIndex = 69;
			this->button80->Tag = L"10";
			this->button80->UseVisualStyleBackColor = false;
			this->button80->Click += gcnew System::EventHandler(this, &Form1::button80_Click);
			// 
			// button81
			// 
			this->button81->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button81->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button81->Location = System::Drawing::Point(235, 177);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(32, 35);
			this->button81->TabIndex = 68;
			this->button81->Tag = L"10";
			this->button81->UseVisualStyleBackColor = false;
			this->button81->Click += gcnew System::EventHandler(this, &Form1::button81_Click);
			// 
			// button82
			// 
			this->button82->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button82->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button82->Location = System::Drawing::Point(205, 177);
			this->button82->Name = L"button82";
			this->button82->Size = System::Drawing::Size(32, 35);
			this->button82->TabIndex = 67;
			this->button82->Tag = L"10";
			this->button82->UseVisualStyleBackColor = false;
			this->button82->Click += gcnew System::EventHandler(this, &Form1::button82_Click);
			// 
			// button83
			// 
			this->button83->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button83->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button83->Location = System::Drawing::Point(176, 177);
			this->button83->Name = L"button83";
			this->button83->Size = System::Drawing::Size(32, 35);
			this->button83->TabIndex = 66;
			this->button83->Tag = L"10";
			this->button83->UseVisualStyleBackColor = false;
			this->button83->Click += gcnew System::EventHandler(this, &Form1::button83_Click);
			// 
			// button84
			// 
			this->button84->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button84->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button84->Location = System::Drawing::Point(146, 177);
			this->button84->Name = L"button84";
			this->button84->Size = System::Drawing::Size(32, 35);
			this->button84->TabIndex = 65;
			this->button84->Tag = L"10";
			this->button84->UseVisualStyleBackColor = false;
			this->button84->Click += gcnew System::EventHandler(this, &Form1::button84_Click);
			// 
			// button85
			// 
			this->button85->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button85->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button85->Location = System::Drawing::Point(117, 177);
			this->button85->Name = L"button85";
			this->button85->Size = System::Drawing::Size(32, 35);
			this->button85->TabIndex = 64;
			this->button85->Tag = L"10";
			this->button85->UseVisualStyleBackColor = false;
			this->button85->Click += gcnew System::EventHandler(this, &Form1::button85_Click);
			// 
			// button86
			// 
			this->button86->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button86->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button86->Location = System::Drawing::Point(89, 177);
			this->button86->Name = L"button86";
			this->button86->Size = System::Drawing::Size(32, 35);
			this->button86->TabIndex = 63;
			this->button86->Tag = L"10";
			this->button86->UseVisualStyleBackColor = false;
			this->button86->Click += gcnew System::EventHandler(this, &Form1::button86_Click);
			// 
			// button87
			// 
			this->button87->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button87->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button87->Location = System::Drawing::Point(60, 177);
			this->button87->Name = L"button87";
			this->button87->Size = System::Drawing::Size(32, 35);
			this->button87->TabIndex = 62;
			this->button87->Tag = L"10";
			this->button87->UseVisualStyleBackColor = false;
			this->button87->Click += gcnew System::EventHandler(this, &Form1::button87_Click);
			// 
			// button88
			// 
			this->button88->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button88->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button88->Location = System::Drawing::Point(30, 177);
			this->button88->Name = L"button88";
			this->button88->Size = System::Drawing::Size(32, 35);
			this->button88->TabIndex = 61;
			this->button88->Tag = L"10";
			this->button88->UseVisualStyleBackColor = false;
			this->button88->Click += gcnew System::EventHandler(this, &Form1::button88_Click);
			// 
			// button89
			// 
			this->button89->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button89->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button89->Location = System::Drawing::Point(1, 177);
			this->button89->Name = L"button89";
			this->button89->Size = System::Drawing::Size(32, 35);
			this->button89->TabIndex = 60;
			this->button89->Tag = L"10";
			this->button89->UseVisualStyleBackColor = false;
			this->button89->Click += gcnew System::EventHandler(this, &Form1::button89_Click);
			// 
			// button70
			// 
			this->button70->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button70->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button70->Location = System::Drawing::Point(264, 149);
			this->button70->Name = L"button70";
			this->button70->Size = System::Drawing::Size(32, 35);
			this->button70->TabIndex = 59;
			this->button70->Tag = L"10";
			this->button70->UseVisualStyleBackColor = false;
			this->button70->Click += gcnew System::EventHandler(this, &Form1::button70_Click);
			// 
			// button71
			// 
			this->button71->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button71->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button71->Location = System::Drawing::Point(235, 149);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(32, 35);
			this->button71->TabIndex = 58;
			this->button71->Tag = L"10";
			this->button71->UseVisualStyleBackColor = false;
			this->button71->Click += gcnew System::EventHandler(this, &Form1::button71_Click);
			// 
			// button72
			// 
			this->button72->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button72->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button72->Location = System::Drawing::Point(205, 149);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(32, 35);
			this->button72->TabIndex = 57;
			this->button72->Tag = L"10";
			this->button72->UseVisualStyleBackColor = false;
			this->button72->Click += gcnew System::EventHandler(this, &Form1::button72_Click);
			// 
			// button73
			// 
			this->button73->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button73->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button73->Location = System::Drawing::Point(176, 149);
			this->button73->Name = L"button73";
			this->button73->Size = System::Drawing::Size(32, 35);
			this->button73->TabIndex = 56;
			this->button73->Tag = L"10";
			this->button73->UseVisualStyleBackColor = false;
			this->button73->Click += gcnew System::EventHandler(this, &Form1::button73_Click);
			// 
			// button74
			// 
			this->button74->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button74->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button74->Location = System::Drawing::Point(146, 149);
			this->button74->Name = L"button74";
			this->button74->Size = System::Drawing::Size(32, 35);
			this->button74->TabIndex = 55;
			this->button74->Tag = L"10";
			this->button74->UseVisualStyleBackColor = false;
			this->button74->Click += gcnew System::EventHandler(this, &Form1::button74_Click);
			// 
			// button75
			// 
			this->button75->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button75->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button75->Location = System::Drawing::Point(117, 149);
			this->button75->Name = L"button75";
			this->button75->Size = System::Drawing::Size(32, 35);
			this->button75->TabIndex = 54;
			this->button75->Tag = L"10";
			this->button75->UseVisualStyleBackColor = false;
			this->button75->Click += gcnew System::EventHandler(this, &Form1::button75_Click);
			// 
			// button76
			// 
			this->button76->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button76->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button76->Location = System::Drawing::Point(89, 149);
			this->button76->Name = L"button76";
			this->button76->Size = System::Drawing::Size(32, 35);
			this->button76->TabIndex = 53;
			this->button76->Tag = L"10";
			this->button76->UseVisualStyleBackColor = false;
			this->button76->Click += gcnew System::EventHandler(this, &Form1::button76_Click);
			// 
			// button77
			// 
			this->button77->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button77->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button77->Location = System::Drawing::Point(60, 149);
			this->button77->Name = L"button77";
			this->button77->Size = System::Drawing::Size(32, 35);
			this->button77->TabIndex = 52;
			this->button77->Tag = L"10";
			this->button77->UseVisualStyleBackColor = false;
			this->button77->Click += gcnew System::EventHandler(this, &Form1::button77_Click);
			// 
			// button78
			// 
			this->button78->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button78->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button78->Location = System::Drawing::Point(30, 149);
			this->button78->Name = L"button78";
			this->button78->Size = System::Drawing::Size(32, 35);
			this->button78->TabIndex = 51;
			this->button78->Tag = L"10";
			this->button78->UseVisualStyleBackColor = false;
			this->button78->Click += gcnew System::EventHandler(this, &Form1::button78_Click);
			// 
			// button79
			// 
			this->button79->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button79->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button79->Location = System::Drawing::Point(1, 149);
			this->button79->Name = L"button79";
			this->button79->Size = System::Drawing::Size(32, 35);
			this->button79->TabIndex = 50;
			this->button79->Tag = L"10";
			this->button79->UseVisualStyleBackColor = false;
			this->button79->Click += gcnew System::EventHandler(this, &Form1::button79_Click);
			// 
			// button60
			// 
			this->button60->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button60->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button60->Location = System::Drawing::Point(264, 121);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(32, 35);
			this->button60->TabIndex = 49;
			this->button60->Tag = L"10";
			this->button60->UseVisualStyleBackColor = false;
			this->button60->Click += gcnew System::EventHandler(this, &Form1::button60_Click);
			// 
			// button61
			// 
			this->button61->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button61->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button61->Location = System::Drawing::Point(235, 121);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(32, 35);
			this->button61->TabIndex = 48;
			this->button61->Tag = L"10";
			this->button61->UseVisualStyleBackColor = false;
			this->button61->Click += gcnew System::EventHandler(this, &Form1::button61_Click);
			// 
			// button62
			// 
			this->button62->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button62->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button62->Location = System::Drawing::Point(205, 121);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(32, 35);
			this->button62->TabIndex = 47;
			this->button62->Tag = L"10";
			this->button62->UseVisualStyleBackColor = false;
			this->button62->Click += gcnew System::EventHandler(this, &Form1::button62_Click);
			// 
			// button63
			// 
			this->button63->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button63->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button63->Location = System::Drawing::Point(176, 121);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(32, 35);
			this->button63->TabIndex = 46;
			this->button63->Tag = L"10";
			this->button63->UseVisualStyleBackColor = false;
			this->button63->Click += gcnew System::EventHandler(this, &Form1::button63_Click);
			// 
			// button64
			// 
			this->button64->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button64->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button64->Location = System::Drawing::Point(146, 121);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(32, 35);
			this->button64->TabIndex = 45;
			this->button64->Tag = L"10";
			this->button64->UseVisualStyleBackColor = false;
			this->button64->Click += gcnew System::EventHandler(this, &Form1::button64_Click);
			// 
			// button65
			// 
			this->button65->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button65->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button65->Location = System::Drawing::Point(117, 121);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(32, 35);
			this->button65->TabIndex = 44;
			this->button65->Tag = L"10";
			this->button65->UseVisualStyleBackColor = false;
			this->button65->Click += gcnew System::EventHandler(this, &Form1::button65_Click);
			// 
			// button66
			// 
			this->button66->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button66->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button66->Location = System::Drawing::Point(89, 121);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(32, 35);
			this->button66->TabIndex = 43;
			this->button66->Tag = L"10";
			this->button66->UseVisualStyleBackColor = false;
			this->button66->Click += gcnew System::EventHandler(this, &Form1::button66_Click);
			// 
			// button67
			// 
			this->button67->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button67->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button67->Location = System::Drawing::Point(60, 121);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(32, 35);
			this->button67->TabIndex = 42;
			this->button67->Tag = L"10";
			this->button67->UseVisualStyleBackColor = false;
			this->button67->Click += gcnew System::EventHandler(this, &Form1::button67_Click);
			// 
			// button68
			// 
			this->button68->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button68->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button68->Location = System::Drawing::Point(30, 121);
			this->button68->Name = L"button68";
			this->button68->Size = System::Drawing::Size(32, 35);
			this->button68->TabIndex = 41;
			this->button68->Tag = L"10";
			this->button68->UseVisualStyleBackColor = false;
			this->button68->Click += gcnew System::EventHandler(this, &Form1::button68_Click);
			// 
			// button69
			// 
			this->button69->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button69->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button69->Location = System::Drawing::Point(1, 121);
			this->button69->Name = L"button69";
			this->button69->Size = System::Drawing::Size(32, 35);
			this->button69->TabIndex = 40;
			this->button69->Tag = L"10";
			this->button69->UseVisualStyleBackColor = false;
			this->button69->Click += gcnew System::EventHandler(this, &Form1::button69_Click);
			// 
			// button50
			// 
			this->button50->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button50->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button50->Location = System::Drawing::Point(264, 92);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(32, 35);
			this->button50->TabIndex = 39;
			this->button50->Tag = L"10";
			this->button50->UseVisualStyleBackColor = false;
			this->button50->Click += gcnew System::EventHandler(this, &Form1::button50_Click);
			// 
			// button51
			// 
			this->button51->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button51->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button51->Location = System::Drawing::Point(235, 92);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(32, 35);
			this->button51->TabIndex = 38;
			this->button51->Tag = L"10";
			this->button51->UseVisualStyleBackColor = false;
			this->button51->Click += gcnew System::EventHandler(this, &Form1::button51_Click);
			// 
			// button52
			// 
			this->button52->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button52->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button52->Location = System::Drawing::Point(205, 92);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(32, 35);
			this->button52->TabIndex = 37;
			this->button52->Tag = L"10";
			this->button52->UseVisualStyleBackColor = false;
			this->button52->Click += gcnew System::EventHandler(this, &Form1::button52_Click);
			// 
			// button53
			// 
			this->button53->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button53->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button53->Location = System::Drawing::Point(176, 92);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(32, 35);
			this->button53->TabIndex = 36;
			this->button53->Tag = L"10";
			this->button53->UseVisualStyleBackColor = false;
			this->button53->Click += gcnew System::EventHandler(this, &Form1::button53_Click);
			// 
			// button54
			// 
			this->button54->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button54->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button54->Location = System::Drawing::Point(146, 92);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(32, 35);
			this->button54->TabIndex = 35;
			this->button54->Tag = L"10";
			this->button54->UseVisualStyleBackColor = false;
			this->button54->Click += gcnew System::EventHandler(this, &Form1::button54_Click);
			// 
			// button55
			// 
			this->button55->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button55->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button55->Location = System::Drawing::Point(117, 92);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(32, 35);
			this->button55->TabIndex = 34;
			this->button55->Tag = L"10";
			this->button55->UseVisualStyleBackColor = false;
			this->button55->Click += gcnew System::EventHandler(this, &Form1::button55_Click);
			// 
			// button56
			// 
			this->button56->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button56->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button56->Location = System::Drawing::Point(89, 92);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(32, 35);
			this->button56->TabIndex = 33;
			this->button56->Tag = L"10";
			this->button56->UseVisualStyleBackColor = false;
			this->button56->Click += gcnew System::EventHandler(this, &Form1::button56_Click);
			// 
			// button57
			// 
			this->button57->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button57->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button57->Location = System::Drawing::Point(60, 92);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(32, 35);
			this->button57->TabIndex = 32;
			this->button57->Tag = L"10";
			this->button57->UseVisualStyleBackColor = false;
			this->button57->Click += gcnew System::EventHandler(this, &Form1::button57_Click);
			// 
			// button58
			// 
			this->button58->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button58->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button58->Location = System::Drawing::Point(30, 92);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(32, 35);
			this->button58->TabIndex = 31;
			this->button58->Tag = L"10";
			this->button58->UseVisualStyleBackColor = false;
			this->button58->Click += gcnew System::EventHandler(this, &Form1::button58_Click);
			// 
			// button59
			// 
			this->button59->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button59->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button59->Location = System::Drawing::Point(1, 92);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(32, 35);
			this->button59->TabIndex = 30;
			this->button59->Tag = L"10";
			this->button59->UseVisualStyleBackColor = false;
			this->button59->Click += gcnew System::EventHandler(this, &Form1::button59_Click);
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button40->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button40->Location = System::Drawing::Point(264, 65);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(32, 35);
			this->button40->TabIndex = 29;
			this->button40->Tag = L"10";
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &Form1::button40_Click);
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button41->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button41->Location = System::Drawing::Point(235, 65);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(32, 35);
			this->button41->TabIndex = 28;
			this->button41->Tag = L"10";
			this->button41->UseVisualStyleBackColor = false;
			this->button41->Click += gcnew System::EventHandler(this, &Form1::button41_Click);
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button42->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button42->Location = System::Drawing::Point(205, 65);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(32, 35);
			this->button42->TabIndex = 27;
			this->button42->Tag = L"10";
			this->button42->UseVisualStyleBackColor = false;
			this->button42->Click += gcnew System::EventHandler(this, &Form1::button42_Click);
			// 
			// button43
			// 
			this->button43->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button43->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button43->Location = System::Drawing::Point(176, 65);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(32, 35);
			this->button43->TabIndex = 26;
			this->button43->Tag = L"10";
			this->button43->UseVisualStyleBackColor = false;
			this->button43->Click += gcnew System::EventHandler(this, &Form1::button43_Click);
			// 
			// button44
			// 
			this->button44->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button44->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button44->Location = System::Drawing::Point(146, 65);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(32, 35);
			this->button44->TabIndex = 25;
			this->button44->Tag = L"10";
			this->button44->UseVisualStyleBackColor = false;
			this->button44->Click += gcnew System::EventHandler(this, &Form1::button44_Click);
			// 
			// button45
			// 
			this->button45->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button45->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button45->Location = System::Drawing::Point(117, 65);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(32, 35);
			this->button45->TabIndex = 24;
			this->button45->Tag = L"10";
			this->button45->UseVisualStyleBackColor = false;
			this->button45->Click += gcnew System::EventHandler(this, &Form1::button45_Click);
			// 
			// button46
			// 
			this->button46->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button46->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button46->Location = System::Drawing::Point(89, 65);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(32, 35);
			this->button46->TabIndex = 23;
			this->button46->Tag = L"10";
			this->button46->UseVisualStyleBackColor = false;
			this->button46->Click += gcnew System::EventHandler(this, &Form1::button46_Click);
			// 
			// button47
			// 
			this->button47->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button47->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button47->Location = System::Drawing::Point(60, 65);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(32, 35);
			this->button47->TabIndex = 22;
			this->button47->Tag = L"10";
			this->button47->UseVisualStyleBackColor = false;
			this->button47->Click += gcnew System::EventHandler(this, &Form1::button47_Click);
			// 
			// button48
			// 
			this->button48->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button48->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button48->Location = System::Drawing::Point(30, 65);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(32, 35);
			this->button48->TabIndex = 21;
			this->button48->Tag = L"10";
			this->button48->UseVisualStyleBackColor = false;
			this->button48->Click += gcnew System::EventHandler(this, &Form1::button48_Click);
			// 
			// button49
			// 
			this->button49->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button49->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button49->Location = System::Drawing::Point(1, 65);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(32, 35);
			this->button49->TabIndex = 20;
			this->button49->Tag = L"10";
			this->button49->UseVisualStyleBackColor = false;
			this->button49->Click += gcnew System::EventHandler(this, &Form1::button49_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button30->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button30->Location = System::Drawing::Point(264, 41);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(32, 35);
			this->button30->TabIndex = 19;
			this->button30->Tag = L"10";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &Form1::button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button31->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button31->Location = System::Drawing::Point(235, 41);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(32, 35);
			this->button31->TabIndex = 18;
			this->button31->Tag = L"10";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &Form1::button31_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button32->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button32->Location = System::Drawing::Point(205, 41);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(32, 35);
			this->button32->TabIndex = 17;
			this->button32->Tag = L"10";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &Form1::button32_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button33->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button33->Location = System::Drawing::Point(176, 41);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(32, 35);
			this->button33->TabIndex = 16;
			this->button33->Tag = L"10";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &Form1::button33_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button34->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button34->Location = System::Drawing::Point(146, 41);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(32, 35);
			this->button34->TabIndex = 15;
			this->button34->Tag = L"10";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &Form1::button34_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button35->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button35->Location = System::Drawing::Point(117, 41);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(32, 35);
			this->button35->TabIndex = 14;
			this->button35->Tag = L"10";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &Form1::button35_Click);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button36->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button36->Location = System::Drawing::Point(89, 41);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(32, 35);
			this->button36->TabIndex = 13;
			this->button36->Tag = L"10";
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &Form1::button36_Click);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button37->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button37->Location = System::Drawing::Point(60, 41);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(32, 35);
			this->button37->TabIndex = 12;
			this->button37->Tag = L"10";
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &Form1::button37_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button38->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button38->Location = System::Drawing::Point(30, 41);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(32, 35);
			this->button38->TabIndex = 11;
			this->button38->Tag = L"10";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &Form1::button38_Click);
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button39->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button39->Location = System::Drawing::Point(1, 41);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(32, 35);
			this->button39->TabIndex = 10;
			this->button39->Tag = L"10";
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &Form1::button39_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button28->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button28->Location = System::Drawing::Point(264, 13);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(32, 35);
			this->button28->TabIndex = 9;
			this->button28->Tag = L"10";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &Form1::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button29->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button29->Location = System::Drawing::Point(235, 13);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(32, 35);
			this->button29->TabIndex = 8;
			this->button29->Tag = L"10";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &Form1::button29_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button24->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button24->Location = System::Drawing::Point(205, 13);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(32, 35);
			this->button24->TabIndex = 7;
			this->button24->Tag = L"10";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &Form1::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button25->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button25->Location = System::Drawing::Point(176, 13);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(32, 35);
			this->button25->TabIndex = 6;
			this->button25->Tag = L"10";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &Form1::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button26->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button26->Location = System::Drawing::Point(146, 13);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(32, 35);
			this->button26->TabIndex = 5;
			this->button26->Tag = L"10";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &Form1::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button27->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button27->Location = System::Drawing::Point(117, 13);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(32, 35);
			this->button27->TabIndex = 4;
			this->button27->Tag = L"10";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &Form1::button27_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button11->Location = System::Drawing::Point(89, 13);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(32, 35);
			this->button11->TabIndex = 3;
			this->button11->Tag = L"10";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button23->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button23->Location = System::Drawing::Point(60, 13);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(32, 35);
			this->button23->TabIndex = 2;
			this->button23->Tag = L"10";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &Form1::button23_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button10->Location = System::Drawing::Point(30, 13);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(32, 35);
			this->button10->TabIndex = 1;
			this->button10->Tag = L"10";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button22->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button22->Location = System::Drawing::Point(1, 13);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(32, 35);
			this->button22->TabIndex = 0;
			this->button22->Tag = L"10";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
			// 
			// PanelChooseLvl
			// 
			this->PanelChooseLvl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->PanelChooseLvl->Controls->Add(this->LvlHardButton);
			this->PanelChooseLvl->Controls->Add(this->LvlNormalButton);
			this->PanelChooseLvl->Controls->Add(this->panel5);
			this->PanelChooseLvl->Location = System::Drawing::Point(84, 89);
			this->PanelChooseLvl->Name = L"PanelChooseLvl";
			this->PanelChooseLvl->Size = System::Drawing::Size(603, 449);
			this->PanelChooseLvl->TabIndex = 12;
			// 
			// LvlHardButton
			// 
			this->LvlHardButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->LvlHardButton->Location = System::Drawing::Point(339, 173);
			this->LvlHardButton->Name = L"LvlHardButton";
			this->LvlHardButton->Size = System::Drawing::Size(211, 91);
			this->LvlHardButton->TabIndex = 18;
			this->LvlHardButton->Text = L"Hard (10x10)";
			this->LvlHardButton->UseVisualStyleBackColor = true;
			this->LvlHardButton->Click += gcnew System::EventHandler(this, &Form1::LvlHardButton_Click);
			// 
			// LvlNormalButton
			// 
			this->LvlNormalButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->LvlNormalButton->Location = System::Drawing::Point(43, 173);
			this->LvlNormalButton->Name = L"LvlNormalButton";
			this->LvlNormalButton->Size = System::Drawing::Size(211, 91);
			this->LvlNormalButton->TabIndex = 17;
			this->LvlNormalButton->Text = L"Normal (3x3)";
			this->LvlNormalButton->UseVisualStyleBackColor = true;
			this->LvlNormalButton->Click += gcnew System::EventHandler(this, &Form1::LvlNormalButton_Click);
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->label1);
			this->panel5->Location = System::Drawing::Point(43, 26);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(507, 60);
			this->panel5->TabIndex = 16;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(135, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(229, 38);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Choose Level";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(800, 565);
			this->Controls->Add(this->Panel3x3);
			this->Controls->Add(this->PanelChooseLvl);
			this->Controls->Add(this->Panel10x10);
			this->Controls->Add(this->TitleGame);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->TitleGame->ResumeLayout(false);
			this->TitleGame->PerformLayout();
			this->Panel3x3->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->Panel10x10->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->PanelChooseLvl->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
//----------------------------------------------------------------------------------------------

		//KLIKALNE PRZYCISKI WYBORU PLANSZY

		int winNumber = 0;

	private: System::Void LvlNormalButton_Click(System::Object^  sender, System::EventArgs^  e) {

		Panel3x3->Visible = true;
		PanelChooseLvl->Visible = false;
		winNumber = 3;
	}
	private: System::Void ChangeButton_Click(System::Object^  sender, System::EventArgs^  e) {

		Application::Restart();
	}
	private: System::Void LvlHardButton_Click(System::Object^  sender, System::EventArgs^  e) {

		Panel10x10->Visible = true;
		PanelChooseLvl->Visible = false;
		winNumber = 4;
	}
	private: System::Void ChangeButton2_Click(System::Object^  sender, System::EventArgs^  e) {

		Application::Restart();
	}

			 // FUNKCJE ZWIAZANE Z LOGIKA GRY
			 

			 //Tworzenie tablicy 100-elementowej <- odwzorowanie graficznej planszy 
			 int* CreateBoard()  
			 {
				 int * board = new int[100];
				 for (int i = 0; i < 100; ++i)
				 {
					 board[i] = 0;
				 }
				 return board;
			 }

			 int* board = CreateBoard(); 

			 String^ player = "X"; //wskazuje jaki znak ma zostac wstawiony (0 = X, 1 = O)



			 //Sprawdzanie czy pole jest zajete (jesli tak, zwraca true)
			 bool Occupied(Button^ field) 
			 {
				 if (field->Text == "")
				 {
					 return false;
				 }
				 else
				 {
					 return true;
				 }
			 }
			 
			 
			

			 // Sprawdzanie wygranej dla planszy 10x10
			 bool CheckWin10x10(Button^ field, int markNumber) //sprawdzanie czy w linii znajduja sie 4 znaki (jesli tak, zwraca true)
			 {
				 int index = field->TabIndex;
				 int line = index / 10;
				 int marks = 1; // liczy ilosc pol z szukanym znakiem w badanym obszarze
				 for (int i = 1; i < 4; ++i) //sprawdza pola po prawej stronie od znaku
				 {
					 if ((index + 1) > (10 * line) - 1 && (index + 1) < (10 * line) + 9) // ustawia zakres sprawdzanych elementow (musza odpowiadac jednej linii planszy)
					 {
						 if (board[index + i] == markNumber)
						 {
							 marks += 1;
							 if (marks == 4)
							 {
								 return true;
							 }
						 }
						 else
						 {
							 i = 4;
						 }
						 
					 }
					 else
					 {
						 i = 4; //jesli pole obok nie jest zajete prez dany znak to wartosc i zmieniana jest na 4 co przerywa for
					 }
				 }
				 for (int j = 1; j < 4; ++j) // sprawdza pola po lewej stronie od znaku 
				 {
					 if ((index - j) > (10 * line) - 1 && (index - j) < (10 * line) + 9)
					 {
						 if (board[index - j] == markNumber)
						 {
							 marks += 1;
							 if (marks == 4)
							 {
								 return true;
							 }
						 }
						 else
						 {
							 j = 4;
						 }
					 }
					 else
					 {
						 j = 4;
					 }
				 }

				 marks = 1; //makrs ponownie = 1 bo wszyestkie mozliwosci w linii zostaly sprawdzone 

				 for (int k = 1; k < 4; ++k) // sprawdza pola poniej znaku 
				 {
					 if (board[index + (k*10)] == markNumber)
					 {
						 marks += 1;
						 if (marks == 4)
						 {
							 return true;
						 }
					 }
					 else
					 {
						 k = 4;
					 }
				 }
				 for (int m = 1; m < 4; ++m) // sprawdza pola powyzej znaku 
				 {
					 if (board[index - (m * 10)] == markNumber)
					 {
						 marks += 1;
						 if (marks == 4)
						 {
							 return true;
						 }
					 }
					 else
					 {
						 m = 4;
					 }
				 }
				 
				 return false;
			 }

			 //Sprawdzanie wyranej dla planszy 3x3
			 bool CheckWin3x3(String^ mark)
			 {
				 if (button1->Text == mark && button2->Text == mark && button3->Text == mark)
				 {
					 return true;
				 }
				 else if (button4->Text == mark && button5->Text == mark && button6->Text == mark)
				 {
					 return true;
				 }
				 else if (button7->Text == mark && button8->Text == mark && button9->Text == mark)
				 {
					 return true;
				 }

				 else if (button1->Text == mark && button4->Text == mark && button7->Text == mark)
				 {
					 return true;
				 }
				 else  if (button2->Text == mark && button5->Text == mark && button8->Text == mark)
				 {
					 return true;
				 }
				 else if (button3->Text == mark && button6->Text == mark && button9->Text == mark)
				 {
					 return true;
				 }

				 else if (button1->Text == mark && button5->Text == mark && button9->Text == mark)
				 {
					 return true;
				 }
				 else if (button3->Text == mark && button5->Text == mark && button7->Text == mark)
				 {
					 return true;
				 }
				 else
				 {
					 return false;
				 }
			 }

			 // Dodanie znaku + obsluga wygranej 
			 void AddMark(Button^ field)
			 {
				 String^ checkMark = "";
				 int markNumber = 0;
				 if (Occupied(field) == false)
				 {
					 field->Text = player;
					 int index = field->TabIndex;
					 
					 if (player == "X")
					 {
						 player = "O";
						 checkMark = "X";
						 markNumber = 1;
						 board[index] = markNumber;
					 }
					 else
					 {
						 player = "X";
						 checkMark = "O";
						 markNumber = 2;
						 board[index] = markNumber;
						 
					 }
					 
					 if (winNumber == 4)
					 {
						 if (CheckWin10x10(field, markNumber) == true)
						 {
							 if (MessageBox::Show("Wygral gracz " + checkMark + "! Chcesz rozpoczac nowa gre?", "", MessageBoxButtons::YesNo,
								 MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No)
							 {
								 Application::Exit();
							 }
							 else
							 {
								 Application::Restart();
							 }
						 }
					 }
					 if (winNumber == 3)
					 {
						 if (CheckWin3x3(checkMark) == true)
						 {
							 if (MessageBox::Show("Wygral gracz " + checkMark + "! Chcesz rozpoczac nowa gre?", "", MessageBoxButtons::YesNo,
								 MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No)
							 {
								 Application::Exit();
							 }
							 else
							 {
								 Application::Restart();
							 }
						 }
					 } 
				 }
			 }

// PROGRAMOWANIE PRZYCISKOW

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		AddMark(button1);
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		AddMark(button2);
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		AddMark(button3);
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		AddMark(button4);
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		AddMark(button5);
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		AddMark(button6);
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		AddMark(button7);
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		AddMark(button8);
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		AddMark(button9);
	}

			
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button22);
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button10);
	}
	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button23);
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button11);
	}
	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button27);
	}
	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button26);
	}
	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button25);
	}
	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button24);
	}
	private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button29);
	}
	private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button28);
	}
	private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button39);
	}
	private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button38);
	}
	private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button37);
	}
	private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button36);
	}
	private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button35);
	}
	private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button34);
	}
	private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button33);
	}
	private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button32);
	}
	private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button31);
	}
	private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button30);
	}
	private: System::Void button49_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button49);
	}
	private: System::Void button48_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button48);
	}
	private: System::Void button47_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button47);
	}
	private: System::Void button46_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button46);
	}
	private: System::Void button45_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button45);
	}
	private: System::Void button44_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button44);
	}
	private: System::Void button43_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button43);
	}
	private: System::Void button42_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button42);
	}
	private: System::Void button41_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button41);
	}
	private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button40);
	}
	private: System::Void button59_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button59);
	}
	private: System::Void button58_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button58);
	}
	private: System::Void button57_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button57);
	}
	private: System::Void button56_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button56);
	}
	private: System::Void button55_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button55);
	}
	private: System::Void button54_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button54);
	}
	private: System::Void button53_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button53);
	}
	private: System::Void button52_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button52);
	}
	private: System::Void button51_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button51);
	}
	private: System::Void button50_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button50);
	}
	private: System::Void button69_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button69);
	}
	private: System::Void button68_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button68);
	}
	private: System::Void button67_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button67);
	}
	private: System::Void button66_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button66);
	}
	private: System::Void button65_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button65);
	}
	private: System::Void button64_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button64);
	}
	private: System::Void button63_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button63);
	}
	private: System::Void button62_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button62);
	}
	private: System::Void button61_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button61);
	}
	private: System::Void button60_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button60);
	}
	private: System::Void button79_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button79);
	}
	private: System::Void button78_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button78);
	}
	private: System::Void button77_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button77);
	}
	private: System::Void button76_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button76);
	}
	private: System::Void button75_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button75);
	}
	private: System::Void button74_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button74);
	}
	private: System::Void button73_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button73);
	}
	private: System::Void button72_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button72);
	}
	private: System::Void button71_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button71);
	}
	private: System::Void button70_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button70);
	}
	private: System::Void button89_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button89);
	}
	private: System::Void button88_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button88);
	}
	private: System::Void button87_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button87);
	}
	private: System::Void button86_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button86);
	}
	private: System::Void button85_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button85);
	}
	private: System::Void button84_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button84);
	}
	private: System::Void button83_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button83);
	}
	private: System::Void button82_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button82);
	}
	private: System::Void button81_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button81);
	}
	private: System::Void button80_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button80);
	}
	private: System::Void button99_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button99);
	}
	private: System::Void button98_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button98);
	}
	private: System::Void button97_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button97);
	}
	private: System::Void button96_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button96);
	}
	private: System::Void button95_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button95);
	}
	private: System::Void button94_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button94);
	}
	private: System::Void button93_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button93);
	}
	private: System::Void button92_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button92);
	}
	private: System::Void button91_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button91);
	}
	private: System::Void button90_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button90);
	}
	private: System::Void button109_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button109);
	}
	private: System::Void button108_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button108);
	}
	private: System::Void button107_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button107);
	}
	private: System::Void button106_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button106);
	}
	private: System::Void button105_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button105);
	}
	private: System::Void button104_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button104);
	}
	private: System::Void button103_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button103);
	}
	private: System::Void button102_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button102);
	}
	private: System::Void button101_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button101);
	}
	private: System::Void button100_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button100);
	}
	private: System::Void button119_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button119);
	}
	private: System::Void button118_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button118);
	}
	private: System::Void button117_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button117);
	}
	private: System::Void button116_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button116);
	}
	private: System::Void button115_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button115);
	}
	private: System::Void button114_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button114);
	}
	private: System::Void button113_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button113);
	}
	private: System::Void button112_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button112);
	}
	private: System::Void button111_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button111);
	}
	private: System::Void button110_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMark(button110);
	}
	};
}