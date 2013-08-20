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
	private: System::Windows::Forms::TableLayoutPanel^  tlPCBoxes;
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
			this->tlPCBoxes = (gcnew System::Windows::Forms::TableLayoutPanel());
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
			this->tlPCBoxes->SuspendLayout();
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
			this->SuspendLayout();
			// 
			// tlPCBoxes
			// 
			this->tlPCBoxes->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tlPCBoxes->ColumnCount = 6;
			this->tlPCBoxes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlPCBoxes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlPCBoxes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlPCBoxes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlPCBoxes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlPCBoxes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot30, 5, 4);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot29, 4, 4);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot28, 3, 4);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot27, 2, 4);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot26, 1, 4);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot25, 0, 4);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot24, 5, 3);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot23, 4, 3);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot22, 3, 3);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot21, 2, 3);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot20, 1, 3);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot19, 0, 3);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot18, 5, 2);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot17, 4, 2);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot16, 3, 2);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot15, 2, 2);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot14, 1, 2);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot13, 0, 2);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot12, 5, 1);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot11, 4, 1);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot10, 3, 1);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot09, 2, 1);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot08, 1, 1);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot07, 0, 1);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot06, 5, 0);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot05, 4, 0);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot04, 3, 0);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot03, 2, 0);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot02, 1, 0);
			this->tlPCBoxes->Controls->Add(this->pbBoxSlot01, 0, 0);
			this->tlPCBoxes->Location = System::Drawing::Point(6, 19);
			this->tlPCBoxes->Name = L"tlPCBoxes";
			this->tlPCBoxes->RowCount = 5;
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tlPCBoxes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tlPCBoxes->Size = System::Drawing::Size(192, 160);
			this->tlPCBoxes->TabIndex = 2;
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
			this->msMain->Size = System::Drawing::Size(383, 24);
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
			this->loadSAVToolStripMenuItem->Size = System::Drawing::Size(152, 22);
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
			this->gbParty->Location = System::Drawing::Point(12, 27);
			this->gbParty->Name = L"gbParty";
			this->gbParty->Size = System::Drawing::Size(204, 61);
			this->gbParty->TabIndex = 3;
			this->gbParty->TabStop = false;
			this->gbParty->Text = L"Party";
			// 
			// gbBox
			// 
			this->gbBox->Controls->Add(this->tlPCBoxes);
			this->gbBox->Location = System::Drawing::Point(12, 94);
			this->gbBox->Name = L"gbBox";
			this->gbBox->Size = System::Drawing::Size(204, 185);
			this->gbBox->TabIndex = 4;
			this->gbBox->TabStop = false;
			this->gbBox->Text = L"PC Storage";
			// 
			// frmBoxes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(383, 286);
			this->Controls->Add(this->gbBox);
			this->Controls->Add(this->gbParty);
			this->Controls->Add(this->msMain);
			this->MainMenuStrip = this->msMain;
			this->Name = L"frmBoxes";
			this->Text = L"PKMDS: Desktop Windows";
			this->Load += gcnew System::EventHandler(this, &frmBoxes::frmBoxes_Load);
			this->tlPCBoxes->ResumeLayout(false);
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
				 tlPCBoxes->BackgroundImage = vsqlite->getSQLImage(wpsql.str());
				 for each (System::Windows::Forms::PictureBox^ pb in tlPCBoxes->Controls)
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

