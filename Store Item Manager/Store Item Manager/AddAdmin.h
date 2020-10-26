#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>
#include <sstream>
#include "AddingAdmin.h"

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
	/// Summary for AddAdmin
	/// </summary>
	public ref class AddAdmin : public System::Windows::Forms::Form
	{
	public:
		AddAdmin(void)
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
		~AddAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ tblAdmin;
	protected:
	private: System::Windows::Forms::NumericUpDown^ numUID;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Button^ btnEditAdmin;
	private: System::Windows::Forms::Button^ btnDeleteAdmin;
	private: System::Windows::Forms::Button^ btnAddAdmin;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
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
			this->tblAdmin = (gcnew System::Windows::Forms::DataGridView());
			this->numUID = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnEditAdmin = (gcnew System::Windows::Forms::Button());
			this->btnDeleteAdmin = (gcnew System::Windows::Forms::Button());
			this->btnAddAdmin = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblAdmin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUID))->BeginInit();
			this->SuspendLayout();
			// 
			// tblAdmin
			// 
			this->tblAdmin->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tblAdmin->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->tblAdmin->Location = System::Drawing::Point(273, 12);
			this->tblAdmin->Name = L"tblAdmin";
			this->tblAdmin->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tblAdmin->Size = System::Drawing::Size(412, 458);
			this->tblAdmin->TabIndex = 0;
			this->tblAdmin->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AddAdmin::tblAdmin_CellClick);
			// 
			// numUID
			// 
			this->numUID->Location = System::Drawing::Point(65, 153);
			this->numUID->Name = L"numUID";
			this->numUID->Size = System::Drawing::Size(156, 20);
			this->numUID->TabIndex = 1;
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(65, 179);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(156, 20);
			this->txtUsername->TabIndex = 2;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(65, 205);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(156, 20);
			this->txtPassword->TabIndex = 3;
			// 
			// btnEditAdmin
			// 
			this->btnEditAdmin->Location = System::Drawing::Point(7, 276);
			this->btnEditAdmin->Name = L"btnEditAdmin";
			this->btnEditAdmin->Size = System::Drawing::Size(260, 65);
			this->btnEditAdmin->TabIndex = 4;
			this->btnEditAdmin->Text = L"Edit Admin";
			this->btnEditAdmin->UseVisualStyleBackColor = true;
			this->btnEditAdmin->Click += gcnew System::EventHandler(this, &AddAdmin::btnEditAdmin_Click);
			// 
			// btnDeleteAdmin
			// 
			this->btnDeleteAdmin->Location = System::Drawing::Point(7, 347);
			this->btnDeleteAdmin->Name = L"btnDeleteAdmin";
			this->btnDeleteAdmin->Size = System::Drawing::Size(260, 61);
			this->btnDeleteAdmin->TabIndex = 5;
			this->btnDeleteAdmin->Text = L"Delete Admin";
			this->btnDeleteAdmin->UseVisualStyleBackColor = true;
			this->btnDeleteAdmin->Click += gcnew System::EventHandler(this, &AddAdmin::btnDeleteAdmin_Click);
			// 
			// btnAddAdmin
			// 
			this->btnAddAdmin->Location = System::Drawing::Point(7, 414);
			this->btnAddAdmin->Name = L"btnAddAdmin";
			this->btnAddAdmin->Size = System::Drawing::Size(260, 56);
			this->btnAddAdmin->TabIndex = 6;
			this->btnAddAdmin->Text = L"Add Admin";
			this->btnAddAdmin->UseVisualStyleBackColor = true;
			this->btnAddAdmin->Click += gcnew System::EventHandler(this, &AddAdmin::btnAddAdmin_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(5, 155);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"UID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(5, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Username";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 208);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Password";
			// 
			// AddAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(697, 482);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnAddAdmin);
			this->Controls->Add(this->btnDeleteAdmin);
			this->Controls->Add(this->btnEditAdmin);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->numUID);
			this->Controls->Add(this->tblAdmin);
			this->Name = L"AddAdmin";
			this->Text = L"AddAdmin";
			this->Load += gcnew System::EventHandler(this, &AddAdmin::AddAdmin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblAdmin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUID))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	String^ connstring = "Server=retake-errorhead.pl;port=3306;database=32732788_project;uid=32732788_project;password=Gregtab2004";
	MySqlConnection^ Conn = gcnew MySqlConnection(connstring);

	void filltable()
	{
		try {
			Conn->Open();
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT UID,Login,Password FROM Users", Conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			tblAdmin->DataSource = dt;
			Conn->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Failed to Read Data (E15).");
			Conn->Close();
		}
	}

	private: System::Void AddAdmin_Load(System::Object^ sender, System::EventArgs^ e) {

		filltable();
	}
	private: System::Void tblAdmin_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		String^ CurrUID = tblAdmin->Rows[tblAdmin->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
		try {
			Conn->Open();
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT Login,Password FROM Users WHERE UID = " + CurrUID, Conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			numUID->Value = System::Convert::ToInt64(CurrUID);
			txtUsername->Text = tblAdmin->Rows[tblAdmin->CurrentCell->RowIndex]->Cells[1]->Value->ToString();
			txtPassword->Text = tblAdmin->Rows[tblAdmin->CurrentCell->RowIndex]->Cells[2]->Value->ToString();
			Conn->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Failed to Read Data (E21).");
			Conn->Close();
		}
	}
private: System::Void btnDeleteAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ CurrUID = tblAdmin->Rows[tblAdmin->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
	try
	{
		Conn->Open();
		MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM Users WHERE UID = " + CurrUID, Conn);
		cmd->ExecuteNonQuery();
		Conn->Close();
		MessageBox::Show("Item Deleted.");
		filltable();
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error Deleting Files (E4).");
	}
}
private: System::Void btnEditAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tblAdmin->Rows[tblAdmin->CurrentCell->RowIndex]->Cells[0]->Value->ToString() == "")
	{
		MessageBox::Show("No item selected");
	}
	else
	{
		String^ CurrUID = tblAdmin->Rows[tblAdmin->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
		String^ UID = System::Convert::ToString(numUID->Value);
		String^ Login = txtUsername->Text;
		String^ Password = txtPassword->Text;
		try {
			Conn->Open();
			MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE Users SET UID=@UID,Login=@Login,Password=@Password WHERE UID = " + CurrUID, Conn);
			cmd->Parameters->AddWithValue("@UID", UID);
			cmd->Parameters->AddWithValue("@Login", Login);
			cmd->Parameters->AddWithValue("@Password", Password);
			cmd->ExecuteNonQuery();
			MessageBox::Show(Login + " Succesfully updated.");
			Conn->Close();
			filltable();
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Failed to Update Data (E31).");
			Conn->Close();
		}
	}
}
private: System::Void btnAddAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
	AddingAdmin^ form1 = gcnew AddingAdmin;
	form1->Show();
}
};
}
