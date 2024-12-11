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
		void SetCurrentUser(User^ user) {
			currentUser = user;
		}
		FieldForm()  // Kullan�c�y� al
		{
			InitializeComponent();
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

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
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
		}
#pragma endregion

	private:
		SqlConnection^ connection = gcnew SqlConnection("Data Source=MERT;Initial Catalog=farming_system;Integrated Security=True");
		User^ currentUser;

		void FieldForm_Load(Object^ sender, EventArgs^ e) {
			InitializeFieldGrid();
		}

		void InitializeFieldGrid() {
			int buttonIndex = 1;  // Numara başlat

			// SQL sorgusunu hazırlıyoruz
			SqlCommand^ command = gcnew SqlCommand("SELECT f.field_parcel, f.farmers_id, f.area, u.username FROM field f LEFT JOIN farmers u ON f.farmers_id = u.farmers_id", connection);
			connection->Open();
			SqlDataReader^ reader = command->ExecuteReader();

			// Veritabanındaki verileri okuyoruz
			while (reader->Read()) {
				int fieldParcel = reader->GetInt32(0);
				bool isFarmersIdNull = reader->IsDBNull(1);
				int area = reader->GetInt32(2);  // 'area' sütunu üçüncü sütun olduğu için 2. indeks
				String^ username = isFarmersIdNull ? nullptr : reader->GetString(3);

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
					tooltip->SetToolTip(button, "Available \nArea Size: " + area.ToString());

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

				int fieldParcel = Int32::Parse(clickedButton->Text);

				if (UpdateFieldOwnership(fieldParcel)) {
					clickedButton->BackColor = System::Drawing::Color::Red;
					clickedButton->ForeColor = System::Drawing::Color::White;

					ToolTip^ tooltip = gcnew ToolTip();
					tooltip->SetToolTip(clickedButton, "Owned by: " + currentUser->username);

					MessageBox::Show("Field successfully purchased!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else {
					MessageBox::Show("Purchase failed. Try again later.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
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

		void ReloadFieldGrid() {
			this->tableLayoutPanel2->Controls->Clear();
			InitializeFieldGrid(); 
		}
	};
}