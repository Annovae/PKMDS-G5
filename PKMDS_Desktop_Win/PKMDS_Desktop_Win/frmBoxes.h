#pragma region Stuff I dont need to see
#pragma once
#include "frmPKMViewer.h"
#include "../../PKMDS_Desktop_Win_2010/PKMDS_Desktop_Win_2010/pkmdataviewer.h"
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
				delete pkmviewer;
				delete vsqlite;
				delete sav;
				delete ppkm;
				delete pkm;
				delete a;
				delete b;
				delete form_box;

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
	private: System::Windows::Forms::TableLayoutPanel^  tlBox24;
	private: System::Windows::Forms::PictureBox^  pbBox24;
	private: System::Windows::Forms::Label^  lblBox24;
	private: System::Windows::Forms::TableLayoutPanel^  tlBox23;
	private: System::Windows::Forms::PictureBox^  pbBox23;
	private: System::Windows::Forms::Label^  lblBox23;
	private: System::Windows::Forms::TableLayoutPanel^  tlBox22;
	private: System::Windows::Forms::PictureBox^  pbBox22;
	private: System::Windows::Forms::Label^  lblBox22;
	private: System::Windows::Forms::TableLayoutPanel^  tlBox21;
	private: System::Windows::Forms::PictureBox^  pbBox21;
	private: System::Windows::Forms::Label^  lblBox21;
	private: System::Windows::Forms::TableLayoutPanel^  tlBox20;
	private: System::Windows::Forms::PictureBox^  pbBox20;
	private: System::Windows::Forms::Label^  lblBox20;
	private: System::Windows::Forms::TableLayoutPanel^  tlBox19;
	private: System::Windows::Forms::PictureBox^  pbBox19;
	private: System::Windows::Forms::Label^  lblBox19;
	private: System::Windows::Forms::TableLayoutPanel^  tlBox18;
	private: System::Windows::Forms::PictureBox^  pbBox18;
	private: System::Windows::Forms::Label^  lblBox18;
	private: System::Windows::Forms::TableLayoutPanel^  tlBox17;
	private: System::Windows::Forms::PictureBox^  pbBox17;
	private: System::Windows::Forms::Label^  lblBox17;
	private: System::Windows::Forms::TableLayoutPanel^  tlBox16;
	private: System::Windows::Forms::PictureBox^  pbBox16;
	private: System::Windows::Forms::Label^  lblBox16;
	private: System::Windows::Forms::TableLayoutPanel^  tlBox15;
	private: System::Windows::Forms::PictureBox^  pbBox15;
	private: System::Windows::Forms::Label^  lblBox15;
	private: System::Windows::Forms::TableLayoutPanel^  tlBox14;
	private: System::Windows::Forms::PictureBox^  pbBox14;
	private: System::Windows::Forms::Label^  lblBox14;
	private: System::Windows::Forms::TableLayoutPanel^  tlBox13;
	private: System::Windows::Forms::PictureBox^  pbBox13;
	private: System::Windows::Forms::Label^  lblBox13;
	private: System::Windows::Forms::TableLayoutPanel^  tlBox12;
	private: System::Windows::Forms::PictureBox^  pbBox12;
	private: System::Windows::Forms::Label^  lblBox12;
	private: System::Windows::Forms::TableLayoutPanel^  tlBox11;
	private: System::Windows::Forms::PictureBox^  pbBox11;
	private: System::Windows::Forms::Label^  lblBox11;
	private: System::Windows::Forms::TableLayoutPanel^  tlBox10;
	private: System::Windows::Forms::PictureBox^  pbBox10;
	private: System::Windows::Forms::Label^  lblBox10;
	private: System::Windows::Forms::TableLayoutPanel^  tlBox09;
	private: System::Windows::Forms::PictureBox^  pbBox09;
	private: System::Windows::Forms::Label^  lblBox09;
	private: System::Windows::Forms::TableLayoutPanel^  tlBox08;
	private: System::Windows::Forms::PictureBox^  pbBox08;
	private: System::Windows::Forms::Label^  lblBox08;
	private: System::Windows::Forms::TableLayoutPanel^  tlBox07;
	private: System::Windows::Forms::PictureBox^  pbBox07;
	private: System::Windows::Forms::Label^  lblBox07;
	private: System::Windows::Forms::TableLayoutPanel^  tlBox06;
	private: System::Windows::Forms::PictureBox^  pbBox06;
	private: System::Windows::Forms::Label^  lblBox06;
	private: System::Windows::Forms::TableLayoutPanel^  tlBox05;
	private: System::Windows::Forms::PictureBox^  pbBox05;
	private: System::Windows::Forms::Label^  lblBox05;
	private: System::Windows::Forms::TableLayoutPanel^  tlBox04;
	private: System::Windows::Forms::PictureBox^  pbBox04;
	private: System::Windows::Forms::Label^  lblBox04;
	private: System::Windows::Forms::TableLayoutPanel^  tlBox03;
	private: System::Windows::Forms::PictureBox^  pbBox03;
	private: System::Windows::Forms::Label^  lblBox03;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^  fileSave;
private: System::Windows::Forms::ToolStripMenuItem^  viewToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  reportToolStripMenuItem;
	protected: 
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
#pragma endregion
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
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->tlBox24 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->lblBox24 = (gcnew System::Windows::Forms::Label());
			this->tlBox23 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->lblBox23 = (gcnew System::Windows::Forms::Label());
			this->tlBox22 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->lblBox22 = (gcnew System::Windows::Forms::Label());
			this->tlBox21 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->lblBox21 = (gcnew System::Windows::Forms::Label());
			this->tlBox20 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->lblBox20 = (gcnew System::Windows::Forms::Label());
			this->tlBox19 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->lblBox19 = (gcnew System::Windows::Forms::Label());
			this->tlBox18 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->lblBox18 = (gcnew System::Windows::Forms::Label());
			this->tlBox17 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->lblBox17 = (gcnew System::Windows::Forms::Label());
			this->tlBox16 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->lblBox16 = (gcnew System::Windows::Forms::Label());
			this->tlBox15 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->lblBox15 = (gcnew System::Windows::Forms::Label());
			this->tlBox14 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->lblBox14 = (gcnew System::Windows::Forms::Label());
			this->tlBox13 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->lblBox13 = (gcnew System::Windows::Forms::Label());
			this->tlBox12 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->lblBox12 = (gcnew System::Windows::Forms::Label());
			this->tlBox11 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->lblBox11 = (gcnew System::Windows::Forms::Label());
			this->tlBox10 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->lblBox10 = (gcnew System::Windows::Forms::Label());
			this->tlBox09 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBox09 = (gcnew System::Windows::Forms::PictureBox());
			this->lblBox09 = (gcnew System::Windows::Forms::Label());
			this->tlBox08 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBox08 = (gcnew System::Windows::Forms::PictureBox());
			this->lblBox08 = (gcnew System::Windows::Forms::Label());
			this->tlBox07 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBox07 = (gcnew System::Windows::Forms::PictureBox());
			this->lblBox07 = (gcnew System::Windows::Forms::Label());
			this->tlBox06 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBox06 = (gcnew System::Windows::Forms::PictureBox());
			this->lblBox06 = (gcnew System::Windows::Forms::Label());
			this->tlBox05 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBox05 = (gcnew System::Windows::Forms::PictureBox());
			this->lblBox05 = (gcnew System::Windows::Forms::Label());
			this->tlBox04 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBox04 = (gcnew System::Windows::Forms::PictureBox());
			this->lblBox04 = (gcnew System::Windows::Forms::Label());
			this->tlBox03 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBox03 = (gcnew System::Windows::Forms::PictureBox());
			this->lblBox03 = (gcnew System::Windows::Forms::Label());
			this->tlBox01 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBox01 = (gcnew System::Windows::Forms::PictureBox());
			this->lblBox01 = (gcnew System::Windows::Forms::Label());
			this->tlBox02 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbBox02 = (gcnew System::Windows::Forms::PictureBox());
			this->lblBox02 = (gcnew System::Windows::Forms::Label());
			this->fileSave = (gcnew System::Windows::Forms::SaveFileDialog());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->tlBox24->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox24))->BeginInit();
			this->tlBox23->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox23))->BeginInit();
			this->tlBox22->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox22))->BeginInit();
			this->tlBox21->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox21))->BeginInit();
			this->tlBox20->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox20))->BeginInit();
			this->tlBox19->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox19))->BeginInit();
			this->tlBox18->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox18))->BeginInit();
			this->tlBox17->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox17))->BeginInit();
			this->tlBox16->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox16))->BeginInit();
			this->tlBox15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox15))->BeginInit();
			this->tlBox14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox14))->BeginInit();
			this->tlBox13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox13))->BeginInit();
			this->tlBox12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox12))->BeginInit();
			this->tlBox11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox11))->BeginInit();
			this->tlBox10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox10))->BeginInit();
			this->tlBox09->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox09))->BeginInit();
			this->tlBox08->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox08))->BeginInit();
			this->tlBox07->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox07))->BeginInit();
			this->tlBox06->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox06))->BeginInit();
			this->tlBox05->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox05))->BeginInit();
			this->tlBox04->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox04))->BeginInit();
			this->tlBox03->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox03))->BeginInit();
			this->tlBox01->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox01))->BeginInit();
			this->tlBox02->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox02))->BeginInit();
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
			this->pbBoxSlot30->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot30->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot30->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot29->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot29->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot29->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot28->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot28->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot28->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot27->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot27->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot27->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot26->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot26->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot26->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot25->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot25->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot25->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot24->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot24->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot24->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot23->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot23->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot23->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot22->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot22->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot22->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot21->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot21->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot21->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot20->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot20->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot20->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot19->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot19->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot19->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot18->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot18->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot18->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot17->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot17->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot17->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot16->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot16->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot16->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot15->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot15->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot15->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot14->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot14->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot14->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot13->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot13->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot13->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot12->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot12->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot12->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot11->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot11->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot11->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot10->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot10->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot10->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot09->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot09->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot09->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot08->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot08->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot08->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot07->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot07->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot07->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot06->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot06->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot06->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot05->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot05->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot05->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot04->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot04->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot04->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot03->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot03->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot03->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot02->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot02->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot02->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
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
			this->pbBoxSlot01->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBoxSlot_Paint);
			this->pbBoxSlot01->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_DoubleClick);
			this->pbBoxSlot01->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseDown);
			this->pbBoxSlot01->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseEnter);
			this->pbBoxSlot01->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseLeave);
			this->pbBoxSlot01->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBoxSlot_MouseHover);
			this->pbBoxSlot01->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBoxSlot_MouseMove);
			// 
			// msMain
			// 
			this->msMain->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->fileToolStripMenuItem, 
				this->viewToolStripMenuItem});
			this->msMain->Location = System::Drawing::Point(0, 0);
			this->msMain->Name = L"msMain";
			this->msMain->Size = System::Drawing::Size(361, 24);
			this->msMain->TabIndex = 0;
			this->msMain->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->loadSAVToolStripMenuItem, 
				this->saveToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// loadSAVToolStripMenuItem
			// 
			this->loadSAVToolStripMenuItem->Name = L"loadSAVToolStripMenuItem";
			this->loadSAVToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->loadSAVToolStripMenuItem->Text = L"Load...";
			this->loadSAVToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmBoxes::loadSAVToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Enabled = false;
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->saveToolStripMenuItem->Text = L"Save...";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmBoxes::saveToolStripMenuItem_Click);
			// 
			// fileOpen
			// 
			this->fileOpen->Filter = L"SAV Files|*.sav|All Files|*.*";
			this->fileOpen->Title = L"Load Save File";
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
			this->pbPartySlot06->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbPartySlot_Paint);
			this->pbPartySlot06->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_DoubleClick);
			this->pbPartySlot06->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbPartySlot_MouseDown);
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
			this->pbPartySlot05->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbPartySlot_Paint);
			this->pbPartySlot05->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_DoubleClick);
			this->pbPartySlot05->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbPartySlot_MouseDown);
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
			this->pbPartySlot04->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbPartySlot_Paint);
			this->pbPartySlot04->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_DoubleClick);
			this->pbPartySlot04->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbPartySlot_MouseDown);
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
			this->pbPartySlot03->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbPartySlot_Paint);
			this->pbPartySlot03->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_DoubleClick);
			this->pbPartySlot03->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbPartySlot_MouseDown);
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
			this->pbPartySlot02->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbPartySlot_Paint);
			this->pbPartySlot02->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_DoubleClick);
			this->pbPartySlot02->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbPartySlot_MouseDown);
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
			this->pbPartySlot01->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbPartySlot_Paint);
			this->pbPartySlot01->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbPartySlot_DoubleClick);
			this->pbPartySlot01->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbPartySlot_MouseDown);
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
			this->scMain->Panel2->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::scMain_Panel2_MouseEnter);
			this->scMain->Size = System::Drawing::Size(361, 263);
			this->scMain->SplitterDistance = 210;
			this->scMain->SplitterWidth = 1;
			this->scMain->TabIndex = 5;
			// 
			// tlPCBoxes
			// 
			this->tlPCBoxes->ColumnCount = 1;
			this->tlPCBoxes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 121)));
			this->tlPCBoxes->Controls->Add(this->tlBox24, 0, 23);
			this->tlPCBoxes->Controls->Add(this->tlBox23, 0, 22);
			this->tlPCBoxes->Controls->Add(this->tlBox22, 0, 21);
			this->tlPCBoxes->Controls->Add(this->tlBox21, 0, 20);
			this->tlPCBoxes->Controls->Add(this->tlBox20, 0, 19);
			this->tlPCBoxes->Controls->Add(this->tlBox19, 0, 18);
			this->tlPCBoxes->Controls->Add(this->tlBox18, 0, 17);
			this->tlPCBoxes->Controls->Add(this->tlBox17, 0, 16);
			this->tlPCBoxes->Controls->Add(this->tlBox16, 0, 15);
			this->tlPCBoxes->Controls->Add(this->tlBox15, 0, 14);
			this->tlPCBoxes->Controls->Add(this->tlBox14, 0, 13);
			this->tlPCBoxes->Controls->Add(this->tlBox13, 0, 12);
			this->tlPCBoxes->Controls->Add(this->tlBox12, 0, 11);
			this->tlPCBoxes->Controls->Add(this->tlBox11, 0, 10);
			this->tlPCBoxes->Controls->Add(this->tlBox10, 0, 9);
			this->tlPCBoxes->Controls->Add(this->tlBox09, 0, 8);
			this->tlPCBoxes->Controls->Add(this->tlBox08, 0, 7);
			this->tlPCBoxes->Controls->Add(this->tlBox07, 0, 6);
			this->tlPCBoxes->Controls->Add(this->tlBox06, 0, 5);
			this->tlPCBoxes->Controls->Add(this->tlBox05, 0, 4);
			this->tlPCBoxes->Controls->Add(this->tlBox04, 0, 3);
			this->tlPCBoxes->Controls->Add(this->tlBox03, 0, 2);
			this->tlPCBoxes->Controls->Add(this->tlBox01, 0, 0);
			this->tlPCBoxes->Controls->Add(this->tlBox02, 0, 1);
			this->tlPCBoxes->Location = System::Drawing::Point(8, 3);
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
			this->tlPCBoxes->Size = System::Drawing::Size(122, 2880);
			this->tlPCBoxes->TabIndex = 2;
			// 
			// tlBox24
			// 
			this->tlBox24->ColumnCount = 1;
			this->tlBox24->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox24->Controls->Add(this->pbBox24, 0, 1);
			this->tlBox24->Controls->Add(this->lblBox24, 0, 0);
			this->tlBox24->Location = System::Drawing::Point(0, 2760);
			this->tlBox24->Margin = System::Windows::Forms::Padding(0);
			this->tlBox24->Name = L"tlBox24";
			this->tlBox24->RowCount = 2;
			this->tlBox24->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlBox24->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox24->Size = System::Drawing::Size(120, 120);
			this->tlBox24->TabIndex = 3;
			// 
			// pbBox24
			// 
			this->pbBox24->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbBox24->Location = System::Drawing::Point(0, 20);
			this->pbBox24->Margin = System::Windows::Forms::Padding(0);
			this->pbBox24->Name = L"pbBox24";
			this->pbBox24->Size = System::Drawing::Size(120, 100);
			this->pbBox24->TabIndex = 0;
			this->pbBox24->TabStop = false;
			this->pbBox24->Click += gcnew System::EventHandler(this, &frmBoxes::pbBox_Click);
			this->pbBox24->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragDrop);
			this->pbBox24->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragEnter);
			this->pbBox24->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragOver);
			this->pbBox24->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_DragLeave);
			this->pbBox24->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBox_Paint);
			this->pbBox24->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBox_DoubleClick);
			this->pbBox24->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseEnter);
			this->pbBox24->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseLeave);
			this->pbBox24->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseHover);
			this->pbBox24->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBox_MouseMove);
			// 
			// lblBox24
			// 
			this->lblBox24->AutoSize = true;
			this->lblBox24->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblBox24->Location = System::Drawing::Point(0, 0);
			this->lblBox24->Margin = System::Windows::Forms::Padding(0);
			this->lblBox24->Name = L"lblBox24";
			this->lblBox24->Size = System::Drawing::Size(120, 20);
			this->lblBox24->TabIndex = 1;
			this->lblBox24->Text = L"Box 24";
			this->lblBox24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlBox23
			// 
			this->tlBox23->ColumnCount = 1;
			this->tlBox23->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox23->Controls->Add(this->pbBox23, 0, 1);
			this->tlBox23->Controls->Add(this->lblBox23, 0, 0);
			this->tlBox23->Location = System::Drawing::Point(0, 2640);
			this->tlBox23->Margin = System::Windows::Forms::Padding(0);
			this->tlBox23->Name = L"tlBox23";
			this->tlBox23->RowCount = 2;
			this->tlBox23->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlBox23->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox23->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlBox23->Size = System::Drawing::Size(120, 120);
			this->tlBox23->TabIndex = 3;
			// 
			// pbBox23
			// 
			this->pbBox23->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbBox23->Location = System::Drawing::Point(0, 20);
			this->pbBox23->Margin = System::Windows::Forms::Padding(0);
			this->pbBox23->Name = L"pbBox23";
			this->pbBox23->Size = System::Drawing::Size(120, 100);
			this->pbBox23->TabIndex = 0;
			this->pbBox23->TabStop = false;
			this->pbBox23->Click += gcnew System::EventHandler(this, &frmBoxes::pbBox_Click);
			this->pbBox23->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragDrop);
			this->pbBox23->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragEnter);
			this->pbBox23->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragOver);
			this->pbBox23->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_DragLeave);
			this->pbBox23->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBox_Paint);
			this->pbBox23->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBox_DoubleClick);
			this->pbBox23->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseEnter);
			this->pbBox23->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseLeave);
			this->pbBox23->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseHover);
			this->pbBox23->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBox_MouseMove);
			// 
			// lblBox23
			// 
			this->lblBox23->AutoSize = true;
			this->lblBox23->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblBox23->Location = System::Drawing::Point(0, 0);
			this->lblBox23->Margin = System::Windows::Forms::Padding(0);
			this->lblBox23->Name = L"lblBox23";
			this->lblBox23->Size = System::Drawing::Size(120, 20);
			this->lblBox23->TabIndex = 1;
			this->lblBox23->Text = L"Box 23";
			this->lblBox23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlBox22
			// 
			this->tlBox22->ColumnCount = 1;
			this->tlBox22->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox22->Controls->Add(this->pbBox22, 0, 1);
			this->tlBox22->Controls->Add(this->lblBox22, 0, 0);
			this->tlBox22->Location = System::Drawing::Point(0, 2520);
			this->tlBox22->Margin = System::Windows::Forms::Padding(0);
			this->tlBox22->Name = L"tlBox22";
			this->tlBox22->RowCount = 2;
			this->tlBox22->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlBox22->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox22->Size = System::Drawing::Size(120, 120);
			this->tlBox22->TabIndex = 3;
			// 
			// pbBox22
			// 
			this->pbBox22->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbBox22->Location = System::Drawing::Point(0, 20);
			this->pbBox22->Margin = System::Windows::Forms::Padding(0);
			this->pbBox22->Name = L"pbBox22";
			this->pbBox22->Size = System::Drawing::Size(120, 100);
			this->pbBox22->TabIndex = 0;
			this->pbBox22->TabStop = false;
			this->pbBox22->Click += gcnew System::EventHandler(this, &frmBoxes::pbBox_Click);
			this->pbBox22->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragDrop);
			this->pbBox22->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragEnter);
			this->pbBox22->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragOver);
			this->pbBox22->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_DragLeave);
			this->pbBox22->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBox_Paint);
			this->pbBox22->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBox_DoubleClick);
			this->pbBox22->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseEnter);
			this->pbBox22->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseLeave);
			this->pbBox22->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseHover);
			this->pbBox22->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBox_MouseMove);
			// 
			// lblBox22
			// 
			this->lblBox22->AutoSize = true;
			this->lblBox22->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblBox22->Location = System::Drawing::Point(0, 0);
			this->lblBox22->Margin = System::Windows::Forms::Padding(0);
			this->lblBox22->Name = L"lblBox22";
			this->lblBox22->Size = System::Drawing::Size(120, 20);
			this->lblBox22->TabIndex = 1;
			this->lblBox22->Text = L"Box 22";
			this->lblBox22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlBox21
			// 
			this->tlBox21->ColumnCount = 1;
			this->tlBox21->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox21->Controls->Add(this->pbBox21, 0, 1);
			this->tlBox21->Controls->Add(this->lblBox21, 0, 0);
			this->tlBox21->Location = System::Drawing::Point(0, 2400);
			this->tlBox21->Margin = System::Windows::Forms::Padding(0);
			this->tlBox21->Name = L"tlBox21";
			this->tlBox21->RowCount = 2;
			this->tlBox21->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlBox21->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox21->Size = System::Drawing::Size(120, 120);
			this->tlBox21->TabIndex = 3;
			// 
			// pbBox21
			// 
			this->pbBox21->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbBox21->Location = System::Drawing::Point(0, 20);
			this->pbBox21->Margin = System::Windows::Forms::Padding(0);
			this->pbBox21->Name = L"pbBox21";
			this->pbBox21->Size = System::Drawing::Size(120, 100);
			this->pbBox21->TabIndex = 0;
			this->pbBox21->TabStop = false;
			this->pbBox21->Click += gcnew System::EventHandler(this, &frmBoxes::pbBox_Click);
			this->pbBox21->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragDrop);
			this->pbBox21->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragEnter);
			this->pbBox21->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragOver);
			this->pbBox21->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_DragLeave);
			this->pbBox21->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBox_Paint);
			this->pbBox21->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBox_DoubleClick);
			this->pbBox21->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseEnter);
			this->pbBox21->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseLeave);
			this->pbBox21->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseHover);
			this->pbBox21->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBox_MouseMove);
			// 
			// lblBox21
			// 
			this->lblBox21->AutoSize = true;
			this->lblBox21->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblBox21->Location = System::Drawing::Point(0, 0);
			this->lblBox21->Margin = System::Windows::Forms::Padding(0);
			this->lblBox21->Name = L"lblBox21";
			this->lblBox21->Size = System::Drawing::Size(120, 20);
			this->lblBox21->TabIndex = 1;
			this->lblBox21->Text = L"Box 21";
			this->lblBox21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlBox20
			// 
			this->tlBox20->ColumnCount = 1;
			this->tlBox20->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox20->Controls->Add(this->pbBox20, 0, 1);
			this->tlBox20->Controls->Add(this->lblBox20, 0, 0);
			this->tlBox20->Location = System::Drawing::Point(0, 2280);
			this->tlBox20->Margin = System::Windows::Forms::Padding(0);
			this->tlBox20->Name = L"tlBox20";
			this->tlBox20->RowCount = 2;
			this->tlBox20->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlBox20->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox20->Size = System::Drawing::Size(120, 120);
			this->tlBox20->TabIndex = 3;
			// 
			// pbBox20
			// 
			this->pbBox20->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbBox20->Location = System::Drawing::Point(0, 20);
			this->pbBox20->Margin = System::Windows::Forms::Padding(0);
			this->pbBox20->Name = L"pbBox20";
			this->pbBox20->Size = System::Drawing::Size(120, 100);
			this->pbBox20->TabIndex = 0;
			this->pbBox20->TabStop = false;
			this->pbBox20->Click += gcnew System::EventHandler(this, &frmBoxes::pbBox_Click);
			this->pbBox20->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragDrop);
			this->pbBox20->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragEnter);
			this->pbBox20->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragOver);
			this->pbBox20->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_DragLeave);
			this->pbBox20->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBox_Paint);
			this->pbBox20->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBox_DoubleClick);
			this->pbBox20->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseEnter);
			this->pbBox20->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseLeave);
			this->pbBox20->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseHover);
			this->pbBox20->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBox_MouseMove);
			// 
			// lblBox20
			// 
			this->lblBox20->AutoSize = true;
			this->lblBox20->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblBox20->Location = System::Drawing::Point(0, 0);
			this->lblBox20->Margin = System::Windows::Forms::Padding(0);
			this->lblBox20->Name = L"lblBox20";
			this->lblBox20->Size = System::Drawing::Size(120, 20);
			this->lblBox20->TabIndex = 1;
			this->lblBox20->Text = L"Box 20";
			this->lblBox20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlBox19
			// 
			this->tlBox19->ColumnCount = 1;
			this->tlBox19->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox19->Controls->Add(this->pbBox19, 0, 1);
			this->tlBox19->Controls->Add(this->lblBox19, 0, 0);
			this->tlBox19->Location = System::Drawing::Point(0, 2160);
			this->tlBox19->Margin = System::Windows::Forms::Padding(0);
			this->tlBox19->Name = L"tlBox19";
			this->tlBox19->RowCount = 2;
			this->tlBox19->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlBox19->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox19->Size = System::Drawing::Size(120, 120);
			this->tlBox19->TabIndex = 3;
			// 
			// pbBox19
			// 
			this->pbBox19->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbBox19->Location = System::Drawing::Point(0, 20);
			this->pbBox19->Margin = System::Windows::Forms::Padding(0);
			this->pbBox19->Name = L"pbBox19";
			this->pbBox19->Size = System::Drawing::Size(120, 100);
			this->pbBox19->TabIndex = 0;
			this->pbBox19->TabStop = false;
			this->pbBox19->Click += gcnew System::EventHandler(this, &frmBoxes::pbBox_Click);
			this->pbBox19->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragDrop);
			this->pbBox19->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragEnter);
			this->pbBox19->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragOver);
			this->pbBox19->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_DragLeave);
			this->pbBox19->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBox_Paint);
			this->pbBox19->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBox_DoubleClick);
			this->pbBox19->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseEnter);
			this->pbBox19->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseLeave);
			this->pbBox19->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseHover);
			this->pbBox19->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBox_MouseMove);
			// 
			// lblBox19
			// 
			this->lblBox19->AutoSize = true;
			this->lblBox19->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblBox19->Location = System::Drawing::Point(0, 0);
			this->lblBox19->Margin = System::Windows::Forms::Padding(0);
			this->lblBox19->Name = L"lblBox19";
			this->lblBox19->Size = System::Drawing::Size(120, 20);
			this->lblBox19->TabIndex = 1;
			this->lblBox19->Text = L"Box 19";
			this->lblBox19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlBox18
			// 
			this->tlBox18->ColumnCount = 1;
			this->tlBox18->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox18->Controls->Add(this->pbBox18, 0, 1);
			this->tlBox18->Controls->Add(this->lblBox18, 0, 0);
			this->tlBox18->Location = System::Drawing::Point(0, 2040);
			this->tlBox18->Margin = System::Windows::Forms::Padding(0);
			this->tlBox18->Name = L"tlBox18";
			this->tlBox18->RowCount = 2;
			this->tlBox18->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlBox18->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox18->Size = System::Drawing::Size(120, 120);
			this->tlBox18->TabIndex = 3;
			// 
			// pbBox18
			// 
			this->pbBox18->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbBox18->Location = System::Drawing::Point(0, 20);
			this->pbBox18->Margin = System::Windows::Forms::Padding(0);
			this->pbBox18->Name = L"pbBox18";
			this->pbBox18->Size = System::Drawing::Size(120, 100);
			this->pbBox18->TabIndex = 0;
			this->pbBox18->TabStop = false;
			this->pbBox18->Click += gcnew System::EventHandler(this, &frmBoxes::pbBox_Click);
			this->pbBox18->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragDrop);
			this->pbBox18->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragEnter);
			this->pbBox18->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragOver);
			this->pbBox18->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_DragLeave);
			this->pbBox18->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBox_Paint);
			this->pbBox18->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBox_DoubleClick);
			this->pbBox18->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseEnter);
			this->pbBox18->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseLeave);
			this->pbBox18->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseHover);
			this->pbBox18->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBox_MouseMove);
			// 
			// lblBox18
			// 
			this->lblBox18->AutoSize = true;
			this->lblBox18->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblBox18->Location = System::Drawing::Point(0, 0);
			this->lblBox18->Margin = System::Windows::Forms::Padding(0);
			this->lblBox18->Name = L"lblBox18";
			this->lblBox18->Size = System::Drawing::Size(120, 20);
			this->lblBox18->TabIndex = 1;
			this->lblBox18->Text = L"Box 18";
			this->lblBox18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlBox17
			// 
			this->tlBox17->ColumnCount = 1;
			this->tlBox17->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox17->Controls->Add(this->pbBox17, 0, 1);
			this->tlBox17->Controls->Add(this->lblBox17, 0, 0);
			this->tlBox17->Location = System::Drawing::Point(0, 1920);
			this->tlBox17->Margin = System::Windows::Forms::Padding(0);
			this->tlBox17->Name = L"tlBox17";
			this->tlBox17->RowCount = 2;
			this->tlBox17->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlBox17->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox17->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlBox17->Size = System::Drawing::Size(120, 120);
			this->tlBox17->TabIndex = 3;
			// 
			// pbBox17
			// 
			this->pbBox17->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbBox17->Location = System::Drawing::Point(0, 20);
			this->pbBox17->Margin = System::Windows::Forms::Padding(0);
			this->pbBox17->Name = L"pbBox17";
			this->pbBox17->Size = System::Drawing::Size(120, 100);
			this->pbBox17->TabIndex = 0;
			this->pbBox17->TabStop = false;
			this->pbBox17->Click += gcnew System::EventHandler(this, &frmBoxes::pbBox_Click);
			this->pbBox17->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragDrop);
			this->pbBox17->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragEnter);
			this->pbBox17->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragOver);
			this->pbBox17->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_DragLeave);
			this->pbBox17->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBox_Paint);
			this->pbBox17->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBox_DoubleClick);
			this->pbBox17->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseEnter);
			this->pbBox17->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseLeave);
			this->pbBox17->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseHover);
			this->pbBox17->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBox_MouseMove);
			// 
			// lblBox17
			// 
			this->lblBox17->AutoSize = true;
			this->lblBox17->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblBox17->Location = System::Drawing::Point(0, 0);
			this->lblBox17->Margin = System::Windows::Forms::Padding(0);
			this->lblBox17->Name = L"lblBox17";
			this->lblBox17->Size = System::Drawing::Size(120, 20);
			this->lblBox17->TabIndex = 1;
			this->lblBox17->Text = L"Box 17";
			this->lblBox17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlBox16
			// 
			this->tlBox16->ColumnCount = 1;
			this->tlBox16->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox16->Controls->Add(this->pbBox16, 0, 1);
			this->tlBox16->Controls->Add(this->lblBox16, 0, 0);
			this->tlBox16->Location = System::Drawing::Point(0, 1800);
			this->tlBox16->Margin = System::Windows::Forms::Padding(0);
			this->tlBox16->Name = L"tlBox16";
			this->tlBox16->RowCount = 2;
			this->tlBox16->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlBox16->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox16->Size = System::Drawing::Size(120, 120);
			this->tlBox16->TabIndex = 3;
			// 
			// pbBox16
			// 
			this->pbBox16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbBox16->Location = System::Drawing::Point(0, 20);
			this->pbBox16->Margin = System::Windows::Forms::Padding(0);
			this->pbBox16->Name = L"pbBox16";
			this->pbBox16->Size = System::Drawing::Size(120, 100);
			this->pbBox16->TabIndex = 0;
			this->pbBox16->TabStop = false;
			this->pbBox16->Click += gcnew System::EventHandler(this, &frmBoxes::pbBox_Click);
			this->pbBox16->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragDrop);
			this->pbBox16->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragEnter);
			this->pbBox16->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragOver);
			this->pbBox16->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_DragLeave);
			this->pbBox16->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBox_Paint);
			this->pbBox16->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBox_DoubleClick);
			this->pbBox16->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseEnter);
			this->pbBox16->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseLeave);
			this->pbBox16->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseHover);
			this->pbBox16->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBox_MouseMove);
			// 
			// lblBox16
			// 
			this->lblBox16->AutoSize = true;
			this->lblBox16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblBox16->Location = System::Drawing::Point(0, 0);
			this->lblBox16->Margin = System::Windows::Forms::Padding(0);
			this->lblBox16->Name = L"lblBox16";
			this->lblBox16->Size = System::Drawing::Size(120, 20);
			this->lblBox16->TabIndex = 1;
			this->lblBox16->Text = L"Box 16";
			this->lblBox16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlBox15
			// 
			this->tlBox15->ColumnCount = 1;
			this->tlBox15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox15->Controls->Add(this->pbBox15, 0, 1);
			this->tlBox15->Controls->Add(this->lblBox15, 0, 0);
			this->tlBox15->Location = System::Drawing::Point(0, 1680);
			this->tlBox15->Margin = System::Windows::Forms::Padding(0);
			this->tlBox15->Name = L"tlBox15";
			this->tlBox15->RowCount = 2;
			this->tlBox15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlBox15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox15->Size = System::Drawing::Size(120, 120);
			this->tlBox15->TabIndex = 3;
			// 
			// pbBox15
			// 
			this->pbBox15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbBox15->Location = System::Drawing::Point(0, 20);
			this->pbBox15->Margin = System::Windows::Forms::Padding(0);
			this->pbBox15->Name = L"pbBox15";
			this->pbBox15->Size = System::Drawing::Size(120, 100);
			this->pbBox15->TabIndex = 0;
			this->pbBox15->TabStop = false;
			this->pbBox15->Click += gcnew System::EventHandler(this, &frmBoxes::pbBox_Click);
			this->pbBox15->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragDrop);
			this->pbBox15->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragEnter);
			this->pbBox15->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragOver);
			this->pbBox15->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_DragLeave);
			this->pbBox15->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBox_Paint);
			this->pbBox15->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBox_DoubleClick);
			this->pbBox15->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseEnter);
			this->pbBox15->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseLeave);
			this->pbBox15->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseHover);
			this->pbBox15->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBox_MouseMove);
			// 
			// lblBox15
			// 
			this->lblBox15->AutoSize = true;
			this->lblBox15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblBox15->Location = System::Drawing::Point(0, 0);
			this->lblBox15->Margin = System::Windows::Forms::Padding(0);
			this->lblBox15->Name = L"lblBox15";
			this->lblBox15->Size = System::Drawing::Size(120, 20);
			this->lblBox15->TabIndex = 1;
			this->lblBox15->Text = L"Box 15";
			this->lblBox15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlBox14
			// 
			this->tlBox14->ColumnCount = 1;
			this->tlBox14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox14->Controls->Add(this->pbBox14, 0, 1);
			this->tlBox14->Controls->Add(this->lblBox14, 0, 0);
			this->tlBox14->Location = System::Drawing::Point(0, 1560);
			this->tlBox14->Margin = System::Windows::Forms::Padding(0);
			this->tlBox14->Name = L"tlBox14";
			this->tlBox14->RowCount = 2;
			this->tlBox14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlBox14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox14->Size = System::Drawing::Size(120, 120);
			this->tlBox14->TabIndex = 3;
			// 
			// pbBox14
			// 
			this->pbBox14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbBox14->Location = System::Drawing::Point(0, 20);
			this->pbBox14->Margin = System::Windows::Forms::Padding(0);
			this->pbBox14->Name = L"pbBox14";
			this->pbBox14->Size = System::Drawing::Size(120, 100);
			this->pbBox14->TabIndex = 0;
			this->pbBox14->TabStop = false;
			this->pbBox14->Click += gcnew System::EventHandler(this, &frmBoxes::pbBox_Click);
			this->pbBox14->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragDrop);
			this->pbBox14->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragEnter);
			this->pbBox14->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragOver);
			this->pbBox14->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_DragLeave);
			this->pbBox14->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBox_Paint);
			this->pbBox14->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBox_DoubleClick);
			this->pbBox14->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseEnter);
			this->pbBox14->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseLeave);
			this->pbBox14->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseHover);
			this->pbBox14->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBox_MouseMove);
			// 
			// lblBox14
			// 
			this->lblBox14->AutoSize = true;
			this->lblBox14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblBox14->Location = System::Drawing::Point(0, 0);
			this->lblBox14->Margin = System::Windows::Forms::Padding(0);
			this->lblBox14->Name = L"lblBox14";
			this->lblBox14->Size = System::Drawing::Size(120, 20);
			this->lblBox14->TabIndex = 1;
			this->lblBox14->Text = L"Box 14";
			this->lblBox14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlBox13
			// 
			this->tlBox13->ColumnCount = 1;
			this->tlBox13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox13->Controls->Add(this->pbBox13, 0, 1);
			this->tlBox13->Controls->Add(this->lblBox13, 0, 0);
			this->tlBox13->Location = System::Drawing::Point(0, 1440);
			this->tlBox13->Margin = System::Windows::Forms::Padding(0);
			this->tlBox13->Name = L"tlBox13";
			this->tlBox13->RowCount = 2;
			this->tlBox13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlBox13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox13->Size = System::Drawing::Size(120, 120);
			this->tlBox13->TabIndex = 3;
			// 
			// pbBox13
			// 
			this->pbBox13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbBox13->Location = System::Drawing::Point(0, 20);
			this->pbBox13->Margin = System::Windows::Forms::Padding(0);
			this->pbBox13->Name = L"pbBox13";
			this->pbBox13->Size = System::Drawing::Size(120, 100);
			this->pbBox13->TabIndex = 0;
			this->pbBox13->TabStop = false;
			this->pbBox13->Click += gcnew System::EventHandler(this, &frmBoxes::pbBox_Click);
			this->pbBox13->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragDrop);
			this->pbBox13->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragEnter);
			this->pbBox13->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragOver);
			this->pbBox13->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_DragLeave);
			this->pbBox13->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBox_Paint);
			this->pbBox13->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBox_DoubleClick);
			this->pbBox13->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseEnter);
			this->pbBox13->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseLeave);
			this->pbBox13->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseHover);
			this->pbBox13->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBox_MouseMove);
			// 
			// lblBox13
			// 
			this->lblBox13->AutoSize = true;
			this->lblBox13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblBox13->Location = System::Drawing::Point(0, 0);
			this->lblBox13->Margin = System::Windows::Forms::Padding(0);
			this->lblBox13->Name = L"lblBox13";
			this->lblBox13->Size = System::Drawing::Size(120, 20);
			this->lblBox13->TabIndex = 1;
			this->lblBox13->Text = L"Box 13";
			this->lblBox13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlBox12
			// 
			this->tlBox12->ColumnCount = 1;
			this->tlBox12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox12->Controls->Add(this->pbBox12, 0, 1);
			this->tlBox12->Controls->Add(this->lblBox12, 0, 0);
			this->tlBox12->Location = System::Drawing::Point(0, 1320);
			this->tlBox12->Margin = System::Windows::Forms::Padding(0);
			this->tlBox12->Name = L"tlBox12";
			this->tlBox12->RowCount = 2;
			this->tlBox12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlBox12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox12->Size = System::Drawing::Size(120, 120);
			this->tlBox12->TabIndex = 3;
			// 
			// pbBox12
			// 
			this->pbBox12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbBox12->Location = System::Drawing::Point(0, 20);
			this->pbBox12->Margin = System::Windows::Forms::Padding(0);
			this->pbBox12->Name = L"pbBox12";
			this->pbBox12->Size = System::Drawing::Size(120, 100);
			this->pbBox12->TabIndex = 0;
			this->pbBox12->TabStop = false;
			this->pbBox12->Click += gcnew System::EventHandler(this, &frmBoxes::pbBox_Click);
			this->pbBox12->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragDrop);
			this->pbBox12->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragEnter);
			this->pbBox12->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragOver);
			this->pbBox12->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_DragLeave);
			this->pbBox12->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBox_Paint);
			this->pbBox12->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBox_DoubleClick);
			this->pbBox12->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseEnter);
			this->pbBox12->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseLeave);
			this->pbBox12->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseHover);
			this->pbBox12->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBox_MouseMove);
			// 
			// lblBox12
			// 
			this->lblBox12->AutoSize = true;
			this->lblBox12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblBox12->Location = System::Drawing::Point(0, 0);
			this->lblBox12->Margin = System::Windows::Forms::Padding(0);
			this->lblBox12->Name = L"lblBox12";
			this->lblBox12->Size = System::Drawing::Size(120, 20);
			this->lblBox12->TabIndex = 1;
			this->lblBox12->Text = L"Box 12";
			this->lblBox12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlBox11
			// 
			this->tlBox11->ColumnCount = 1;
			this->tlBox11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox11->Controls->Add(this->pbBox11, 0, 1);
			this->tlBox11->Controls->Add(this->lblBox11, 0, 0);
			this->tlBox11->Location = System::Drawing::Point(0, 1200);
			this->tlBox11->Margin = System::Windows::Forms::Padding(0);
			this->tlBox11->Name = L"tlBox11";
			this->tlBox11->RowCount = 2;
			this->tlBox11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlBox11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox11->Size = System::Drawing::Size(120, 120);
			this->tlBox11->TabIndex = 3;
			// 
			// pbBox11
			// 
			this->pbBox11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbBox11->Location = System::Drawing::Point(0, 20);
			this->pbBox11->Margin = System::Windows::Forms::Padding(0);
			this->pbBox11->Name = L"pbBox11";
			this->pbBox11->Size = System::Drawing::Size(120, 100);
			this->pbBox11->TabIndex = 0;
			this->pbBox11->TabStop = false;
			this->pbBox11->Click += gcnew System::EventHandler(this, &frmBoxes::pbBox_Click);
			this->pbBox11->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragDrop);
			this->pbBox11->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragEnter);
			this->pbBox11->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragOver);
			this->pbBox11->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_DragLeave);
			this->pbBox11->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBox_Paint);
			this->pbBox11->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBox_DoubleClick);
			this->pbBox11->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseEnter);
			this->pbBox11->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseLeave);
			this->pbBox11->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseHover);
			this->pbBox11->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBox_MouseMove);
			// 
			// lblBox11
			// 
			this->lblBox11->AutoSize = true;
			this->lblBox11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblBox11->Location = System::Drawing::Point(0, 0);
			this->lblBox11->Margin = System::Windows::Forms::Padding(0);
			this->lblBox11->Name = L"lblBox11";
			this->lblBox11->Size = System::Drawing::Size(120, 20);
			this->lblBox11->TabIndex = 1;
			this->lblBox11->Text = L"Box 11";
			this->lblBox11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlBox10
			// 
			this->tlBox10->ColumnCount = 1;
			this->tlBox10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox10->Controls->Add(this->pbBox10, 0, 1);
			this->tlBox10->Controls->Add(this->lblBox10, 0, 0);
			this->tlBox10->Location = System::Drawing::Point(0, 1080);
			this->tlBox10->Margin = System::Windows::Forms::Padding(0);
			this->tlBox10->Name = L"tlBox10";
			this->tlBox10->RowCount = 2;
			this->tlBox10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlBox10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox10->Size = System::Drawing::Size(120, 120);
			this->tlBox10->TabIndex = 3;
			// 
			// pbBox10
			// 
			this->pbBox10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbBox10->Location = System::Drawing::Point(0, 20);
			this->pbBox10->Margin = System::Windows::Forms::Padding(0);
			this->pbBox10->Name = L"pbBox10";
			this->pbBox10->Size = System::Drawing::Size(120, 100);
			this->pbBox10->TabIndex = 0;
			this->pbBox10->TabStop = false;
			this->pbBox10->Click += gcnew System::EventHandler(this, &frmBoxes::pbBox_Click);
			this->pbBox10->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragDrop);
			this->pbBox10->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragEnter);
			this->pbBox10->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragOver);
			this->pbBox10->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_DragLeave);
			this->pbBox10->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBox_Paint);
			this->pbBox10->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBox_DoubleClick);
			this->pbBox10->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseEnter);
			this->pbBox10->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseLeave);
			this->pbBox10->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseHover);
			this->pbBox10->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBox_MouseMove);
			// 
			// lblBox10
			// 
			this->lblBox10->AutoSize = true;
			this->lblBox10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblBox10->Location = System::Drawing::Point(0, 0);
			this->lblBox10->Margin = System::Windows::Forms::Padding(0);
			this->lblBox10->Name = L"lblBox10";
			this->lblBox10->Size = System::Drawing::Size(120, 20);
			this->lblBox10->TabIndex = 1;
			this->lblBox10->Text = L"Box 10";
			this->lblBox10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlBox09
			// 
			this->tlBox09->ColumnCount = 1;
			this->tlBox09->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox09->Controls->Add(this->pbBox09, 0, 1);
			this->tlBox09->Controls->Add(this->lblBox09, 0, 0);
			this->tlBox09->Location = System::Drawing::Point(0, 960);
			this->tlBox09->Margin = System::Windows::Forms::Padding(0);
			this->tlBox09->Name = L"tlBox09";
			this->tlBox09->RowCount = 2;
			this->tlBox09->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlBox09->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox09->Size = System::Drawing::Size(120, 120);
			this->tlBox09->TabIndex = 3;
			// 
			// pbBox09
			// 
			this->pbBox09->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbBox09->Location = System::Drawing::Point(0, 20);
			this->pbBox09->Margin = System::Windows::Forms::Padding(0);
			this->pbBox09->Name = L"pbBox09";
			this->pbBox09->Size = System::Drawing::Size(120, 100);
			this->pbBox09->TabIndex = 0;
			this->pbBox09->TabStop = false;
			this->pbBox09->Click += gcnew System::EventHandler(this, &frmBoxes::pbBox_Click);
			this->pbBox09->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragDrop);
			this->pbBox09->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragEnter);
			this->pbBox09->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragOver);
			this->pbBox09->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_DragLeave);
			this->pbBox09->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBox_Paint);
			this->pbBox09->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBox_DoubleClick);
			this->pbBox09->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseEnter);
			this->pbBox09->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseLeave);
			this->pbBox09->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseHover);
			this->pbBox09->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBox_MouseMove);
			// 
			// lblBox09
			// 
			this->lblBox09->AutoSize = true;
			this->lblBox09->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblBox09->Location = System::Drawing::Point(0, 0);
			this->lblBox09->Margin = System::Windows::Forms::Padding(0);
			this->lblBox09->Name = L"lblBox09";
			this->lblBox09->Size = System::Drawing::Size(120, 20);
			this->lblBox09->TabIndex = 1;
			this->lblBox09->Text = L"Box 09";
			this->lblBox09->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlBox08
			// 
			this->tlBox08->ColumnCount = 1;
			this->tlBox08->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox08->Controls->Add(this->pbBox08, 0, 1);
			this->tlBox08->Controls->Add(this->lblBox08, 0, 0);
			this->tlBox08->Location = System::Drawing::Point(0, 840);
			this->tlBox08->Margin = System::Windows::Forms::Padding(0);
			this->tlBox08->Name = L"tlBox08";
			this->tlBox08->RowCount = 2;
			this->tlBox08->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlBox08->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox08->Size = System::Drawing::Size(120, 120);
			this->tlBox08->TabIndex = 3;
			// 
			// pbBox08
			// 
			this->pbBox08->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbBox08->Location = System::Drawing::Point(0, 20);
			this->pbBox08->Margin = System::Windows::Forms::Padding(0);
			this->pbBox08->Name = L"pbBox08";
			this->pbBox08->Size = System::Drawing::Size(120, 100);
			this->pbBox08->TabIndex = 0;
			this->pbBox08->TabStop = false;
			this->pbBox08->Click += gcnew System::EventHandler(this, &frmBoxes::pbBox_Click);
			this->pbBox08->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragDrop);
			this->pbBox08->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragEnter);
			this->pbBox08->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragOver);
			this->pbBox08->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_DragLeave);
			this->pbBox08->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBox_Paint);
			this->pbBox08->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBox_DoubleClick);
			this->pbBox08->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseEnter);
			this->pbBox08->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseLeave);
			this->pbBox08->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseHover);
			this->pbBox08->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBox_MouseMove);
			// 
			// lblBox08
			// 
			this->lblBox08->AutoSize = true;
			this->lblBox08->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblBox08->Location = System::Drawing::Point(0, 0);
			this->lblBox08->Margin = System::Windows::Forms::Padding(0);
			this->lblBox08->Name = L"lblBox08";
			this->lblBox08->Size = System::Drawing::Size(120, 20);
			this->lblBox08->TabIndex = 1;
			this->lblBox08->Text = L"Box 08";
			this->lblBox08->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlBox07
			// 
			this->tlBox07->ColumnCount = 1;
			this->tlBox07->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox07->Controls->Add(this->pbBox07, 0, 1);
			this->tlBox07->Controls->Add(this->lblBox07, 0, 0);
			this->tlBox07->Location = System::Drawing::Point(0, 720);
			this->tlBox07->Margin = System::Windows::Forms::Padding(0);
			this->tlBox07->Name = L"tlBox07";
			this->tlBox07->RowCount = 2;
			this->tlBox07->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlBox07->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox07->Size = System::Drawing::Size(120, 120);
			this->tlBox07->TabIndex = 3;
			// 
			// pbBox07
			// 
			this->pbBox07->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbBox07->Location = System::Drawing::Point(0, 20);
			this->pbBox07->Margin = System::Windows::Forms::Padding(0);
			this->pbBox07->Name = L"pbBox07";
			this->pbBox07->Size = System::Drawing::Size(120, 100);
			this->pbBox07->TabIndex = 0;
			this->pbBox07->TabStop = false;
			this->pbBox07->Click += gcnew System::EventHandler(this, &frmBoxes::pbBox_Click);
			this->pbBox07->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragDrop);
			this->pbBox07->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragEnter);
			this->pbBox07->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragOver);
			this->pbBox07->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_DragLeave);
			this->pbBox07->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBox_Paint);
			this->pbBox07->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBox_DoubleClick);
			this->pbBox07->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseEnter);
			this->pbBox07->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseLeave);
			this->pbBox07->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseHover);
			this->pbBox07->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBox_MouseMove);
			// 
			// lblBox07
			// 
			this->lblBox07->AutoSize = true;
			this->lblBox07->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblBox07->Location = System::Drawing::Point(0, 0);
			this->lblBox07->Margin = System::Windows::Forms::Padding(0);
			this->lblBox07->Name = L"lblBox07";
			this->lblBox07->Size = System::Drawing::Size(120, 20);
			this->lblBox07->TabIndex = 1;
			this->lblBox07->Text = L"Box 07";
			this->lblBox07->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlBox06
			// 
			this->tlBox06->ColumnCount = 1;
			this->tlBox06->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox06->Controls->Add(this->pbBox06, 0, 1);
			this->tlBox06->Controls->Add(this->lblBox06, 0, 0);
			this->tlBox06->Location = System::Drawing::Point(0, 600);
			this->tlBox06->Margin = System::Windows::Forms::Padding(0);
			this->tlBox06->Name = L"tlBox06";
			this->tlBox06->RowCount = 2;
			this->tlBox06->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlBox06->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox06->Size = System::Drawing::Size(120, 120);
			this->tlBox06->TabIndex = 3;
			// 
			// pbBox06
			// 
			this->pbBox06->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbBox06->Location = System::Drawing::Point(0, 20);
			this->pbBox06->Margin = System::Windows::Forms::Padding(0);
			this->pbBox06->Name = L"pbBox06";
			this->pbBox06->Size = System::Drawing::Size(120, 100);
			this->pbBox06->TabIndex = 0;
			this->pbBox06->TabStop = false;
			this->pbBox06->Click += gcnew System::EventHandler(this, &frmBoxes::pbBox_Click);
			this->pbBox06->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragDrop);
			this->pbBox06->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragEnter);
			this->pbBox06->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragOver);
			this->pbBox06->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_DragLeave);
			this->pbBox06->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBox_Paint);
			this->pbBox06->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBox_DoubleClick);
			this->pbBox06->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseEnter);
			this->pbBox06->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseLeave);
			this->pbBox06->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseHover);
			this->pbBox06->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBox_MouseMove);
			// 
			// lblBox06
			// 
			this->lblBox06->AutoSize = true;
			this->lblBox06->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblBox06->Location = System::Drawing::Point(0, 0);
			this->lblBox06->Margin = System::Windows::Forms::Padding(0);
			this->lblBox06->Name = L"lblBox06";
			this->lblBox06->Size = System::Drawing::Size(120, 20);
			this->lblBox06->TabIndex = 1;
			this->lblBox06->Text = L"Box 06";
			this->lblBox06->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlBox05
			// 
			this->tlBox05->ColumnCount = 1;
			this->tlBox05->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox05->Controls->Add(this->pbBox05, 0, 1);
			this->tlBox05->Controls->Add(this->lblBox05, 0, 0);
			this->tlBox05->Location = System::Drawing::Point(0, 480);
			this->tlBox05->Margin = System::Windows::Forms::Padding(0);
			this->tlBox05->Name = L"tlBox05";
			this->tlBox05->RowCount = 2;
			this->tlBox05->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlBox05->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox05->Size = System::Drawing::Size(120, 120);
			this->tlBox05->TabIndex = 3;
			// 
			// pbBox05
			// 
			this->pbBox05->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbBox05->Location = System::Drawing::Point(0, 20);
			this->pbBox05->Margin = System::Windows::Forms::Padding(0);
			this->pbBox05->Name = L"pbBox05";
			this->pbBox05->Size = System::Drawing::Size(120, 100);
			this->pbBox05->TabIndex = 0;
			this->pbBox05->TabStop = false;
			this->pbBox05->Click += gcnew System::EventHandler(this, &frmBoxes::pbBox_Click);
			this->pbBox05->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragDrop);
			this->pbBox05->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragEnter);
			this->pbBox05->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragOver);
			this->pbBox05->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_DragLeave);
			this->pbBox05->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBox_Paint);
			this->pbBox05->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBox_DoubleClick);
			this->pbBox05->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseEnter);
			this->pbBox05->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseLeave);
			this->pbBox05->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseHover);
			this->pbBox05->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBox_MouseMove);
			// 
			// lblBox05
			// 
			this->lblBox05->AutoSize = true;
			this->lblBox05->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblBox05->Location = System::Drawing::Point(0, 0);
			this->lblBox05->Margin = System::Windows::Forms::Padding(0);
			this->lblBox05->Name = L"lblBox05";
			this->lblBox05->Size = System::Drawing::Size(120, 20);
			this->lblBox05->TabIndex = 1;
			this->lblBox05->Text = L"Box 05";
			this->lblBox05->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlBox04
			// 
			this->tlBox04->ColumnCount = 1;
			this->tlBox04->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox04->Controls->Add(this->pbBox04, 0, 1);
			this->tlBox04->Controls->Add(this->lblBox04, 0, 0);
			this->tlBox04->Location = System::Drawing::Point(0, 360);
			this->tlBox04->Margin = System::Windows::Forms::Padding(0);
			this->tlBox04->Name = L"tlBox04";
			this->tlBox04->RowCount = 2;
			this->tlBox04->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlBox04->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox04->Size = System::Drawing::Size(120, 120);
			this->tlBox04->TabIndex = 3;
			// 
			// pbBox04
			// 
			this->pbBox04->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbBox04->Location = System::Drawing::Point(0, 20);
			this->pbBox04->Margin = System::Windows::Forms::Padding(0);
			this->pbBox04->Name = L"pbBox04";
			this->pbBox04->Size = System::Drawing::Size(120, 100);
			this->pbBox04->TabIndex = 0;
			this->pbBox04->TabStop = false;
			this->pbBox04->Click += gcnew System::EventHandler(this, &frmBoxes::pbBox_Click);
			this->pbBox04->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragDrop);
			this->pbBox04->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragEnter);
			this->pbBox04->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragOver);
			this->pbBox04->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_DragLeave);
			this->pbBox04->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBox_Paint);
			this->pbBox04->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBox_DoubleClick);
			this->pbBox04->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseEnter);
			this->pbBox04->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseLeave);
			this->pbBox04->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseHover);
			this->pbBox04->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBox_MouseMove);
			// 
			// lblBox04
			// 
			this->lblBox04->AutoSize = true;
			this->lblBox04->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblBox04->Location = System::Drawing::Point(0, 0);
			this->lblBox04->Margin = System::Windows::Forms::Padding(0);
			this->lblBox04->Name = L"lblBox04";
			this->lblBox04->Size = System::Drawing::Size(120, 20);
			this->lblBox04->TabIndex = 1;
			this->lblBox04->Text = L"Box 04";
			this->lblBox04->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlBox03
			// 
			this->tlBox03->ColumnCount = 1;
			this->tlBox03->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox03->Controls->Add(this->pbBox03, 0, 1);
			this->tlBox03->Controls->Add(this->lblBox03, 0, 0);
			this->tlBox03->Location = System::Drawing::Point(0, 240);
			this->tlBox03->Margin = System::Windows::Forms::Padding(0);
			this->tlBox03->Name = L"tlBox03";
			this->tlBox03->RowCount = 2;
			this->tlBox03->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlBox03->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlBox03->Size = System::Drawing::Size(120, 120);
			this->tlBox03->TabIndex = 3;
			// 
			// pbBox03
			// 
			this->pbBox03->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbBox03->Location = System::Drawing::Point(0, 20);
			this->pbBox03->Margin = System::Windows::Forms::Padding(0);
			this->pbBox03->Name = L"pbBox03";
			this->pbBox03->Size = System::Drawing::Size(120, 100);
			this->pbBox03->TabIndex = 0;
			this->pbBox03->TabStop = false;
			this->pbBox03->Click += gcnew System::EventHandler(this, &frmBoxes::pbBox_Click);
			this->pbBox03->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragDrop);
			this->pbBox03->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragEnter);
			this->pbBox03->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragOver);
			this->pbBox03->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_DragLeave);
			this->pbBox03->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBox_Paint);
			this->pbBox03->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBox_DoubleClick);
			this->pbBox03->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseEnter);
			this->pbBox03->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseLeave);
			this->pbBox03->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseHover);
			this->pbBox03->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBox_MouseMove);
			// 
			// lblBox03
			// 
			this->lblBox03->AutoSize = true;
			this->lblBox03->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblBox03->Location = System::Drawing::Point(0, 0);
			this->lblBox03->Margin = System::Windows::Forms::Padding(0);
			this->lblBox03->Name = L"lblBox03";
			this->lblBox03->Size = System::Drawing::Size(120, 20);
			this->lblBox03->TabIndex = 1;
			this->lblBox03->Text = L"Box 03";
			this->lblBox03->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->pbBox01->Click += gcnew System::EventHandler(this, &frmBoxes::pbBox_Click);
			this->pbBox01->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragDrop);
			this->pbBox01->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragEnter);
			this->pbBox01->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragOver);
			this->pbBox01->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_DragLeave);
			this->pbBox01->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBox_Paint);
			this->pbBox01->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBox_DoubleClick);
			this->pbBox01->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseEnter);
			this->pbBox01->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseLeave);
			this->pbBox01->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseHover);
			this->pbBox01->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBox_MouseMove);
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
			this->lblBox01->Text = L"Box 01";
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
			this->pbBox02->Click += gcnew System::EventHandler(this, &frmBoxes::pbBox_Click);
			this->pbBox02->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragDrop);
			this->pbBox02->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragEnter);
			this->pbBox02->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &frmBoxes::pbBox_DragOver);
			this->pbBox02->DragLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_DragLeave);
			this->pbBox02->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmBoxes::pbBox_Paint);
			this->pbBox02->DoubleClick += gcnew System::EventHandler(this, &frmBoxes::pbBox_DoubleClick);
			this->pbBox02->MouseEnter += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseEnter);
			this->pbBox02->MouseLeave += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseLeave);
			this->pbBox02->MouseHover += gcnew System::EventHandler(this, &frmBoxes::pbBox_MouseHover);
			this->pbBox02->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBoxes::pbBox_MouseMove);
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
			this->lblBox02->Text = L"Box 02";
			this->lblBox02->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// fileSave
			// 
			this->fileSave->Filter = L"SAV Files|*.sav|All Files|*.*";
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->reportToolStripMenuItem});
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->viewToolStripMenuItem->Text = L"View";
			// 
			// reportToolStripMenuItem
			// 
			this->reportToolStripMenuItem->Name = L"reportToolStripMenuItem";
			this->reportToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->reportToolStripMenuItem->Text = L"Report";
			this->reportToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmBoxes::reportToolStripMenuItem_Click);
			// 
			// frmBoxes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(361, 287);
			this->Controls->Add(this->scMain);
			this->Controls->Add(this->msMain);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->msMain;
			this->MaximizeBox = false;
			this->Name = L"frmBoxes";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PKMDS: Desktop Edition";
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
			this->tlBox24->ResumeLayout(false);
			this->tlBox24->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox24))->EndInit();
			this->tlBox23->ResumeLayout(false);
			this->tlBox23->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox23))->EndInit();
			this->tlBox22->ResumeLayout(false);
			this->tlBox22->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox22))->EndInit();
			this->tlBox21->ResumeLayout(false);
			this->tlBox21->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox21))->EndInit();
			this->tlBox20->ResumeLayout(false);
			this->tlBox20->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox20))->EndInit();
			this->tlBox19->ResumeLayout(false);
			this->tlBox19->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox19))->EndInit();
			this->tlBox18->ResumeLayout(false);
			this->tlBox18->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox18))->EndInit();
			this->tlBox17->ResumeLayout(false);
			this->tlBox17->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox17))->EndInit();
			this->tlBox16->ResumeLayout(false);
			this->tlBox16->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox16))->EndInit();
			this->tlBox15->ResumeLayout(false);
			this->tlBox15->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox15))->EndInit();
			this->tlBox14->ResumeLayout(false);
			this->tlBox14->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox14))->EndInit();
			this->tlBox13->ResumeLayout(false);
			this->tlBox13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox13))->EndInit();
			this->tlBox12->ResumeLayout(false);
			this->tlBox12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox12))->EndInit();
			this->tlBox11->ResumeLayout(false);
			this->tlBox11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox11))->EndInit();
			this->tlBox10->ResumeLayout(false);
			this->tlBox10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox10))->EndInit();
			this->tlBox09->ResumeLayout(false);
			this->tlBox09->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox09))->EndInit();
			this->tlBox08->ResumeLayout(false);
			this->tlBox08->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox08))->EndInit();
			this->tlBox07->ResumeLayout(false);
			this->tlBox07->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox07))->EndInit();
			this->tlBox06->ResumeLayout(false);
			this->tlBox06->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox06))->EndInit();
			this->tlBox05->ResumeLayout(false);
			this->tlBox05->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox05))->EndInit();
			this->tlBox04->ResumeLayout(false);
			this->tlBox04->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox04))->EndInit();
			this->tlBox03->ResumeLayout(false);
			this->tlBox03->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox03))->EndInit();
			this->tlBox01->ResumeLayout(false);
			this->tlBox01->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox01))->EndInit();
			this->tlBox02->ResumeLayout(false);
			this->tlBox02->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbBox02))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		frmPKMViewer ^ pkmviewer;
		VS_SQLite ^ vsqlite;
		bw2sav_obj * sav;
		party_pkm * ppkm;
		pokemon_obj * pkm;
		pokemon_obj * a;
		pokemon_obj * b;
		box_obj * form_box;
		bool savloaded;
		bool dragpkmisparty;
	private: System::Void frmBoxes_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 vsqlite = gcnew VS_SQLite();
				 sav = new bw2sav_obj;
				 ppkm = new party_pkm;
				 pkm = new pokemon_obj;
				 a = new pokemon_obj;
				 b = new pokemon_obj;
				 savloaded = false;
				 form_box = new box_obj;
				 pbBoxSlot01->AllowDrop = true;
				 pbBoxSlot02->AllowDrop = true;
				 pbBoxSlot03->AllowDrop = true;
				 pbBoxSlot04->AllowDrop = true;
				 pbBoxSlot05->AllowDrop = true;
				 pbBoxSlot06->AllowDrop = true;
				 pbBoxSlot07->AllowDrop = true;
				 pbBoxSlot08->AllowDrop = true;
				 pbBoxSlot09->AllowDrop = true;
				 pbBoxSlot10->AllowDrop = true;
				 pbBoxSlot11->AllowDrop = true;
				 pbBoxSlot12->AllowDrop = true;
				 pbBoxSlot13->AllowDrop = true;
				 pbBoxSlot14->AllowDrop = true;
				 pbBoxSlot15->AllowDrop = true;
				 pbBoxSlot16->AllowDrop = true;
				 pbBoxSlot17->AllowDrop = true;
				 pbBoxSlot18->AllowDrop = true;
				 pbBoxSlot19->AllowDrop = true;
				 pbBoxSlot20->AllowDrop = true;
				 pbBoxSlot21->AllowDrop = true;
				 pbBoxSlot22->AllowDrop = true;
				 pbBoxSlot23->AllowDrop = true;
				 pbBoxSlot24->AllowDrop = true;
				 pbBoxSlot25->AllowDrop = true;
				 pbBoxSlot26->AllowDrop = true;
				 pbBoxSlot27->AllowDrop = true;
				 pbBoxSlot28->AllowDrop = true;
				 pbBoxSlot29->AllowDrop = true;
				 pbBoxSlot30->AllowDrop = true;
				 pbPartySlot01->AllowDrop = true;
				 pbPartySlot02->AllowDrop = true;
				 pbPartySlot03->AllowDrop = true;
				 pbPartySlot04->AllowDrop = true;
				 pbPartySlot05->AllowDrop = true;
				 pbPartySlot06->AllowDrop = true;
				 dragpkmisparty = false;
				 //sav = 0;
			 }
			 void refreshbox()
			 {
				 for each (System::Windows::Forms::PictureBox^ pb in tlPCBox->Controls)
				 {
					 pb->Image = nullptr;
					 int slot = int::Parse(pb->Name->Substring(9));
					 pokemon_obj * pkm_ = new pokemon_obj;
					 pkm_ = &(form_box->pokemon[slot-1]);
					 if(!((bool)pkm_->isboxdatadecrypted))
					 {
						 decryptpkm(pkm_);
					 }
					 if(pkm_->species != 0)
					 {
						 std::ostringstream o;
						 geticonsql(o,pkm_);
						 pb->Image = vsqlite->getSQLImage(o.str());
					 }
				 }
			 }
			 void refreshparty()
			 {
				 for each (System::Windows::Forms::PictureBox^ pb in tlParty->Controls)
				 {
					 pb->Image = nullptr;
					 uint16 slot = (uint16)(int::Parse(pb->Name->Substring(11)));
					 if(slot <= sav->cur.party.size)
					 {
						 party_pkm * ppkm_ = new party_pkm;
						 pokemon_obj * pkm_ = new pokemon_obj;
						 ppkm_ = &(sav->cur.party.pokemon[slot-1]);
						 pkm_ = &(ppkm_->pkm_data);
						 if(!((bool)ppkm_->pkm_data.ispartydatadecrypted))
						 {
							 decryptpkm(ppkm_);
						 }
						 if(pkm_->species != 0)
						 {
							 std::ostringstream o;
							 geticonsql(o,pkm_);
							 pb->Image = vsqlite->getSQLImage(o.str());
						 }
					 }
				 }

			 }
			 void changebox(int box)
			 {
				 clearpartyslotselection();
				 clearboxslotselection();
				 std::ostringstream wpsql;
				 sav->cur.curbox = box;
				 getwallpapersql(wpsql,(int)(sav->cur.boxwallpapers[box]));
				 tlPCBox->BackgroundImage = vsqlite->getSQLImage(wpsql.str());
				 form_box = &(sav->cur.boxes[box]);
				 refreshbox();
				 pkmviewer = gcnew frmPKMViewer();
			 }
			 void setboxnames()
			 {
				 for each (System::Windows::Forms::TableLayoutPanel^ tl in this->tlPCBoxes->Controls)
				 {
					 for each (System::Windows::Forms::Control^ cont in tl->Controls)
					 {
						 if(cont->Name->Substring(0,6) == "lblBox")
						 {
							 System::Windows::Forms::Label^ lbl = (System::Windows::Forms::Label^)cont;
							 int box = 0;
							 if(int::TryParse(lbl->Name->Substring(lbl->Name->Length - 2, 2), box))
							 {
								 lbl->Text = gcnew System::String(sav->cur.boxnames[box-1]);
							 }
						 }
					 }
				 }
			 }
			 void clearboxselection(bool removetags)
			 {
				 for each (System::Windows::Forms::TableLayoutPanel^ tl in this->tlPCBoxes->Controls)
				 {
					 for each (System::Windows::Forms::Control^ cont in tl->Controls)
					 {
						 if(cont->Name->Substring(0,5) == "pbBox")
						 {
							 System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)cont;
							 if(removetags){pb->Tag = "";}
							 if(pb->Tag != "Selected")
							 {
								 pb->BorderStyle = BorderStyle::None;
							 }
						 }
					 }
				 }
			 }
			 void clearboxslotselection()
			 {
				 for each (System::Windows::Forms::PictureBox^ pb in tlPCBox->Controls)
				 {
					 //pb->BorderStyle = BorderStyle::None;
					 pb->BackColor = System::Drawing::Color::Transparent;
					 pb->Tag = "";
				 }

			 }
			 void clearpartyslotselection()
			 {
				 for each (System::Windows::Forms::PictureBox^ pb in tlParty->Controls)
				 {
					 //pb->BorderStyle = BorderStyle::None;
					 pb->BackColor = System::Drawing::Color::Transparent;
					 pb->Tag = "";
				 }

			 }
			 void displaypkm(pokemon_obj * pkm_)
			 {
				 pkmviewer->setpkm(pkm_);
				 pkmviewer->displayPKM();
				 pkmviewer->ShowDialog();
				 refreshbox();
				 refreshparty();
			 }
	private: System::Void loadSAVToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 fileOpen->FileName = "";
				 savloaded = false;
				 saveToolStripMenuItem->Enabled = false;
				 if((fileOpen->ShowDialog() != System::Windows::Forms::DialogResult::Cancel) & (fileOpen->FileName != ""))
				 {
					 read(marshal_as<std::string>(fileOpen->FileName->Trim()).c_str(),sav);
				 }
				 savloaded = true;
				 saveToolStripMenuItem->Enabled = true;
				 setboxnames();
				 changebox(sav->cur.curbox);
				 refreshparty();
			 }
	private: System::Void pbBoxSlot_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(savloaded)
				 {

				 }
			 }
	private: System::Void pbBoxSlot_MouseEnter(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(savloaded)
				 {
					 ((System::Windows::Forms::PictureBox^)(sender))->BackColor = System::Drawing::Color::Orange;
				 }
			 }
	private: System::Void pbBoxSlot_MouseHover(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(savloaded)
				 {
					 System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)sender;

				 }
			 }
	private: System::Void pbBoxSlot_MouseLeave(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(savloaded)
				 {
					 ((System::Windows::Forms::PictureBox^)(sender))->BackColor = System::Drawing::Color::Transparent;
				 }
			 }
	private: System::Void pbBoxSlot_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
			 {
				 if(savloaded)
				 {
					 System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)sender;

				 }
			 }
	private: System::Void pbBoxSlot_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e)
			 {
				 if(savloaded)
				 {
					 System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)sender;
					 int slot;
					 if(int::TryParse(pb->Name->Substring(pb->Name->Length - 2, 2), slot))
					 {
						 pkm = &(form_box->pokemon[slot-1]);
					 }
					 IntPtr ^ ipt = safe_cast<IntPtr^>(e->Data->GetData("Pokemon",true));
					 pokemon_obj * apkm = reinterpret_cast<pokemon_obj*>(ipt->ToPointer());
					 if(dragpkmisparty)
					 {
						 if((pkm->species == Species::NOTHING) & (apkm->species != Species::NOTHING))
						 {
							 sav->cur.party.size--;
						 }
						 if((pkm->species != Species::NOTHING) & (apkm->species == Species::NOTHING))
						 {
							 sav->cur.party.size++;
						 }
					 }
					 swap_pkm(pkm,apkm);
					 refreshparty();
					 refreshbox();
				 }
			 }
	private: System::Void pbBoxSlot_DoubleClick(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(savloaded)
				 {
					 clearpartyslotselection();
					 clearboxslotselection();
					 System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)sender;
					 //pb->BorderStyle = BorderStyle::FixedSingle;
					 pb->Tag = "Selected";
					 int slot;
					 if(int::TryParse(pb->Name->Substring(pb->Name->Length - 2, 2), slot))
					 {
						 pkm = &(form_box->pokemon[slot-1]);
						 if(!((bool)pkm->isboxdatadecrypted))
						 {
							 decryptpkm(pkm);
						 }
						 if(pkm->species != 0)
						 {
							 displaypkm(pkm);
						 }
					 }
				 }
			 }
	private: System::Void pbBoxSlot_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e)
			 {
				 if(savloaded)
				 {
					 if(e->Data->GetDataPresent("Pokemon"))
					 {
						 e->Effect = DragDropEffects::All;
					 }
					 else
					 {
						 e->Effect = DragDropEffects::None;
					 }
				 }
			 }
	private: System::Void pbBoxSlot_DragLeave(System::Object^  sender, System::EventArgs^  e) 
			 {
				 //if(savloaded)
				 //{
				 // System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)sender;

				 //}
			 }
	private: System::Void pbBoxSlot_DragOver(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) 
			 {
				 //if(savloaded)
				 //{
				 // System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)sender;

				 //}
			 }
	private: System::Void pbBoxSlot_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e)
			 {
				 //if(savloaded)
				 //{
				 // System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)sender;
				 // if(pb->Tag == "Selected")
				 // {
				 //	 pb->BorderStyle = BorderStyle::FixedSingle;
				 //	 //Graphics ^ g = e->Graphics;
				 //	 ////Dim g As Graphics = e.Graphics
				 //	 //Pen ^ pen = gcnew Pen(Color::Red,2.0);
				 //	 ////Dim pen As New Pen(Color.Red, 2.0)
				 //	 //g->DrawRectangle(pen,Drawing::Rectangle(pb->Location, pb->Size));
				 //	 ////g.DrawRectangle(pen, New Rectangle(Picturebox1.Location, Picturebox1.Size))
				 //	 ////pen->Dispose();
				 //	 ////pen.Dispose()
				 // }
				 //}
			 }
	private: System::Void pbBoxSlot_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
			 {
				 if(savloaded)
				 {
					 if(e->Clicks <= 1)
					 {
						 dragpkmisparty = false;
						 System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)sender;
						 int slot;
						 if(int::TryParse(pb->Name->Substring(pb->Name->Length - 2, 2), slot))
						 {
							 a = &(form_box->pokemon[slot-1]);
							 if(!((bool)a->isboxdatadecrypted))
							 {
								 decryptpkm(a);
							 }
							 if(a->species != 0)
							 {
								 IntPtr ^ ipt = gcnew IntPtr(a);
								 DataObject ^ d = gcnew DataObject("Pokemon",ipt);
								 /*if (*/DoDragDrop(d, DragDropEffects::Move)/* == DragDropEffects::Move)*/;
								 //{

								 //}
							 }
						 }
					 }
				 }
			 }
	private: System::Void pbPartySlot_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(savloaded)
				 {

				 }
			 }
	private: System::Void pbPartySlot_DoubleClick(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(savloaded)
				 {
					 clearpartyslotselection();
					 clearboxslotselection();
					 System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)sender;
					 //pb->BorderStyle = BorderStyle::FixedSingle;
					 pb->Tag = "Selected";
					 int slot = 0;
					 if(int::TryParse(pb->Name->Substring(pb->Name->Length - 2, 2), slot))
					 {
						 if((uint16)(slot-1) < sav->cur.party.size)
						 {
							 ppkm = &(sav->cur.party.pokemon[slot-1]);
							 if(!((bool)ppkm->pkm_data.isboxdatadecrypted))
							 {
								 decryptpkm(ppkm);
							 }
							 pkm = &(ppkm->pkm_data);
							 if(pkm->species != 0)
							 {
								 //MessageBox::Show(gcnew System::String(lookuppkmname(pkm).c_str()));
								 displaypkm(pkm);
							 }
						 }
					 }
				 }
			 }
	private: System::Void pbPartySlot_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) 
			 {
				 if(savloaded)
				 {
					 System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)sender;
					 int slot;
					 if(int::TryParse(pb->Name->Substring(pb->Name->Length - 2, 2), slot))
					 {
						 pkm = &(sav->cur.party.pokemon[slot-1].pkm_data);
					 }
					 IntPtr ^ ipt = safe_cast<IntPtr^>(e->Data->GetData("Pokemon",true));
					 pokemon_obj * apkm = reinterpret_cast<pokemon_obj*>(ipt->ToPointer());
					 if(!dragpkmisparty)
					 {
						 if((pkm->species == Species::NOTHING) & (apkm->species != Species::NOTHING))
						 {
							 sav->cur.party.size++;
						 }
						 if((pkm->species != Species::NOTHING) & (apkm->species == Species::NOTHING))
						 {
							 sav->cur.party.size--;
						 }
					 }
					 swap_pkm(pkm,apkm);
					 refreshparty();
					 refreshbox();
				 }
			 }
	private: System::Void pbPartySlot_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e)
			 {
				 if(savloaded)
				 {
					 if(e->Data->GetDataPresent("Pokemon"))
					 {
						 e->Effect = DragDropEffects::All;
					 }
					 else
					 {
						 e->Effect = DragDropEffects::None;
					 }
				 }
			 }
	private: System::Void pbPartySlot_DragLeave(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(savloaded)
				 {
					 System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)sender;

				 }
			 }
	private: System::Void pbPartySlot_DragOver(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) 
			 {
				 if(savloaded)
				 {
					 System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)sender;

				 }
			 }
	private: System::Void pbPartySlot_MouseEnter(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(savloaded)
				 {
					 ((System::Windows::Forms::PictureBox^)(sender))->BackColor = System::Drawing::Color::Orange;
				 }
			 }
	private: System::Void pbPartySlot_MouseHover(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(savloaded)
				 {
					 System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)sender;

				 }
			 }
	private: System::Void pbPartySlot_MouseLeave(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(savloaded)
				 {
					 ((System::Windows::Forms::PictureBox^)(sender))->BackColor = System::Drawing::Color::Transparent;
				 }
			 }
	private: System::Void pbPartySlot_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
			 {
				 if(savloaded)
				 {
					 System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)sender;

				 }
			 }
	private: System::Void pbPartySlot_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) 
			 {
				 //if(savloaded)
				 //{
				 // System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)sender;
				 //}

			 }
	private: System::Void pbPartySlot_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
			 {
				 if(savloaded)
				 {
					 if(e->Clicks <= 1)
					 {
						 dragpkmisparty = true;
						 System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)sender;
						 int slot;
						 if(int::TryParse(pb->Name->Substring(pb->Name->Length - 2, 2), slot))
						 {
							 a = &(sav->cur.party.pokemon[slot-1].pkm_data);
							 if(!((bool)a->isboxdatadecrypted))
							 {
								 decryptpkm(a);
							 }
							 if(a->species != 0)
							 {
								 IntPtr ^ ipt = gcnew IntPtr(a);
								 DataObject ^ d = gcnew DataObject("Pokemon",ipt);
								 /*if (*/DoDragDrop(d, DragDropEffects::Move)/* == DragDropEffects::Move)*/;
								 //{

								 //}
							 }
						 }
					 }
				 }
			 }
	private: System::Void pbBox_MouseEnter(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(savloaded)
				 {
					 System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)sender;
					 pb->BorderStyle = BorderStyle::FixedSingle;
				 }
			 }
	private: System::Void pbBox_MouseHover(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(savloaded)
				 {
					 System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)sender;

				 }
			 }
	private: System::Void pbBox_MouseLeave(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(savloaded)
				 {
					 System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)sender;
					 if(pb->Tag != "Selected")
					 {
						 pb->BorderStyle = BorderStyle::None;
					 }
				 }
			 }
	private: System::Void pbBox_DoubleClick(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(savloaded)
				 {
					 System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)sender;
					 clearboxselection(true);
					 pb->Tag = "Selected";
					 pb->BorderStyle = BorderStyle::FixedSingle;
					 int box;
					 if(int::TryParse(pb->Name->Substring(pb->Name->Length - 2, 2), box))
					 {
						 box--;
						 changebox(box);
					 }
				 }
			 }
	private: System::Void pbBox_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e)
			 {
				 if(savloaded)
				 {
					 System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)sender;

				 }
			 }
	private: System::Void pbBox_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
			 {
				 if(savloaded)
				 {
					 System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)sender;
					 pb->BorderStyle = BorderStyle::FixedSingle;
				 }
			 }
	private: System::Void pbBox_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e)
			 {
				 if(savloaded)
				 {
					 System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)sender;

				 }
			 }
	private: System::Void pbBox_DragLeave(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(savloaded)
				 {
					 System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)sender;

				 }
			 }
	private: System::Void pbBox_DragOver(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) 
			 {
				 if(savloaded)
				 {
					 System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)sender;

				 }
			 }
	private: System::Void pbBox_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(savloaded)
				 {

				 }
			 }
	private: System::Void pbBox_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e)
			 {
				 if(savloaded)
				 {
					 System::Windows::Forms::PictureBox^ pb = (System::Windows::Forms::PictureBox^)sender;
				 }

			 }
	private: System::Void scMain_Panel2_MouseEnter(System::Object^  sender, System::EventArgs^  e) 
			 {
				 clearboxselection(false);
			 }
	private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 fileSave->FileName = "";
				 if((fileSave->ShowDialog() != System::Windows::Forms::DialogResult::Cancel) & (fileSave->FileName != ""))
				 {
					 bw2sav_obj * savout = new bw2sav_obj;
					 *savout = *sav;
					 bool isbw2 = savisbw2(savout);
					 savout->cur.block1checksum = getchecksum(&(savout->cur),0x0,0x3e0);
					 for(uint32 pslot = 0; pslot < savout->cur.party.size; pslot++)
					 {
						 if((bool)(savout->cur.party.pokemon[pslot].pkm_data.ispartydatadecrypted) && (bool)(savout->cur.party.pokemon[pslot].pkm_data.isboxdatadecrypted))
						 {
							 encryptpkm(&(savout->cur.party.pokemon[pslot]));
						 }
						 if((bool)(savout->cur.party.pokemon[pslot].pkm_data.isboxdatadecrypted))
						 {
							 encryptpkm(&(savout->cur.party.pokemon[pslot].pkm_data));
						 }
					 }
					 calcpartychecksum(&(savout->cur));
					 for(int boxnum = 0; boxnum < 24; boxnum++)
					 {
						 for(int boxslot = 0; boxslot < 30; boxslot++)
						 {
							 if((bool)(savout->cur.boxes[boxnum].pokemon[boxslot].isboxdatadecrypted))
							 {
								 encryptpkm(&(savout->cur.boxes[boxnum].pokemon[boxslot]));
							 }
						 }
						 calcboxchecksum(&(savout->cur),boxnum,isbw2);
					 }
					 fixsavchecksum(savout);
					 write(marshal_as<std::string>(fileSave->FileName).c_str(),savout);
				 }
			 }
	private: System::Void reportToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 PKMDS_Desktop_Win_2010::pkmdataviewer^ dataviewer = gcnew PKMDS_Desktop_Win_2010::pkmdataviewer();
				 dataviewer->setsav(sav);
				 dataviewer->ShowDialog();
			 }
};
}
