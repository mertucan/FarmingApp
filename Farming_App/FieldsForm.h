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
	/// Summary for FieldsForm
	/// </summary>
	public ref class FieldsForm : public System::Windows::Forms::Form
	{
	public:
		User^ currentUser;
		FieldsForm(User^ user)
		{
			InitializeComponent();
			currentUser = user;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FieldsForm()
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
	private: System::Windows::Forms::Label^ balanceLabel;

	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FieldsForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->balanceLabel = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->panel1->TabIndex = 5;
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
			this->pictureBox2->Click += gcnew System::EventHandler(this, &FieldsForm::pictureBox2_Click);
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
			this->pictureBox1->Click += gcnew System::EventHandler(this, &FieldsForm::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Dubai", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(680, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 73);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Fields";
			// 
			// balanceLabel
			// 
			this->balanceLabel->AutoSize = true;
			this->balanceLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->balanceLabel->ForeColor = System::Drawing::Color::Gray;
			this->balanceLabel->Location = System::Drawing::Point(73, 132);
			this->balanceLabel->Name = L"balanceLabel";
			this->balanceLabel->Size = System::Drawing::Size(277, 37);
			this->balanceLabel->TabIndex = 6;
			this->balanceLabel->Text = L"Your balance: $0";
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(80, 194);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1292, 451);
			this->panel2->TabIndex = 7;
			// 
			// FieldsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(192, 192);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1455, 783);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->balanceLabel);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FieldsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FieldsForm";
			this->Load += gcnew System::EventHandler(this, &FieldsForm::FieldsForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	SqlConnection^ connection = gcnew SqlConnection("Data Source=MERT;Initial Catalog=farming_system;Integrated Security=True");

	private: System::Void FieldsForm_Load(System::Object^ sender, System::EventArgs^ e) {
		InitializeFieldGrid();
		UpdateBalanceLabel();
	}
	public: bool switchToTransfer = false;
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToTransfer = true;
		this->Hide();
	}
	int GetOwnedFieldsCount(int userId) {
		int count = 0;
		try {
			connection->Open();

			 // Count the number of fields owned by the user
			SqlCommand^ command = gcnew SqlCommand("SELECT COUNT(*) FROM field WHERE farmers_id = @farmersId", connection);
			command->Parameters->AddWithValue("@farmersId", userId);

			count = (int)command->ExecuteScalar();  // Get the count from the query
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred while fetching the owned fields count: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}

		return count;
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	void UpdateBalanceLabel() {
		if (currentUser != nullptr) {
			this->balanceLabel->Text = "Your balance: $" + currentUser->budget.ToString("0.00");
		}
	}

	void InitializeFieldGrid() {
		int buttonIndex = 1;  // Numara baþlat

		// SQL sorgusunu hazýrlýyoruz
		SqlCommand^ command = gcnew SqlCommand("SELECT f.field_parcel, f.farmers_id, f.area, f.price, u.username FROM field f LEFT JOIN farmers u ON f.farmers_id = u.farmers_id", connection);
		connection->Open();
		SqlDataReader^ reader = command->ExecuteReader();

		// Veritabanýndaki verileri okuyoruz
		while (reader->Read()) {
			int fieldParcel = reader->GetInt32(0);
			bool isFarmersIdNull = reader->IsDBNull(1);
			int area = reader->GetInt32(2);
			int price = reader->GetInt32(3); // 'price' sütunu üçüncü sütun
			String^ username = isFarmersIdNull ? nullptr : reader->GetString(4); // 'username' doðru indeks

			Panel^ panel = gcnew Panel();
			panel->Size = System::Drawing::Size(50, 50);  // Panel boyutu 50x50

			Button^ button = gcnew Button();
			button->Size = System::Drawing::Size(50, 50);
			button->Margin = System::Windows::Forms::Padding(0);
			button->Font = gcnew System::Drawing::Font(L"Dubai", 10, FontStyle::Bold);
			button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			button->TextAlign = ContentAlignment::MiddleCenter;
			button->Text = fieldParcel.ToString();
			button->ForeColor = System::Drawing::Color::White;

			ToolTip^ tooltip = gcnew ToolTip();

			if (isFarmersIdNull) {
				button->BackColor = System::Drawing::Color::Green;
				tooltip->SetToolTip(button, "Available \nArea Size: " + area.ToString() + "\nPrice: $" + price.ToString("0.00"));
				button->Tag = price;  // Fiyatý butonun Tag özelliðine kaydediyoruz

				// Týklama olayýný yeþil buton için baðla
				button->Click += gcnew EventHandler(this, &FieldsForm::OnFieldButtonClick);
			}
			else {
				button->BackColor = System::Drawing::Color::Red;
				button->ForeColor = System::Drawing::Color::White;
				tooltip->SetToolTip(button, "Owned by: " + username);

				// Týklama olayýný kýrmýzý buton için baðla
				button->Click += gcnew EventHandler(this, &FieldsForm::OnRedButtonClick);
			}

			panel->Controls->Add(button);
			this->panel2->Controls->Add(panel, (buttonIndex - 1) % 10, (buttonIndex - 1) / 10);

			buttonIndex++;
		}

		connection->Close();
	}

	void OnRedButtonClick(Object^ sender, EventArgs^ e) {
		MessageBox::Show("This field is occupied and cannot be selected.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	void OnFieldButtonClick(Object^ sender, EventArgs^ e) {
		if (currentUser == nullptr) {
			MessageBox::Show("User not set.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		Button^ clickedButton = dynamic_cast<Button^>(sender);
		if (clickedButton != nullptr) {
			if (clickedButton->BackColor == System::Drawing::Color::Red) {
				MessageBox::Show("This field is occupied and cannot be selected.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Fiyatý butonun Tag özelliðinden alýyoruz
			int price = (int)clickedButton->Tag;

			// Check if the user already owns more than 30 fields
			int ownedFieldsCount = GetOwnedFieldsCount(currentUser->id);
			if (ownedFieldsCount >= 30) {
				MessageBox::Show("A user cannot own more than 30 fields!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (currentUser->budget < price) {
				MessageBox::Show("Insufficient balance.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			System::Windows::Forms::DialogResult result = MessageBox::Show("Do you want to purchase this field?",
				"Confirm Purchase",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Question);

			if (result == System::Windows::Forms::DialogResult::Yes) {
				// Alaný satýn al
				if (UpdateFieldOwnership(Int32::Parse(clickedButton->Text))) {
					// Satýn alma baþarýlý
					clickedButton->BackColor = System::Drawing::Color::Red;
					clickedButton->ForeColor = System::Drawing::Color::White;
					toolTip1->SetToolTip(clickedButton, "Owned by: " + currentUser->username);

					// Bütçeyi güncelle
					currentUser->budget -= price;
					UpdateBalanceLabel();  // Bakiyeyi güncelle

					// Veritabanýnda kullanýcý bakiyesini güncelle
					if (UpdateUserBalance()) {
						MessageBox::Show("Field successfully purchased!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
					else {
						MessageBox::Show("Error updating balance in database.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else {
					MessageBox::Show("Purchase failed. Try again later.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
	}

	bool UpdateFieldOwnership(int fieldParcel) {
		bool isUpdated = false;

		try {
			connection->Open();

			SqlCommand^ updateCommand = gcnew SqlCommand(
				"UPDATE field SET farmers_id = @farmersId WHERE field_parcel = @fieldParcel", connection);

			updateCommand->Parameters->AddWithValue("@farmersId", currentUser->id);
			updateCommand->Parameters->AddWithValue("@fieldParcel", fieldParcel);

			int rowsAffected = updateCommand->ExecuteNonQuery();
			isUpdated = (rowsAffected > 0);
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred while updating the field: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}

		return isUpdated;
	}

	void UpdateFarmersIdInField(int fieldParcel) {
		try {

			connection->Open();

			SqlCommand^ updateCommand = gcnew SqlCommand("UPDATE field SET farmers_id = @farmersId WHERE field_parcel = @fieldParcel", connection);

			// Parametreleri ekliyoruz
			updateCommand->Parameters->AddWithValue("@farmersId", currentUser->id);
			updateCommand->Parameters->AddWithValue("@fieldParcel", fieldParcel);

			int rowsAffected = updateCommand->ExecuteNonQuery();

			if (rowsAffected > 0) {
				MessageBox::Show("Field updated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("Field update failed!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}
	}

	bool UpdateUserBalance() {
		bool isUpdated = false;

		try {
			connection->Open();

			SqlCommand^ updateCommand = gcnew SqlCommand(
				"UPDATE farmers SET budget = @budget WHERE farmers_id = @farmersId", connection);

			// Kullanýcýnýn yeni bakiyesini parametre olarak ekliyoruz
			updateCommand->Parameters->AddWithValue("@budget", currentUser->budget);
			updateCommand->Parameters->AddWithValue("@farmersId", currentUser->id);

			int rowsAffected = updateCommand->ExecuteNonQuery();
			isUpdated = (rowsAffected > 0);
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred while updating the balance: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}

		return isUpdated;
	}

	void ReloadFieldGrid() {
		this->tableLayoutPanel2->Controls->Clear();
		InitializeFieldGrid();
	}
};
}
