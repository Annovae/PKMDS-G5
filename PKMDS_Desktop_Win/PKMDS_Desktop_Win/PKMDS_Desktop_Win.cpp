// PKMDS_Desktop_Win.cpp : main project file.

#include "../../include/pkmds/stdafx.h"
#include "frmBoxes.h"

using namespace PKMDS_Desktop_Win;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew frmBoxes());
	return 0;
}
