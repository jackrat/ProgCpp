#include "Matrix.h"

Matrix::Matrix(int anw, int ank) 
{
	tab = gcnew array<double, 2>(anw, ank);
}

void Matrix::RandInit() 
{	
	Random^ rnd = gcnew Random((int)DateTime::Now.Ticks);
	for (int i = 0; i < RowsCount; i++)
		for (int j = 0; j < ColsCount; j++)
			tab[i, j] = 10 * rnd->NextDouble();
}

Matrix^ Matrix::Dodaj(Matrix^ M) 
{
	Matrix^ res = gcnew Matrix(RowsCount, ColsCount);
	for (int i = 0; i < RowsCount; i++)
		for (int j = 0; j < ColsCount; j++)
			res->tab[i, j] = this->tab[i, j] + M->tab[i, j];
	return res;
}

Matrix^ Matrix::operator+(Matrix^ m1, Matrix^ m2) 
{
	return m1->Dodaj(m2);
}

int Matrix::RowsCount::get() 
{
	return tab->GetLength(0);
}

int Matrix::ColsCount::get() 
{
	return tab->GetLength(1);
}

String^ Matrix::AsString::get() 
{
	String^ s = "";
	for (int i = 0; i < RowsCount; i++)
	{
		for (int j = 0; j < ColsCount; j++)
			s = String::Format("{0} {1,5:F2}", s, tab[i, j]);
		s += "\r\n";
	}
	return s;
}

double Matrix::default::get(int i, int j) 
{
	return tab[i, j];
}

void Matrix::default::set(int i, int j, double v) 
{
	tab[i, j] = v;
}

array<double>^ Matrix::default::get(int i) 
{
	array<double>^ w = gcnew array<double>(ColsCount);
	for (int j = 0; j < ColsCount; j++)
		w[j] = tab[i, j];
	return w;
}
