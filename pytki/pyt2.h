#pragma once
using namespace System;
using namespace System::Windows::Forms;



ref class B
{
public:
	void Z() new { MessageBox::Show("Tu B.Z()!"); };
	virtual void V() override { MessageBox::Show("Tu B.V()!"); };
};


ref class P : B
{
public:
	void Z() new { MessageBox::Show("Tu P.Z()!"); };
	virtual void V() override { MessageBox::Show("Tu P.V()!"); };
};



ref class robo
{
public:
	void main()
	{
		//...
		P^ ob = gcnew B();
		ob->Z();
	}
};