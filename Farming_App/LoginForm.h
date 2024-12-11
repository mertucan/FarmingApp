#pragma once
#include "User.h"
#include "RegisterForm.h"
#include "MainForm.h"
#include "ForgotPassword.h"
#include "FieldForm.h"
#include "TransferForm.h"

namespace FarmingApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginForm::textBox2_KeyDown);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label6;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->panel1->Size = System::Drawing::Size(609, 114);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(553, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(35, 35);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &LoginForm::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Dubai", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(211, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 73);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Sign In";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox1->Location = System::Drawing::Point(46, 218);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(509, 41);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox2->Location = System::Drawing::Point(46, 322);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(509, 41);
			this->textBox2->TabIndex = 2;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginForm::textBox2_KeyDown);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->checkBox1->Location = System::Drawing::Point(314, 379);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(241, 35);
			this->checkBox1->TabIndex = 3;
			this->checkBox1->Text = L"Show Password";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &LoginForm::checkBox1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Dubai", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(171, 467);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(260, 64);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Sign In";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->label2->Location = System::Drawing::Point(171, 574);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(260, 25);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Don\'t have an account\?";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label3->Location = System::Drawing::Point(242, 611);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 31);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Sign Up";
			this->label3->Click += gcnew System::EventHandler(this, &LoginForm::label3_Click);
			this->label3->MouseEnter += gcnew System::EventHandler(this, &LoginForm::label3_MouseEnter);
			this->label3->MouseLeave += gcnew System::EventHandler(this, &LoginForm::label3_MouseLeave);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Gray;
			this->label4->Location = System::Drawing::Point(40, 171);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 31);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Username";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Gray;
			this->label5->Location = System::Drawing::Point(40, 275);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(134, 31);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Password";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->label6->Location = System::Drawing::Point(178, 538);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(253, 25);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Forgot your password\?";
			this->label6->Click += gcnew System::EventHandler(this, &LoginForm::label6_Click);
			this->label6->MouseEnter += gcnew System::EventHandler(this, &LoginForm::label6_MouseEnter);
			this->label6->MouseLeave += gcnew System::EventHandler(this, &LoginForm::label6_MouseLeave);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(192, 192);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(600, 671);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: User^ user = nullptr;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Kullanýcý adý ve þifre alanlarýnýn boþ olup olmadýðýný kontrol et
		if (textBox1->Text->Trim() == "" || textBox2->Text->Trim() == "") {
			MessageBox::Show("Username and password cannot be empty!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// SQL baðlantýsý ve komutunu oluþtur
		SqlConnection^ connection = gcnew SqlConnection("Data Source=MERT;Initial Catalog=farming_system;Integrated Security=True");

		// Kullanýcý adý ile ilgili veriyi almak için SQL komutunu oluþtur
		SqlCommand^ command = gcnew SqlCommand("SELECT farmers_id, username, password, phone_number, email, budget FROM farmers WHERE username = @username", connection);
		command->Parameters->AddWithValue("@username", textBox1->Text);

		try {
			connection->Open();
			SqlDataReader^ reader = command->ExecuteReader();

			if (reader->Read()) {
				// Veritabanýndaki bilgileri al
				System::String^ storedHashedPassword = reader->IsDBNull(2) ? "" : reader->GetString(2); // password
				System::String^ phoneNumber = reader->IsDBNull(3) ? "" : reader->GetString(3); // phone_number
				System::String^ email = reader->IsDBNull(4) ? "" : reader->GetString(4); // email
				double budget = reader->IsDBNull(5) ? 0.0 : static_cast<double>(reader->GetDecimal(5));

				// Kullanýcýnýn girdiði þifreyi hashle
				System::String^ enteredPassword = textBox2->Text;
				System::String^ hashedEnteredPassword = RegisterForm::HashPassword(enteredPassword); // Hash'li þifreyi oluþtur

				// Hash'li þifreyi karþýlaþtýr
				if (hashedEnteredPassword == storedHashedPassword) {
					// Þifre doðrulandý, kullanýcýyý bilgilendir
					MessageBox::Show("Login successful!", "Successful", MessageBoxButtons::OK, MessageBoxIcon::Information);

					// Veritabanýndan alýnan verileri User nesnesine aktar
					user = gcnew User(
						reader->GetInt32(0),   // farmers_id
						textBox1->Text,        // username
						storedHashedPassword,  // password
						phoneNumber,           // phone_number
						email,                 // email
						budget                 // budget
					);

					reader->Close();

					// Kullanýcý adý kontrolü
					if (textBox1->Text->ToLower() == "admin") {
						// Admin kullanýcý için MainForm'a yönlendir
						MainForm^ mainForm = gcnew MainForm();
						mainForm->Show();
					}
					else {
						// Diðer kullanýcýlar için TransferForm'a yönlendir
						TransferForm^ transferForm = gcnew TransferForm();
						transferForm->SetUser(user);  // user nesnesini doðru þekilde aktarýyoruz
						transferForm->Show();
					}

					this->Hide();
				}
				else {
					// Þifre yanlýþ
					MessageBox::Show("Incorrect password!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else {
				// Kullanýcý adý bulunamadý
				MessageBox::Show("Username not found!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}
	}


	private: System::Void label3_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		label3->Font = gcnew System::Drawing::Font(label3->Font, System::Drawing::FontStyle::Underline | System::Drawing::FontStyle::Bold);
	}
	private: System::Void label3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		label3->Font = gcnew System::Drawing::Font(label3->Font, System::Drawing::FontStyle::Regular | System::Drawing::FontStyle::Bold);
	}
	public: bool switchToForm = false;
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		// RegisterForm'a geçiþi iþaretle
		this->switchToForm = true;

		// Eðer RegisterForm'a geçiþ yapýlacaksa, RegisterForm'u aç
		if (this->switchToForm) {
			// Önce LoginForm'u kapatýyoruz
			this->Hide(); // LoginForm'un kapanmasýný istemiyorsanýz, sadece gizleyebilirsiniz.

			// RegisterForm'u modal olarak açýyoruz
			FarmingApp::RegisterForm^ registerForm = gcnew FarmingApp::RegisterForm();
			registerForm->ShowDialog(); // RegisterForm'un kendisi modal bir þekilde açýlýr.

			// Giriþ iþlemi baþarýlýysa, burada iþlemleri yapabilirsiniz.
			if (registerForm->switchToLogin) {
				// Kullanýcý giriþ formuna dönmeyi seçtiyse, LoginForm'u tekrar açýyoruz.
				FarmingApp::LoginForm^ loginForm = gcnew FarmingApp::LoginForm();
				loginForm->ShowDialog();
			}
			else {
				// Kullanýcý baþarýlý þekilde kaydolduysa:
				user = registerForm->user;
			}
		}
		else {
			// Eðer RegisterForm'a geçiþ yapýlmadýysa, LoginForm'u aç
			FarmingApp::LoginForm^ loginForm = gcnew FarmingApp::LoginForm();
			loginForm->ShowDialog();
		}
	}


	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked) {
			textBox2->PasswordChar = '\0'; // Þifreyi görünür yap
		}
		else {
			textBox2->PasswordChar = '*'; // Þifreyi gizler
		}
	}
	private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == System::Windows::Forms::Keys::Enter) {
			// Button1'ýn Click olayýný tetikle
			this->button1->PerformClick();
		}
	}
	private: System::Void label6_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		label6->Font = gcnew System::Drawing::Font(label6->Font, System::Drawing::FontStyle::Underline | System::Drawing::FontStyle::Bold);
	}
	private: System::Void label6_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		label6->Font = gcnew System::Drawing::Font(label6->Font, System::Drawing::FontStyle::Regular | System::Drawing::FontStyle::Bold);
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToForm = true;

		if (this->switchToForm) {
			// Önce LoginForm'u kapatýyoruz
			this->Hide(); // LoginForm'un kapanmasýný istemiyorsanýz, sadece gizleyebilirsiniz.

			FarmingApp::ForgotPassword^ forgotForm = gcnew FarmingApp::ForgotPassword();
			forgotForm->ShowDialog();

			if (forgotForm->switchToLogin) {
				FarmingApp::LoginForm^ loginForm = gcnew FarmingApp::LoginForm();
				loginForm->ShowDialog();
			}
			else {

			}
		}
		else {
			// Eðer RegisterForm'a geçiþ yapýlmadýysa, LoginForm'u aç
			FarmingApp::LoginForm^ loginForm = gcnew FarmingApp::LoginForm();
			loginForm->ShowDialog();
		}
	}
	};
}
