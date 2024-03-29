#include "MainForm.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThread]
int Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew My061Klasy::MainForm());
	return 0;
}
