#pragma region BoringStuff
#pragma once
#include "../../include/pkmds/pkmds_g6.h"
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
	private: System::Windows::Forms::NumericUpDown^  numMetLevel;
	private: System::Windows::Forms::GroupBox^  gbOTGender;
	private: System::Windows::Forms::RadioButton^  rbOTFemale;
	private: System::Windows::Forms::RadioButton^  rbOTMale;
	private: System::Windows::Forms::NumericUpDown^  numAbility;
	private: System::Windows::Forms::CheckBox^  chkFateful;
	private: System::Windows::Forms::GroupBox^  gbOT;
	private: System::Windows::Forms::TableLayoutPanel^  tlOT;
	private: System::Windows::Forms::TableLayoutPanel^  tlOTGender;
	private: System::Windows::Forms::TableLayoutPanel^  tlIDs;
	private: System::Windows::Forms::Label^  lblSID;
	private: System::Windows::Forms::Label^  lblTID;
	private: System::Windows::Forms::TableLayoutPanel^  tlOTName;
	private: System::Windows::Forms::Label^  lblOTName;

	private: System::Windows::Forms::TableLayoutPanel^  tlStats;
	private: System::Windows::Forms::Label^  lblEVs;
	private: System::Windows::Forms::Label^  lblIVs;
	private: System::Windows::Forms::Label^  lblSpe;
	private: System::Windows::Forms::Label^  lblSpDef;
	private: System::Windows::Forms::Label^  lblSpAtk;
	private: System::Windows::Forms::Label^  lblDef;
	private: System::Windows::Forms::Label^  lblAtk;
	private: System::Windows::Forms::Label^  lblHP;
	private: System::Windows::Forms::GroupBox^  gbStats;
	private: System::Windows::Forms::GroupBox^  gbMoves;
	private: System::Windows::Forms::TableLayoutPanel^  tlMoves;
	private: System::Windows::Forms::GroupBox^  gbOtherInfo;
	private: System::Windows::Forms::TableLayoutPanel^  tlOtherInfo;


	private: System::Windows::Forms::Label^  lblItem;

	private: System::Windows::Forms::Label^  lblEXP;

	private: System::Windows::Forms::Label^  lblAbility;

	private: System::Windows::Forms::Label^  lblNature;
	private: System::Windows::Forms::Label^  lblMetLevel;
	private: System::Windows::Forms::Label^  lblNickname;
	private: System::Windows::Forms::Label^  lblSpecies;
	private: System::Windows::Forms::TableLayoutPanel^  tlMetLoc;
	private: System::Windows::Forms::Label^  lblEggMetLoc;
	private: System::Windows::Forms::NumericUpDown^  numMetLoc;
	private: System::Windows::Forms::NumericUpDown^  numEggMetLoc;
	private: System::Windows::Forms::Label^  lblMetLoc;
	private: System::Windows::Forms::CheckBox^  chkShiny;




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
			this->numMetLevel = (gcnew System::Windows::Forms::NumericUpDown());
			this->gbOTGender = (gcnew System::Windows::Forms::GroupBox());
			this->tlOTGender = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->rbOTFemale = (gcnew System::Windows::Forms::RadioButton());
			this->rbOTMale = (gcnew System::Windows::Forms::RadioButton());
			this->numAbility = (gcnew System::Windows::Forms::NumericUpDown());
			this->chkFateful = (gcnew System::Windows::Forms::CheckBox());
			this->gbOT = (gcnew System::Windows::Forms::GroupBox());
			this->tlOT = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tlIDs = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lblSID = (gcnew System::Windows::Forms::Label());
			this->lblTID = (gcnew System::Windows::Forms::Label());
			this->tlOTName = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lblOTName = (gcnew System::Windows::Forms::Label());
			this->tlStats = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lblEVs = (gcnew System::Windows::Forms::Label());
			this->lblIVs = (gcnew System::Windows::Forms::Label());
			this->lblSpe = (gcnew System::Windows::Forms::Label());
			this->lblSpDef = (gcnew System::Windows::Forms::Label());
			this->lblSpAtk = (gcnew System::Windows::Forms::Label());
			this->lblDef = (gcnew System::Windows::Forms::Label());
			this->lblAtk = (gcnew System::Windows::Forms::Label());
			this->lblHP = (gcnew System::Windows::Forms::Label());
			this->gbStats = (gcnew System::Windows::Forms::GroupBox());
			this->gbMoves = (gcnew System::Windows::Forms::GroupBox());
			this->tlMoves = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->gbOtherInfo = (gcnew System::Windows::Forms::GroupBox());
			this->tlOtherInfo = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lblItem = (gcnew System::Windows::Forms::Label());
			this->lblEXP = (gcnew System::Windows::Forms::Label());
			this->lblAbility = (gcnew System::Windows::Forms::Label());
			this->lblNature = (gcnew System::Windows::Forms::Label());
			this->lblMetLevel = (gcnew System::Windows::Forms::Label());
			this->lblNickname = (gcnew System::Windows::Forms::Label());
			this->lblSpecies = (gcnew System::Windows::Forms::Label());
			this->tlMetLoc = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lblEggMetLoc = (gcnew System::Windows::Forms::Label());
			this->numMetLoc = (gcnew System::Windows::Forms::NumericUpDown());
			this->numEggMetLoc = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblMetLoc = (gcnew System::Windows::Forms::Label());
			this->chkShiny = (gcnew System::Windows::Forms::CheckBox());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMetLevel))->BeginInit();
			this->gbOTGender->SuspendLayout();
			this->tlOTGender->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numAbility))->BeginInit();
			this->gbOT->SuspendLayout();
			this->tlOT->SuspendLayout();
			this->tlIDs->SuspendLayout();
			this->tlOTName->SuspendLayout();
			this->tlStats->SuspendLayout();
			this->gbStats->SuspendLayout();
			this->gbMoves->SuspendLayout();
			this->tlMoves->SuspendLayout();
			this->gbOtherInfo->SuspendLayout();
			this->tlOtherInfo->SuspendLayout();
			this->tlMetLoc->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMetLoc))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numEggMetLoc))->BeginInit();
			this->SuspendLayout();
			// 
			// btnLoad
			// 
			this->btnLoad->Location = System::Drawing::Point(12, 12);
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
			this->btnSave->Location = System::Drawing::Point(12, 41);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(75, 23);
			this->btnSave->TabIndex = 1;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &frmMain::btnSave_Click);
			// 
			// txtOTName
			// 
			this->txtOTName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->txtOTName->Location = System::Drawing::Point(103, 7);
			this->txtOTName->MaxLength = 7;
			this->txtOTName->Name = L"txtOTName";
			this->txtOTName->Size = System::Drawing::Size(142, 20);
			this->txtOTName->TabIndex = 1;
			this->txtOTName->TextChanged += gcnew System::EventHandler(this, &frmMain::txtOTName_TextChanged);
			// 
			// numSpecies
			// 
			this->numSpecies->Location = System::Drawing::Point(204, 7);
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
			this->txtNickname->Location = System::Drawing::Point(204, 33);
			this->txtNickname->MaxLength = 11;
			this->txtNickname->Name = L"txtNickname";
			this->txtNickname->Size = System::Drawing::Size(100, 20);
			this->txtNickname->TabIndex = 5;
			this->txtNickname->TextChanged += gcnew System::EventHandler(this, &frmMain::txtNickname_TextChanged);
			// 
			// numItem
			// 
			this->numItem->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numItem->Location = System::Drawing::Point(53, 124);
			this->numItem->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1000, 0, 0, 0});
			this->numItem->Name = L"numItem";
			this->numItem->Size = System::Drawing::Size(106, 20);
			this->numItem->TabIndex = 7;
			this->numItem->ValueChanged += gcnew System::EventHandler(this, &frmMain::numItem_ValueChanged);
			// 
			// numMove1
			// 
			this->numMove1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numMove1->Location = System::Drawing::Point(3, 7);
			this->numMove1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1000, 0, 0, 0});
			this->numMove1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numMove1->Name = L"numMove1";
			this->numMove1->Size = System::Drawing::Size(82, 20);
			this->numMove1->TabIndex = 0;
			this->numMove1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numMove1->ValueChanged += gcnew System::EventHandler(this, &frmMain::numMove1_ValueChanged);
			// 
			// numMove2
			// 
			this->numMove2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numMove2->Location = System::Drawing::Point(3, 42);
			this->numMove2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1000, 0, 0, 0});
			this->numMove2->Name = L"numMove2";
			this->numMove2->Size = System::Drawing::Size(82, 20);
			this->numMove2->TabIndex = 1;
			this->numMove2->ValueChanged += gcnew System::EventHandler(this, &frmMain::numMove2_ValueChanged);
			// 
			// numMove3
			// 
			this->numMove3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numMove3->Location = System::Drawing::Point(3, 77);
			this->numMove3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1000, 0, 0, 0});
			this->numMove3->Name = L"numMove3";
			this->numMove3->Size = System::Drawing::Size(82, 20);
			this->numMove3->TabIndex = 2;
			this->numMove3->ValueChanged += gcnew System::EventHandler(this, &frmMain::numMove3_ValueChanged);
			// 
			// numMove4
			// 
			this->numMove4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numMove4->Location = System::Drawing::Point(3, 112);
			this->numMove4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1000, 0, 0, 0});
			this->numMove4->Name = L"numMove4";
			this->numMove4->Size = System::Drawing::Size(82, 20);
			this->numMove4->TabIndex = 3;
			this->numMove4->ValueChanged += gcnew System::EventHandler(this, &frmMain::numMove4_ValueChanged);
			// 
			// numAtkIV
			// 
			this->numAtkIV->Location = System::Drawing::Point(63, 55);
			this->numAtkIV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {31, 0, 0, 0});
			this->numAtkIV->Name = L"numAtkIV";
			this->numAtkIV->Size = System::Drawing::Size(51, 20);
			this->numAtkIV->TabIndex = 6;
			this->numAtkIV->ValueChanged += gcnew System::EventHandler(this, &frmMain::numAtkIV_ValueChanged);
			// 
			// numAtkEV
			// 
			this->numAtkEV->Location = System::Drawing::Point(126, 55);
			this->numAtkEV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {252, 0, 0, 0});
			this->numAtkEV->Name = L"numAtkEV";
			this->numAtkEV->Size = System::Drawing::Size(51, 20);
			this->numAtkEV->TabIndex = 7;
			this->numAtkEV->ValueChanged += gcnew System::EventHandler(this, &frmMain::numAtkEV_ValueChanged);
			// 
			// numDefEV
			// 
			this->numDefEV->Location = System::Drawing::Point(126, 81);
			this->numDefEV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {252, 0, 0, 0});
			this->numDefEV->Name = L"numDefEV";
			this->numDefEV->Size = System::Drawing::Size(51, 20);
			this->numDefEV->TabIndex = 10;
			this->numDefEV->ValueChanged += gcnew System::EventHandler(this, &frmMain::numDefEV_ValueChanged);
			// 
			// numDefIV
			// 
			this->numDefIV->Location = System::Drawing::Point(63, 81);
			this->numDefIV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {31, 0, 0, 0});
			this->numDefIV->Name = L"numDefIV";
			this->numDefIV->Size = System::Drawing::Size(51, 20);
			this->numDefIV->TabIndex = 9;
			this->numDefIV->ValueChanged += gcnew System::EventHandler(this, &frmMain::numDefIV_ValueChanged);
			// 
			// numHPEV
			// 
			this->numHPEV->Location = System::Drawing::Point(126, 29);
			this->numHPEV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {252, 0, 0, 0});
			this->numHPEV->Name = L"numHPEV";
			this->numHPEV->Size = System::Drawing::Size(51, 20);
			this->numHPEV->TabIndex = 4;
			this->numHPEV->ValueChanged += gcnew System::EventHandler(this, &frmMain::numHPEV_ValueChanged);
			// 
			// numHPIV
			// 
			this->numHPIV->Location = System::Drawing::Point(63, 29);
			this->numHPIV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {31, 0, 0, 0});
			this->numHPIV->Name = L"numHPIV";
			this->numHPIV->Size = System::Drawing::Size(51, 20);
			this->numHPIV->TabIndex = 3;
			this->numHPIV->ValueChanged += gcnew System::EventHandler(this, &frmMain::numHPIV_ValueChanged);
			// 
			// numSpAtkEV
			// 
			this->numSpAtkEV->Location = System::Drawing::Point(126, 107);
			this->numSpAtkEV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {252, 0, 0, 0});
			this->numSpAtkEV->Name = L"numSpAtkEV";
			this->numSpAtkEV->Size = System::Drawing::Size(51, 20);
			this->numSpAtkEV->TabIndex = 13;
			this->numSpAtkEV->ValueChanged += gcnew System::EventHandler(this, &frmMain::numSpAtkEV_ValueChanged);
			// 
			// numSpAtkIV
			// 
			this->numSpAtkIV->Location = System::Drawing::Point(63, 107);
			this->numSpAtkIV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {31, 0, 0, 0});
			this->numSpAtkIV->Name = L"numSpAtkIV";
			this->numSpAtkIV->Size = System::Drawing::Size(51, 20);
			this->numSpAtkIV->TabIndex = 12;
			this->numSpAtkIV->ValueChanged += gcnew System::EventHandler(this, &frmMain::numSpAtkIV_ValueChanged);
			// 
			// numSpDefEV
			// 
			this->numSpDefEV->Location = System::Drawing::Point(126, 133);
			this->numSpDefEV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {252, 0, 0, 0});
			this->numSpDefEV->Name = L"numSpDefEV";
			this->numSpDefEV->Size = System::Drawing::Size(51, 20);
			this->numSpDefEV->TabIndex = 16;
			this->numSpDefEV->ValueChanged += gcnew System::EventHandler(this, &frmMain::numSpDefEV_ValueChanged);
			// 
			// numSpDefIV
			// 
			this->numSpDefIV->Location = System::Drawing::Point(63, 133);
			this->numSpDefIV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {31, 0, 0, 0});
			this->numSpDefIV->Name = L"numSpDefIV";
			this->numSpDefIV->Size = System::Drawing::Size(51, 20);
			this->numSpDefIV->TabIndex = 15;
			this->numSpDefIV->ValueChanged += gcnew System::EventHandler(this, &frmMain::numSpDefIV_ValueChanged);
			// 
			// numSpeEV
			// 
			this->numSpeEV->Location = System::Drawing::Point(126, 159);
			this->numSpeEV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {252, 0, 0, 0});
			this->numSpeEV->Name = L"numSpeEV";
			this->numSpeEV->Size = System::Drawing::Size(51, 20);
			this->numSpeEV->TabIndex = 19;
			this->numSpeEV->ValueChanged += gcnew System::EventHandler(this, &frmMain::numSpeEV_ValueChanged);
			// 
			// numSpeIV
			// 
			this->numSpeIV->Location = System::Drawing::Point(63, 159);
			this->numSpeIV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {31, 0, 0, 0});
			this->numSpeIV->Name = L"numSpeIV";
			this->numSpeIV->Size = System::Drawing::Size(51, 20);
			this->numSpeIV->TabIndex = 18;
			this->numSpeIV->ValueChanged += gcnew System::EventHandler(this, &frmMain::numSpeIV_ValueChanged);
			// 
			// numEXP
			// 
			this->numEXP->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numEXP->Location = System::Drawing::Point(53, 85);
			this->numEXP->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1800000, 0, 0, 0});
			this->numEXP->Name = L"numEXP";
			this->numEXP->Size = System::Drawing::Size(106, 20);
			this->numEXP->TabIndex = 5;
			this->numEXP->ValueChanged += gcnew System::EventHandler(this, &frmMain::numEXP_ValueChanged);
			// 
			// numTID
			// 
			this->numTID->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numTID->Location = System::Drawing::Point(103, 6);
			this->numTID->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {65535, 0, 0, 0});
			this->numTID->Name = L"numTID";
			this->numTID->Size = System::Drawing::Size(142, 20);
			this->numTID->TabIndex = 1;
			this->numTID->ValueChanged += gcnew System::EventHandler(this, &frmMain::numTID_ValueChanged);
			// 
			// numSID
			// 
			this->numSID->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numSID->Location = System::Drawing::Point(103, 40);
			this->numSID->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {65535, 0, 0, 0});
			this->numSID->Name = L"numSID";
			this->numSID->Size = System::Drawing::Size(142, 20);
			this->numSID->TabIndex = 3;
			this->numSID->ValueChanged += gcnew System::EventHandler(this, &frmMain::numSID_ValueChanged);
			// 
			// cbNature
			// 
			this->cbNature->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->cbNature->FormattingEnabled = true;
			this->cbNature->Items->AddRange(gcnew cli::array< System::Object^  >(25) {L"hardy", L"lonely", L"brave", L"adamant", L"naughty", 
				L"bold", L"docile", L"relaxed", L"impish", L"lax", L"timid", L"hasty", L"serious", L"jolly", L"naive", L"modest", L"mild", L"quiet", 
				L"bashful", L"rash", L"calm", L"gentle", L"sassy", L"careful", L"quirky"});
			this->cbNature->Location = System::Drawing::Point(53, 8);
			this->cbNature->Name = L"cbNature";
			this->cbNature->Size = System::Drawing::Size(106, 21);
			this->cbNature->TabIndex = 1;
			this->cbNature->SelectedIndexChanged += gcnew System::EventHandler(this, &frmMain::cbNature_SelectedIndexChanged);
			// 
			// numMetLevel
			// 
			this->numMetLevel->Location = System::Drawing::Point(189, 59);
			this->numMetLevel->Name = L"numMetLevel";
			this->numMetLevel->Size = System::Drawing::Size(51, 20);
			this->numMetLevel->TabIndex = 7;
			this->numMetLevel->ValueChanged += gcnew System::EventHandler(this, &frmMain::numMetLevel_ValueChanged);
			// 
			// gbOTGender
			// 
			this->gbOTGender->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->gbOTGender->Controls->Add(this->tlOTGender);
			this->gbOTGender->Location = System::Drawing::Point(69, 116);
			this->gbOTGender->Name = L"gbOTGender";
			this->gbOTGender->Size = System::Drawing::Size(115, 67);
			this->gbOTGender->TabIndex = 0;
			this->gbOTGender->TabStop = false;
			this->gbOTGender->Text = L"OT Gender";
			// 
			// tlOTGender
			// 
			this->tlOTGender->ColumnCount = 1;
			this->tlOTGender->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlOTGender->Controls->Add(this->rbOTFemale, 0, 1);
			this->tlOTGender->Controls->Add(this->rbOTMale, 0, 0);
			this->tlOTGender->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlOTGender->Location = System::Drawing::Point(3, 16);
			this->tlOTGender->Name = L"tlOTGender";
			this->tlOTGender->RowCount = 2;
			this->tlOTGender->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlOTGender->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlOTGender->Size = System::Drawing::Size(109, 48);
			this->tlOTGender->TabIndex = 0;
			// 
			// rbOTFemale
			// 
			this->rbOTFemale->AutoSize = true;
			this->rbOTFemale->Location = System::Drawing::Point(3, 27);
			this->rbOTFemale->Name = L"rbOTFemale";
			this->rbOTFemale->Size = System::Drawing::Size(59, 17);
			this->rbOTFemale->TabIndex = 1;
			this->rbOTFemale->TabStop = true;
			this->rbOTFemale->Text = L"Female";
			this->rbOTFemale->UseVisualStyleBackColor = true;
			this->rbOTFemale->CheckedChanged += gcnew System::EventHandler(this, &frmMain::rbOTFemale_CheckedChanged);
			// 
			// rbOTMale
			// 
			this->rbOTMale->AutoSize = true;
			this->rbOTMale->Location = System::Drawing::Point(3, 3);
			this->rbOTMale->Name = L"rbOTMale";
			this->rbOTMale->Size = System::Drawing::Size(48, 17);
			this->rbOTMale->TabIndex = 0;
			this->rbOTMale->TabStop = true;
			this->rbOTMale->Text = L"Male";
			this->rbOTMale->UseVisualStyleBackColor = true;
			this->rbOTMale->CheckedChanged += gcnew System::EventHandler(this, &frmMain::rbOTMale_CheckedChanged);
			// 
			// numAbility
			// 
			this->numAbility->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numAbility->Location = System::Drawing::Point(53, 47);
			this->numAbility->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {250, 0, 0, 0});
			this->numAbility->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numAbility->Name = L"numAbility";
			this->numAbility->Size = System::Drawing::Size(106, 20);
			this->numAbility->TabIndex = 3;
			this->numAbility->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numAbility->ValueChanged += gcnew System::EventHandler(this, &frmMain::numAbility_ValueChanged);
			// 
			// chkFateful
			// 
			this->chkFateful->AutoSize = true;
			this->chkFateful->Location = System::Drawing::Point(246, 59);
			this->chkFateful->Name = L"chkFateful";
			this->chkFateful->Size = System::Drawing::Size(58, 17);
			this->chkFateful->TabIndex = 8;
			this->chkFateful->Text = L"Fateful";
			this->chkFateful->UseVisualStyleBackColor = true;
			this->chkFateful->CheckedChanged += gcnew System::EventHandler(this, &frmMain::chkFateful_CheckedChanged);
			// 
			// gbOT
			// 
			this->gbOT->Controls->Add(this->tlOT);
			this->gbOT->Location = System::Drawing::Point(384, 12);
			this->gbOT->Name = L"gbOT";
			this->gbOT->Size = System::Drawing::Size(260, 205);
			this->gbOT->TabIndex = 11;
			this->gbOT->TabStop = false;
			this->gbOT->Text = L"OT Info";
			// 
			// tlOT
			// 
			this->tlOT->ColumnCount = 1;
			this->tlOT->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlOT->Controls->Add(this->tlIDs, 0, 1);
			this->tlOT->Controls->Add(this->gbOTGender, 0, 2);
			this->tlOT->Controls->Add(this->tlOTName, 0, 0);
			this->tlOT->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlOT->Location = System::Drawing::Point(3, 16);
			this->tlOT->Name = L"tlOT";
			this->tlOT->RowCount = 3;
			this->tlOT->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tlOT->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlOT->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlOT->Size = System::Drawing::Size(254, 186);
			this->tlOT->TabIndex = 0;
			// 
			// tlIDs
			// 
			this->tlIDs->ColumnCount = 2;
			this->tlIDs->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 100)));
			this->tlIDs->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlIDs->Controls->Add(this->lblSID, 0, 1);
			this->tlIDs->Controls->Add(this->numTID, 1, 0);
			this->tlIDs->Controls->Add(this->numSID, 1, 1);
			this->tlIDs->Controls->Add(this->lblTID, 0, 0);
			this->tlIDs->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlIDs->Location = System::Drawing::Point(3, 43);
			this->tlIDs->Name = L"tlIDs";
			this->tlIDs->RowCount = 2;
			this->tlIDs->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlIDs->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlIDs->Size = System::Drawing::Size(248, 67);
			this->tlIDs->TabIndex = 2;
			// 
			// lblSID
			// 
			this->lblSID->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblSID->Location = System::Drawing::Point(3, 33);
			this->lblSID->Name = L"lblSID";
			this->lblSID->Size = System::Drawing::Size(94, 34);
			this->lblSID->TabIndex = 2;
			this->lblSID->Text = L"OT SID";
			this->lblSID->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblTID
			// 
			this->lblTID->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblTID->Location = System::Drawing::Point(3, 0);
			this->lblTID->Name = L"lblTID";
			this->lblTID->Size = System::Drawing::Size(94, 33);
			this->lblTID->TabIndex = 0;
			this->lblTID->Text = L"OT ID";
			this->lblTID->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// tlOTName
			// 
			this->tlOTName->ColumnCount = 2;
			this->tlOTName->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 100)));
			this->tlOTName->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlOTName->Controls->Add(this->lblOTName, 0, 0);
			this->tlOTName->Controls->Add(this->txtOTName, 1, 0);
			this->tlOTName->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlOTName->Location = System::Drawing::Point(3, 3);
			this->tlOTName->Name = L"tlOTName";
			this->tlOTName->RowCount = 1;
			this->tlOTName->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlOTName->Size = System::Drawing::Size(248, 34);
			this->tlOTName->TabIndex = 28;
			// 
			// lblOTName
			// 
			this->lblOTName->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblOTName->Location = System::Drawing::Point(3, 0);
			this->lblOTName->Name = L"lblOTName";
			this->lblOTName->Size = System::Drawing::Size(94, 34);
			this->lblOTName->TabIndex = 0;
			this->lblOTName->Text = L"OT Name";
			this->lblOTName->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// tlStats
			// 
			this->tlStats->ColumnCount = 3;
			this->tlStats->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tlStats->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlStats->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlStats->Controls->Add(this->lblEVs, 2, 0);
			this->tlStats->Controls->Add(this->lblIVs, 1, 0);
			this->tlStats->Controls->Add(this->lblSpe, 0, 6);
			this->tlStats->Controls->Add(this->lblSpDef, 0, 5);
			this->tlStats->Controls->Add(this->lblSpAtk, 0, 4);
			this->tlStats->Controls->Add(this->lblDef, 0, 3);
			this->tlStats->Controls->Add(this->lblAtk, 0, 2);
			this->tlStats->Controls->Add(this->numSpeEV, 2, 6);
			this->tlStats->Controls->Add(this->lblHP, 0, 1);
			this->tlStats->Controls->Add(this->numSpDefEV, 2, 5);
			this->tlStats->Controls->Add(this->numSpeIV, 1, 6);
			this->tlStats->Controls->Add(this->numSpAtkEV, 2, 4);
			this->tlStats->Controls->Add(this->numHPIV, 1, 1);
			this->tlStats->Controls->Add(this->numDefEV, 2, 3);
			this->tlStats->Controls->Add(this->numHPEV, 2, 1);
			this->tlStats->Controls->Add(this->numAtkEV, 2, 2);
			this->tlStats->Controls->Add(this->numSpDefIV, 1, 5);
			this->tlStats->Controls->Add(this->numAtkIV, 1, 2);
			this->tlStats->Controls->Add(this->numDefIV, 1, 3);
			this->tlStats->Controls->Add(this->numSpAtkIV, 1, 4);
			this->tlStats->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlStats->Location = System::Drawing::Point(3, 16);
			this->tlStats->Name = L"tlStats";
			this->tlStats->RowCount = 7;
			this->tlStats->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tlStats->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tlStats->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tlStats->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tlStats->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tlStats->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tlStats->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tlStats->Size = System::Drawing::Size(186, 183);
			this->tlStats->TabIndex = 0;
			// 
			// lblEVs
			// 
			this->lblEVs->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblEVs->Location = System::Drawing::Point(126, 0);
			this->lblEVs->Name = L"lblEVs";
			this->lblEVs->Size = System::Drawing::Size(57, 26);
			this->lblEVs->TabIndex = 1;
			this->lblEVs->Text = L"EVs";
			this->lblEVs->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblIVs
			// 
			this->lblIVs->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblIVs->Location = System::Drawing::Point(63, 0);
			this->lblIVs->Name = L"lblIVs";
			this->lblIVs->Size = System::Drawing::Size(57, 26);
			this->lblIVs->TabIndex = 0;
			this->lblIVs->Text = L"IVs";
			this->lblIVs->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblSpe
			// 
			this->lblSpe->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblSpe->Location = System::Drawing::Point(3, 156);
			this->lblSpe->Name = L"lblSpe";
			this->lblSpe->Size = System::Drawing::Size(54, 27);
			this->lblSpe->TabIndex = 17;
			this->lblSpe->Text = L"Spe";
			this->lblSpe->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblSpDef
			// 
			this->lblSpDef->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblSpDef->Location = System::Drawing::Point(3, 130);
			this->lblSpDef->Name = L"lblSpDef";
			this->lblSpDef->Size = System::Drawing::Size(54, 26);
			this->lblSpDef->TabIndex = 14;
			this->lblSpDef->Text = L"SpDef";
			this->lblSpDef->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblSpAtk
			// 
			this->lblSpAtk->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblSpAtk->Location = System::Drawing::Point(3, 104);
			this->lblSpAtk->Name = L"lblSpAtk";
			this->lblSpAtk->Size = System::Drawing::Size(54, 26);
			this->lblSpAtk->TabIndex = 11;
			this->lblSpAtk->Text = L"SpAtk";
			this->lblSpAtk->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblDef
			// 
			this->lblDef->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblDef->Location = System::Drawing::Point(3, 78);
			this->lblDef->Name = L"lblDef";
			this->lblDef->Size = System::Drawing::Size(54, 26);
			this->lblDef->TabIndex = 8;
			this->lblDef->Text = L"Def";
			this->lblDef->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblAtk
			// 
			this->lblAtk->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblAtk->Location = System::Drawing::Point(3, 52);
			this->lblAtk->Name = L"lblAtk";
			this->lblAtk->Size = System::Drawing::Size(54, 26);
			this->lblAtk->TabIndex = 5;
			this->lblAtk->Text = L"Atk";
			this->lblAtk->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblHP
			// 
			this->lblHP->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblHP->Location = System::Drawing::Point(3, 26);
			this->lblHP->Name = L"lblHP";
			this->lblHP->Size = System::Drawing::Size(54, 26);
			this->lblHP->TabIndex = 2;
			this->lblHP->Text = L"HP";
			this->lblHP->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// gbStats
			// 
			this->gbStats->Controls->Add(this->tlStats);
			this->gbStats->Location = System::Drawing::Point(186, 85);
			this->gbStats->Name = L"gbStats";
			this->gbStats->Size = System::Drawing::Size(192, 202);
			this->gbStats->TabIndex = 10;
			this->gbStats->TabStop = false;
			this->gbStats->Text = L"Stats";
			// 
			// gbMoves
			// 
			this->gbMoves->Controls->Add(this->tlMoves);
			this->gbMoves->Location = System::Drawing::Point(384, 217);
			this->gbMoves->Name = L"gbMoves";
			this->gbMoves->Size = System::Drawing::Size(94, 159);
			this->gbMoves->TabIndex = 12;
			this->gbMoves->TabStop = false;
			this->gbMoves->Text = L"Moves";
			// 
			// tlMoves
			// 
			this->tlMoves->ColumnCount = 1;
			this->tlMoves->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlMoves->Controls->Add(this->numMove1, 0, 0);
			this->tlMoves->Controls->Add(this->numMove2, 0, 1);
			this->tlMoves->Controls->Add(this->numMove3, 0, 2);
			this->tlMoves->Controls->Add(this->numMove4, 0, 3);
			this->tlMoves->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlMoves->Location = System::Drawing::Point(3, 16);
			this->tlMoves->Name = L"tlMoves";
			this->tlMoves->RowCount = 4;
			this->tlMoves->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tlMoves->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tlMoves->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tlMoves->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tlMoves->Size = System::Drawing::Size(88, 140);
			this->tlMoves->TabIndex = 0;
			// 
			// gbOtherInfo
			// 
			this->gbOtherInfo->Controls->Add(this->tlOtherInfo);
			this->gbOtherInfo->Location = System::Drawing::Point(12, 85);
			this->gbOtherInfo->Name = L"gbOtherInfo";
			this->gbOtherInfo->Size = System::Drawing::Size(168, 174);
			this->gbOtherInfo->TabIndex = 9;
			this->gbOtherInfo->TabStop = false;
			this->gbOtherInfo->Text = L"Other Info";
			// 
			// tlOtherInfo
			// 
			this->tlOtherInfo->ColumnCount = 2;
			this->tlOtherInfo->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tlOtherInfo->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlOtherInfo->Controls->Add(this->lblItem, 0, 3);
			this->tlOtherInfo->Controls->Add(this->lblEXP, 0, 2);
			this->tlOtherInfo->Controls->Add(this->lblAbility, 0, 1);
			this->tlOtherInfo->Controls->Add(this->lblNature, 0, 0);
			this->tlOtherInfo->Controls->Add(this->cbNature, 1, 0);
			this->tlOtherInfo->Controls->Add(this->numAbility, 1, 1);
			this->tlOtherInfo->Controls->Add(this->numEXP, 1, 2);
			this->tlOtherInfo->Controls->Add(this->numItem, 1, 3);
			this->tlOtherInfo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlOtherInfo->Location = System::Drawing::Point(3, 16);
			this->tlOtherInfo->Name = L"tlOtherInfo";
			this->tlOtherInfo->RowCount = 4;
			this->tlOtherInfo->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tlOtherInfo->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tlOtherInfo->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tlOtherInfo->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tlOtherInfo->Size = System::Drawing::Size(162, 155);
			this->tlOtherInfo->TabIndex = 0;
			// 
			// lblItem
			// 
			this->lblItem->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblItem->Location = System::Drawing::Point(3, 114);
			this->lblItem->Name = L"lblItem";
			this->lblItem->Size = System::Drawing::Size(44, 41);
			this->lblItem->TabIndex = 6;
			this->lblItem->Text = L"Item";
			this->lblItem->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblEXP
			// 
			this->lblEXP->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblEXP->Location = System::Drawing::Point(3, 76);
			this->lblEXP->Name = L"lblEXP";
			this->lblEXP->Size = System::Drawing::Size(44, 38);
			this->lblEXP->TabIndex = 4;
			this->lblEXP->Text = L"EXP";
			this->lblEXP->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblAbility
			// 
			this->lblAbility->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblAbility->Location = System::Drawing::Point(3, 38);
			this->lblAbility->Name = L"lblAbility";
			this->lblAbility->Size = System::Drawing::Size(44, 38);
			this->lblAbility->TabIndex = 2;
			this->lblAbility->Text = L"Ability";
			this->lblAbility->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblNature
			// 
			this->lblNature->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblNature->Location = System::Drawing::Point(3, 0);
			this->lblNature->Name = L"lblNature";
			this->lblNature->Size = System::Drawing::Size(44, 38);
			this->lblNature->TabIndex = 0;
			this->lblNature->Text = L"Nature";
			this->lblNature->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblMetLevel
			// 
			this->lblMetLevel->AutoSize = true;
			this->lblMetLevel->Location = System::Drawing::Point(129, 61);
			this->lblMetLevel->Name = L"lblMetLevel";
			this->lblMetLevel->Size = System::Drawing::Size(54, 13);
			this->lblMetLevel->TabIndex = 6;
			this->lblMetLevel->Text = L"Met Level";
			// 
			// lblNickname
			// 
			this->lblNickname->AutoSize = true;
			this->lblNickname->Location = System::Drawing::Point(143, 36);
			this->lblNickname->Name = L"lblNickname";
			this->lblNickname->Size = System::Drawing::Size(55, 13);
			this->lblNickname->TabIndex = 4;
			this->lblNickname->Text = L"Nickname";
			// 
			// lblSpecies
			// 
			this->lblSpecies->AutoSize = true;
			this->lblSpecies->Location = System::Drawing::Point(93, 9);
			this->lblSpecies->Name = L"lblSpecies";
			this->lblSpecies->Size = System::Drawing::Size(105, 13);
			this->lblSpecies->TabIndex = 2;
			this->lblSpecies->Text = L"National Pokedex ID";
			// 
			// tlMetLoc
			// 
			this->tlMetLoc->ColumnCount = 2;
			this->tlMetLoc->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 100)));
			this->tlMetLoc->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlMetLoc->Controls->Add(this->lblEggMetLoc, 0, 1);
			this->tlMetLoc->Controls->Add(this->numMetLoc, 1, 0);
			this->tlMetLoc->Controls->Add(this->numEggMetLoc, 1, 1);
			this->tlMetLoc->Controls->Add(this->lblMetLoc, 0, 0);
			this->tlMetLoc->Location = System::Drawing::Point(12, 293);
			this->tlMetLoc->Name = L"tlMetLoc";
			this->tlMetLoc->RowCount = 2;
			this->tlMetLoc->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlMetLoc->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlMetLoc->Size = System::Drawing::Size(248, 67);
			this->tlMetLoc->TabIndex = 13;
			// 
			// lblEggMetLoc
			// 
			this->lblEggMetLoc->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblEggMetLoc->Location = System::Drawing::Point(3, 33);
			this->lblEggMetLoc->Name = L"lblEggMetLoc";
			this->lblEggMetLoc->Size = System::Drawing::Size(94, 34);
			this->lblEggMetLoc->TabIndex = 2;
			this->lblEggMetLoc->Text = L"Egg Met Location";
			this->lblEggMetLoc->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// numMetLoc
			// 
			this->numMetLoc->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numMetLoc->Location = System::Drawing::Point(103, 6);
			this->numMetLoc->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {65535, 0, 0, 0});
			this->numMetLoc->Name = L"numMetLoc";
			this->numMetLoc->Size = System::Drawing::Size(142, 20);
			this->numMetLoc->TabIndex = 1;
			this->numMetLoc->ValueChanged += gcnew System::EventHandler(this, &frmMain::numMetLoc_ValueChanged);
			// 
			// numEggMetLoc
			// 
			this->numEggMetLoc->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numEggMetLoc->Location = System::Drawing::Point(103, 40);
			this->numEggMetLoc->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {65535, 0, 0, 0});
			this->numEggMetLoc->Name = L"numEggMetLoc";
			this->numEggMetLoc->Size = System::Drawing::Size(142, 20);
			this->numEggMetLoc->TabIndex = 3;
			this->numEggMetLoc->ValueChanged += gcnew System::EventHandler(this, &frmMain::numEggMetLoc_ValueChanged);
			// 
			// lblMetLoc
			// 
			this->lblMetLoc->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblMetLoc->Location = System::Drawing::Point(3, 0);
			this->lblMetLoc->Name = L"lblMetLoc";
			this->lblMetLoc->Size = System::Drawing::Size(94, 33);
			this->lblMetLoc->TabIndex = 0;
			this->lblMetLoc->Text = L"Met Location";
			this->lblMetLoc->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// chkShiny
			// 
			this->chkShiny->AutoSize = true;
			this->chkShiny->Enabled = false;
			this->chkShiny->Location = System::Drawing::Point(484, 223);
			this->chkShiny->Name = L"chkShiny";
			this->chkShiny->Size = System::Drawing::Size(52, 17);
			this->chkShiny->TabIndex = 14;
			this->chkShiny->Text = L"Shiny";
			this->chkShiny->UseVisualStyleBackColor = true;
			// 
			// frmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(652, 396);
			this->Controls->Add(this->chkShiny);
			this->Controls->Add(this->tlMetLoc);
			this->Controls->Add(this->lblSpecies);
			this->Controls->Add(this->lblNickname);
			this->Controls->Add(this->lblMetLevel);
			this->Controls->Add(this->gbOtherInfo);
			this->Controls->Add(this->gbMoves);
			this->Controls->Add(this->gbStats);
			this->Controls->Add(this->gbOT);
			this->Controls->Add(this->chkFateful);
			this->Controls->Add(this->numMetLevel);
			this->Controls->Add(this->txtNickname);
			this->Controls->Add(this->numSpecies);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMetLevel))->EndInit();
			this->gbOTGender->ResumeLayout(false);
			this->tlOTGender->ResumeLayout(false);
			this->tlOTGender->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numAbility))->EndInit();
			this->gbOT->ResumeLayout(false);
			this->tlOT->ResumeLayout(false);
			this->tlIDs->ResumeLayout(false);
			this->tlOTName->ResumeLayout(false);
			this->tlOTName->PerformLayout();
			this->tlStats->ResumeLayout(false);
			this->gbStats->ResumeLayout(false);
			this->gbMoves->ResumeLayout(false);
			this->tlMoves->ResumeLayout(false);
			this->gbOtherInfo->ResumeLayout(false);
			this->tlOtherInfo->ResumeLayout(false);
			this->tlMetLoc->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMetLoc))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numEggMetLoc))->EndInit();
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

					 byte raw_data[232];
					 memcpy(raw_data,pkx,232);

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
					 numMetLevel->Value = (System::Decimal)((int)(pkx->metlevel_otgender.metlevel));
					 rbOTMale->Checked = (pkx->metlevel_otgender.otgender == Genders::male);
					 rbOTFemale->Checked = (pkx->metlevel_otgender.otgender == Genders::female);
					 numAbility->Value = (System::Decimal)((int)(pkx->ability));
					 chkFateful->Checked = pkx->forms.fencounter;
					 numMetLoc->Value = (System::Decimal)((int)(pkx->met));
					 numEggMetLoc->Value = (System::Decimal)((int)(pkx->eggmet));
					 chkShiny->Checked = getpkmshiny(pkx);
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
					 calcchecksum(pkx);
					 if(encrypted){encryptpkm(pkx);}
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
	private: System::Void numMetLevel_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 pkx->metlevel_otgender.metlevel = ((int)(numMetLevel->Value));
				 }
			 }
	private: System::Void rbOTMale_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 if(rbOTMale->Checked){pkx->metlevel_otgender.otgender = Genders::male;}
				 }
			 }
	private: System::Void rbOTFemale_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 if(rbOTFemale->Checked){pkx->metlevel_otgender.otgender = Genders::female;}
				 }
			 }
	private: System::Void numAbility_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 pkx->ability = (Abilities::abilities)((int)(numAbility->Value));
				 }
			 }
	private: System::Void chkFateful_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 pkx->forms.fencounter = chkFateful->Checked;
				 }
			 }
	private: System::Void numMetLoc_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 pkx->met = (Locations::locations)((int)(numMetLoc->Value));
				 }
			 }
	private: System::Void numEggMetLoc_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 pkx->eggmet = (Locations::locations)((int)(numEggMetLoc->Value));
				 }
			 }
	};
}
