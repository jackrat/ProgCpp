#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
int Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew _04_1_Pliki_i_Stringi::MyForm());
	return 0;
}