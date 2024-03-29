#pragma once
#include "Figura.h"

ref class Okrag : Figura
{
public:
	Okrag(Graphics^ gr) : Figura(gr)
	{}

	void Rysuj() new
	{
		graph->DrawEllipse(Pens::Blue, Parametry[0], Parametry[1],
			Parametry[2], Parametry[3]);
	}

	virtual void RysujVirt() override
	{
		graph->DrawEllipse(Pens::Blue, Parametry[0], Parametry[1],
			Parametry[2], Parametry[3]);
	}
};

