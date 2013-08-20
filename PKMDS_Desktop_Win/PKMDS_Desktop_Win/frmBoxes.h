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
			this->SuspendLayout();
			// 
			// frmBoxes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Name = L"frmBoxes";
			this->Text = L"PKMDS: Desktop Windows";
			this->Load += gcnew System::EventHandler(this, &frmBoxes::frmBoxes_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		VS_SQLite ^ vsqlite;
	private: System::Void frmBoxes_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 vsqlite = gcnew VS_SQLite();
			 }
	};
}

