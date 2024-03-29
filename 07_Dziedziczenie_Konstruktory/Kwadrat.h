#pragma once
#include "Figura.h"

ref class Kwadrat : Figura
{
public:
	Kwadrat(Graphics^ gr) : Figura(gr)
	{}

	void Rysuj() new
	{
		graph->DrawRectangle(Pens::Green, Parametry[0], Parametry[1],
			Parametry[2], Parametry[3] );
	}

	virtual void RysujVirt() override
	{
		graph->DrawRectangle(Pens::Green, Parametry[0], Parametry[1],
			Parametry[2], Parametry[3]);
	}
};

