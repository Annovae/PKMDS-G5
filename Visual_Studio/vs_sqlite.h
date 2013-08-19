#pragma once
#include <msclr\marshal_cppstd.h>
#include "../include/pkmds/pkmds_g5_sqlite.h"
using namespace System;
using namespace System::Data;
using namespace System::Data::SQLite;
using namespace msclr::interop;
public ref class VS_SQLite
{
public : SQLiteConnection ^db;
public : SQLiteConnection ^imgdb;
public: VS_SQLite()
		{
			db = gcnew SQLiteConnection();
			imgdb = gcnew SQLiteConnection();
			//String ^ dbdir = "C:\\Users\\Mike\\Documents\\GitHub\\PKMDS-G5\\SQLite Databases\\";
			String ^ dbdir = "C:\\Users\\Michael Bond\\Documents\\GitHub\\PKMDS-G5\\SQLite Databases\\";
			//String ^ dbdir = "C:\\Users\\michaelbond\\Documents\\GitHub\\PKMDS-G5\\SQLite Databases\\";
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
public: String ^ getSQLText(String ^ SQL)
		{
			try
			{
				SQLiteCommand ^cmdSelect = db->CreateCommand();
				cmdSelect->CommandText = SQL;
				SQLiteDataReader ^reader = cmdSelect->ExecuteReader();
				reader->Read();
				return reader->GetString(0);
			}
			catch(...)
			{
				return "";
			}
		}
public: DataSet ^ getSQLDS(String ^ SQL)
		{
			DataSet ^ DS = gcnew DataSet();
			SQLiteDataAdapter ^ DB = gcnew SQLiteDataAdapter(SQL,db);
			DS->Reset();
			DB->Fill(DS);
			return DS;
		}
public: int getSQLInt(String ^ SQL)
		{
			SQLiteCommand ^cmdSelect = db->CreateCommand();
			cmdSelect->CommandText = SQL;
			SQLiteDataReader ^reader = cmdSelect->ExecuteReader();
			reader->Read();
			return reader->GetInt16(0);
		}
public: Drawing::Image^ getSQLImage(String^ SQL)
		{
			SQLiteCommand ^ cmd = imgdb->CreateCommand();
			cmd->CommandText = SQL;
			Object ^ obj = gcnew Object;
			try
			{
				obj = cmd->ExecuteScalar();
			}
			catch(...)
			{

			}
			Drawing::Image ^ img;
			try {
				// http://www.digitalcoding.com/Code-Snippets/CPP-CLI/C-CLI-Code-Snippet-Get-Image-from-sql-server.html
				array<Byte> ^_ImageData = gcnew array<Byte>(0);
				_ImageData = safe_cast<array<Byte>^>(obj);
				IO::MemoryStream ^_MemoryStream = gcnew IO::MemoryStream(_ImageData);
				img = Drawing::Image::FromStream(_MemoryStream);
				return img;
			}
			catch(...)
			{

			}
			return img;
		}
public: String ^ getSQLText(std::string sql)
		{
			try
			{
				String^ SQL = gcnew String(sql.c_str());
				return getSQLText(SQL);
			}
			catch(...)
			{
				return "";
			}
		}
public: std::string getSQLTextstd(std::string sql)
		{
			String^ SQL = gcnew String(sql.c_str());
			String^ sysstring = getSQLText(SQL);
			return marshal_as<std::string>(sysstring);
		}
public: int getSQLInt(std::string sql)
		{
			String^ SQL = gcnew String(sql.c_str());
			return getSQLInt(SQL);
		}
public: DataSet ^ getSQLDS(std::string sql)
		{
			String^ SQL = gcnew String(sql.c_str());
			return getSQLDS(SQL);
		}
public: Drawing::Image^ getSQLImage(std::string sql)
		{
			String^ SQL = gcnew String(sql.c_str());
			return getSQLImage(SQL);
		}
public: System::String ^ fromSTD(std::string in)
		{
			try
			{
				System::String ^ out = gcnew System::String(in.c_str());
				return out;
			}
			catch(...)
			{
				return "";
			}
		}
};
