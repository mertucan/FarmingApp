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
	/// Summary for MyInventory
	/// </summary>
	public ref class MyInventory : public System::Windows::Forms::Form
	{
	public:
		User^ currentUser;
		MyInventory(User^ user)
		{
			InitializeComponent();
			currentUser = user;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyInventory()
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
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyInventory::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
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
			this->panel1->Location = System::Drawing::Point(-236, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1456, 114);
			this->panel1->TabIndex = 2;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(248, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(35, 35);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyInventory::pictureBox2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1173, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(35, 35);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyInventory::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Dubai", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(630, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(207, 73);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Inventory";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Dubai", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Dubai", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::ForestGreen;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->Location = System::Drawing::Point(13, 165);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(492, 409);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->SelectionChanged += gcnew System::EventHandler(this, &MyInventory::dataGridView1_SelectionChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->groupBox1->ForeColor = System::Drawing::Color::Gray;
			this->groupBox1->Location = System::Drawing::Point(525, 165);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(448, 409);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Selling Section";
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox2->Location = System::Drawing::Point(210, 224);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(232, 41);
			this->textBox2->TabIndex = 19;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyInventory::textBox2_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Gray;
			this->label4->Location = System::Drawing::Point(6, 224);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(203, 31);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Price (Per Item)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label7->ForeColor = System::Drawing::Color::Orange;
			this->label7->Location = System::Drawing::Point(386, 171);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 25);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Max";
			this->label7->Click += gcnew System::EventHandler(this, &MyInventory::label7_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Dubai", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(119, 315);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(232, 64);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Sell";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyInventory::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Gray;
			this->label2->Location = System::Drawing::Point(150, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 31);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Item Name";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox1->Location = System::Drawing::Point(210, 127);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(232, 41);
			this->textBox1->TabIndex = 14;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyInventory::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyInventory::textBox1_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Gray;
			this->label3->Location = System::Drawing::Point(40, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 31);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Amount";
			// 
			// MyInventory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(192, 192);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(985, 651);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyInventory";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyInventory";
			this->Load += gcnew System::EventHandler(this, &MyInventory::MyInventory_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void MyInventory_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->RowHeadersVisible = false;
		dataGridView1->ReadOnly = true;
		dataGridView1->AllowUserToResizeColumns = false;
		dataGridView1->AllowUserToResizeRows = false;
		dataGridView1->MultiSelect = false;
		dataGridView1->AllowUserToAddRows = false;

		LoadInventoryData();
	}
	public: bool switchToTransfer = false;
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToTransfer = true;
		this->Hide();
	}
	private: System::Void dataGridView1_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Clear();
		textBox2->Clear();
		if (dataGridView1->SelectedRows->Count > 0) { // Seçili bir satýr var mý kontrolü
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0]; // Ýlk seçili satýrý al
			if (selectedRow->Cells["Item Type"]->Value != nullptr) { // "Name" boþsa "Type" kontrol edilir
				label2->Text = selectedRow->Cells["Item Type"]->Value->ToString(); // "Type" deðerini `label2`ye ata
			}
			else {
				label2->Text = ""; // Her iki deðer de boþsa `label2`yi temizle
				textBox1->Clear();
				textBox2->Clear();
			}
		}

	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)8 && e->KeyChar != (char)13) {
			e->Handled = true; // Geçersiz tuþ basýldýðýnda iþlemi engeller
		}
	}
	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)8 && e->KeyChar != (char)13 && e->KeyChar != ',') {
			e->Handled = true; // Geçersiz tuþ basýldýðýnda iþlemi engeller
		}
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->SelectedRows->Count > 0) {
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];

			if (selectedRow->Cells["Amount"]->Value != nullptr) {
				textBox1->Text = selectedRow->Cells["Amount"]->Value->ToString();
				maxAmount = Convert::ToDouble(selectedRow->Cells["Amount"]->Value);
			}
		}
	}
	private: System::Double maxAmount;

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		double quantity = 0.0;
		if (Double::TryParse(textBox1->Text, quantity)) {
			// DataGridView'deki seçili satýrý kontrol et
			if (dataGridView1->SelectedRows->Count > 0) {
				DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];

				// Stok deðerini al
				int stockValue = Convert::ToInt32(selectedRow->Cells["Amount"]->Value); // Assuming "Stock" column holds stock value

				// Girilen miktar stok deðerini aþarsa, TextBox'ý stok deðeri ile sýnýrla
				if (quantity > stockValue) {
					textBox1->Text = stockValue.ToString();  // Set the TextBox to the max stock value
					quantity = stockValue;  // Ensure quantity is limited to stock
				}

				if (selectedRow->Cells["Amount"]->Value != nullptr) {
					double price = Convert::ToDouble(selectedRow->Cells["Amount"]->Value);
					double totalCost = price * quantity;
				}
			}
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Step 1: Retrieve the data from the form controls
		int sellingUserId = currentUser->id; // Assume currentUser has an 'id' property
		String^ itemType = dataGridView1->CurrentRow->Cells["Item Type"]->Value->ToString(); // Selected item type from DataGridView
		int amount = Int32::Parse(textBox1->Text); // Amount from textBox1
		Decimal price = Decimal::Parse(textBox2->Text); // Price from textBox2
		String^ tableType = dataGridView1->CurrentRow->Cells["category"]->Value->ToString(); // Get the 'category' value from DataGridView

		// Step 2: Insert the sale record into the 'market' table including the 'table_type' from 'category'
		String^ insertQuery = "INSERT INTO market (selling_user_id, item_type, amount, price, table_type) VALUES (@sellingUserId, @itemType, @amount, @price, @tableType)";
		SqlConnection^ connection = gcnew SqlConnection("Data Source=MERT;Initial Catalog=farming_system;Integrated Security=True"); // Use your connection string here
		SqlCommand^ insertCommand = gcnew SqlCommand(insertQuery, connection);

		insertCommand->Parameters->AddWithValue("@sellingUserId", sellingUserId);
		insertCommand->Parameters->AddWithValue("@itemType", itemType);
		insertCommand->Parameters->AddWithValue("@amount", amount);
		insertCommand->Parameters->AddWithValue("@price", price);
		insertCommand->Parameters->AddWithValue("@tableType", tableType); // Use the 'category' value as table_type

		try {
			connection->Open();
			insertCommand->ExecuteNonQuery();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error inserting into market table: " + ex->Message);
		}
		finally {
			connection->Close();
		}

		// Step 3: Update the 'inventory' table by subtracting the amount sold
		String^ updateQuery = "UPDATE inventory SET amount = amount - @soldAmount WHERE farmers_id = @farmersId AND item_type = @itemType";
		SqlCommand^ updateCommand = gcnew SqlCommand(updateQuery, connection);

		updateCommand->Parameters->AddWithValue("@soldAmount", amount);
		updateCommand->Parameters->AddWithValue("@farmersId", sellingUserId);
		updateCommand->Parameters->AddWithValue("@itemType", itemType);

		try {
			connection->Open();
			updateCommand->ExecuteNonQuery();
			MessageBox::Show("Item added to community market!");
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error updating inventory: " + ex->Message);
		}
		finally {
			connection->Close();
		}

		// Step 4: Refresh the DataGridView to show updated inventory
		LoadInventoryData(); // Implement this function to reload data into dataGridView1
	}

	private: System::Void LoadInventoryData() {
		SqlConnection^ connection = gcnew SqlConnection("Data Source=MERT;Initial Catalog=farming_system;Integrated Security=True");
		try {
			connection->Open();

			// SQL komutu
			SqlCommand^ command = gcnew SqlCommand(
				"SELECT item_type AS 'Item Type', table_type AS 'Category', amount AS 'Amount' FROM inventory WHERE farmers_id = @farmersId AND amount > 0",
				connection
			);
			command->Parameters->AddWithValue("@farmersId", Convert::ToInt32(currentUser->id));

			// DataTable ile DataGridView baðlama
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
			DataTable^ table = gcnew DataTable();
			adapter->Fill(table);

			// DataGridView baðlama
			dataGridView1->DataSource = table;

			// Sütun geniþliklerini ve stilleri ayarla
			for each (DataGridViewColumn ^ column in dataGridView1->Columns) {
				column->AutoSizeMode = DataGridViewAutoSizeColumnMode::Fill;
				column->HeaderCell->Style->Font = gcnew System::Drawing::Font("Dubai", 12, System::Drawing::FontStyle::Bold);
				column->SortMode = DataGridViewColumnSortMode::Automatic; // Sýralama aktif
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}
	}
};
}
