#pragma region BoringStuff
#pragma once
#include "../../apps/gen-6-test/pkmds_g6.h"
#include <string>
#include <iostream>
#include <atlconv.h>
#include <vcclr.h>
namespace PKXEditor {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for frmMain
	/// </summary>
	public ref class frmMain : public System::Windows::Forms::Form
	{
	public:
		pokemonx_obj * pkx;
		bool redisplayok;
	private: System::Windows::Forms::TextBox^  txtOTName;
	private: System::Windows::Forms::NumericUpDown^  numSpecies;
	private: System::Windows::Forms::TextBox^  txtNickname;
	private: System::Windows::Forms::NumericUpDown^  numItem;
	private: System::Windows::Forms::NumericUpDown^  numMove1;
	private: System::Windows::Forms::NumericUpDown^  numMove2;
	private: System::Windows::Forms::NumericUpDown^  numMove3;
	private: System::Windows::Forms::NumericUpDown^  numMove4;
	private: System::Windows::Forms::NumericUpDown^  numAtkIV;
	private: System::Windows::Forms::NumericUpDown^  numAtkEV;
	private: System::Windows::Forms::NumericUpDown^  numDefEV;
	private: System::Windows::Forms::NumericUpDown^  numDefIV;
	private: System::Windows::Forms::NumericUpDown^  numHPEV;
	private: System::Windows::Forms::NumericUpDown^  numHPIV;
	private: System::Windows::Forms::NumericUpDown^  numSpAtkEV;
	private: System::Windows::Forms::NumericUpDown^  numSpAtkIV;
	private: System::Windows::Forms::NumericUpDown^  numSpDefEV;
	private: System::Windows::Forms::NumericUpDown^  numSpDefIV;
	private: System::Windows::Forms::NumericUpDown^  numSpeEV;
	private: System::Windows::Forms::NumericUpDown^  numSpeIV;
	private: System::Windows::Forms::NumericUpDown^  numEXP;
	private: System::Windows::Forms::NumericUpDown^  numTID;
	private: System::Windows::Forms::NumericUpDown^  numSID;
	private: System::Windows::Forms::ComboBox^  cbNature;
	public: 
	private: System::Windows::Forms::Button^  btnSave;
	public: 
		frmMain(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			pkx = new pokemonx_obj;
			redisplayok = false;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmMain()
		{
			if (components)
			{
				delete components;
				delete pkx;
			}
		}
	private: System::Windows::Forms::Button^  btnLoad;
	private: System::Windows::Forms::OpenFileDialog^  fileOpen;
	private: System::Windows::Forms::SaveFileDialog^  fileSave;
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
			this->btnLoad = (gcnew System::Windows::Forms::Button());
			this->fileOpen = (gcnew System::Windows::Forms::OpenFileDialog());
			this->fileSave = (gcnew System::Windows::Forms::SaveFileDialog());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->txtOTName = (gcnew System::Windows::Forms::TextBox());
			this->numSpecies = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtNickname = (gcnew System::Windows::Forms::TextBox());
			this->numItem = (gcnew System::Windows::Forms::NumericUpDown());
			this->numMove1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numMove2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numMove3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numMove4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numAtkIV = (gcnew System::Windows::Forms::NumericUpDown());
			this->numAtkEV = (gcnew System::Windows::Forms::NumericUpDown());
			this->numDefEV = (gcnew System::Windows::Forms::NumericUpDown());
			this->numDefIV = (gcnew System::Windows::Forms::NumericUpDown());
			this->numHPEV = (gcnew System::Windows::Forms::NumericUpDown());
			this->numHPIV = (gcnew System::Windows::Forms::NumericUpDown());
			this->numSpAtkEV = (gcnew System::Windows::Forms::NumericUpDown());
			this->numSpAtkIV = (gcnew System::Windows::Forms::NumericUpDown());
			this->numSpDefEV = (gcnew System::Windows::Forms::NumericUpDown());
			this->numSpDefIV = (gcnew System::Windows::Forms::NumericUpDown());
			this->numSpeEV = (gcnew System::Windows::Forms::NumericUpDown());
			this->numSpeIV = (gcnew System::Windows::Forms::NumericUpDown());
			this->numEXP = (gcnew System::Windows::Forms::NumericUpDown());
			this->numTID = (gcnew System::Windows::Forms::NumericUpDown());
			this->numSID = (gcnew System::Windows::Forms::NumericUpDown());
			this->cbNature = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpecies))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numItem))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMove1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMove2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMove3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMove4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numAtkIV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numAtkEV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numDefEV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numDefIV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numHPEV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numHPIV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpAtkEV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpAtkIV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpDefEV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpDefIV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpeEV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpeIV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numEXP))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numTID))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSID))->BeginInit();
			this->SuspendLayout();
			// 
			// btnLoad
			// 
			this->btnLoad->Location = System::Drawing::Point(12, 521);
			this->btnLoad->Name = L"btnLoad";
			this->btnLoad->Size = System::Drawing::Size(75, 23);
			this->btnLoad->TabIndex = 0;
			this->btnLoad->Text = L"Load";
			this->btnLoad->UseVisualStyleBackColor = true;
			this->btnLoad->Click += gcnew System::EventHandler(this, &frmMain::btnLoad_Click);
			// 
			// fileOpen
			// 
			this->fileOpen->Filter = L"Decrypted|*.pkx|Encrypted|*.bin";
			// 
			// fileSave
			// 
			this->fileSave->Filter = L"Decrypted|*.pkx|Encrypted|*.bin";
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(197, 521);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(75, 23);
			this->btnSave->TabIndex = 1;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &frmMain::btnSave_Click);
			// 
			// txtOTName
			// 
			this->txtOTName->Location = System::Drawing::Point(172, 64);
			this->txtOTName->MaxLength = 7;
			this->txtOTName->Name = L"txtOTName";
			this->txtOTName->Size = System::Drawing::Size(100, 20);
			this->txtOTName->TabIndex = 2;
			this->txtOTName->TextChanged += gcnew System::EventHandler(this, &frmMain::txtOTName_TextChanged);
			// 
			// numSpecies
			// 
			this->numSpecies->Location = System::Drawing::Point(172, 12);
			this->numSpecies->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1000, 0, 0, 0});
			this->numSpecies->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numSpecies->Name = L"numSpecies";
			this->numSpecies->Size = System::Drawing::Size(100, 20);
			this->numSpecies->TabIndex = 3;
			this->numSpecies->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numSpecies->ValueChanged += gcnew System::EventHandler(this, &frmMain::numSpecies_ValueChanged);
			// 
			// txtNickname
			// 
			this->txtNickname->Location = System::Drawing::Point(172, 38);
			this->txtNickname->MaxLength = 11;
			this->txtNickname->Name = L"txtNickname";
			this->txtNickname->Size = System::Drawing::Size(100, 20);
			this->txtNickname->TabIndex = 4;
			this->txtNickname->TextChanged += gcnew System::EventHandler(this, &frmMain::txtNickname_TextChanged);
			// 
			// numItem
			// 
			this->numItem->Location = System::Drawing::Point(172, 90);
			this->numItem->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1000, 0, 0, 0});
			this->numItem->Name = L"numItem";
			this->numItem->Size = System::Drawing::Size(100, 20);
			this->numItem->TabIndex = 5;
			this->numItem->ValueChanged += gcnew System::EventHandler(this, &frmMain::numItem_ValueChanged);
			// 
			// numMove1
			// 
			this->numMove1->Location = System::Drawing::Point(50, 116);
			this->numMove1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1000, 0, 0, 0});
			this->numMove1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numMove1->Name = L"numMove1";
			this->numMove1->Size = System::Drawing::Size(51, 20);
			this->numMove1->TabIndex = 6;
			this->numMove1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numMove1->ValueChanged += gcnew System::EventHandler(this, &frmMain::numMove1_ValueChanged);
			// 
			// numMove2
			// 
			this->numMove2->Location = System::Drawing::Point(107, 116);
			this->numMove2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1000, 0, 0, 0});
			this->numMove2->Name = L"numMove2";
			this->numMove2->Size = System::Drawing::Size(51, 20);
			this->numMove2->TabIndex = 7;
			this->numMove2->ValueChanged += gcnew System::EventHandler(this, &frmMain::numMove2_ValueChanged);
			// 
			// numMove3
			// 
			this->numMove3->Location = System::Drawing::Point(164, 116);
			this->numMove3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1000, 0, 0, 0});
			this->numMove3->Name = L"numMove3";
			this->numMove3->Size = System::Drawing::Size(51, 20);
			this->numMove3->TabIndex = 8;
			this->numMove3->ValueChanged += gcnew System::EventHandler(this, &frmMain::numMove3_ValueChanged);
			// 
			// numMove4
			// 
			this->numMove4->Location = System::Drawing::Point(221, 116);
			this->numMove4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1000, 0, 0, 0});
			this->numMove4->Name = L"numMove4";
			this->numMove4->Size = System::Drawing::Size(51, 20);
			this->numMove4->TabIndex = 9;
			this->numMove4->ValueChanged += gcnew System::EventHandler(this, &frmMain::numMove4_ValueChanged);
			// 
			// numAtkIV
			// 
			this->numAtkIV->Location = System::Drawing::Point(12, 215);
			this->numAtkIV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {31, 0, 0, 0});
			this->numAtkIV->Name = L"numAtkIV";
			this->numAtkIV->Size = System::Drawing::Size(51, 20);
			this->numAtkIV->TabIndex = 10;
			this->numAtkIV->ValueChanged += gcnew System::EventHandler(this, &frmMain::numAtkIV_ValueChanged);
			// 
			// numAtkEV
			// 
			this->numAtkEV->Location = System::Drawing::Point(69, 215);
			this->numAtkEV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {252, 0, 0, 0});
			this->numAtkEV->Name = L"numAtkEV";
			this->numAtkEV->Size = System::Drawing::Size(51, 20);
			this->numAtkEV->TabIndex = 11;
			this->numAtkEV->ValueChanged += gcnew System::EventHandler(this, &frmMain::numAtkEV_ValueChanged);
			// 
			// numDefEV
			// 
			this->numDefEV->Location = System::Drawing::Point(69, 241);
			this->numDefEV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {252, 0, 0, 0});
			this->numDefEV->Name = L"numDefEV";
			this->numDefEV->Size = System::Drawing::Size(51, 20);
			this->numDefEV->TabIndex = 13;
			this->numDefEV->ValueChanged += gcnew System::EventHandler(this, &frmMain::numDefEV_ValueChanged);
			// 
			// numDefIV
			// 
			this->numDefIV->Location = System::Drawing::Point(12, 241);
			this->numDefIV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {31, 0, 0, 0});
			this->numDefIV->Name = L"numDefIV";
			this->numDefIV->Size = System::Drawing::Size(51, 20);
			this->numDefIV->TabIndex = 12;
			this->numDefIV->ValueChanged += gcnew System::EventHandler(this, &frmMain::numDefIV_ValueChanged);
			// 
			// numHPEV
			// 
			this->numHPEV->Location = System::Drawing::Point(69, 189);
			this->numHPEV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {252, 0, 0, 0});
			this->numHPEV->Name = L"numHPEV";
			this->numHPEV->Size = System::Drawing::Size(51, 20);
			this->numHPEV->TabIndex = 15;
			this->numHPEV->ValueChanged += gcnew System::EventHandler(this, &frmMain::numHPEV_ValueChanged);
			// 
			// numHPIV
			// 
			this->numHPIV->Location = System::Drawing::Point(12, 189);
			this->numHPIV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {31, 0, 0, 0});
			this->numHPIV->Name = L"numHPIV";
			this->numHPIV->Size = System::Drawing::Size(51, 20);
			this->numHPIV->TabIndex = 14;
			this->numHPIV->ValueChanged += gcnew System::EventHandler(this, &frmMain::numHPIV_ValueChanged);
			// 
			// numSpAtkEV
			// 
			this->numSpAtkEV->Location = System::Drawing::Point(69, 267);
			this->numSpAtkEV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {252, 0, 0, 0});
			this->numSpAtkEV->Name = L"numSpAtkEV";
			this->numSpAtkEV->Size = System::Drawing::Size(51, 20);
			this->numSpAtkEV->TabIndex = 17;
			this->numSpAtkEV->ValueChanged += gcnew System::EventHandler(this, &frmMain::numSpAtkEV_ValueChanged);
			// 
			// numSpAtkIV
			// 
			this->numSpAtkIV->Location = System::Drawing::Point(12, 267);
			this->numSpAtkIV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {31, 0, 0, 0});
			this->numSpAtkIV->Name = L"numSpAtkIV";
			this->numSpAtkIV->Size = System::Drawing::Size(51, 20);
			this->numSpAtkIV->TabIndex = 16;
			this->numSpAtkIV->ValueChanged += gcnew System::EventHandler(this, &frmMain::numSpAtkIV_ValueChanged);
			// 
			// numSpDefEV
			// 
			this->numSpDefEV->Location = System::Drawing::Point(69, 293);
			this->numSpDefEV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {252, 0, 0, 0});
			this->numSpDefEV->Name = L"numSpDefEV";
			this->numSpDefEV->Size = System::Drawing::Size(51, 20);
			this->numSpDefEV->TabIndex = 19;
			this->numSpDefEV->ValueChanged += gcnew System::EventHandler(this, &frmMain::numSpDefEV_ValueChanged);
			// 
			// numSpDefIV
			// 
			this->numSpDefIV->Location = System::Drawing::Point(12, 293);
			this->numSpDefIV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {31, 0, 0, 0});
			this->numSpDefIV->Name = L"numSpDefIV";
			this->numSpDefIV->Size = System::Drawing::Size(51, 20);
			this->numSpDefIV->TabIndex = 18;
			this->numSpDefIV->ValueChanged += gcnew System::EventHandler(this, &frmMain::numSpDefIV_ValueChanged);
			// 
			// numSpeEV
			// 
			this->numSpeEV->Location = System::Drawing::Point(69, 319);
			this->numSpeEV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {252, 0, 0, 0});
			this->numSpeEV->Name = L"numSpeEV";
			this->numSpeEV->Size = System::Drawing::Size(51, 20);
			this->numSpeEV->TabIndex = 21;
			this->numSpeEV->ValueChanged += gcnew System::EventHandler(this, &frmMain::numSpeEV_ValueChanged);
			// 
			// numSpeIV
			// 
			this->numSpeIV->Location = System::Drawing::Point(12, 319);
			this->numSpeIV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {31, 0, 0, 0});
			this->numSpeIV->Name = L"numSpeIV";
			this->numSpeIV->Size = System::Drawing::Size(51, 20);
			this->numSpeIV->TabIndex = 20;
			this->numSpeIV->ValueChanged += gcnew System::EventHandler(this, &frmMain::numSpeIV_ValueChanged);
			// 
			// numEXP
			// 
			this->numEXP->Location = System::Drawing::Point(12, 363);
			this->numEXP->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1800000, 0, 0, 0});
			this->numEXP->Name = L"numEXP";
			this->numEXP->Size = System::Drawing::Size(108, 20);
			this->numEXP->TabIndex = 22;
			this->numEXP->ValueChanged += gcnew System::EventHandler(this, &frmMain::numEXP_ValueChanged);
			// 
			// numTID
			// 
			this->numTID->Location = System::Drawing::Point(12, 12);
			this->numTID->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {65535, 0, 0, 0});
			this->numTID->Name = L"numTID";
			this->numTID->Size = System::Drawing::Size(108, 20);
			this->numTID->TabIndex = 23;
			this->numTID->ValueChanged += gcnew System::EventHandler(this, &frmMain::numTID_ValueChanged);
			// 
			// numSID
			// 
			this->numSID->Location = System::Drawing::Point(12, 39);
			this->numSID->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {65535, 0, 0, 0});
			this->numSID->Name = L"numSID";
			this->numSID->Size = System::Drawing::Size(108, 20);
			this->numSID->TabIndex = 24;
			this->numSID->ValueChanged += gcnew System::EventHandler(this, &frmMain::numSID_ValueChanged);
			// 
			// cbNature
			// 
			this->cbNature->FormattingEnabled = true;
			this->cbNature->Items->AddRange(gcnew cli::array< System::Object^  >(25) {L"hardy", L"lonely", L"brave", L"adamant", L"naughty", 
				L"bold", L"docile", L"relaxed", L"impish", L"lax", L"timid", L"hasty", L"serious", L"jolly", L"naive", L"modest", L"mild", L"quiet", 
				L"bashful", L"rash", L"calm", L"gentle", L"sassy", L"careful", L"quirky"});
			this->cbNature->Location = System::Drawing::Point(142, 179);
			this->cbNature->Name = L"cbNature";
			this->cbNature->Size = System::Drawing::Size(121, 21);
			this->cbNature->TabIndex = 25;
			this->cbNature->SelectedIndexChanged += gcnew System::EventHandler(this, &frmMain::cbNature_SelectedIndexChanged);
			// 
			// frmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 556);
			this->Controls->Add(this->cbNature);
			this->Controls->Add(this->numSID);
			this->Controls->Add(this->numTID);
			this->Controls->Add(this->numEXP);
			this->Controls->Add(this->numSpeEV);
			this->Controls->Add(this->numSpeIV);
			this->Controls->Add(this->numSpDefEV);
			this->Controls->Add(this->numSpDefIV);
			this->Controls->Add(this->numSpAtkEV);
			this->Controls->Add(this->numSpAtkIV);
			this->Controls->Add(this->numHPEV);
			this->Controls->Add(this->numHPIV);
			this->Controls->Add(this->numDefEV);
			this->Controls->Add(this->numDefIV);
			this->Controls->Add(this->numAtkEV);
			this->Controls->Add(this->numAtkIV);
			this->Controls->Add(this->numMove4);
			this->Controls->Add(this->numMove3);
			this->Controls->Add(this->numMove2);
			this->Controls->Add(this->numMove1);
			this->Controls->Add(this->numItem);
			this->Controls->Add(this->txtNickname);
			this->Controls->Add(this->numSpecies);
			this->Controls->Add(this->txtOTName);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->btnLoad);
			this->Name = L"frmMain";
			this->Text = L"PKX Editor";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpecies))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numItem))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMove1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMove2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMove3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMove4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numAtkIV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numAtkEV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numDefEV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numDefIV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numHPEV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numHPIV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpAtkEV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpAtkIV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpDefEV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpDefIV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpeEV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpeIV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numEXP))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numTID))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSID))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
#pragma endregion
	private: System::Void btnLoad_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 fileOpen->FileName = "";
				 if((fileOpen->ShowDialog() != System::Windows::Forms::DialogResult::Cancel) & (fileOpen->FileName != ""))
				 {
					 redisplayok = false;
					 pin_ptr<const wchar_t> wch = PtrToStringChars(fileOpen->FileName->Trim());
					 std::wstring nativeWstr(wch);
					 read(nativeWstr.c_str(),pkx);
					 std::wstring ext = L"";
					 std::string::size_type idx;
					 idx = nativeWstr.rfind('.');
					 if(idx != std::wstring::npos)
					 {
						 ext = nativeWstr.substr(idx+1).c_str();
					 }
					 bool encrypted = (ext == L"bin");
					 if(encrypted){decryptpkm(pkx);}
					 std::wstring stdwstr = pkx->otname;
					 String^ SysStr = gcnew String(stdwstr.c_str());
					 txtOTName->Text = SysStr;
					 stdwstr = pkx->nickname;
					 SysStr = gcnew String(stdwstr.c_str());
					 txtNickname->Text = SysStr;
					 numSpecies->Value = (System::Decimal)((int)(pkx->species));
					 numItem->Value = (System::Decimal)((int)(pkx->item));
					 numMove1->Value = (System::Decimal)((int)(pkx->moves[0]));
					 numMove2->Value = (System::Decimal)((int)(pkx->moves[1]));
					 numMove3->Value = (System::Decimal)((int)(pkx->moves[2]));
					 numMove4->Value = (System::Decimal)((int)(pkx->moves[3]));
					 numHPIV->Value = (System::Decimal)((int)(pkx->ivs.hp));
					 numAtkIV->Value = (System::Decimal)((int)(pkx->ivs.attack));
					 numDefIV->Value = (System::Decimal)((int)(pkx->ivs.defense));
					 numSpAtkIV->Value = (System::Decimal)((int)(pkx->ivs.spatk));
					 numSpDefIV->Value = (System::Decimal)((int)(pkx->ivs.spdef));
					 numSpeIV->Value = (System::Decimal)((int)(pkx->ivs.speed));
					 numHPEV->Value = (System::Decimal)((int)(pkx->evs.hp));
					 numAtkEV->Value = (System::Decimal)((int)(pkx->evs.attack));
					 numDefEV->Value = (System::Decimal)((int)(pkx->evs.defense));
					 numSpAtkEV->Value = (System::Decimal)((int)(pkx->evs.spatk));
					 numSpDefEV->Value = (System::Decimal)((int)(pkx->evs.spdef));
					 numSpeEV->Value = (System::Decimal)((int)(pkx->evs.speed));
					 numEXP->Value = (System::Decimal)((int)(pkx->exp));
					 numTID->Value = (System::Decimal)((int)(pkx->tid));
					 numSID->Value = (System::Decimal)((int)(pkx->sid));
					 cbNature->SelectedIndex = (int)(pkx->nature);
					 redisplayok = true;
				 }
			 }
	private: System::Void btnSave_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 fileSave->FileName = "";
				 if((fileSave->ShowDialog() != System::Windows::Forms::DialogResult::Cancel) & (fileSave->FileName != ""))
				 {
					 pin_ptr<const wchar_t> wch = PtrToStringChars(fileSave->FileName->Trim());
					 std::wstring nativeWstr(wch);
					 std::wstring ext = L"";
					 std::string::size_type idx;
					 idx = nativeWstr.rfind('.');
					 if(idx != std::wstring::npos)
					 {
						 ext = nativeWstr.substr(idx+1).c_str();
					 }
					 bool encrypted = (ext == L"bin");
					 if(encrypted){encryptpkm(pkx);}
					 calcchecksum(pkx);
					 pkx->isboxdatadecrypted = 0;
					 pkx->ispartydatadecrypted = 0;
					 write(nativeWstr.c_str(),pkx);
				 }
			 }
	private: System::Void txtOTName_TextChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 if(txtOTName->Text->Length > 0)
					 {
						 pin_ptr<const wchar_t> wch = PtrToStringChars(txtOTName->Text->Trim());
						 std::wstring nativeWstr(wch);
						 memcpy(pkx->otname,nativeWstr.c_str(),8);
					 }
				 }
			 }
	private: System::Void numSpecies_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 pkx->species = (Species::pkmspecies)((int)(numSpecies->Value));
				 }
			 }
	private: System::Void txtNickname_TextChanged(System::Object^  sender, System::EventArgs^  e) 
			 {		 
				 if(redisplayok)
				 {
					 if(txtNickname->Text->Length > 0)
					 {
						 pin_ptr<const wchar_t> wch = PtrToStringChars(txtNickname->Text->Trim());
						 std::wstring nativeWstr(wch);
						 memcpy(pkx->nickname,nativeWstr.c_str(),8);
					 }
				 }
			 }
	private: System::Void numItem_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 pkx->item = (Items::items)((int)(numItem->Value));
				 }
			 }
	private: System::Void numMove1_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 pkx->moves[0] = (Moves::moves)((int)(numMove1->Value));
				 }
			 }
	private: System::Void numMove2_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 pkx->moves[1] = (Moves::moves)((int)(numMove2->Value));
				 }
			 }
	private: System::Void numMove3_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 pkx->moves[2] = (Moves::moves)((int)(numMove3->Value));
				 }
			 }
	private: System::Void numMove4_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 pkx->moves[3] = (Moves::moves)((int)(numMove4->Value));
				 }
			 }
	private: System::Void numHPIV_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 pkx->ivs.hp = ((int)(numHPIV->Value));
				 }
			 }
	private: System::Void numHPEV_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 pkx->evs.hp = ((int)(numHPEV->Value));
				 }
			 }
	private: System::Void numAtkIV_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 pkx->ivs.attack = ((int)(numAtkIV->Value));
				 }
			 }
	private: System::Void numAtkEV_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 pkx->evs.attack = ((int)(numAtkEV->Value));
				 }
			 }
	private: System::Void numDefIV_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 pkx->ivs.defense = ((int)(numDefIV->Value));
				 }
			 }
	private: System::Void numDefEV_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 pkx->evs.defense = ((int)(numDefEV->Value));
				 }
			 }
	private: System::Void numSpAtkIV_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 pkx->ivs.spatk = ((int)(numSpAtkIV->Value));
				 }
			 }
	private: System::Void numSpAtkEV_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 pkx->evs.spatk = ((int)(numSpAtkEV->Value));
				 }
			 }
	private: System::Void numSpDefIV_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 pkx->ivs.spdef = ((int)(numSpDefIV->Value));
				 }
			 }
	private: System::Void numSpDefEV_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 pkx->evs.spdef = ((int)(numSpDefEV->Value));
				 }
			 }
	private: System::Void numSpeIV_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 pkx->ivs.speed = ((int)(numSpeIV->Value));
				 }
			 }
	private: System::Void numSpeEV_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 pkx->evs.speed = ((int)(numSpeEV->Value));
				 }
			 }
	private: System::Void numEXP_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 pkx->exp = ((int)(numEXP->Value));
				 }
			 }
	private: System::Void numTID_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 pkx->tid = ((int)(numTID->Value));
				 }
			 }
	private: System::Void numSID_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 pkx->sid = ((int)(numSID->Value));
				 }
			 }
	private: System::Void cbNature_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 pkx->nature = ((Natures::natures)(cbNature->SelectedIndex));
				 }
			 }
};
}
