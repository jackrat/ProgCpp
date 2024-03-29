#include "pch.h"

using namespace System;


double getDouble(String^ prompt) {
    double result;
    bool ok = false;
    while (!ok)
    {
        Console::Write(prompt);
        String^ s = Console::ReadLine();
        ok = double::TryParse(s, result);
        if (!ok) Console::WriteLine("Ale¿ to musi byæ pomy³ka!");
    }
    return result;
}




int main(array<System::String ^> ^args)
{
    double a, b, c, delta, x0, x1, x2;
    Console::Write("Policzymy coœ? (t/n)");
    String^ yn = Console::ReadLine()->ToLower();
    bool repeat = yn == "t";
    while (repeat)
    {
        a = getDouble("Podaj a: ");
        b = getDouble("Podaj b: ");
        c = getDouble("Podaj c: ");

        delta = b * b - 4 * a * c;
        if (delta < 0)
            Console::WriteLine("Brak rozwi¹zañ!");
        else if (delta == 0)
        {
            x0 = -b / (2 * a);
            Console::WriteLine(String::Format("x0 = {0}", x0));
        }
        else
        {
            x1 = (-b - Math::Sqrt(delta))/ (2 * a);
            x2 = (-b + Math::Sqrt(delta)) / (2 * a);
            Console::WriteLine(String::Format("x1 = {0}\r\nx2 = {1}", x1,x2));
        }

        Console::Write("Powtórka? (t/n)");
        yn = Console::ReadLine()->ToLower();
        repeat = yn == "t";
    }
    Console::ReadLine();
    return 0;
}
