#pragma region Stuff I dont need to see
#pragma once
#include "../../include/pkmds/pkmds_g5_sqlite.h"
#include "../../include/pkmds/pkmds_sql.h"
#include <vector>
namespace PKMDS_Desktop_Win_2010 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Data::SQLite;

	/// <summary>
	/// Summary for pkmdataviewer
	/// </summary>
	public ref class pkmdataviewer : public System::Windows::Forms::Form
	{
	public:
		pkmdataviewer(void)
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
		~pkmdataviewer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dgData;
	protected: 
	private: System::Windows::Forms::Button^  btnData;

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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dgData = (gcnew System::Windows::Forms::DataGridView());
			this->btnData = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgData))->BeginInit();
			this->SuspendLayout();
			// 
			// dgData
			// 
			this->dgData->AllowUserToAddRows = false;
			this->dgData->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->dgData->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dgData->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgData->Location = System::Drawing::Point(12, 42);
			this->dgData->Name = L"dgData";
			this->dgData->ReadOnly = true;
			this->dgData->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgData->Size = System::Drawing::Size(710, 443);
			this->dgData->TabIndex = 0;
			// 
			// btnData
			// 
			this->btnData->Location = System::Drawing::Point(13, 13);
			this->btnData->Name = L"btnData";
			this->btnData->Size = System::Drawing::Size(75, 23);
			this->btnData->TabIndex = 1;
			this->btnData->Text = L"button1";
			this->btnData->UseVisualStyleBackColor = true;
			this->btnData->Click += gcnew System::EventHandler(this, &pkmdataviewer::btnData_Click);
			// 
			// pkmdataviewer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(734, 497);
			this->Controls->Add(this->btnData);
			this->Controls->Add(this->dgData);
			this->Name = L"pkmdataviewer";
			this->Text = L"Pokémon Report";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgData))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		bw2sav_obj * sav;
		party_pkm * ppkm;
		pokemon_obj * pkm;
		VS_SQLite ^ vsqlite;
	public: System::Void setsav(bw2sav_obj * sav)
			{
				this->sav = new bw2sav_obj;
				ppkm = new party_pkm;
				pkm = new pokemon_obj;
				vsqlite = gcnew VS_SQLite();
				this->sav = sav;
			}
	private: System::Void btnData_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 // http://msdn.microsoft.com/en-us/library/6sh2ey19.aspx
				 vector<std::string> ColumnNames;
				 // Add column names here
				 ColumnNames.push_back("\"ID\"");
				 ColumnNames.push_back("\"Species\"");
				 ColumnNames.push_back("\"HP\"");
				 ColumnNames.push_back("\"Attack\"");
				 ColumnNames.push_back("\"Defense\"");
				 ColumnNames.push_back("\"Sp. Attack\"");
				 ColumnNames.push_back("\"Sp. Defense\"");
				 ColumnNames.push_back("\"Speed\"");
				 vector<std::string> ColumnTypes;
				 // Add column data types here
				 ColumnTypes.push_back("Integer");
				 ColumnTypes.push_back("String");
				 ColumnTypes.push_back("Integer");
				 ColumnTypes.push_back("Integer");
				 ColumnTypes.push_back("Integer");
				 ColumnTypes.push_back("Integer");
				 ColumnTypes.push_back("Integer");
				 ColumnTypes.push_back("Integer");
				 // Add vectors for column data here
				 vector<int> IDValues;
				 vector<std::string> SpeciesNames;
				 vector<int> HPValues;
				 vector<int> AtkValues;
				 vector<int> DefValues;
				 vector<int> SpAtkValues;
				 vector<int> SpDefValues;
				 vector<int> SpeedValues;
				 for(int slot = 0; slot < 30; slot++)
				 {
					 pkm = &(sav->cur.boxes[0].pokemon[slot]);
					 if(!((bool)(pkm->isboxdatadecrypted)))
					 {
						 decryptpkm(pkm);
					 }
					 if(pkm->species != Species::NOTHING)
					 {
						 // Add values to vectors here
						 IDValues.push_back((int)(pkm->species));
						 SpeciesNames.push_back(lookuppkmname(pkm));
						 HPValues.push_back(getpkmstat(pkm,Stat_IDs::hp));
						 AtkValues.push_back(getpkmstat(pkm,Stat_IDs::attack));
						 DefValues.push_back(getpkmstat(pkm,Stat_IDs::defense));
						 SpAtkValues.push_back(getpkmstat(pkm,Stat_IDs::spatk));
						 SpDefValues.push_back(getpkmstat(pkm,Stat_IDs::spdef));
						 SpeedValues.push_back(getpkmstat(pkm,Stat_IDs::speed));
					 }
					 int spec = (int)(pkm->species);
				 }
				 std::string TableName = "PKM_DATA";
				 SQLiteConnection^ con = gcnew SQLiteConnection("Data Source=:memory:;Version=3;New=True;");
				 con->Open();
				 SQLiteCommand^ cmd = gcnew SQLiteCommand(con);
				 stringstream ss1;
				 ss1 << "create table " << TableName << "(";
				 for(int i = 0; i < ColumnNames.size()-1; i++)
				 {
					 ss1 << ColumnNames[i] << " " << ColumnTypes[i] << ", ";
				 }
				 ss1 << ColumnNames[ColumnNames.size()-1] << " " << ColumnTypes[ColumnNames.size()-1];
				 ss1 << ")";
				 cmd->CommandText = gcnew System::String(ss1.str().c_str());
				 cmd->Prepare();
				 cmd->ExecuteNonQuery();
				 stringstream ss2;
				 ss2 << "insert into " << TableName << "(";
				 for(int i = 0; i < ColumnNames.size()-1; i++)
				 {
					 ss2 << ColumnNames[i] + ", ";
				 }
				 ss2 << ColumnNames[ColumnNames.size()-1];
				 ss2 << ") values ";
				 for(int p = 0; p < SpeciesNames.size()-1; p++)
				 {
					 // Get data from vectors here
					 ss2 << "(";
					 ss2 << IDValues[p] << ", ";
					 ss2 << "\"" << SpeciesNames[p] << "\", ";
					 ss2 << HPValues[p] << ", ";
					 ss2 << AtkValues[p] << ", ";
					 ss2 << DefValues[p] << ", ";
					 ss2 << SpAtkValues[p] << ", ";
					 ss2 << SpDefValues[p] << ", ";
					 ss2 << SpeedValues[p];
					 ss2 << "),\n";
				 }
				 int p = SpeciesNames.size()-1;
				 // Get data from vectors here
				 ss2 << "(";
				 ss2 << IDValues[p] << ", ";
				 ss2 << "\"" << SpeciesNames[p] << "\", ";
				 ss2 << HPValues[p] << ", ";
				 ss2 << AtkValues[p] << ", ";
				 ss2 << DefValues[p] << ", ";
				 ss2 << SpAtkValues[p] << ", ";
				 ss2 << SpDefValues[p] << ", ";
				 ss2 << SpeedValues[p];
				 ss2 << ");";
				 cmd->CommandText = gcnew System::String(ss2.str().c_str());
				 cmd->ExecuteNonQuery();
				 cmd->CommandText = "select * from " + gcnew System::String(TableName.c_str()); // + " order by Attack desc";
				 DataSet^ ds = gcnew DataSet();
				 DataTable^ dt = gcnew DataTable();
				 SQLiteDataAdapter^ db = gcnew SQLiteDataAdapter(cmd->CommandText, con);
				 ds->Reset();
				 db->Fill(ds);
				 dt = ds->Tables[0];
				 dgData->DataSource = dt;
				 con->Close();
			 }
	};
}
