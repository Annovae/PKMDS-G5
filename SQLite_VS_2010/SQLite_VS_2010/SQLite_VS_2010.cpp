// SQLite_VS_2010.cpp : main project file.

#include "../../include/pkmds/stdafx.h"
#include "frmMain.h"

using namespace SQLite_VS_2010;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}
