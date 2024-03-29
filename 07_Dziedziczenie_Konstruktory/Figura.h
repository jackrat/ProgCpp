#pragma once

using namespace System;
using namespace System::Drawing;

ref class Figura
{
protected:
	Graphics^ graph;
public:
	Figura(Graphics^ gr)
	{
		graph = gr;
	}

	array<int>^ Parametry;

	void Rysuj()
	{
		graph->DrawString("Nie mam jeszcze kszta³tu!", gcnew Font("Arial", 20), Brushes::Red,
			Parametry[0], Parametry[1]);
	}

	virtual void RysujVirt()
	{
		graph->DrawString("Nie mam jeszcze kszta³tu!", gcnew Font("Arial", 20), Brushes::Red,
			Parametry[0], Parametry[1]);
	}


	~Figura()
	{

	}

};

