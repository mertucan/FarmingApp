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
	/// Summary for MarketForm
	/// </summary>
	public ref class MarketForm : public System::Windows::Forms::Form
	{
	public:
		User^ currentUser;
		MarketForm(User^ user)
		{
			InitializeComponent();
			currentUser = user;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MarketForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MarketForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
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
			this->groupBox1->Location = System::Drawing::Point(847, 167);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(448, 463);
			this->groupBox1->TabIndex = 23;
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
			this->label7->Click += gcnew System::EventHandler(this, &MarketForm::label7_Click);
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
			this->button1->Click += gcnew System::EventHandler(this, &MarketForm::button1_Click);
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
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MarketForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MarketForm::textBox1_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Gray;
			this->label3->Location = System::Drawing::Point(46, 196);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 31);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Amount";
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
			this->dataGridView1->Location = System::Drawing::Point(37, 167);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(803, 463);
			this->dataGridView1->TabIndex = 20;
			this->dataGridView1->SelectionChanged += gcnew System::EventHandler(this, &MarketForm::dataGridView1_SelectionChanged);
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(-62, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1456, 114);
			this->panel1->TabIndex = 19;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(74, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(35, 35);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MarketForm::pictureBox2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1347, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(35, 35);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MarketForm::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Dubai", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(647, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 73);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Market";
			// 
			// MarketForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(192, 192);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1332, 692);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MarketForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MarketForm";
			this->Load += gcnew System::EventHandler(this, &MarketForm::MarketForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MarketForm_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->AllowUserToResizeColumns = false;
		dataGridView1->AllowUserToResizeRows = false;
		dataGridView1->MultiSelect = false;
		dataGridView1->AllowUserToAddRows = false;
		dataGridView1->RowHeadersVisible = false;

		LoadData();
	}

	private: void LoadData()
	{
		// Mevcut bakiye label'ýný güncelle
		this->label5->Text = "Current Balance: $" + currentUser->budget.ToString("0.00");

		SqlConnection^ connection = gcnew SqlConnection("Data Source=MERT;Initial Catalog=farming_system;Integrated Security=True");

		try {
			connection->Open();

			// SQL sorgusu
			String^ query = "SELECT market.selling_user_id AS SellerId, market.item_id AS ItemId, market.table_type AS TableType, farmers.username AS Seller, market.item_type AS Type, market.price AS Price, market.amount AS Amount "
				"FROM market "
				"INNER JOIN farmers ON market.selling_user_id = farmers.farmers_id "
				"WHERE farmers.farmers_id != @farmers_id";

			// SqlCommand nesnesi oluþturuluyor
			SqlCommand^ command = gcnew SqlCommand(query, connection);

			// Parametreyi ekliyoruz
			command->Parameters->AddWithValue("@farmers_id", currentUser->id);

			// SqlDataAdapter nesnesi ile veri çekiliyor
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);

			// Veriyi DataGridView'e yükleme
			dataGridView1->DataSource = dt;
		}
		catch (Exception^ ex) {
			MessageBox::Show("Hata: " + ex->Message);
		}
		finally {
			connection->Close();
		}

		// DataGridView'in görünüm ayarlarý
		dataGridView1->Columns["ItemId"]->Visible = false;
		dataGridView1->Columns["TableType"]->Visible = false;
		dataGridView1->Columns["SellerId"]->Visible = false;
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public: bool switchToTransfer = false;
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToTransfer = true;
		this->Hide();
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)Keys::Back) {
			e->Handled = true;
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Enabled = true;
		double quantity = 0.0;
		if (Double::TryParse(textBox1->Text, quantity)) {
			if (dataGridView1->SelectedRows->Count > 0) {
				DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];

				int stockValue = Convert::ToInt32(textBox1->Tag);

				if (quantity > stockValue) {
					textBox1->Text = stockValue.ToString();
					quantity = stockValue; 
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
	private: System::Void dataGridView1_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
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
			int stockValue = Convert::ToInt32(selectedRow->Cells["Amount"]->Value);
			textBox1->Tag = stockValue;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Get the amount entered by the user
			double purchaseAmount = Double::Parse(textBox1->Text);

			// Check if a row is selected
			if (dataGridView1->SelectedRows->Count == 0) {
				MessageBox::Show("Please select a product.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
			int itemId = Convert::ToInt32(selectedRow->Cells["ItemId"]->Value);
			int sellerId = Convert::ToInt32(selectedRow->Cells["SellerId"]->Value);
			String^ itemType = selectedRow->Cells["Type"]->Value->ToString();
			String^ tableType = selectedRow->Cells["TableType"]->Value->ToString();
			int availableAmount = Convert::ToInt32(selectedRow->Cells["Amount"]->Value);
			double itemPrice = Convert::ToDouble(selectedRow->Cells["Price"]->Value);

			// Check if there is enough quantity and budget
			if (purchaseAmount > availableAmount) {
				MessageBox::Show("There is not enough quantity of the selected product.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			double totalCost = purchaseAmount * itemPrice;

			// currentUser->budget zaten double olduðu için doðrudan kullanabiliriz
			double budget = currentUser->budget;

			if (budget < totalCost) {
				MessageBox::Show("You do not have enough budget.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Database connection
			SqlConnection^ connection = gcnew SqlConnection("Data Source=MERT;Initial Catalog=farming_system;Integrated Security=True");
			connection->Open();

			// Start transaction
			SqlTransaction^ transaction = connection->BeginTransaction();

			try {
				// Deduct from currentUser->budget and add to seller's budget
				String^ updateUserBudgetQuery = "UPDATE farmers SET budget = budget - @totalCost WHERE farmers_id = @userId";
				SqlCommand^ cmd1 = gcnew SqlCommand(updateUserBudgetQuery, connection, transaction);
				cmd1->Parameters->AddWithValue("@totalCost", totalCost);
				cmd1->Parameters->AddWithValue("@userId", currentUser->id);
				cmd1->ExecuteNonQuery();

				String^ updateSellerBudgetQuery = "UPDATE farmers SET budget = budget + @totalCost WHERE farmers_id = @sellerId";
				SqlCommand^ cmd2 = gcnew SqlCommand(updateSellerBudgetQuery, connection, transaction);
				cmd2->Parameters->AddWithValue("@totalCost", totalCost);
				cmd2->Parameters->AddWithValue("@sellerId", sellerId);
				cmd2->ExecuteNonQuery();

				// Decrease market.amount or delete if it is zero
				String^ updateMarketAmountQuery = "UPDATE market SET amount = amount - @purchaseAmount WHERE item_id = @itemId";
				SqlCommand^ cmd3 = gcnew SqlCommand(updateMarketAmountQuery, connection, transaction);
				cmd3->Parameters->AddWithValue("@purchaseAmount", purchaseAmount);
				cmd3->Parameters->AddWithValue("@itemId", itemId);
				cmd3->ExecuteNonQuery();

				String^ deleteEmptyMarketQuery = "DELETE FROM market WHERE amount = 0 AND item_id = @itemId";
				SqlCommand^ cmd4 = gcnew SqlCommand(deleteEmptyMarketQuery, connection, transaction);
				cmd4->Parameters->AddWithValue("@itemId", itemId);
				cmd4->ExecuteNonQuery();

				// Check inventory and add/update
				String^ checkInventoryQuery = "SELECT amount FROM inventory WHERE farmers_id = @userId AND item_type = @itemType AND table_type = @tableType";
				SqlCommand^ cmd5 = gcnew SqlCommand(checkInventoryQuery, connection, transaction);
				cmd5->Parameters->AddWithValue("@userId", currentUser->id);
				cmd5->Parameters->AddWithValue("@itemType", itemType);
				cmd5->Parameters->AddWithValue("@tableType", tableType);
				Object^ result = cmd5->ExecuteScalar();

				if (result != nullptr) {
					int currentAmount = Convert::ToInt32(result);
					String^ updateInventoryQuery = "UPDATE inventory SET amount = amount + @purchaseAmount WHERE farmers_id = @userId AND item_type = @itemType AND table_type = @tableType";
					SqlCommand^ cmd6 = gcnew SqlCommand(updateInventoryQuery, connection, transaction);
					cmd6->Parameters->AddWithValue("@purchaseAmount", purchaseAmount);
					cmd6->Parameters->AddWithValue("@userId", currentUser->id);
					cmd6->Parameters->AddWithValue("@itemType", itemType);
					cmd6->Parameters->AddWithValue("@tableType", tableType);
					cmd6->ExecuteNonQuery();
				}
				else {
					String^ insertInventoryQuery = "INSERT INTO inventory (farmers_id, item_type, table_type, amount) VALUES (@userId, @itemType, @tableType, @purchaseAmount)";
					SqlCommand^ cmd7 = gcnew SqlCommand(insertInventoryQuery, connection, transaction);
					cmd7->Parameters->AddWithValue("@userId", currentUser->id);
					cmd7->Parameters->AddWithValue("@itemType", itemType);
					cmd7->Parameters->AddWithValue("@tableType", tableType);
					cmd7->Parameters->AddWithValue("@purchaseAmount", purchaseAmount);
					cmd7->ExecuteNonQuery();
				}

				// Commit the transaction
				transaction->Commit();
				MessageBox::Show("Purchase transaction was successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				currentUser->budget -= totalCost;
				// Refresh the user balance on the UI
				LoadData();  // Refresh the balance after purchase

			}
			catch (Exception^ ex) {
				// Rollback the transaction in case of error
				transaction->Rollback();
				MessageBox::Show("An error occurred during the transaction: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			connection->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
