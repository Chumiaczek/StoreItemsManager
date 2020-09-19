#pragma once
#include <Windows.h>
#include <fstream>
#include <iostream>
#include <string>
#include "Store_Menu.h"
#include <fstream>
namespace StoreItemManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtLogin_Login;
	protected:
	private: System::Windows::Forms::TextBox^ txtLogin_Pass;
	private: System::Windows::Forms::Button^ btnLogin_Login;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numUID;

	private: System::Windows::Forms::Label^ label3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->txtLogin_Login = (gcnew System::Windows::Forms::TextBox());
			this->txtLogin_Pass = (gcnew System::Windows::Forms::TextBox());
			this->btnLogin_Login = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numUID = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUID))->BeginInit();
			this->SuspendLayout();
			// 
			// txtLogin_Login
			// 
			this->txtLogin_Login->Location = System::Drawing::Point(71, 48);
			this->txtLogin_Login->Name = L"txtLogin_Login";
			this->txtLogin_Login->Size = System::Drawing::Size(280, 20);
			this->txtLogin_Login->TabIndex = 0;
			// 
			// txtLogin_Pass
			// 
			this->txtLogin_Pass->Location = System::Drawing::Point(71, 90);
			this->txtLogin_Pass->Name = L"txtLogin_Pass";
			this->txtLogin_Pass->Size = System::Drawing::Size(280, 20);
			this->txtLogin_Pass->TabIndex = 1;
			// 
			// btnLogin_Login
			// 
			this->btnLogin_Login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin_Login->Location = System::Drawing::Point(71, 127);
			this->btnLogin_Login->Name = L"btnLogin_Login";
			this->btnLogin_Login->Size = System::Drawing::Size(280, 82);
			this->btnLogin_Login->TabIndex = 2;
			this->btnLogin_Login->Text = L"Login";
			this->btnLogin_Login->UseVisualStyleBackColor = true;
			this->btnLogin_Login->Click += gcnew System::EventHandler(this, &Login::btnLogin_Login_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password";
			// 
			// numUID
			// 
			this->numUID->InterceptArrowKeys = false;
			this->numUID->Location = System::Drawing::Point(71, 12);
			this->numUID->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numUID->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numUID->Name = L"numUID";
			this->numUID->Size = System::Drawing::Size(280, 20);
			this->numUID->TabIndex = 5;
			this->numUID->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"UID";
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(381, 232);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->numUID);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnLogin_Login);
			this->Controls->Add(this->txtLogin_Pass);
			this->Controls->Add(this->txtLogin_Login);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Login";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUID))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	String^ connstring = "Server=retake-errorhead.pl;port=3306;database=32732788_project;uid=32732788_project;password=Gregtab2004";
	MySqlConnection^ Conn = gcnew MySqlConnection(connstring);
	private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			Conn->Open();
			MessageBox::Show("Sucessfully connected with database.");
			Conn->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Error connecting to database (E1).");
			exit(0);
			Conn->Close();
		}
		
	}
	private: System::Void btnLogin_Login_Click(System::Object^ sender, System::EventArgs^ e) {
		int i = 0;
		String^ CurrUID = System::Convert::ToString(numUID->Value);
		int UID = System::Convert::ToInt32(numUID->Value);
		String^ login = txtLogin_Login->Text;
		String^ pass = txtLogin_Pass->Text;
		std::fstream UIDfile;
		UIDfile.open("UID.txt", std::ios::out);
		if (UIDfile.good() == false)
		{
			std::ofstream UIDfile("UID.txt", std::ios::out);
		}
		UIDfile << UID;
		UIDfile.close();
		try
		{
			Conn->Open();
			MySqlDataAdapter^ read = gcnew MySqlDataAdapter("SELECT Login,Password FROM Users WHERE UID = " + CurrUID, Conn);
			DataTable^ dt = gcnew DataTable();
			read->Fill(dt);
			String^ Login = dt->Rows[0]->ItemArray[0]->ToString();
			String^ Password = dt->Rows[0]->ItemArray[1]->ToString();
			if (txtLogin_Login->Text == Login && txtLogin_Pass->Text == Password)
			{
				MessageBox::Show("Correct Login & Password");
				Store_Menu^ form2 = gcnew Store_Menu;
				form2->Show();
				this->Hide();
			}
			else
			{
				MessageBox::Show("Incorrect UID/Login/Password. Try Again. (E10).");
			}
			Conn->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Failed to read data (E2).");
			Conn->Close();
		}
	}
};
}
