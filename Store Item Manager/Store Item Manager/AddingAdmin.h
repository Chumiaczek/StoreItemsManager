#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>
#include <sstream>

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
	/// Summary for AddingAdmin
	/// </summary>
	public ref class AddingAdmin : public System::Windows::Forms::Form
	{
	public:
		AddingAdmin(void)
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
		~AddingAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAddAdmin;
	protected:

	protected:
	private: System::Windows::Forms::NumericUpDown^ numUID;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ tblAdmins;
	private: System::Windows::Forms::DataGridView^ tblAdmin;

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
			this->btnAddAdmin = (gcnew System::Windows::Forms::Button());
			this->numUID = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tblAdmins = (gcnew System::Windows::Forms::DataGridView());
			this->tblAdmin = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUID))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblAdmins))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblAdmin))->BeginInit();
			this->SuspendLayout();
			// 
			// btnAddAdmin
			// 
			this->btnAddAdmin->Location = System::Drawing::Point(62, 90);
			this->btnAddAdmin->Name = L"btnAddAdmin";
			this->btnAddAdmin->Size = System::Drawing::Size(191, 64);
			this->btnAddAdmin->TabIndex = 0;
			this->btnAddAdmin->Text = L"Add Admin";
			this->btnAddAdmin->UseVisualStyleBackColor = true;
			this->btnAddAdmin->Click += gcnew System::EventHandler(this, &AddingAdmin::btnAddAdmin_Click);
			// 
			// numUID
			// 
			this->numUID->Location = System::Drawing::Point(62, 12);
			this->numUID->Name = L"numUID";
			this->numUID->Size = System::Drawing::Size(110, 20);
			this->numUID->TabIndex = 1;
			this->numUID->ValueChanged += gcnew System::EventHandler(this, &AddingAdmin::numUID_Changed);
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(62, 38);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(191, 20);
			this->txtUsername->TabIndex = 2;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(62, 64);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(191, 20);
			this->txtPassword->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"UID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(4, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Username";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(4, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Password";
			// 
			// tblAdmins
			// 
			this->tblAdmins->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tblAdmins->Location = System::Drawing::Point(46, 139);
			this->tblAdmins->Name = L"tblAdmins";
			this->tblAdmins->Size = System::Drawing::Size(1, 1);
			this->tblAdmins->TabIndex = 7;
			// 
			// tblAdmin
			// 
			this->tblAdmin->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tblAdmin->Location = System::Drawing::Point(18, 150);
			this->tblAdmin->Name = L"tblAdmin";
			this->tblAdmin->Size = System::Drawing::Size(1, 1);
			this->tblAdmin->TabIndex = 8;
			// 
			// AddingAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(256, 161);
			this->Controls->Add(this->tblAdmin);
			this->Controls->Add(this->tblAdmins);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->numUID);
			this->Controls->Add(this->btnAddAdmin);
			this->Name = L"AddingAdmin";
			this->Text = L"AddingAdmin";
			this->Load += gcnew System::EventHandler(this, &AddingAdmin::AddingAdmin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUID))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblAdmins))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblAdmin))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	String^ connstring = "Server=retake-errorhead.pl;port=3306;database=32732788_project;uid=32732788_project;password=Gregtab2004";
	MySqlConnection^ Conn = gcnew MySqlConnection(connstring);

	private: System::Void AddingAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ CurrUID = System::Convert::ToString(numUID->Value);
		this->btnAddAdmin->Enabled = false;
		try
		{
			Conn->Open();
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT UID,Login,Password FROM Users WHERE UID = " + CurrUID, Conn);
			this->btnAddAdmin->Enabled = false;
			Conn->Close();
		}
		catch (Exception^ e)
		{
			this->btnAddAdmin->Enabled = true;
		}
	}
	private: System::Void numUID_Changed(System::Object^ sender, System::EventArgs^ e) {
		int x;
		String^ CurrUID = System::Convert::ToString(numUID->Value);
		x = System::Convert::ToInt64(CurrUID);
		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT Login,Password FROM Users WHERE UID = " + CurrUID, Conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		tblAdmin->DataSource = dt;
		try
		{
			Conn->Open();
			if (System::Convert::ToInt64(CurrUID) > 1)
			{
				if (tblAdmin->Rows[x]->Cells[1]->Value->ToString() != "")
				{
					btnAddAdmin->Enabled = false;
				}
				else
				{
					btnAddAdmin->Enabled = true;
				}
			}
			else
			{
				btnAddAdmin->Enabled = false;
			}
			Conn->Close();
		}
		catch (Exception^ e)
		{
			if (System::Convert::ToInt64(CurrUID) > 1)
			{
				btnAddAdmin->Enabled = true;
			}
			else
			{
				btnAddAdmin->Enabled = false;
			}
			Conn->Close();
		}
	}
private: System::Void btnAddAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Login = txtUsername->Text;
	String^ Password = txtPassword->Text;
	String^ CurrUID = System::Convert::ToString(numUID->Value);
	try
	{
		Conn->Open();
		String^ cmdString = "INSERT INTO Users (UID,Login,Password) VALUES (@UID,@Login,@Password)";
		MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, Conn);
		cmd->Parameters->AddWithValue("@UID", CurrUID);
		cmd->Parameters->AddWithValue("@Login", Login);
		cmd->Parameters->AddWithValue("@Password", Password);
		cmd->ExecuteNonQuery();
		MessageBox::Show(Login + " Added Succesfully.");
		Conn->Close();
		numUID->Value = 0;
		txtUsername->Text = "";
		txtPassword->Text = "";
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Failed adding admin (E60).");
		Conn->Close();
		numUID->Value = 0;
		txtUsername->Text = "";
		txtPassword->Text = "";
	}
}
};
}
