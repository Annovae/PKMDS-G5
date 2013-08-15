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
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 // Create The Connection Object
				 SQLiteConnection ^db = gcnew SQLiteConnection();
				 //try
				 //{
				 // Open Database Connection
				 //MessageBox::Show("Opening Database Connection To MyDb.db ...");
				 //db->ConnectionString = "Data Source='C:\\Users\\michaelbond\\Documents\\GitHub\\PKMDS-G5\\SQLite Databases\\images.sqlite'";
				 db->ConnectionString = "Data Source='C:\\Users\\michaelbond\\Documents\\GitHub\\PKMDS-G5\\SQLite Databases\\veekun-pokedex.sqlite'";
				 db->Open();
				 //MessageBox::Show("Database Connection To MyDb.db Opened.");

				 SQLiteCommand ^cmdSelect = db->CreateCommand();
				 cmdSelect->CommandText = ""
					 + "SELECT pokemon_species_names.name "
					 + "FROM   pokemon_species "
					 + "       INNER JOIN pokemon_species_names "
					 + "               ON pokemon_species.id = pokemon_species_names.pokemon_species_id "
					 + "WHERE  ( pokemon_species_names.local_language_id = 9 ) "
					 + "       AND ( pokemon_species_names.pokemon_species_id = " + "25" + " ) ";
				 SQLiteDataReader ^reader = cmdSelect->ExecuteReader();

				 StringBuilder ^sb = gcnew StringBuilder();
				 for (int colCtr = 0; colCtr < reader->FieldCount; ++colCtr)
				 {
					 // Add Seperator (If After First Column)
					 if (colCtr > 0) sb->Append("|");

					 // Add Column Name
					 sb->Append(reader->GetName(colCtr));
				 }
				 sb->AppendLine();
				 sb->Append("~~~~~~~~~~~~");
				 sb->AppendLine();
				 while (reader->Read())
				 {
					 for (int colCtr = 0; colCtr < reader->FieldCount; ++colCtr)
					 {
						 // Add Seperator (If After First Column)
						 if (colCtr > 0) sb->Append("|");

						 // Add Column Text
						 sb->Append(reader->GetValue(colCtr)->ToString());
					 }
					 sb->AppendLine();
				 }
				 MessageBox::Show(sb->ToString(), "SQLite MyTable");

				 //System::String ^ var1 = ""
				 // + "SELECT pokemon_species_names.name "
				 // + "FROM   pokemon_species "
				 // + "       INNER JOIN pokemon_species_names "
				 // + "               ON pokemon_species.id = pokemon_species_names.pokemon_species_id "
				 // + "WHERE  ( pokemon_species_names.local_language_id = 9 ) "
				 // + "       AND ( pokemon_species_names.pokemon_species_id = @species ) ";

				 db->Close();
			 }
			 //catch(...)
			 //{

			 //}
			 //}
	};
}

