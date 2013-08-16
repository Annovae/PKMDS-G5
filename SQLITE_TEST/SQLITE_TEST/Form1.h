#pragma once
#include <iostream>

namespace SQLITE_TEST {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SQLite;
	using namespace System::Text;

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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  lblTEST;
	private: System::Windows::Forms::PictureBox^  pbTEST;
	private: System::Windows::Forms::NumericUpDown^  numTEST;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblTEST = (gcnew System::Windows::Forms::Label());
			this->pbTEST = (gcnew System::Windows::Forms::PictureBox());
			this->numTEST = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbTEST))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numTEST))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// lblTEST
			// 
			this->lblTEST->AutoSize = true;
			this->lblTEST->Location = System::Drawing::Point(12, 38);
			this->lblTEST->Name = L"lblTEST";
			this->lblTEST->Size = System::Drawing::Size(35, 13);
			this->lblTEST->TabIndex = 1;
			this->lblTEST->Text = L"label1";
			// 
			// pbTEST
			// 
			this->pbTEST->Location = System::Drawing::Point(12, 129);
			this->pbTEST->Name = L"pbTEST";
			this->pbTEST->Size = System::Drawing::Size(134, 121);
			this->pbTEST->TabIndex = 2;
			this->pbTEST->TabStop = false;
			// 
			// numTEST
			// 
			this->numTEST->Location = System::Drawing::Point(152, 12);
			this->numTEST->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {649, 0, 0, 0});
			this->numTEST->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numTEST->Name = L"numTEST";
			this->numTEST->Size = System::Drawing::Size(120, 20);
			this->numTEST->TabIndex = 3;
			this->numTEST->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numTEST->ValueChanged += gcnew System::EventHandler(this, &Form1::numTEST_ValueChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->numTEST);
			this->Controls->Add(this->pbTEST);
			this->Controls->Add(this->lblTEST);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbTEST))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numTEST))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		static SQLiteConnection ^db = gcnew SQLiteConnection();
	private: System::String ^ getSQLText()
			 {
				 SQLiteCommand ^cmdSelect = db->CreateCommand();
				 cmdSelect->CommandText = ""
					 + "SELECT pokemon_species_names.name "
					 + "FROM   pokemon_species "
					 + "       INNER JOIN pokemon_species_names "
					 + "               ON pokemon_species.id = pokemon_species_names.pokemon_species_id "
					 + "WHERE  ( pokemon_species_names.local_language_id = 9 ) "
					 + "       AND ( pokemon_species_names.pokemon_species_id = " + this->numTEST->Value.ToString() + " ) ";
				 SQLiteDataReader ^reader = cmdSelect->ExecuteReader();
				 StringBuilder ^sb = gcnew StringBuilder();
				 for (int colCtr = 0; colCtr < reader->FieldCount; ++colCtr)
				 {
					 // Add Seperator (If After First Column)
					 if (colCtr > 0) sb->Append("|");
				 }
				 while (reader->Read())
				 {
					 for (int colCtr = 0; colCtr < reader->FieldCount; ++colCtr)
					 {
						 // Add Seperator (If After First Column)
						 if (colCtr > 0) sb->Append("|");
						 // Add Column Text
						 sb->Append(reader->GetValue(colCtr)->ToString());
					 }
				 }
				 return sb->ToString();
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {

			 }
	private: System::Void numTEST_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 this->lblTEST->Text = getSQLText();
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 db->ConnectionString = "Data Source='C:\\Users\\michaelbond\\Documents\\GitHub\\PKMDS-G5\\SQLite Databases\\veekun-pokedex.sqlite'";
				 db->Open();
				 this->lblTEST->Text = getSQLText();
			 }
	private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) 
			 {
				 db->Close();
			 }
	};
}

