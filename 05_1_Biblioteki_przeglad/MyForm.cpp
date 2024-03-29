#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
int Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew My051Bibliotekiprzeglad::MyForm());
	return 0;
}