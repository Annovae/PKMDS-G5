#pragma once
using namespace System::Data::SQLite;
public ref class VS_SQLite
{
public : SQLiteConnection ^db;
public : SQLiteConnection ^imgdb;
public: VS_SQLite()
		{
			db = gcnew SQLiteConnection();
			imgdb = gcnew SQLiteConnection();
			System::String ^ dbdir = "C:\\Users\\Mike\\Documents\\GitHub\\PKMDS-G5\\SQLite Databases\\";
			//System::String ^ dbdir = "C:\\Users\\michaelbond\\Documents\\GitHub\\PKMDS-G5\\SQLite Databases\\"
			db->ConnectionString = L"Data Source='" + dbdir + L"veekun-pokedex.sqlite'";
			db->Open();
			imgdb->ConnectionString = L"Data Source='" + dbdir + L"images.sqlite'";
			imgdb->Open();
		}
		~VS_SQLite()
		{
			db->Close();
			imgdb->Close();
		}
		System::String ^ getSQLText(System::String ^ SQL)
		{
			SQLiteCommand ^cmdSelect = db->CreateCommand();
			cmdSelect->CommandText = SQL;
			SQLiteDataReader ^reader = cmdSelect->ExecuteReader();
			reader->Read();
			return reader->GetString(0);
		}
		System::Data::DataSet ^ getSQLDS(System::String ^ SQL)
		{
			System::Data::DataSet ^ DS = gcnew System::Data::DataSet();
			SQLiteDataAdapter ^ DB = gcnew SQLiteDataAdapter(SQL,db);
			DS->Reset();
			DB->Fill(DS);
			return DS;
		}
		int getSQLInt(System::String ^ SQL)
		{
			SQLiteCommand ^cmdSelect = db->CreateCommand();
			cmdSelect->CommandText = SQL;
			SQLiteDataReader ^reader = cmdSelect->ExecuteReader();
			reader->Read();
			return reader->GetInt16(0);
		}
		System::Drawing::Image^ getSQLImage(System::String^ SQL)
		{
			SQLiteCommand ^ cmd = imgdb->CreateCommand();
			cmd->CommandText = SQL;
			System::Object ^ obj = gcnew System::Object;
			try
			{
				obj = cmd->ExecuteScalar();
			}
			catch(...)
			{

			}
			System::Drawing::Image ^ img;
			try {
				// http://www.digitalcoding.com/Code-Snippets/CPP-CLI/C-CLI-Code-Snippet-Get-Image-from-sql-server.html
				array<System::Byte> ^_ImageData = gcnew array<System::Byte>(0);
				_ImageData = safe_cast<array<System::Byte>^>(obj);
				System::IO::MemoryStream ^_MemoryStream = gcnew System::IO::MemoryStream(_ImageData);
				img = System::Drawing::Image::FromStream(_MemoryStream);
				return img;
			}
			catch(...)
			{

			}
			return img;
		}
};
