#include "Calculator.h"
#include <iostream>

int main()
{
    using namespace std;

    /*double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';*/


    Calculator c;
    c.var("adl");
    c.let("adl", 2.2);

    c.print();
    c.prinvars();

    /*while (true)
    {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            cout << "Attempted to divide by zero!" << endl;
            continue;
        }
        else
        {
            result = c.Calculate(x, oper, y);
        }
        cout << "Result " << "of " << x << oper << y << " is: " << result << endl;
        break;
    }*/

    return 0;
}


