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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->dataGridView1->Size = System::Drawing::Size(789, 276);
			this->dataGridView1->TabIndex = 0;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Dubai", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(1182, 482);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(206, 64);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Add";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Firebrick;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Dubai", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(304, 482);
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
			this->button9->Location = System::Drawing::Point(1182, 563);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(206, 64);
			this->button9->TabIndex = 9;
			this->button9->Text = L"Update";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(192, 192);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1455, 651);
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
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	String^ connectionString = "Data Source=MERT;Initial Catalog=farming_system;Integrated Security=True";

	private: void LoadDataIntoGridView(String^ query, String^ connectionString) {
		try {
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(query, connection);
			DataTable^ dataTable = gcnew DataTable();

			dataAdapter->Fill(dataTable);
			dataGridView1->DataSource = dataTable;

			dataGridView1->AutoResizeColumns(DataGridViewAutoSizeColumnsMode::ColumnHeader);
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
		label1->Text = button1->Text;
		LoadDataIntoGridView("SELECT animals_type as Type, animals_weight as Weight, animals_price as Price, animals_stock as Stock FROM animals", connectionString);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = button2->Text;
		LoadDataIntoGridView("SELECT cars_type as Type, cars_explanation as Explanation, cars_price as Price, cars_stock as Stock FROM cars", connectionString);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = button3->Text;
		LoadDataIntoGridView("SELECT crops_name as Type, crops_explanation as Explanation, crops_price as Price, crops_stock as Stock FROM crops", connectionString);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = button4->Text;
		LoadDataIntoGridView("SELECT foods_type as Type, foods_explanation as Explanation , foods_price as Price , foods_stock as Stock FROM foods", connectionString);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = button5->Text;
		LoadDataIntoGridView("SELECT med_type as Type, med_explanation as Explanation, med_price as Price, med_stock as Stock FROM medicine", connectionString);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
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
};
}
