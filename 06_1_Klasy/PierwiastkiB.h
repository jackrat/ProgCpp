#pragma once
#include "PierwiastkiA.h"

ref class PierwiastkiB : PierwiastkiA
{

public:
	void setABC(String^ sa, String^ sb, String^ sc)
	{
		setA(sa);
		setB(sb);
		setC(sc);
		Oblicz();
	}

	String^ getWynikStr()
	{
		String^ s;
		if (wynik->Length == 0)
			s = "Brak rozwi¹zañ!";
		else if (wynik->Length == 1)
			s = "x0 = " + wynik[0].ToString();
		else
			s = String::Format("x1 = {0}\r\nx2 = {1}", wynik[0], wynik[1]);
		return s;
	}

	void setA(String^ sa)
	{
		a = double::Parse(sa);
	}

	void setB(String^ sb)
	{
		b = double::Parse(sb);
	}

	void setC(String^ sc)
	{
		c = double::Parse(sc);
	}

};

