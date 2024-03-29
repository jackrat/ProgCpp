#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::ComponentModel;

ref class PierwiastkiD : INotifyPropertyChanged
{
public:
	property double A
	{
		double get() { return a; }
		void set(double value) { if (value != a) { a = value; Oblicz(); OnPropertyChanged("A"); } }
	}

	property double B
	{
		double get() { return b; }
		void set(double value) {
			if (value != b) {
				b = value; Oblicz(); OnPropertyChanged("B");
			}
		}
	}

	property double C
	{
		double get() { return c; }
		void set(double value) {
			if (value != c) {
				c = value; Oblicz();OnPropertyChanged("C");
			}
		}
	}

	property List<double>^ Wynik
	{
		List<double>^ get() { return wynik; }

	}

	property String^ WynikAsString {String^ get() { return wynikAsString; }}


	virtual event PropertyChangedEventHandler^ PropertyChanged;

private:
	double a, b, c, delta;
	List<double>^ wynik = gcnew List<double>();
	String^ wynikAsString;
	void Oblicz()
	{
		wynik->Clear();
		wynikAsString = "";
		delta = b * b - 4 * a * c;
		if (delta == 0)
		{
			double x0 = -b / (2 * a);
			wynik->Add(x0);
			wynikAsString = "x0 = " + x0.ToString();
		}
		else if (delta > 0)
		{
			double x1 = (-b - Math::Sqrt(delta)) / (2 * a);
			double x2 = (-b + Math::Sqrt(delta)) / (2 * a);
			wynik->Add(x1);
			wynik->Add(x2);
			wynikAsString = String::Format("x1 = {0}\r\nx2 = {1}", wynik[0], wynik[1]);
		}
		OnPropertyChanged("Wynik");
		OnPropertyChanged("WynikAsString");
	}

	void OnPropertyChanged(String^ propName)
	{
		PropertyChanged(this, gcnew PropertyChangedEventArgs(propName));
	}



};

