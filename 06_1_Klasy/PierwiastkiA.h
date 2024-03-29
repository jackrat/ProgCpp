#pragma once

using namespace System;

ref class PierwiastkiA
{
public:
	double a;
	double b;
	double c;
	double delta;
	array<double>^ wynik;

	void Oblicz()
	{
		delta = b * b - 4 * a * c;
		if (delta < 0)
			wynik = gcnew array<double>(0);
		else if (delta == 0)
		{
			wynik = gcnew array<double>(1);
			double x0 = -b / (2 * a);
			wynik[0] = x0;
		}
		else
		{
			wynik = gcnew array<double>(2);
			double x1 = (-b - Math::Sqrt(delta)) / (2 * a);
			double x2 = (-b + Math::Sqrt(delta)) / (2 * a);
			wynik[0] = x1;
			wynik[1] = x2;
		}

	}

};

