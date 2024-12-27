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
	/// Summary for HarvestForm
	/// </summary>
	public ref class HarvestForm : public System::Windows::Forms::Form
	{
	public:
		User^ currentUser;
		HarvestForm(User^ user)
		{
			InitializeComponent();
			currentUser = user;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HarvestForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HarvestForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
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
			this->panel1->Location = System::Drawing::Point(-1, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1456, 114);
			this->panel1->TabIndex = 4;
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
			this->pictureBox2->Click += gcnew System::EventHandler(this, &HarvestForm::pictureBox2_Click);
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
			this->pictureBox1->Click += gcnew System::EventHandler(this, &HarvestForm::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Dubai", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(618, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(294, 73);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Harvest Crops";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label5->ForeColor = System::Drawing::Color::Gray;
			this->label5->Location = System::Drawing::Point(127, 280);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(445, 51);
			this->label5->TabIndex = 17;
			this->label5->Text = L"You don\'t have a field.";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->groupBox1->ForeColor = System::Drawing::Color::Gray;
			this->groupBox1->Location = System::Drawing::Point(12, 120);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(741, 651);
			this->groupBox1->TabIndex = 24;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Field Section";
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
			this->dataGridView1->Location = System::Drawing::Point(760, 131);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(682, 409);
			this->dataGridView1->TabIndex = 25;
			this->dataGridView1->SelectionChanged += gcnew System::EventHandler(this, &HarvestForm::dataGridView1_SelectionChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label7->ForeColor = System::Drawing::Color::Orange;
			this->label7->Location = System::Drawing::Point(1276, 696);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 25);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Max";
			this->label7->Click += gcnew System::EventHandler(this, &HarvestForm::label7_Click);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox1->Location = System::Drawing::Point(1100, 652);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(232, 41);
			this->textBox1->TabIndex = 26;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &HarvestForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &HarvestForm::textBox1_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Gray;
			this->label3->Location = System::Drawing::Point(869, 654);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(209, 31);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Harvest Amount";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Gray;
			this->label2->Location = System::Drawing::Point(1025, 571);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(166, 31);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Crops Name";
			// 
			// HarvestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(192, 192);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1455, 783);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"HarvestForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HarvestForm";
			this->Load += gcnew System::EventHandler(this, &HarvestForm::HarvestForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

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
	private: System::Void HarvestForm_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->RowHeadersVisible = false;
		dataGridView1->ReadOnly = true;
		dataGridView1->AllowUserToResizeColumns = false;
		dataGridView1->AllowUserToResizeRows = false;
		dataGridView1->MultiSelect = false;
		dataGridView1->AllowUserToAddRows = false;

		SqlConnection^ conn = gcnew SqlConnection("Data Source=MERT;Initial Catalog=farming_system;Integrated Security=True");

		// Field butonlarý yükle
		SqlCommand^ fieldCmd = gcnew SqlCommand("SELECT field_parcel FROM field WHERE farmers_id = @user_id", conn);
		fieldCmd->Parameters->AddWithValue("@user_id", currentUser->id);

		try {
			conn->Open();
			SqlDataReader^ reader = fieldCmd->ExecuteReader();

			bool hasData = false;
			int buttonWidth = 50;
			int buttonHeight = 50;
			int spacing = 10;
			int verticalSpacing = 10;
			int maxButtonsPerRow = 6;

			int count = 0;
			while (reader->Read()) {
				hasData = true;
				String^ parcelName = reader["field_parcel"]->ToString();

				Button^ newButton = gcnew Button();
				newButton->Size = System::Drawing::Size(buttonWidth, buttonHeight);
				newButton->Margin = System::Windows::Forms::Padding(0);
				newButton->Font = gcnew System::Drawing::Font(L"Dubai", 10, FontStyle::Bold);
				newButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				newButton->TextAlign = ContentAlignment::MiddleCenter;
				newButton->Text = parcelName;
				newButton->ForeColor = System::Drawing::Color::White;
				newButton->BackColor = System::Drawing::Color::Green;
				newButton->Click += gcnew EventHandler(this, &HarvestForm::ParcelButton_Click);

				groupBox1->Controls->Add(newButton);

				int row = count / maxButtonsPerRow;
				int col = count % maxButtonsPerRow;

				int x = col * (buttonWidth + spacing) + 10;
				int y = row * (buttonHeight + verticalSpacing) + 20;

				newButton->Location = System::Drawing::Point(x, y);
				count++;
			}

			label5->Visible = !hasData;

			reader->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error loading fields: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// Inventory tablosunu doldur
		SqlCommand^ inventoryCmd = gcnew SqlCommand("SELECT item_type AS [Type], amount AS [Amount] FROM inventory WHERE farmers_id = @user_id AND table_type = 'crops'", conn);
		inventoryCmd->Parameters->AddWithValue("@user_id", currentUser->id);

		try {
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(inventoryCmd);
			DataTable^ dataTable = gcnew DataTable();
			adapter->Fill(dataTable);

			dataGridView1->DataSource = dataTable;

			int totalWidth = dataGridView1->Width;
			int columnCount = dataTable->Columns->Count;
			int columnWidth = totalWidth / columnCount;

			for each (DataGridViewColumn ^ column in dataGridView1->Columns) {
				column->Width = columnWidth;
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error loading inventory data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			conn->Close();
		}
	}

	private: System::Void ParcelButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ clickedButton = safe_cast<Button^>(sender);
		MessageBox::Show("You clicked on parcel: " + clickedButton->Text, "Parcel Selected", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void dataGridView1_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Clear();
		if (dataGridView1->SelectedRows->Count > 0) { // Seçili bir satýr var mý kontrolü
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0]; // Ýlk seçili satýrý al
			if (selectedRow->Cells["Type"]->Value != nullptr) { // "Name" boþsa "Type" kontrol edilir
				label2->Text = selectedRow->Cells["Type"]->Value->ToString(); // "Type" deðerini `label2`ye ata
			}
			else {
				label2->Text = ""; // Her iki deðer de boþsa `label2`yi temizle
				textBox1->Clear();
			}
		}
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)8 && e->KeyChar != (char)13) {
			e->Handled = true; // Geçersiz tuþ basýldýðýnda iþlemi engeller
		}
	}
	private: System::Double maxAmount;
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->SelectedRows->Count > 0) {
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];

			if (selectedRow->Cells["Amount"]->Value != nullptr) {
				textBox1->Text = selectedRow->Cells["Amount"]->Value->ToString();
				maxAmount = Convert::ToDouble(selectedRow->Cells["Amount"]->Value);
			}
		}
	}
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
};
}
