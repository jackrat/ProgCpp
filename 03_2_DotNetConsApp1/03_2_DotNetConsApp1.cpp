#include "pch.h"
using namespace System::Xml;

using namespace System;

int main(array<System::String^>^ args)
{
	DateTime dt = DateTime::Now;
	Console::WriteLine("Teraz jest : " + dt.ToString());
	Console::WriteLine(String::Format("Teraz jest : {0}", dt));
	Console::WriteLine(String::Format("Teraz jest : {0:yyyy-MM-dd}", dt));

	Random^ rnd = gcnew Random();
	int n = 5;
	array<String^>^ artykuly = gcnew array<String^>(n) { "Ziemniaki", "M¹ka", "Broku³y", "¯ó³ty ser" };
	artykuly[4] = "Cukier";
	for (int i = 0; i < artykuly->Length; i++) Console::WriteLine(i.ToString() + ") " + artykuly[i]);

	XmlDocument^ doc = gcnew XmlDocument();
	doc->LoadXml("<Faktura></Faktura>");
	XmlElement^ root = doc->DocumentElement;
	root->SetAttribute("Wygenerowano", DateTime::Now.ToString("yyyy-MM-dd"));
	XmlDeclaration^ decl = doc->CreateXmlDeclaration("1.0", "UTF-8", "yes");
	doc->InsertBefore(decl, root);
	XmlElement^ pozycje = doc->CreateElement("Pozycje");
	root->AppendChild(pozycje);
	for (int i = 0; i < n; i++)
	{
		XmlElement^ pozycja = doc->CreateElement("Pozycja");
		pozycje->AppendChild(pozycja);
		pozycja->InnerText = artykuly[i];
		pozycja->SetAttribute("cena", rnd->Next().ToString());
		pozycja->SetAttribute("ilosc", rnd->Next().ToString());
	}

	Console::Write("Wystawca: ");
	String^ wyst = Console::ReadLine();
	root->SetAttribute("Wystawca", wyst);
	Console::WriteLine("Wystawca: " + wyst);

	doc->Save("fakura.xml");
	Console::ReadLine();
	return 0;
}
