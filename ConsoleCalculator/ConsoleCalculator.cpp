#include "Calculator.h"
#include <iostream>

int main()
{

	Calculator c;
	std::string userEnteredCommand;
	
	
	/*for (const auto& elem : parsedString)
		std::cout << elem << "\n";*/

	while (std::getline(std::cin, userEnteredCommand))
	{
		auto parsedString(split(userEnteredCommand, ' '));

		if (parsedString[0] == "var")
		{
			c.var(parsedString[1]);
		}
		else if (parsedString[0] == "let")
		{
			auto p2 = split(parsedString[1], '=');
			c.let(p2[0], std::stod(p2[1]));
		}
		else if (parsedString[0] == "fn")
		{
			c.fn(parsedString[1]);
		}
		else if (parsedString[0] == "printvars")
		{
			c.printvars();
		}
		else if (parsedString[0] == "printfns")
		{
			c.printfs();
		}
	}
	


	
	
	

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


