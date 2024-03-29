#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	_07_Dziedziczenie_Konstruktory::MainForm mainForm;
	Application::Run(% mainForm);
}