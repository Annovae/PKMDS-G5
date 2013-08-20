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
	/// Summary for frmBoxes
	/// </summary>
	public ref class frmBoxes : public System::Windows::Forms::Form
	{
	public:
		frmBoxes(void)
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
		~frmBoxes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  tlPCBox;
	protected: 

	protected: 
	private: System::Windows::Forms::PictureBox^  pbBoxSlot30;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot29;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot28;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot27;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot26;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot25;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot24;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot23;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot22;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot21;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot20;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot19;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot18;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot17;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot16;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot15;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot14;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot13;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot12;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot11;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot10;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot09;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot08;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot07;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot06;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot05;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot04;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot03;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot02;
	private: System::Windows::Forms::PictureBox^  pbBoxSlot01;
	private: System::Windows::Forms::MenuStrip^  msMain;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  loadSAVToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  fileOpen;
	private: System::Windows::Forms::TableLayoutPanel^  tlParty;
	private: System::Windows::Forms::PictureBox^  pbPartySlot06;
	private: System::Windows::Forms::PictureBox^  pbPartySlot05;
	private: System::Windows::Forms::PictureBox^  pbPartySlot04;
	private: System::Windows::Forms::PictureBox^  pbPartySlot03;
	private: System::Windows::Forms::PictureBox^  pbPartySlot02;
	private: System::Windows::Forms::PictureBox^  pbPartySlot01;
	private: System::Windows::Forms::GroupBox^  gbParty;
	private: System::Windows::Forms::GroupBox^  gbBox;
	private: System::Windows::Forms::SplitContainer^  scMain;
	private: System::Windows::Forms::TableLayoutPanel^  tlPCBoxes;

	private: System::Windows::Forms::TableLayoutPanel^  tlBox02;
	private: System::Windows::Forms::PictureBox^  pbBox02;


	private: System::Windows::Forms::Label^  lblBox02;

	private: System::Windows::Forms::TableLayoutPanel^  tlBox01;
	private: System::Windows::Forms::PictureBox^  pbBox01;
	private: System::Windows::Forms::Label^  lblBox01;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel22;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel21;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel20;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel19;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel18;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel17;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel16;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel15;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel14;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel13;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel12;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel11;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel10;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel9;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel8;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel7;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel6;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel5;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel4;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
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
			this->tlPCBox = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBoxSlot30 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot29 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot28 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot27 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot26 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot25 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot24 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot23 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot22 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot21 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot20 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot19 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot18 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot17 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot16 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot15 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot14 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot13 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot12 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot11 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot10 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot09 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot08 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot07 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot06 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot05 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot04 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot03 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot02 = (gcnew System::Windows::Forms::PictureBox());
			this->pbBoxSlot01 = (gcnew System::Windows::Forms::PictureBox());
			this->msMain = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loadSAVToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileOpen = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tlParty = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbPartySlot06 = (gcnew System::Windows::Forms::PictureBox());
			this->pbPartySlot05 = (gcnew System::Windows::Forms::PictureBox());
			this->pbPartySlot04 = (gcnew System::Windows::Forms::PictureBox());
			this->pbPartySlot03 = (gcnew System::Windows::Forms::PictureBox());
			this->pbPartySlot02 = (gcnew System::Windows::Forms::PictureBox());
			this->pbPartySlot01 = (gcnew System::Windows::Forms::PictureBox());
			this->gbParty = (gcnew System::Windows::Forms::GroupBox());
			this->gbBox = (gcnew System::Windows::Forms::GroupBox());
			this->scMain = (gcnew System::Windows::Forms::SplitContainer());
			this->tlPCBoxes = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tlBox01 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBox01 = (gcnew System::Windows::Forms::PictureBox());
			this->lblBox01 = (gcnew System::Windows::Forms::Label());
			this->tlBox02 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBox02 = (gcnew System::Windows::Forms::PictureBox());
			this->lblBox02 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel9 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel10 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel11 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel12 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel13 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel14 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel15 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel16 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel17 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel18 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel19 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel20 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel21 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel22 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->tlPCBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot09))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot08))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot07))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot06))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot05))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot04))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot03))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot02))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot01))->BeginInit();
			this->msMain->SuspendLayout();
			this->tlParty->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbPartySlot06))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbPartySlot05))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbPartySlot04))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbPartySlot03))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbPartySlot02))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbPartySlot01))->BeginInit();
			this->gbParty->SuspendLayout();
			this->gbBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->scMain))->BeginInit();
			this->scMain->Panel1->SuspendLayout();
			this->scMain->Panel2->SuspendLayout();
			this->scMain->SuspendLayout();
			this->tlPCBoxes->SuspendLayout();
			this->tlBox01->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox01))->BeginInit();
			this->tlBox02->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox02))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->tableLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->tableLayoutPanel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->tableLayoutPanel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			this->tableLayoutPanel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			this->tableLayoutPanel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			this->tableLayoutPanel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			this->tableLayoutPanel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			this->tableLayoutPanel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			this->tableLayoutPanel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->BeginInit();
			this->tableLayoutPanel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->BeginInit();
			this->tableLayoutPanel13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->BeginInit();
			this->tableLayoutPanel14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->BeginInit();
			this->tableLayoutPanel15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->BeginInit();
			this->tableLayoutPanel16->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->BeginInit();
			this->tableLayoutPanel17->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->BeginInit();
			this->tableLayoutPanel18->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->BeginInit();
			this->tableLayoutPanel19->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox19))->BeginInit();
			this->tableLayoutPanel20->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox20))->BeginInit();
			this->tableLayoutPanel21->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox21))->BeginInit();
			this->tableLayoutPanel22->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox22))->BeginInit();
			this->SuspendLayout();
			// 
			// tlPCBox
			// 
			this->tlPCBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tlPCBox->ColumnCount = 6;
			this->tlPCBox->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlPCBox->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlPCBox->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlPCBox->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlPCBox->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlPCBox->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlPCBox->Controls->Add(this->pbBoxSlot30, 5, 4);
			this->tlPCBox->Controls->Add(this->pbBoxSlot29, 4, 4);
			this->tlPCBox->Controls->Add(this->pbBoxSlot28, 3, 4);
			this->tlPCBox->Controls->Add(this->pbBoxSlot27, 2, 4);
			this->tlPCBox->Controls->Add(this->pbBoxSlot26, 1, 4);
			this->tlPCBox->Controls->Add(this->pbBoxSlot25, 0, 4);
			this->tlPCBox->Controls->Add(this->pbBoxSlot24, 5, 3);
			this->tlPCBox->Controls->Add(this->pbBoxSlot23, 4, 3);
			this->tlPCBox->Controls->Add(this->pbBoxSlot22, 3, 3);
			this->tlPCBox->Controls->Add(this->pbBoxSlot21, 2, 3);
			this->tlPCBox->Controls->Add(this->pbBoxSlot20, 1, 3);
			this->tlPCBox->Controls->Add(this->pbBoxSlot19, 0, 3);
			this->tlPCBox->Controls->Add(this->pbBoxSlot18, 5, 2);
			this->tlPCBox->Controls->Add(this->pbBoxSlot17, 4, 2);
			this->tlPCBox->Controls->Add(this->pbBoxSlot16, 3, 2);
			this->tlPCBox->Controls->Add(this->pbBoxSlot15, 2, 2);
			this->tlPCBox->Controls->Add(this->pbBoxSlot14, 1, 2);
			this->tlPCBox->Controls->Add(this->pbBoxSlot13, 0, 2);
			this->tlPCBox->Controls->Add(this->pbBoxSlot12, 5, 1);
			this->tlPCBox->Controls->Add(this->pbBoxSlot11, 4, 1);
			this->tlPCBox->Controls->Add(this->pbBoxSlot10, 3, 1);
			this->tlPCBox->Controls->Add(this->pbBoxSlot09, 2, 1);
			this->tlPCBox->Controls->Add(this->pbBoxSlot08, 1, 1);
			this->tlPCBox->Controls->Add(this->pbBoxSlot07, 0, 1);
			this->tlPCBox->Controls->Add(this->pbBoxSlot06, 5, 0);
			this->tlPCBox->Controls->Add(this->pbBoxSlot05, 4, 0);
			this->tlPCBox->Controls->Add(this->pbBoxSlot04, 3, 0);
			this->tlPCBox->Controls->Add(this->pbBoxSlot03, 2, 0);
			this->tlPCBox->Controls->Add(this->pbBoxSlot02, 1, 0);
			this->tlPCBox->Controls->Add(this->pbBoxSlot01, 0, 0);
			this->tlPCBox->Location = System::Drawing::Point(6, 19);
			this->tlPCBox->Name = L"tlPCBox";
			this->tlPCBox->RowCount = 5;
			this->tlPCBox->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tlPCBox->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tlPCBox->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tlPCBox->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tlPCBox->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tlPCBox->Size = System::Drawing::Size(192, 160);
			this->tlPCBox->TabIndex = 2;
			// 
			// pbBoxSlot30
			// 
			this->pbBoxSlot30->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot30->Location = System::Drawing::Point(155, 128);
			this->pbBoxSlot30->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot30->Name = L"pbBoxSlot30";
			this->pbBoxSlot30->Size = System::Drawing::Size(37, 32);
			this->pbBoxSlot30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot30->TabIndex = 29;
			this->pbBoxSlot30->TabStop = false;
			this->pbBoxSlot30->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot30->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot30->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot30->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot30->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot30->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot30->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot30->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot30->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot30->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot29
			// 
			this->pbBoxSlot29->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot29->Location = System::Drawing::Point(124, 128);
			this->pbBoxSlot29->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot29->Name = L"pbBoxSlot29";
			this->pbBoxSlot29->Size = System::Drawing::Size(31, 32);
			this->pbBoxSlot29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot29->TabIndex = 28;
			this->pbBoxSlot29->TabStop = false;
			this->pbBoxSlot29->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot29->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot29->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot29->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot29->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot29->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot29->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot29->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot29->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot29->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot28
			// 
			this->pbBoxSlot28->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot28->Location = System::Drawing::Point(93, 128);
			this->pbBoxSlot28->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot28->Name = L"pbBoxSlot28";
			this->pbBoxSlot28->Size = System::Drawing::Size(31, 32);
			this->pbBoxSlot28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot28->TabIndex = 27;
			this->pbBoxSlot28->TabStop = false;
			this->pbBoxSlot28->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot28->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot28->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot28->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot28->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot28->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot28->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot28->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot28->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot28->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot27
			// 
			this->pbBoxSlot27->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot27->Location = System::Drawing::Point(62, 128);
			this->pbBoxSlot27->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot27->Name = L"pbBoxSlot27";
			this->pbBoxSlot27->Size = System::Drawing::Size(31, 32);
			this->pbBoxSlot27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot27->TabIndex = 26;
			this->pbBoxSlot27->TabStop = false;
			this->pbBoxSlot27->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot27->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot27->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot27->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot27->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot27->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot27->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot27->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot27->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot27->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot26
			// 
			this->pbBoxSlot26->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot26->Location = System::Drawing::Point(31, 128);
			this->pbBoxSlot26->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot26->Name = L"pbBoxSlot26";
			this->pbBoxSlot26->Size = System::Drawing::Size(31, 32);
			this->pbBoxSlot26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot26->TabIndex = 25;
			this->pbBoxSlot26->TabStop = false;
			this->pbBoxSlot26->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot26->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot26->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot26->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot26->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot26->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot26->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot26->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot26->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot26->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot25
			// 
			this->pbBoxSlot25->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot25->Location = System::Drawing::Point(0, 128);
			this->pbBoxSlot25->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot25->Name = L"pbBoxSlot25";
			this->pbBoxSlot25->Size = System::Drawing::Size(31, 32);
			this->pbBoxSlot25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot25->TabIndex = 24;
			this->pbBoxSlot25->TabStop = false;
			this->pbBoxSlot25->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot25->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot25->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot25->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot25->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot25->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot25->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot25->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot25->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot25->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot24
			// 
			this->pbBoxSlot24->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot24->Location = System::Drawing::Point(155, 96);
			this->pbBoxSlot24->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot24->Name = L"pbBoxSlot24";
			this->pbBoxSlot24->Size = System::Drawing::Size(37, 32);
			this->pbBoxSlot24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot24->TabIndex = 23;
			this->pbBoxSlot24->TabStop = false;
			this->pbBoxSlot24->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot24->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot24->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot24->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot24->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot24->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot24->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot24->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot24->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot24->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot23
			// 
			this->pbBoxSlot23->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot23->Location = System::Drawing::Point(124, 96);
			this->pbBoxSlot23->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot23->Name = L"pbBoxSlot23";
			this->pbBoxSlot23->Size = System::Drawing::Size(31, 32);
			this->pbBoxSlot23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot23->TabIndex = 22;
			this->pbBoxSlot23->TabStop = false;
			this->pbBoxSlot23->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot23->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot23->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot23->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot23->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot23->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot23->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot23->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot23->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot23->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot22
			// 
			this->pbBoxSlot22->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot22->Location = System::Drawing::Point(93, 96);
			this->pbBoxSlot22->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot22->Name = L"pbBoxSlot22";
			this->pbBoxSlot22->Size = System::Drawing::Size(31, 32);
			this->pbBoxSlot22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot22->TabIndex = 21;
			this->pbBoxSlot22->TabStop = false;
			this->pbBoxSlot22->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot22->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot22->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot22->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot22->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot22->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot22->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot22->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot22->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot22->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot21
			// 
			this->pbBoxSlot21->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot21->Location = System::Drawing::Point(62, 96);
			this->pbBoxSlot21->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot21->Name = L"pbBoxSlot21";
			this->pbBoxSlot21->Size = System::Drawing::Size(31, 32);
			this->pbBoxSlot21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot21->TabIndex = 20;
			this->pbBoxSlot21->TabStop = false;
			this->pbBoxSlot21->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot21->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot21->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot21->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot21->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot21->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot21->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot21->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot21->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot21->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot20
			// 
			this->pbBoxSlot20->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot20->Location = System::Drawing::Point(31, 96);
			this->pbBoxSlot20->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot20->Name = L"pbBoxSlot20";
			this->pbBoxSlot20->Size = System::Drawing::Size(31, 32);
			this->pbBoxSlot20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot20->TabIndex = 19;
			this->pbBoxSlot20->TabStop = false;
			this->pbBoxSlot20->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot20->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot20->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot20->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot20->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot20->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot20->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot20->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot20->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot20->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot19
			// 
			this->pbBoxSlot19->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot19->Location = System::Drawing::Point(0, 96);
			this->pbBoxSlot19->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot19->Name = L"pbBoxSlot19";
			this->pbBoxSlot19->Size = System::Drawing::Size(31, 32);
			this->pbBoxSlot19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot19->TabIndex = 18;
			this->pbBoxSlot19->TabStop = false;
			this->pbBoxSlot19->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot19->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot19->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot19->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot19->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot19->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot19->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot19->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot19->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot19->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot18
			// 
			this->pbBoxSlot18->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot18->Location = System::Drawing::Point(155, 64);
			this->pbBoxSlot18->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot18->Name = L"pbBoxSlot18";
			this->pbBoxSlot18->Size = System::Drawing::Size(37, 32);
			this->pbBoxSlot18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot18->TabIndex = 17;
			this->pbBoxSlot18->TabStop = false;
			this->pbBoxSlot18->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot18->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot18->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot18->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot18->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot18->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot18->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot18->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot18->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot18->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot17
			// 
			this->pbBoxSlot17->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot17->Location = System::Drawing::Point(124, 64);
			this->pbBoxSlot17->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot17->Name = L"pbBoxSlot17";
			this->pbBoxSlot17->Size = System::Drawing::Size(31, 32);
			this->pbBoxSlot17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot17->TabIndex = 16;
			this->pbBoxSlot17->TabStop = false;
			this->pbBoxSlot17->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot17->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot17->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot17->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot17->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot17->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot17->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot17->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot17->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot17->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot16
			// 
			this->pbBoxSlot16->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot16->Location = System::Drawing::Point(93, 64);
			this->pbBoxSlot16->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot16->Name = L"pbBoxSlot16";
			this->pbBoxSlot16->Size = System::Drawing::Size(31, 32);
			this->pbBoxSlot16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot16->TabIndex = 15;
			this->pbBoxSlot16->TabStop = false;
			this->pbBoxSlot16->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot16->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot16->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot16->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot16->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot16->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot16->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot16->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot16->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot16->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot15
			// 
			this->pbBoxSlot15->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot15->Location = System::Drawing::Point(62, 64);
			this->pbBoxSlot15->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot15->Name = L"pbBoxSlot15";
			this->pbBoxSlot15->Size = System::Drawing::Size(31, 32);
			this->pbBoxSlot15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot15->TabIndex = 14;
			this->pbBoxSlot15->TabStop = false;
			this->pbBoxSlot15->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot15->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot15->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot15->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot15->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot15->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot15->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot15->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot15->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot15->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot14
			// 
			this->pbBoxSlot14->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot14->Location = System::Drawing::Point(31, 64);
			this->pbBoxSlot14->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot14->Name = L"pbBoxSlot14";
			this->pbBoxSlot14->Size = System::Drawing::Size(31, 32);
			this->pbBoxSlot14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot14->TabIndex = 13;
			this->pbBoxSlot14->TabStop = false;
			this->pbBoxSlot14->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot14->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot14->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot14->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot14->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot14->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot14->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot14->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot14->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot14->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot13
			// 
			this->pbBoxSlot13->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot13->Location = System::Drawing::Point(0, 64);
			this->pbBoxSlot13->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot13->Name = L"pbBoxSlot13";
			this->pbBoxSlot13->Size = System::Drawing::Size(31, 32);
			this->pbBoxSlot13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot13->TabIndex = 12;
			this->pbBoxSlot13->TabStop = false;
			this->pbBoxSlot13->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot13->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot13->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot13->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot13->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot13->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot13->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot13->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot13->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot13->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot12
			// 
			this->pbBoxSlot12->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot12->Location = System::Drawing::Point(155, 32);
			this->pbBoxSlot12->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot12->Name = L"pbBoxSlot12";
			this->pbBoxSlot12->Size = System::Drawing::Size(37, 32);
			this->pbBoxSlot12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot12->TabIndex = 11;
			this->pbBoxSlot12->TabStop = false;
			this->pbBoxSlot12->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot12->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot12->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot12->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot12->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot12->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot12->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot12->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot12->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot12->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot11
			// 
			this->pbBoxSlot11->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot11->Location = System::Drawing::Point(124, 32);
			this->pbBoxSlot11->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot11->Name = L"pbBoxSlot11";
			this->pbBoxSlot11->Size = System::Drawing::Size(31, 32);
			this->pbBoxSlot11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot11->TabIndex = 10;
			this->pbBoxSlot11->TabStop = false;
			this->pbBoxSlot11->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot11->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot11->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot11->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot11->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot11->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot11->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot11->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot11->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot11->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot10
			// 
			this->pbBoxSlot10->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot10->Location = System::Drawing::Point(93, 32);
			this->pbBoxSlot10->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot10->Name = L"pbBoxSlot10";
			this->pbBoxSlot10->Size = System::Drawing::Size(31, 32);
			this->pbBoxSlot10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot10->TabIndex = 9;
			this->pbBoxSlot10->TabStop = false;
			this->pbBoxSlot10->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot10->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot10->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot10->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot10->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot10->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot10->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot10->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot10->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot10->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot09
			// 
			this->pbBoxSlot09->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot09->Location = System::Drawing::Point(62, 32);
			this->pbBoxSlot09->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot09->Name = L"pbBoxSlot09";
			this->pbBoxSlot09->Size = System::Drawing::Size(31, 32);
			this->pbBoxSlot09->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot09->TabIndex = 8;
			this->pbBoxSlot09->TabStop = false;
			this->pbBoxSlot09->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot09->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot09->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot09->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot09->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot09->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot09->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot09->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot09->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot09->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot08
			// 
			this->pbBoxSlot08->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot08->Location = System::Drawing::Point(31, 32);
			this->pbBoxSlot08->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot08->Name = L"pbBoxSlot08";
			this->pbBoxSlot08->Size = System::Drawing::Size(31, 32);
			this->pbBoxSlot08->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot08->TabIndex = 7;
			this->pbBoxSlot08->TabStop = false;
			this->pbBoxSlot08->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot08->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot08->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot08->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot08->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot08->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot08->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot08->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot08->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot08->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot07
			// 
			this->pbBoxSlot07->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot07->Location = System::Drawing::Point(0, 32);
			this->pbBoxSlot07->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot07->Name = L"pbBoxSlot07";
			this->pbBoxSlot07->Size = System::Drawing::Size(31, 32);
			this->pbBoxSlot07->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot07->TabIndex = 6;
			this->pbBoxSlot07->TabStop = false;
			this->pbBoxSlot07->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot07->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot07->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot07->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot07->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot07->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot07->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot07->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot07->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot07->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot06
			// 
			this->pbBoxSlot06->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot06->Location = System::Drawing::Point(155, 0);
			this->pbBoxSlot06->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot06->Name = L"pbBoxSlot06";
			this->pbBoxSlot06->Size = System::Drawing::Size(37, 32);
			this->pbBoxSlot06->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot06->TabIndex = 5;
			this->pbBoxSlot06->TabStop = false;
			this->pbBoxSlot06->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot06->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot06->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot06->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot06->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot06->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot06->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot06->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot06->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot06->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot05
			// 
			this->pbBoxSlot05->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot05->Location = System::Drawing::Point(124, 0);
			this->pbBoxSlot05->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot05->Name = L"pbBoxSlot05";
			this->pbBoxSlot05->Size = System::Drawing::Size(31, 32);
			this->pbBoxSlot05->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot05->TabIndex = 4;
			this->pbBoxSlot05->TabStop = false;
			this->pbBoxSlot05->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot05->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot05->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot05->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot05->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot05->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot05->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot05->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot05->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot05->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot04
			// 
			this->pbBoxSlot04->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot04->Location = System::Drawing::Point(93, 0);
			this->pbBoxSlot04->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot04->Name = L"pbBoxSlot04";
			this->pbBoxSlot04->Size = System::Drawing::Size(31, 32);
			this->pbBoxSlot04->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot04->TabIndex = 3;
			this->pbBoxSlot04->TabStop = false;
			this->pbBoxSlot04->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot04->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot04->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot04->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot04->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot04->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot04->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot04->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot04->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot04->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot03
			// 
			this->pbBoxSlot03->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot03->Location = System::Drawing::Point(62, 0);
			this->pbBoxSlot03->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot03->Name = L"pbBoxSlot03";
			this->pbBoxSlot03->Size = System::Drawing::Size(31, 32);
			this->pbBoxSlot03->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot03->TabIndex = 2;
			this->pbBoxSlot03->TabStop = false;
			this->pbBoxSlot03->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot03->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot03->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot03->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot03->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot03->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot03->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot03->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot03->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot03->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot02
			// 
			this->pbBoxSlot02->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot02->Location = System::Drawing::Point(31, 0);
			this->pbBoxSlot02->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot02->Name = L"pbBoxSlot02";
			this->pbBoxSlot02->Size = System::Drawing::Size(31, 32);
			this->pbBoxSlot02->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot02->TabIndex = 1;
			this->pbBoxSlot02->TabStop = false;
			this->pbBoxSlot02->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot02->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot02->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot02->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot02->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot02->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot02->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot02->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot02->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot02->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// pbBoxSlot01
			// 
			this->pbBoxSlot01->BackColor = System::Drawing::Color::Transparent;
			this->pbBoxSlot01->Location = System::Drawing::Point(0, 0);
			this->pbBoxSlot01->Margin = System::Windows::Forms::Padding(0);
			this->pbBoxSlot01->Name = L"pbBoxSlot01";
			this->pbBoxSlot01->Size = System::Drawing::Size(31, 32);
			this->pbBoxSlot01->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbBoxSlot01->TabIndex = 0;
			this->pbBoxSlot01->TabStop = false;
			this->pbBoxSlot01->Click += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_Click);
			this->pbBoxSlot01->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragDrop);
			this->pbBoxSlot01->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragEnter);
			this->pbBoxSlot01->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBoxSlot_DragOver);
			this->pbBoxSlot01->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DragLeave);
			this->pbBoxSlot01->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot01->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot01->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot01->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot01->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// msMain
			// 
			this->msMain->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->fileToolStripMenuItem});
			this->msMain->Location = System::Drawing::Point(0, 0);
			this->msMain->Name = L"msMain";
			this->msMain->Size = System::Drawing::Size(368, 24);
			this->msMain->TabIndex = 0;
			this->msMain->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->loadSAVToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// loadSAVToolStripMenuItem
			// 
			this->loadSAVToolStripMenuItem->Name = L"loadSAVToolStripMenuItem";
			this->loadSAVToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->loadSAVToolStripMenuItem->Text = L"Load SAV";
			this->loadSAVToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmBoxes::loadSAVToolStripMenuItem_Click);
			// 
			// fileOpen
			// 
			this->fileOpen->Filter = L"SAV Files|*.sav";
			// 
			// tlParty
			// 
			this->tlParty->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tlParty->ColumnCount = 6;
			this->tlParty->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlParty->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlParty->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlParty->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlParty->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlParty->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlParty->Controls->Add(this->pbPartySlot06, 5, 0);
			this->tlParty->Controls->Add(this->pbPartySlot05, 4, 0);
			this->tlParty->Controls->Add(this->pbPartySlot04, 3, 0);
			this->tlParty->Controls->Add(this->pbPartySlot03, 2, 0);
			this->tlParty->Controls->Add(this->pbPartySlot02, 1, 0);
			this->tlParty->Controls->Add(this->pbPartySlot01, 0, 0);
			this->tlParty->Location = System::Drawing::Point(6, 19);
			this->tlParty->Name = L"tlParty";
			this->tlParty->RowCount = 1;
			this->tlParty->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlParty->Size = System::Drawing::Size(192, 32);
			this->tlParty->TabIndex = 1;
			// 
			// pbPartySlot06
			// 
			this->pbPartySlot06->BackColor = System::Drawing::Color::Transparent;
			this->pbPartySlot06->Location = System::Drawing::Point(155, 0);
			this->pbPartySlot06->Margin = System::Windows::Forms::Padding(0);
			this->pbPartySlot06->Name = L"pbPartySlot06";
			this->pbPartySlot06->Size = System::Drawing::Size(36, 32);
			this->pbPartySlot06->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbPartySlot06->TabIndex = 5;
			this->pbPartySlot06->TabStop = false;
			this->pbPartySlot06->Click += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_Click);
			this->pbPartySlot06->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbPartySlot_DragDrop);
			this->pbPartySlot06->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbPartySlot_DragEnter);
			this->pbPartySlot06->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbPartySlot_DragOver);
			this->pbPartySlot06->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_DragLeave);
			this->pbPartySlot06->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_DoubleClick);
			this->pbPartySlot06->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_MouseEnter);
			this->pbPartySlot06->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_MouseLeave);
			this->pbPartySlot06->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_MouseHover);
			this->pbPartySlot06->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbPartySlot_MouseMove);
			// 
			// pbPartySlot05
			// 
			this->pbPartySlot05->BackColor = System::Drawing::Color::Transparent;
			this->pbPartySlot05->Location = System::Drawing::Point(124, 0);
			this->pbPartySlot05->Margin = System::Windows::Forms::Padding(0);
			this->pbPartySlot05->Name = L"pbPartySlot05";
			this->pbPartySlot05->Size = System::Drawing::Size(31, 32);
			this->pbPartySlot05->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbPartySlot05->TabIndex = 4;
			this->pbPartySlot05->TabStop = false;
			this->pbPartySlot05->Click += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_Click);
			this->pbPartySlot05->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbPartySlot_DragDrop);
			this->pbPartySlot05->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbPartySlot_DragEnter);
			this->pbPartySlot05->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbPartySlot_DragOver);
			this->pbPartySlot05->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_DragLeave);
			this->pbPartySlot05->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_DoubleClick);
			this->pbPartySlot05->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_MouseEnter);
			this->pbPartySlot05->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_MouseLeave);
			this->pbPartySlot05->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_MouseHover);
			this->pbPartySlot05->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbPartySlot_MouseMove);
			// 
			// pbPartySlot04
			// 
			this->pbPartySlot04->BackColor = System::Drawing::Color::Transparent;
			this->pbPartySlot04->Location = System::Drawing::Point(93, 0);
			this->pbPartySlot04->Margin = System::Windows::Forms::Padding(0);
			this->pbPartySlot04->Name = L"pbPartySlot04";
			this->pbPartySlot04->Size = System::Drawing::Size(31, 32);
			this->pbPartySlot04->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbPartySlot04->TabIndex = 3;
			this->pbPartySlot04->TabStop = false;
			this->pbPartySlot04->Click += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_Click);
			this->pbPartySlot04->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbPartySlot_DragDrop);
			this->pbPartySlot04->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbPartySlot_DragEnter);
			this->pbPartySlot04->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbPartySlot_DragOver);
			this->pbPartySlot04->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_DragLeave);
			this->pbPartySlot04->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_DoubleClick);
			this->pbPartySlot04->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_MouseEnter);
			this->pbPartySlot04->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_MouseLeave);
			this->pbPartySlot04->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_MouseHover);
			this->pbPartySlot04->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbPartySlot_MouseMove);
			// 
			// pbPartySlot03
			// 
			this->pbPartySlot03->BackColor = System::Drawing::Color::Transparent;
			this->pbPartySlot03->Location = System::Drawing::Point(62, 0);
			this->pbPartySlot03->Margin = System::Windows::Forms::Padding(0);
			this->pbPartySlot03->Name = L"pbPartySlot03";
			this->pbPartySlot03->Size = System::Drawing::Size(31, 32);
			this->pbPartySlot03->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbPartySlot03->TabIndex = 2;
			this->pbPartySlot03->TabStop = false;
			this->pbPartySlot03->Click += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_Click);
			this->pbPartySlot03->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbPartySlot_DragDrop);
			this->pbPartySlot03->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbPartySlot_DragEnter);
			this->pbPartySlot03->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbPartySlot_DragOver);
			this->pbPartySlot03->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_DragLeave);
			this->pbPartySlot03->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_DoubleClick);
			this->pbPartySlot03->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_MouseEnter);
			this->pbPartySlot03->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_MouseLeave);
			this->pbPartySlot03->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_MouseHover);
			this->pbPartySlot03->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbPartySlot_MouseMove);
			// 
			// pbPartySlot02
			// 
			this->pbPartySlot02->BackColor = System::Drawing::Color::Transparent;
			this->pbPartySlot02->Location = System::Drawing::Point(31, 0);
			this->pbPartySlot02->Margin = System::Windows::Forms::Padding(0);
			this->pbPartySlot02->Name = L"pbPartySlot02";
			this->pbPartySlot02->Size = System::Drawing::Size(31, 32);
			this->pbPartySlot02->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbPartySlot02->TabIndex = 1;
			this->pbPartySlot02->TabStop = false;
			this->pbPartySlot02->Click += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_Click);
			this->pbPartySlot02->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbPartySlot_DragDrop);
			this->pbPartySlot02->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbPartySlot_DragEnter);
			this->pbPartySlot02->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbPartySlot_DragOver);
			this->pbPartySlot02->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_DragLeave);
			this->pbPartySlot02->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_DoubleClick);
			this->pbPartySlot02->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_MouseEnter);
			this->pbPartySlot02->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_MouseLeave);
			this->pbPartySlot02->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_MouseHover);
			this->pbPartySlot02->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbPartySlot_MouseMove);
			// 
			// pbPartySlot01
			// 
			this->pbPartySlot01->BackColor = System::Drawing::Color::Transparent;
			this->pbPartySlot01->Location = System::Drawing::Point(0, 0);
			this->pbPartySlot01->Margin = System::Windows::Forms::Padding(0);
			this->pbPartySlot01->Name = L"pbPartySlot01";
			this->pbPartySlot01->Size = System::Drawing::Size(31, 32);
			this->pbPartySlot01->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbPartySlot01->TabIndex = 0;
			this->pbPartySlot01->TabStop = false;
			this->pbPartySlot01->Click += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_Click);
			this->pbPartySlot01->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbPartySlot_DragDrop);
			this->pbPartySlot01->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbPartySlot_DragEnter);
			this->pbPartySlot01->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbPartySlot_DragOver);
			this->pbPartySlot01->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_DragLeave);
			this->pbPartySlot01->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_DoubleClick);
			this->pbPartySlot01->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_MouseEnter);
			this->pbPartySlot01->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_MouseLeave);
			this->pbPartySlot01->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_MouseHover);
			this->pbPartySlot01->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbPartySlot_MouseMove);
			// 
			// gbParty
			// 
			this->gbParty->Controls->Add(this->tlParty);
			this->gbParty->Location = System::Drawing::Point(3, 3);
			this->gbParty->Name = L"gbParty";
			this->gbParty->Size = System::Drawing::Size(204, 61);
			this->gbParty->TabIndex = 3;
			this->gbParty->TabStop = false;
			this->gbParty->Text = L"Party";
			// 
			// gbBox
			// 
			this->gbBox->Controls->Add(this->tlPCBox);
			this->gbBox->Location = System::Drawing::Point(3, 70);
			this->gbBox->Name = L"gbBox";
			this->gbBox->Size = System::Drawing::Size(204, 185);
			this->gbBox->TabIndex = 4;
			this->gbBox->TabStop = false;
			this->gbBox->Text = L"PC Storage";
			// 
			// scMain
			// 
			this->scMain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->scMain->Location = System::Drawing::Point(0, 24);
			this->scMain->Name = L"scMain";
			// 
			// scMain.Panel1
			// 
			this->scMain->Panel1->Controls->Add(this->gbParty);
			this->scMain->Panel1->Controls->Add(this->gbBox);
			// 
			// scMain.Panel2
			// 
			this->scMain->Panel2->AutoScroll = true;
			this->scMain->Panel2->Controls->Add(this->tlPCBoxes);
			this->scMain->Size = System::Drawing::Size(368, 263);
			this->scMain->SplitterDistance = 217;
			this->scMain->TabIndex = 5;
			// 
			// tlPCBoxes
			// 
			this->tlPCBoxes->ColumnCount = 1;
			this->tlPCBoxes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tlPCBoxes->Controls->Add(this->tableLayoutPanel22, 0, 23);
			this->tlPCBoxes->Controls->Add(this->tableLayoutPanel21, 0, 22);
			this->tlPCBoxes->Controls->Add(this->tableLayoutPanel20, 0, 21);
			this->tlPCBoxes->Controls->Add(this->tableLayoutPanel19, 0, 20);
			this->tlPCBoxes->Controls->Add(this->tableLayoutPanel18, 0, 19);
			this->tlPCBoxes->Controls->Add(this->tableLayoutPanel17, 0, 18);
			this->tlPCBoxes->Controls->Add(this->tableLayoutPanel16, 0, 17);
			this->tlPCBoxes->Controls->Add(this->tableLayoutPanel15, 0, 16);
			this->tlPCBoxes->Controls->Add(this->tableLayoutPanel14, 0, 15);
			this->tlPCBoxes->Controls->Add(this->tableLayoutPanel13, 0, 14);
			this->tlPCBoxes->Controls->Add(this->tableLayoutPanel12, 0, 13);
			this->tlPCBoxes->Controls->Add(this->tableLayoutPanel11, 0, 12);
			this->tlPCBoxes->Controls->Add(this->tableLayoutPanel10, 0, 11);
			this->tlPCBoxes->Controls->Add(this->tableLayoutPanel9, 0, 10);
			this->tlPCBoxes->Controls->Add(this->tableLayoutPanel8, 0, 9);
			this->tlPCBoxes->Controls->Add(this->tableLayoutPanel7, 0, 8);
			this->tlPCBoxes->Controls->Add(this->tableLayoutPanel6, 0, 7);
			this->tlPCBoxes->Controls->Add(this->tableLayoutPanel5, 0, 6);
			this->tlPCBoxes->Controls->Add(this->tableLayoutPanel4, 0, 5);
			this->tlPCBoxes->Controls->Add(this->tableLayoutPanel3, 0, 4);
			this->tlPCBoxes->Controls->Add(this->tableLayoutPanel2, 0, 3);
			this->tlPCBoxes->Controls->Add(this->tableLayoutPanel1, 0, 2);
			this->tlPCBoxes->Controls->Add(this->tlBox01, 0, 0);
			this->tlPCBoxes->Controls->Add(this->tlBox02, 0, 1);
			this->tlPCBoxes->Location = System::Drawing::Point(0, 3);
			this->tlPCBoxes->Margin = System::Windows::Forms::Padding(0);
			this->tlPCBoxes->Name = L"tlPCBoxes";
			this->tlPCBoxes->RowCount = 24;
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlPCBoxes->Size = System::Drawing::Size(120, 2880);
			this->tlPCBoxes->TabIndex = 2;
			// 
			// tlBox01
			// 
			this->tlBox01->ColumnCount = 1;
			this->tlBox01->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox01->Controls->Add(this->pbBox01, 0, 1);
			this->tlBox01->Controls->Add(this->lblBox01, 0, 0);
			this->tlBox01->Location = System::Drawing::Point(0, 0);
			this->tlBox01->Margin = System::Windows::Forms::Padding(0);
			this->tlBox01->Name = L"tlBox01";
			this->tlBox01->RowCount = 2;
			this->tlBox01->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlBox01->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox01->Size = System::Drawing::Size(120, 120);
			this->tlBox01->TabIndex = 0;
			// 
			// pbBox01
			// 
			this->pbBox01->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbBox01->Location = System::Drawing::Point(0, 20);
			this->pbBox01->Margin = System::Windows::Forms::Padding(0);
			this->pbBox01->Name = L"pbBox01";
			this->pbBox01->Size = System::Drawing::Size(120, 100);
			this->pbBox01->TabIndex = 0;
			this->pbBox01->TabStop = false;
			// 
			// lblBox01
			// 
			this->lblBox01->AutoSize = true;
			this->lblBox01->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblBox01->Location = System::Drawing::Point(0, 0);
			this->lblBox01->Margin = System::Windows::Forms::Padding(0);
			this->lblBox01->Name = L"lblBox01";
			this->lblBox01->Size = System::Drawing::Size(120, 20);
			this->lblBox01->TabIndex = 1;
			this->lblBox01->Text = L"Box 1";
			this->lblBox01->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlBox02
			// 
			this->tlBox02->ColumnCount = 1;
			this->tlBox02->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox02->Controls->Add(this->pbBox02, 0, 1);
			this->tlBox02->Controls->Add(this->lblBox02, 0, 0);
			this->tlBox02->Location = System::Drawing::Point(0, 120);
			this->tlBox02->Margin = System::Windows::Forms::Padding(0);
			this->tlBox02->Name = L"tlBox02";
			this->tlBox02->RowCount = 2;
			this->tlBox02->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlBox02->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox02->Size = System::Drawing::Size(120, 120);
			this->tlBox02->TabIndex = 1;
			// 
			// pbBox02
			// 
			this->pbBox02->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbBox02->Location = System::Drawing::Point(0, 20);
			this->pbBox02->Margin = System::Windows::Forms::Padding(0);
			this->pbBox02->Name = L"pbBox02";
			this->pbBox02->Size = System::Drawing::Size(120, 100);
			this->pbBox02->TabIndex = 0;
			this->pbBox02->TabStop = false;
			// 
			// lblBox02
			// 
			this->lblBox02->AutoSize = true;
			this->lblBox02->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblBox02->Location = System::Drawing::Point(0, 0);
			this->lblBox02->Margin = System::Windows::Forms::Padding(0);
			this->lblBox02->Name = L"lblBox02";
			this->lblBox02->Size = System::Drawing::Size(120, 20);
			this->lblBox02->TabIndex = 1;
			this->lblBox02->Text = L"Box 2";
			this->lblBox02->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel1->Controls->Add(this->pictureBox1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 240);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(120, 120);
			this->tableLayoutPanel1->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 20);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(120, 100);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Margin = System::Windows::Forms::Padding(0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Box 2";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel2->Controls->Add(this->pictureBox2, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 360);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(120, 120);
			this->tableLayoutPanel2->TabIndex = 3;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox2->Location = System::Drawing::Point(0, 20);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(120, 100);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Margin = System::Windows::Forms::Padding(0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Box 2";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel3->Controls->Add(this->pictureBox3, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->label3, 0, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(0, 480);
			this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(120, 120);
			this->tableLayoutPanel3->TabIndex = 3;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox3->Location = System::Drawing::Point(0, 20);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(120, 100);
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Margin = System::Windows::Forms::Padding(0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 20);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Box 2";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 1;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel4->Controls->Add(this->pictureBox4, 0, 1);
			this->tableLayoutPanel4->Controls->Add(this->label4, 0, 0);
			this->tableLayoutPanel4->Location = System::Drawing::Point(0, 600);
			this->tableLayoutPanel4->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 2;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(120, 120);
			this->tableLayoutPanel4->TabIndex = 3;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox4->Location = System::Drawing::Point(0, 20);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(120, 100);
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label4->Location = System::Drawing::Point(0, 0);
			this->label4->Margin = System::Windows::Forms::Padding(0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(120, 20);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Box 2";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 1;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel5->Controls->Add(this->pictureBox5, 0, 1);
			this->tableLayoutPanel5->Controls->Add(this->label5, 0, 0);
			this->tableLayoutPanel5->Location = System::Drawing::Point(0, 720);
			this->tableLayoutPanel5->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 2;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(120, 120);
			this->tableLayoutPanel5->TabIndex = 3;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox5->Location = System::Drawing::Point(0, 20);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(120, 100);
			this->pictureBox5->TabIndex = 0;
			this->pictureBox5->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label5->Location = System::Drawing::Point(0, 0);
			this->label5->Margin = System::Windows::Forms::Padding(0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(120, 20);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Box 2";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->ColumnCount = 1;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel6->Controls->Add(this->pictureBox6, 0, 1);
			this->tableLayoutPanel6->Controls->Add(this->label6, 0, 0);
			this->tableLayoutPanel6->Location = System::Drawing::Point(0, 840);
			this->tableLayoutPanel6->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 2;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(120, 120);
			this->tableLayoutPanel6->TabIndex = 3;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox6->Location = System::Drawing::Point(0, 20);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(120, 100);
			this->pictureBox6->TabIndex = 0;
			this->pictureBox6->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label6->Location = System::Drawing::Point(0, 0);
			this->label6->Margin = System::Windows::Forms::Padding(0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(120, 20);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Box 2";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->ColumnCount = 1;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel7->Controls->Add(this->pictureBox7, 0, 1);
			this->tableLayoutPanel7->Controls->Add(this->label7, 0, 0);
			this->tableLayoutPanel7->Location = System::Drawing::Point(0, 960);
			this->tableLayoutPanel7->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 2;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(120, 120);
			this->tableLayoutPanel7->TabIndex = 3;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox7->Location = System::Drawing::Point(0, 20);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(120, 100);
			this->pictureBox7->TabIndex = 0;
			this->pictureBox7->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label7->Location = System::Drawing::Point(0, 0);
			this->label7->Margin = System::Windows::Forms::Padding(0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(120, 20);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Box 2";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel8
			// 
			this->tableLayoutPanel8->ColumnCount = 1;
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel8->Controls->Add(this->pictureBox8, 0, 1);
			this->tableLayoutPanel8->Controls->Add(this->label8, 0, 0);
			this->tableLayoutPanel8->Location = System::Drawing::Point(0, 1080);
			this->tableLayoutPanel8->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->RowCount = 2;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel8->Size = System::Drawing::Size(120, 120);
			this->tableLayoutPanel8->TabIndex = 3;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox8->Location = System::Drawing::Point(0, 20);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(120, 100);
			this->pictureBox8->TabIndex = 0;
			this->pictureBox8->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label8->Location = System::Drawing::Point(0, 0);
			this->label8->Margin = System::Windows::Forms::Padding(0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(120, 20);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Box 2";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel9
			// 
			this->tableLayoutPanel9->ColumnCount = 1;
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel9->Controls->Add(this->pictureBox9, 0, 1);
			this->tableLayoutPanel9->Controls->Add(this->label9, 0, 0);
			this->tableLayoutPanel9->Location = System::Drawing::Point(0, 1200);
			this->tableLayoutPanel9->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
			this->tableLayoutPanel9->RowCount = 2;
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel9->Size = System::Drawing::Size(120, 120);
			this->tableLayoutPanel9->TabIndex = 3;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox9->Location = System::Drawing::Point(0, 20);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(120, 100);
			this->pictureBox9->TabIndex = 0;
			this->pictureBox9->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label9->Location = System::Drawing::Point(0, 0);
			this->label9->Margin = System::Windows::Forms::Padding(0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(120, 20);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Box 2";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel10
			// 
			this->tableLayoutPanel10->ColumnCount = 1;
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel10->Controls->Add(this->pictureBox10, 0, 1);
			this->tableLayoutPanel10->Controls->Add(this->label10, 0, 0);
			this->tableLayoutPanel10->Location = System::Drawing::Point(0, 1320);
			this->tableLayoutPanel10->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel10->Name = L"tableLayoutPanel10";
			this->tableLayoutPanel10->RowCount = 2;
			this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 
				20)));
			this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel10->Size = System::Drawing::Size(120, 120);
			this->tableLayoutPanel10->TabIndex = 3;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox10->Location = System::Drawing::Point(0, 20);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(120, 100);
			this->pictureBox10->TabIndex = 0;
			this->pictureBox10->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label10->Location = System::Drawing::Point(0, 0);
			this->label10->Margin = System::Windows::Forms::Padding(0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(120, 20);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Box 2";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel11
			// 
			this->tableLayoutPanel11->ColumnCount = 1;
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel11->Controls->Add(this->pictureBox11, 0, 1);
			this->tableLayoutPanel11->Controls->Add(this->label11, 0, 0);
			this->tableLayoutPanel11->Location = System::Drawing::Point(0, 1440);
			this->tableLayoutPanel11->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel11->Name = L"tableLayoutPanel11";
			this->tableLayoutPanel11->RowCount = 2;
			this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 
				20)));
			this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel11->Size = System::Drawing::Size(120, 120);
			this->tableLayoutPanel11->TabIndex = 3;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox11->Location = System::Drawing::Point(0, 20);
			this->pictureBox11->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(120, 100);
			this->pictureBox11->TabIndex = 0;
			this->pictureBox11->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label11->Location = System::Drawing::Point(0, 0);
			this->label11->Margin = System::Windows::Forms::Padding(0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(120, 20);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Box 2";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel12
			// 
			this->tableLayoutPanel12->ColumnCount = 1;
			this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel12->Controls->Add(this->pictureBox12, 0, 1);
			this->tableLayoutPanel12->Controls->Add(this->label12, 0, 0);
			this->tableLayoutPanel12->Location = System::Drawing::Point(0, 1560);
			this->tableLayoutPanel12->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel12->Name = L"tableLayoutPanel12";
			this->tableLayoutPanel12->RowCount = 2;
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 
				20)));
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel12->Size = System::Drawing::Size(120, 120);
			this->tableLayoutPanel12->TabIndex = 3;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox12->Location = System::Drawing::Point(0, 20);
			this->pictureBox12->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(120, 100);
			this->pictureBox12->TabIndex = 0;
			this->pictureBox12->TabStop = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label12->Location = System::Drawing::Point(0, 0);
			this->label12->Margin = System::Windows::Forms::Padding(0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(120, 20);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Box 2";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel13
			// 
			this->tableLayoutPanel13->ColumnCount = 1;
			this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel13->Controls->Add(this->pictureBox13, 0, 1);
			this->tableLayoutPanel13->Controls->Add(this->label13, 0, 0);
			this->tableLayoutPanel13->Location = System::Drawing::Point(0, 1680);
			this->tableLayoutPanel13->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel13->Name = L"tableLayoutPanel13";
			this->tableLayoutPanel13->RowCount = 2;
			this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 
				20)));
			this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel13->Size = System::Drawing::Size(120, 120);
			this->tableLayoutPanel13->TabIndex = 3;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox13->Location = System::Drawing::Point(0, 20);
			this->pictureBox13->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(120, 100);
			this->pictureBox13->TabIndex = 0;
			this->pictureBox13->TabStop = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label13->Location = System::Drawing::Point(0, 0);
			this->label13->Margin = System::Windows::Forms::Padding(0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(120, 20);
			this->label13->TabIndex = 1;
			this->label13->Text = L"Box 2";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel14
			// 
			this->tableLayoutPanel14->ColumnCount = 1;
			this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel14->Controls->Add(this->pictureBox14, 0, 1);
			this->tableLayoutPanel14->Controls->Add(this->label14, 0, 0);
			this->tableLayoutPanel14->Location = System::Drawing::Point(0, 1800);
			this->tableLayoutPanel14->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel14->Name = L"tableLayoutPanel14";
			this->tableLayoutPanel14->RowCount = 2;
			this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 
				20)));
			this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel14->Size = System::Drawing::Size(120, 120);
			this->tableLayoutPanel14->TabIndex = 3;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox14->Location = System::Drawing::Point(0, 20);
			this->pictureBox14->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(120, 100);
			this->pictureBox14->TabIndex = 0;
			this->pictureBox14->TabStop = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label14->Location = System::Drawing::Point(0, 0);
			this->label14->Margin = System::Windows::Forms::Padding(0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(120, 20);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Box 2";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel15
			// 
			this->tableLayoutPanel15->ColumnCount = 1;
			this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel15->Controls->Add(this->pictureBox15, 0, 1);
			this->tableLayoutPanel15->Controls->Add(this->label15, 0, 0);
			this->tableLayoutPanel15->Location = System::Drawing::Point(0, 1920);
			this->tableLayoutPanel15->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel15->Name = L"tableLayoutPanel15";
			this->tableLayoutPanel15->RowCount = 2;
			this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 
				20)));
			this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 
				20)));
			this->tableLayoutPanel15->Size = System::Drawing::Size(120, 120);
			this->tableLayoutPanel15->TabIndex = 3;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox15->Location = System::Drawing::Point(0, 20);
			this->pictureBox15->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(120, 100);
			this->pictureBox15->TabIndex = 0;
			this->pictureBox15->TabStop = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label15->Location = System::Drawing::Point(0, 0);
			this->label15->Margin = System::Windows::Forms::Padding(0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(120, 20);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Box 2";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel16
			// 
			this->tableLayoutPanel16->ColumnCount = 1;
			this->tableLayoutPanel16->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel16->Controls->Add(this->pictureBox16, 0, 1);
			this->tableLayoutPanel16->Controls->Add(this->label16, 0, 0);
			this->tableLayoutPanel16->Location = System::Drawing::Point(0, 2040);
			this->tableLayoutPanel16->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel16->Name = L"tableLayoutPanel16";
			this->tableLayoutPanel16->RowCount = 2;
			this->tableLayoutPanel16->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 
				20)));
			this->tableLayoutPanel16->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel16->Size = System::Drawing::Size(120, 120);
			this->tableLayoutPanel16->TabIndex = 3;
			// 
			// pictureBox16
			// 
			this->pictureBox16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox16->Location = System::Drawing::Point(0, 20);
			this->pictureBox16->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(120, 100);
			this->pictureBox16->TabIndex = 0;
			this->pictureBox16->TabStop = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label16->Location = System::Drawing::Point(0, 0);
			this->label16->Margin = System::Windows::Forms::Padding(0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(120, 20);
			this->label16->TabIndex = 1;
			this->label16->Text = L"Box 2";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel17
			// 
			this->tableLayoutPanel17->ColumnCount = 1;
			this->tableLayoutPanel17->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel17->Controls->Add(this->pictureBox17, 0, 1);
			this->tableLayoutPanel17->Controls->Add(this->label17, 0, 0);
			this->tableLayoutPanel17->Location = System::Drawing::Point(0, 2160);
			this->tableLayoutPanel17->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel17->Name = L"tableLayoutPanel17";
			this->tableLayoutPanel17->RowCount = 2;
			this->tableLayoutPanel17->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 
				20)));
			this->tableLayoutPanel17->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel17->Size = System::Drawing::Size(120, 120);
			this->tableLayoutPanel17->TabIndex = 3;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox17->Location = System::Drawing::Point(0, 20);
			this->pictureBox17->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(120, 100);
			this->pictureBox17->TabIndex = 0;
			this->pictureBox17->TabStop = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label17->Location = System::Drawing::Point(0, 0);
			this->label17->Margin = System::Windows::Forms::Padding(0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(120, 20);
			this->label17->TabIndex = 1;
			this->label17->Text = L"Box 2";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel18
			// 
			this->tableLayoutPanel18->ColumnCount = 1;
			this->tableLayoutPanel18->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel18->Controls->Add(this->pictureBox18, 0, 1);
			this->tableLayoutPanel18->Controls->Add(this->label18, 0, 0);
			this->tableLayoutPanel18->Location = System::Drawing::Point(0, 2280);
			this->tableLayoutPanel18->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel18->Name = L"tableLayoutPanel18";
			this->tableLayoutPanel18->RowCount = 2;
			this->tableLayoutPanel18->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 
				20)));
			this->tableLayoutPanel18->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel18->Size = System::Drawing::Size(120, 120);
			this->tableLayoutPanel18->TabIndex = 3;
			// 
			// pictureBox18
			// 
			this->pictureBox18->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox18->Location = System::Drawing::Point(0, 20);
			this->pictureBox18->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(120, 100);
			this->pictureBox18->TabIndex = 0;
			this->pictureBox18->TabStop = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label18->Location = System::Drawing::Point(0, 0);
			this->label18->Margin = System::Windows::Forms::Padding(0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(120, 20);
			this->label18->TabIndex = 1;
			this->label18->Text = L"Box 2";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel19
			// 
			this->tableLayoutPanel19->ColumnCount = 1;
			this->tableLayoutPanel19->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel19->Controls->Add(this->pictureBox19, 0, 1);
			this->tableLayoutPanel19->Controls->Add(this->label19, 0, 0);
			this->tableLayoutPanel19->Location = System::Drawing::Point(0, 2400);
			this->tableLayoutPanel19->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel19->Name = L"tableLayoutPanel19";
			this->tableLayoutPanel19->RowCount = 2;
			this->tableLayoutPanel19->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 
				20)));
			this->tableLayoutPanel19->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel19->Size = System::Drawing::Size(120, 120);
			this->tableLayoutPanel19->TabIndex = 3;
			// 
			// pictureBox19
			// 
			this->pictureBox19->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox19->Location = System::Drawing::Point(0, 20);
			this->pictureBox19->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(120, 100);
			this->pictureBox19->TabIndex = 0;
			this->pictureBox19->TabStop = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label19->Location = System::Drawing::Point(0, 0);
			this->label19->Margin = System::Windows::Forms::Padding(0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(120, 20);
			this->label19->TabIndex = 1;
			this->label19->Text = L"Box 2";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel20
			// 
			this->tableLayoutPanel20->ColumnCount = 1;
			this->tableLayoutPanel20->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel20->Controls->Add(this->pictureBox20, 0, 1);
			this->tableLayoutPanel20->Controls->Add(this->label20, 0, 0);
			this->tableLayoutPanel20->Location = System::Drawing::Point(0, 2520);
			this->tableLayoutPanel20->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel20->Name = L"tableLayoutPanel20";
			this->tableLayoutPanel20->RowCount = 2;
			this->tableLayoutPanel20->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 
				20)));
			this->tableLayoutPanel20->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel20->Size = System::Drawing::Size(120, 120);
			this->tableLayoutPanel20->TabIndex = 3;
			// 
			// pictureBox20
			// 
			this->pictureBox20->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox20->Location = System::Drawing::Point(0, 20);
			this->pictureBox20->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(120, 100);
			this->pictureBox20->TabIndex = 0;
			this->pictureBox20->TabStop = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label20->Location = System::Drawing::Point(0, 0);
			this->label20->Margin = System::Windows::Forms::Padding(0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(120, 20);
			this->label20->TabIndex = 1;
			this->label20->Text = L"Box 2";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel21
			// 
			this->tableLayoutPanel21->ColumnCount = 1;
			this->tableLayoutPanel21->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel21->Controls->Add(this->pictureBox21, 0, 1);
			this->tableLayoutPanel21->Controls->Add(this->label21, 0, 0);
			this->tableLayoutPanel21->Location = System::Drawing::Point(0, 2640);
			this->tableLayoutPanel21->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel21->Name = L"tableLayoutPanel21";
			this->tableLayoutPanel21->RowCount = 2;
			this->tableLayoutPanel21->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 
				20)));
			this->tableLayoutPanel21->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel21->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 
				20)));
			this->tableLayoutPanel21->Size = System::Drawing::Size(120, 120);
			this->tableLayoutPanel21->TabIndex = 3;
			// 
			// pictureBox21
			// 
			this->pictureBox21->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox21->Location = System::Drawing::Point(0, 20);
			this->pictureBox21->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(120, 100);
			this->pictureBox21->TabIndex = 0;
			this->pictureBox21->TabStop = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label21->Location = System::Drawing::Point(0, 0);
			this->label21->Margin = System::Windows::Forms::Padding(0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(120, 20);
			this->label21->TabIndex = 1;
			this->label21->Text = L"Box 2";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel22
			// 
			this->tableLayoutPanel22->ColumnCount = 1;
			this->tableLayoutPanel22->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel22->Controls->Add(this->pictureBox22, 0, 1);
			this->tableLayoutPanel22->Controls->Add(this->label22, 0, 0);
			this->tableLayoutPanel22->Location = System::Drawing::Point(0, 2760);
			this->tableLayoutPanel22->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel22->Name = L"tableLayoutPanel22";
			this->tableLayoutPanel22->RowCount = 2;
			this->tableLayoutPanel22->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 
				20)));
			this->tableLayoutPanel22->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel22->Size = System::Drawing::Size(120, 120);
			this->tableLayoutPanel22->TabIndex = 3;
			// 
			// pictureBox22
			// 
			this->pictureBox22->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox22->Location = System::Drawing::Point(0, 20);
			this->pictureBox22->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(120, 100);
			this->pictureBox22->TabIndex = 0;
			this->pictureBox22->TabStop = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label22->Location = System::Drawing::Point(0, 0);
			this->label22->Margin = System::Windows::Forms::Padding(0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(120, 20);
			this->label22->TabIndex = 1;
			this->label22->Text = L"Box 2";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// frmBoxes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(368, 287);
			this->Controls->Add(this->scMain);
			this->Controls->Add(this->msMain);
			this->MainMenuStrip = this->msMain;
			this->Name = L"frmBoxes";
			this->Text = L"PKMDS: Desktop Windows";
			this->Load += gcnew System::EventHandler(this, &frmBoxes::frmBoxes_Load);
			this->tlPCBox->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot09))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot08))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot07))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot06))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot05))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot04))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot03))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot02))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBoxSlot01))->EndInit();
			this->msMain->ResumeLayout(false);
			this->msMain->PerformLayout();
			this->tlParty->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbPartySlot06))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbPartySlot05))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbPartySlot04))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbPartySlot03))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbPartySlot02))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbPartySlot01))->EndInit();
			this->gbParty->ResumeLayout(false);
			this->gbBox->ResumeLayout(false);
			this->scMain->Panel1->ResumeLayout(false);
			this->scMain->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->scMain))->EndInit();
			this->scMain->ResumeLayout(false);
			this->tlPCBoxes->ResumeLayout(false);
			this->tlBox01->ResumeLayout(false);
			this->tlBox01->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox01))->EndInit();
			this->tlBox02->ResumeLayout(false);
			this->tlBox02->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox02))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			this->tableLayoutPanel7->ResumeLayout(false);
			this->tableLayoutPanel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			this->tableLayoutPanel8->ResumeLayout(false);
			this->tableLayoutPanel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			this->tableLayoutPanel9->ResumeLayout(false);
			this->tableLayoutPanel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			this->tableLayoutPanel10->ResumeLayout(false);
			this->tableLayoutPanel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			this->tableLayoutPanel11->ResumeLayout(false);
			this->tableLayoutPanel11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->EndInit();
			this->tableLayoutPanel12->ResumeLayout(false);
			this->tableLayoutPanel12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->EndInit();
			this->tableLayoutPanel13->ResumeLayout(false);
			this->tableLayoutPanel13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->EndInit();
			this->tableLayoutPanel14->ResumeLayout(false);
			this->tableLayoutPanel14->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->EndInit();
			this->tableLayoutPanel15->ResumeLayout(false);
			this->tableLayoutPanel15->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->EndInit();
			this->tableLayoutPanel16->ResumeLayout(false);
			this->tableLayoutPanel16->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->EndInit();
			this->tableLayoutPanel17->ResumeLayout(false);
			this->tableLayoutPanel17->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->EndInit();
			this->tableLayoutPanel18->ResumeLayout(false);
			this->tableLayoutPanel18->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->EndInit();
			this->tableLayoutPanel19->ResumeLayout(false);
			this->tableLayoutPanel19->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox19))->EndInit();
			this->tableLayoutPanel20->ResumeLayout(false);
			this->tableLayoutPanel20->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox20))->EndInit();
			this->tableLayoutPanel21->ResumeLayout(false);
			this->tableLayoutPanel21->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox21))->EndInit();
			this->tableLayoutPanel22->ResumeLayout(false);
			this->tableLayoutPanel22->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox22))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		VS_SQLite ^ vsqlite;
		bw2sav_obj * sav;
	private: System::Void frmBoxes_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 vsqlite = gcnew VS_SQLite();
				 sav = new bw2sav_obj;
			 }
	private: System::Void loadSAVToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if((fileOpen->ShowDialog() != System::Windows::Forms::DialogResult::Cancel) & (fileOpen->FileName != ""))
				 {
					 read(marshal_as<std::string>(fileOpen->FileName).c_str(),sav);
				 }
				 int box = 0;
				 std::ostringstream wpsql;
				 getwallpapersql(wpsql,(int)(sav->cur.boxwallpapers[box]));
				 tlPCBox->BackgroundImage = vsqlite->getSQLImage(wpsql.str());
				 for each (System::Windows::Forms::PictureBox^ pb in tlPCBox->Controls)
				 {
					 pb->Image = nullptr;
					 int slot = int::Parse(pb->Name->Substring(9));
					 pokemon_obj * pkm = new pokemon_obj;
					 pkm = &(sav->cur.boxes[box].pokemon[slot-1]);
					 decryptpkm(pkm);
					 if(pkm->species != 0)
					 {
						 std::ostringstream o;
						 geticonsql(o,pkm);
						 pb->Image = vsqlite->getSQLImage(o.str());
					 }
				 }
				 for each (System::Windows::Forms::PictureBox^ pb in tlParty->Controls)
				 {
					 pb->Image = nullptr;
					 int slot = int::Parse(pb->Name->Substring(11));
					 if(slot <= sav->cur.party.size)
					 {
						 party_pkm * ppkm = new party_pkm;
						 pokemon_obj * pkm = new pokemon_obj;
						 ppkm = &(sav->cur.party.pokemon[slot-1]);
						 pkm = &(ppkm->pkm_data);
						 decryptpkm(pkm);
						 if(pkm->species != 0)
						 {
							 std::ostringstream o;
							 geticonsql(o,pkm);
							 pb->Image = vsqlite->getSQLImage(o.str());
						 }
					 }
				 }
			 }
	private: System::Void pbBoxSlot_Click(System::Object^  sender, System::EventArgs^  e) 
			 {

			 }
	private: System::Void pbBoxSlot_MouseEnter(System::Object^  sender, System::EventArgs^  e)
			 {
				 ((System::Windows::Forms::PictureBox^)(sender))->BackColor = System::Drawing::Color::Orange;
			 }
	private: System::Void pbBoxSlot_MouseHover(System::Object^  sender, System::EventArgs^  e) 
			 {

			 }
	private: System::Void pbBoxSlot_MouseLeave(System::Object^  sender, System::EventArgs^  e) 
			 {
				 ((System::Windows::Forms::PictureBox^)(sender))->BackColor = System::Drawing::Color::Transparent;
			 }
	private: System::Void pbBoxSlot_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
			 {

			 }
	private: System::Void pbBoxSlot_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e)
			 {

			 }
	private: System::Void pbBoxSlot_DoubleClick(System::Object^  sender, System::EventArgs^  e)
			 {

			 }
	private: System::Void pbBoxSlot_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e)
			 {

			 }
	private: System::Void pbBoxSlot_DragLeave(System::Object^  sender, System::EventArgs^  e) 
			 {

			 }
	private: System::Void pbBoxSlot_DragOver(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) 
			 {

			 }
	private: System::Void pbPartySlot_Click(System::Object^  sender, System::EventArgs^  e) 
			 {

			 }
	private: System::Void pbPartySlot_DoubleClick(System::Object^  sender, System::EventArgs^  e) 
			 {

			 }
	private: System::Void pbPartySlot_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) 
			 {

			 }
	private: System::Void pbPartySlot_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e)
			 {

			 }
	private: System::Void pbPartySlot_DragLeave(System::Object^  sender, System::EventArgs^  e)
			 {

			 }
	private: System::Void pbPartySlot_DragOver(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) 
			 {

			 }
	private: System::Void pbPartySlot_MouseEnter(System::Object^  sender, System::EventArgs^  e)
			 {
				 ((System::Windows::Forms::PictureBox^)(sender))->BackColor = System::Drawing::Color::Orange;
			 }
	private: System::Void pbPartySlot_MouseHover(System::Object^  sender, System::EventArgs^  e)
			 {

			 }
	private: System::Void pbPartySlot_MouseLeave(System::Object^  sender, System::EventArgs^  e)
			 {
				 ((System::Windows::Forms::PictureBox^)(sender))->BackColor = System::Drawing::Color::Transparent;
			 }
	private: System::Void pbPartySlot_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
			 {

			 }
	};
}

