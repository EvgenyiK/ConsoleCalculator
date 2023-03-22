#pragma once
#include <vector>
#include <map>


class Calculator
{
private:
	double n1 ;
	double n2 ;
	double ret;
	std::map<std::string, int> vars;
	std::map<std::string, int> funcs;
public:
	Calculator(double id1, double id2):n1{id1},n2{id2}
	{
	};
	~Calculator() {};
	double Calculate(double x, char oper, double y);
	void print(double ret);
};

