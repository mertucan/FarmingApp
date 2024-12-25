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
	/// Summary for MyFields
	/// </summary>
	public ref class MyFields : public System::Windows::Forms::Form
	{
	public:
		User^ currentUser;
		MyFields(User^ user)
		{
			InitializeComponent();
			currentUser = user;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyFields()
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
	private: System::Windows::Forms::Button^ button8;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFields::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->panel1->Location = System::Drawing::Point(-235, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1456, 114);
			this->panel1->TabIndex = 1;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(247, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(35, 35);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyFields::pictureBox2_Click);
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
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyFields::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Dubai", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(630, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(206, 73);
			this->label1->TabIndex = 1;
			this->label1->Text = L"My Fields";
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
			this->dataGridView1->Location = System::Drawing::Point(107, 142);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(770, 409);
			this->dataGridView1->TabIndex = 2;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Firebrick;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Dubai", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(671, 557);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(206, 64);
			this->button8->TabIndex = 10;
			this->button8->Text = L"Sell";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyFields::button8_Click);
			// 
			// MyFields
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(192, 192);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(985, 651);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyFields";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyFields";
			this->Load += gcnew System::EventHandler(this, &MyFields::MyFields_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void MyFields_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->ReadOnly = true;
		dataGridView1->AllowUserToResizeColumns = false;
		dataGridView1->AllowUserToResizeRows = false;
		dataGridView1->MultiSelect = false;
		dataGridView1->AllowUserToAddRows = false;

		// Veritabaný baðlantýsý
		SqlConnection^ connection = gcnew SqlConnection("Data Source=MERT;Initial Catalog=farming_system;Integrated Security=True"); // Baðlantý dizesini deðiþtirin
		connection->Open();

		SqlCommand^ command = gcnew SqlCommand("SELECT field_parcel, area, price FROM field WHERE farmers_id = @farmersId", connection);
		command->Parameters->AddWithValue("@farmersId", currentUser->id);

		SqlDataReader^ reader = command->ExecuteReader();

		dataGridView1->Rows->Clear();

		if (dataGridView1->Columns->Count == 0) {
			dataGridView1->Columns->Add("Parcel", "Field Parcel");
			dataGridView1->Columns->Add("Area", "Area");
			dataGridView1->Columns->Add("Price", "Price");
		}

		while (reader->Read()) {
			int fieldParcel = reader->GetInt32(0);
			int area = reader->GetInt32(1);
			int price = reader->GetInt32(2);
			dataGridView1->Rows->Add(fieldParcel.ToString(), area.ToString(), price.ToString());
		}
		connection->Close();
	}
	public: bool switchToTransfer = false;
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToTransfer = true;
		this->Hide();
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->SelectedRows->Count > 0) {
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];

			String^ fieldParcel = selectedRow->Cells["Parcel"]->Value->ToString();
			int price = Convert::ToInt32(selectedRow->Cells["Price"]->Value);

			// Fiyatýn %25 azaltýlmýþ deðerini hesapla
			int discountedPrice = price - (price * 0.25);

			// Kullanýcýya onay mesajý göster
			System::Windows::Forms::DialogResult result = MessageBox::Show(
				String::Format("Are you sure you want to sell this item at a 25% reduced price of {0}?", discountedPrice),
				"Confirm Sale",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Question
			);

			if (result == System::Windows::Forms::DialogResult::Yes) {
				SqlConnection^ connection = gcnew SqlConnection("Data Source=MERT;Initial Catalog=farming_system;Integrated Security=True");
				connection->Open();

				// "field_parcel" ile uyuþan kaydýn farmers_id deðerini null yap
				SqlCommand^ updateCommand = gcnew SqlCommand("UPDATE field SET farmers_id = NULL WHERE field_parcel = @fieldParcel AND farmers_id = @farmersId", connection);
				updateCommand->Parameters->AddWithValue("@fieldParcel", fieldParcel);
				updateCommand->Parameters->AddWithValue("@farmersId", currentUser->id);
				updateCommand->ExecuteNonQuery();

				// Kullanýcýnýn bütçesini artýr
				SqlCommand^ updateBudgetCommand = gcnew SqlCommand("UPDATE farmers SET budget = budget + @amount WHERE farmers_id = @farmers_id", connection);
				updateBudgetCommand->Parameters->AddWithValue("@amount", discountedPrice);
				updateBudgetCommand->Parameters->AddWithValue("@farmers_id", currentUser->id);
				updateBudgetCommand->ExecuteNonQuery();

				// Yeni bütçeyi almak için sorgu
				SqlCommand^ getBudgetCommand = gcnew SqlCommand("SELECT budget FROM farmers WHERE farmers_id = @farmers_id", connection);
				getBudgetCommand->Parameters->AddWithValue("@farmers_id", currentUser->id);
				SqlDataReader^ reader = getBudgetCommand->ExecuteReader();
				double newBudget = 0;

				if (reader->Read()) {
					// Decimal'den double'a dönüþtürme
					newBudget = (double)reader->GetDecimal(0);  // Yeni bütçeyi al
				}
				reader->Close();

				// currentUser->budget'ý güncelle
				currentUser->budget = newBudget;

				// Baðlantýyý kapat
				connection->Close();

				// Datagrid'i yeniden yükle
				MyFields_Load(sender, e);

				// Baþarý mesajý göster
				MessageBox::Show(
					String::Format("The item has been sold and its reduced price of ${0} has been added to your budget. Current Balance: ${1}", discountedPrice, currentUser->budget.ToString("0.00")),
					"Sale Success",
					MessageBoxButtons::OK,
					MessageBoxIcon::Information
				);
			}
		}
		else {
			MessageBox::Show("Please select an item to delete.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
