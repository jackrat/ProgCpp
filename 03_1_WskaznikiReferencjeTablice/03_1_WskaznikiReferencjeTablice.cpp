#include <iostream>
#include <iomanip>
#include <vector>


using namespace std;

void swap1(string* w1, string* w2)
{
	string temp = *w1;
	*w1 = *w2;
	*w2 = temp;
}

void swap2(string& r1, string& r2)
{
	string temp = r1;
	r1 = r2;
	r2 = temp;
}

int main()
{
	setlocale(LC_ALL, "Polish");
	cout << "---------------- WskaŸniki -------------------" << endl;

	//int* p, i; //1
	//int i;
	//int* p; // 2
	int i, * p;//3
	i = 123;
	p = &i;
	cout << i << endl;
	cout << *p << endl;

	// * - operator wy³uskania , dereferencji
	// & - operator pobrania adresu, referencji

	cout << "--------------------------------------" << endl;

	*p *= 2;
	cout << i << endl;
	cout << *p << endl;

	cout << "--------------------------------------" << endl;

	int* p2;
	p2 = p;
	cout << i << endl;
	cout << *p << endl;
	cout << *p2 << endl;

	cout << "--------------------------------------" << endl;

	int** p3;
	p3 = &p;

	cout << p << endl;
	cout << p2 << endl;
	cout << p3 << endl;

	cout << "--------------------------------------" << endl;

	p3 = &p2; //OK
	//*p3 = &i;   //nie OK
	// p3 = && i; //nie OK
	// p3 = &(&i);//nie OK

	i *= 100;
	cout << i << endl;
	cout << *p << endl;
	cout << *p2 << endl;
	cout << **p3 << endl;

	cout << "--------------------------------------" << endl;
	cout << &i << endl;
	cout << &*p << endl;
	cout << &*p2 << endl;
	cout << &**p3 << endl;

	cout << "--------------------------------------" << endl;
	void* ptr;
	ptr = &i;
	//cout << *ptr << endl; // nie da siê bo typ danej spod adresu jest nieznany

	int* np1 = static_cast<int*>(ptr);
	cout << "static_cast<int*>(ptr)" << *np1 << endl;
	long* np2 = static_cast<long*>(ptr);
	cout << "static_cast<long*>(ptr)" << *np2 << endl;
	short* np3 = static_cast<short*>(ptr);
	cout << "static_cast<short*>(ptr)" << *np3 << endl;
	signed char* np4 = static_cast<signed char*>(ptr);
	cout << "static_cast<signed char*>(ptr)" << *np4 << endl;

	cout << "--------------------------------------" << endl;

	string s1, * ps1, s2, * ps2;
	s1 = "to jest s1;";
	ps1 = &s1;
	s2 = "to jest s2;";
	ps2 = &s2;
	cout << "s1: " << s1 << endl;
	cout << "*ps1: " << *ps1 << endl;
	cout << "s2: " << s2 << endl;
	cout << "*ps2: " << *ps2 << endl;

	cout << "------------- swap1(ps1, ps2); ------------------" << endl;
	swap1(ps1, ps2);
	cout << "s1: " << s1 << endl;
	cout << "*ps1: " << *ps1 << endl;
	cout << "s2: " << s2 << endl;
	cout << "*ps2: " << *ps2 << endl;

	cout << "------------- swap2(s1, s2); ------------------" << endl;
	swap2(s1, s2);
	cout << "s1: " << s1 << endl;
	cout << "*ps1: " << *ps1 << endl;
	cout << "s2: " << s2 << endl;
	cout << "*ps2: " << *ps2 << endl;

	cout << "--------------------------------------" << endl;

	string* ps3;
	ps3 = new string;
	*ps3 = "Ala ma kota";
	cout << "*ps3: " << *ps3 << endl;
	delete(ps3);
	//cout << "po delete *ps3: " << *ps3 << endl;// dane przypadkowe

	cout << "---------------- struct Struktura ----------------------" << endl;

	struct Struktura
	{
		int i1;
		double d2;
		string s3;
		double t4[4];
	};
	cout << "---------------- time ----------------------" << endl;
	time_t tt = time(NULL);
	cout << "liczba lat od 1970-01-01 00:00:00 - " << tt / 60.0 / 60 / 24 / 365 << endl;


	char buf[30];
	ctime_s(buf, sizeof(buf), &tt);
	cout << "1) formatted date time: " << buf << endl;

	tm tm;
	localtime_s(&tm, &tt);
	strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S", &tm);
	cout << "2) formatted date time: " << buf << endl;
	srand(time(NULL));
	Struktura rec;
	rec.i1 = 345;
	rec.d2 = 10.0 / 333;
	rec.s3 = "To jest pole s3 w rec";
	for (int i = 0; i < size(rec.t4); i++) rec.t4[i] = rand() / 3.0;

	cout << "rec.i1: " << rec.i1 << endl;
	cout << "rec.d2: " << rec.d2 << endl;
	cout << "rec.s3: " << rec.s3 << endl;
	for (int i = 0; i < size(rec.t4); i++) cout << " rec.t4[i]: " << rec.t4[i];
	cout << endl;



	cout << "---------------- struct Struktura dynamicznie ----------------------" << endl;
	Struktura* prec;
	prec = new Struktura;
	(*prec).i1 = 345;
	(*prec).d2 = 10.0 / 333;
	(*prec).s3 = "To jest pole s3 w *prec";
	for (int i = 0; i < size((*prec).t4); i++) (*prec).t4[i] = rand() / 3.0;

	cout << "*prec.i1: " << (*prec).i1 << endl;
	cout << "*prec.d2: " << (*prec).d2 << endl;
	cout << "*prec.s3: " << (*prec).s3 << endl;
	for (int i = 0; i < size((*prec).t4); i++) cout << " *prec.t4[i]: " << (*prec).t4[i];
	cout << endl;

	delete(prec);
	cout << "--------------------------------------" << endl;


	cout << "---------------  tab 1D  ----------------------" << endl;
	const int nn = 123;
	int tabl1D[nn];
	for (int i = 0; i < size(tabl1D);i++) tabl1D[i] = rand() % 100;
	for (int i = 0; i < size(tabl1D);i++) cout << i + 1 << " " << tabl1D[i] << endl;

	cout << "---------------  tab 1D dynamiczna ----------------------" << endl;
	int nnn = 10 + rand() % 12;
	int* tabl1Dd = new int[nnn];
	for (int i = 0; i < nnn; i++) tabl1Dd[i] = rand() % 100;
	for (int i = 0; i < nnn; i++) cout << i + 1 << " " << tabl1Dd[i] << endl;
	delete[] tabl1Dd;

	cout << "---------------  tab 2D  ----------------------" << endl;
	const int nw = 10;
	const int nk = 8;
	int tabl2D[nw][nk];
	for (int i = 0; i < nw; i++)
		for (int j = 0; j < nk; j++)
			tabl2D[i][j] = 100 + rand() % 100;

	for (int i = 0; i < nw; i++)
	{
		for (int j = 0; j < nk; j++)
			cout << tabl2D[i][j] << " ";
		cout << endl;
	}

	cout << "---------------  tab 2D dynamiczna ----------------------" << endl;
	int nwd = 10;
	int nkd = 8;
	int** tabl2Dd = new int* [nwd];
	for (int i = 0; i < nwd; i++)
		tabl2Dd[i] = new int[nkd];

	for (int i = 0; i < nwd; i++)
		for (int j = 0; j < nkd; j++)
			tabl2Dd[i][j] = (i + 1) * (j + 1);

	for (int i = 0; i < nwd; i++)
	{
		for (int j = 0; j < nkd; j++)
			cout << setfill(' ')<< setw(4) << tabl2Dd[i][j];
		cout << endl;
	}

	for (int i = 0; i < nwd; i++)
		delete[] tabl2Dd[i];
	delete[] tabl2Dd;

	cout << "----------- vector 1D ---------------------------" << endl;
	vector<int> v1d;
	int nv = 10 + rand() % 11;
	for (int i = 0; i < nv; i++) v1d.push_back(rand());
	for (int i = 0; i < v1d.size(); i++) cout << v1d[i]<<" ";
	cout << endl;
	for (int i = 0; i < v1d.size(); i++) cout << v1d.at(i) << " ";
	v1d.clear();

	nv = 10 + rand() % 11;
	for (int i = 0; i < nv; i++) v1d.push_back(rand());
	for (int i = 0; i < v1d.size(); i++) cout << v1d[i] << " ";	
	cout << endl;

	cout << "----------- vector 2D ---------------------------" << endl;
	vector<vector<int>> v2d;
	int nvw = 10 + rand() % 11;
	int nvk = 10 + rand() % 11;
	for (int i = 0; i < nvw; i++)
	{
		vector<int> w;
		for (int j = 0; j < nvk; j++)
			w.push_back(rand() % 1000);
		v2d.push_back(w);
	}

	for (int i = 0; i < v2d.size(); i++)
	{
		for (int j = 0; j < v2d[i].size(); j++)
			cout << setfill(' ') << setw(4) << v2d[i][j];
		cout << endl;
	}

	for (int i = 0; i < v2d.size(); i++)
		v2d[i].clear();
	v2d.clear();


	system("pause");
}

