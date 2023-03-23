#pragma once
#include <vector>
#include <map>
#include <string>
#include <sstream>


class Calculator
{
private:
	double ret;
public:
	std::map<std::string, double> vars;
	std::map<std::string, double> funcs;

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


std::vector<std::string>& split(const std::string& s, char delim, std::vector<std::string>& elems);
std::vector<std::string> split(const std::string& s, char delim);


