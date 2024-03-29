#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	_09_Grafika_Bitwise_Animacje::MainForm mainForm;
	Application::Run(% mainForm);
}