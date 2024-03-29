#pragma once

using namespace System;

ref class KlasaZPropertisami
{
public:
	property	String^ PropS {
		String^ get()
		{
			//tu mo¿na mozna zamiesciæ skomplikowane wyliczenie, odczyt z pliku, z BD,...
			return propS;
		}
		void set(String^ value)
		{
			propS = value;
			//tu mozna dopisaæ np. zapis tego stringa do pliku, wysy³ke mailem, dod BD, ...
		}
	}


	property int PropInt { // tylko do odczytu
		int get() { return propInt; }
		//private:	void set(int value) { propInt = value; } // 
	}

	property int PropInt2 { // tylko do zapisu
		void set(int value) { propInt2 = value; } // 
	}

private:
	String^ propS;
	int propInt;
	int propInt2;
};

