#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	_08_1_Exceptions::MainForm mainForm;
	Application::Run(% mainForm);
}