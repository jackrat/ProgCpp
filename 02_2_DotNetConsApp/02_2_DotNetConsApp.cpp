#include "pch.h"

using namespace System;


double getDouble(String^ prompt, String^ imie) {
	double result;
	bool ok = false;
	while (!ok)
	{
		Console::Write(prompt);
		String^ s = Console::ReadLine();
		ok = double::TryParse(s, result);
		if (!ok) Console::WriteLine("Ale¿ " + imie + ", to musi byæ pomy³ka!");
	}
	return result;
}


int main(array<System::String^>^ args)
{
	double a, b, c, delta, x0, x1, x2;
	String^ imie;
	Console::Write("Podaj imie : ");
	imie = Console::ReadLine();
	Console::Write(imie + ", Policzymy coœ? (t/n)");
	bool repeat = Console::ReadLine()->ToLower() == "t";
	while (repeat)
	{
		a = getDouble("Podaj a: ", imie);
		b = getDouble("Podaj b: ", imie);
		c = getDouble("Podaj c: ", imie);

		delta = b * b - 4 * a * c;

		if (delta < 0)
			Console::WriteLine("Brak rozwi¹zañ!");
		else if (delta == 0)
		{
			x0 = -b / (2 * a);
			Console::WriteLine(String::Format("x0 = {0}", x0));
		}
		else
		{
			x1 = (-b - Math::Sqrt(delta)) / (2 * a);
			x2 = (-b + Math::Sqrt(delta)) / (2 * a);
			Console::WriteLine(String::Format("x1 = {0}\nx2 = {1}", x1, x2));
		}

		Console::Write(imie + ", jeszcze raz? (t/n)");
		repeat = Console::ReadLine()->ToLower() == "t";
	}
	Console::WriteLine("Do widzenia, " + imie);
	Console::ReadLine();
	return 0;
}
