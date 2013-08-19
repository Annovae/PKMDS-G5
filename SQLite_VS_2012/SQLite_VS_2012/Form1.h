#pragma once
#include "../../Visual_Studio/vs_sqlite.h"
using namespace System::Data::SQLite;
namespace SQLite_VS_2012 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnTest;

	private: System::Windows::Forms::PictureBox^  pbTest;
	private: System::Windows::Forms::TextBox^  txtTest;
	private: System::Windows::Forms::RadioButton^  rbVeekun;
	private: System::Windows::Forms::RadioButton^  rbImage;
	private: System::Windows::Forms::DataGridView^  dgData;
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
			this->btnTest = (gcnew System::Windows::Forms::Button());
			this->pbTest = (gcnew System::Windows::Forms::PictureBox());
			this->txtTest = (gcnew System::Windows::Forms::TextBox());
			this->rbVeekun = (gcnew System::Windows::Forms::RadioButton());
			this->rbImage = (gcnew System::Windows::Forms::RadioButton());
			this->dgData = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbTest))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgData))->BeginInit();
			this->SuspendLayout();
			// 
			// btnTest
			// 
			this->btnTest->Location = System::Drawing::Point(384, 58);
			this->btnTest->Name = L"btnTest";
			this->btnTest->Size = System::Drawing::Size(76, 20);
			this->btnTest->TabIndex = 3;
			this->btnTest->Text = L"button1";
			this->btnTest->UseVisualStyleBackColor = true;
			this->btnTest->Click += gcnew System::EventHandler(this, &Form1::btnTest_Click);
			// 
			// pbTest
			// 
			this->pbTest->Location = System::Drawing::Point(278, 12);
			this->pbTest->Name = L"pbTest";
			this->pbTest->Size = System::Drawing::Size(100, 100);
			this->pbTest->TabIndex = 2;
			this->pbTest->TabStop = false;
			// 
			// txtTest
			// 
			this->txtTest->Location = System::Drawing::Point(12, 12);
			this->txtTest->Multiline = true;
			this->txtTest->Name = L"txtTest";
			this->txtTest->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->txtTest->Size = System::Drawing::Size(260, 100);
			this->txtTest->TabIndex = 0;
			// 
			// rbVeekun
			// 
			this->rbVeekun->AutoSize = true;
			this->rbVeekun->Checked = true;
			this->rbVeekun->Location = System::Drawing::Point(384, 12);
			this->rbVeekun->Name = L"rbVeekun";
			this->rbVeekun->Size = System::Drawing::Size(62, 17);
			this->rbVeekun->TabIndex = 1;
			this->rbVeekun->TabStop = true;
			this->rbVeekun->Text = L"Veekun";
			this->rbVeekun->UseVisualStyleBackColor = true;
			// 
			// rbImage
			// 
			this->rbImage->AutoSize = true;
			this->rbImage->Location = System::Drawing::Point(384, 35);
			this->rbImage->Name = L"rbImage";
			this->rbImage->Size = System::Drawing::Size(54, 17);
			this->rbImage->TabIndex = 2;
			this->rbImage->Text = L"Image";
			this->rbImage->UseVisualStyleBackColor = true;
			// 
			// dgData
			// 
			this->dgData->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgData->Location = System::Drawing::Point(13, 118);
			this->dgData->Name = L"dgData";
			this->dgData->Size = System::Drawing::Size(786, 479);
			this->dgData->TabIndex = 5;
			// 
			// Form1
			// 
			this->AcceptButton = this->btnTest;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(811, 609);
			this->Controls->Add(this->dgData);
			this->Controls->Add(this->rbImage);
			this->Controls->Add(this->rbVeekun);
			this->Controls->Add(this->txtTest);
			this->Controls->Add(this->pbTest);
			this->Controls->Add(this->btnTest);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbTest))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgData))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		VS_SQLite ^ vsqlite;
	private: System::Void btnTest_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 try
				 {
					 if(this->rbVeekun->Checked)
					 {
						 dgData->DataSource = vsqlite->getSQLDS(txtTest->Text)->Tables[0];
					 }
					 else
					 {
						 this->pbTest->Image = vsqlite->getSQLImage(txtTest->Text);
					 }
				 }
				 catch(...)
				 {

				 }
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e)
			 {
				 vsqlite = gcnew VS_SQLite();
			 }
	};
}
