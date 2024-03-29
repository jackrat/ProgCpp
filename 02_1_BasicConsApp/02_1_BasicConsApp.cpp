#include <iostream> 
#include <locale.h>
#include <string>

using namespace std;

const string trans = "\245\206\251\210\344\242\230\276\253\244\217\250\235\343\340\227\275\215¹æê³ñóœ¿Ÿ¥ÆÊ£ÑÓŒ¯";


//string l_cin()
//{
//	string s;
//	getline(cin, s);
//	for (unsigned long long i = 0; i < s.length(); i++) {
//		long long pos = trans.find(s[i]);
//		if (pos >= 0)
//			s[i] = trans[pos + 18];
//	}
//	return s;
//}



string l_cin()
{
	string s;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++) {
		int pos = trans.find(s[i]);
		if (pos >= 0)
			s[i] = trans[pos + 18];
	}
	return s;
}

string tolowerstr(string s)
{
	string r = "";
	for (int i = 0; i < s.length(); i++)
		r += tolower(s[i]);
	return r;
}

bool question(string prompt) {
	string s;
	char c;
	do {
		cout << prompt + " (t/n)";
		cin >> s;
		s = tolowerstr(s);
		if (s != "")
			c = s[0];
		else
			c = 'x';
		if (s != "t" && s != "n")
			cout << "Sorry, nie zrozumia³em!" << endl;
	} while (c != 't' && c != 'n');
	return c == 't';
}


double get_double(string imie, string prompt)
{
	double result;
	do {
		if (cin.fail() != 0)
		{
			cin.clear();
			cin.ignore(9999, '\n');
			cout << "Ale¿ " << imie << "! To musi myæ pomy³ka!" << endl;
		}
		cout << prompt;
		cin >> result;
	} while (cin.fail() != 0);
	cin.ignore(9999, '\n');
	return result;
}



int main()
{
	string imie;
	string op;
	double a, b, c;

	setlocale(LC_ALL, "Polish");
	cout << "Czeœæ! Jak siê do Ciebie zwracaæ? ";
	imie = l_cin();
	cout << "Bardzo mi mi³o, " << imie << endl;

	if (question(imie + ", policzymy coœ "))
	{
		do {

			a = get_double(imie, "Podaj a: ");
			b = get_double(imie, "Podaj b: ");
			cout << "Wybierz operacjê: (+-*/) ";

			bool opOK = true;
			cin >> op;
			switch (op[0])
			{
			case '+':
				c = a + b;
				break;
			case '-':
				c = a - b;
				break;
			case '*': c = a * b;
				break;
			case '/': c = a / b;
				break;
			default:
				cout << "A co to za operacja ma byæ ???" << endl;
				opOK = false;
				break;
			}
			if (opOK) {
				cout << "Wynik " << a << " " << op[0] << " " << b << " = " << c << endl;
			}
			cout << "---------------------------------------------------------------" << endl;
		} while (question(imie + ", jeszcze raz? "));
	}

	cout << "Do widzenia, " << imie << endl;
	system("pause");
}




/*

#include <iostream>

using namespace std;


int main()
{
	string imie, tn;
	double a, b, c;
	cout << "Podaj imie: ";
	cin >> imie;
	cout << "Hello, " << imie << "!";
	do
	{
		cout << "\n" << imie << ", policzymy cos? (t/n)";
		cin >> tn;
		if (tn == "T" || tn == "t")
		{
			cout << "Podaj a: ";
			cin >> a;
			cout << "Podaj b: ";
			cin >> b;
			c = a + b;
			cout << "a + b = " << c;
		}
		cout << "\n" << imie << ", konczymy? (t/n)";
		cin >> tn;
	} while (tn == "N" || tn == "n");
}

*/