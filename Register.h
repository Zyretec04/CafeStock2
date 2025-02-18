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

	private: System::Windows::Forms::PictureBox^ picBoxLogo;
	private: System::Windows::Forms::Label^ lblTitle2;
	private: System::Windows::Forms::Label^ lblTitle1;









































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
			this->picBoxLogo = (gcnew System::Windows::Forms::PictureBox());
			this->lblTitle2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
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
			this->lblTitle1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxLogo))->BeginInit();
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
			this->panel1->Controls->Add(this->picBoxLogo);
			this->panel1->Controls->Add(this->lblTitle2);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->lblTitle1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(975, 582);
			this->panel1->TabIndex = 2;
			// 
			// picBoxLogo
			// 
			this->picBoxLogo->BackColor = System::Drawing::Color::Transparent;
			this->picBoxLogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picBoxLogo.Image")));
			this->picBoxLogo->Location = System::Drawing::Point(107, 134);
			this->picBoxLogo->Name = L"picBoxLogo";
			this->picBoxLogo->Size = System::Drawing::Size(231, 167);
			this->picBoxLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxLogo->TabIndex = 7;
			this->picBoxLogo->TabStop = false;
			// 
			// lblTitle2
			// 
			this->lblTitle2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblTitle2->BackColor = System::Drawing::Color::Transparent;
			this->lblTitle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle2->ForeColor = System::Drawing::SystemColors::Control;
			this->lblTitle2->Location = System::Drawing::Point(0, 344);
			this->lblTitle2->Name = L"lblTitle2";
			this->lblTitle2->Size = System::Drawing::Size(448, 25);
			this->lblTitle2->TabIndex = 6;
			this->lblTitle2->Text = L"Inventory System";
			this->lblTitle2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
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
			this->panel2->Location = System::Drawing::Point(451, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(524, 582);
			this->panel2->TabIndex = 3;
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
			this->bttnMinimize->Location = System::Drawing::Point(448, 0);
			this->bttnMinimize->Name = L"bttnMinimize";
			this->bttnMinimize->Size = System::Drawing::Size(35, 35);
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
			this->bttnExit->Location = System::Drawing::Point(489, 0);
			this->bttnExit->Name = L"bttnExit";
			this->bttnExit->Size = System::Drawing::Size(35, 35);
			this->bttnExit->TabIndex = 14;
			this->bttnExit->Text = L"X";
			this->bttnExit->UseVisualStyleBackColor = false;
			this->bttnExit->Click += gcnew System::EventHandler(this, &Register::bttnExit_Click);
			// 
			// picBoxConfirmPass
			// 
			this->picBoxConfirmPass->BackColor = System::Drawing::Color::Transparent;
			this->picBoxConfirmPass->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picBoxConfirmPass.Image")));
			this->picBoxConfirmPass->Location = System::Drawing::Point(59, 402);
			this->picBoxConfirmPass->Name = L"picBoxConfirmPass";
			this->picBoxConfirmPass->Size = System::Drawing::Size(39, 39);
			this->picBoxConfirmPass->TabIndex = 13;
			this->picBoxConfirmPass->TabStop = false;
			// 
			// txtConfirmPass
			// 
			this->txtConfirmPass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtConfirmPass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtConfirmPass->Location = System::Drawing::Point(111, 409);
			this->txtConfirmPass->Multiline = true;
			this->txtConfirmPass->Name = L"txtConfirmPass";
			this->txtConfirmPass->PasswordChar = '*';
			this->txtConfirmPass->Size = System::Drawing::Size(294, 32);
			this->txtConfirmPass->TabIndex = 12;
			// 
			// lblConfirmPass
			// 
			this->lblConfirmPass->AutoSize = true;
			this->lblConfirmPass->BackColor = System::Drawing::Color::Transparent;
			this->lblConfirmPass->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblConfirmPass->Location = System::Drawing::Point(110, 380);
			this->lblConfirmPass->Name = L"lblConfirmPass";
			this->lblConfirmPass->Size = System::Drawing::Size(152, 21);
			this->lblConfirmPass->TabIndex = 11;
			this->lblConfirmPass->Text = L"Confirm Password";
			// 
			// lblLogin
			// 
			this->lblLogin->AutoSize = true;
			this->lblLogin->BackColor = System::Drawing::Color::Transparent;
			this->lblLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblLogin->ForeColor = System::Drawing::Color::Firebrick;
			this->lblLogin->Location = System::Drawing::Point(159, 528);
			this->lblLogin->Name = L"lblLogin";
			this->lblLogin->Size = System::Drawing::Size(191, 20);
			this->lblLogin->TabIndex = 10;
			this->lblLogin->Text = L"Already Have an Account\?";
			this->lblLogin->Click += gcnew System::EventHandler(this, &Register::lblRegis_Click);
			// 
			// picBoxPassword
			// 
			this->picBoxPassword->BackColor = System::Drawing::Color::Transparent;
			this->picBoxPassword->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picBoxPassword.Image")));
			this->picBoxPassword->Location = System::Drawing::Point(59, 327);
			this->picBoxPassword->Name = L"picBoxPassword";
			this->picBoxPassword->Size = System::Drawing::Size(39, 39);
			this->picBoxPassword->TabIndex = 9;
			this->picBoxPassword->TabStop = false;
			// 
			// picBoxUsername
			// 
			this->picBoxUsername->BackColor = System::Drawing::Color::Transparent;
			this->picBoxUsername->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picBoxUsername.Image")));
			this->picBoxUsername->Location = System::Drawing::Point(59, 252);
			this->picBoxUsername->Name = L"picBoxUsername";
			this->picBoxUsername->Size = System::Drawing::Size(39, 39);
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
			this->bttnRegister->Location = System::Drawing::Point(152, 468);
			this->bttnRegister->Name = L"bttnRegister";
			this->bttnRegister->Size = System::Drawing::Size(207, 48);
			this->bttnRegister->TabIndex = 6;
			this->bttnRegister->Text = L"Register";
			this->bttnRegister->UseVisualStyleBackColor = false;
			this->bttnRegister->Click += gcnew System::EventHandler(this, &Register::button1_Click);
			// 
			// txtPassword
			// 
			this->txtPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(111, 334);
			this->txtPassword->Multiline = true;
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(294, 32);
			this->txtPassword->TabIndex = 5;
			// 
			// txtUsername
			// 
			this->txtUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUsername->Location = System::Drawing::Point(111, 259);
			this->txtUsername->Multiline = true;
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(294, 32);
			this->txtUsername->TabIndex = 4;
			// 
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->BackColor = System::Drawing::Color::Transparent;
			this->lblPassword->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPassword->Location = System::Drawing::Point(110, 305);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(85, 21);
			this->lblPassword->TabIndex = 3;
			this->lblPassword->Text = L"Password";
			// 
			// lblUsername
			// 
			this->lblUsername->AutoSize = true;
			this->lblUsername->BackColor = System::Drawing::Color::Transparent;
			this->lblUsername->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUsername->Location = System::Drawing::Point(108, 231);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(87, 21);
			this->lblUsername->TabIndex = 2;
			this->lblUsername->Text = L"Username";
			// 
			// lblRegister
			// 
			this->lblRegister->AutoSize = true;
			this->lblRegister->BackColor = System::Drawing::Color::Transparent;
			this->lblRegister->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblRegister->Location = System::Drawing::Point(107, 196);
			this->lblRegister->Name = L"lblRegister";
			this->lblRegister->Size = System::Drawing::Size(69, 21);
			this->lblRegister->TabIndex = 1;
			this->lblRegister->Text = L"Register";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(-390, 227);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(362, 39);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Login";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// picBoxMCM
			// 
			this->picBoxMCM->BackColor = System::Drawing::Color::Transparent;
			this->picBoxMCM->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->picBoxMCM->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picBoxMCM.Image")));
			this->picBoxMCM->Location = System::Drawing::Point(183, 39);
			this->picBoxMCM->Name = L"picBoxMCM";
			this->picBoxMCM->Size = System::Drawing::Size(150, 137);
			this->picBoxMCM->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxMCM->TabIndex = 0;
			this->picBoxMCM->TabStop = false;
			// 
			// lblTitle1
			// 
			this->lblTitle1->BackColor = System::Drawing::Color::Transparent;
			this->lblTitle1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle1->ForeColor = System::Drawing::SystemColors::Control;
			this->lblTitle1->Location = System::Drawing::Point(0, 305);
			this->lblTitle1->Name = L"lblTitle1";
			this->lblTitle1->Size = System::Drawing::Size(448, 31);
			this->lblTitle1->TabIndex = 5;
			this->lblTitle1->Text = L"CafeStock";
			this->lblTitle1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(975, 582);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Register";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Register";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxLogo))->EndInit();
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
};
}
