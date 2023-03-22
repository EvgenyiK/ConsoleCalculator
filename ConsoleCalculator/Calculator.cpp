#include "Calculator.h"
#include <iostream>

void Calculator::var(std::string n)
{
    if (!Calculator::vars.contains(n))
    {
        vars.insert({n,NAN});
    }
    else {
        std::cout << "Такая переменная существует" << std::endl;
    }
}

void Calculator::let(std::string n,double d)
{
    if (Calculator::vars.contains(n))
    {
        vars[n] = d;
    }
    else {
        vars.insert({ n,d });
    }
}

void Calculator::parse(const std::string& userEnteredCommand)
{
    //
}

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

void Calculator::print()
{
    if (Calculator::ret != NAN)
    {
        std::cout << Calculator::ret << std::endl;
    }
    else {
        std::cout << "nan" << std::endl;
    }
}

void Calculator::prinvars()
{
    for (const auto& [k, v] : vars)
        std::cout << '[' << k << "] = " << v << "; ";
}

void Calculator::prinfs()
{

}
