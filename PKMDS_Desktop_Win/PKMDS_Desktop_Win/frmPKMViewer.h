#pragma region Stuff I dont need to see
#pragma once
#include "../../include/pkmds/pkmds_g5_sqlite.h"
#include "../../include/pkmds/pkmds_sql.h"
namespace PKMDS_Desktop_Win {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmPKMViewer
	/// </summary>
	public ref class frmPKMViewer : public System::Windows::Forms::Form
	{
	public:
		frmPKMViewer(void)
		{
			redisplayok = false;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			pkm = new pokemon_obj;
			temppkm = new pokemon_obj;
			pviewvsqlite = gcnew VS_SQLite();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmPKMViewer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  tlViewer;
	protected: 

	protected: 
	private: System::Windows::Forms::Panel^  panGeneral;
	private: System::Windows::Forms::TabControl^  tcViewer;
	private: System::Windows::Forms::TabPage^  tpBasic;
	private: System::Windows::Forms::TabPage^  tpStats;
	private: System::Windows::Forms::TabPage^  tpMoves;
	private: System::Windows::Forms::TabPage^  tpOrigins;
	private: System::Windows::Forms::TabPage^  tpRibbons;
	private: System::Windows::Forms::TabPage^  tpMisc;
	private: System::Windows::Forms::PictureBox^  pbSprite;
	private: System::Windows::Forms::ComboBox^  cbBall;
	private: System::Windows::Forms::PictureBox^  pbPKRS;
	private: System::Windows::Forms::PictureBox^  pbShiny;
	private: System::Windows::Forms::PictureBox^  pbGender;
	private: System::Windows::Forms::PictureBox^  pbDiamond;
	private: System::Windows::Forms::PictureBox^  pbStar;
	private: System::Windows::Forms::PictureBox^  pbHeart;
	private: System::Windows::Forms::PictureBox^  pbSquare;
	private: System::Windows::Forms::PictureBox^  pbTriangle;
	private: System::Windows::Forms::PictureBox^  pbCircle;
	private: System::Windows::Forms::NumericUpDown^  numLevel;
	private: System::Windows::Forms::Label^  lblLevel;
	private: System::Windows::Forms::Button^  btnExport;
	private: System::Windows::Forms::Button^  btnSave;
	private: System::Windows::Forms::Label^  lblItem;
	private: System::Windows::Forms::ComboBox^  cbItem;
	private: System::Windows::Forms::NumericUpDown^  numSpecies;
	private: System::Windows::Forms::ComboBox^  cbSpecies;
	private: System::Windows::Forms::PictureBox^  pbItem;
	private: System::Windows::Forms::GroupBox^  gbOT;
	private: System::Windows::Forms::TextBox^  txtNickname;
	private: System::Windows::Forms::CheckBox^  chkNicknamed;
	private: System::Windows::Forms::Label^  lblNickname;
	private: System::Windows::Forms::RadioButton^  rbFemale;
	private: System::Windows::Forms::RadioButton^  rbMale;
	private: System::Windows::Forms::Label^  lblOTName;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::NumericUpDown^  numTID;
	private: System::Windows::Forms::Label^  lblTrainerID;
	private: System::Windows::Forms::NumericUpDown^  numSID;
	private: System::Windows::Forms::Label^  lblSecretID;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  lblEXP;
	private: System::Windows::Forms::PictureBox^  pbType2;
	private: System::Windows::Forms::PictureBox^  pbType1;
	private: System::Windows::Forms::Label^  lblType;
	private: System::Windows::Forms::ComboBox^  cbAbility;

	private: System::Windows::Forms::Label^  lblAbility;
	private: System::Windows::Forms::Label^  lblTNL;
	private: System::Windows::Forms::ProgressBar^  pbTNL;
	private: System::Windows::Forms::GroupBox^  gbIVs;











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
			this->tlViewer = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panGeneral = (gcnew System::Windows::Forms::Panel());
			this->pbItem = (gcnew System::Windows::Forms::PictureBox());
			this->numSpecies = (gcnew System::Windows::Forms::NumericUpDown());
			this->cbSpecies = (gcnew System::Windows::Forms::ComboBox());
			this->btnExport = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->lblItem = (gcnew System::Windows::Forms::Label());
			this->cbItem = (gcnew System::Windows::Forms::ComboBox());
			this->numLevel = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblLevel = (gcnew System::Windows::Forms::Label());
			this->pbDiamond = (gcnew System::Windows::Forms::PictureBox());
			this->pbStar = (gcnew System::Windows::Forms::PictureBox());
			this->pbHeart = (gcnew System::Windows::Forms::PictureBox());
			this->pbSquare = (gcnew System::Windows::Forms::PictureBox());
			this->pbTriangle = (gcnew System::Windows::Forms::PictureBox());
			this->pbCircle = (gcnew System::Windows::Forms::PictureBox());
			this->cbBall = (gcnew System::Windows::Forms::ComboBox());
			this->pbPKRS = (gcnew System::Windows::Forms::PictureBox());
			this->pbShiny = (gcnew System::Windows::Forms::PictureBox());
			this->pbGender = (gcnew System::Windows::Forms::PictureBox());
			this->pbSprite = (gcnew System::Windows::Forms::PictureBox());
			this->tcViewer = (gcnew System::Windows::Forms::TabControl());
			this->tpBasic = (gcnew System::Windows::Forms::TabPage());
			this->tpStats = (gcnew System::Windows::Forms::TabPage());
			this->tpMoves = (gcnew System::Windows::Forms::TabPage());
			this->tpOrigins = (gcnew System::Windows::Forms::TabPage());
			this->tpRibbons = (gcnew System::Windows::Forms::TabPage());
			this->tpMisc = (gcnew System::Windows::Forms::TabPage());
			this->gbOT = (gcnew System::Windows::Forms::GroupBox());
			this->txtNickname = (gcnew System::Windows::Forms::TextBox());
			this->chkNicknamed = (gcnew System::Windows::Forms::CheckBox());
			this->lblNickname = (gcnew System::Windows::Forms::Label());
			this->lblOTName = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->rbMale = (gcnew System::Windows::Forms::RadioButton());
			this->rbFemale = (gcnew System::Windows::Forms::RadioButton());
			this->lblTrainerID = (gcnew System::Windows::Forms::Label());
			this->numTID = (gcnew System::Windows::Forms::NumericUpDown());
			this->numSID = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblSecretID = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblEXP = (gcnew System::Windows::Forms::Label());
			this->lblType = (gcnew System::Windows::Forms::Label());
			this->pbType1 = (gcnew System::Windows::Forms::PictureBox());
			this->pbType2 = (gcnew System::Windows::Forms::PictureBox());
			this->lblAbility = (gcnew System::Windows::Forms::Label());
			this->cbAbility = (gcnew System::Windows::Forms::ComboBox());
			this->lblTNL = (gcnew System::Windows::Forms::Label());
			this->pbTNL = (gcnew System::Windows::Forms::ProgressBar());
			this->gbIVs = (gcnew System::Windows::Forms::GroupBox());
			this->tlViewer->SuspendLayout();
			this->panGeneral->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbItem))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpecies))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numLevel))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbDiamond))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbStar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbHeart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbSquare))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbTriangle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbCircle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbPKRS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbShiny))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbGender))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbSprite))->BeginInit();
			this->tcViewer->SuspendLayout();
			this->tpBasic->SuspendLayout();
			this->tpStats->SuspendLayout();
			this->gbOT->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numTID))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSID))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbType1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbType2))->BeginInit();
			this->SuspendLayout();
			// 
			// tlViewer
			// 
			this->tlViewer->ColumnCount = 2;
			this->tlViewer->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 64.48203F)));
			this->tlViewer->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 35.51797F)));
			this->tlViewer->Controls->Add(this->panGeneral, 1, 0);
			this->tlViewer->Controls->Add(this->tcViewer, 0, 0);
			this->tlViewer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlViewer->Location = System::Drawing::Point(0, 0);
			this->tlViewer->Name = L"tlViewer";
			this->tlViewer->RowCount = 1;
			this->tlViewer->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlViewer->Size = System::Drawing::Size(473, 286);
			this->tlViewer->TabIndex = 0;
			// 
			// panGeneral
			// 
			this->panGeneral->Controls->Add(this->pbItem);
			this->panGeneral->Controls->Add(this->numSpecies);
			this->panGeneral->Controls->Add(this->cbSpecies);
			this->panGeneral->Controls->Add(this->btnExport);
			this->panGeneral->Controls->Add(this->btnSave);
			this->panGeneral->Controls->Add(this->lblItem);
			this->panGeneral->Controls->Add(this->cbItem);
			this->panGeneral->Controls->Add(this->numLevel);
			this->panGeneral->Controls->Add(this->lblLevel);
			this->panGeneral->Controls->Add(this->pbDiamond);
			this->panGeneral->Controls->Add(this->pbStar);
			this->panGeneral->Controls->Add(this->pbHeart);
			this->panGeneral->Controls->Add(this->pbSquare);
			this->panGeneral->Controls->Add(this->pbTriangle);
			this->panGeneral->Controls->Add(this->pbCircle);
			this->panGeneral->Controls->Add(this->cbBall);
			this->panGeneral->Controls->Add(this->pbPKRS);
			this->panGeneral->Controls->Add(this->pbShiny);
			this->panGeneral->Controls->Add(this->pbGender);
			this->panGeneral->Controls->Add(this->pbSprite);
			this->panGeneral->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panGeneral->Location = System::Drawing::Point(308, 3);
			this->panGeneral->Name = L"panGeneral";
			this->panGeneral->Size = System::Drawing::Size(162, 280);
			this->panGeneral->TabIndex = 1;
			// 
			// pbItem
			// 
			this->pbItem->BackColor = System::Drawing::Color::Transparent;
			this->pbItem->Location = System::Drawing::Point(5, 190);
			this->pbItem->Name = L"pbItem";
			this->pbItem->Size = System::Drawing::Size(30, 30);
			this->pbItem->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbItem->TabIndex = 20;
			this->pbItem->TabStop = false;
			// 
			// numSpecies
			// 
			this->numSpecies->Location = System::Drawing::Point(116, 108);
			this->numSpecies->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {649, 0, 0, 0});
			this->numSpecies->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numSpecies->Name = L"numSpecies";
			this->numSpecies->Size = System::Drawing::Size(43, 20);
			this->numSpecies->TabIndex = 19;
			this->numSpecies->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numSpecies->ValueChanged += gcnew System::EventHandler(this, &frmPKMViewer::numSpecies_ValueChanged);
			// 
			// cbSpecies
			// 
			this->cbSpecies->FormattingEnabled = true;
			this->cbSpecies->Location = System::Drawing::Point(3, 107);
			this->cbSpecies->Name = L"cbSpecies";
			this->cbSpecies->Size = System::Drawing::Size(107, 21);
			this->cbSpecies->TabIndex = 18;
			this->cbSpecies->SelectedIndexChanged += gcnew System::EventHandler(this, &frmPKMViewer::cbSpecies_SelectedIndexChanged);
			// 
			// btnExport
			// 
			this->btnExport->Location = System::Drawing::Point(99, 227);
			this->btnExport->Name = L"btnExport";
			this->btnExport->Size = System::Drawing::Size(60, 50);
			this->btnExport->TabIndex = 17;
			this->btnExport->Text = L"Export PKM File";
			this->btnExport->UseVisualStyleBackColor = true;
			this->btnExport->Click += gcnew System::EventHandler(this, &frmPKMViewer::btnExport_Click);
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(3, 226);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(60, 50);
			this->btnSave->TabIndex = 16;
			this->btnSave->Text = L"Save Changes";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &frmPKMViewer::btnSave_Click);
			// 
			// lblItem
			// 
			this->lblItem->AutoSize = true;
			this->lblItem->Location = System::Drawing::Point(68, 183);
			this->lblItem->Name = L"lblItem";
			this->lblItem->Size = System::Drawing::Size(52, 13);
			this->lblItem->TabIndex = 15;
			this->lblItem->Text = L"Held Item";
			// 
			// cbItem
			// 
			this->cbItem->FormattingEnabled = true;
			this->cbItem->Location = System::Drawing::Point(41, 200);
			this->cbItem->Name = L"cbItem";
			this->cbItem->Size = System::Drawing::Size(118, 21);
			this->cbItem->TabIndex = 14;
			this->cbItem->SelectedIndexChanged += gcnew System::EventHandler(this, &frmPKMViewer::cbItem_SelectedIndexChanged);
			// 
			// numLevel
			// 
			this->numLevel->Location = System::Drawing::Point(77, 160);
			this->numLevel->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numLevel->Name = L"numLevel";
			this->numLevel->Size = System::Drawing::Size(43, 20);
			this->numLevel->TabIndex = 13;
			this->numLevel->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numLevel->ValueChanged += gcnew System::EventHandler(this, &frmPKMViewer::numLevel_ValueChanged);
			// 
			// lblLevel
			// 
			this->lblLevel->AutoSize = true;
			this->lblLevel->Location = System::Drawing::Point(37, 160);
			this->lblLevel->Name = L"lblLevel";
			this->lblLevel->Size = System::Drawing::Size(33, 13);
			this->lblLevel->TabIndex = 12;
			this->lblLevel->Text = L"Level";
			// 
			// pbDiamond
			// 
			this->pbDiamond->BackColor = System::Drawing::Color::Transparent;
			this->pbDiamond->Location = System::Drawing::Point(120, 134);
			this->pbDiamond->Margin = System::Windows::Forms::Padding(0);
			this->pbDiamond->Name = L"pbDiamond";
			this->pbDiamond->Size = System::Drawing::Size(20, 20);
			this->pbDiamond->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbDiamond->TabIndex = 11;
			this->pbDiamond->TabStop = false;
			this->pbDiamond->Click += gcnew System::EventHandler(this, &frmPKMViewer::pbDiamond_Click);
			// 
			// pbStar
			// 
			this->pbStar->BackColor = System::Drawing::Color::Transparent;
			this->pbStar->Location = System::Drawing::Point(100, 134);
			this->pbStar->Margin = System::Windows::Forms::Padding(0);
			this->pbStar->Name = L"pbStar";
			this->pbStar->Size = System::Drawing::Size(20, 20);
			this->pbStar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbStar->TabIndex = 10;
			this->pbStar->TabStop = false;
			this->pbStar->Click += gcnew System::EventHandler(this, &frmPKMViewer::pbStar_Click);
			// 
			// pbHeart
			// 
			this->pbHeart->BackColor = System::Drawing::Color::Transparent;
			this->pbHeart->Location = System::Drawing::Point(80, 134);
			this->pbHeart->Margin = System::Windows::Forms::Padding(0);
			this->pbHeart->Name = L"pbHeart";
			this->pbHeart->Size = System::Drawing::Size(20, 20);
			this->pbHeart->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbHeart->TabIndex = 9;
			this->pbHeart->TabStop = false;
			this->pbHeart->Click += gcnew System::EventHandler(this, &frmPKMViewer::pbHeart_Click);
			// 
			// pbSquare
			// 
			this->pbSquare->BackColor = System::Drawing::Color::Transparent;
			this->pbSquare->Location = System::Drawing::Point(60, 134);
			this->pbSquare->Margin = System::Windows::Forms::Padding(0);
			this->pbSquare->Name = L"pbSquare";
			this->pbSquare->Size = System::Drawing::Size(20, 20);
			this->pbSquare->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbSquare->TabIndex = 8;
			this->pbSquare->TabStop = false;
			this->pbSquare->Click += gcnew System::EventHandler(this, &frmPKMViewer::pbSquare_Click);
			// 
			// pbTriangle
			// 
			this->pbTriangle->BackColor = System::Drawing::Color::Transparent;
			this->pbTriangle->Location = System::Drawing::Point(40, 134);
			this->pbTriangle->Margin = System::Windows::Forms::Padding(0);
			this->pbTriangle->Name = L"pbTriangle";
			this->pbTriangle->Size = System::Drawing::Size(20, 20);
			this->pbTriangle->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbTriangle->TabIndex = 7;
			this->pbTriangle->TabStop = false;
			this->pbTriangle->Click += gcnew System::EventHandler(this, &frmPKMViewer::pbTriangle_Click);
			// 
			// pbCircle
			// 
			this->pbCircle->BackColor = System::Drawing::Color::Transparent;
			this->pbCircle->Location = System::Drawing::Point(20, 134);
			this->pbCircle->Margin = System::Windows::Forms::Padding(0);
			this->pbCircle->Name = L"pbCircle";
			this->pbCircle->Size = System::Drawing::Size(20, 20);
			this->pbCircle->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbCircle->TabIndex = 6;
			this->pbCircle->TabStop = false;
			this->pbCircle->Click += gcnew System::EventHandler(this, &frmPKMViewer::pbCircle_Click);
			// 
			// cbBall
			// 
			this->cbBall->FormattingEnabled = true;
			this->cbBall->Location = System::Drawing::Point(109, 29);
			this->cbBall->Name = L"cbBall";
			this->cbBall->Size = System::Drawing::Size(44, 21);
			this->cbBall->TabIndex = 5;
			this->cbBall->SelectedIndexChanged += gcnew System::EventHandler(this, &frmPKMViewer::cbBall_SelectedIndexChanged);
			// 
			// pbPKRS
			// 
			this->pbPKRS->BackColor = System::Drawing::Color::Transparent;
			this->pbPKRS->Location = System::Drawing::Point(109, 82);
			this->pbPKRS->Name = L"pbPKRS";
			this->pbPKRS->Size = System::Drawing::Size(40, 20);
			this->pbPKRS->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbPKRS->TabIndex = 4;
			this->pbPKRS->TabStop = false;
			// 
			// pbShiny
			// 
			this->pbShiny->BackColor = System::Drawing::Color::Transparent;
			this->pbShiny->Location = System::Drawing::Point(109, 56);
			this->pbShiny->Name = L"pbShiny";
			this->pbShiny->Size = System::Drawing::Size(20, 20);
			this->pbShiny->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbShiny->TabIndex = 3;
			this->pbShiny->TabStop = false;
			// 
			// pbGender
			// 
			this->pbGender->BackColor = System::Drawing::Color::Transparent;
			this->pbGender->Location = System::Drawing::Point(109, 3);
			this->pbGender->Name = L"pbGender";
			this->pbGender->Size = System::Drawing::Size(20, 20);
			this->pbGender->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbGender->TabIndex = 2;
			this->pbGender->TabStop = false;
			// 
			// pbSprite
			// 
			this->pbSprite->BackColor = System::Drawing::Color::Transparent;
			this->pbSprite->Location = System::Drawing::Point(3, 3);
			this->pbSprite->Name = L"pbSprite";
			this->pbSprite->Size = System::Drawing::Size(100, 100);
			this->pbSprite->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbSprite->TabIndex = 1;
			this->pbSprite->TabStop = false;
			// 
			// tcViewer
			// 
			this->tcViewer->Controls->Add(this->tpBasic);
			this->tcViewer->Controls->Add(this->tpStats);
			this->tcViewer->Controls->Add(this->tpMoves);
			this->tcViewer->Controls->Add(this->tpOrigins);
			this->tcViewer->Controls->Add(this->tpRibbons);
			this->tcViewer->Controls->Add(this->tpMisc);
			this->tcViewer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tcViewer->HotTrack = true;
			this->tcViewer->Location = System::Drawing::Point(3, 3);
			this->tcViewer->Multiline = true;
			this->tcViewer->Name = L"tcViewer";
			this->tcViewer->SelectedIndex = 0;
			this->tcViewer->Size = System::Drawing::Size(299, 280);
			this->tcViewer->TabIndex = 0;
			// 
			// tpBasic
			// 
			this->tpBasic->Controls->Add(this->pbTNL);
			this->tpBasic->Controls->Add(this->lblTNL);
			this->tpBasic->Controls->Add(this->cbAbility);
			this->tpBasic->Controls->Add(this->lblAbility);
			this->tpBasic->Controls->Add(this->pbType2);
			this->tpBasic->Controls->Add(this->pbType1);
			this->tpBasic->Controls->Add(this->lblType);
			this->tpBasic->Controls->Add(this->numericUpDown1);
			this->tpBasic->Controls->Add(this->lblEXP);
			this->tpBasic->Controls->Add(this->lblNickname);
			this->tpBasic->Controls->Add(this->chkNicknamed);
			this->tpBasic->Controls->Add(this->txtNickname);
			this->tpBasic->Controls->Add(this->gbOT);
			this->tpBasic->Location = System::Drawing::Point(4, 22);
			this->tpBasic->Name = L"tpBasic";
			this->tpBasic->Padding = System::Windows::Forms::Padding(3);
			this->tpBasic->Size = System::Drawing::Size(291, 254);
			this->tpBasic->TabIndex = 0;
			this->tpBasic->Text = L"Basic";
			this->tpBasic->UseVisualStyleBackColor = true;
			// 
			// tpStats
			// 
			this->tpStats->Controls->Add(this->gbIVs);
			this->tpStats->Location = System::Drawing::Point(4, 22);
			this->tpStats->Name = L"tpStats";
			this->tpStats->Padding = System::Windows::Forms::Padding(3);
			this->tpStats->Size = System::Drawing::Size(291, 254);
			this->tpStats->TabIndex = 1;
			this->tpStats->Text = L"Stats";
			this->tpStats->UseVisualStyleBackColor = true;
			// 
			// tpMoves
			// 
			this->tpMoves->Location = System::Drawing::Point(4, 22);
			this->tpMoves->Name = L"tpMoves";
			this->tpMoves->Size = System::Drawing::Size(291, 254);
			this->tpMoves->TabIndex = 2;
			this->tpMoves->Text = L"Moves";
			this->tpMoves->UseVisualStyleBackColor = true;
			// 
			// tpOrigins
			// 
			this->tpOrigins->Location = System::Drawing::Point(4, 22);
			this->tpOrigins->Name = L"tpOrigins";
			this->tpOrigins->Size = System::Drawing::Size(291, 254);
			this->tpOrigins->TabIndex = 3;
			this->tpOrigins->Text = L"Origins";
			this->tpOrigins->UseVisualStyleBackColor = true;
			// 
			// tpRibbons
			// 
			this->tpRibbons->Location = System::Drawing::Point(4, 22);
			this->tpRibbons->Name = L"tpRibbons";
			this->tpRibbons->Size = System::Drawing::Size(291, 254);
			this->tpRibbons->TabIndex = 4;
			this->tpRibbons->Text = L"Ribbons";
			this->tpRibbons->UseVisualStyleBackColor = true;
			// 
			// tpMisc
			// 
			this->tpMisc->Location = System::Drawing::Point(4, 22);
			this->tpMisc->Name = L"tpMisc";
			this->tpMisc->Size = System::Drawing::Size(291, 254);
			this->tpMisc->TabIndex = 5;
			this->tpMisc->Text = L"Misc";
			this->tpMisc->UseVisualStyleBackColor = true;
			// 
			// gbOT
			// 
			this->gbOT->Controls->Add(this->numSID);
			this->gbOT->Controls->Add(this->lblSecretID);
			this->gbOT->Controls->Add(this->numTID);
			this->gbOT->Controls->Add(this->lblTrainerID);
			this->gbOT->Controls->Add(this->rbFemale);
			this->gbOT->Controls->Add(this->rbMale);
			this->gbOT->Controls->Add(this->lblOTName);
			this->gbOT->Controls->Add(this->textBox1);
			this->gbOT->Location = System::Drawing::Point(6, 32);
			this->gbOT->Name = L"gbOT";
			this->gbOT->Size = System::Drawing::Size(279, 87);
			this->gbOT->TabIndex = 0;
			this->gbOT->TabStop = false;
			this->gbOT->Text = L"OT";
			// 
			// txtNickname
			// 
			this->txtNickname->Location = System::Drawing::Point(71, 6);
			this->txtNickname->Name = L"txtNickname";
			this->txtNickname->Size = System::Drawing::Size(128, 20);
			this->txtNickname->TabIndex = 1;
			// 
			// chkNicknamed
			// 
			this->chkNicknamed->AutoSize = true;
			this->chkNicknamed->Location = System::Drawing::Point(205, 8);
			this->chkNicknamed->Name = L"chkNicknamed";
			this->chkNicknamed->Size = System::Drawing::Size(80, 17);
			this->chkNicknamed->TabIndex = 2;
			this->chkNicknamed->Text = L"Nicknamed";
			this->chkNicknamed->UseVisualStyleBackColor = true;
			// 
			// lblNickname
			// 
			this->lblNickname->AutoSize = true;
			this->lblNickname->Location = System::Drawing::Point(6, 10);
			this->lblNickname->Name = L"lblNickname";
			this->lblNickname->Size = System::Drawing::Size(55, 13);
			this->lblNickname->TabIndex = 3;
			this->lblNickname->Text = L"Nickname";
			// 
			// lblOTName
			// 
			this->lblOTName->AutoSize = true;
			this->lblOTName->Location = System::Drawing::Point(6, 16);
			this->lblOTName->Name = L"lblOTName";
			this->lblOTName->Size = System::Drawing::Size(53, 13);
			this->lblOTName->TabIndex = 5;
			this->lblOTName->Text = L"OT Name";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(65, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(128, 20);
			this->textBox1->TabIndex = 4;
			// 
			// rbMale
			// 
			this->rbMale->AutoSize = true;
			this->rbMale->Location = System::Drawing::Point(214, 18);
			this->rbMale->Name = L"rbMale";
			this->rbMale->Size = System::Drawing::Size(48, 17);
			this->rbMale->TabIndex = 6;
			this->rbMale->TabStop = true;
			this->rbMale->Text = L"Male";
			this->rbMale->UseVisualStyleBackColor = true;
			// 
			// rbFemale
			// 
			this->rbFemale->AutoSize = true;
			this->rbFemale->Location = System::Drawing::Point(214, 41);
			this->rbFemale->Name = L"rbFemale";
			this->rbFemale->Size = System::Drawing::Size(59, 17);
			this->rbFemale->TabIndex = 7;
			this->rbFemale->TabStop = true;
			this->rbFemale->Text = L"Female";
			this->rbFemale->UseVisualStyleBackColor = true;
			// 
			// lblTrainerID
			// 
			this->lblTrainerID->AutoSize = true;
			this->lblTrainerID->Location = System::Drawing::Point(62, 43);
			this->lblTrainerID->Name = L"lblTrainerID";
			this->lblTrainerID->Size = System::Drawing::Size(54, 13);
			this->lblTrainerID->TabIndex = 8;
			this->lblTrainerID->Text = L"Trainer ID";
			// 
			// numTID
			// 
			this->numTID->Location = System::Drawing::Point(65, 59);
			this->numTID->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {65535, 0, 0, 0});
			this->numTID->Name = L"numTID";
			this->numTID->Size = System::Drawing::Size(52, 20);
			this->numTID->TabIndex = 9;
			this->numTID->ValueChanged += gcnew System::EventHandler(this, &frmPKMViewer::numTID_ValueChanged);
			// 
			// numSID
			// 
			this->numSID->Location = System::Drawing::Point(123, 59);
			this->numSID->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {65535, 0, 0, 0});
			this->numSID->Name = L"numSID";
			this->numSID->Size = System::Drawing::Size(52, 20);
			this->numSID->TabIndex = 11;
			// 
			// lblSecretID
			// 
			this->lblSecretID->AutoSize = true;
			this->lblSecretID->Location = System::Drawing::Point(122, 43);
			this->lblSecretID->Name = L"lblSecretID";
			this->lblSecretID->Size = System::Drawing::Size(52, 13);
			this->lblSecretID->TabIndex = 10;
			this->lblSecretID->Text = L"Secret ID";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(40, 159);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {65535, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(89, 20);
			this->numericUpDown1->TabIndex = 11;
			// 
			// lblEXP
			// 
			this->lblEXP->AutoSize = true;
			this->lblEXP->Location = System::Drawing::Point(6, 161);
			this->lblEXP->Name = L"lblEXP";
			this->lblEXP->Size = System::Drawing::Size(28, 13);
			this->lblEXP->TabIndex = 10;
			this->lblEXP->Text = L"EXP";
			// 
			// lblType
			// 
			this->lblType->AutoSize = true;
			this->lblType->Location = System::Drawing::Point(6, 125);
			this->lblType->Name = L"lblType";
			this->lblType->Size = System::Drawing::Size(31, 13);
			this->lblType->TabIndex = 12;
			this->lblType->Text = L"Type";
			// 
			// pbType1
			// 
			this->pbType1->BackColor = System::Drawing::Color::Transparent;
			this->pbType1->Location = System::Drawing::Point(43, 125);
			this->pbType1->Name = L"pbType1";
			this->pbType1->Size = System::Drawing::Size(40, 20);
			this->pbType1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbType1->TabIndex = 13;
			this->pbType1->TabStop = false;
			// 
			// pbType2
			// 
			this->pbType2->BackColor = System::Drawing::Color::Transparent;
			this->pbType2->Location = System::Drawing::Point(89, 125);
			this->pbType2->Name = L"pbType2";
			this->pbType2->Size = System::Drawing::Size(40, 20);
			this->pbType2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbType2->TabIndex = 14;
			this->pbType2->TabStop = false;
			// 
			// lblAbility
			// 
			this->lblAbility->AutoSize = true;
			this->lblAbility->Location = System::Drawing::Point(135, 128);
			this->lblAbility->Name = L"lblAbility";
			this->lblAbility->Size = System::Drawing::Size(34, 13);
			this->lblAbility->TabIndex = 15;
			this->lblAbility->Text = L"Ability";
			// 
			// cbAbility
			// 
			this->cbAbility->FormattingEnabled = true;
			this->cbAbility->Location = System::Drawing::Point(175, 125);
			this->cbAbility->Name = L"cbAbility";
			this->cbAbility->Size = System::Drawing::Size(110, 21);
			this->cbAbility->TabIndex = 19;
			// 
			// lblTNL
			// 
			this->lblTNL->AutoSize = true;
			this->lblTNL->Location = System::Drawing::Point(6, 186);
			this->lblTNL->Name = L"lblTNL";
			this->lblTNL->Size = System::Drawing::Size(74, 13);
			this->lblTNL->TabIndex = 20;
			this->lblTNL->Text = L"To Next Level";
			// 
			// pbTNL
			// 
			this->pbTNL->Location = System::Drawing::Point(6, 202);
			this->pbTNL->Name = L"pbTNL";
			this->pbTNL->Size = System::Drawing::Size(279, 23);
			this->pbTNL->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->pbTNL->TabIndex = 21;
			// 
			// gbIVs
			// 
			this->gbIVs->Location = System::Drawing::Point(6, 6);
			this->gbIVs->Name = L"gbIVs";
			this->gbIVs->Size = System::Drawing::Size(95, 152);
			this->gbIVs->TabIndex = 0;
			this->gbIVs->TabStop = false;
			this->gbIVs->Text = L"groupBox1";
			// 
			// frmPKMViewer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(473, 286);
			this->Controls->Add(this->tlViewer);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"frmPKMViewer";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Pokémon Viewer";
			this->Load += gcnew System::EventHandler(this, &frmPKMViewer::frmPKMViewer_Load);
			this->tlViewer->ResumeLayout(false);
			this->panGeneral->ResumeLayout(false);
			this->panGeneral->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbItem))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpecies))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numLevel))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbDiamond))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbStar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbHeart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbSquare))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbTriangle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbCircle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbPKRS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbShiny))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbGender))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbSprite))->EndInit();
			this->tcViewer->ResumeLayout(false);
			this->tpBasic->ResumeLayout(false);
			this->tpBasic->PerformLayout();
			this->tpStats->ResumeLayout(false);
			this->gbOT->ResumeLayout(false);
			this->gbOT->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numTID))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSID))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbType1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbType2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
#pragma endregion
		pokemon_obj * pkm;
		pokemon_obj * temppkm;
		VS_SQLite ^ pviewvsqlite;
		bool redisplayok;
		void refreshsprite()
		{
			std::ostringstream SQL;
			getspritesql(SQL,temppkm);
			pbSprite->Image = pviewvsqlite->getSQLImage(SQL.str());
		}
		void displayPKM()
		{
			refreshsprite();
			std::ostringstream SQL;
			switch(getpkmgender(temppkm))
			{
			case Genders::male:
				SQL << "select image from misc where identifier = \"male\"";
				pbGender->Image = pviewvsqlite->getSQLImage(SQL.str());
				SQL.str("");
				SQL.clear();
				break;
			case Genders::female:
				SQL << "select image from misc where identifier = \"female\"";
				pbGender->Image = pviewvsqlite->getSQLImage(SQL.str());
				SQL.str("");
				SQL.clear();
				break;
			}
			if(getpkmshiny(temppkm))
			{
				SQL << "select image from misc where identifier = \"shiny\"";
				pbShiny->Image = pviewvsqlite->getSQLImage(SQL.str());
				SQL.str("");
				SQL.clear();
			}
			getmarkingsql(SQL,Markings::circle,temppkm->markings.circle);
			pbCircle->Image = pviewvsqlite->getSQLImage(SQL.str());
			SQL.str("");
			SQL.clear();
			getmarkingsql(SQL,Markings::triangle,temppkm->markings.triangle);
			pbTriangle->Image = pviewvsqlite->getSQLImage(SQL.str());
			SQL.str("");
			SQL.clear();
			getmarkingsql(SQL,Markings::square,temppkm->markings.square);
			pbSquare->Image = pviewvsqlite->getSQLImage(SQL.str());
			SQL.str("");
			SQL.clear();
			getmarkingsql(SQL,Markings::heart,temppkm->markings.heart);
			pbHeart->Image = pviewvsqlite->getSQLImage(SQL.str());
			SQL.str("");
			SQL.clear();
			getmarkingsql(SQL,Markings::star,temppkm->markings.star);
			pbStar->Image = pviewvsqlite->getSQLImage(SQL.str());
			SQL.str("");
			SQL.clear();
			getmarkingsql(SQL,Markings::diamond,temppkm->markings.diamond);
			pbDiamond->Image = pviewvsqlite->getSQLImage(SQL.str());
			SQL.str("");
			SQL.clear();
			cbItem->SelectedIndex = cbItem->FindString(gcnew System::String(lookupitemname(temppkm).c_str()));
			ostringstream itemsql;
			getitemsql(itemsql,(uint16)temppkm->item);
			pbItem->Image = (pviewvsqlite->getSQLImage(itemsql.str()));
			cbSpecies->SelectedIndex = cbSpecies->FindString(gcnew System::String(lookuppkmname(temppkm).c_str()))/*(int)(temppkm->species)-1*/;
			numSpecies->Value = Convert::ToDecimal((UInt16)(temppkm->species));

			redisplayok = true;
		}
	public: void setpkm(pokemon_obj * pkm)
			{
				this->pkm = pkm;
				*temppkm = *pkm;
			}
	private: System::Void frmPKMViewer_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 DataSet^ itemds = pviewvsqlite->getSQLDS
					 (
					 "SELECT item_game_indices.game_index, item_names.name FROM items INNER JOIN item_names ON items.id = item_names.item_id " +
					 "INNER JOIN item_game_indices ON items.id = item_game_indices.item_id WHERE (item_names.local_language_id = 9) AND " +
					 "(item_game_indices.generation_id = 5) order by name asc"
					 );
				 DataRow^ blankitem = itemds->Tables[0]->NewRow();
				 blankitem["game_index"] = 0;
				 blankitem["name"] = "";
				 itemds->Tables[0]->Rows->InsertAt(blankitem,0);
				 cbItem->DataSource = itemds->Tables[0];
				 cbItem->DisplayMember = "name";
				 cbItem->ValueMember = "game_index";
				 DataSet^ speciesds = pviewvsqlite->getSQLDS("SELECT pokemon_species_id, name FROM pokemon_species_names WHERE (local_language_id = 9) order by name asc");
				 cbSpecies->DataSource = speciesds->Tables[0];
				 cbSpecies->DisplayMember = "name";
				 cbSpecies->ValueMember = "pokemon_species_id";

				 //DataSet^ abilitiesds = pviewvsqlite->getSQLDS("SELECT ability_id, name FROM ability_names WHERE (local_language_id = 9) AND (ability_id < 10000)");
				 ////cbItem->DataSource = abilitiesds->Tables[0];
				 ////cbItem->DisplayMember = "name";
				 ////cbItem->ValueMember = "ability_id";
				 //
				 //DataSet^ movesds = pviewvsqlite->getSQLDS("SELECT move_id, name FROM move_names WHERE (local_language_id = 9) AND (move_id < 10000)");
				 //DataRow^ blankmove = movesds->Tables[0]->NewRow();
				 //blankmove["move_id"] = 0;
				 //blankmove["name"] = "";
				 //movesds->Tables[0]->Rows->InsertAt(blankmove,0);
				 ////cbItem->DataSource = movesds->Tables[0];
				 ////cbItem->DisplayMember = "name";
				 ////cbItem->ValueMember = "move_id";
				 ////cbItem->DataSource = movesds->Tables[0];
				 ////cbItem->DisplayMember = "name";
				 ////cbItem->ValueMember = "move_id";
				 ////cbItem->DataSource = movesds->Tables[0];
				 ////cbItem->DisplayMember = "name";
				 ////cbItem->ValueMember = "move_id";
				 ////cbItem->DataSource = movesds->Tables[0];
				 ////cbItem->DisplayMember = "name";
				 ////cbItem->ValueMember = "move_id";

				 displayPKM();
			 }
	private: System::Void btnSave_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 calcchecksum(temppkm);
				 *pkm = *temppkm;
			 }
	private: System::Void btnExport_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 calcchecksum(temppkm);
			 }
	private: System::Void pbCircle_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 temppkm->markings.circle = !(temppkm->markings.circle);
				 ostringstream SQL;
				 getmarkingsql(SQL,Markings::circle,temppkm->markings.circle);
				 pbCircle->Image = pviewvsqlite->getSQLImage(SQL.str());
			 }
	private: System::Void pbTriangle_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 temppkm->markings.triangle = !(temppkm->markings.triangle);
				 ostringstream SQL;
				 getmarkingsql(SQL,Markings::triangle,temppkm->markings.triangle);
				 pbTriangle->Image = pviewvsqlite->getSQLImage(SQL.str());
			 }
	private: System::Void pbSquare_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 temppkm->markings.square = !(temppkm->markings.square);
				 ostringstream SQL;
				 getmarkingsql(SQL,Markings::square,temppkm->markings.square);
				 pbSquare->Image = pviewvsqlite->getSQLImage(SQL.str());
			 }
	private: System::Void pbHeart_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 temppkm->markings.heart = !(temppkm->markings.heart);
				 ostringstream SQL;
				 getmarkingsql(SQL,Markings::heart,temppkm->markings.heart);
				 pbHeart->Image = pviewvsqlite->getSQLImage(SQL.str());
			 }
	private: System::Void pbStar_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 temppkm->markings.star = !(temppkm->markings.star);
				 ostringstream SQL;
				 getmarkingsql(SQL,Markings::star,temppkm->markings.star);
				 pbStar->Image = pviewvsqlite->getSQLImage(SQL.str());
			 }
	private: System::Void pbDiamond_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 temppkm->markings.diamond = !(temppkm->markings.diamond);
				 ostringstream SQL;
				 getmarkingsql(SQL,Markings::diamond,temppkm->markings.diamond);
				 pbDiamond->Image = pviewvsqlite->getSQLImage(SQL.str());
			 }
	private: System::Void cbItem_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 temppkm->item = (Items::items)(Convert::ToUInt16(cbItem->SelectedValue));
					 ostringstream itemsql;
					 getitemsql(itemsql,(uint16)temppkm->item);
					 pbItem->Image = (pviewvsqlite->getSQLImage(itemsql.str()));
				 }
			 }
	private: System::Void cbBall_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
			 {

			 }
	private: System::Void cbSpecies_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 temppkm->species = (Species::pkmspecies)(Convert::ToUInt16(cbSpecies->SelectedValue));
					 refreshsprite();
					 redisplayok = false;
					 numSpecies->Value = Convert::ToDecimal((UInt16)(temppkm->species));
					 redisplayok = true;
				 }
			 }
	private: System::Void numSpecies_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 temppkm->species = (Species::pkmspecies)((UInt16)(numSpecies->Value));
					 cbSpecies->SelectedIndex = cbSpecies->FindString(gcnew System::String(lookuppkmname(temppkm).c_str()))/*(int)(temppkm->species)-1*/;
					 //cbSpecies->SelectedIndex = (int)(numSpecies->Value) - 1;
				 }
			 }
	private: System::Void numLevel_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {

				 }
			 }
	private: System::Void numTID_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
