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
	/// Summary for AddItem
	/// </summary>
	public ref class AddItem : public System::Windows::Forms::Form
	{
	public:
		AddItem(void)
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
		~AddItem()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ txtTitle;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtDescription;
	private: System::Windows::Forms::Button^ btnAddItem;
	private: System::Windows::Forms::Button^ btnAddImage;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ imgItem;
	private: System::Windows::Forms::NumericUpDown^ numPrice;
	private: System::Windows::Forms::NumericUpDown^ numStock;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtTitle = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtDescription = (gcnew System::Windows::Forms::TextBox());
			this->btnAddItem = (gcnew System::Windows::Forms::Button());
			this->btnAddImage = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->imgItem = (gcnew System::Windows::Forms::PictureBox());
			this->numPrice = (gcnew System::Windows::Forms::NumericUpDown());
			this->numStock = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgItem))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPrice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numStock))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(217, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Title";
			// 
			// txtTitle
			// 
			this->txtTitle->Location = System::Drawing::Point(220, 33);
			this->txtTitle->Name = L"txtTitle";
			this->txtTitle->Size = System::Drawing::Size(267, 20);
			this->txtTitle->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(217, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Description";
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(220, 103);
			this->txtDescription->Multiline = true;
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(267, 116);
			this->txtDescription->TabIndex = 3;
			// 
			// btnAddItem
			// 
			this->btnAddItem->Location = System::Drawing::Point(223, 239);
			this->btnAddItem->Name = L"btnAddItem";
			this->btnAddItem->Size = System::Drawing::Size(264, 95);
			this->btnAddItem->TabIndex = 4;
			this->btnAddItem->Text = L"Add Item";
			this->btnAddItem->UseVisualStyleBackColor = true;
			this->btnAddItem->Click += gcnew System::EventHandler(this, &AddItem::btnAddItem_Click);
			// 
			// btnAddImage
			// 
			this->btnAddImage->Location = System::Drawing::Point(24, 215);
			this->btnAddImage->Name = L"btnAddImage";
			this->btnAddImage->Size = System::Drawing::Size(178, 43);
			this->btnAddImage->TabIndex = 6;
			this->btnAddImage->Text = L"Add Image";
			this->btnAddImage->UseVisualStyleBackColor = true;
			this->btnAddImage->Click += gcnew System::EventHandler(this, &AddItem::btnAddImage_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 280);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Price";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 316);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Stock";
			// 
			// imgItem
			// 
			this->imgItem->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imgItem->Location = System::Drawing::Point(24, 12);
			this->imgItem->Name = L"imgItem";
			this->imgItem->Size = System::Drawing::Size(178, 176);
			this->imgItem->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgItem->TabIndex = 9;
			this->imgItem->TabStop = false;
			// 
			// numPrice
			// 
			this->numPrice->DecimalPlaces = 2;
			this->numPrice->Location = System::Drawing::Point(66, 278);
			this->numPrice->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000000, 0, 0, 0 });
			this->numPrice->Name = L"numPrice";
			this->numPrice->Size = System::Drawing::Size(136, 20);
			this->numPrice->TabIndex = 10;
			// 
			// numStock
			// 
			this->numStock->Location = System::Drawing::Point(66, 314);
			this->numStock->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
			this->numStock->Name = L"numStock";
			this->numStock->Size = System::Drawing::Size(136, 20);
			this->numStock->TabIndex = 11;
			// 
			// AddItem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(504, 349);
			this->Controls->Add(this->numStock);
			this->Controls->Add(this->numPrice);
			this->Controls->Add(this->imgItem);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnAddImage);
			this->Controls->Add(this->btnAddItem);
			this->Controls->Add(this->txtDescription);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtTitle);
			this->Controls->Add(this->label1);
			this->Name = L"AddItem";
			this->Text = L"Admin >> Add Item";
			this->Load += gcnew System::EventHandler(this, &AddItem::AddItem_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgItem))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPrice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numStock))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	String^ connstring = "Server=retake-errorhead.pl;port=3306;database=32732788_project;uid=32732788_project;password=Gregtab2004";
	MySqlConnection^ Conn = gcnew MySqlConnection(connstring);
	void clearFields()
	{
		imgItem->ImageLocation = "";
		txtTitle->Text = "";
		txtDescription->Text = "";
		numStock->Value = 0;
		numPrice->Value = 0;
	}
	private: System::Void AddItem_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
private: System::Void btnAddItem_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ productName = txtTitle->Text;
	String^ productDescription = txtDescription->Text;
	int productStock = Convert::ToInt32(numStock->Value);
	double productPrice = Convert::ToDouble(numPrice->Value);
	array<unsigned char>^ productImage;

	bool isValid = true;
	String^ fileLocation = imgItem->ImageLocation;
	if (fileLocation == nullptr)
	{
		MessageBox::Show("Insert a Proper Image");
		isValid = false;
	}
	else
	{
		String^ fileLocation = imgItem->ImageLocation;
		FileStream^ fs = gcnew FileStream(fileLocation, FileMode::Open, FileAccess::Read);
		BinaryReader^ br = gcnew BinaryReader(fs);
		productImage = br->ReadBytes(fs->Length);
	}


	if (productName->Trim()->Length <= 2)
	{
		MessageBox::Show("Enter a Proper Product Name.");
		isValid = false;
	}

	if (productPrice <= 0)
	{
		MessageBox::Show("Enter a Proper Product Price.");
		isValid = false;
	}


	if (isValid)
	{
		/*Data Insertion to mySQL*/

		Conn->Open();
		String^ cmdString = "INSERT INTO tblProducts (ProductName, productDescription, productStock, productPrice, productImage) VALUES (@productName,@productDescription,@productStock,@productPrice,@productImage)";
		MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, Conn);
		cmd->Parameters->AddWithValue("@productName", productName);
		cmd->Parameters->AddWithValue("@productDescription", productDescription);
		cmd->Parameters->AddWithValue("@productStock", productStock);
		cmd->Parameters->AddWithValue("@productPrice", productPrice);
		cmd->Parameters->AddWithValue("@productImage", productImage);

		try {
			cmd->ExecuteNonQuery();
			MessageBox::Show(productName + " Inserted Succesfully.");
			Conn->Close();
			clearFields();
		}
		catch (Exception^ e) {
			MessageBox::Show("Inserting Data Failed.");
		}
	}
}
private: System::Void btnAddImage_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ ofd = gcnew OpenFileDialog;
	ofd->Filter = "PNG File *.png|*.png|JPG Files *.jpg|*.jpg|All Files *.*|*.*";
	if (ofd->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
		imgItem->ImageLocation = ofd->FileName;
	}
}
};
}
