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
	using namespace System::Security::Cryptography;
	using namespace System::Text;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->textBox3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RegisterForm::textBox3_KeyDown);
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::ToolTip^ toolTip1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(601, 114);
			this->panel1->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(553, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(35, 35);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &RegisterForm::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Dubai", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(200, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 73);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Sign Up";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox1->Location = System::Drawing::Point(49, 197);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(509, 41);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox2->Location = System::Drawing::Point(49, 291);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(509, 41);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox3->Location = System::Drawing::Point(49, 385);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(509, 41);
			this->textBox3->TabIndex = 4;
			this->textBox3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RegisterForm::textBox3_KeyDown);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Dubai", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(165, 492);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(260, 64);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Sign Up";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &RegisterForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label3->Location = System::Drawing::Point(239, 631);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 31);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Sign In";
			this->label3->Click += gcnew System::EventHandler(this, &RegisterForm::label3_Click);
			this->label3->MouseEnter += gcnew System::EventHandler(this, &RegisterForm::label3_MouseEnter);
			this->label3->MouseLeave += gcnew System::EventHandler(this, &RegisterForm::label3_MouseLeave);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->label2->Location = System::Drawing::Point(151, 597);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(286, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Already have an account\?";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Gray;
			this->label4->Location = System::Drawing::Point(43, 155);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 31);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Username";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Gray;
			this->label5->Location = System::Drawing::Point(43, 249);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(134, 31);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Password";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Gray;
			this->label6->Location = System::Drawing::Point(43, 343);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(236, 31);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Confirm Password";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label7);
			this->panel2->Location = System::Drawing::Point(49, 338);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(512, 34);
			this->panel2->TabIndex = 12;
			this->panel2->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(3, 3);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 25);
			this->label7->TabIndex = 13;
			this->label7->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(521, 294);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(35, 35);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->MouseEnter += gcnew System::EventHandler(this, &RegisterForm::pictureBox2_MouseEnter);
			this->pictureBox2->MouseLeave += gcnew System::EventHandler(this, &RegisterForm::pictureBox2_MouseLeave);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(192, 192);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(600, 671);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"RegisterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegisterForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Kullanýcý adý ve þifre alanlarýnýn boþ olup olmadýðýný kontrol et
		if (textBox1->Text->Trim() == "" || textBox2->Text->Trim() == "" || textBox3->Text->Trim() == "") {
			MessageBox::Show("Username and passwords cannot be empty!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return; // Boþ alanlar varsa fonksiyonu sonlandýrýr
		}

		// Þifrelerin eþleþip eþleþmediðini kontrol et
		if (textBox2->Text != textBox3->Text) {
			MessageBox::Show("Passwords are not matching!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (label7->Text != "Strong") {
			MessageBox::Show("You need a stronger password!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Hashleme iþlemi
		System::String^ password = textBox2->Text;
		System::String^ hashedPassword = HashPassword(password);

		// SQL baðlantýsý ve komutunu oluþtur
		SqlConnection^ connection = gcnew SqlConnection("Data Source=MERT;Initial Catalog=farming_system;Integrated Security=True");

		// Kullanýcý adý zaten veritabanýnda var mý kontrol et
		SqlCommand^ checkCommand = gcnew SqlCommand("SELECT COUNT(*) FROM farmers WHERE username = @username", connection);
		checkCommand->Parameters->AddWithValue("@username", textBox1->Text);

		try {
			connection->Open();
			int userCount = (int)checkCommand->ExecuteScalar(); // Kullanýcý sayýsýný al

			if (userCount > 0) {
				// Kullanýcý adý zaten varsa uyarý ver
				MessageBox::Show("Username is already taken! Please choose a different one.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				// Kullanýcý adý yoksa, yeni kullanýcýyý ekle
				SqlCommand^ command = gcnew SqlCommand("INSERT INTO farmers (username, password, budget) VALUES (@username, @password, @budget)", connection);
				command->Parameters->AddWithValue("@username", textBox1->Text);
				command->Parameters->AddWithValue("@password", hashedPassword);
				command->Parameters->AddWithValue("@budget", 1000);
				command->ExecuteNonQuery();

				// Kayýt baþarýlý mesajý
				MessageBox::Show("Registration is successful", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->switchToLogin = true;
				this->Close();
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}
	}

	// Þifreyi hashlemek için kullanýlan fonksiyon
	public: static System::String^ HashPassword(System::String^ password) {
		// SHA256 kullanarak þifreyi hashle
		SHA256^ sha256 = SHA256::Create();
		array<Byte>^ bytes = Encoding::UTF8->GetBytes(password);
		array<Byte>^ hash = sha256->ComputeHash(bytes);

		// Hash'i hexadecimal formatýnda döndür
		StringBuilder^ stringBuilder = gcnew StringBuilder();
		for (int i = 0; i < hash->Length; i++) {
			stringBuilder->Append(hash[i].ToString("x2"));
		}

		return stringBuilder->ToString();
	}
	
	private: System::Void label3_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		label3->Font = gcnew System::Drawing::Font(label3->Font, System::Drawing::FontStyle::Underline | System::Drawing::FontStyle::Bold);
	}
	private: System::Void label3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		label3->Font = gcnew System::Drawing::Font(label3->Font, System::Drawing::FontStyle::Regular | System::Drawing::FontStyle::Bold);
	}
	public: bool switchToLogin = false;
	public: User^ user = nullptr;
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToLogin = true;
		this->Hide();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void textBox3_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == System::Windows::Forms::Keys::Enter) {
		// Button1'ýn Click olayýný tetikle
		this->button1->PerformClick();
		e->SuppressKeyPress = true;
		this->switchToLogin = true;
		this->Hide();
	}
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	// Get the password entered by the user
	System::String^ password = textBox2->Text;

	// Check the strength of the password
	if (password->Length < 6) {
		panel2->Visible = true;
		label7->Visible = true;
		panel2->BackColor = Color::FromArgb(255, 0, 0); // Red for weak
		label7->Text = "Weak";
		label6->Location = System::Drawing::Point(24, 190);
		textBox3->Location = System::Drawing::Point(25, 210);
	}
	else if (password->Length >= 6 && password->Length < 10) {
		panel2->BackColor = Color::FromArgb(255, 165, 0); // Orange for medium
		label7->Text = "Fair";
	}
	else {
		// Check if password contains at least one special character and number
		bool hasSpecialChar = false;
		bool hasDigit = false;
		for (int i = 0; i < password->Length; i++) {
			if (Char::IsDigit(password[i])) {
				hasDigit = true;
			}
			if (!Char::IsLetterOrDigit(password[i])) {
				hasSpecialChar = true;
			}
		}

		if (hasSpecialChar && hasDigit) {
			panel2->BackColor = Color::FromArgb(0, 128, 0); // Green for strong
			label7->Text = "Strong";
		}
		else {
			panel2->BackColor = Color::FromArgb(255, 165, 0); // Orange for medium (fallback)
			label7->Text = "Fair";
		}
	}
}

private: System::Void pictureBox2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	toolTip1->SetToolTip(this->pictureBox2, L"Password must be at least 8 characters long\nPassword must include both letters and numbers\nPassword must contain at least one special character.");
}
private: System::Void pictureBox2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	toolTip1->SetToolTip(this->pictureBox2, "");
}
};
}
