#include "Calculator.h"
#include <iostream>

int main()
{

	Calculator c;

	std::string userEnteredCommand;
	std::getline(std::cin, userEnteredCommand);
	std::vector<std::string> parsedString(split(userEnteredCommand, ' '));
	for (const auto& elem : parsedString)
		std::cout << elem << "\n";

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


