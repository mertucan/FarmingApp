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
	/// Summary for ForSaleForm
	/// </summary>
	public ref class ForSaleForm : public System::Windows::Forms::Form
	{
	public:
		User^ currentUser;
		ForSaleForm(User^ user)
		{
			InitializeComponent();
			currentUser = user;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ForSaleForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ForSaleForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
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
			this->dataGridView1->Location = System::Drawing::Point(107, 142);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(770, 393);
			this->dataGridView1->TabIndex = 4;
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
			this->panel1->TabIndex = 3;
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
			this->pictureBox2->Click += gcnew System::EventHandler(this, &ForSaleForm::pictureBox2_Click);
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
			this->pictureBox1->Click += gcnew System::EventHandler(this, &ForSaleForm::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Dubai", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(596, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(294, 73);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Items For Sale";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Firebrick;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Dubai", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(671, 554);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(206, 64);
			this->button8->TabIndex = 9;
			this->button8->Text = L"Delete";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &ForSaleForm::button8_Click);
			// 
			// ForSaleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(192, 192);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(985, 651);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ForSaleForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ForSaleForm";
			this->Load += gcnew System::EventHandler(this, &ForSaleForm::ForSaleForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public: bool switchToTransfer = false;
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToTransfer = true;
		this->Hide();
	}
	private: System::Void ForSaleForm_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->ReadOnly = true;
		dataGridView1->AllowUserToResizeColumns = false;
		dataGridView1->AllowUserToResizeRows = false;
		dataGridView1->MultiSelect = false;
		dataGridView1->AllowUserToAddRows = false;

		// Veritabaný baðlantýsý
		SqlConnection^ connection = gcnew SqlConnection("Data Source=MERT;Initial Catalog=farming_system;Integrated Security=True");
		connection->Open();

		SqlCommand^ command = gcnew SqlCommand("SELECT item_type, amount, price FROM market WHERE selling_user_id = @selling_user_id", connection);
		command->Parameters->AddWithValue("@selling_user_id", currentUser->id);

		SqlDataReader^ reader = command->ExecuteReader();

		dataGridView1->Rows->Clear();

		if (dataGridView1->Columns->Count == 0) {
			dataGridView1->Columns->Add("Item Type", "Item Type");
			dataGridView1->Columns->Add("Amount", "Amount");
			dataGridView1->Columns->Add("Price", "Price");
		}

		while (reader->Read()) {
			String^ itemType = reader->GetString(0);
			int amount = reader->GetInt32(1);
			Decimal price = reader->GetDecimal(2);

			// Fiyatý iki ondalýklý formatta göstermek
			dataGridView1->Rows->Add(itemType, amount.ToString(), price.ToString("F2"));
		}

		connection->Close();
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->SelectedRows->Count > 0) {
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
			String^ itemType = selectedRow->Cells["Item Type"]->Value->ToString();
			int amount = Int32::Parse(selectedRow->Cells["Amount"]->Value->ToString());

			SqlConnection^ connection = gcnew SqlConnection("Data Source=MERT;Initial Catalog=farming_system;Integrated Security=True");
			connection->Open();

			// market tablosundan silme iþlemi
			SqlCommand^ deleteCommand = gcnew SqlCommand("DELETE FROM market WHERE item_type = @item_type AND selling_user_id = @selling_user_id", connection);
			deleteCommand->Parameters->AddWithValue("@item_type", itemType);
			deleteCommand->Parameters->AddWithValue("@selling_user_id", currentUser->id);
			deleteCommand->ExecuteNonQuery();

			// inventory tablosunda güncelleme iþlemi
			SqlCommand^ updateCommand = gcnew SqlCommand("UPDATE inventory SET amount = amount + @amount WHERE item_type = @item_type AND farmers_id = @farmers_id", connection);
			updateCommand->Parameters->AddWithValue("@amount", amount);
			updateCommand->Parameters->AddWithValue("@item_type", itemType);
			updateCommand->Parameters->AddWithValue("@farmers_id", currentUser->id);
			updateCommand->ExecuteNonQuery();

			MessageBox::Show("The item has been deleted from the market and its quantity has been added to your inventory.",
				"Success",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);

			connection->Close();

			// DataGridView'i güncelle
			ForSaleForm_Load(sender, e);
		}
		else {
			MessageBox::Show("Please select an item to delete.");
		}
	}
};
}
