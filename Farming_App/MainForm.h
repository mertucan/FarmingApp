#pragma once

namespace FarmingApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label13;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(276, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1181, 126);
			this->panel1->TabIndex = 4;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1136, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(35, 35);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MainForm::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Dubai", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(525, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 73);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Admin";
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(277, 126);
			this->panel2->TabIndex = 5;
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->panel3->Controls->Add(this->button6);
			this->panel3->Controls->Add(this->button5);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Location = System::Drawing::Point(0, 126);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(277, 530);
			this->panel3->TabIndex = 6;
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Dubai", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(0, 356);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(277, 64);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Plans";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->textBox11);
			this->panel6->Controls->Add(this->label12);
			this->panel6->Controls->Add(this->textBox12);
			this->panel6->Controls->Add(this->label13);
			this->panel6->Location = System::Drawing::Point(1130, 151);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(303, 322);
			this->panel6->TabIndex = 19;
			// 
			// textBox11
			// 
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox11->Location = System::Drawing::Point(27, 119);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(246, 181);
			this->textBox11->TabIndex = 13;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label12->ForeColor = System::Drawing::Color::Gray;
			this->label12->Location = System::Drawing::Point(22, 87);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(144, 25);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Effective Plan";
			// 
			// textBox12
			// 
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox12->Location = System::Drawing::Point(27, 39);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(246, 41);
			this->textBox12->TabIndex = 11;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label13->ForeColor = System::Drawing::Color::Gray;
			this->label13->Location = System::Drawing::Point(22, 7);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(60, 25);
			this->label13->TabIndex = 12;
			this->label13->Text = L"Type";
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Dubai", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(0, 286);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(277, 64);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Medicine";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Dubai", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(0, 216);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(277, 64);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Foods";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Dubai", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(0, 146);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(277, 64);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Crops";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Dubai", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(0, 76);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(277, 64);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Cars";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Dubai", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(0, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(277, 64);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Animals";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click_1);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Dubai", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Dubai", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::ForestGreen;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->Location = System::Drawing::Point(304, 154);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(789, 322);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView1_CellClick);
			this->dataGridView1->SelectionChanged += gcnew System::EventHandler(this, &MainForm::dataGridView1_SelectionChanged);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Dubai", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(1181, 494);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(206, 64);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Add";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MainForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Firebrick;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Dubai", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(304, 494);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(206, 64);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Delete";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MainForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Dubai", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(1181, 575);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(206, 64);
			this->button9->TabIndex = 9;
			this->button9->Text = L"Update";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MainForm::button9_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->ForeColor = System::Drawing::Color::Gray;
			this->label4->Location = System::Drawing::Point(22, 7);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 25);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Type";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox1->Location = System::Drawing::Point(27, 36);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(246, 41);
			this->textBox1->TabIndex = 11;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->textBox4);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->textBox3);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->textBox2);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->textBox1);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Location = System::Drawing::Point(1130, 154);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(303, 322);
			this->panel4->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox4->Location = System::Drawing::Point(27, 258);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(246, 41);
			this->textBox4->TabIndex = 17;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox4_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label5->ForeColor = System::Drawing::Color::Gray;
			this->label5->Location = System::Drawing::Point(22, 229);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 25);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Stock";
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox3->Location = System::Drawing::Point(27, 184);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(246, 41);
			this->textBox3->TabIndex = 15;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox3_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->ForeColor = System::Drawing::Color::Gray;
			this->label3->Location = System::Drawing::Point(22, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 25);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Price";
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox2->Location = System::Drawing::Point(27, 110);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(246, 41);
			this->textBox2->TabIndex = 13;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox2_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->ForeColor = System::Drawing::Color::Gray;
			this->label2->Location = System::Drawing::Point(22, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 25);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Weight";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->textBox5);
			this->panel5->Controls->Add(this->label6);
			this->panel5->Controls->Add(this->textBox6);
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->textBox7);
			this->panel5->Controls->Add(this->label8);
			this->panel5->Controls->Add(this->textBox8);
			this->panel5->Controls->Add(this->label9);
			this->panel5->Location = System::Drawing::Point(1130, 151);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(303, 322);
			this->panel5->TabIndex = 19;
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox5->Location = System::Drawing::Point(27, 255);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(246, 41);
			this->textBox5->TabIndex = 17;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox5_KeyPress);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label6->ForeColor = System::Drawing::Color::Gray;
			this->label6->Location = System::Drawing::Point(22, 226);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 25);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Stock";
			// 
			// textBox6
			// 
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox6->Location = System::Drawing::Point(27, 181);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(246, 41);
			this->textBox6->TabIndex = 15;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox6_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label7->ForeColor = System::Drawing::Color::Gray;
			this->label7->Location = System::Drawing::Point(22, 152);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 25);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Price";
			// 
			// textBox7
			// 
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox7->Location = System::Drawing::Point(27, 107);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(246, 41);
			this->textBox7->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label8->ForeColor = System::Drawing::Color::Gray;
			this->label8->Location = System::Drawing::Point(22, 78);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(125, 25);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Explanation";
			// 
			// textBox8
			// 
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox8->Location = System::Drawing::Point(27, 33);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(246, 41);
			this->textBox8->TabIndex = 11;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label9->ForeColor = System::Drawing::Color::Gray;
			this->label9->Location = System::Drawing::Point(22, 4);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(60, 25);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Type";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(192, 192);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1455, 651);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	String^ connectionString = "Data Source=MERT;Initial Catalog=farming_system;Integrated Security=True";
	
private: void ClearTextBoxes() {
		// TextBox'larý temizleyelim
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
		textBox5->Clear();
		textBox6->Clear();
		textBox7->Clear();
		textBox8->Clear();
		textBox11->Clear();
		textBox12->Clear();
	}

	private: void LoadDataIntoGridView(String^ query, String^ connectionString) {
		try {
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(query, connection);
			DataTable^ dataTable = gcnew DataTable();

			dataAdapter->Fill(dataTable);
			dataGridView1->DataSource = dataTable;

			dataGridView1->AutoResizeColumns(DataGridViewAutoSizeColumnsMode::ColumnHeader);

			if (dataGridView1->Columns->Contains("ID")) {
				dataGridView1->Columns["ID"]->Visible = false;
			}

			ClearTextBoxes();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}

	private: void DeleteSelectedRowBasedOnLabel() {
		String^ tableName = "";
		String^ idColumnName = "";
		String^ gridColumnName = "";
		String^ query = "";

		// Label'daki metne göre tablo adýný ve sütun bilgilerini ayarla
		if (label1->Text == "Animals") {
			tableName = "animals";
			idColumnName = "animals_type"; // Örnek: Tür bazlý silme için
			gridColumnName = "Type";      // DataGridView'deki sütun adý
			query = "SELECT animals_type as Type, animals_weight as Weight, animals_price as Price, animals_stock as Stock FROM animals";
		}
		else if (label1->Text == "Cars") {
			tableName = "cars";
			idColumnName = "cars_type";   // Silme iþlemi için kullanýlacak sütun
			gridColumnName = "Type";      // DataGridView'deki sütun adý
			query = "SELECT cars_type as Type, cars_explanation as Explanation, cars_price as Price, cars_stock as Stock FROM cars";
		}
		else if (label1->Text == "Foods") {
			tableName = "foods";
			idColumnName = "foods_type";  // Silme iþlemi için kullanýlacak sütun
			gridColumnName = "Type";      // DataGridView'deki sütun adý
			query = "SELECT foods_type as Type, foods_explanation as Explanation, foods_price as Price, foods_stock as Stock FROM foods";
		}
		else if (label1->Text == "Medicine") {
			tableName = "medicine";
			idColumnName = "med_type";  // Silme iþlemi için kullanýlacak sütun
			gridColumnName = "Type";      // DataGridView'deki sütun adý
			query = "SELECT med_type as Type, med_explanation as Explanation, med_price as Price, med_stock as Stock FROM medicine";
		}
		else {
			MessageBox::Show("Invalid table selection. Please select a valid section.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Satýrý sil
		DeleteSelectedRow(dataGridView1, tableName, idColumnName, gridColumnName);

		// Güncellenmiþ tabloyu yükle
		LoadDataIntoGridView(query, connectionString);
	}

	private: void DeleteSelectedRowBasedOnLabelWithReferences() {
		String^ tableName = "";
		String^ dbColumnName = "";
		String^ gridColumnName = "";
		String^ referenceTableName = "";
		String^ referenceColumnName = "";
		String^ query = "";

		if (label1->Text == "Crops") {
			tableName = "crops";
			dbColumnName = "crops_name"; // Silme için kullanýlacak sütun
			gridColumnName = "Type";     // DataGridView'deki sütun adý
			referenceTableName = "plans";
			referenceColumnName = "crops_id";
			query = "SELECT crops_name as Type, crops_explanation as Explanation, crops_price as Price, crops_stock as Stock FROM crops";

			// Silme iþlemi için ilgili fonksiyon
			DeleteSelectedRowWithReferences(dataGridView1, tableName, dbColumnName, gridColumnName, referenceTableName, referenceColumnName);
		}
		else if (label1->Text == "Plans") {
			tableName = "plans";
			dbColumnName = "plans_id"; // Silme için kullanýlacak sütun
			gridColumnName = "ID";     // DataGridView'deki sütun adý
			referenceTableName = "crops"; // Plans silindiðinde baðlý crops kaydýný da kontrol et
			referenceColumnName = "crops_id";
			query = "SELECT plans_id as ID, crops.crops_name as Type, effective_plan as 'Effective Plan' FROM plans INNER JOIN crops ON crops.crops_id = plans.crops_id";

			// Ýliþkili silme fonksiyonu
			DeleteSelectedRowWithReferences(dataGridView1, tableName, dbColumnName, gridColumnName, referenceTableName, referenceColumnName);
		}
		else {
			MessageBox::Show("Invalid table selection. Please select a valid section.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Güncellenmiþ tabloyu yükle
		LoadDataIntoGridView(query, connectionString);
	}


	private: void DeleteSelectedRow(DataGridView^ gridView, String^ tableName, String^ dbColumnName, String^ gridColumnName) {
		if (gridView->Rows->Count == 0) {
			MessageBox::Show("There is no data to delete.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (gridView->SelectedRows->Count > 0) {
			if (gridView->SelectedRows[0]->Cells[gridColumnName] != nullptr &&
				gridView->SelectedRows[0]->Cells[gridColumnName]->Value != nullptr) {

				String^ value = gridView->SelectedRows[0]->Cells[gridColumnName]->Value->ToString();
				String^ connectionString = "Data Source=MERT;Initial Catalog=farming_system;Integrated Security=True";
				String^ deleteQuery = "DELETE FROM " + tableName + " WHERE " + dbColumnName + " = @value";

				try {
					SqlConnection^ connection = gcnew SqlConnection(connectionString);
					SqlCommand^ command = gcnew SqlCommand(deleteQuery, connection);

					command->Parameters->AddWithValue("@value", value);

					connection->Open();
					int result = command->ExecuteNonQuery();
					connection->Close();

					if (result > 0) {
						MessageBox::Show("Deleting process is successful", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
					else {
						MessageBox::Show("An error occurred while deleting the data.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else {
				MessageBox::Show("The selected row does not contain a valid value in the specified column.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Please select the row you want to delete.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: void ChangeVisibility()
	{
		panel4->Visible = false;
		panel5->Visible = false;
		panel6->Visible = false;
		button7->Visible = true;
		button8->Visible = true;
		button9->Visible = true;
		dataGridView1->Visible = true;
	}

	private: void DeleteSelectedRowWithReferences(DataGridView^ gridView, String^ tableName, String^ dbColumnName, String^ gridColumnName, String^ referenceTableName, String^ referenceColumnName) {
		if (gridView->Rows->Count == 0) {
			MessageBox::Show("There is no data to delete.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (gridView->SelectedRows->Count > 0) {
			if (gridView->SelectedRows[0]->Cells[gridColumnName] != nullptr &&
				gridView->SelectedRows[0]->Cells[gridColumnName]->Value != nullptr) {

				String^ value = gridView->SelectedRows[0]->Cells[gridColumnName]->Value->ToString();
				String^ connectionString = "Data Source=MERT;Initial Catalog=farming_system;Integrated Security=True";

				try {
					SqlConnection^ connection = gcnew SqlConnection(connectionString);

					// "crops" tablosunda ilgili veriyi silmeden önce "plans" tablosundaki veriyi kontrol et
					if (referenceTableName == "crops") {
						// "plans" tablosundaki kaydý bul
						String^ findReferenceQuery = "SELECT crops_id FROM " + tableName + " WHERE " + dbColumnName + " = @value";
						SqlCommand^ findReferenceCommand = gcnew SqlCommand(findReferenceQuery, connection);
						findReferenceCommand->Parameters->AddWithValue("@value", value);

						connection->Open();
						Object^ referenceIdObj = findReferenceCommand->ExecuteScalar();
						connection->Close();

						if (referenceIdObj != nullptr) {
							int referenceId = Convert::ToInt32(referenceIdObj);

							// "crops" tablosundaki ilgili kaydý sil
							String^ deleteReferenceQuery = "DELETE FROM " + referenceTableName + " WHERE " + referenceColumnName + " = @id";
							SqlCommand^ deleteReferenceCommand = gcnew SqlCommand(deleteReferenceQuery, connection);
							deleteReferenceCommand->Parameters->AddWithValue("@id", referenceId);

							connection->Open();
							int rowsAffected = deleteReferenceCommand->ExecuteNonQuery();
							connection->Close();

							if (rowsAffected > 0) {
								MessageBox::Show("Related crop record deleted successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
							}
							else {
								MessageBox::Show("No related crop record found to delete.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
							}
						}
						else {
							MessageBox::Show("No related crop found in the plans table.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
						}
					}

					// Þimdi "plans" tablosundaki veriyi sil
					String^ deleteQuery = "DELETE FROM " + tableName + " WHERE " + dbColumnName + " = @value";
					SqlCommand^ command = gcnew SqlCommand(deleteQuery, connection);
					command->Parameters->AddWithValue("@value", value);

					connection->Open();
					int result = command->ExecuteNonQuery();
					connection->Close();

					if (result > 0) {
						MessageBox::Show("Plan record deleted successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
					else {
						//MessageBox::Show("An error occurred while deleting the data.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else {
				MessageBox::Show("The selected row does not contain a valid value in the specified column.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Please select the row you want to delete.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}


	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		ChangeVisibility();
		panel4->Visible = true;
		label1->Text = button1->Text;
		LoadDataIntoGridView("SELECT animals_type as Type, animals_weight as Weight, animals_price as Price, animals_stock as Stock FROM animals", connectionString);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		ChangeVisibility();
		panel5->Visible = true;
		label1->Text = button2->Text;
		LoadDataIntoGridView("SELECT cars_type as Type, cars_explanation as Explanation, cars_price as Price, cars_stock as Stock FROM cars", connectionString);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		ChangeVisibility();
		panel5->Visible = true;
		label1->Text = button3->Text;
		LoadDataIntoGridView("SELECT crops_name as Type, crops_explanation as Explanation, crops_price as Price, crops_stock as Stock FROM crops", connectionString);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		ChangeVisibility();
		panel5->Visible = true;
		label1->Text = button4->Text;
		LoadDataIntoGridView("SELECT foods_type as Type, foods_explanation as Explanation , foods_price as Price , foods_stock as Stock FROM foods", connectionString);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		ChangeVisibility();
		panel5->Visible = true;
		label1->Text = button5->Text;
		LoadDataIntoGridView("SELECT med_type as Type, med_explanation as Explanation, med_price as Price, med_stock as Stock FROM medicine", connectionString);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		ChangeVisibility();
		panel6->Visible = true;
		label1->Text = button6->Text;
		LoadDataIntoGridView("SELECT plans_id as ID, crops.crops_name as Type, effective_plan as 'Effective Plan' FROM plans INNER JOIN crops ON crops.crops_id = plans.crops_id", connectionString);
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label1->Text == "Plans" || label1 -> Text == "Crops")
		{
			DeleteSelectedRowBasedOnLabelWithReferences();
		}
		else
		{
			DeleteSelectedRowBasedOnLabel();
		}
	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ChangeVisibility();
		dataGridView1->Visible = false;
		button7->Visible = false;
		button8->Visible = false;
		button9->Visible = false;

		dataGridView1->ReadOnly = true;
		dataGridView1->AllowUserToResizeColumns = false;
		dataGridView1->AllowUserToResizeRows = false;
		dataGridView1->MultiSelect = false;
		dataGridView1->AllowUserToAddRows = false;
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label1->Text == "Animals") {
			String^ animalType = textBox1->Text->Trim();
			String^ animalWeight = textBox2->Text->Trim();
			String^ animalPrice = textBox3->Text->Trim();
			String^ animalStock = textBox4->Text->Trim();

			if (String::IsNullOrWhiteSpace(animalType) || String::IsNullOrWhiteSpace(animalWeight) ||
				String::IsNullOrWhiteSpace(animalPrice) || String::IsNullOrWhiteSpace(animalStock)) {
				MessageBox::Show("Please fill all fields.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			try {
				SqlConnection^ connection = gcnew SqlConnection(connectionString);
				connection->Open();

				// Hayvan tipi kontrolü
				String^ checkQuery = "SELECT COUNT(*) FROM animals WHERE animals_type = @type";
				SqlCommand^ checkCommand = gcnew SqlCommand(checkQuery, connection);
				checkCommand->Parameters->AddWithValue("@type", animalType);
				int count = Convert::ToInt32(checkCommand->ExecuteScalar());

				if (count > 0) {
					// Mevcut hayvan tipi varsa
					if (MessageBox::Show("The entered animal type already exists. Do you want to add stock?", "Confirmation",
						MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

						// Stok ekleme
						String^ updateQuery = "UPDATE animals SET animals_stock = animals_stock + @stock WHERE animals_type = @type";
						SqlCommand^ updateCommand = gcnew SqlCommand(updateQuery, connection);
						updateCommand->Parameters->AddWithValue("@stock", Convert::ToInt32(animalStock));
						updateCommand->Parameters->AddWithValue("@type", animalType);
						updateCommand->ExecuteNonQuery();

						MessageBox::Show("Stock updated successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
				}
				else {
					// Yeni hayvan tipi ekleme
					String^ insertQuery = "INSERT INTO animals (animals_type, animals_weight, animals_price, animals_stock) VALUES (@type, @weight, @price, @stock)";
					SqlCommand^ insertCommand = gcnew SqlCommand(insertQuery, connection);
					insertCommand->Parameters->AddWithValue("@type", animalType);
					insertCommand->Parameters->AddWithValue("@weight", Convert::ToDouble(animalWeight));
					insertCommand->Parameters->AddWithValue("@price", Convert::ToDouble(animalPrice));
					insertCommand->Parameters->AddWithValue("@stock", Convert::ToInt32(animalStock));
					insertCommand->ExecuteNonQuery();

					MessageBox::Show("Animal added successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}

				connection->Close();
				// Verileri güncelle
				LoadDataIntoGridView("SELECT animals_type as Type, animals_weight as Weight, animals_price as Price, animals_stock as Stock FROM animals", connectionString);

				// TextBox'larý sýfýrla
				textBox1->Clear();
				textBox2->Clear();
				textBox3->Clear();
				textBox4->Clear();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		if (label1->Text == "Plans") {
			String^ cropType = textBox12->Text->Trim();
			String^ effectivePlan = textBox11->Text->Trim();

			if (String::IsNullOrWhiteSpace(cropType) || String::IsNullOrWhiteSpace(effectivePlan)) {
				MessageBox::Show("Please fill all fields.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			try {
				SqlConnection^ connection = gcnew SqlConnection(connectionString);
				connection->Open();

				// Mevcut plan kontrolü
				String^ checkQuery = "SELECT COUNT(*) FROM plans INNER JOIN crops ON plans.crops_id = crops.crops_id WHERE crops_name = @name";
				SqlCommand^ checkCommand = gcnew SqlCommand(checkQuery, connection);
				checkCommand->Parameters->AddWithValue("@name", cropType);
				int count = Convert::ToInt32(checkCommand->ExecuteScalar());

				if (count > 0) {
					// Ayný plan zaten varsa kullanýcýya sor
					if (MessageBox::Show("The same plan already exists. Do you want to update it?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
						// Güncelleme sorgusu
						String^ updateQuery = "UPDATE plans SET effective_plan = @plan WHERE crops_id = (SELECT crops_id FROM crops WHERE crops_name = @name)";
						SqlCommand^ updateCommand = gcnew SqlCommand(updateQuery, connection);
						updateCommand->Parameters->AddWithValue("@plan", effectivePlan);
						updateCommand->Parameters->AddWithValue("@name", cropType);
						updateCommand->ExecuteNonQuery();

						MessageBox::Show("Plan updated successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
				}
				else {
					// Yeni plan ekleme
					String^ cropIdQuery = "SELECT crops_id FROM crops WHERE crops_name = @name";
					SqlCommand^ cropIdCommand = gcnew SqlCommand(cropIdQuery, connection);
					cropIdCommand->Parameters->AddWithValue("@name", cropType);
					Object^ cropId = cropIdCommand->ExecuteScalar();

					if (cropId == nullptr) {
						MessageBox::Show("This crops type doesn't exist.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					else {
						String^ insertQuery = "INSERT INTO plans (crops_id, effective_plan) VALUES (@cropId, @plan)";
						SqlCommand^ insertCommand = gcnew SqlCommand(insertQuery, connection);
						insertCommand->Parameters->AddWithValue("@cropId", Convert::ToInt32(cropId));
						insertCommand->Parameters->AddWithValue("@plan", effectivePlan);
						insertCommand->ExecuteNonQuery();

						MessageBox::Show("Plan added successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
				}

				connection->Close();

				// Tabloyu güncelle
				LoadDataIntoGridView("SELECT plans_id as ID, crops.crops_name as Type, effective_plan as 'Effective Plan' FROM plans INNER JOIN crops ON crops.crops_id = plans.crops_id", connectionString);

				// TextBox'larý sýfýrla
				textBox12->Clear();
				textBox11->Clear();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		if (label1->Text == "Cars" || label1->Text == "Crops" || label1->Text == "Foods" || label1->Text == "Medicine")
		{
			String^ type = textBox8->Text->Trim();
			String^ explanation = textBox7->Text->Trim();
			String^ price = textBox6->Text->Trim();
			String^ stock = textBox5->Text->Trim();

			if (String::IsNullOrWhiteSpace(type) || String::IsNullOrWhiteSpace(price) || String::IsNullOrWhiteSpace(stock)) {
				MessageBox::Show("Please fill all required fields.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			String^ tableName = "";
			String^ typeColumn = "";
			String^ explanationColumn = "";
			String^ priceColumn = "";
			String^ stockColumn = "";

			if (label1->Text == "Cars") {
				tableName = "cars";
				typeColumn = "cars_type";
				explanationColumn = "cars_explanation";
				priceColumn = "cars_price";
				stockColumn = "cars_stock";
			}
			else if (label1->Text == "Crops") {
				tableName = "crops";
				typeColumn = "crops_name";
				explanationColumn = "crops_explanation";
				priceColumn = "crops_price";
				stockColumn = "crops_stock";
			}
			else if (label1->Text == "Foods") {
				tableName = "foods";
				typeColumn = "foods_type";
				explanationColumn = "foods_explanation";
				priceColumn = "foods_price";
				stockColumn = "foods_stock";
			}
			else if (label1->Text == "Medicine") {
				tableName = "medicine";
				typeColumn = "med_type";
				explanationColumn = "med_explanation";
				priceColumn = "med_price";
				stockColumn = "med_stock";
			}
			try {
				SqlConnection^ connection = gcnew SqlConnection(connectionString);
				connection->Open();

				// Tip kontrolü
				String^ checkQuery = "SELECT COUNT(*) FROM " + tableName + " WHERE " + typeColumn + " = @type";
				SqlCommand^ checkCommand = gcnew SqlCommand(checkQuery, connection);
				checkCommand->Parameters->AddWithValue("@type", type);
				int count = Convert::ToInt32(checkCommand->ExecuteScalar());

				if (count > 0) {
					// Mevcut tip varsa
					if (MessageBox::Show("The entered " + type + " type already exists. Do you want to add stock?", "Confirmation",
						MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

						// Stok ekleme
						String^ updateQuery = "UPDATE " + tableName + " SET " + stockColumn + " = " + stockColumn + " + @stock WHERE " + typeColumn + " = @type";
						SqlCommand^ updateCommand = gcnew SqlCommand(updateQuery, connection);
						updateCommand->Parameters->AddWithValue("@stock", Convert::ToInt32(stock));
						updateCommand->Parameters->AddWithValue("@type", type);
						updateCommand->ExecuteNonQuery();

						MessageBox::Show("Stock updated successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
						textBox5->Clear();
						textBox6->Clear();
						textBox7->Clear();
						textBox8->Clear();
					}
				}
				else {
					// Yeni veri ekleme
					String^ insertQuery = "INSERT INTO " + tableName + " (" + typeColumn + ", " + explanationColumn + ", " + priceColumn + ", " + stockColumn +
						") VALUES (@type, @explanation, @price, @stock)";
					SqlCommand^ insertCommand = gcnew SqlCommand(insertQuery, connection);
					insertCommand->Parameters->AddWithValue("@type", type);
					insertCommand->Parameters->AddWithValue("@explanation", explanation);
					insertCommand->Parameters->AddWithValue("@price", Convert::ToDouble(price));
					insertCommand->Parameters->AddWithValue("@stock", Convert::ToInt32(stock));
					insertCommand->ExecuteNonQuery();

					MessageBox::Show("Record added successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

					textBox5->Clear();
					textBox6->Clear();
					textBox7->Clear();
					textBox8->Clear();
				}

				connection->Close();

				// Tabloyu güncelle
				String^ query = "SELECT " + typeColumn + " as Type, " + explanationColumn + " as Explanation, " +
					priceColumn + " as Price, " + stockColumn + " as Stock FROM " + tableName;
				LoadDataIntoGridView(query, connectionString);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}

	private: System::Void dataGridView1_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->SelectedRows->Count > 0)
		{
			// Seçilen satýrdaki veriyi almak
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];

			// Hangi tablonun seçildiðine göre uygun TextBox'lara veri atama
			if (label1->Text == "Animals")
			{
				textBox1->Text = selectedRow->Cells["Type"]->Value->ToString();
				textBox2->Text = selectedRow->Cells["Weight"]->Value->ToString();
				textBox3->Text = selectedRow->Cells["Price"]->Value->ToString();
				textBox4->Text = selectedRow->Cells["Stock"]->Value->ToString();
			}
			else if (label1->Text == "Cars")
			{
				textBox8->Text = selectedRow->Cells["Type"]->Value->ToString();
				textBox7->Text = selectedRow->Cells["Explanation"]->Value->ToString();
				textBox6->Text = selectedRow->Cells["Price"]->Value->ToString();
				textBox5->Text = selectedRow->Cells["Stock"]->Value->ToString();
			}
			else if (label1->Text == "Crops")
			{
				textBox8->Text = selectedRow->Cells["Type"]->Value->ToString();
				textBox7->Text = selectedRow->Cells["Explanation"]->Value->ToString();
				textBox6->Text = selectedRow->Cells["Price"]->Value->ToString();
				textBox5->Text = selectedRow->Cells["Stock"]->Value->ToString();
			}
			else if (label1->Text == "Foods")
			{
				textBox8->Text = selectedRow->Cells["Type"]->Value->ToString();
				textBox7->Text = selectedRow->Cells["Explanation"]->Value->ToString();
				textBox6->Text = selectedRow->Cells["Price"]->Value->ToString();
				textBox5->Text = selectedRow->Cells["Stock"]->Value->ToString();
			}
			else if (label1->Text == "Medicine")
			{
				textBox8->Text = selectedRow->Cells["Type"]->Value->ToString();
				textBox7->Text = selectedRow->Cells["Explanation"]->Value->ToString();
				textBox6->Text = selectedRow->Cells["Price"]->Value->ToString();
				textBox5->Text = selectedRow->Cells["Stock"]->Value->ToString();
			}
			else if (label1->Text == "Plans")
			{
				textBox12->Text = selectedRow->Cells["Type"]->Value->ToString();
				textBox11->Text = selectedRow->Cells["Effective Plan"]->Value->ToString();
			}
		}
	}

	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0)  // Satýrýn geçerli bir satýr olup olmadýðýný kontrol et
		{
			// Seçilen satýrdaki veriyi almak
			DataGridViewRow^ selectedRow = dataGridView1->Rows[e->RowIndex];

			// Hangi tablonun seçildiðine göre uygun TextBox'lara veri atama
			if (label1->Text == "Animals")
			{
				textBox1->Text = selectedRow->Cells["Type"]->Value->ToString();
				textBox2->Text = selectedRow->Cells["Weight"]->Value->ToString();
				textBox3->Text = selectedRow->Cells["Price"]->Value->ToString();
				textBox4->Text = selectedRow->Cells["Stock"]->Value->ToString();
			}
			else if (label1->Text == "Cars")
			{
				textBox8->Text = selectedRow->Cells["Type"]->Value->ToString();
				textBox7->Text = selectedRow->Cells["Explanation"]->Value->ToString();
				textBox6->Text = selectedRow->Cells["Price"]->Value->ToString();
				textBox5->Text = selectedRow->Cells["Stock"]->Value->ToString();
			}
			else if (label1->Text == "Crops")
			{
				textBox8->Text = selectedRow->Cells["Type"]->Value->ToString();
				textBox7->Text = selectedRow->Cells["Explanation"]->Value->ToString();
				textBox6->Text = selectedRow->Cells["Price"]->Value->ToString();
				textBox5->Text = selectedRow->Cells["Stock"]->Value->ToString();
			}
			else if (label1->Text == "Foods")
			{
				textBox8->Text = selectedRow->Cells["Type"]->Value->ToString();
				textBox7->Text = selectedRow->Cells["Explanation"]->Value->ToString();
				textBox6->Text = selectedRow->Cells["Price"]->Value->ToString();
				textBox5->Text = selectedRow->Cells["Stock"]->Value->ToString();
			}
			else if (label1->Text == "Medicine")
			{
				textBox8->Text = selectedRow->Cells["Type"]->Value->ToString();
				textBox7->Text = selectedRow->Cells["Explanation"]->Value->ToString();
				textBox6->Text = selectedRow->Cells["Price"]->Value->ToString();
				textBox5->Text = selectedRow->Cells["Stock"]->Value->ToString();
			}
			else if (label1->Text == "Plans")
			{
				textBox12->Text = selectedRow->Cells["Type"]->Value->ToString();
				textBox11->Text = selectedRow->Cells["Effective Plan"]->Value->ToString();
			}
		}
	}

	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		// Seçilen tabloya göre veritabaný güncellemesi yapalým
		SqlConnection^ conn = gcnew SqlConnection(connectionString);
		try {
			conn->Open();

			// Tabloya göre güncelleme iþlemi yapalým
        if (label1->Text == "Animals") {
            String^ type = textBox1->Text;
            String^ weight = textBox2->Text;
            String^ price = textBox3->Text;
            String^ stock = textBox4->Text;
			
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];

			// Ýlk sütunun deðerini alalým
			String^ firstType = selectedRow->Cells[0]->Value->ToString();

            if (String::IsNullOrEmpty(type) || String::IsNullOrEmpty(weight) || String::IsNullOrEmpty(price) || String::IsNullOrEmpty(stock)) {
                MessageBox::Show("Please fill all fields.");
                return;
            }

            String^ query = "UPDATE animals SET animals_type = @Type, animals_weight = @Weight, animals_price = @Price, animals_stock = @Stock WHERE animals_type = @FirstType";
            SqlCommand^ cmd = gcnew SqlCommand(query, conn);

            cmd->Parameters->AddWithValue("@Type", type);
            cmd->Parameters->AddWithValue("@Weight", Convert::ToDecimal(weight));
            cmd->Parameters->AddWithValue("@Price", Convert::ToDecimal(price));
            cmd->Parameters->AddWithValue("@Stock", stock);
			cmd->Parameters->AddWithValue("@FirstType", firstType);

            int rowsAffected = cmd->ExecuteNonQuery();

            if (rowsAffected > 0) {
                MessageBox::Show("Animal record updated successfully.");
                LoadDataIntoGridView("SELECT animals_type as Type, animals_weight as Weight, animals_price as Price, animals_stock as Stock FROM animals", connectionString);
                ClearTextBoxes();
            }
            else {
                MessageBox::Show("No records found to update.");
            }
        }
			else if (label1->Text == "Cars") {
				// Cars tablosu için güncelleme SQL sorgusu
				String^ type = textBox8->Text;
				String^ explanation = textBox7->Text;
				String^ price = textBox6->Text;
				String^ stock = textBox5->Text;

				DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];

				// Ýlk sütunun deðerini alalým
				String^ firstType = selectedRow->Cells[0]->Value->ToString();

				String^ query = "UPDATE cars SET cars_type = @Type, cars_explanation = @Explanation, cars_price = @Price, cars_stock = @Stock WHERE cars_type = @FirstType";
				SqlCommand^ cmd = gcnew SqlCommand(query, conn);

				// Parametreleri ekleyelim
				cmd->Parameters->AddWithValue("@Type", type);
				cmd->Parameters->AddWithValue("@Explanation", explanation);
				cmd->Parameters->AddWithValue("@Price", Convert::ToDecimal(price));
				cmd->Parameters->AddWithValue("@Stock", stock);
				cmd->Parameters->AddWithValue("@FirstType", firstType);

				int rowsAffected = cmd->ExecuteNonQuery();

				if (rowsAffected > 0) {
					MessageBox::Show("Car record updated successfully.");
					LoadDataIntoGridView("SELECT cars_type as Type, cars_explanation as Explanation, cars_price as Price, cars_stock as Stock FROM cars", connectionString);
					ClearTextBoxes();
				}
				else {
					MessageBox::Show("No records found to update.");
				}
			}
			else if (label1->Text == "Crops") {
				// Crops tablosu için güncelleme SQL sorgusu
				String^ type = textBox8->Text;
				String^ explanation = textBox7->Text;
				String^ price = textBox6->Text;
				String^ stock = textBox5->Text;

				DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];

				// Ýlk sütunun deðerini alalým
				String^ firstType = selectedRow->Cells[0]->Value->ToString();

				String^ query = "UPDATE crops SET crops_name = @Type, crops_explanation = @Explanation, crops_price = @Price, crops_stock = @Stock WHERE crops_name = @FirstType";
				SqlCommand^ cmd = gcnew SqlCommand(query, conn);

				// Parametreleri ekleyelim
				cmd->Parameters->AddWithValue("@Type", type);
				cmd->Parameters->AddWithValue("@Explanation", explanation);
				cmd->Parameters->AddWithValue("@Price", Convert::ToDecimal(price));
				cmd->Parameters->AddWithValue("@Stock", stock);
				cmd->Parameters->AddWithValue("@FirstType", firstType);

				int rowsAffected = cmd->ExecuteNonQuery();

				if (rowsAffected > 0) {
					MessageBox::Show("Crop record updated successfully.");
					LoadDataIntoGridView("SELECT crops_name as Type, crops_explanation as Explanation, crops_price as Price, crops_stock as Stock FROM crops", connectionString);
					ClearTextBoxes();
				}
				else {
					MessageBox::Show("No records found to update.");
				}
			}
			else if (label1->Text == "Foods") {
				// Foods tablosu için güncelleme SQL sorgusu
				String^ type = textBox8->Text;
				String^ explanation = textBox7->Text;
				String^ price = textBox6->Text;
				String^ stock = textBox5->Text;

				DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];

				// Ýlk sütunun deðerini alalým
				String^ firstType = selectedRow->Cells[0]->Value->ToString();

				String^ query = "UPDATE foods SET foods_type = @Type, foods_explanation = @Explanation, foods_price = @Price, foods_stock = @Stock WHERE foods_type = @FirstType";
				SqlCommand^ cmd = gcnew SqlCommand(query, conn);

				// Parametreleri ekleyelim
				cmd->Parameters->AddWithValue("@Type", type);
				cmd->Parameters->AddWithValue("@Explanation", explanation);
				cmd->Parameters->AddWithValue("@Price", Convert::ToDecimal(price));
				cmd->Parameters->AddWithValue("@Stock", stock);
				cmd->Parameters->AddWithValue("@FirstType", firstType);

				int rowsAffected = cmd->ExecuteNonQuery();

				if (rowsAffected > 0) {
					MessageBox::Show("Food record updated successfully.");
					LoadDataIntoGridView("SELECT foods_type as Type, foods_explanation as Explanation , foods_price as Price , foods_stock as Stock FROM foods", connectionString);
					ClearTextBoxes();
				}
				else {
					MessageBox::Show("No records found to update.");
				}
			}
			else if (label1->Text == "Medicine") {
				// Medicine tablosu için güncelleme SQL sorgusu
				String^ type = textBox8->Text;
				String^ explanation = textBox7->Text;
				String^ price = textBox6->Text;
				String^ stock = textBox5->Text;

				DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];

				// Ýlk sütunun deðerini alalým
				String^ firstType = selectedRow->Cells[0]->Value->ToString();

				String^ query = "UPDATE medicine SET med_type = @Type, med_explanation = @Explanation, med_price = @Price, med_stock = @Stock WHERE med_type = @FirstType";
				SqlCommand^ cmd = gcnew SqlCommand(query, conn);

				// Parametreleri ekleyelim
				cmd->Parameters->AddWithValue("@Type", type);
				cmd->Parameters->AddWithValue("@Explanation", explanation);
				cmd->Parameters->AddWithValue("@Price", Convert::ToDecimal(price));
				cmd->Parameters->AddWithValue("@Stock", stock);
				cmd->Parameters->AddWithValue("@FirstType", firstType);

				int rowsAffected = cmd->ExecuteNonQuery();

				if (rowsAffected > 0) {
					MessageBox::Show("Medicine record updated successfully.");
					LoadDataIntoGridView("SELECT med_type as Type, med_explanation as Explanation, med_price as Price, med_stock as Stock FROM medicine", connectionString);
					ClearTextBoxes();
				}
				else {
					MessageBox::Show("No records found to update.");
				}
			}
			else if (label1->Text == "Plans")
			{
				String^ planID = textBox11->Text; // Plans tablosundaki ID
				String^ cropType = textBox12->Text; // Crops tablosundaki Type
				String^ effectivePlan = textBox11->Text; // Effective Plan bilgisi

				DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];

				// Ýlk sütunun deðerini alalým (Plan ID)
				String^ selectedPlanID = selectedRow->Cells["ID"]->Value->ToString();

				if (String::IsNullOrEmpty(planID) || String::IsNullOrEmpty(cropType) || String::IsNullOrEmpty(effectivePlan)) {
					MessageBox::Show("Please fill all fields.");
					return;
				}

				// SQL sorgusunu yazalým
				String^ query =
					"UPDATE plans "
					"SET effective_plan = @EffectivePlan "
					"WHERE plans_id = @PlanID; "
					"UPDATE crops "
					"SET crops_name = @CropType "
					"WHERE crops_id = (SELECT crops_id FROM plans WHERE plans_id = @PlanID);";

				SqlCommand^ cmd = gcnew SqlCommand(query, conn);

				// Parametreleri ekleyelim
				cmd->Parameters->AddWithValue("@PlanID", selectedPlanID);
				cmd->Parameters->AddWithValue("@CropType", cropType);
				cmd->Parameters->AddWithValue("@EffectivePlan", effectivePlan);

				int rowsAffected = cmd->ExecuteNonQuery();

				if (rowsAffected > 0) {
					MessageBox::Show("Plan record updated successfully.");
					LoadDataIntoGridView("SELECT plans_id as ID, crops.crops_name as Type, effective_plan as 'Effective Plan' FROM plans INNER JOIN crops ON crops.crops_id = plans.crops_id", connectionString);
					ClearTextBoxes();
				}
				else {
					MessageBox::Show("No records found to update.");
				}
			}
		}
		catch (Exception^ ex) {
			// Hata mesajýný göster
			MessageBox::Show("An error occurred: " + ex->Message);
		}
		finally {
			// Baðlantýyý kapatalým
			conn->Close();
		}
	}
	private: System::Void textBox6_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)8 && e->KeyChar != (char)13 && e->KeyChar != ',') {
			e->Handled = true; // Geçersiz tuþ basýldýðýnda iþlemi engeller
		}
	}
	private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)8 && e->KeyChar != (char)13) {
			e->Handled = true; // Geçersiz tuþ basýldýðýnda iþlemi engeller
		}
	}
	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)8 && e->KeyChar != (char)13 && e->KeyChar != ',') {
			e->Handled = true; // Geçersiz tuþ basýldýðýnda iþlemi engeller
		}
	}
	private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)8 && e->KeyChar != (char)13 && e->KeyChar != ',') {
			e->Handled = true; // Geçersiz tuþ basýldýðýnda iþlemi engeller
		}
	}
	private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)8 && e->KeyChar != (char)13) {
			e->Handled = true; // Geçersiz tuþ basýldýðýnda iþlemi engeller
		}
	}
};
}
