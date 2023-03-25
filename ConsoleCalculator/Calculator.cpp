#include "Calculator.h"
#include <iostream>

void Calculator::var(std::string n)
{
    if (!vars.contains(n))
    {
        vars.insert({n,0.0});
    }
    else {
        std::cout << "Такая переменная существует" << std::endl;
    }
}

void Calculator::let(std::string n,double d)
{
    if (vars.contains(n))
    {
        vars[n] = d;
    }
    else {
        vars.insert({ n,d });
    }
}

double Calculator::fn(std::string n)
{
    if (!vars.contains(n))
    {
        vars.insert({ n,0.0 });
    }
    else {
        std::cout << "Такая функция существует" << std::endl;
    }
    return 0.0;
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

void Calculator::print(std::string s)
{
    if (vars.contains(s))
    {
        std::cout << vars[s] <<std::endl; 
    }

    if (funcs.contains(s))
    {

        std::cout << funcs[s] << std::endl;
    }
       
}

void Calculator::printvars()
{
    for (const auto& [k, v] : vars)
        std::cout << '[' << k << "] = " << v << "; ";
}

void Calculator::printfs()
{
    for (const auto& [k, v] : funcs)
        std::cout << '[' << k << "] = " << v << "; ";
}

std::vector<std::string>& split(const std::string& s, char delim, std::vector<std::string>& elems)
{
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim))
    {
        elems.push_back(item);
    }
    return elems;
}

std::vector<std::string> split(const std::string& s, char delim)
{
    std::vector<std::string> elems;
    split(s, delim, elems);
    return elems;
}
