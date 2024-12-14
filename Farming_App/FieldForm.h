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
	/// Summary for FieldForm
	/// </summary>
	public ref class FieldForm : public System::Windows::Forms::Form
	{
	public:
		User^ currentUser;
		FieldForm(User^ user)
		{
			InitializeComponent();
			currentUser = user;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FieldForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: 
		System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
		ToolTip^ tooltip = gcnew ToolTip();
		System::Windows::Forms::Label^ balanceLabel;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->SuspendLayout();
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 10;  // 10 kolon ekleniyor

			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 50)));

			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));

			this->tableLayoutPanel2->Location = System::Drawing::Point(50, 50);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->Size = System::Drawing::Size(500, 500);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// FieldForm
			// 
			this->ClientSize = System::Drawing::Size(614, 606);  // Form boyutunu ayarla
			this->Controls->Add(this->tableLayoutPanel2);
			this->Name = L"FieldForm";
			this->Text = L"FieldForm";
			this->ResumeLayout(false);

			this->Load += gcnew EventHandler(this, &FieldForm::FieldForm_Load);
			// 
			// BalanceLabel
			// 
			this->balanceLabel = (gcnew System::Windows::Forms::Label());
			this->balanceLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->balanceLabel->ForeColor = System::Drawing::Color::Gray;
			this->balanceLabel->AutoSize = true;
			this->balanceLabel->Location = System::Drawing::Point(50, 30);  // Konumu ayarlayın
			this->balanceLabel->Name = L"balanceLabel";
			this->balanceLabel->Size = System::Drawing::Size(150, 20);  // Boyut
			this->balanceLabel->TabIndex = 1;
			this->balanceLabel->Text = "Your balance: $0";  // İlk başta bakiyeyi 0 olarak ayarlayalım
			this->Controls->Add(this->balanceLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->BackColor = System::Drawing::Color::White;
		}
#pragma endregion

	private:
		SqlConnection^ connection = gcnew SqlConnection("Data Source=MERT;Initial Catalog=farming_system;Integrated Security=True");

		void FieldForm_Load(Object^ sender, EventArgs^ e) {
			InitializeFieldGrid();
			UpdateBalanceLabel();
		}

		void UpdateBalanceLabel() {
			if (currentUser != nullptr) {
				this->balanceLabel->Text = "Your balance: $" + currentUser->budget.ToString("0.00");
			}
		}

		void InitializeFieldGrid() {
			int buttonIndex = 1;  // Numara başlat

			// SQL sorgusunu hazırlıyoruz
			SqlCommand^ command = gcnew SqlCommand("SELECT f.field_parcel, f.farmers_id, f.area, f.price, u.username FROM field f LEFT JOIN farmers u ON f.farmers_id = u.farmers_id", connection);
			connection->Open();
			SqlDataReader^ reader = command->ExecuteReader();

			// Veritabanındaki verileri okuyoruz
			while (reader->Read()) {
				int fieldParcel = reader->GetInt32(0);
				bool isFarmersIdNull = reader->IsDBNull(1);
				int area = reader->GetInt32(2);
				int price = reader->GetInt32(3); // 'price' sütunu üçüncü sütun
				String^ username = isFarmersIdNull ? nullptr : reader->GetString(4); // 'username' doğru indeks

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
					button->Tag = price;  // Fiyatı butonun Tag özelliğine kaydediyoruz

					// Tıklama olayını yeşil buton için bağla
					button->Click += gcnew EventHandler(this, &FieldForm::OnFieldButtonClick);
				}
				else {
					button->BackColor = System::Drawing::Color::Red;
					button->ForeColor = System::Drawing::Color::White;
					tooltip->SetToolTip(button, "Owned by: " + username);

					// Tıklama olayını kırmızı buton için bağla
					button->Click += gcnew EventHandler(this, &FieldForm::OnRedButtonClick);
				}

				panel->Controls->Add(button);
				this->tableLayoutPanel2->Controls->Add(panel, (buttonIndex - 1) % 10, (buttonIndex - 1) / 10);

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

				// Fiyatı butonun Tag özelliğinden alıyoruz
				int price = (int)clickedButton->Tag;

				if (currentUser->budget < price) {
					MessageBox::Show("Insufficient balance.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				else
				{
					// Bütçeyi ve alan fiyatını göstermek için bir mesaj kutusu açıyoruz
					System::Windows::Forms::DialogResult result = MessageBox::Show("Do you want to purchase this field?",
						"Confirm Purchase",
						MessageBoxButtons::YesNo,
						MessageBoxIcon::Question);

					if (result == System::Windows::Forms::DialogResult::Yes) {
						// Bütçeyi kontrol et


						// Alanı satın al
						if (UpdateFieldOwnership(Int32::Parse(clickedButton->Text))) {
							// Satın alma başarılı
							clickedButton->BackColor = System::Drawing::Color::Red;
							clickedButton->ForeColor = System::Drawing::Color::White;
							tooltip->SetToolTip(clickedButton, "Owned by: " + currentUser->username);

							// Bütçeyi güncelle
							currentUser->budget -= price;
							UpdateBalanceLabel();  // Bakiyeyi güncelle

							// Veritabanında kullanıcı bakiyesini güncelle
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

				// Kullanıcının yeni bakiyesini parametre olarak ekliyoruz
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