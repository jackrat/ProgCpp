#pragma once
#include "Figura.h"
ref class Rysownia
{
public:
	void UzyjFigury(Figura^ f)
	{		
		f->Rysuj();
	}
	void UzyjFiguryVirt(Figura^ f)
	{
		f->RysujVirt();
	}



};


/*

B             P
B.Mz()        P.Mz()
B.Mv()        P.Mv


B o = new B();           P o = new B();// èLE!!
B o = new P();//POLI!!   P o = new P();

*/

/*

SOLID

*/

