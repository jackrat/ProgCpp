#include "MyForm.h"

using namespace My024DotNetWinFormsApp;

void main()
{
	MyForm f;
	Application::Run(% f);
}


/*


1. Right-click na projekcie-properties->Linker->System->Subsytem: Windows
2. Right-click na projekcie-properties->Linker->Advanced: EntryPoint:main
3. Right-click na projekcie-properties->Add->New Item->WinForm (CLR)
4. W pliku MyForm.cpp : kod jw.
5. Zamkn¹æ i otworzyæ solucjê.
   


*/

