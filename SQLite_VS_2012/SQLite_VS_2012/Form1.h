#pragma once
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
	private: System::Windows::Forms::Label^  lblTest;
	private: System::Windows::Forms::PictureBox^  pbTest;
	private: System::Windows::Forms::TextBox^  txtTest;
	private: System::Windows::Forms::RadioButton^  rbVeekun;
	private: System::Windows::Forms::RadioButton^  rbImage;
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
			this->lblTest = (gcnew System::Windows::Forms::Label());
			this->pbTest = (gcnew System::Windows::Forms::PictureBox());
			this->txtTest = (gcnew System::Windows::Forms::TextBox());
			this->rbVeekun = (gcnew System::Windows::Forms::RadioButton());
			this->rbImage = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbTest))->BeginInit();
			this->SuspendLayout();
			// 
			// btnTest
			// 
			this->btnTest->Location = System::Drawing::Point(196, 58);
			this->btnTest->Name = L"btnTest";
			this->btnTest->Size = System::Drawing::Size(76, 20);
			this->btnTest->TabIndex = 3;
			this->btnTest->Text = L"button1";
			this->btnTest->UseVisualStyleBackColor = true;
			this->btnTest->Click += gcnew System::EventHandler(this, &Form1::btnTest_Click);
			// 
			// lblTest
			// 
			this->lblTest->Location = System::Drawing::Point(12, 81);
			this->lblTest->Name = L"lblTest";
			this->lblTest->Size = System::Drawing::Size(260, 61);
			this->lblTest->TabIndex = 4;
			this->lblTest->Text = L"label1";
			// 
			// pbTest
			// 
			this->pbTest->Location = System::Drawing::Point(12, 145);
			this->pbTest->Name = L"pbTest";
			this->pbTest->Size = System::Drawing::Size(260, 104);
			this->pbTest->TabIndex = 2;
			this->pbTest->TabStop = false;
			// 
			// txtTest
			// 
			this->txtTest->Location = System::Drawing::Point(12, 12);
			this->txtTest->Multiline = true;
			this->txtTest->Name = L"txtTest";
			this->txtTest->Size = System::Drawing::Size(178, 66);
			this->txtTest->TabIndex = 0;
			// 
			// rbVeekun
			// 
			this->rbVeekun->AutoSize = true;
			this->rbVeekun->Checked = true;
			this->rbVeekun->Location = System::Drawing::Point(210, 12);
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
			this->rbImage->Location = System::Drawing::Point(209, 35);
			this->rbImage->Name = L"rbImage";
			this->rbImage->Size = System::Drawing::Size(54, 17);
			this->rbImage->TabIndex = 2;
			this->rbImage->Text = L"Image";
			this->rbImage->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AcceptButton = this->btnTest;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->rbImage);
			this->Controls->Add(this->rbVeekun);
			this->Controls->Add(this->txtTest);
			this->Controls->Add(this->pbTest);
			this->Controls->Add(this->lblTest);
			this->Controls->Add(this->btnTest);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbTest))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		static SQLiteConnection ^db = gcnew SQLiteConnection();
		static SQLiteConnection ^imgdb = gcnew SQLiteConnection();
		System::String ^ getSQLText(System::String ^ SQL)
		{
			SQLiteCommand ^cmdSelect = db->CreateCommand();
			cmdSelect->CommandText = SQL;
			SQLiteDataReader ^reader = cmdSelect->ExecuteReader();
			reader->Read();
			return reader->GetString(0);
		}
		int getSQLInt(System::String ^ SQL)
		{
			SQLiteCommand ^cmdSelect = db->CreateCommand();
			cmdSelect->CommandText = SQL;
			SQLiteDataReader ^reader = cmdSelect->ExecuteReader();
			reader->Read();
			return reader->GetInt16(0);
		}
		Image^ getSQLImage(System::String^ SQL)
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
			Image ^ img;
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
		};
	private: System::Void btnTest_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 try
				 {
					 if(this->rbVeekun->Checked)
					 {
						 this->lblTest->Text = getSQLText(txtTest->Text);
					 }
					 else
					 {
						 this->pbTest->Image = getSQLImage(txtTest->Text);
					 }
				 }
				 catch(...)
				 {

				 }
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e)
			 {
				 System::String ^ dbdir = "C:\\Users\\Mike\\Documents\\GitHub\\PKMDS-G5\\SQLite Databases\\";
				 //System::String ^ dbdir = "C:\\Users\\michaelbond\\Documents\\GitHub\\PKMDS-G5\\SQLite Databases\\"
				 db->ConnectionString = L"Data Source='" + dbdir + L"veekun-pokedex.sqlite'";
				 db->Open();
				 imgdb->ConnectionString = L"Data Source='" + dbdir + L"images.sqlite'";
				 imgdb->Open();
			 }
	private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) 
			 {
				 db->Close();
				 imgdb->Close();
			 }
	};
}

