// PKX Editor.cpp : main project file.

#include "../../include/pkmds/stdafx.h"
#include "frmMain.h"

using namespace PKXEditor;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew frmMain());
	return 0;
}
