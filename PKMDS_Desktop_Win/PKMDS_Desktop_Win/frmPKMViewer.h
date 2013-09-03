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
	private: System::Windows::Forms::RadioButton^  rbOTFemale;

	private: System::Windows::Forms::RadioButton^  rbOTMale;

	private: System::Windows::Forms::Label^  lblOTName;
	private: System::Windows::Forms::TextBox^  txtOTName;


	private: System::Windows::Forms::NumericUpDown^  numTID;
	private: System::Windows::Forms::Label^  lblTrainerID;
	private: System::Windows::Forms::NumericUpDown^  numSID;
	private: System::Windows::Forms::Label^  lblSecretID;
	private: System::Windows::Forms::NumericUpDown^  numEXP;

	private: System::Windows::Forms::Label^  lblEXP;
	private: System::Windows::Forms::PictureBox^  pbType2;
	private: System::Windows::Forms::PictureBox^  pbType1;
	private: System::Windows::Forms::Label^  lblType;
	private: System::Windows::Forms::ComboBox^  cbAbility;

	private: System::Windows::Forms::Label^  lblAbility;
	private: System::Windows::Forms::Label^  lblTNL;
	private: System::Windows::Forms::ProgressBar^  pbTNL;
	private: System::Windows::Forms::GroupBox^  gbIVs;
	private: System::Windows::Forms::GroupBox^  gbCalcStats;
	private: System::Windows::Forms::TableLayoutPanel^  tlCalcStats;



	private: System::Windows::Forms::GroupBox^  gbEVs;
	private: System::Windows::Forms::TableLayoutPanel^  tlEVs;








	private: System::Windows::Forms::NumericUpDown^  numHPEV;
	private: System::Windows::Forms::NumericUpDown^  numAttackEV;
	private: System::Windows::Forms::NumericUpDown^  numDefenseEV;
	private: System::Windows::Forms::NumericUpDown^  numSpAtkEV;
	private: System::Windows::Forms::NumericUpDown^  numSpDefEV;
	private: System::Windows::Forms::NumericUpDown^  numSpeedEV;






	private: System::Windows::Forms::TableLayoutPanel^  tlIVs;
	private: System::Windows::Forms::Label^  lblSpeedIV;
	private: System::Windows::Forms::Label^  lblSpDefIV;
	private: System::Windows::Forms::Label^  lblSpAtkIV;
	private: System::Windows::Forms::Label^  lblDefenseIV;
	private: System::Windows::Forms::Label^  lblAttackIV;
	private: System::Windows::Forms::Label^  lblHPIV;
	private: System::Windows::Forms::NumericUpDown^  numHPIV;
	private: System::Windows::Forms::NumericUpDown^  numAttackIV;
	private: System::Windows::Forms::NumericUpDown^  numDefenseIV;
	private: System::Windows::Forms::NumericUpDown^  numSpAtkIV;
	private: System::Windows::Forms::NumericUpDown^  numSpDefIV;
	private: System::Windows::Forms::NumericUpDown^  numSpeedIV;
	private: System::Windows::Forms::TextBox^  txtTotalEVs;
	private: System::Windows::Forms::Label^  lblTotalEVs;
	private: System::Windows::Forms::TextBox^  txtCalcSpeed;

	private: System::Windows::Forms::TextBox^  txtCalcSpDef;

	private: System::Windows::Forms::TextBox^  txtCalcSpAtk;

	private: System::Windows::Forms::TextBox^  txtCalcDefense;

	private: System::Windows::Forms::TextBox^  txtCalcAttack;

	private: System::Windows::Forms::TextBox^  txtCalcHP;
	private: System::Windows::Forms::ComboBox^  cbNature;
	private: System::Windows::Forms::Label^  lblNature;
	private: System::Windows::Forms::TableLayoutPanel^  tlMoves;
	private: System::Windows::Forms::TableLayoutPanel^  tlMove1TotalPP;

	private: System::Windows::Forms::TextBox^  txtMove1TotalPP;
	private: System::Windows::Forms::Label^  lblMove1TotalPP;
	private: System::Windows::Forms::TableLayoutPanel^  tlMove1PP;

	private: System::Windows::Forms::Label^  lblMove1PP;
	private: System::Windows::Forms::NumericUpDown^  numMove1PP;
	private: System::Windows::Forms::TableLayoutPanel^  tlMove1PPUPs;
	private: System::Windows::Forms::Label^  lblPPUps;
	private: System::Windows::Forms::NumericUpDown^  numMove1PPUps;
	private: System::Windows::Forms::TableLayoutPanel^  tlMove1Accuracy;
	private: System::Windows::Forms::Label^  lblMove1Accuracy;
	private: System::Windows::Forms::Label^  lblAccuracy;
	private: System::Windows::Forms::ComboBox^  cbMove1;

	private: System::Windows::Forms::TableLayoutPanel^  tlMove1Power;
	private: System::Windows::Forms::Label^  lblMove1Power;
	private: System::Windows::Forms::Label^  lblPower;
	private: System::Windows::Forms::TableLayoutPanel^  tlMove1NameEtc;
	private: System::Windows::Forms::TableLayoutPanel^  tlMove1TypeCat;
	private: System::Windows::Forms::PictureBox^  pbMove1Cat;
	private: System::Windows::Forms::PictureBox^  pbMove1Type;
	private: System::Windows::Forms::TableLayoutPanel^  tlMove1TypeCatlbls;

	private: System::Windows::Forms::Label^  lblMove1Cat;
	private: System::Windows::Forms::Label^  lblMove1Type;
	private: System::Windows::Forms::Label^  lblMoveName;


	private: System::Windows::Forms::TableLayoutPanel^  tlMove2NameEtc;

	private: System::Windows::Forms::ComboBox^  cbMove2;

	private: System::Windows::Forms::TableLayoutPanel^  tlMove2TypeCat;
	private: System::Windows::Forms::PictureBox^  pbMove2Cat;


	private: System::Windows::Forms::PictureBox^  pbMove2Type;
	private: System::Windows::Forms::Label^  lblMove2Power;
	private: System::Windows::Forms::Label^  lblMove2Accuracy;
	private: System::Windows::Forms::NumericUpDown^  numMove2PPUps;
	private: System::Windows::Forms::NumericUpDown^  numMove2PP;
	private: System::Windows::Forms::TextBox^  txtMove2TotalPP;
	private: System::Windows::Forms::CheckBox^  chkPIDHex;


	private: System::Windows::Forms::Label^  lblPID;
	private: System::Windows::Forms::TextBox^  txtPID;
	private: System::Windows::Forms::TableLayoutPanel^  tlMove3NameEtc;
	private: System::Windows::Forms::ComboBox^  cbMove3;


	private: System::Windows::Forms::TableLayoutPanel^  tlMove3TypeCat;
	private: System::Windows::Forms::PictureBox^  pbMove3Cat;
	private: System::Windows::Forms::PictureBox^  pbMove3Type;



	private: System::Windows::Forms::TableLayoutPanel^  tlMove4NameEtc;
	private: System::Windows::Forms::ComboBox^  cbMove4;


	private: System::Windows::Forms::TableLayoutPanel^  tlMove4TypeCat;
	private: System::Windows::Forms::PictureBox^  pbMove4Cat;
	private: System::Windows::Forms::PictureBox^  pbMove4Type;



	private: System::Windows::Forms::Label^  lblMove3Power;

	private: System::Windows::Forms::Label^  lblMove3Accuracy;
	private: System::Windows::Forms::Label^  lblMove4Power;


	private: System::Windows::Forms::Label^  lblMove4Accuracy;

	private: System::Windows::Forms::NumericUpDown^  numMove3PPUps;

	private: System::Windows::Forms::NumericUpDown^  numMove3PP;
	private: System::Windows::Forms::NumericUpDown^  numMove4PP;
	private: System::Windows::Forms::NumericUpDown^  numMove4PPUps;



	private: System::Windows::Forms::TextBox^  txtMove3TotalPP;
	private: System::Windows::Forms::TextBox^  txtMove4TotalPP;


	private: System::Windows::Forms::ToolTip^  ttMove1Flavor;
	private: System::Windows::Forms::ToolTip^  ttMove2Flavor;
	private: System::Windows::Forms::ToolTip^  ttMove3Flavor;
	private: System::Windows::Forms::ToolTip^  ttMove4Flavor;
	private: System::Windows::Forms::ListView^  lvBall;
	private: System::Windows::Forms::ImageList^  imgBalls;
	private: System::Windows::Forms::Label^  lblAbilityFlavor;
	private: System::Windows::Forms::SaveFileDialog^  savePKM;

	private: System::ComponentModel::IContainer^  components;


















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
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
			this->pbPKRS = (gcnew System::Windows::Forms::PictureBox());
			this->pbShiny = (gcnew System::Windows::Forms::PictureBox());
			this->pbGender = (gcnew System::Windows::Forms::PictureBox());
			this->pbSprite = (gcnew System::Windows::Forms::PictureBox());
			this->tcViewer = (gcnew System::Windows::Forms::TabControl());
			this->tpBasic = (gcnew System::Windows::Forms::TabPage());
			this->lblAbilityFlavor = (gcnew System::Windows::Forms::Label());
			this->lvBall = (gcnew System::Windows::Forms::ListView());
			this->imgBalls = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pbTNL = (gcnew System::Windows::Forms::ProgressBar());
			this->lblTNL = (gcnew System::Windows::Forms::Label());
			this->cbAbility = (gcnew System::Windows::Forms::ComboBox());
			this->lblAbility = (gcnew System::Windows::Forms::Label());
			this->pbType2 = (gcnew System::Windows::Forms::PictureBox());
			this->pbType1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblType = (gcnew System::Windows::Forms::Label());
			this->numEXP = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblEXP = (gcnew System::Windows::Forms::Label());
			this->lblNickname = (gcnew System::Windows::Forms::Label());
			this->chkNicknamed = (gcnew System::Windows::Forms::CheckBox());
			this->txtNickname = (gcnew System::Windows::Forms::TextBox());
			this->gbOT = (gcnew System::Windows::Forms::GroupBox());
			this->numSID = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblSecretID = (gcnew System::Windows::Forms::Label());
			this->numTID = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblTrainerID = (gcnew System::Windows::Forms::Label());
			this->rbOTFemale = (gcnew System::Windows::Forms::RadioButton());
			this->rbOTMale = (gcnew System::Windows::Forms::RadioButton());
			this->lblOTName = (gcnew System::Windows::Forms::Label());
			this->txtOTName = (gcnew System::Windows::Forms::TextBox());
			this->tpStats = (gcnew System::Windows::Forms::TabPage());
			this->cbNature = (gcnew System::Windows::Forms::ComboBox());
			this->lblNature = (gcnew System::Windows::Forms::Label());
			this->txtTotalEVs = (gcnew System::Windows::Forms::TextBox());
			this->lblTotalEVs = (gcnew System::Windows::Forms::Label());
			this->gbCalcStats = (gcnew System::Windows::Forms::GroupBox());
			this->tlCalcStats = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->txtCalcSpeed = (gcnew System::Windows::Forms::TextBox());
			this->txtCalcSpDef = (gcnew System::Windows::Forms::TextBox());
			this->txtCalcSpAtk = (gcnew System::Windows::Forms::TextBox());
			this->txtCalcDefense = (gcnew System::Windows::Forms::TextBox());
			this->txtCalcAttack = (gcnew System::Windows::Forms::TextBox());
			this->txtCalcHP = (gcnew System::Windows::Forms::TextBox());
			this->gbEVs = (gcnew System::Windows::Forms::GroupBox());
			this->tlEVs = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->numHPEV = (gcnew System::Windows::Forms::NumericUpDown());
			this->numAttackEV = (gcnew System::Windows::Forms::NumericUpDown());
			this->numDefenseEV = (gcnew System::Windows::Forms::NumericUpDown());
			this->numSpAtkEV = (gcnew System::Windows::Forms::NumericUpDown());
			this->numSpDefEV = (gcnew System::Windows::Forms::NumericUpDown());
			this->numSpeedEV = (gcnew System::Windows::Forms::NumericUpDown());
			this->gbIVs = (gcnew System::Windows::Forms::GroupBox());
			this->tlIVs = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lblSpeedIV = (gcnew System::Windows::Forms::Label());
			this->lblSpDefIV = (gcnew System::Windows::Forms::Label());
			this->lblSpAtkIV = (gcnew System::Windows::Forms::Label());
			this->lblDefenseIV = (gcnew System::Windows::Forms::Label());
			this->lblAttackIV = (gcnew System::Windows::Forms::Label());
			this->lblHPIV = (gcnew System::Windows::Forms::Label());
			this->numHPIV = (gcnew System::Windows::Forms::NumericUpDown());
			this->numAttackIV = (gcnew System::Windows::Forms::NumericUpDown());
			this->numDefenseIV = (gcnew System::Windows::Forms::NumericUpDown());
			this->numSpAtkIV = (gcnew System::Windows::Forms::NumericUpDown());
			this->numSpDefIV = (gcnew System::Windows::Forms::NumericUpDown());
			this->numSpeedIV = (gcnew System::Windows::Forms::NumericUpDown());
			this->tpMoves = (gcnew System::Windows::Forms::TabPage());
			this->tlMoves = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tlMove1TotalPP = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->txtMove1TotalPP = (gcnew System::Windows::Forms::TextBox());
			this->lblMove1TotalPP = (gcnew System::Windows::Forms::Label());
			this->tlMove1PP = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lblMove1PP = (gcnew System::Windows::Forms::Label());
			this->numMove1PP = (gcnew System::Windows::Forms::NumericUpDown());
			this->tlMove1PPUPs = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lblPPUps = (gcnew System::Windows::Forms::Label());
			this->numMove1PPUps = (gcnew System::Windows::Forms::NumericUpDown());
			this->tlMove1Accuracy = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lblMove1Accuracy = (gcnew System::Windows::Forms::Label());
			this->lblAccuracy = (gcnew System::Windows::Forms::Label());
			this->tlMove1Power = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lblMove1Power = (gcnew System::Windows::Forms::Label());
			this->lblPower = (gcnew System::Windows::Forms::Label());
			this->tlMove1NameEtc = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tlMove1TypeCatlbls = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lblMove1Cat = (gcnew System::Windows::Forms::Label());
			this->lblMove1Type = (gcnew System::Windows::Forms::Label());
			this->cbMove1 = (gcnew System::Windows::Forms::ComboBox());
			this->tlMove1TypeCat = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbMove1Cat = (gcnew System::Windows::Forms::PictureBox());
			this->pbMove1Type = (gcnew System::Windows::Forms::PictureBox());
			this->lblMoveName = (gcnew System::Windows::Forms::Label());
			this->tlMove2NameEtc = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->cbMove2 = (gcnew System::Windows::Forms::ComboBox());
			this->tlMove2TypeCat = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbMove2Cat = (gcnew System::Windows::Forms::PictureBox());
			this->pbMove2Type = (gcnew System::Windows::Forms::PictureBox());
			this->lblMove2Power = (gcnew System::Windows::Forms::Label());
			this->lblMove2Accuracy = (gcnew System::Windows::Forms::Label());
			this->numMove2PPUps = (gcnew System::Windows::Forms::NumericUpDown());
			this->numMove2PP = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtMove2TotalPP = (gcnew System::Windows::Forms::TextBox());
			this->tlMove3NameEtc = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->cbMove3 = (gcnew System::Windows::Forms::ComboBox());
			this->tlMove3TypeCat = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbMove3Cat = (gcnew System::Windows::Forms::PictureBox());
			this->pbMove3Type = (gcnew System::Windows::Forms::PictureBox());
			this->tlMove4NameEtc = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->cbMove4 = (gcnew System::Windows::Forms::ComboBox());
			this->tlMove4TypeCat = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbMove4Cat = (gcnew System::Windows::Forms::PictureBox());
			this->pbMove4Type = (gcnew System::Windows::Forms::PictureBox());
			this->lblMove3Power = (gcnew System::Windows::Forms::Label());
			this->lblMove3Accuracy = (gcnew System::Windows::Forms::Label());
			this->lblMove4Power = (gcnew System::Windows::Forms::Label());
			this->lblMove4Accuracy = (gcnew System::Windows::Forms::Label());
			this->numMove3PPUps = (gcnew System::Windows::Forms::NumericUpDown());
			this->numMove3PP = (gcnew System::Windows::Forms::NumericUpDown());
			this->numMove4PP = (gcnew System::Windows::Forms::NumericUpDown());
			this->numMove4PPUps = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtMove3TotalPP = (gcnew System::Windows::Forms::TextBox());
			this->txtMove4TotalPP = (gcnew System::Windows::Forms::TextBox());
			this->tpOrigins = (gcnew System::Windows::Forms::TabPage());
			this->tpRibbons = (gcnew System::Windows::Forms::TabPage());
			this->tpMisc = (gcnew System::Windows::Forms::TabPage());
			this->chkPIDHex = (gcnew System::Windows::Forms::CheckBox());
			this->lblPID = (gcnew System::Windows::Forms::Label());
			this->txtPID = (gcnew System::Windows::Forms::TextBox());
			this->ttMove1Flavor = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->ttMove2Flavor = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->ttMove3Flavor = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->ttMove4Flavor = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->savePKM = (gcnew System::Windows::Forms::SaveFileDialog());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbType2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbType1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numEXP))->BeginInit();
			this->gbOT->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSID))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numTID))->BeginInit();
			this->tpStats->SuspendLayout();
			this->gbCalcStats->SuspendLayout();
			this->tlCalcStats->SuspendLayout();
			this->gbEVs->SuspendLayout();
			this->tlEVs->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numHPEV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numAttackEV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numDefenseEV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpAtkEV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpDefEV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpeedEV))->BeginInit();
			this->gbIVs->SuspendLayout();
			this->tlIVs->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numHPIV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numAttackIV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numDefenseIV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpAtkIV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpDefIV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpeedIV))->BeginInit();
			this->tpMoves->SuspendLayout();
			this->tlMoves->SuspendLayout();
			this->tlMove1TotalPP->SuspendLayout();
			this->tlMove1PP->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMove1PP))->BeginInit();
			this->tlMove1PPUPs->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMove1PPUps))->BeginInit();
			this->tlMove1Accuracy->SuspendLayout();
			this->tlMove1Power->SuspendLayout();
			this->tlMove1NameEtc->SuspendLayout();
			this->tlMove1TypeCatlbls->SuspendLayout();
			this->tlMove1TypeCat->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbMove1Cat))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbMove1Type))->BeginInit();
			this->tlMove2NameEtc->SuspendLayout();
			this->tlMove2TypeCat->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbMove2Cat))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbMove2Type))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMove2PPUps))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMove2PP))->BeginInit();
			this->tlMove3NameEtc->SuspendLayout();
			this->tlMove3TypeCat->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbMove3Cat))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbMove3Type))->BeginInit();
			this->tlMove4NameEtc->SuspendLayout();
			this->tlMove4TypeCat->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbMove4Cat))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbMove4Type))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMove3PPUps))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMove3PP))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMove4PP))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMove4PPUps))->BeginInit();
			this->tpMisc->SuspendLayout();
			this->SuspendLayout();
			// 
			// tlViewer
			// 
			this->tlViewer->ColumnCount = 2;
			this->tlViewer->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlViewer->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 170)));
			this->tlViewer->Controls->Add(this->panGeneral, 1, 0);
			this->tlViewer->Controls->Add(this->tcViewer, 0, 0);
			this->tlViewer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlViewer->Location = System::Drawing::Point(0, 0);
			this->tlViewer->Name = L"tlViewer";
			this->tlViewer->RowCount = 1;
			this->tlViewer->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlViewer->Size = System::Drawing::Size(616, 286);
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
			this->panGeneral->Controls->Add(this->pbPKRS);
			this->panGeneral->Controls->Add(this->pbShiny);
			this->panGeneral->Controls->Add(this->pbGender);
			this->panGeneral->Controls->Add(this->pbSprite);
			this->panGeneral->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panGeneral->Location = System::Drawing::Point(449, 3);
			this->panGeneral->Name = L"panGeneral";
			this->panGeneral->Size = System::Drawing::Size(164, 280);
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
			this->btnExport->Text = L"Export PKM Data";
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
			this->pbShiny->Location = System::Drawing::Point(135, 3);
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
			this->tcViewer->Size = System::Drawing::Size(440, 280);
			this->tcViewer->TabIndex = 0;
			// 
			// tpBasic
			// 
			this->tpBasic->Controls->Add(this->lblAbilityFlavor);
			this->tpBasic->Controls->Add(this->lvBall);
			this->tpBasic->Controls->Add(this->pbTNL);
			this->tpBasic->Controls->Add(this->lblTNL);
			this->tpBasic->Controls->Add(this->cbAbility);
			this->tpBasic->Controls->Add(this->lblAbility);
			this->tpBasic->Controls->Add(this->pbType2);
			this->tpBasic->Controls->Add(this->pbType1);
			this->tpBasic->Controls->Add(this->lblType);
			this->tpBasic->Controls->Add(this->numEXP);
			this->tpBasic->Controls->Add(this->lblEXP);
			this->tpBasic->Controls->Add(this->lblNickname);
			this->tpBasic->Controls->Add(this->chkNicknamed);
			this->tpBasic->Controls->Add(this->txtNickname);
			this->tpBasic->Controls->Add(this->gbOT);
			this->tpBasic->Location = System::Drawing::Point(4, 22);
			this->tpBasic->Name = L"tpBasic";
			this->tpBasic->Padding = System::Windows::Forms::Padding(3);
			this->tpBasic->Size = System::Drawing::Size(432, 254);
			this->tpBasic->TabIndex = 0;
			this->tpBasic->Text = L"Basic";
			this->tpBasic->UseVisualStyleBackColor = true;
			// 
			// lblAbilityFlavor
			// 
			this->lblAbilityFlavor->Location = System::Drawing::Point(138, 149);
			this->lblAbilityFlavor->Name = L"lblAbilityFlavor";
			this->lblAbilityFlavor->Size = System::Drawing::Size(147, 50);
			this->lblAbilityFlavor->TabIndex = 22;
			// 
			// lvBall
			// 
			this->lvBall->Alignment = System::Windows::Forms::ListViewAlignment::Left;
			this->lvBall->AutoArrange = false;
			this->lvBall->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::None;
			this->lvBall->LargeImageList = this->imgBalls;
			this->lvBall->Location = System::Drawing::Point(291, 6);
			this->lvBall->MultiSelect = false;
			this->lvBall->Name = L"lvBall";
			this->lvBall->ShowGroups = false;
			this->lvBall->Size = System::Drawing::Size(135, 242);
			this->lvBall->SmallImageList = this->imgBalls;
			this->lvBall->StateImageList = this->imgBalls;
			this->lvBall->TabIndex = 21;
			this->lvBall->TileSize = System::Drawing::Size(24, 24);
			this->lvBall->UseCompatibleStateImageBehavior = false;
			this->lvBall->View = System::Windows::Forms::View::Details;
			// 
			// imgBalls
			// 
			this->imgBalls->ColorDepth = System::Windows::Forms::ColorDepth::Depth32Bit;
			this->imgBalls->ImageSize = System::Drawing::Size(24, 24);
			this->imgBalls->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// pbTNL
			// 
			this->pbTNL->Location = System::Drawing::Point(6, 202);
			this->pbTNL->Name = L"pbTNL";
			this->pbTNL->Size = System::Drawing::Size(279, 23);
			this->pbTNL->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->pbTNL->TabIndex = 21;
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
			// cbAbility
			// 
			this->cbAbility->FormattingEnabled = true;
			this->cbAbility->Location = System::Drawing::Point(175, 125);
			this->cbAbility->Name = L"cbAbility";
			this->cbAbility->Size = System::Drawing::Size(110, 21);
			this->cbAbility->TabIndex = 19;
			this->cbAbility->SelectedIndexChanged += gcnew System::EventHandler(this, &frmPKMViewer::cbAbility_SelectedIndexChanged);
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
			// lblType
			// 
			this->lblType->AutoSize = true;
			this->lblType->Location = System::Drawing::Point(6, 125);
			this->lblType->Name = L"lblType";
			this->lblType->Size = System::Drawing::Size(31, 13);
			this->lblType->TabIndex = 12;
			this->lblType->Text = L"Type";
			// 
			// numEXP
			// 
			this->numEXP->Location = System::Drawing::Point(40, 159);
			this->numEXP->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {65535, 0, 0, 0});
			this->numEXP->Name = L"numEXP";
			this->numEXP->Size = System::Drawing::Size(89, 20);
			this->numEXP->TabIndex = 11;
			this->numEXP->ValueChanged += gcnew System::EventHandler(this, &frmPKMViewer::numEXP_ValueChanged);
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
			// lblNickname
			// 
			this->lblNickname->AutoSize = true;
			this->lblNickname->Location = System::Drawing::Point(6, 10);
			this->lblNickname->Name = L"lblNickname";
			this->lblNickname->Size = System::Drawing::Size(55, 13);
			this->lblNickname->TabIndex = 3;
			this->lblNickname->Text = L"Nickname";
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
			this->chkNicknamed->CheckedChanged += gcnew System::EventHandler(this, &frmPKMViewer::chkNicknamed_CheckedChanged);
			// 
			// txtNickname
			// 
			this->txtNickname->Location = System::Drawing::Point(71, 6);
			this->txtNickname->Name = L"txtNickname";
			this->txtNickname->Size = System::Drawing::Size(128, 20);
			this->txtNickname->TabIndex = 1;
			this->txtNickname->TextChanged += gcnew System::EventHandler(this, &frmPKMViewer::txtNickname_TextChanged);
			// 
			// gbOT
			// 
			this->gbOT->Controls->Add(this->numSID);
			this->gbOT->Controls->Add(this->lblSecretID);
			this->gbOT->Controls->Add(this->numTID);
			this->gbOT->Controls->Add(this->lblTrainerID);
			this->gbOT->Controls->Add(this->rbOTFemale);
			this->gbOT->Controls->Add(this->rbOTMale);
			this->gbOT->Controls->Add(this->lblOTName);
			this->gbOT->Controls->Add(this->txtOTName);
			this->gbOT->Location = System::Drawing::Point(6, 32);
			this->gbOT->Name = L"gbOT";
			this->gbOT->Size = System::Drawing::Size(279, 87);
			this->gbOT->TabIndex = 0;
			this->gbOT->TabStop = false;
			this->gbOT->Text = L"OT";
			// 
			// numSID
			// 
			this->numSID->Location = System::Drawing::Point(123, 59);
			this->numSID->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {65535, 0, 0, 0});
			this->numSID->Name = L"numSID";
			this->numSID->Size = System::Drawing::Size(52, 20);
			this->numSID->TabIndex = 11;
			this->numSID->ValueChanged += gcnew System::EventHandler(this, &frmPKMViewer::numSID_ValueChanged);
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
			// numTID
			// 
			this->numTID->Location = System::Drawing::Point(65, 59);
			this->numTID->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {65535, 0, 0, 0});
			this->numTID->Name = L"numTID";
			this->numTID->Size = System::Drawing::Size(52, 20);
			this->numTID->TabIndex = 9;
			this->numTID->ValueChanged += gcnew System::EventHandler(this, &frmPKMViewer::numTID_ValueChanged);
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
			// rbOTFemale
			// 
			this->rbOTFemale->AutoSize = true;
			this->rbOTFemale->Location = System::Drawing::Point(214, 41);
			this->rbOTFemale->Name = L"rbOTFemale";
			this->rbOTFemale->Size = System::Drawing::Size(59, 17);
			this->rbOTFemale->TabIndex = 7;
			this->rbOTFemale->TabStop = true;
			this->rbOTFemale->Text = L"Female";
			this->rbOTFemale->UseVisualStyleBackColor = true;
			this->rbOTFemale->CheckedChanged += gcnew System::EventHandler(this, &frmPKMViewer::rbOTFemale_CheckedChanged);
			// 
			// rbOTMale
			// 
			this->rbOTMale->AutoSize = true;
			this->rbOTMale->Location = System::Drawing::Point(214, 18);
			this->rbOTMale->Name = L"rbOTMale";
			this->rbOTMale->Size = System::Drawing::Size(48, 17);
			this->rbOTMale->TabIndex = 6;
			this->rbOTMale->TabStop = true;
			this->rbOTMale->Text = L"Male";
			this->rbOTMale->UseVisualStyleBackColor = true;
			this->rbOTMale->CheckedChanged += gcnew System::EventHandler(this, &frmPKMViewer::rbOTMale_CheckedChanged);
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
			// txtOTName
			// 
			this->txtOTName->Location = System::Drawing::Point(65, 13);
			this->txtOTName->Name = L"txtOTName";
			this->txtOTName->Size = System::Drawing::Size(128, 20);
			this->txtOTName->TabIndex = 4;
			this->txtOTName->TextChanged += gcnew System::EventHandler(this, &frmPKMViewer::txtOTName_TextChanged);
			// 
			// tpStats
			// 
			this->tpStats->Controls->Add(this->cbNature);
			this->tpStats->Controls->Add(this->lblNature);
			this->tpStats->Controls->Add(this->txtTotalEVs);
			this->tpStats->Controls->Add(this->lblTotalEVs);
			this->tpStats->Controls->Add(this->gbCalcStats);
			this->tpStats->Controls->Add(this->gbEVs);
			this->tpStats->Controls->Add(this->gbIVs);
			this->tpStats->Location = System::Drawing::Point(4, 22);
			this->tpStats->Name = L"tpStats";
			this->tpStats->Padding = System::Windows::Forms::Padding(3);
			this->tpStats->Size = System::Drawing::Size(432, 254);
			this->tpStats->TabIndex = 1;
			this->tpStats->Text = L"Stats";
			this->tpStats->UseVisualStyleBackColor = true;
			// 
			// cbNature
			// 
			this->cbNature->FormattingEnabled = true;
			this->cbNature->Location = System::Drawing::Point(87, 223);
			this->cbNature->Name = L"cbNature";
			this->cbNature->Size = System::Drawing::Size(131, 21);
			this->cbNature->TabIndex = 15;
			this->cbNature->SelectedIndexChanged += gcnew System::EventHandler(this, &frmPKMViewer::cbNature_SelectedIndexChanged);
			// 
			// lblNature
			// 
			this->lblNature->AutoSize = true;
			this->lblNature->Location = System::Drawing::Point(42, 224);
			this->lblNature->Name = L"lblNature";
			this->lblNature->Size = System::Drawing::Size(39, 13);
			this->lblNature->TabIndex = 13;
			this->lblNature->Text = L"Nature";
			// 
			// txtTotalEVs
			// 
			this->txtTotalEVs->Location = System::Drawing::Point(129, 197);
			this->txtTotalEVs->Name = L"txtTotalEVs";
			this->txtTotalEVs->ReadOnly = true;
			this->txtTotalEVs->Size = System::Drawing::Size(46, 20);
			this->txtTotalEVs->TabIndex = 12;
			// 
			// lblTotalEVs
			// 
			this->lblTotalEVs->AutoSize = true;
			this->lblTotalEVs->Location = System::Drawing::Point(64, 200);
			this->lblTotalEVs->Name = L"lblTotalEVs";
			this->lblTotalEVs->Size = System::Drawing::Size(53, 13);
			this->lblTotalEVs->TabIndex = 11;
			this->lblTotalEVs->Text = L"Total EVs";
			// 
			// gbCalcStats
			// 
			this->gbCalcStats->Controls->Add(this->tlCalcStats);
			this->gbCalcStats->Location = System::Drawing::Point(187, 6);
			this->gbCalcStats->Name = L"gbCalcStats";
			this->gbCalcStats->Size = System::Drawing::Size(98, 188);
			this->gbCalcStats->TabIndex = 2;
			this->gbCalcStats->TabStop = false;
			this->gbCalcStats->Text = L"Calculated Stats";
			// 
			// tlCalcStats
			// 
			this->tlCalcStats->ColumnCount = 1;
			this->tlCalcStats->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlCalcStats->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlCalcStats->Controls->Add(this->txtCalcSpeed, 0, 5);
			this->tlCalcStats->Controls->Add(this->txtCalcSpDef, 0, 4);
			this->tlCalcStats->Controls->Add(this->txtCalcSpAtk, 0, 3);
			this->tlCalcStats->Controls->Add(this->txtCalcDefense, 0, 2);
			this->tlCalcStats->Controls->Add(this->txtCalcAttack, 0, 1);
			this->tlCalcStats->Controls->Add(this->txtCalcHP, 0, 0);
			this->tlCalcStats->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlCalcStats->Location = System::Drawing::Point(3, 16);
			this->tlCalcStats->Name = L"tlCalcStats";
			this->tlCalcStats->RowCount = 6;
			this->tlCalcStats->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlCalcStats->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlCalcStats->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlCalcStats->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlCalcStats->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlCalcStats->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlCalcStats->Size = System::Drawing::Size(92, 169);
			this->tlCalcStats->TabIndex = 0;
			// 
			// txtCalcSpeed
			// 
			this->txtCalcSpeed->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->txtCalcSpeed->Location = System::Drawing::Point(3, 144);
			this->txtCalcSpeed->Name = L"txtCalcSpeed";
			this->txtCalcSpeed->ReadOnly = true;
			this->txtCalcSpeed->Size = System::Drawing::Size(86, 20);
			this->txtCalcSpeed->TabIndex = 5;
			// 
			// txtCalcSpDef
			// 
			this->txtCalcSpDef->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->txtCalcSpDef->Location = System::Drawing::Point(3, 116);
			this->txtCalcSpDef->Name = L"txtCalcSpDef";
			this->txtCalcSpDef->ReadOnly = true;
			this->txtCalcSpDef->Size = System::Drawing::Size(86, 20);
			this->txtCalcSpDef->TabIndex = 4;
			// 
			// txtCalcSpAtk
			// 
			this->txtCalcSpAtk->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->txtCalcSpAtk->Location = System::Drawing::Point(3, 88);
			this->txtCalcSpAtk->Name = L"txtCalcSpAtk";
			this->txtCalcSpAtk->ReadOnly = true;
			this->txtCalcSpAtk->Size = System::Drawing::Size(86, 20);
			this->txtCalcSpAtk->TabIndex = 3;
			// 
			// txtCalcDefense
			// 
			this->txtCalcDefense->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->txtCalcDefense->Location = System::Drawing::Point(3, 60);
			this->txtCalcDefense->Name = L"txtCalcDefense";
			this->txtCalcDefense->ReadOnly = true;
			this->txtCalcDefense->Size = System::Drawing::Size(86, 20);
			this->txtCalcDefense->TabIndex = 2;
			// 
			// txtCalcAttack
			// 
			this->txtCalcAttack->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->txtCalcAttack->Location = System::Drawing::Point(3, 32);
			this->txtCalcAttack->Name = L"txtCalcAttack";
			this->txtCalcAttack->ReadOnly = true;
			this->txtCalcAttack->Size = System::Drawing::Size(86, 20);
			this->txtCalcAttack->TabIndex = 1;
			// 
			// txtCalcHP
			// 
			this->txtCalcHP->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->txtCalcHP->Location = System::Drawing::Point(3, 4);
			this->txtCalcHP->Name = L"txtCalcHP";
			this->txtCalcHP->ReadOnly = true;
			this->txtCalcHP->Size = System::Drawing::Size(86, 20);
			this->txtCalcHP->TabIndex = 0;
			// 
			// gbEVs
			// 
			this->gbEVs->Controls->Add(this->tlEVs);
			this->gbEVs->Location = System::Drawing::Point(123, 6);
			this->gbEVs->Name = L"gbEVs";
			this->gbEVs->Size = System::Drawing::Size(58, 188);
			this->gbEVs->TabIndex = 1;
			this->gbEVs->TabStop = false;
			this->gbEVs->Text = L"EVs";
			// 
			// tlEVs
			// 
			this->tlEVs->ColumnCount = 1;
			this->tlEVs->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlEVs->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlEVs->Controls->Add(this->numHPEV, 0, 0);
			this->tlEVs->Controls->Add(this->numAttackEV, 0, 1);
			this->tlEVs->Controls->Add(this->numDefenseEV, 0, 2);
			this->tlEVs->Controls->Add(this->numSpAtkEV, 0, 3);
			this->tlEVs->Controls->Add(this->numSpDefEV, 0, 4);
			this->tlEVs->Controls->Add(this->numSpeedEV, 0, 5);
			this->tlEVs->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlEVs->Location = System::Drawing::Point(3, 16);
			this->tlEVs->Name = L"tlEVs";
			this->tlEVs->RowCount = 6;
			this->tlEVs->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlEVs->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlEVs->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlEVs->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlEVs->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlEVs->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlEVs->Size = System::Drawing::Size(52, 169);
			this->tlEVs->TabIndex = 0;
			// 
			// numHPEV
			// 
			this->numHPEV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numHPEV->Location = System::Drawing::Point(3, 4);
			this->numHPEV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {255, 0, 0, 0});
			this->numHPEV->Name = L"numHPEV";
			this->numHPEV->Size = System::Drawing::Size(46, 20);
			this->numHPEV->TabIndex = 1;
			this->numHPEV->ValueChanged += gcnew System::EventHandler(this, &frmPKMViewer::numHPEV_ValueChanged);
			// 
			// numAttackEV
			// 
			this->numAttackEV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numAttackEV->Location = System::Drawing::Point(3, 32);
			this->numAttackEV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {255, 0, 0, 0});
			this->numAttackEV->Name = L"numAttackEV";
			this->numAttackEV->Size = System::Drawing::Size(46, 20);
			this->numAttackEV->TabIndex = 2;
			this->numAttackEV->ValueChanged += gcnew System::EventHandler(this, &frmPKMViewer::numAttackEV_ValueChanged);
			// 
			// numDefenseEV
			// 
			this->numDefenseEV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numDefenseEV->Location = System::Drawing::Point(3, 60);
			this->numDefenseEV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {255, 0, 0, 0});
			this->numDefenseEV->Name = L"numDefenseEV";
			this->numDefenseEV->Size = System::Drawing::Size(46, 20);
			this->numDefenseEV->TabIndex = 3;
			this->numDefenseEV->ValueChanged += gcnew System::EventHandler(this, &frmPKMViewer::numDefenseEV_ValueChanged);
			// 
			// numSpAtkEV
			// 
			this->numSpAtkEV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numSpAtkEV->Location = System::Drawing::Point(3, 88);
			this->numSpAtkEV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {255, 0, 0, 0});
			this->numSpAtkEV->Name = L"numSpAtkEV";
			this->numSpAtkEV->Size = System::Drawing::Size(46, 20);
			this->numSpAtkEV->TabIndex = 4;
			this->numSpAtkEV->ValueChanged += gcnew System::EventHandler(this, &frmPKMViewer::numSpAtkEV_ValueChanged);
			// 
			// numSpDefEV
			// 
			this->numSpDefEV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numSpDefEV->Location = System::Drawing::Point(3, 116);
			this->numSpDefEV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {255, 0, 0, 0});
			this->numSpDefEV->Name = L"numSpDefEV";
			this->numSpDefEV->Size = System::Drawing::Size(46, 20);
			this->numSpDefEV->TabIndex = 5;
			this->numSpDefEV->ValueChanged += gcnew System::EventHandler(this, &frmPKMViewer::numSpDefEV_ValueChanged);
			// 
			// numSpeedEV
			// 
			this->numSpeedEV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numSpeedEV->Location = System::Drawing::Point(3, 144);
			this->numSpeedEV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {255, 0, 0, 0});
			this->numSpeedEV->Name = L"numSpeedEV";
			this->numSpeedEV->Size = System::Drawing::Size(46, 20);
			this->numSpeedEV->TabIndex = 6;
			this->numSpeedEV->ValueChanged += gcnew System::EventHandler(this, &frmPKMViewer::numSpeedEV_ValueChanged);
			// 
			// gbIVs
			// 
			this->gbIVs->Controls->Add(this->tlIVs);
			this->gbIVs->Location = System::Drawing::Point(6, 6);
			this->gbIVs->Name = L"gbIVs";
			this->gbIVs->Size = System::Drawing::Size(111, 188);
			this->gbIVs->TabIndex = 0;
			this->gbIVs->TabStop = false;
			this->gbIVs->Text = L"IVs";
			// 
			// tlIVs
			// 
			this->tlIVs->ColumnCount = 2;
			this->tlIVs->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50.9434F)));
			this->tlIVs->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 49.0566F)));
			this->tlIVs->Controls->Add(this->lblSpeedIV, 0, 5);
			this->tlIVs->Controls->Add(this->lblSpDefIV, 0, 4);
			this->tlIVs->Controls->Add(this->lblSpAtkIV, 0, 3);
			this->tlIVs->Controls->Add(this->lblDefenseIV, 0, 2);
			this->tlIVs->Controls->Add(this->lblAttackIV, 0, 1);
			this->tlIVs->Controls->Add(this->lblHPIV, 0, 0);
			this->tlIVs->Controls->Add(this->numHPIV, 1, 0);
			this->tlIVs->Controls->Add(this->numAttackIV, 1, 1);
			this->tlIVs->Controls->Add(this->numDefenseIV, 1, 2);
			this->tlIVs->Controls->Add(this->numSpAtkIV, 1, 3);
			this->tlIVs->Controls->Add(this->numSpDefIV, 1, 4);
			this->tlIVs->Controls->Add(this->numSpeedIV, 1, 5);
			this->tlIVs->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlIVs->Location = System::Drawing::Point(3, 16);
			this->tlIVs->Name = L"tlIVs";
			this->tlIVs->RowCount = 6;
			this->tlIVs->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlIVs->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlIVs->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlIVs->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlIVs->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlIVs->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlIVs->Size = System::Drawing::Size(105, 169);
			this->tlIVs->TabIndex = 0;
			// 
			// lblSpeedIV
			// 
			this->lblSpeedIV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->lblSpeedIV->AutoSize = true;
			this->lblSpeedIV->Location = System::Drawing::Point(3, 148);
			this->lblSpeedIV->Name = L"lblSpeedIV";
			this->lblSpeedIV->Size = System::Drawing::Size(47, 13);
			this->lblSpeedIV->TabIndex = 11;
			this->lblSpeedIV->Text = L"Speed";
			// 
			// lblSpDefIV
			// 
			this->lblSpDefIV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->lblSpDefIV->AutoSize = true;
			this->lblSpDefIV->Location = System::Drawing::Point(3, 119);
			this->lblSpDefIV->Name = L"lblSpDefIV";
			this->lblSpDefIV->Size = System::Drawing::Size(47, 13);
			this->lblSpDefIV->TabIndex = 10;
			this->lblSpDefIV->Text = L"Sp Def";
			// 
			// lblSpAtkIV
			// 
			this->lblSpAtkIV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->lblSpAtkIV->AutoSize = true;
			this->lblSpAtkIV->Location = System::Drawing::Point(3, 91);
			this->lblSpAtkIV->Name = L"lblSpAtkIV";
			this->lblSpAtkIV->Size = System::Drawing::Size(47, 13);
			this->lblSpAtkIV->TabIndex = 9;
			this->lblSpAtkIV->Text = L"Sp Atk";
			// 
			// lblDefenseIV
			// 
			this->lblDefenseIV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->lblDefenseIV->AutoSize = true;
			this->lblDefenseIV->Location = System::Drawing::Point(3, 63);
			this->lblDefenseIV->Name = L"lblDefenseIV";
			this->lblDefenseIV->Size = System::Drawing::Size(47, 13);
			this->lblDefenseIV->TabIndex = 8;
			this->lblDefenseIV->Text = L"Defense";
			// 
			// lblAttackIV
			// 
			this->lblAttackIV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->lblAttackIV->AutoSize = true;
			this->lblAttackIV->Location = System::Drawing::Point(3, 35);
			this->lblAttackIV->Name = L"lblAttackIV";
			this->lblAttackIV->Size = System::Drawing::Size(47, 13);
			this->lblAttackIV->TabIndex = 7;
			this->lblAttackIV->Text = L"Attack";
			// 
			// lblHPIV
			// 
			this->lblHPIV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->lblHPIV->AutoSize = true;
			this->lblHPIV->Location = System::Drawing::Point(3, 7);
			this->lblHPIV->Name = L"lblHPIV";
			this->lblHPIV->Size = System::Drawing::Size(47, 13);
			this->lblHPIV->TabIndex = 0;
			this->lblHPIV->Text = L"HP";
			// 
			// numHPIV
			// 
			this->numHPIV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numHPIV->Location = System::Drawing::Point(56, 4);
			this->numHPIV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {31, 0, 0, 0});
			this->numHPIV->Name = L"numHPIV";
			this->numHPIV->Size = System::Drawing::Size(46, 20);
			this->numHPIV->TabIndex = 1;
			this->numHPIV->ValueChanged += gcnew System::EventHandler(this, &frmPKMViewer::numHPIV_ValueChanged);
			// 
			// numAttackIV
			// 
			this->numAttackIV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numAttackIV->Location = System::Drawing::Point(56, 32);
			this->numAttackIV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {31, 0, 0, 0});
			this->numAttackIV->Name = L"numAttackIV";
			this->numAttackIV->Size = System::Drawing::Size(46, 20);
			this->numAttackIV->TabIndex = 2;
			this->numAttackIV->ValueChanged += gcnew System::EventHandler(this, &frmPKMViewer::numAttackIV_ValueChanged);
			// 
			// numDefenseIV
			// 
			this->numDefenseIV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numDefenseIV->Location = System::Drawing::Point(56, 60);
			this->numDefenseIV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {31, 0, 0, 0});
			this->numDefenseIV->Name = L"numDefenseIV";
			this->numDefenseIV->Size = System::Drawing::Size(46, 20);
			this->numDefenseIV->TabIndex = 3;
			this->numDefenseIV->ValueChanged += gcnew System::EventHandler(this, &frmPKMViewer::numDefenseIV_ValueChanged);
			// 
			// numSpAtkIV
			// 
			this->numSpAtkIV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numSpAtkIV->Location = System::Drawing::Point(56, 88);
			this->numSpAtkIV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {31, 0, 0, 0});
			this->numSpAtkIV->Name = L"numSpAtkIV";
			this->numSpAtkIV->Size = System::Drawing::Size(46, 20);
			this->numSpAtkIV->TabIndex = 4;
			this->numSpAtkIV->ValueChanged += gcnew System::EventHandler(this, &frmPKMViewer::numSpAtkIV_ValueChanged);
			// 
			// numSpDefIV
			// 
			this->numSpDefIV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numSpDefIV->Location = System::Drawing::Point(56, 116);
			this->numSpDefIV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {31, 0, 0, 0});
			this->numSpDefIV->Name = L"numSpDefIV";
			this->numSpDefIV->Size = System::Drawing::Size(46, 20);
			this->numSpDefIV->TabIndex = 5;
			this->numSpDefIV->ValueChanged += gcnew System::EventHandler(this, &frmPKMViewer::numSpDefIV_ValueChanged);
			// 
			// numSpeedIV
			// 
			this->numSpeedIV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numSpeedIV->Location = System::Drawing::Point(56, 144);
			this->numSpeedIV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {31, 0, 0, 0});
			this->numSpeedIV->Name = L"numSpeedIV";
			this->numSpeedIV->Size = System::Drawing::Size(46, 20);
			this->numSpeedIV->TabIndex = 6;
			this->numSpeedIV->ValueChanged += gcnew System::EventHandler(this, &frmPKMViewer::numSpeedIV_ValueChanged);
			// 
			// tpMoves
			// 
			this->tpMoves->Controls->Add(this->tlMoves);
			this->tpMoves->Location = System::Drawing::Point(4, 22);
			this->tpMoves->Name = L"tpMoves";
			this->tpMoves->Size = System::Drawing::Size(432, 254);
			this->tpMoves->TabIndex = 2;
			this->tpMoves->Text = L"Moves";
			this->tpMoves->UseVisualStyleBackColor = true;
			// 
			// tlMoves
			// 
			this->tlMoves->ColumnCount = 6;
			this->tlMoves->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 229)));
			this->tlMoves->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 18.2266F)));
			this->tlMoves->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 18.71921F)));
			this->tlMoves->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 18.71921F)));
			this->tlMoves->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 22.33503F)));
			this->tlMoves->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 21.3198F)));
			this->tlMoves->Controls->Add(this->tlMove1TotalPP, 5, 0);
			this->tlMoves->Controls->Add(this->tlMove1PP, 4, 0);
			this->tlMoves->Controls->Add(this->tlMove1PPUPs, 3, 0);
			this->tlMoves->Controls->Add(this->tlMove1Accuracy, 2, 0);
			this->tlMoves->Controls->Add(this->tlMove1Power, 1, 0);
			this->tlMoves->Controls->Add(this->tlMove1NameEtc, 0, 0);
			this->tlMoves->Controls->Add(this->tlMove2NameEtc, 0, 1);
			this->tlMoves->Controls->Add(this->lblMove2Power, 1, 1);
			this->tlMoves->Controls->Add(this->lblMove2Accuracy, 2, 1);
			this->tlMoves->Controls->Add(this->numMove2PPUps, 3, 1);
			this->tlMoves->Controls->Add(this->numMove2PP, 4, 1);
			this->tlMoves->Controls->Add(this->txtMove2TotalPP, 5, 1);
			this->tlMoves->Controls->Add(this->tlMove3NameEtc, 0, 2);
			this->tlMoves->Controls->Add(this->tlMove4NameEtc, 0, 3);
			this->tlMoves->Controls->Add(this->lblMove3Power, 1, 2);
			this->tlMoves->Controls->Add(this->lblMove3Accuracy, 2, 2);
			this->tlMoves->Controls->Add(this->lblMove4Power, 1, 3);
			this->tlMoves->Controls->Add(this->lblMove4Accuracy, 2, 3);
			this->tlMoves->Controls->Add(this->numMove3PPUps, 3, 2);
			this->tlMoves->Controls->Add(this->numMove3PP, 4, 2);
			this->tlMoves->Controls->Add(this->numMove4PP, 4, 3);
			this->tlMoves->Controls->Add(this->numMove4PPUps, 3, 3);
			this->tlMoves->Controls->Add(this->txtMove3TotalPP, 5, 2);
			this->tlMoves->Controls->Add(this->txtMove4TotalPP, 5, 3);
			this->tlMoves->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlMoves->Location = System::Drawing::Point(0, 0);
			this->tlMoves->Name = L"tlMoves";
			this->tlMoves->RowCount = 5;
			this->tlMoves->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 69)));
			this->tlMoves->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 38)));
			this->tlMoves->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 38)));
			this->tlMoves->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 38)));
			this->tlMoves->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 71)));
			this->tlMoves->Size = System::Drawing::Size(432, 254);
			this->tlMoves->TabIndex = 0;
			// 
			// tlMove1TotalPP
			// 
			this->tlMove1TotalPP->ColumnCount = 1;
			this->tlMove1TotalPP->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tlMove1TotalPP->Controls->Add(this->txtMove1TotalPP, 0, 1);
			this->tlMove1TotalPP->Controls->Add(this->lblMove1TotalPP, 0, 0);
			this->tlMove1TotalPP->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlMove1TotalPP->Location = System::Drawing::Point(390, 3);
			this->tlMove1TotalPP->Name = L"tlMove1TotalPP";
			this->tlMove1TotalPP->RowCount = 2;
			this->tlMove1TotalPP->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlMove1TotalPP->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlMove1TotalPP->Size = System::Drawing::Size(39, 63);
			this->tlMove1TotalPP->TabIndex = 20;
			// 
			// txtMove1TotalPP
			// 
			this->txtMove1TotalPP->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->txtMove1TotalPP->Location = System::Drawing::Point(3, 37);
			this->txtMove1TotalPP->Name = L"txtMove1TotalPP";
			this->txtMove1TotalPP->ReadOnly = true;
			this->txtMove1TotalPP->Size = System::Drawing::Size(33, 20);
			this->txtMove1TotalPP->TabIndex = 13;
			// 
			// lblMove1TotalPP
			// 
			this->lblMove1TotalPP->AutoSize = true;
			this->lblMove1TotalPP->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblMove1TotalPP->Location = System::Drawing::Point(3, 0);
			this->lblMove1TotalPP->Name = L"lblMove1TotalPP";
			this->lblMove1TotalPP->Size = System::Drawing::Size(33, 31);
			this->lblMove1TotalPP->TabIndex = 0;
			this->lblMove1TotalPP->Text = L"Total PP";
			this->lblMove1TotalPP->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlMove1PP
			// 
			this->tlMove1PP->ColumnCount = 1;
			this->tlMove1PP->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlMove1PP->Controls->Add(this->lblMove1PP, 0, 0);
			this->tlMove1PP->Controls->Add(this->numMove1PP, 0, 1);
			this->tlMove1PP->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlMove1PP->Location = System::Drawing::Point(345, 3);
			this->tlMove1PP->Name = L"tlMove1PP";
			this->tlMove1PP->RowCount = 2;
			this->tlMove1PP->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlMove1PP->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlMove1PP->Size = System::Drawing::Size(39, 63);
			this->tlMove1PP->TabIndex = 19;
			// 
			// lblMove1PP
			// 
			this->lblMove1PP->AutoSize = true;
			this->lblMove1PP->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblMove1PP->Location = System::Drawing::Point(3, 0);
			this->lblMove1PP->Name = L"lblMove1PP";
			this->lblMove1PP->Size = System::Drawing::Size(33, 31);
			this->lblMove1PP->TabIndex = 0;
			this->lblMove1PP->Text = L"PP";
			this->lblMove1PP->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numMove1PP
			// 
			this->numMove1PP->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numMove1PP->Location = System::Drawing::Point(3, 37);
			this->numMove1PP->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numMove1PP->Name = L"numMove1PP";
			this->numMove1PP->Size = System::Drawing::Size(33, 20);
			this->numMove1PP->TabIndex = 1;
			this->numMove1PP->ValueChanged += gcnew System::EventHandler(this, &frmPKMViewer::numMove1PP_ValueChanged);
			// 
			// tlMove1PPUPs
			// 
			this->tlMove1PPUPs->ColumnCount = 1;
			this->tlMove1PPUPs->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlMove1PPUPs->Controls->Add(this->lblPPUps, 0, 0);
			this->tlMove1PPUPs->Controls->Add(this->numMove1PPUps, 0, 1);
			this->tlMove1PPUPs->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlMove1PPUPs->Location = System::Drawing::Point(307, 3);
			this->tlMove1PPUPs->Name = L"tlMove1PPUPs";
			this->tlMove1PPUPs->RowCount = 2;
			this->tlMove1PPUPs->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlMove1PPUPs->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlMove1PPUPs->Size = System::Drawing::Size(32, 63);
			this->tlMove1PPUPs->TabIndex = 18;
			// 
			// lblPPUps
			// 
			this->lblPPUps->AutoSize = true;
			this->lblPPUps->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblPPUps->Location = System::Drawing::Point(3, 0);
			this->lblPPUps->Name = L"lblPPUps";
			this->lblPPUps->Size = System::Drawing::Size(26, 31);
			this->lblPPUps->TabIndex = 0;
			this->lblPPUps->Text = L"PP Ups";
			this->lblPPUps->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numMove1PPUps
			// 
			this->numMove1PPUps->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numMove1PPUps->Location = System::Drawing::Point(3, 37);
			this->numMove1PPUps->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {3, 0, 0, 0});
			this->numMove1PPUps->Name = L"numMove1PPUps";
			this->numMove1PPUps->Size = System::Drawing::Size(26, 20);
			this->numMove1PPUps->TabIndex = 1;
			this->numMove1PPUps->ValueChanged += gcnew System::EventHandler(this, &frmPKMViewer::numMove1PPUps_ValueChanged);
			// 
			// tlMove1Accuracy
			// 
			this->tlMove1Accuracy->ColumnCount = 1;
			this->tlMove1Accuracy->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tlMove1Accuracy->Controls->Add(this->lblMove1Accuracy, 0, 1);
			this->tlMove1Accuracy->Controls->Add(this->lblAccuracy, 0, 0);
			this->tlMove1Accuracy->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlMove1Accuracy->Location = System::Drawing::Point(269, 3);
			this->tlMove1Accuracy->Name = L"tlMove1Accuracy";
			this->tlMove1Accuracy->RowCount = 2;
			this->tlMove1Accuracy->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlMove1Accuracy->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlMove1Accuracy->Size = System::Drawing::Size(32, 63);
			this->tlMove1Accuracy->TabIndex = 17;
			// 
			// lblMove1Accuracy
			// 
			this->lblMove1Accuracy->AutoSize = true;
			this->lblMove1Accuracy->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblMove1Accuracy->Location = System::Drawing::Point(3, 31);
			this->lblMove1Accuracy->Name = L"lblMove1Accuracy";
			this->lblMove1Accuracy->Size = System::Drawing::Size(26, 32);
			this->lblMove1Accuracy->TabIndex = 1;
			this->lblMove1Accuracy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblAccuracy
			// 
			this->lblAccuracy->AutoSize = true;
			this->lblAccuracy->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblAccuracy->Location = System::Drawing::Point(3, 0);
			this->lblAccuracy->Name = L"lblAccuracy";
			this->lblAccuracy->Size = System::Drawing::Size(26, 31);
			this->lblAccuracy->TabIndex = 0;
			this->lblAccuracy->Text = L"Acc";
			this->lblAccuracy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlMove1Power
			// 
			this->tlMove1Power->ColumnCount = 1;
			this->tlMove1Power->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlMove1Power->Controls->Add(this->lblMove1Power, 0, 1);
			this->tlMove1Power->Controls->Add(this->lblPower, 0, 0);
			this->tlMove1Power->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlMove1Power->Location = System::Drawing::Point(232, 3);
			this->tlMove1Power->Name = L"tlMove1Power";
			this->tlMove1Power->RowCount = 2;
			this->tlMove1Power->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlMove1Power->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlMove1Power->Size = System::Drawing::Size(31, 63);
			this->tlMove1Power->TabIndex = 16;
			// 
			// lblMove1Power
			// 
			this->lblMove1Power->AutoSize = true;
			this->lblMove1Power->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblMove1Power->Location = System::Drawing::Point(3, 31);
			this->lblMove1Power->Name = L"lblMove1Power";
			this->lblMove1Power->Size = System::Drawing::Size(25, 32);
			this->lblMove1Power->TabIndex = 1;
			this->lblMove1Power->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblPower
			// 
			this->lblPower->AutoSize = true;
			this->lblPower->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblPower->Location = System::Drawing::Point(3, 0);
			this->lblPower->Name = L"lblPower";
			this->lblPower->Size = System::Drawing::Size(25, 31);
			this->lblPower->TabIndex = 0;
			this->lblPower->Text = L"Pwr";
			this->lblPower->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlMove1NameEtc
			// 
			this->tlMove1NameEtc->ColumnCount = 2;
			this->tlMove1NameEtc->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				98)));
			this->tlMove1NameEtc->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tlMove1NameEtc->Controls->Add(this->tlMove1TypeCatlbls, 0, 0);
			this->tlMove1NameEtc->Controls->Add(this->cbMove1, 1, 1);
			this->tlMove1NameEtc->Controls->Add(this->tlMove1TypeCat, 0, 1);
			this->tlMove1NameEtc->Controls->Add(this->lblMoveName, 1, 0);
			this->tlMove1NameEtc->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlMove1NameEtc->Location = System::Drawing::Point(3, 3);
			this->tlMove1NameEtc->Name = L"tlMove1NameEtc";
			this->tlMove1NameEtc->RowCount = 2;
			this->tlMove1NameEtc->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlMove1NameEtc->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlMove1NameEtc->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlMove1NameEtc->Size = System::Drawing::Size(223, 63);
			this->tlMove1NameEtc->TabIndex = 21;
			// 
			// tlMove1TypeCatlbls
			// 
			this->tlMove1TypeCatlbls->ColumnCount = 2;
			this->tlMove1TypeCatlbls->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tlMove1TypeCatlbls->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tlMove1TypeCatlbls->Controls->Add(this->lblMove1Cat, 0, 0);
			this->tlMove1TypeCatlbls->Controls->Add(this->lblMove1Type, 0, 0);
			this->tlMove1TypeCatlbls->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlMove1TypeCatlbls->Location = System::Drawing::Point(3, 3);
			this->tlMove1TypeCatlbls->Name = L"tlMove1TypeCatlbls";
			this->tlMove1TypeCatlbls->RowCount = 1;
			this->tlMove1TypeCatlbls->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlMove1TypeCatlbls->Size = System::Drawing::Size(92, 25);
			this->tlMove1TypeCatlbls->TabIndex = 18;
			// 
			// lblMove1Cat
			// 
			this->lblMove1Cat->AutoSize = true;
			this->lblMove1Cat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblMove1Cat->Location = System::Drawing::Point(49, 0);
			this->lblMove1Cat->Name = L"lblMove1Cat";
			this->lblMove1Cat->Size = System::Drawing::Size(40, 25);
			this->lblMove1Cat->TabIndex = 2;
			this->lblMove1Cat->Text = L"Cat";
			this->lblMove1Cat->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblMove1Type
			// 
			this->lblMove1Type->AutoSize = true;
			this->lblMove1Type->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblMove1Type->Location = System::Drawing::Point(3, 0);
			this->lblMove1Type->Name = L"lblMove1Type";
			this->lblMove1Type->Size = System::Drawing::Size(40, 25);
			this->lblMove1Type->TabIndex = 1;
			this->lblMove1Type->Text = L"Type";
			this->lblMove1Type->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// cbMove1
			// 
			this->cbMove1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->cbMove1->FormattingEnabled = true;
			this->cbMove1->Location = System::Drawing::Point(101, 36);
			this->cbMove1->Name = L"cbMove1";
			this->cbMove1->Size = System::Drawing::Size(119, 21);
			this->cbMove1->TabIndex = 15;
			this->cbMove1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmPKMViewer::cbMove1_SelectedIndexChanged);
			// 
			// tlMove1TypeCat
			// 
			this->tlMove1TypeCat->ColumnCount = 2;
			this->tlMove1TypeCat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tlMove1TypeCat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tlMove1TypeCat->Controls->Add(this->pbMove1Cat, 1, 0);
			this->tlMove1TypeCat->Controls->Add(this->pbMove1Type, 0, 0);
			this->tlMove1TypeCat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlMove1TypeCat->Location = System::Drawing::Point(3, 34);
			this->tlMove1TypeCat->Name = L"tlMove1TypeCat";
			this->tlMove1TypeCat->RowCount = 1;
			this->tlMove1TypeCat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlMove1TypeCat->Size = System::Drawing::Size(92, 26);
			this->tlMove1TypeCat->TabIndex = 17;
			// 
			// pbMove1Cat
			// 
			this->pbMove1Cat->BackColor = System::Drawing::Color::Transparent;
			this->pbMove1Cat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbMove1Cat->Location = System::Drawing::Point(49, 3);
			this->pbMove1Cat->Name = L"pbMove1Cat";
			this->pbMove1Cat->Size = System::Drawing::Size(40, 20);
			this->pbMove1Cat->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbMove1Cat->TabIndex = 17;
			this->pbMove1Cat->TabStop = false;
			// 
			// pbMove1Type
			// 
			this->pbMove1Type->BackColor = System::Drawing::Color::Transparent;
			this->pbMove1Type->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbMove1Type->Location = System::Drawing::Point(3, 3);
			this->pbMove1Type->Name = L"pbMove1Type";
			this->pbMove1Type->Size = System::Drawing::Size(40, 20);
			this->pbMove1Type->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbMove1Type->TabIndex = 16;
			this->pbMove1Type->TabStop = false;
			// 
			// lblMoveName
			// 
			this->lblMoveName->AutoSize = true;
			this->lblMoveName->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblMoveName->Location = System::Drawing::Point(101, 0);
			this->lblMoveName->Name = L"lblMoveName";
			this->lblMoveName->Size = System::Drawing::Size(119, 31);
			this->lblMoveName->TabIndex = 19;
			this->lblMoveName->Text = L"Move Name";
			this->lblMoveName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlMove2NameEtc
			// 
			this->tlMove2NameEtc->ColumnCount = 2;
			this->tlMove2NameEtc->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				98)));
			this->tlMove2NameEtc->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tlMove2NameEtc->Controls->Add(this->cbMove2, 1, 0);
			this->tlMove2NameEtc->Controls->Add(this->tlMove2TypeCat, 0, 0);
			this->tlMove2NameEtc->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlMove2NameEtc->Location = System::Drawing::Point(3, 72);
			this->tlMove2NameEtc->Name = L"tlMove2NameEtc";
			this->tlMove2NameEtc->RowCount = 1;
			this->tlMove2NameEtc->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlMove2NameEtc->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tlMove2NameEtc->Size = System::Drawing::Size(223, 32);
			this->tlMove2NameEtc->TabIndex = 22;
			// 
			// cbMove2
			// 
			this->cbMove2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->cbMove2->FormattingEnabled = true;
			this->cbMove2->Location = System::Drawing::Point(101, 5);
			this->cbMove2->Name = L"cbMove2";
			this->cbMove2->Size = System::Drawing::Size(119, 21);
			this->cbMove2->TabIndex = 15;
			this->cbMove2->SelectedIndexChanged += gcnew System::EventHandler(this, &frmPKMViewer::cbMove2_SelectedIndexChanged);
			// 
			// tlMove2TypeCat
			// 
			this->tlMove2TypeCat->ColumnCount = 2;
			this->tlMove2TypeCat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tlMove2TypeCat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tlMove2TypeCat->Controls->Add(this->pbMove2Cat, 1, 0);
			this->tlMove2TypeCat->Controls->Add(this->pbMove2Type, 0, 0);
			this->tlMove2TypeCat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlMove2TypeCat->Location = System::Drawing::Point(3, 3);
			this->tlMove2TypeCat->Name = L"tlMove2TypeCat";
			this->tlMove2TypeCat->RowCount = 1;
			this->tlMove2TypeCat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlMove2TypeCat->Size = System::Drawing::Size(92, 26);
			this->tlMove2TypeCat->TabIndex = 17;
			// 
			// pbMove2Cat
			// 
			this->pbMove2Cat->BackColor = System::Drawing::Color::Transparent;
			this->pbMove2Cat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbMove2Cat->Location = System::Drawing::Point(49, 3);
			this->pbMove2Cat->Name = L"pbMove2Cat";
			this->pbMove2Cat->Size = System::Drawing::Size(40, 20);
			this->pbMove2Cat->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbMove2Cat->TabIndex = 17;
			this->pbMove2Cat->TabStop = false;
			// 
			// pbMove2Type
			// 
			this->pbMove2Type->BackColor = System::Drawing::Color::Transparent;
			this->pbMove2Type->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbMove2Type->Location = System::Drawing::Point(3, 3);
			this->pbMove2Type->Name = L"pbMove2Type";
			this->pbMove2Type->Size = System::Drawing::Size(40, 20);
			this->pbMove2Type->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbMove2Type->TabIndex = 16;
			this->pbMove2Type->TabStop = false;
			// 
			// lblMove2Power
			// 
			this->lblMove2Power->AutoSize = true;
			this->lblMove2Power->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblMove2Power->Location = System::Drawing::Point(232, 69);
			this->lblMove2Power->Name = L"lblMove2Power";
			this->lblMove2Power->Size = System::Drawing::Size(31, 38);
			this->lblMove2Power->TabIndex = 23;
			this->lblMove2Power->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblMove2Accuracy
			// 
			this->lblMove2Accuracy->AutoSize = true;
			this->lblMove2Accuracy->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblMove2Accuracy->Location = System::Drawing::Point(269, 69);
			this->lblMove2Accuracy->Name = L"lblMove2Accuracy";
			this->lblMove2Accuracy->Size = System::Drawing::Size(32, 38);
			this->lblMove2Accuracy->TabIndex = 24;
			this->lblMove2Accuracy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numMove2PPUps
			// 
			this->numMove2PPUps->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numMove2PPUps->Location = System::Drawing::Point(310, 78);
			this->numMove2PPUps->Margin = System::Windows::Forms::Padding(6);
			this->numMove2PPUps->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {3, 0, 0, 0});
			this->numMove2PPUps->Name = L"numMove2PPUps";
			this->numMove2PPUps->Size = System::Drawing::Size(26, 20);
			this->numMove2PPUps->TabIndex = 25;
			this->numMove2PPUps->ValueChanged += gcnew System::EventHandler(this, &frmPKMViewer::numMove2PPUps_ValueChanged);
			// 
			// numMove2PP
			// 
			this->numMove2PP->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numMove2PP->Location = System::Drawing::Point(348, 78);
			this->numMove2PP->Margin = System::Windows::Forms::Padding(6);
			this->numMove2PP->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numMove2PP->Name = L"numMove2PP";
			this->numMove2PP->Size = System::Drawing::Size(33, 20);
			this->numMove2PP->TabIndex = 26;
			this->numMove2PP->ValueChanged += gcnew System::EventHandler(this, &frmPKMViewer::numMove2PP_ValueChanged);
			// 
			// txtMove2TotalPP
			// 
			this->txtMove2TotalPP->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->txtMove2TotalPP->Location = System::Drawing::Point(393, 78);
			this->txtMove2TotalPP->Margin = System::Windows::Forms::Padding(6);
			this->txtMove2TotalPP->Name = L"txtMove2TotalPP";
			this->txtMove2TotalPP->ReadOnly = true;
			this->txtMove2TotalPP->Size = System::Drawing::Size(33, 20);
			this->txtMove2TotalPP->TabIndex = 27;
			// 
			// tlMove3NameEtc
			// 
			this->tlMove3NameEtc->ColumnCount = 2;
			this->tlMove3NameEtc->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				98)));
			this->tlMove3NameEtc->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tlMove3NameEtc->Controls->Add(this->cbMove3, 1, 0);
			this->tlMove3NameEtc->Controls->Add(this->tlMove3TypeCat, 0, 0);
			this->tlMove3NameEtc->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlMove3NameEtc->Location = System::Drawing::Point(3, 110);
			this->tlMove3NameEtc->Name = L"tlMove3NameEtc";
			this->tlMove3NameEtc->RowCount = 1;
			this->tlMove3NameEtc->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlMove3NameEtc->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tlMove3NameEtc->Size = System::Drawing::Size(223, 32);
			this->tlMove3NameEtc->TabIndex = 28;
			// 
			// cbMove3
			// 
			this->cbMove3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->cbMove3->FormattingEnabled = true;
			this->cbMove3->Location = System::Drawing::Point(101, 5);
			this->cbMove3->Name = L"cbMove3";
			this->cbMove3->Size = System::Drawing::Size(119, 21);
			this->cbMove3->TabIndex = 15;
			this->cbMove3->SelectedIndexChanged += gcnew System::EventHandler(this, &frmPKMViewer::cbMove3_SelectedIndexChanged);
			// 
			// tlMove3TypeCat
			// 
			this->tlMove3TypeCat->ColumnCount = 2;
			this->tlMove3TypeCat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tlMove3TypeCat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tlMove3TypeCat->Controls->Add(this->pbMove3Cat, 1, 0);
			this->tlMove3TypeCat->Controls->Add(this->pbMove3Type, 0, 0);
			this->tlMove3TypeCat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlMove3TypeCat->Location = System::Drawing::Point(3, 3);
			this->tlMove3TypeCat->Name = L"tlMove3TypeCat";
			this->tlMove3TypeCat->RowCount = 1;
			this->tlMove3TypeCat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlMove3TypeCat->Size = System::Drawing::Size(92, 26);
			this->tlMove3TypeCat->TabIndex = 17;
			// 
			// pbMove3Cat
			// 
			this->pbMove3Cat->BackColor = System::Drawing::Color::Transparent;
			this->pbMove3Cat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbMove3Cat->Location = System::Drawing::Point(49, 3);
			this->pbMove3Cat->Name = L"pbMove3Cat";
			this->pbMove3Cat->Size = System::Drawing::Size(40, 20);
			this->pbMove3Cat->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbMove3Cat->TabIndex = 17;
			this->pbMove3Cat->TabStop = false;
			// 
			// pbMove3Type
			// 
			this->pbMove3Type->BackColor = System::Drawing::Color::Transparent;
			this->pbMove3Type->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbMove3Type->Location = System::Drawing::Point(3, 3);
			this->pbMove3Type->Name = L"pbMove3Type";
			this->pbMove3Type->Size = System::Drawing::Size(40, 20);
			this->pbMove3Type->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbMove3Type->TabIndex = 16;
			this->pbMove3Type->TabStop = false;
			// 
			// tlMove4NameEtc
			// 
			this->tlMove4NameEtc->ColumnCount = 2;
			this->tlMove4NameEtc->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				98)));
			this->tlMove4NameEtc->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tlMove4NameEtc->Controls->Add(this->cbMove4, 1, 0);
			this->tlMove4NameEtc->Controls->Add(this->tlMove4TypeCat, 0, 0);
			this->tlMove4NameEtc->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlMove4NameEtc->Location = System::Drawing::Point(3, 148);
			this->tlMove4NameEtc->Name = L"tlMove4NameEtc";
			this->tlMove4NameEtc->RowCount = 1;
			this->tlMove4NameEtc->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlMove4NameEtc->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tlMove4NameEtc->Size = System::Drawing::Size(223, 32);
			this->tlMove4NameEtc->TabIndex = 29;
			// 
			// cbMove4
			// 
			this->cbMove4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->cbMove4->FormattingEnabled = true;
			this->cbMove4->Location = System::Drawing::Point(101, 5);
			this->cbMove4->Name = L"cbMove4";
			this->cbMove4->Size = System::Drawing::Size(119, 21);
			this->cbMove4->TabIndex = 15;
			this->cbMove4->SelectedIndexChanged += gcnew System::EventHandler(this, &frmPKMViewer::cbMove4_SelectedIndexChanged);
			// 
			// tlMove4TypeCat
			// 
			this->tlMove4TypeCat->ColumnCount = 2;
			this->tlMove4TypeCat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tlMove4TypeCat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tlMove4TypeCat->Controls->Add(this->pbMove4Cat, 1, 0);
			this->tlMove4TypeCat->Controls->Add(this->pbMove4Type, 0, 0);
			this->tlMove4TypeCat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlMove4TypeCat->Location = System::Drawing::Point(3, 3);
			this->tlMove4TypeCat->Name = L"tlMove4TypeCat";
			this->tlMove4TypeCat->RowCount = 1;
			this->tlMove4TypeCat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlMove4TypeCat->Size = System::Drawing::Size(92, 26);
			this->tlMove4TypeCat->TabIndex = 17;
			// 
			// pbMove4Cat
			// 
			this->pbMove4Cat->BackColor = System::Drawing::Color::Transparent;
			this->pbMove4Cat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbMove4Cat->Location = System::Drawing::Point(49, 3);
			this->pbMove4Cat->Name = L"pbMove4Cat";
			this->pbMove4Cat->Size = System::Drawing::Size(40, 20);
			this->pbMove4Cat->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbMove4Cat->TabIndex = 17;
			this->pbMove4Cat->TabStop = false;
			// 
			// pbMove4Type
			// 
			this->pbMove4Type->BackColor = System::Drawing::Color::Transparent;
			this->pbMove4Type->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbMove4Type->Location = System::Drawing::Point(3, 3);
			this->pbMove4Type->Name = L"pbMove4Type";
			this->pbMove4Type->Size = System::Drawing::Size(40, 20);
			this->pbMove4Type->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbMove4Type->TabIndex = 16;
			this->pbMove4Type->TabStop = false;
			// 
			// lblMove3Power
			// 
			this->lblMove3Power->AutoSize = true;
			this->lblMove3Power->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblMove3Power->Location = System::Drawing::Point(232, 107);
			this->lblMove3Power->Name = L"lblMove3Power";
			this->lblMove3Power->Size = System::Drawing::Size(31, 38);
			this->lblMove3Power->TabIndex = 30;
			this->lblMove3Power->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblMove3Accuracy
			// 
			this->lblMove3Accuracy->AutoSize = true;
			this->lblMove3Accuracy->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblMove3Accuracy->Location = System::Drawing::Point(269, 107);
			this->lblMove3Accuracy->Name = L"lblMove3Accuracy";
			this->lblMove3Accuracy->Size = System::Drawing::Size(32, 38);
			this->lblMove3Accuracy->TabIndex = 31;
			this->lblMove3Accuracy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblMove4Power
			// 
			this->lblMove4Power->AutoSize = true;
			this->lblMove4Power->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblMove4Power->Location = System::Drawing::Point(232, 145);
			this->lblMove4Power->Name = L"lblMove4Power";
			this->lblMove4Power->Size = System::Drawing::Size(31, 38);
			this->lblMove4Power->TabIndex = 32;
			this->lblMove4Power->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblMove4Accuracy
			// 
			this->lblMove4Accuracy->AutoSize = true;
			this->lblMove4Accuracy->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblMove4Accuracy->Location = System::Drawing::Point(269, 145);
			this->lblMove4Accuracy->Name = L"lblMove4Accuracy";
			this->lblMove4Accuracy->Size = System::Drawing::Size(32, 38);
			this->lblMove4Accuracy->TabIndex = 33;
			this->lblMove4Accuracy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numMove3PPUps
			// 
			this->numMove3PPUps->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numMove3PPUps->Location = System::Drawing::Point(310, 116);
			this->numMove3PPUps->Margin = System::Windows::Forms::Padding(6);
			this->numMove3PPUps->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {3, 0, 0, 0});
			this->numMove3PPUps->Name = L"numMove3PPUps";
			this->numMove3PPUps->Size = System::Drawing::Size(26, 20);
			this->numMove3PPUps->TabIndex = 34;
			this->numMove3PPUps->ValueChanged += gcnew System::EventHandler(this, &frmPKMViewer::numMove3PPUps_ValueChanged);
			// 
			// numMove3PP
			// 
			this->numMove3PP->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numMove3PP->Location = System::Drawing::Point(348, 116);
			this->numMove3PP->Margin = System::Windows::Forms::Padding(6);
			this->numMove3PP->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numMove3PP->Name = L"numMove3PP";
			this->numMove3PP->Size = System::Drawing::Size(33, 20);
			this->numMove3PP->TabIndex = 35;
			this->numMove3PP->ValueChanged += gcnew System::EventHandler(this, &frmPKMViewer::numMove3PP_ValueChanged);
			// 
			// numMove4PP
			// 
			this->numMove4PP->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numMove4PP->Location = System::Drawing::Point(348, 154);
			this->numMove4PP->Margin = System::Windows::Forms::Padding(6);
			this->numMove4PP->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numMove4PP->Name = L"numMove4PP";
			this->numMove4PP->Size = System::Drawing::Size(33, 20);
			this->numMove4PP->TabIndex = 36;
			this->numMove4PP->ValueChanged += gcnew System::EventHandler(this, &frmPKMViewer::numMove4PP_ValueChanged);
			// 
			// numMove4PPUps
			// 
			this->numMove4PPUps->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numMove4PPUps->Location = System::Drawing::Point(310, 154);
			this->numMove4PPUps->Margin = System::Windows::Forms::Padding(6);
			this->numMove4PPUps->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {3, 0, 0, 0});
			this->numMove4PPUps->Name = L"numMove4PPUps";
			this->numMove4PPUps->Size = System::Drawing::Size(26, 20);
			this->numMove4PPUps->TabIndex = 37;
			this->numMove4PPUps->ValueChanged += gcnew System::EventHandler(this, &frmPKMViewer::numMove4PPUps_ValueChanged);
			// 
			// txtMove3TotalPP
			// 
			this->txtMove3TotalPP->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->txtMove3TotalPP->Location = System::Drawing::Point(393, 116);
			this->txtMove3TotalPP->Margin = System::Windows::Forms::Padding(6);
			this->txtMove3TotalPP->Name = L"txtMove3TotalPP";
			this->txtMove3TotalPP->ReadOnly = true;
			this->txtMove3TotalPP->Size = System::Drawing::Size(33, 20);
			this->txtMove3TotalPP->TabIndex = 38;
			// 
			// txtMove4TotalPP
			// 
			this->txtMove4TotalPP->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->txtMove4TotalPP->Location = System::Drawing::Point(393, 154);
			this->txtMove4TotalPP->Margin = System::Windows::Forms::Padding(6);
			this->txtMove4TotalPP->Name = L"txtMove4TotalPP";
			this->txtMove4TotalPP->ReadOnly = true;
			this->txtMove4TotalPP->Size = System::Drawing::Size(33, 20);
			this->txtMove4TotalPP->TabIndex = 39;
			// 
			// tpOrigins
			// 
			this->tpOrigins->Location = System::Drawing::Point(4, 22);
			this->tpOrigins->Name = L"tpOrigins";
			this->tpOrigins->Size = System::Drawing::Size(432, 254);
			this->tpOrigins->TabIndex = 3;
			this->tpOrigins->Text = L"Origins";
			this->tpOrigins->UseVisualStyleBackColor = true;
			// 
			// tpRibbons
			// 
			this->tpRibbons->Location = System::Drawing::Point(4, 22);
			this->tpRibbons->Name = L"tpRibbons";
			this->tpRibbons->Size = System::Drawing::Size(432, 254);
			this->tpRibbons->TabIndex = 4;
			this->tpRibbons->Text = L"Ribbons";
			this->tpRibbons->UseVisualStyleBackColor = true;
			// 
			// tpMisc
			// 
			this->tpMisc->Controls->Add(this->chkPIDHex);
			this->tpMisc->Controls->Add(this->lblPID);
			this->tpMisc->Controls->Add(this->txtPID);
			this->tpMisc->Location = System::Drawing::Point(4, 22);
			this->tpMisc->Name = L"tpMisc";
			this->tpMisc->Size = System::Drawing::Size(432, 254);
			this->tpMisc->TabIndex = 5;
			this->tpMisc->Text = L"Misc";
			this->tpMisc->UseVisualStyleBackColor = true;
			// 
			// chkPIDHex
			// 
			this->chkPIDHex->AutoSize = true;
			this->chkPIDHex->Location = System::Drawing::Point(126, 25);
			this->chkPIDHex->Name = L"chkPIDHex";
			this->chkPIDHex->Size = System::Drawing::Size(45, 17);
			this->chkPIDHex->TabIndex = 2;
			this->chkPIDHex->Text = L"Hex";
			this->chkPIDHex->UseVisualStyleBackColor = true;
			this->chkPIDHex->CheckedChanged += gcnew System::EventHandler(this, &frmPKMViewer::chkPIDHex_CheckedChanged);
			// 
			// lblPID
			// 
			this->lblPID->AutoSize = true;
			this->lblPID->Location = System::Drawing::Point(5, 7);
			this->lblPID->Name = L"lblPID";
			this->lblPID->Size = System::Drawing::Size(115, 13);
			this->lblPID->TabIndex = 1;
			this->lblPID->Text = L"Personality Value (PID)";
			// 
			// txtPID
			// 
			this->txtPID->Location = System::Drawing::Point(5, 23);
			this->txtPID->Name = L"txtPID";
			this->txtPID->Size = System::Drawing::Size(115, 20);
			this->txtPID->TabIndex = 0;
			this->txtPID->TextChanged += gcnew System::EventHandler(this, &frmPKMViewer::txtPID_TextChanged);
			// 
			// ttMove1Flavor
			// 
			this->ttMove1Flavor->IsBalloon = true;
			this->ttMove1Flavor->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			// 
			// ttMove2Flavor
			// 
			this->ttMove2Flavor->IsBalloon = true;
			this->ttMove2Flavor->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			// 
			// ttMove3Flavor
			// 
			this->ttMove3Flavor->IsBalloon = true;
			this->ttMove3Flavor->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			// 
			// ttMove4Flavor
			// 
			this->ttMove4Flavor->IsBalloon = true;
			this->ttMove4Flavor->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			// 
			// savePKM
			// 
			this->savePKM->DefaultExt = L"pkm";
			this->savePKM->Filter = L"PKM Files|*.pkm|*BIN Files|*.bin";
			this->savePKM->Title = L"Export PKM Data";
			// 
			// frmPKMViewer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(616, 286);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbType2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbType1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numEXP))->EndInit();
			this->gbOT->ResumeLayout(false);
			this->gbOT->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSID))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numTID))->EndInit();
			this->tpStats->ResumeLayout(false);
			this->tpStats->PerformLayout();
			this->gbCalcStats->ResumeLayout(false);
			this->tlCalcStats->ResumeLayout(false);
			this->tlCalcStats->PerformLayout();
			this->gbEVs->ResumeLayout(false);
			this->tlEVs->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numHPEV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numAttackEV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numDefenseEV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpAtkEV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpDefEV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpeedEV))->EndInit();
			this->gbIVs->ResumeLayout(false);
			this->tlIVs->ResumeLayout(false);
			this->tlIVs->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numHPIV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numAttackIV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numDefenseIV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpAtkIV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpDefIV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numSpeedIV))->EndInit();
			this->tpMoves->ResumeLayout(false);
			this->tlMoves->ResumeLayout(false);
			this->tlMoves->PerformLayout();
			this->tlMove1TotalPP->ResumeLayout(false);
			this->tlMove1TotalPP->PerformLayout();
			this->tlMove1PP->ResumeLayout(false);
			this->tlMove1PP->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMove1PP))->EndInit();
			this->tlMove1PPUPs->ResumeLayout(false);
			this->tlMove1PPUPs->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMove1PPUps))->EndInit();
			this->tlMove1Accuracy->ResumeLayout(false);
			this->tlMove1Accuracy->PerformLayout();
			this->tlMove1Power->ResumeLayout(false);
			this->tlMove1Power->PerformLayout();
			this->tlMove1NameEtc->ResumeLayout(false);
			this->tlMove1NameEtc->PerformLayout();
			this->tlMove1TypeCatlbls->ResumeLayout(false);
			this->tlMove1TypeCatlbls->PerformLayout();
			this->tlMove1TypeCat->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbMove1Cat))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbMove1Type))->EndInit();
			this->tlMove2NameEtc->ResumeLayout(false);
			this->tlMove2TypeCat->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbMove2Cat))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbMove2Type))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMove2PPUps))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMove2PP))->EndInit();
			this->tlMove3NameEtc->ResumeLayout(false);
			this->tlMove3TypeCat->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbMove3Cat))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbMove3Type))->EndInit();
			this->tlMove4NameEtc->ResumeLayout(false);
			this->tlMove4TypeCat->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbMove4Cat))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbMove4Type))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMove3PPUps))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMove3PP))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMove4PP))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMove4PPUps))->EndInit();
			this->tpMisc->ResumeLayout(false);
			this->tpMisc->PerformLayout();
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
		void refreshnatureeffect()
		{
			lblAttackIV->ForeColor = Color::Black;
			lblDefenseIV->ForeColor = Color::Black;
			lblSpAtkIV->ForeColor = Color::Black;
			lblSpDefIV->ForeColor = Color::Black;
			lblSpeedIV->ForeColor = Color::Black;
			int inc = getnatureincrease(temppkm);
			int dec = getnaturedecrease(temppkm);
			if(inc != dec)
			{
				switch((Stat_IDs::stat_ids)(inc))
				{
				case Stat_IDs::attack:
					lblAttackIV->ForeColor = Color::Red;
					break;
				case Stat_IDs::defense:
					lblDefenseIV->ForeColor = Color::Red;
					break;
				case Stat_IDs::spatk:
					lblSpAtkIV->ForeColor = Color::Red;
					break;
				case Stat_IDs::spdef:
					lblSpDefIV->ForeColor = Color::Red;
					break;
				case Stat_IDs::speed:
					lblSpeedIV->ForeColor = Color::Red;
					break;
				default:
					break;
				}
				switch((Stat_IDs::stat_ids)(dec))
				{
				case Stat_IDs::attack:
					lblAttackIV->ForeColor = Color::Blue;
					break;
				case Stat_IDs::defense:
					lblDefenseIV->ForeColor = Color::Blue;
					break;
				case Stat_IDs::spatk:
					lblSpAtkIV->ForeColor = Color::Blue;
					break;
				case Stat_IDs::spdef:
					lblSpDefIV->ForeColor = Color::Blue;
					break;
				case Stat_IDs::speed:
					lblSpeedIV->ForeColor = Color::Blue;
					break;
				default:
					break;
				}
			}
		}
		void refreshgender()
		{
			std::ostringstream SQL;
			switch(getpkmgender(temppkm))
			{
			case Genders::male:
				SQL << "select image from misc where identifier = \"male\"";
				pbGender->Image = pviewvsqlite->getSQLImage(SQL.str());
				break;
			case Genders::female:
				SQL << "select image from misc where identifier = \"female\"";
				pbGender->Image = pviewvsqlite->getSQLImage(SQL.str());
				break;
			}

		}
		void refreshshiny()
		{
			std::ostringstream SQL;
			if(getpkmshiny(temppkm))
			{
				SQL << "select image from misc where identifier = \"shiny\"";
				pbShiny->Image = pviewvsqlite->getSQLImage(SQL.str());
			}
		}
		void refreshmarkings()
		{
			std::ostringstream SQL;
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
		}
		void refreshitem()
		{
			std::ostringstream SQL;
			getitemsql(SQL,(uint16)temppkm->item);
			pbItem->Image = (pviewvsqlite->getSQLImage(SQL.str()));
		}
		void refreshtotalevs()
		{
			txtTotalEVs->Text = System::Convert::ToString(temppkm->evs.hp + temppkm->evs.attack + temppkm->evs.defense + temppkm->evs.spatk + temppkm->evs.spdef + temppkm->evs.speed);
		}
		void refreshcalcstats()
		{
			txtCalcHP->Text = System::Convert::ToString(getpkmstat(temppkm,Stat_IDs::hp));
			txtCalcAttack->Text = System::Convert::ToString(getpkmstat(temppkm,Stat_IDs::attack));
			txtCalcDefense->Text = System::Convert::ToString(getpkmstat(temppkm,Stat_IDs::defense));
			txtCalcSpAtk->Text = System::Convert::ToString(getpkmstat(temppkm,Stat_IDs::spatk));
			txtCalcSpDef->Text = System::Convert::ToString(getpkmstat(temppkm,Stat_IDs::spdef));
			txtCalcSpeed->Text = System::Convert::ToString(getpkmstat(temppkm,Stat_IDs::speed));
		}
		void refreshexp()
		{
			numEXP->Maximum = (getpkmexpatlevel(temppkm->species,100));
			numEXP->Value = temppkm->exp;
		}
		void refreshlevel()
		{
			numLevel->Value = Convert::ToDecimal(getpkmlevel(temppkm));
		}
		void refreshtypes()
		{
			std::ostringstream SQL;
			int t = lookuppkmtype(temppkm,1);
			gettypesql(SQL,(Types::types)(t));
			pbType1->Image = pviewvsqlite->getSQLImage(SQL.str());
			SQL.str("");
			SQL.clear();
			t = lookuppkmtype(temppkm,2);
			if(t != -1)
			{
				gettypesql(SQL,(Types::types)(t));
				pbType2->Image = pviewvsqlite->getSQLImage(SQL.str());
				SQL.str("");
				SQL.clear();
			}
		}
		void refreshpkrs()
		{
			if(temppkm->pkrs.strain > 0)
			{
				if(temppkm->pkrs.days > 0)
				{
					pbPKRS->Image = pviewvsqlite->getSQLImage("select image from misc where identifier = \"pokerus_infected\"");
				}
				else
				{
					pbPKRS->Image = pviewvsqlite->getSQLImage("select image from misc where identifier = \"pokerus_cured\"");
				}
			}
		}
		void refreshmove1()
		{
			std::ostringstream SQL;
			txtMove1TotalPP->Text = System::Convert::ToString(getmovetotalpp(temppkm,0));
			gettypesql(SQL,(Types::types)(getmovetype(temppkm->moves[0])));
			pbMove1Type->Image = pviewvsqlite->getSQLImage(SQL.str());
			SQL.str("");
			SQL.clear();
			getmovecatsql(SQL,temppkm->moves[0]);
			pbMove1Cat->Image = pviewvsqlite->getSQLImage(SQL.str());
		}
		void refreshmove2()
		{
			if(temppkm->moves[1] != Moves::NOTHING)
			{
				std::ostringstream SQL;
				txtMove2TotalPP->Text = System::Convert::ToString(getmovetotalpp(temppkm,1));
				gettypesql(SQL,(Types::types)(getmovetype(temppkm->moves[1])));
				pbMove2Type->Image = pviewvsqlite->getSQLImage(SQL.str());
				SQL.str("");
				SQL.clear();
				getmovecatsql(SQL,temppkm->moves[1]);
				pbMove2Cat->Image = pviewvsqlite->getSQLImage(SQL.str());
			}
		}
		void refreshmove3()
		{
			if(temppkm->moves[2] != Moves::NOTHING)
			{
				std::ostringstream SQL;
				txtMove3TotalPP->Text = System::Convert::ToString(getmovetotalpp(temppkm,2));
				gettypesql(SQL,(Types::types)(getmovetype(temppkm->moves[2])));
				pbMove3Type->Image = pviewvsqlite->getSQLImage(SQL.str());
				SQL.str("");
				SQL.clear();
				getmovecatsql(SQL,temppkm->moves[2]);
				pbMove3Cat->Image = pviewvsqlite->getSQLImage(SQL.str());
			}
		}
		void refreshmove4()
		{
			if(temppkm->moves[3] != Moves::NOTHING)
			{
				std::ostringstream SQL;
				txtMove4TotalPP->Text = System::Convert::ToString(getmovetotalpp(temppkm,3));
				gettypesql(SQL,(Types::types)(getmovetype(temppkm->moves[3])));
				pbMove4Type->Image = pviewvsqlite->getSQLImage(SQL.str());
				SQL.str("");
				SQL.clear();
				getmovecatsql(SQL,temppkm->moves[3]);
				pbMove4Cat->Image = pviewvsqlite->getSQLImage(SQL.str());
			}
		}
		void refreshmoves()
		{
			refreshmove1();
			refreshmove2();
			refreshmove3();
			refreshmove4();
		}
		void displayPKM()
		{
			cbSpecies->SelectedIndex = cbSpecies->FindString(gcnew System::String(lookuppkmname(temppkm).c_str()));
			numSpecies->Value = Convert::ToDecimal((UInt16)(temppkm->species));
			txtNickname->Text = gcnew System::String(getpkmnickname(temppkm).c_str());
			txtOTName->Text = gcnew System::String(getpkmotname(temppkm).c_str());
			if(temppkm->metlevel_otgender.otgender == Genders::female)
			{
				rbOTFemale->Checked = true;
				txtOTName->ForeColor = Color::Red;
			}
			else
			{
				rbOTMale->Checked = true;
				txtOTName->ForeColor = Color::Blue;
			}
			chkNicknamed->Checked = (bool)(temppkm->ivs.isnicknamed);
			numTID->Value = Convert::ToDecimal(temppkm->tid);
			numSID->Value = Convert::ToDecimal(temppkm->sid);
			cbMove1->SelectedIndex = cbMove1->FindString(gcnew System::String(lookupmovename(temppkm,0).c_str()));
			if(temppkm->moves[1] != Moves::NOTHING){ cbMove2->SelectedIndex = cbMove2->FindString(gcnew System::String(lookupmovename(temppkm,1).c_str()));}
			if(temppkm->moves[2] != Moves::NOTHING){ cbMove3->SelectedIndex = cbMove3->FindString(gcnew System::String(lookupmovename(temppkm,2).c_str()));}
			if(temppkm->moves[3] != Moves::NOTHING){ cbMove4->SelectedIndex = cbMove4->FindString(gcnew System::String(lookupmovename(temppkm,3).c_str()));}
			cbNature->SelectedIndex = cbNature->FindString(gcnew System::String(getnaturename(temppkm).c_str()));
			cbAbility->SelectedIndex = cbAbility->FindString(gcnew System::String(lookupabilityname(temppkm).c_str()));
			numHPIV->Value = Convert::ToDecimal(temppkm->ivs.hp);
			numAttackIV->Value = Convert::ToDecimal(temppkm->ivs.attack);
			numDefenseIV->Value = Convert::ToDecimal(temppkm->ivs.defense);
			numSpAtkIV->Value = Convert::ToDecimal(temppkm->ivs.spatk);
			numSpDefIV->Value = Convert::ToDecimal(temppkm->ivs.spdef);
			numSpeedIV->Value = Convert::ToDecimal(temppkm->ivs.speed);
			numHPEV->Value = Convert::ToDecimal(temppkm->evs.hp);
			numAttackEV->Value = Convert::ToDecimal(temppkm->evs.attack);
			numDefenseEV->Value = Convert::ToDecimal(temppkm->evs.defense);
			numSpAtkEV->Value = Convert::ToDecimal(temppkm->evs.spatk);
			numSpDefEV->Value = Convert::ToDecimal(temppkm->evs.spdef);
			numSpeedEV->Value = Convert::ToDecimal(temppkm->evs.speed);
			numMove1PPUps->Value = Convert::ToDecimal(temppkm->ppup[0]);
			numMove2PPUps->Value = Convert::ToDecimal(temppkm->ppup[1]);
			numMove3PPUps->Value = Convert::ToDecimal(temppkm->ppup[2]);
			numMove4PPUps->Value = Convert::ToDecimal(temppkm->ppup[3]);
			numMove1PP->Value = Convert::ToDecimal(temppkm->pp[0]);
			numMove2PP->Value = Convert::ToDecimal(temppkm->pp[1]);
			numMove3PP->Value = Convert::ToDecimal(temppkm->pp[2]);
			numMove4PP->Value = Convert::ToDecimal(temppkm->pp[3]);
			txtPID->Text = System::Convert::ToString(temppkm->pid);
			cbItem->SelectedIndex = cbItem->FindString(gcnew System::String(lookupitemname(temppkm).c_str()));

			lvBall->Columns->Add("");
			std::ostringstream SQL;
			//lvBall->Columns[0]->Width = 40;
			for(int ballnum = 1; ballnum < (int)Balls::dreamball; ballnum++)
			{
				if((Balls::balls)ballnum != Balls::pokeball_)
				{
					getballsql(SQL,(Balls::balls)(ballnum));
					imgBalls->Images->Add(pviewvsqlite->getSQLImage(SQL.str()));
					lvBall->Items->Add("",ballnum-1);
					SQL.str("");
					SQL.clear();
				}
			}
			//MessageBox::Show(System::Convert::ToString(lvBall->Columns[0]->Width));
			//lvBall->Items[(int)(temppkm->ball)]->Selected = true;

			refreshsprite();
			refreshgender();
			refreshshiny();
			refreshmarkings();
			refreshitem();
			refreshtotalevs();
			refreshnatureeffect();
			refreshcalcstats();
			refreshtypes();
			refreshpkrs();
			refreshmoves();
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
				 blankitem["game_index"] = DBNull::Value;
				 blankitem["name"] = "";
				 itemds->Tables[0]->Rows->InsertAt(blankitem,0);
				 cbItem->DataSource = itemds->Tables[0];
				 cbItem->DisplayMember = "name";
				 cbItem->ValueMember = "game_index";
				 DataSet^ speciesds = pviewvsqlite->getSQLDS("SELECT pokemon_species_id, name FROM pokemon_species_names WHERE (local_language_id = 9) order by name asc");
				 cbSpecies->DataSource = speciesds->Tables[0];
				 cbSpecies->DisplayMember = "name";
				 cbSpecies->ValueMember = "pokemon_species_id";
				 DataSet^ abilitiesds = pviewvsqlite->getSQLDS("SELECT ability_names.ability_id, ability_names.name, ability_flavor_text.flavor_text FROM ability_names INNER JOIN ability_flavor_text ON ability_names.ability_id = ability_flavor_text.ability_id WHERE (ability_names.local_language_id = 9) AND (ability_names.ability_id < 10000) AND (ability_flavor_text.language_id = 9) AND (ability_flavor_text.version_group_id = 14) ORDER BY ability_names.name");
				 cbAbility->DataSource = abilitiesds->Tables[0];
				 cbAbility->DisplayMember = "name";
				 cbAbility->ValueMember = "ability_id";
				 lblAbilityFlavor->DataBindings->Add("Text",abilitiesds->Tables[0],"flavor_text",true,System::Windows::Forms::DataSourceUpdateMode::OnPropertyChanged,"-");
				 System::String ^ movesql = "SELECT move_names.move_id, move_names.name, moves.power, moves.accuracy FROM moves INNER JOIN move_names ON moves.id = move_names.move_id WHERE (move_names.local_language_id = 9) AND (move_names.move_id < 10000) order by name asc";
				 DataSet^ movesds1 = pviewvsqlite->getSQLDS(movesql);
				 DataSet^ movesds2 = pviewvsqlite->getSQLDS(movesql);
				 DataSet^ movesds3 = pviewvsqlite->getSQLDS(movesql);
				 DataSet^ movesds4 = pviewvsqlite->getSQLDS(movesql);
				 DataRow^ blankmove1 = movesds1->Tables[0]->NewRow();
				 blankmove1["move_id"] = DBNull::Value;
				 blankmove1["name"] = "";
				 movesds1->Tables[0]->Rows->InsertAt(blankmove1,0);
				 DataRow^ blankmove2 = movesds2->Tables[0]->NewRow();
				 blankmove2["move_id"] = DBNull::Value;
				 blankmove2["name"] = "";
				 movesds2->Tables[0]->Rows->InsertAt(blankmove2,0);
				 DataRow^ blankmove3 = movesds3->Tables[0]->NewRow();
				 blankmove3["move_id"] = DBNull::Value;
				 blankmove3["name"] = "";
				 movesds3->Tables[0]->Rows->InsertAt(blankmove3,0);
				 DataRow^ blankmove4 = movesds4->Tables[0]->NewRow();
				 blankmove4["move_id"] = DBNull::Value;
				 blankmove4["name"] = "";
				 movesds4->Tables[0]->Rows->InsertAt(blankmove4,0);
				 cbMove1->DataSource = movesds1->Tables[0];
				 cbMove1->DisplayMember = "name";
				 cbMove1->ValueMember = "move_id";
				 cbMove2->DataSource = movesds2->Tables[0];
				 cbMove2->DisplayMember = "name";
				 cbMove2->ValueMember = "move_id";
				 cbMove3->DataSource = movesds3->Tables[0];
				 cbMove3->DisplayMember = "name";
				 cbMove3->ValueMember = "move_id";
				 cbMove4->DataSource = movesds4->Tables[0];
				 cbMove4->DisplayMember = "name";
				 cbMove4->ValueMember = "move_id";
				 lblMove1Power->DataBindings->Add("Text",movesds1->Tables[0],"power",true,System::Windows::Forms::DataSourceUpdateMode::OnPropertyChanged,"-","0");
				 lblMove2Power->DataBindings->Add("Text",movesds2->Tables[0],"power",true,System::Windows::Forms::DataSourceUpdateMode::OnPropertyChanged,"-","0");
				 lblMove3Power->DataBindings->Add("Text",movesds3->Tables[0],"power",true,System::Windows::Forms::DataSourceUpdateMode::OnPropertyChanged,"-","0");
				 lblMove4Power->DataBindings->Add("Text",movesds4->Tables[0],"power",true,System::Windows::Forms::DataSourceUpdateMode::OnPropertyChanged,"-","0");
				 lblMove1Accuracy->DataBindings->Add("Text",movesds1->Tables[0],"accuracy",true,System::Windows::Forms::DataSourceUpdateMode::OnPropertyChanged,"-","0");
				 lblMove2Accuracy->DataBindings->Add("Text",movesds2->Tables[0],"accuracy",true,System::Windows::Forms::DataSourceUpdateMode::OnPropertyChanged,"-","0");
				 lblMove3Accuracy->DataBindings->Add("Text",movesds3->Tables[0],"accuracy",true,System::Windows::Forms::DataSourceUpdateMode::OnPropertyChanged,"-","0");
				 lblMove4Accuracy->DataBindings->Add("Text",movesds4->Tables[0],"accuracy",true,System::Windows::Forms::DataSourceUpdateMode::OnPropertyChanged,"-","0");
				 DataTable^ naturesdt = gcnew DataTable();
				 naturesdt->Columns->Add("id");
				 naturesdt->Columns->Add("name");
				 for(int natureindex = 0; natureindex < 25; natureindex++)
				 {
					 System::String ^ naturename = gcnew System::String(getnaturename(natureindex).c_str());
					 naturesdt->Rows->Add(natureindex,naturename);
				 }
				 //cbNature->Sorted = true;
				 cbNature->DataSource = naturesdt;
				 cbNature->DisplayMember = "name";
				 cbNature->ValueMember = "id";
				 displayPKM();
			 }
	private: System::Void btnSave_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 calcchecksum(temppkm);
				 *pkm = *temppkm;
			 }
	private: System::Void btnExport_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 savePKM->FileName = "";
				 if((savePKM->ShowDialog() != System::Windows::Forms::DialogResult::Cancel) & (savePKM->FileName != ""))
				 {
					 calcchecksum(temppkm);
					 if(savePKM->FileName->Trim()->ToLower()->EndsWith(".bin"))
					 {
						 encryptpkm(temppkm);
					 }
					 write(marshal_as<std::string>(savePKM->FileName->Trim()).c_str(),temppkm);
					 if(savePKM->FileName->Trim()->ToLower()->EndsWith(".bin"))
					 {
						 decryptpkm(temppkm);
					 }
				 }
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
					 // TODO: Figure out how to make data bindings work with images
					 //DataSet^ itemimgds = pviewvsqlite->getSQLIMGDS("SELECT identifier, image FROM items");
					 //pbItem->DataBindings->Add("Image",itemimgds->Tables[0],"image");
					 refreshitem();
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
	private: System::Void cbSpecies_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 temppkm->species = (Species::pkmspecies)(Convert::ToUInt16(cbSpecies->SelectedValue));
					 redisplayok = false;
					 refreshsprite();
					 refreshgender();
					 refreshcalcstats();
					 refreshlevel();
					 refreshtypes();
					 numSpecies->Value = Convert::ToDecimal((UInt16)(temppkm->species));
					 redisplayok = true;
				 }
			 }
	private: System::Void numLevel_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {
					 setlevel(temppkm,Convert::ToByte(numLevel->Value));
					 redisplayok = false;
					 refreshexp();
					 redisplayok = true;
				 }
			 }
	private: System::Void numEXP_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 temppkm->exp = (uint32)(Convert::ToInt32(numEXP->Value));
					 redisplayok = false;
					 refreshlevel();
					 redisplayok = true;
				 }
			 }
	private: System::Void numTID_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 temppkm->tid = Convert::ToUInt16(numTID->Value);
				 }
			 }
	private: System::Void txtNickname_TextChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(redisplayok)
				 {

				 }
			 }
	private: System::Void chkNicknamed_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 temppkm->ivs.isnicknamed = (uint32)(chkNicknamed->Checked);
				 }
			 }
	private: System::Void txtOTName_TextChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {

				 }
			 }
	private: System::Void rbOTMale_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 if(rbOTMale->Checked)
					 {
						 temppkm->metlevel_otgender.otgender = Genders::male;
						 txtOTName->ForeColor = Color::Blue;
					 }
				 }
			 }
	private: System::Void rbOTFemale_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 if(rbOTFemale->Checked)
					 {
						 temppkm->metlevel_otgender.otgender = Genders::female;
						 txtOTName->ForeColor = Color::Red;
					 }
				 }
			 }
	private: System::Void numSID_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 temppkm->sid = Convert::ToUInt16(numSID->Value);
				 }
			 }
	private: System::Void cbAbility_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 temppkm->ability = (Abilities::abilities)(Convert::ToUInt16(cbAbility->SelectedValue));
				 }
			 }
	private: System::Void txtPID_TextChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 //temppkm->pid = 
				 }
			 }
	private: System::Void chkPIDHex_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 //txtPID->
				 }
			 }
	private: System::Void numHPIV_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 temppkm->ivs.hp = Convert::ToByte(numHPEV->Value);
				 }
			 }
	private: System::Void numAttackIV_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 temppkm->ivs.attack = Convert::ToByte(numAttackEV->Value);
				 }
			 }
	private: System::Void numDefenseIV_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 temppkm->ivs.defense = Convert::ToByte(numDefenseEV->Value);
				 }
			 }
	private: System::Void numSpAtkIV_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 temppkm->ivs.spatk = Convert::ToByte(numSpAtkEV->Value);
				 }
			 }
	private: System::Void numSpDefIV_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 temppkm->ivs.spdef = Convert::ToByte(numSpDefIV->Value);
				 }
			 }
	private: System::Void numSpeedIV_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 temppkm->ivs.speed = Convert::ToByte(numSpeedIV->Value);
				 }
			 }
	private: System::Void numHPEV_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 temppkm->evs.hp = Convert::ToByte(numHPEV->Value);
				 }
			 }
	private: System::Void numAttackEV_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 temppkm->evs.attack = Convert::ToByte(numAttackEV->Value);
				 }
			 }
	private: System::Void numDefenseEV_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 temppkm->evs.defense = Convert::ToByte(numDefenseEV->Value);
				 }
			 }
	private: System::Void numSpAtkEV_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 temppkm->evs.spatk = Convert::ToByte(numSpAtkEV->Value);
				 }
			 }
	private: System::Void numSpDefEV_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 temppkm->evs.spdef = Convert::ToByte(numSpDefEV->Value);
				 }
			 }
	private: System::Void numSpeedEV_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 temppkm->evs.speed = Convert::ToByte(numSpeedEV->Value);
				 }
			 }
	private: System::Void cbNature_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 temppkm->nature = (Natures::natures)(Convert::ToUInt16(cbNature->SelectedValue));
					 refreshnatureeffect();
				 }
			 }
	private: System::Void cbMove1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 temppkm->moves[0] = (Moves::moves)(Convert::ToUInt16(cbMove1->SelectedValue));
					 refreshmove1();
				 }
			 }
	private: System::Void cbMove2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 temppkm->moves[1] = (Moves::moves)(Convert::ToUInt16(cbMove2->SelectedValue));
					 refreshmove2();
				 }
			 }
	private: System::Void cbMove3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 temppkm->moves[2] = (Moves::moves)(Convert::ToUInt16(cbMove3->SelectedValue));
					 refreshmove3();
				 }
			 }
	private: System::Void cbMove4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 temppkm->moves[3] = (Moves::moves)(Convert::ToUInt16(cbMove4->SelectedValue));
					 refreshmove4();
				 }
			 }
	private: System::Void numMove1PPUps_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 temppkm->ppup[0] = Convert::ToByte(numMove1PPUps->Value);
					 txtMove1TotalPP->Text = System::Convert::ToString(getmovetotalpp(temppkm,0));
				 }
			 }
	private: System::Void numMove2PPUps_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 if(temppkm->moves[1] != Moves::NOTHING)
					 {
						 temppkm->ppup[1] = Convert::ToByte(numMove2PPUps->Value);
						 txtMove2TotalPP->Text = System::Convert::ToString(getmovetotalpp(temppkm,1));
					 }
				 }
			 }
	private: System::Void numMove3PPUps_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 if(temppkm->moves[2] != Moves::NOTHING)
					 {
						 temppkm->ppup[2] = Convert::ToByte(numMove3PPUps->Value);
						 txtMove3TotalPP->Text = System::Convert::ToString(getmovetotalpp(temppkm,2));
					 }
				 }
			 }
	private: System::Void numMove4PPUps_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 if(temppkm->moves[3] != Moves::NOTHING)
					 {
						 temppkm->ppup[3] = Convert::ToByte(numMove4PPUps->Value);
						 txtMove4TotalPP->Text = System::Convert::ToString(getmovetotalpp(temppkm,3));
					 }
				 }
			 }
	private: System::Void numMove1PP_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 temppkm->pp[0] = Convert::ToByte(numMove1PP->Value);
				 }
			 }
	private: System::Void numMove2PP_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 if(temppkm->moves[1] != Moves::NOTHING)
					 {
						 temppkm->pp[1] = Convert::ToByte(numMove2PP->Value);
					 }
				 }
			 }
	private: System::Void numMove3PP_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 if(temppkm->moves[2] != Moves::NOTHING)
					 {
						 temppkm->pp[2] = Convert::ToByte(numMove3PP->Value);
					 }
				 }
			 }
	private: System::Void numMove4PP_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(redisplayok)
				 {
					 if(temppkm->moves[3] != Moves::NOTHING)
					 {
						 temppkm->pp[3] = Convert::ToByte(numMove4PP->Value);
					 }
				 }
			 }
	};
}
