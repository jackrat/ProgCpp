#pragma once

using namespace System;

public ref class Matrix
{
public:
	Matrix() {};
	Matrix(int anw, int ank);
	void RandInit();
	static Matrix^ operator+(Matrix^ m1, Matrix^ m2);
	property int RowsCount { int get(); }
	property int ColsCount { int get(); }
	property String^ AsString { String^ get(); }
	property double default[int, int]{ double get(int i, int j); void set(int i, int j, double v); }
	property array<double>^ default[int]{ array<double>^ get(int i); }
private:
	array<double, 2>^ tab;
	Matrix^ Dodaj(Matrix^ M);
};

