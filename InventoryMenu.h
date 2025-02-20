#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;

namespace CafeStock {

	public ref class InventoryMenu : public System::Windows::Forms::UserControl
	{
	public:
		InventoryMenu(void)
		{
			InitializeComponent();
			LoadDataFromDatabase();
		}

	protected:
		~InventoryMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ bttnMinimize;
	protected:
	private: System::Windows::Forms::Button^ bttnExit;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btnEdit;
	private: System::Void btnEdit_Click(System::Object^ sender, System::EventArgs^ e);
	protected:

	protected:

	protected:


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: DataTable^ dataTable;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InventoryMenu::typeid));
			   this->btnEdit = (gcnew System::Windows::Forms::Button());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->bttnMinimize = (gcnew System::Windows::Forms::Button());
			   this->bttnExit = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // btnEdit
			   // 
			   this->btnEdit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				   static_cast<System::Int32>(static_cast<System::Byte>(23)));
			   this->btnEdit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->btnEdit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->btnEdit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEdit.Image")));
			   this->btnEdit->Location = System::Drawing::Point(636, 49);
			   this->btnEdit->Name = L"btnEdit";
			   this->btnEdit->Size = System::Drawing::Size(41, 36);
			   this->btnEdit->TabIndex = 7;
			   this->btnEdit->UseVisualStyleBackColor = false;
			   this->btnEdit->Click += gcnew System::EventHandler(this, &InventoryMenu::btnEdit_Click);
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				   static_cast<System::Int32>(static_cast<System::Byte>(23)));
			   this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			   this->button1->Location = System::Drawing::Point(562, 49);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(46, 36);
			   this->button1->TabIndex = 6;
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &InventoryMenu::button1_Click);
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(68, 58);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(398, 20);
			   this->textBox1->TabIndex = 5;
			   this->textBox1->TextChanged += gcnew System::EventHandler(this, &InventoryMenu::textBox1_TextChanged);
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->AllowUserToAddRows = false;
			   this->dataGridView1->AllowUserToDeleteRows = false;
			   this->dataGridView1->AllowUserToResizeColumns = false;
			   this->dataGridView1->AllowUserToResizeRows = false;
			   this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			   this->dataGridView1->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::EnableAlwaysIncludeHeaderText;
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Location = System::Drawing::Point(68, 106);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->RowHeadersVisible = false;
			   this->dataGridView1->RowHeadersWidth = 51;
			   this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			   this->dataGridView1->Size = System::Drawing::Size(609, 390);
			   this->dataGridView1->TabIndex = 4;
			   this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &InventoryMenu::dataGridView1_CellContentClick);
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
			   this->bttnMinimize->Location = System::Drawing::Point(668, 0);
			   this->bttnMinimize->Name = L"bttnMinimize";
			   this->bttnMinimize->Size = System::Drawing::Size(35, 35);
			   this->bttnMinimize->TabIndex = 17;
			   this->bttnMinimize->Text = L"�";
			   this->bttnMinimize->UseVisualStyleBackColor = false;
			   this->bttnMinimize->Click += gcnew System::EventHandler(this, &InventoryMenu::bttnMinimize_Click);
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
			   this->bttnExit->Location = System::Drawing::Point(710, 0);
			   this->bttnExit->Name = L"bttnExit";
			   this->bttnExit->Size = System::Drawing::Size(35, 35);
			   this->bttnExit->TabIndex = 16;
			   this->bttnExit->Text = L"X";
			   this->bttnExit->UseVisualStyleBackColor = false;
			   this->bttnExit->Click += gcnew System::EventHandler(this, &InventoryMenu::bttnExit_Click);
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				   static_cast<System::Int32>(static_cast<System::Byte>(23)));
			   this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			   this->button2->Location = System::Drawing::Point(489, 49);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(46, 36);
			   this->button2->TabIndex = 18;
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Click += gcnew System::EventHandler(this, &InventoryMenu::button2_Click);
			   // 
			   // InventoryMenu
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->bttnMinimize);
			   this->Controls->Add(this->bttnExit);
			   this->Controls->Add(this->btnEdit);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->dataGridView1);
			   this->Name = L"InventoryMenu";
			   this->Size = System::Drawing::Size(745, 544);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void InventExit_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show("Are you sure you want to exit?", "Exit Application", System::Windows::Forms::MessageBoxButtons::YesNo, System::Windows::Forms::MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			System::Windows::Forms::Application::Exit();
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->SelectedRows->Count > 0) {
			// Get selected row ID
			int selectedIndex = dataGridView1->SelectedRows[0]->Index;
			int itemID = Convert::ToInt32(dataGridView1->Rows[selectedIndex]->Cells["Item_ID"]->Value);

			// Confirm deletion using a MessageBox
			System::Windows::Forms::DialogResult dialogResult = MessageBox::Show(
				"Are you sure you want to delete this record?", "Confirm Deletion",
				MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (dialogResult == System::Windows::Forms::DialogResult::Yes) {
				try {
					// Supabase REST API URL (or SQL Server connection string if using local DB)
					String^ connectionString = "Data Source=DESKTOP-7R4GRV2\\SQLEXPRESS;Initial Catalog=dboInventory;User ID=sa;Password=12345";

					// Open connection
					SqlConnection^ conn = gcnew SqlConnection(connectionString);
					conn->Open();

					// SQL delete command
					String^ deleteQuery = "DELETE FROM tblItems WHERE Item_ID = @ItemID";
					SqlCommand^ cmd = gcnew SqlCommand(deleteQuery, conn);
					cmd->Parameters->AddWithValue("@ItemID", itemID);

					// Execute command
					cmd->ExecuteNonQuery();
					conn->Close();

					// Remove row from DataGridView
					dataGridView1->Rows->RemoveAt(selectedIndex);

					// Display success message
					MessageBox::Show("Record deleted successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				catch (Exception^ ex) {
					// Display error message
					MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ searchText = textBox1->Text;
		if (dataTable == nullptr) return;
		if (String::IsNullOrEmpty(searchText)) {
			dataTable->DefaultView->RowFilter = "";
		}
		else {
			dataTable->DefaultView->RowFilter = String::Format("Item_Name LIKE '%{0}%'", searchText->Replace("'", "''"));
		}
	}
	public:
		void LoadDataFromDatabase() {
			String^ connectionString = "Data Source=DESKTOP-7R4GRV2\\SQLEXPRESS;Initial Catalog=dboInventory;User ID=sa;Password=12345";
			String^ query = "SELECT * FROM tblItems";
			try {
				SqlConnection^ con = gcnew SqlConnection(connectionString);
				con->Open();
				SqlDataAdapter^ adapter = gcnew SqlDataAdapter(query, con);
				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				dataTable = dt;
				dataGridView1->DataSource = dataTable->DefaultView;
				con->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error loading data: " + ex->Message);
			}
		};
	 
private: System::Void bttnMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Form^ parentForm = this->FindForm(); // Get the parent form
	if (parentForm != nullptr) {
		parentForm->WindowState = System::Windows::Forms::FormWindowState::Minimized;
	}
}
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
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}