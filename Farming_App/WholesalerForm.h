#pragma once
#include "User.h"

namespace FarmingApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for WholesalerForm
	/// </summary>
	public ref class WholesalerForm : public System::Windows::Forms::Form
	{
	public:
		User^ currentUser;
		WholesalerForm(User^ user)
		{
			InitializeComponent();
			currentUser = user;
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~WholesalerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WholesalerForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(-1, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1456, 114);
			this->panel1->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1409, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(35, 35);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &WholesalerForm::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Dubai", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(673, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 73);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Wholesaler";
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
			this->dataGridView1->Location = System::Drawing::Point(25, 201);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(931, 463);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->SelectionChanged += gcnew System::EventHandler(this, &WholesalerForm::dataGridView1_SelectionChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Dubai", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(118, 380);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(232, 64);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Buy";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &WholesalerForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->ForeColor = System::Drawing::Color::Gray;
			this->label4->Location = System::Drawing::Point(316, 144);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 31);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Type";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Animals", L"Cars", L"Crops", L"Foods", L"Medicine" });
			this->comboBox1->Location = System::Drawing::Point(440, 141);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(209, 39);
			this->comboBox1->TabIndex = 12;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &WholesalerForm::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Gray;
			this->label2->Location = System::Drawing::Point(149, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 31);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Item Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Gray;
			this->label3->Location = System::Drawing::Point(46, 196);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 31);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Stock";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox1->Location = System::Drawing::Point(155, 194);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(232, 41);
			this->textBox1->TabIndex = 14;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &WholesalerForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &WholesalerForm::textBox1_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Gray;
			this->label5->Location = System::Drawing::Point(46, 59);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(341, 31);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Current Budget: $10000,00";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Gray;
			this->label6->Location = System::Drawing::Point(46, 281);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(237, 31);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Total Cost: $00,00";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->groupBox1->ForeColor = System::Drawing::Color::Gray;
			this->groupBox1->Location = System::Drawing::Point(978, 201);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(448, 463);
			this->groupBox1->TabIndex = 18;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Buying Section";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label7->ForeColor = System::Drawing::Color::Orange;
			this->label7->Location = System::Drawing::Point(331, 238);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 25);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Max";
			this->label7->Click += gcnew System::EventHandler(this, &WholesalerForm::label7_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(13, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(35, 35);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &WholesalerForm::pictureBox2_Click);
			// 
			// WholesalerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(192, 192);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1455, 692);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"WholesalerForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"WholesalerForm";
			this->Load += gcnew System::EventHandler(this, &WholesalerForm::WholesalerForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Enabled = true;
		textBox1->Clear();
		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear(); // Önce var olan sütunlarý temizleyin

		String^ selectedValue = comboBox1->SelectedItem->ToString();
		String^ query;

		// Sütunlarý tanýmlayýn
		if (selectedValue == "Animals") {
			dataGridView1->Columns->Add("type", "Animal Type");
			dataGridView1->Columns->Add("price", "Price");
			dataGridView1->Columns->Add("weight", "Weight");
			dataGridView1->Columns->Add("stock", "Stock");
			query = "SELECT animals_type, animals_price, animals_weight, animals_stock FROM animals WHERE animals_stock > 0";
		}
		else if (selectedValue == "Cars") {
			dataGridView1->Columns->Add("type", "Car Type");
			dataGridView1->Columns->Add("explanation", "Explanation");
			dataGridView1->Columns->Add("price", "Price");
			dataGridView1->Columns->Add("stock", "Stock");
			query = "SELECT cars_type, cars_explanation, cars_price, cars_stock FROM cars WHERE cars_stock > 0";
		}
		else if (selectedValue == "Crops") {
			dataGridView1->Columns->Add("type", "Crop Type");
			dataGridView1->Columns->Add("explanation", "Explanation");
			dataGridView1->Columns->Add("price", "Price");
			dataGridView1->Columns->Add("stock", "Stock");
			query = "SELECT crops_name, crops_explanation, crops_price, crops_stock FROM crops WHERE crops_stock > 0";
		}
		else if (selectedValue == "Foods") {
			dataGridView1->Columns->Add("type", "Food Type");
			dataGridView1->Columns->Add("explanation", "Explanation");
			dataGridView1->Columns->Add("price", "Price");
			dataGridView1->Columns->Add("stock", "Stock");
			query = "SELECT foods_type, foods_explanation, foods_price, foods_stock FROM foods WHERE foods_stock > 0";
		}
		else if (selectedValue == "Medicine") {
			dataGridView1->Columns->Add("type", "Medicine Type");
			dataGridView1->Columns->Add("explanation", "Explanation");
			dataGridView1->Columns->Add("price", "Price");
			dataGridView1->Columns->Add("stock", "Stock");
			query = "SELECT med_type, med_explanation, med_price, med_stock FROM medicine WHERE med_stock > 0";
		}
		else {
			return;
		}

		// Veritabaný baðlantýsý
		SqlConnection^ connection = gcnew SqlConnection("Data Source=MERT;Initial Catalog=farming_system;Integrated Security=True");

		try {
			connection->Open();
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			SqlDataReader^ reader = command->ExecuteReader();

			// Veri çekme ve DataGridView'e ekleme
			while (reader->Read()) {
				if (selectedValue == "Animals")
				{
					String^ type = reader->GetString(0);
					Decimal price = reader->GetDecimal(1); // Decimal verisi
					Decimal weight = reader->GetDecimal(2);
					int stock = reader->GetInt32(3);

					// DataGridView'e satýr ekleme
					dataGridView1->Rows->Add(type, weight, price, stock);
				}

				else {
					String^ type = reader->GetString(0);
					String^ explanation = reader->GetString(1);
					Decimal price = reader->GetDecimal(2); // Decimal verisi
					int stock = reader->GetInt32(3);

					// DataGridView'e satýr ekleme
					dataGridView1->Rows->Add(type, explanation, price, stock);
				}
			}

			reader->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		finally {
			connection->Close();
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->SelectedRows->Count > 0) {
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];

			// Stok ve fiyat bilgilerini al
			int stockValue = Convert::ToInt32(selectedRow->Cells["Stock"]->Value);
			double price = Convert::ToDouble(selectedRow->Cells["Price"]->Value);
			String^ itemType = selectedRow->Cells["Type"]->Value->ToString(); // Ürün tipi
			double quantity = 0;

			// Kullanýcýnýn girilen miktarý geçerli bir sayýya çevirmeye çalýþ
			if (!Double::TryParse(textBox1->Text, System::Globalization::NumberStyles::Float,
				System::Globalization::CultureInfo::InvariantCulture, quantity)) {
				MessageBox::Show("Please enter a valid number for quantity!", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return; // Geçersiz giriþ, iþlemi durdur
			}

			// Toplam maliyeti hesapla
			double totalCost = price * quantity;

			// Kullanýcýnýn mevcut bakiyesi ile karþýlaþtýr
			if (currentUser->budget < totalCost) {
				MessageBox::Show("Insufficient balance!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return; // Yetersiz bakiye, iþlemi durdur
			}

			// Kullanýcý bütçesini güncelle
			currentUser->budget -= totalCost;

			// Stok deðerini güncelle
			stockValue -= (int)quantity;
			selectedRow->Cells["Stock"]->Value = stockValue;

			// Veritabaný baðlantýsý ve iþlem
			SqlConnection^ connection = gcnew SqlConnection("Data Source=MERT;Initial Catalog=farming_system;Integrated Security=True");

			try {
				connection->Open();
				SqlCommand^ command;

				// Kullanýcýnýn envanterinde ürünü var mý kontrol et
				String^ checkInventoryQuery = "SELECT amount FROM inventory WHERE farmers_id = @farmerId AND item_type = @itemType";
				command = gcnew SqlCommand(checkInventoryQuery, connection);
				command->Parameters->AddWithValue("@farmerId", currentUser->id);
				command->Parameters->AddWithValue("@itemType", itemType);

				SqlDataReader^ reader = command->ExecuteReader();
				bool itemExists = false;
				int currentAmount = 0;

				// Eðer ürün zaten envanterde varsa, miktarý artýr
				if (reader->Read()) {
					itemExists = true;
					currentAmount = reader->GetInt32(0);
				}
				reader->Close();

				// Eðer ürün envanterde mevcutsa miktarý arttýr
				if (itemExists) {
					String^ updateInventoryQuery = "UPDATE inventory SET amount = @amount WHERE farmers_id = @farmerId AND item_type = @itemType";
					command = gcnew SqlCommand(updateInventoryQuery, connection);
					command->Parameters->AddWithValue("@amount", currentAmount + (int)quantity);
					command->Parameters->AddWithValue("@farmerId", currentUser->id);
					command->Parameters->AddWithValue("@itemType", itemType);
					command->ExecuteNonQuery();
				}
				else {
					// Inventory tablosuna yeni kayýt ekle
					String^ insertQuery = "INSERT INTO inventory (farmers_id, item_type, table_type, amount) VALUES (@farmerId, @itemType, @tableType, @amount)";
					command = gcnew SqlCommand(insertQuery, connection);
					command->Parameters->AddWithValue("@farmerId", currentUser->id);
					command->Parameters->AddWithValue("@itemType", itemType);
					command->Parameters->AddWithValue("@tableType", comboBox1->SelectedItem->ToString()->ToLower());
					command->Parameters->AddWithValue("@amount", (int)quantity);
					command->ExecuteNonQuery();
				}

				// Kullanýcýnýn yeni bütçesini veritabanýnda güncelle
				String^ updateUserBudgetQuery = "UPDATE farmers SET budget = @budget WHERE farmers_id = @farmerId";
				command = gcnew SqlCommand(updateUserBudgetQuery, connection);
				command->Parameters->AddWithValue("@budget", currentUser->budget);
				command->Parameters->AddWithValue("@farmerId", currentUser->id);
				command->ExecuteNonQuery();

				if (comboBox1->SelectedItem->ToString() == "Animals")
				{
					String^ updateStockQuery = "UPDATE animals SET animals_stock = @stock WHERE animals_type = @itemType";
					command = gcnew SqlCommand(updateStockQuery, connection);
					command->Parameters->AddWithValue("@stock", stockValue);
					command->Parameters->AddWithValue("@itemType", itemType);
					command->ExecuteNonQuery();
				}

				if (comboBox1->SelectedItem->ToString() == "Cars")
				{
					String^ updateStockQuery = "UPDATE cars SET cars_stock = @stock WHERE cars_type = @itemType";
					command = gcnew SqlCommand(updateStockQuery, connection);
					command->Parameters->AddWithValue("@stock", stockValue);
					command->Parameters->AddWithValue("@itemType", itemType);
					command->ExecuteNonQuery();
				}

				if (comboBox1->SelectedItem->ToString() == "Crops")
				{
					String^ updateStockQuery = "UPDATE crops SET crops_stock = @stock WHERE crops_name = @itemType";
					command = gcnew SqlCommand(updateStockQuery, connection);
					command->Parameters->AddWithValue("@stock", stockValue);
					command->Parameters->AddWithValue("@itemType", itemType);
					command->ExecuteNonQuery();
				}

				if (comboBox1->SelectedItem->ToString() == "Foods")
				{
					String^ updateStockQuery = "UPDATE foods SET foods_stock = @stock WHERE foods_type = @itemType";
					command = gcnew SqlCommand(updateStockQuery, connection);
					command->Parameters->AddWithValue("@stock", stockValue);
					command->Parameters->AddWithValue("@itemType", itemType);
					command->ExecuteNonQuery();
				}

				if (comboBox1->SelectedItem->ToString() == "Medicine")
				{
					String^ updateStockQuery = "UPDATE medicine SET med_stock = @stock WHERE med_type = @itemType";
					command = gcnew SqlCommand(updateStockQuery, connection);
					command->Parameters->AddWithValue("@stock", stockValue);
					command->Parameters->AddWithValue("@itemType", itemType);
					command->ExecuteNonQuery();
				}

				MessageBox::Show("Purchase successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}
			finally {
				connection->Close();
			}

			// Güncel bakiye ve stok bilgilerini UI'de güncelle
			label5->Text = "Current Balance: $" + currentUser->budget.ToString("0.00");
		}
		textBox1->Clear();
	}
	private: System::Void WholesalerForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->label5->Text = "Current Balance: $" + currentUser->budget.ToString("0.00");
		textBox1->Enabled = false;
	}
	private: System::Void dataGridView1_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Enabled = true;
		textBox1->Clear();
		textBox1_TextChanged(sender, e); // TextBox içeriðine göre toplamý yeniden hesapla
		if (dataGridView1->SelectedRows->Count > 0) { // Seçili bir satýr var mý kontrolü
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0]; // Ýlk seçili satýrý al
			if (selectedRow->Cells["Type"]->Value != nullptr) { // "Name" boþsa "Type" kontrol edilir
				label2->Text = selectedRow->Cells["Type"]->Value->ToString(); // "Type" deðerini `label2`ye ata
			}
			else {
				label2->Text = ""; // Her iki deðer de boþsa `label2`yi temizle
			}

			// Stok deðerini al ve TextBox'ýn Tag özelliðine kaydet
			int stockValue = Convert::ToInt32(selectedRow->Cells["Stock"]->Value);
			textBox1->Tag = stockValue;
		}
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)Keys::Back) {
			e->Handled = true; // Ýþlenmiþ olarak iþaretle, giriþe izin verilmez
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Enabled = true;
		// TextBox'taki metni al ve geçerli bir sayý olup olmadýðýný kontrol et
		double quantity = 0.0;
		if (Double::TryParse(textBox1->Text, quantity)) {
			// DataGridView'deki seçili satýrý kontrol et
			if (dataGridView1->SelectedRows->Count > 0) {
				DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];

				// Stok deðerini al (Tag özelliðinden)
				int stockValue = Convert::ToInt32(textBox1->Tag);

				// Girilen miktar stok deðerini aþarsa, TextBox'ý stok deðeri ile sýnýrla
				if (quantity > stockValue) {
					textBox1->Text = stockValue.ToString();
					quantity = stockValue; // Stok deðerini aþýyor, bu yüzden geri alma
				}

				if (selectedRow->Cells["Price"]->Value != nullptr) {
					double price = Convert::ToDouble(selectedRow->Cells["Price"]->Value);
					double totalCost = price * quantity;

					// Label6'yý güncelle
					label6->Text = String::Format("Total Cost: ${0:N2}", totalCost);
				}
			}
		}
		else {
			label6->Text = "Total Cost: $0.00";
		}
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Enabled == true)
		{
			int stockValue = Convert::ToInt32(textBox1->Tag);
			textBox1->Text = stockValue.ToString();
		}
	}
	public: bool switchToTransfer = false;
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToTransfer = true;
		this->Hide();
	}
};
}
