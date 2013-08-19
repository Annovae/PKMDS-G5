#pragma once

#include "../../Visual_Studio/vs_sqlite.h"

namespace SQLite_VS_2010 {

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
	protected: 
	private: System::Windows::Forms::PictureBox^  pbTest;
	private: System::Windows::Forms::Label^  lblTest;

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
			this->lblTest = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbTest))->BeginInit();
			this->SuspendLayout();
			// 
			// btnTest
			// 
			this->btnTest->Location = System::Drawing::Point(12, 12);
			this->btnTest->Name = L"btnTest";
			this->btnTest->Size = System::Drawing::Size(75, 23);
			this->btnTest->TabIndex = 0;
			this->btnTest->Text = L"button1";
			this->btnTest->UseVisualStyleBackColor = true;
			this->btnTest->Click += gcnew System::EventHandler(this, &Form1::btnTest_Click);
			// 
			// pbTest
			// 
			this->pbTest->Location = System::Drawing::Point(12, 150);
			this->pbTest->Name = L"pbTest";
			this->pbTest->Size = System::Drawing::Size(100, 100);
			this->pbTest->TabIndex = 1;
			this->pbTest->TabStop = false;
			// 
			// lblTest
			// 
			this->lblTest->AutoSize = true;
			this->lblTest->Location = System::Drawing::Point(13, 42);
			this->lblTest->Name = L"lblTest";
			this->lblTest->Size = System::Drawing::Size(35, 13);
			this->lblTest->TabIndex = 2;
			this->lblTest->Text = L"label1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->lblTest);
			this->Controls->Add(this->pbTest);
			this->Controls->Add(this->btnTest);
			this->Name = L"Form1";
			this->Text = L"Main Form";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbTest))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		VS_SQLite ^ vsqlite;
	private: System::Void btnTest_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 bw2sav_obj * sav = new bw2sav_obj();
				 read("../../Test Sav/TEST SAV.sav",sav);
				 pokemon_obj * pkm = new pokemon_obj();
				 pkm = &(sav->cur.boxes[0].pokemon[0]);
				 decryptpkm(pkm);
				 //lblTest->Text = vsqlite->fromSTD(lookuppkmname(pkm));
				 lblTest->Text = vsqlite->fromSTD(pkm->otname);
				 std::ostringstream o;
				 getspritesql(o,pkm);
				 //geticonsql(o,pkm);
				 pbTest->Image = vsqlite->getSQLImage(o.str());
				 delete sav;
				 sav = 0;
				 pkm = 0;
			 }
			 private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
			 		 {
			 			 vsqlite = gcnew VS_SQLite();
			 		 }
	};
}

