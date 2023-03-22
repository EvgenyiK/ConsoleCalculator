#pragma once
#include <vector>
#include <map>
#include <string>


class Calculator
{
private:
	double ret;
public:
	std::map<std::string, double> vars;
	std::map<std::string, double> funcs;

private:
	void parse(const std::string& userEnteredCommand);
public:
	Calculator()
	{
	};
	~Calculator() {};

	double Calculate(double x, char oper, double y);
	void var(std::string n);
	void let(std::string n,double d);
	void print();
	void prinvars();
	void prinfs();
};




