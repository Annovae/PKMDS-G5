// PKMDS_Desktop_Win_2010.cpp : main project file.

#include "../../include/pkmds/stdafx.h"
#include "../../PKMDS_Desktop_Win/PKMDS_Desktop_Win/frmBoxes.h"

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
