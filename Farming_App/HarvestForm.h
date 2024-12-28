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
	private: System::Collections::Generic::Dictionary<String^, Double>^ buttonData;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;


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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
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
			this->label7->Location = System::Drawing::Point(1281, 682);
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
			this->textBox1->Location = System::Drawing::Point(1105, 638);
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
			this->label3->Location = System::Drawing::Point(874, 640);
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
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(826, 724);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(558, 25);
			this->label4->TabIndex = 30;
			this->label4->Text = L"You must stay on this page for the harvesting to process.";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(763, 749);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(679, 25);
			this->label6->TabIndex = 31;
			this->label6->Text = L"If you leave, the process will be canceled and your product will be lost";
			// 
			// HarvestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(192, 192);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1455, 783);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
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
		// Ask the user for confirmation before proceeding
		System::Windows::Forms::DialogResult result = MessageBox::Show("All harvests will be canceled and deleted. Are you sure you want to leave?",
			"Exit Confirmation",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning);

		// If user clicks 'Yes', delete harvest data and proceed
		if (result == System::Windows::Forms::DialogResult::Yes) {
			DeleteHarvestData();
			this->Close();
		}
	}
	private: void DeleteHarvestData()
	{
		SqlConnection^ conn = gcnew SqlConnection("Data Source=MERT;Initial Catalog=farming_system;Integrated Security=True");

		String^ deleteQuery = "DELETE FROM harvest"; // Delete all records from harvest table
		SqlCommand^ deleteCmd = gcnew SqlCommand(deleteQuery, conn);

		try {
			conn->Open();
			deleteCmd->ExecuteNonQuery(); // Execute the query
			conn->Close();

			MessageBox::Show("All harvest records have been deleted.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error deleting harvest records: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	public: bool switchToTransfer = false;
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Ask the user for confirmation before proceeding
		System::Windows::Forms::DialogResult result = MessageBox::Show("All harvests will be canceled and deleted. Are you sure you want to leave?",
			"Exit Confirmation",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning);

		// If user clicks 'Yes', delete harvest data and proceed
		if (result == System::Windows::Forms::DialogResult::Yes) {
			DeleteHarvestData();
			this->switchToTransfer = true;
			this->Hide();
		}
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
		SqlCommand^ fieldCmd = gcnew SqlCommand("SELECT field_parcel, area FROM field WHERE farmers_id = @user_id", conn);
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
				newButton->Tag = newButton->Text;
				newButton->Click += gcnew EventHandler(this, &HarvestForm::ParcelButton_Click);
				newButton->Click += gcnew EventHandler(this, &HarvestForm::Button_Click_After_Done);

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

		LoadDataGridView();
	}
	private: String^ tagValue;
	private: System::Void ParcelButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ clickedButton = dynamic_cast<Button^>(sender);

		if (clickedButton != nullptr && clickedButton->Text != "OK") {
			int tagValueInt = 0;
			int textBoxValue = 0;

			// Butonun Tag deðerini kontrol et ve dönüþtür
			if (!String::IsNullOrWhiteSpace(clickedButton->Tag->ToString()) &&
				Int32::TryParse(clickedButton->Tag->ToString(), tagValueInt) &&
				!String::IsNullOrWhiteSpace(textBox1->Text) &&
				Int32::TryParse(textBox1->Text, textBoxValue) && textBoxValue > 0) {

				// Timer baþlat
				Timer^ timer = gcnew Timer();
				timer->Interval = 1000; // 1 saniye

				// Geri sayým süresi: Tag deðeri * TextBox deðeri
				int countdownTime = 5 * textBoxValue;

				// Calculate minutes and seconds
				int minutes = countdownTime / 60;
				int seconds = countdownTime % 60;

				timer->Tag = gcnew Tuple<Button^, int>(clickedButton, countdownTime);

				// Veritabanýna veri ekleme iþlemi
				try {
					// Baðlantý dizesi (kendi veritabaný baðlantýnýzý kullanýn)
					String^ connectionString = "Data Source=MERT;Initial Catalog=farming_system;Integrated Security=True";
					SqlConnection^ connection = gcnew SqlConnection(connectionString);

					// Sorgu: Harvest tablosuna veri ekleme
					String^ query = "INSERT INTO harvest (field_parcel, amount, time, item_type) VALUES (@field_parcel, @amount, @time, @item_type)";
					SqlCommand^ command = gcnew SqlCommand(query, connection);

					// Parametreler
					command->Parameters->AddWithValue("@field_parcel", tagValueInt);
					command->Parameters->AddWithValue("@amount", textBoxValue);
					command->Parameters->AddWithValue("@time", countdownTime);
					command->Parameters->AddWithValue("@item_type", label2->Text);

					// Baðlantýyý aç ve sorguyu çalýþtýr
					connection->Open();
					command->ExecuteNonQuery();
					connection->Close();

					// Inventory tablosunda amount deðerini güncelle
					String^ queryUpdate = "UPDATE inventory SET amount = amount - @amount WHERE farmers_id = @farmers_id AND item_type = @item_type";
					SqlCommand^ commandUpdate = gcnew SqlCommand(queryUpdate, connection);

					// Parametreler
					commandUpdate->Parameters->AddWithValue("@amount", textBoxValue);
					commandUpdate->Parameters->AddWithValue("@farmers_id", currentUser->id);  // currentUser->id ile kullanýcýyý tanýmla
					commandUpdate->Parameters->AddWithValue("@item_type", label2->Text);

					// Baðlantýyý tekrar aç ve güncelleme iþlemi yap
					connection->Open();
					commandUpdate->ExecuteNonQuery();
					connection->Close();

					// DataGridView'i yeniden yükle
					LoadDataGridView();
				}
				catch (Exception^ ex) {
					MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

				// Butonun durumunu deðiþtir ve geri sayýmý baþlatmadan önce remainingTime deðerini göster
				clickedButton->Enabled = false; // Butonu devre dýþý býrak
				clickedButton->BackColor = System::Drawing::Color::Red; // Arka plan rengini deðiþtir
				clickedButton->ForeColor = System::Drawing::Color::White;
				clickedButton->Text = String::Format("{0}:{1:D2}", minutes, seconds);

				// Timer olay iþleyicisi ekle
				timer->Tick += gcnew EventHandler(this, &HarvestForm::Timer_Tick);

				// Timer'ý baþlat
				timer->Start();
			}
			else {
				// Hatalý giriþ varsa uyarý göster
				MessageBox::Show("You forgot to write harvest amount!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void Timer_Tick(System::Object^ sender, System::EventArgs^ e) {
		Timer^ timer = dynamic_cast<Timer^>(sender);
		if (timer != nullptr) {
			Tuple<Button^, int>^ data = dynamic_cast<Tuple<Button^, int>^>(timer->Tag);
			Button^ button = data->Item1;
			int remainingTime = data->Item2;

			if (remainingTime > 1) {
				remainingTime--;

				// Calculate minutes and seconds
				int minutes = remainingTime / 60;
				int seconds = remainingTime % 60;

				// Format the time in "minutes:seconds"
				button->Text = String::Format("{0}:{1:D2}", minutes, seconds);

				// Update the timer's Tag with the new remaining time
				timer->Tag = gcnew Tuple<Button^, int>(button, remainingTime);
			}
			else {
				timer->Stop();
				button->Text = "OK";
				button->BackColor = System::Drawing::Color::Green;
				button->ForeColor = System::Drawing::Color::White;
				button->Enabled = true;
			}
		}
	}
	private: System::Void Button_Click_After_Done(System::Object^ sender, System::EventArgs^ e) {
		Button^ clickedButton = dynamic_cast<Button^>(sender);

		if (clickedButton != nullptr && clickedButton->Text == "OK") {
			try {
				// 1. Butonun tag deðerini tekrar üstüne yazdýr
				clickedButton->Text = clickedButton->Tag->ToString();

				// 2. Þansa baðlý çarpan ayarlama
				Random^ rand = gcnew Random();
				int chance = rand->Next(1, 101); // 1 ile 100 arasýnda rastgele sayý
				int multiplier;

				if (chance <= 39) multiplier = 1;
				else if (chance <= 78) multiplier = 2;
				else if (chance <= 98) multiplier = 3;
				else multiplier = 4;

				// Veritabaný baðlantýsý
				String^ connectionString = "Data Source=MERT;Initial Catalog=farming_system;Integrated Security=True";
				SqlConnection^ connection = gcnew SqlConnection(connectionString);
				connection->Open();

				// 3. Harvest tablosundaki amount deðerini çek ve çarpanla çarp
				String^ queryHarvest = "SELECT amount, item_type, field_parcel FROM harvest WHERE field_parcel = @field_parcel";
				SqlCommand^ commandHarvest = gcnew SqlCommand(queryHarvest, connection);
				commandHarvest->Parameters->AddWithValue("@field_parcel", clickedButton->Tag->ToString());

				SqlDataReader^ reader = commandHarvest->ExecuteReader();
				if (reader->Read()) {
					int harvestAmount = Convert::ToInt32(reader["amount"]);
					String^ itemType = reader["item_type"]->ToString();
					String^ fieldParcel = reader["field_parcel"]->ToString();
					int newAmount = harvestAmount * multiplier;
					reader->Close();

					// 4. Field tablosundaki area bilgisini al
					String^ queryField = "SELECT area FROM field WHERE field_parcel = @field_parcel";
					SqlCommand^ commandField = gcnew SqlCommand(queryField, connection);
					commandField->Parameters->AddWithValue("@field_parcel", fieldParcel);
					SqlDataReader^ fieldReader = commandField->ExecuteReader();

					int area = 0;
					if (fieldReader->Read()) {
						area = fieldReader->GetInt32(0);
					}
					fieldReader->Close();

					// Çiftlik alanýný newAmount ile çarp
					int totalProduction = area * newAmount;

					// 5. Inventory tablosunu güncelle
					String^ queryInventory = "UPDATE inventory SET amount = amount + @newAmount "
						"WHERE farmers_id = @farmers_id AND item_type = @item_type";
					SqlCommand^ commandInventory = gcnew SqlCommand(queryInventory, connection);
					commandInventory->Parameters->AddWithValue("@newAmount", totalProduction);
					commandInventory->Parameters->AddWithValue("@farmers_id", currentUser->id);
					commandInventory->Parameters->AddWithValue("@item_type", itemType);
					commandInventory->ExecuteNonQuery();

					String^ message;
					if (multiplier == 1) {
						message = String::Format("You earned {0} from {1} harvest. You got back what you planted, but it wasn't very productive! \n\nThe field area is {2}.", totalProduction, itemType, area);
					}
					else if (multiplier == 2) {
						message = String::Format("You earned {0} from {1} harvest! You got 2 times what you planted, it was a very productive harvest! \n\nThe field area is {2}.", totalProduction, itemType, area);
					}
					else if (multiplier == 3) {
						message = String::Format("You earned {0} from {1} harvest! You got 3 times what you planted and the soil sends its thanks. \n\nThe field area is {2}.", totalProduction, itemType, area);
					}
					else if (multiplier == 4) {
						message = String::Format("You earned {0} from {1} harvest! You got 4 times what you planted, it couldn't have been better! \n\nThe field area is {2}.", totalProduction, itemType, area);
					}

					MessageBox::Show(message, "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else {
					MessageBox::Show("Harvest data not found for this field parcel.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					connection->Close();
					return;
				}

				// 6. Harvest tablosundan eþleþen veriyi sil
				String^ queryDelete = "DELETE FROM harvest WHERE field_parcel = @field_parcel";
				SqlCommand^ commandDelete = gcnew SqlCommand(queryDelete, connection);
				commandDelete->Parameters->AddWithValue("@field_parcel", clickedButton->Tag->ToString());
				commandDelete->ExecuteNonQuery();

				connection->Close();

				// 7. DataGridView'i tekrar yükle
				LoadDataGridView();
			}
			catch (Exception^ ex) {
				MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void LoadDataGridView() {
		SqlConnection^ conn = gcnew SqlConnection("Data Source=MERT;Initial Catalog=farming_system;Integrated Security=True");
		// Inventory tablosunu doldur
		SqlCommand^ inventoryCmd = gcnew SqlCommand("SELECT item_type AS [Type], amount AS [Amount] FROM inventory WHERE farmers_id = @user_id AND table_type = 'crops' AND amount != 0", conn);
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
	private: System::String^ selectedType;
	private: System::Void dataGridView1_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Clear();
		if (dataGridView1->SelectedRows->Count > 0) {
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
			if (selectedRow->Cells["Type"]->Value != nullptr) {
				selectedType = selectedRow->Cells["Type"]->Value->ToString(); // Type deðerini sakla
				label2->Text = selectedType; // Label'e yaz
			}
			else {
				label2->Text = "";
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