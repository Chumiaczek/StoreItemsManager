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
	/// Summary for Store_Menu
	/// </summary>
	public ref class Store_Menu : public System::Windows::Forms::Form
	{
	public:
		Store_Menu(void)
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
		~Store_Menu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtLogin_ShowLogin;
	private: System::Windows::Forms::Button^ btnAddItem;
	private: System::Windows::Forms::Button^ btnUpdateItem;
	private: System::Windows::Forms::Button^ btnDeleteItem;
	private: System::Windows::Forms::Button^ btnLogout;
	private: System::Windows::Forms::DataGridView^ tblProducts;
	private: System::Windows::Forms::PictureBox^ imgProductImage;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtDescription;
	private: System::Windows::Forms::NumericUpDown^ numStock;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numPrice;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnChangeImage;
	private: System::Windows::Forms::PictureBox^ imgProduct;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtDisplay_ItemName;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtDisplay_Description;
	private: System::Windows::Forms::Button^ AddItembtn;
	private: System::Windows::Forms::Button^ btnAddImg;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::NumericUpDown^ QuantityItem;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::NumericUpDown^ PriceItem;
	private: System::Windows::Forms::Button^ btnGetBack;
	private: System::Windows::Forms::Button^ btnGoBack_Update;
	private: System::Windows::Forms::DataGridView^ tblProducts2;
	private: System::Windows::Forms::PictureBox^ imgProduct2;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnGoBack_Delete;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Store_Menu::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtLogin_ShowLogin = (gcnew System::Windows::Forms::TextBox());
			this->btnAddItem = (gcnew System::Windows::Forms::Button());
			this->btnUpdateItem = (gcnew System::Windows::Forms::Button());
			this->btnDeleteItem = (gcnew System::Windows::Forms::Button());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->tblProducts = (gcnew System::Windows::Forms::DataGridView());
			this->imgProductImage = (gcnew System::Windows::Forms::PictureBox());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtDescription = (gcnew System::Windows::Forms::TextBox());
			this->numStock = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numPrice = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnChangeImage = (gcnew System::Windows::Forms::Button());
			this->imgProduct = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtDisplay_ItemName = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtDisplay_Description = (gcnew System::Windows::Forms::TextBox());
			this->AddItembtn = (gcnew System::Windows::Forms::Button());
			this->btnAddImg = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->QuantityItem = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->PriceItem = (gcnew System::Windows::Forms::NumericUpDown());
			this->btnGetBack = (gcnew System::Windows::Forms::Button());
			this->btnGoBack_Update = (gcnew System::Windows::Forms::Button());
			this->tblProducts2 = (gcnew System::Windows::Forms::DataGridView());
			this->imgProduct2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnGoBack_Delete = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblProducts))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgProductImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numStock))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPrice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgProduct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->QuantityItem))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PriceItem))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblProducts2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgProduct2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(101, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Logged in as:";
			// 
			// txtLogin_ShowLogin
			// 
			this->txtLogin_ShowLogin->Location = System::Drawing::Point(178, 36);
			this->txtLogin_ShowLogin->Name = L"txtLogin_ShowLogin";
			this->txtLogin_ShowLogin->ReadOnly = true;
			this->txtLogin_ShowLogin->Size = System::Drawing::Size(260, 20);
			this->txtLogin_ShowLogin->TabIndex = 7;
			this->txtLogin_ShowLogin->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnAddItem
			// 
			this->btnAddItem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddItem->Location = System::Drawing::Point(12, 98);
			this->btnAddItem->Name = L"btnAddItem";
			this->btnAddItem->Size = System::Drawing::Size(250, 90);
			this->btnAddItem->TabIndex = 8;
			this->btnAddItem->Text = L"Add Item";
			this->btnAddItem->UseVisualStyleBackColor = true;
			this->btnAddItem->Click += gcnew System::EventHandler(this, &Store_Menu::btnAddItem_Click);
			// 
			// btnUpdateItem
			// 
			this->btnUpdateItem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdateItem->Location = System::Drawing::Point(268, 98);
			this->btnUpdateItem->Name = L"btnUpdateItem";
			this->btnUpdateItem->Size = System::Drawing::Size(250, 90);
			this->btnUpdateItem->TabIndex = 9;
			this->btnUpdateItem->Text = L"Update Item";
			this->btnUpdateItem->UseVisualStyleBackColor = true;
			this->btnUpdateItem->Click += gcnew System::EventHandler(this, &Store_Menu::btnUpdateItem_Click);
			// 
			// btnDeleteItem
			// 
			this->btnDeleteItem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeleteItem->Location = System::Drawing::Point(12, 194);
			this->btnDeleteItem->Name = L"btnDeleteItem";
			this->btnDeleteItem->Size = System::Drawing::Size(250, 90);
			this->btnDeleteItem->TabIndex = 10;
			this->btnDeleteItem->Text = L"Delete Item";
			this->btnDeleteItem->UseVisualStyleBackColor = true;
			this->btnDeleteItem->Click += gcnew System::EventHandler(this, &Store_Menu::btnDeleteItem_Click);
			// 
			// btnLogout
			// 
			this->btnLogout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogout->Location = System::Drawing::Point(268, 194);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(250, 90);
			this->btnLogout->TabIndex = 11;
			this->btnLogout->Text = L"Logout";
			this->btnLogout->UseVisualStyleBackColor = true;
			this->btnLogout->Click += gcnew System::EventHandler(this, &Store_Menu::btnLogout_Click);
			// 
			// tblProducts
			// 
			this->tblProducts->AllowUserToAddRows = false;
			this->tblProducts->AllowUserToDeleteRows = false;
			this->tblProducts->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->tblProducts->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->tblProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tblProducts->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->tblProducts->Location = System::Drawing::Point(309, 12);
			this->tblProducts->MultiSelect = false;
			this->tblProducts->Name = L"tblProducts";
			this->tblProducts->ReadOnly = true;
			this->tblProducts->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tblProducts->Size = System::Drawing::Size(413, 597);
			this->tblProducts->TabIndex = 12;
			this->tblProducts->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Store_Menu::tblProduct_CellClick);
			// 
			// imgProductImage
			// 
			this->imgProductImage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imgProductImage->Location = System::Drawing::Point(78, 12);
			this->imgProductImage->Name = L"imgProductImage";
			this->imgProductImage->Size = System::Drawing::Size(150, 150);
			this->imgProductImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgProductImage->TabIndex = 13;
			this->imgProductImage->TabStop = false;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->Location = System::Drawing::Point(12, 544);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(291, 65);
			this->btnUpdate->TabIndex = 18;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &Store_Menu::btnUpdate_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 287);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 20);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Product Name";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(12, 310);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(291, 20);
			this->txtName->TabIndex = 20;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 333);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 20);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Description";
			// 
			// txtDescription
			// 
			this->txtDescription->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDescription->Location = System::Drawing::Point(12, 356);
			this->txtDescription->Multiline = true;
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(291, 119);
			this->txtDescription->TabIndex = 22;
			// 
			// numStock
			// 
			this->numStock->Location = System::Drawing::Point(59, 481);
			this->numStock->Name = L"numStock";
			this->numStock->Size = System::Drawing::Size(135, 20);
			this->numStock->TabIndex = 23;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 483);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 13);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Quantity";
			// 
			// numPrice
			// 
			this->numPrice->DecimalPlaces = 2;
			this->numPrice->Location = System::Drawing::Point(59, 507);
			this->numPrice->Name = L"numPrice";
			this->numPrice->Size = System::Drawing::Size(135, 20);
			this->numPrice->TabIndex = 25;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 514);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 13);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Price";
			// 
			// btnChangeImage
			// 
			this->btnChangeImage->Location = System::Drawing::Point(200, 483);
			this->btnChangeImage->Name = L"btnChangeImage";
			this->btnChangeImage->Size = System::Drawing::Size(101, 45);
			this->btnChangeImage->TabIndex = 27;
			this->btnChangeImage->Text = L"Change Image";
			this->btnChangeImage->UseVisualStyleBackColor = true;
			this->btnChangeImage->Click += gcnew System::EventHandler(this, &Store_Menu::btnChangeImg_Clicked);
			// 
			// imgProduct
			// 
			this->imgProduct->BackColor = System::Drawing::SystemColors::Control;
			this->imgProduct->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imgProduct->Location = System::Drawing::Point(12, 8);
			this->imgProduct->Name = L"imgProduct";
			this->imgProduct->Size = System::Drawing::Size(175, 180);
			this->imgProduct->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgProduct->TabIndex = 28;
			this->imgProduct->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(194, 13);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(110, 20);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Product Name";
			// 
			// txtDisplay_ItemName
			// 
			this->txtDisplay_ItemName->Location = System::Drawing::Point(198, 39);
			this->txtDisplay_ItemName->Name = L"txtDisplay_ItemName";
			this->txtDisplay_ItemName->Size = System::Drawing::Size(321, 20);
			this->txtDisplay_ItemName->TabIndex = 30;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(194, 62);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(89, 20);
			this->label7->TabIndex = 31;
			this->label7->Text = L"Description";
			// 
			// txtDisplay_Description
			// 
			this->txtDisplay_Description->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtDisplay_Description->Location = System::Drawing::Point(198, 85);
			this->txtDisplay_Description->Multiline = true;
			this->txtDisplay_Description->Name = L"txtDisplay_Description";
			this->txtDisplay_Description->Size = System::Drawing::Size(324, 119);
			this->txtDisplay_Description->TabIndex = 32;
			// 
			// AddItembtn
			// 
			this->AddItembtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddItembtn->Location = System::Drawing::Point(197, 214);
			this->AddItembtn->Name = L"AddItembtn";
			this->AddItembtn->Size = System::Drawing::Size(325, 96);
			this->AddItembtn->TabIndex = 33;
			this->AddItembtn->Text = L"Add Item";
			this->AddItembtn->UseVisualStyleBackColor = true;
			this->AddItembtn->Click += gcnew System::EventHandler(this, &Store_Menu::AddItembtn_Click);
			// 
			// btnAddImg
			// 
			this->btnAddImg->Location = System::Drawing::Point(12, 198);
			this->btnAddImg->Name = L"btnAddImg";
			this->btnAddImg->Size = System::Drawing::Size(175, 36);
			this->btnAddImg->TabIndex = 34;
			this->btnAddImg->Text = L"Add Image";
			this->btnAddImg->UseVisualStyleBackColor = true;
			this->btnAddImg->Click += gcnew System::EventHandler(this, &Store_Menu::btnAddImg_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(9, 237);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(46, 13);
			this->label8->TabIndex = 35;
			this->label8->Text = L"Quantity";
			// 
			// QuantityItem
			// 
			this->QuantityItem->Location = System::Drawing::Point(12, 253);
			this->QuantityItem->Name = L"QuantityItem";
			this->QuantityItem->Size = System::Drawing::Size(135, 20);
			this->QuantityItem->TabIndex = 36;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(9, 274);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(31, 13);
			this->label9->TabIndex = 37;
			this->label9->Text = L"Price";
			// 
			// PriceItem
			// 
			this->PriceItem->DecimalPlaces = 2;
			this->PriceItem->Location = System::Drawing::Point(12, 290);
			this->PriceItem->Name = L"PriceItem";
			this->PriceItem->Size = System::Drawing::Size(135, 20);
			this->PriceItem->TabIndex = 38;
			// 
			// btnGetBack
			// 
			this->btnGetBack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGetBack->Location = System::Drawing::Point(12, 320);
			this->btnGetBack->Name = L"btnGetBack";
			this->btnGetBack->Size = System::Drawing::Size(510, 49);
			this->btnGetBack->TabIndex = 39;
			this->btnGetBack->Text = L"Go back";
			this->btnGetBack->UseVisualStyleBackColor = true;
			this->btnGetBack->Click += gcnew System::EventHandler(this, &Store_Menu::btnGetBack_Click);
			// 
			// btnGoBack_Update
			// 
			this->btnGoBack_Update->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnGoBack_Update->Location = System::Drawing::Point(12, 615);
			this->btnGoBack_Update->Name = L"btnGoBack_Update";
			this->btnGoBack_Update->Size = System::Drawing::Size(710, 42);
			this->btnGoBack_Update->TabIndex = 40;
			this->btnGoBack_Update->Text = L"Go back";
			this->btnGoBack_Update->UseVisualStyleBackColor = true;
			this->btnGoBack_Update->Click += gcnew System::EventHandler(this, &Store_Menu::btnGoBack_Update_Click);
			// 
			// tblProducts2
			// 
			this->tblProducts2->AllowUserToAddRows = false;
			this->tblProducts2->AllowUserToDeleteRows = false;
			this->tblProducts2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->tblProducts2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->tblProducts2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tblProducts2->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->tblProducts2->Location = System::Drawing::Point(300, 13);
			this->tblProducts2->MultiSelect = false;
			this->tblProducts2->Name = L"tblProducts2";
			this->tblProducts2->ReadOnly = true;
			this->tblProducts2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tblProducts2->Size = System::Drawing::Size(413, 336);
			this->tblProducts2->TabIndex = 41;
			this->tblProducts2->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Store_Menu::tblProducts2_CellClick);
			// 
			// imgProduct2
			// 
			this->imgProduct2->BackColor = System::Drawing::SystemColors::Control;
			this->imgProduct2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imgProduct2->Location = System::Drawing::Point(59, 8);
			this->imgProduct2->Name = L"imgProduct2";
			this->imgProduct2->Size = System::Drawing::Size(175, 180);
			this->imgProduct2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgProduct2->TabIndex = 42;
			this->imgProduct2->TabStop = false;
			// 
			// btnDelete
			// 
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Location = System::Drawing::Point(17, 249);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(266, 96);
			this->btnDelete->TabIndex = 43;
			this->btnDelete->Text = L"Delete Item";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &Store_Menu::btnDelete_Click);
			// 
			// btnGoBack_Delete
			// 
			this->btnGoBack_Delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnGoBack_Delete->Location = System::Drawing::Point(17, 356);
			this->btnGoBack_Delete->Name = L"btnGoBack_Delete";
			this->btnGoBack_Delete->Size = System::Drawing::Size(696, 39);
			this->btnGoBack_Delete->TabIndex = 44;
			this->btnGoBack_Delete->Text = L"Go back";
			this->btnGoBack_Delete->UseVisualStyleBackColor = true;
			this->btnGoBack_Delete->Click += gcnew System::EventHandler(this, &Store_Menu::btnGoBackDelete_Clicked);
			// 
			// Store_Menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(513, 266);
			this->Controls->Add(this->imgProduct2);
			this->Controls->Add(this->btnGoBack_Update);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtDisplay_Description);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtDisplay_ItemName);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->imgProduct);
			this->Controls->Add(this->btnChangeImage);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->numPrice);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numStock);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->imgProductImage);
			this->Controls->Add(this->btnAddItem);
			this->Controls->Add(this->btnUpdateItem);
			this->Controls->Add(this->txtLogin_ShowLogin);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->PriceItem);
			this->Controls->Add(this->btnGoBack_Delete);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->QuantityItem);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtDescription);
			this->Controls->Add(this->btnGetBack);
			this->Controls->Add(this->tblProducts);
			this->Controls->Add(this->tblProducts2);
			this->Controls->Add(this->btnLogout);
			this->Controls->Add(this->AddItembtn);
			this->Controls->Add(this->btnAddImg);
			this->Controls->Add(this->btnDeleteItem);
			this->Controls->Add(this->btnDelete);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Store_Menu";
			this->Text = L"Item Menu";
			this->Load += gcnew System::EventHandler(this, &Store_Menu::Store_Menu_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblProducts))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgProductImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numStock))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPrice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgProduct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->QuantityItem))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PriceItem))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblProducts2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgProduct2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	String^ connstring = "Server=retake-errorhead.pl;port=3306;database=32732788_project;uid=32732788_project;password=Gregtab2004";
	MySqlConnection^ Conn = gcnew MySqlConnection(connstring);

	void clearFields()
	{
		imgProduct->ImageLocation = "";
		txtDisplay_ItemName->Text = "";
		txtDisplay_Description->Text = "";
		QuantityItem->Value = 0;
		PriceItem->Value = 0;
	}

	void ShowMenu()
	{
		tblProducts->Hide();
		imgProductImage->Hide();
		btnUpdate->Hide();
		label3->Hide();
		txtName->Hide();
		label4->Hide();
		txtDescription->Hide();
		label2->Hide();
		label5->Hide();
		numStock->Hide();
		numPrice->Hide();
		btnChangeImage->Hide();
		imgProduct->Hide();
		btnAddImg->Hide();
		label8->Hide();
		QuantityItem->Hide();
		label9->Hide();
		PriceItem->Hide();
		label6->Hide();
		txtDisplay_ItemName->Hide();
		label7->Hide();
		txtDisplay_Description->Hide();
		AddItembtn->Hide();
		btnGetBack->Hide();
		btnGoBack_Update->Hide();
		imgProduct2->Hide();
		tblProducts2->Hide();
		btnDelete->Hide();
		btnGoBack_Delete->Hide();
		StoreMenu_LoadandFill();
		this->ClientSize = System::Drawing::Size(529, 305);
		btnUpdateItem->Show();
		btnAddItem->Show();
		btnDeleteItem->Show();
		btnLogout->Show();
		label1->Show();
		txtLogin_ShowLogin->Show();
	}

	void HideMenu()
	{
		btnUpdateItem->Hide();
		btnAddItem->Hide();
		btnDeleteItem->Hide();
		btnLogout->Hide();
		label1->Hide();
		txtLogin_ShowLogin->Hide();
		btnGoBack_Update->Hide();
		btnGetBack->Hide();
	}

	void populateTable()
	{
		try {
			Conn->Open();
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT PID,ProductName,ProductStock,ProductPrice FROM tblProducts", Conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			tblProducts->DataSource = dt;
			Conn->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Failed to Read Data (E1).");
		}
	}
	void populateTable1()
	{
		try {
			Conn->Open();
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT PID,ProductName,ProductStock,ProductPrice FROM tblProducts", Conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			tblProducts2->DataSource = dt;
			Conn->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Failed to Read Data (E1).");
		}
	}

	Void StoreMenu_LoadandFill() {
		int line_nr = 1;
		std::string linia, UID_file;
		std::fstream UID;
		UID.open("UID.txt", std::ios::in);
		if (UID.good() == false)
		{
			MessageBox::Show("The file doesn't exist (E5).");
			exit(0);
		}
		while (getline(UID, linia))
		{
			 UID_file = linia; break;
		}
		std::stringstream UID_File1(UID_file);
		int UID_final = 0;
		UID_File1 >> UID_final;
		try
		{
			Conn->Open();
			MySqlDataAdapter^ read = gcnew MySqlDataAdapter("SELECT Login FROM Users WHERE UID = " + UID_final, Conn);
			DataTable^ dt = gcnew DataTable();
			read->Fill(dt);
			String^ usernamename = dt->Rows[0]->ItemArray[0]->ToString();
			txtLogin_ShowLogin->Text = usernamename;
			Conn->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Error Connecting to Database (E1.1).");
			Conn->Close();
		}

	}
	private: System::Void btnAddItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(545, 412);
		HideMenu();
		imgProduct->Show();
		btnAddImg->Show();
		label8->Show();
		QuantityItem->Show();
		label9->Show();
		PriceItem->Show();
		label6->Show();
		txtDisplay_ItemName->Show();
		label7->Show();
		txtDisplay_Description->Show();
		AddItembtn->Show();
		btnGetBack->Show();

		try
		{
			Conn->Open();

			Conn->Close();
		}
		catch(Exception^ e)
		{
			MessageBox::Show("Failed to read data (E2.1).");
		}

	}
private: System::Void btnUpdateItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Hide Menu stuff and change size of the Window
	HideMenu();
	this->ClientSize = System::Drawing::Size(750, 702);

	imgProductImage->Image = nullptr;
	txtName->Text = "";
	txtDescription->Text = "";
	numPrice->Value = 0;
	numStock->Value = 0;

	//Unhide Update Menu Items
	tblProducts->Show();
	imgProductImage->Show();
	btnUpdate->Show();
	label3->Show();
	txtName->Show();
	label4->Show();
	txtDescription->Show();
	label2->Show();
	label5->Show();
	numStock->Show();
	numPrice->Show();
	btnChangeImage->Show();
	btnGoBack_Update->Show();

	//Populating table
	populateTable();


}
private: System::Void btnDeleteItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClientSize = System::Drawing::Size(750, 444);
	HideMenu();
	imgProduct2->Show();
	tblProducts2->Show();
	btnDelete->Show();
	btnGoBack_Delete->Show();
	populateTable1();
}
private: System::Void btnLogout_Click(System::Object^ sender, System::EventArgs^ e) {
	system("start C:\\Users\\Grzesiek\\Desktop\\Coding\\C++\\StoreItemManager\\1.0\\StoreItemManager\\Debug\\StoreItemManager.exe");
	this->Close();
}
private: System::Void Store_Menu_Load(System::Object^ sender, System::EventArgs^ e) {
	//Showing menu, pure menu
	ShowMenu();
}
private: System::Void AddItembtn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ productName = txtDisplay_ItemName->Text;
	String^ productDescription = txtDisplay_Description->Text;
	int productStock = Convert::ToInt32(QuantityItem->Value);
	double productPrice = Convert::ToDouble(PriceItem->Value);
	array<unsigned char>^ productImage;

	String^ fileLocation = imgProduct->ImageLocation;
	FileStream^ fs = gcnew FileStream(fileLocation, FileMode::Open, FileAccess::Read);
	BinaryReader^ br = gcnew BinaryReader(fs);
	productImage = br->ReadBytes(fs->Length);

	bool isValid = true;

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
private: System::Void btnAddImg_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ ofd = gcnew OpenFileDialog;
	ofd->Filter = "PNG File *.png|*.png|JPG Files *.jpg|*.jpg|All Files *.*|*.*";
	if (ofd->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
		imgProduct->ImageLocation = ofd->FileName;
	}
}
private: System::Void btnGetBack_Click(System::Object^ sender, System::EventArgs^ e) {
	ShowMenu();
}
private: System::Void btnGoBack_Update_Click(System::Object^ sender, System::EventArgs^ e) {
	ShowMenu();
}

private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tblProducts->Rows[tblProducts->CurrentCell->RowIndex]->Cells[0]->Value->ToString() == "")
	{
		MessageBox::Show("No item selected");
	}
	else
	{
		String^ CurrPID = tblProducts->Rows[tblProducts->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
		String^ productName = txtName->Text;
		String^ productDescription = txtDescription->Text;
		int productStock = Convert::ToInt32(numStock->Value);
		double productPrice = Convert::ToDouble(numPrice->Value);
		array<unsigned char>^ productImage;
		try
		{
			MemoryStream^ ms = gcnew MemoryStream();
			if (imgProductImage->Image != nullptr)
			{
				imgProductImage->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				productImage = ms->ToArray();
			}
		}
		catch (Exception^ e)
		{

		}
		try {
			Conn->Open();
			MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE tblProducts SET ProductName=@productName,ProductDescription=@productDescription,ProductStock=@productStock,ProductPrice=@productPrice,ProductImage=@productImage WHERE PID = " + CurrPID, Conn);
			cmd->Parameters->AddWithValue("@productName", productName);
			cmd->Parameters->AddWithValue("@productDescription", productDescription);
			cmd->Parameters->AddWithValue("@productStock", productStock);
			cmd->Parameters->AddWithValue("@productPrice", productPrice);
			cmd->Parameters->AddWithValue("@productImage", productImage);
			cmd->ExecuteNonQuery();
			MessageBox::Show(productName + " Succesfully updated.");
			Conn->Close();
			populateTable();
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Failed to Update Data (E3).");
			Conn->Close();
		}
	}
}
private: System::Void tblProduct_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	tblProducts->Show();
	imgProductImage->Show();
	btnUpdate->Show();
	label3->Show();
	txtName->Show();
	label4->Show();
	txtDescription->Show();
	label2->Show();
	label5->Show();
	numStock->Show();
	numPrice->Show();
	btnChangeImage->Show();
	btnGoBack_Update->Show();
	String^ CurrPID = tblProducts->Rows[tblProducts->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
	try {
		Conn->Open();
		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT ProductImage,ProductDescription FROM tblProducts WHERE PID = " + CurrPID, Conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		String^ productDescription = dt->Rows[0]->ItemArray[1]->ToString();
		array<unsigned char>^ ProductImage = (array<unsigned char>^)dt->Rows[0]->ItemArray[0];
		txtDescription->Text = productDescription;
		txtName->Text = tblProducts->Rows[tblProducts->CurrentCell->RowIndex]->Cells[1]->Value->ToString();
		numStock->Value = Convert::ToInt32(tblProducts->Rows[tblProducts->CurrentCell->RowIndex]->Cells[2]->Value);
		numPrice->Value = Convert::ToDecimal(tblProducts->Rows[tblProducts->CurrentCell->RowIndex]->Cells[3]->Value);
		MemoryStream^ ms = gcnew MemoryStream(ProductImage);
		imgProductImage->Image = Image::FromStream(ms);
		Conn->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Failed to Read Data (E2).");
		Conn->Close();
	}
}



private: System::Void btnGoBackDelete_Clicked(System::Object^ sender, System::EventArgs^ e) {
	ShowMenu();
}

private: System::Void tblProducts2_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	String^ CurrPID = tblProducts2->Rows[tblProducts2->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
	try
	{
		Conn->Open();
		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT ProductImage,ProductDescription FROM tblProducts WHERE PID = " + CurrPID, Conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		array<unsigned char>^ ProductImage = (array<unsigned char>^)dt->Rows[0]->ItemArray[0];
		MemoryStream^ ms = gcnew MemoryStream(ProductImage);
		imgProduct2->Image = Image::FromStream(ms);
		Conn->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Failed to Read Data (E2.1).");
		Conn->Close();
	}
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ CurrPID = tblProducts2->Rows[tblProducts2->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
	try
	{
		Conn->Open();
		MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM tblProducts WHERE PID = " + CurrPID, Conn);
		cmd->ExecuteNonQuery();
		Conn->Close();
		MessageBox::Show("Item Deleted.");
		populateTable1();
		imgProduct2->Image = nullptr;
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error Deleting Files (E4).");
	}
}
private: System::Void btnChangeImg_Clicked(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ ofd = gcnew OpenFileDialog;
		ofd->Filter = "PNG File *.png|*.png|JPG Files *.jpg|*.jpg|All Files *.*|*.*";
		if (ofd->ShowDialog() == Windows::Forms::DialogResult::OK)
		{
			imgProductImage->ImageLocation = ofd->FileName;
		}
}
};
}
