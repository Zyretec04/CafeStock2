#pragma once
#include "MainLogin.h"

namespace CafeStock {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;	

	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
	private: System::Void lblRegis_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);



	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ picBoxConfirmPass;

	private: System::Windows::Forms::TextBox^ txtConfirmPass;
	private: System::Windows::Forms::Label^ lblConfirmPass;


	private: System::Windows::Forms::Label^ lblLogin;
	private: System::Windows::Forms::PictureBox^ picBoxPassword;
	private: System::Windows::Forms::PictureBox^ picBoxUsername;



	private: System::Windows::Forms::Button^ bttnRegister;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::TextBox^ txtUsername;




	private: System::Windows::Forms::Label^ lblPassword;
	private: System::Windows::Forms::Label^ lblUsername;


	private: System::Windows::Forms::Label^ lblRegister;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ picBoxMCM;
	private: System::Windows::Forms::Button^ bttnMinimize;


	private: System::Windows::Forms::Button^ bttnExit;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::CheckBox^ chkbxShowPass;
	private: System::Windows::Forms::CheckBox^ chkbxShowConPass;















































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->chkbxShowConPass = (gcnew System::Windows::Forms::CheckBox());
			this->chkbxShowPass = (gcnew System::Windows::Forms::CheckBox());
			this->bttnMinimize = (gcnew System::Windows::Forms::Button());
			this->bttnExit = (gcnew System::Windows::Forms::Button());
			this->picBoxConfirmPass = (gcnew System::Windows::Forms::PictureBox());
			this->txtConfirmPass = (gcnew System::Windows::Forms::TextBox());
			this->lblConfirmPass = (gcnew System::Windows::Forms::Label());
			this->lblLogin = (gcnew System::Windows::Forms::Label());
			this->picBoxPassword = (gcnew System::Windows::Forms::PictureBox());
			this->picBoxUsername = (gcnew System::Windows::Forms::PictureBox());
			this->bttnRegister = (gcnew System::Windows::Forms::Button());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->lblUsername = (gcnew System::Windows::Forms::Label());
			this->lblRegister = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->picBoxMCM = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxConfirmPass))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxPassword))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxUsername))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxMCM))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1300, 716);
			this->panel1->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Location = System::Drawing::Point(101, 101);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(397, 516);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->chkbxShowConPass);
			this->panel2->Controls->Add(this->chkbxShowPass);
			this->panel2->Controls->Add(this->bttnMinimize);
			this->panel2->Controls->Add(this->bttnExit);
			this->panel2->Controls->Add(this->picBoxConfirmPass);
			this->panel2->Controls->Add(this->txtConfirmPass);
			this->panel2->Controls->Add(this->lblConfirmPass);
			this->panel2->Controls->Add(this->lblLogin);
			this->panel2->Controls->Add(this->picBoxPassword);
			this->panel2->Controls->Add(this->picBoxUsername);
			this->panel2->Controls->Add(this->bttnRegister);
			this->panel2->Controls->Add(this->txtPassword);
			this->panel2->Controls->Add(this->txtUsername);
			this->panel2->Controls->Add(this->lblPassword);
			this->panel2->Controls->Add(this->lblUsername);
			this->panel2->Controls->Add(this->lblRegister);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->picBoxMCM);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(601, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(699, 716);
			this->panel2->TabIndex = 3;
			// 
			// chkbxShowConPass
			// 
			this->chkbxShowConPass->AutoSize = true;
			this->chkbxShowConPass->BackColor = System::Drawing::Color::Transparent;
			this->chkbxShowConPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbxShowConPass->Location = System::Drawing::Point(413, 533);
			this->chkbxShowConPass->Margin = System::Windows::Forms::Padding(4);
			this->chkbxShowConPass->Name = L"chkbxShowConPass";
			this->chkbxShowConPass->Size = System::Drawing::Size(128, 21);
			this->chkbxShowConPass->TabIndex = 17;
			this->chkbxShowConPass->Text = L"Show password";
			this->chkbxShowConPass->UseVisualStyleBackColor = false;
			this->chkbxShowConPass->CheckedChanged += gcnew System::EventHandler(this, &Register::chkbxShowConPass_CheckedChanged);
			// 
			// chkbxShowPass
			// 
			this->chkbxShowPass->AutoSize = true;
			this->chkbxShowPass->BackColor = System::Drawing::Color::Transparent;
			this->chkbxShowPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbxShowPass->Location = System::Drawing::Point(413, 441);
			this->chkbxShowPass->Margin = System::Windows::Forms::Padding(4);
			this->chkbxShowPass->Name = L"chkbxShowPass";
			this->chkbxShowPass->Size = System::Drawing::Size(128, 21);
			this->chkbxShowPass->TabIndex = 16;
			this->chkbxShowPass->Text = L"Show password";
			this->chkbxShowPass->UseVisualStyleBackColor = false;
			this->chkbxShowPass->CheckedChanged += gcnew System::EventHandler(this, &Register::chkbxShowPass_CheckedChanged);
			// 
			// bttnMinimize
			// 
			this->bttnMinimize->BackColor = System::Drawing::Color::Transparent;
			this->bttnMinimize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bttnMinimize->FlatAppearance->BorderSize = 0;
			this->bttnMinimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bttnMinimize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnMinimize->ForeColor = System::Drawing::Color::Red;
			this->bttnMinimize->Location = System::Drawing::Point(597, 0);
			this->bttnMinimize->Margin = System::Windows::Forms::Padding(4);
			this->bttnMinimize->Name = L"bttnMinimize";
			this->bttnMinimize->Size = System::Drawing::Size(47, 43);
			this->bttnMinimize->TabIndex = 15;
			this->bttnMinimize->Text = L"�";
			this->bttnMinimize->UseVisualStyleBackColor = false;
			this->bttnMinimize->Click += gcnew System::EventHandler(this, &Register::bttnMinimize_Click);
			// 
			// bttnExit
			// 
			this->bttnExit->BackColor = System::Drawing::Color::Transparent;
			this->bttnExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bttnExit->FlatAppearance->BorderSize = 0;
			this->bttnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bttnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnExit->ForeColor = System::Drawing::Color::Red;
			this->bttnExit->Location = System::Drawing::Point(652, 0);
			this->bttnExit->Margin = System::Windows::Forms::Padding(4);
			this->bttnExit->Name = L"bttnExit";
			this->bttnExit->Size = System::Drawing::Size(47, 43);
			this->bttnExit->TabIndex = 14;
			this->bttnExit->Text = L"X";
			this->bttnExit->UseVisualStyleBackColor = false;
			this->bttnExit->Click += gcnew System::EventHandler(this, &Register::bttnExit_Click);
			// 
			// picBoxConfirmPass
			// 
			this->picBoxConfirmPass->BackColor = System::Drawing::Color::Transparent;
			this->picBoxConfirmPass->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picBoxConfirmPass.Image")));
			this->picBoxConfirmPass->Location = System::Drawing::Point(79, 482);
			this->picBoxConfirmPass->Margin = System::Windows::Forms::Padding(4);
			this->picBoxConfirmPass->Name = L"picBoxConfirmPass";
			this->picBoxConfirmPass->Size = System::Drawing::Size(52, 48);
			this->picBoxConfirmPass->TabIndex = 13;
			this->picBoxConfirmPass->TabStop = false;
			// 
			// txtConfirmPass
			// 
			this->txtConfirmPass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtConfirmPass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txtConfirmPass->Location = System::Drawing::Point(156, 495);
			this->txtConfirmPass->Margin = System::Windows::Forms::Padding(4);
			this->txtConfirmPass->Name = L"txtConfirmPass";
			this->txtConfirmPass->Size = System::Drawing::Size(391, 34);
			this->txtConfirmPass->TabIndex = 6;
			this->txtConfirmPass->UseSystemPasswordChar = true;
			this->txtConfirmPass->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Register::txtConfirmPass_KeyDown);
			// 
			// lblConfirmPass
			// 
			this->lblConfirmPass->AutoSize = true;
			this->lblConfirmPass->BackColor = System::Drawing::Color::Transparent;
			this->lblConfirmPass->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblConfirmPass->Location = System::Drawing::Point(155, 462);
			this->lblConfirmPass->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblConfirmPass->Name = L"lblConfirmPass";
			this->lblConfirmPass->Size = System::Drawing::Size(189, 27);
			this->lblConfirmPass->TabIndex = 11;
			this->lblConfirmPass->Text = L"Confirm Password";
			// 
			// lblLogin
			// 
			this->lblLogin->AutoSize = true;
			this->lblLogin->BackColor = System::Drawing::Color::Transparent;
			this->lblLogin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lblLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.5F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblLogin->ForeColor = System::Drawing::Color::Firebrick;
			this->lblLogin->Location = System::Drawing::Point(235, 646);
			this->lblLogin->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblLogin->Name = L"lblLogin";
			this->lblLogin->Size = System::Drawing::Size(226, 25);
			this->lblLogin->TabIndex = 10;
			this->lblLogin->Text = L"Already Have an Account\?";
			this->lblLogin->Click += gcnew System::EventHandler(this, &Register::lblRegis_Click);
			// 
			// picBoxPassword
			// 
			this->picBoxPassword->BackColor = System::Drawing::Color::Transparent;
			this->picBoxPassword->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picBoxPassword.Image")));
			this->picBoxPassword->Location = System::Drawing::Point(79, 390);
			this->picBoxPassword->Margin = System::Windows::Forms::Padding(4);
			this->picBoxPassword->Name = L"picBoxPassword";
			this->picBoxPassword->Size = System::Drawing::Size(52, 48);
			this->picBoxPassword->TabIndex = 9;
			this->picBoxPassword->TabStop = false;
			// 
			// picBoxUsername
			// 
			this->picBoxUsername->BackColor = System::Drawing::Color::Transparent;
			this->picBoxUsername->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picBoxUsername.Image")));
			this->picBoxUsername->Location = System::Drawing::Point(79, 302);
			this->picBoxUsername->Margin = System::Windows::Forms::Padding(4);
			this->picBoxUsername->Name = L"picBoxUsername";
			this->picBoxUsername->Size = System::Drawing::Size(52, 48);
			this->picBoxUsername->TabIndex = 8;
			this->picBoxUsername->TabStop = false;
			// 
			// bttnRegister
			// 
			this->bttnRegister->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bttnRegister->FlatAppearance->BorderSize = 0;
			this->bttnRegister->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bttnRegister->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnRegister->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->bttnRegister->Location = System::Drawing::Point(216, 572);
			this->bttnRegister->Margin = System::Windows::Forms::Padding(4);
			this->bttnRegister->Name = L"bttnRegister";
			this->bttnRegister->Size = System::Drawing::Size(267, 55);
			this->bttnRegister->TabIndex = 6;
			this->bttnRegister->Text = L"Register";
			this->bttnRegister->UseVisualStyleBackColor = false;
			this->bttnRegister->Click += gcnew System::EventHandler(this, &Register::button1_Click);
			// 
			// txtPassword
			// 
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(156, 402);
			this->txtPassword->Margin = System::Windows::Forms::Padding(4);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(391, 34);
			this->txtPassword->TabIndex = 5;
			this->txtPassword->UseSystemPasswordChar = true;
			this->txtPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Register::txtPassword_KeyDown);
			// 
			// txtUsername
			// 
			this->txtUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUsername->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txtUsername->Location = System::Drawing::Point(156, 314);
			this->txtUsername->Margin = System::Windows::Forms::Padding(4);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(391, 34);
			this->txtUsername->TabIndex = 4;
			this->txtUsername->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Register::txtUsername_KeyDown);
			// 
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->BackColor = System::Drawing::Color::Transparent;
			this->lblPassword->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPassword->Location = System::Drawing::Point(155, 369);
			this->lblPassword->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(106, 27);
			this->lblPassword->TabIndex = 3;
			this->lblPassword->Text = L"Password";
			// 
			// lblUsername
			// 
			this->lblUsername->AutoSize = true;
			this->lblUsername->BackColor = System::Drawing::Color::Transparent;
			this->lblUsername->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUsername->Location = System::Drawing::Point(152, 279);
			this->lblUsername->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(110, 27);
			this->lblUsername->TabIndex = 2;
			this->lblUsername->Text = L"Username";
			// 
			// lblRegister
			// 
			this->lblRegister->AutoSize = true;
			this->lblRegister->BackColor = System::Drawing::Color::Transparent;
			this->lblRegister->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblRegister->Location = System::Drawing::Point(153, 240);
			this->lblRegister->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblRegister->Name = L"lblRegister";
			this->lblRegister->Size = System::Drawing::Size(101, 32);
			this->lblRegister->TabIndex = 1;
			this->lblRegister->Text = L"Register";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(-520, 279);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(483, 48);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Login";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// picBoxMCM
			// 
			this->picBoxMCM->BackColor = System::Drawing::Color::Transparent;
			this->picBoxMCM->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->picBoxMCM->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picBoxMCM.Image")));
			this->picBoxMCM->Location = System::Drawing::Point(244, 48);
			this->picBoxMCM->Margin = System::Windows::Forms::Padding(4);
			this->picBoxMCM->Name = L"picBoxMCM";
			this->picBoxMCM->Size = System::Drawing::Size(200, 169);
			this->picBoxMCM->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxMCM->TabIndex = 0;
			this->picBoxMCM->TabStop = false;
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1300, 716);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Register";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Register";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxConfirmPass))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxPassword))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxUsername))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxMCM))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bttnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult result =
			System::Windows::Forms::MessageBox::Show(
				"Are you sure you want to exit?", // Message
				"Exit Application",              // Title
				System::Windows::Forms::MessageBoxButtons::YesNo,
				System::Windows::Forms::MessageBoxIcon::Question
			);

		// Check if the user clicked "Yes"
		if (result == System::Windows::Forms::DialogResult::Yes) {
			System::Windows::Forms::Application::Exit(); // Exit the application
		}
	}
private: System::Void bttnMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
}
private: System::Void chkbxShowPass_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (chkbxShowPass->Checked) {
		txtPassword->UseSystemPasswordChar = false; 
	}
	else {
		txtPassword->UseSystemPasswordChar = true;  
	}
}
private: System::Void chkbxShowConPass_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (chkbxShowConPass->Checked) {
		txtConfirmPass->UseSystemPasswordChar = false; 
	}
	else {
		txtConfirmPass->UseSystemPasswordChar = true; 
	}
}
private: System::Void txtUsername_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == System::Windows::Forms::Keys::Enter)
	{
		bttnRegister->PerformClick();
	}
}
private: System::Void txtPassword_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == System::Windows::Forms::Keys::Enter)
	{
		bttnRegister->PerformClick();
	}
}
private: System::Void txtConfirmPass_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == System::Windows::Forms::Keys::Enter)
	{
		bttnRegister->PerformClick();
	}
}
};
}
