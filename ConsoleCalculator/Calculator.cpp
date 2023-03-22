#include "Calculator.h"
#include <iostream>

double Calculator::Calculate(double x, char oper, double y)
{
    switch (oper)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    default:
        return 0.0;
    }
}

void Calculator::print(double ret)
{
    if (ret != 0.0)
    {
        std::cout << ret << std::endl;
    }
    else {
        std::cout << "nan" << std::endl;
    }
}
