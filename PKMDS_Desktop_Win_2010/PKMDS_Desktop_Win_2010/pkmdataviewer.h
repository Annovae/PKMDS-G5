#pragma region Stuff I dont need to see
#pragma once
#include "../../include/pkmds/pkmds_g5_sqlite.h"
#include "../../include/pkmds/pkmds_sql.h"
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
			this->dgData = (gcnew System::Windows::Forms::DataGridView());
			this->btnData = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgData))->BeginInit();
			this->SuspendLayout();
			// 
			// dgData
			// 
			this->dgData->AllowUserToAddRows = false;
			this->dgData->AllowUserToDeleteRows = false;
			this->dgData->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgData->Location = System::Drawing::Point(12, 42);
			this->dgData->Name = L"dgData";
			this->dgData->ReadOnly = true;
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
			this->Load += gcnew System::EventHandler(this, &pkmdataviewer::pkmdataviewer_Load);
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
				this->sav = sav;
			}
	private: System::Void btnData_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 // http://msdn.microsoft.com/en-us/library/6sh2ey19.aspx
				 List<String^>^ ColumnNames = gcnew List<String^>; //{"Value"};
				 ColumnNames->Add("Value");
				 List<String^>^ ParamNames = gcnew List<String^>; //{"@PARAMNAME"};
				 ParamNames->Add("@PARAMNAME");
				 String^ TableName = "TableName";
				 SQLiteConnection^ con = gcnew SQLiteConnection("Data Source=:memory:;Version=3;New=True;");
				 con->Open();
				 SQLiteCommand^ cmd = gcnew SQLiteCommand(con);
				 cmd->CommandText = "create table " + TableName + "(";
				 cmd->CommandText += ColumnNames[0] + " integer";
				 cmd->CommandText += ")";
				 cmd->Prepare();
				 cmd->ExecuteNonQuery();
				 cmd->CommandText = "insert into " + TableName + "(" + ColumnNames[0] + ") values (" + ParamNames[0] + ")"; //,VALUE1,VALUE2)"; // Parameter or value
				 cmd->Parameters->Add(gcnew SQLiteParameter(ParamNames[0])); //, DbType.Binary, data.Length);
				 for (int i = 1; i <= 100; i++)
				 {
					 cmd->Parameters[ParamNames[0]]->Value = i;
					 cmd->ExecuteNonQuery();
				 }
				 cmd->CommandText = "select * from " + TableName + " order by Value desc";
				 DataSet^ ds = gcnew DataSet();
				 DataTable^ dt = gcnew DataTable();
				 SQLiteDataAdapter^ db = gcnew SQLiteDataAdapter(cmd->CommandText, con);
				 ds->Reset();
				 db->Fill(ds);
				 dt = ds->Tables[0];
				 dgData->DataSource = dt;
				 con->Close();
			 }
	private: System::Void pkmdataviewer_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 sav = new bw2sav_obj;
				 ppkm = new party_pkm;
				 pkm = new pokemon_obj;
				 vsqlite = gcnew VS_SQLite();
			 }
	};
}
