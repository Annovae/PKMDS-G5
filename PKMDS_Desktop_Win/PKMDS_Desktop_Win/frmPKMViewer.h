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
			this->pbDiamond->Location = System::Drawing::Point(135, 134);
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
			this->pbStar->Location = System::Drawing::Point(109, 134);
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
			this->pbHeart->Location = System::Drawing::Point(83, 134);
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
			this->pbSquare->Location = System::Drawing::Point(57, 134);
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
			this->pbTriangle->Location = System::Drawing::Point(31, 134);
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
			this->pbCircle->Location = System::Drawing::Point(5, 134);
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
			numSpecies->Value = (Decimal)(temppkm->species);

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
					 numSpecies->Value = (Decimal)(temppkm->species);
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
	};
}
