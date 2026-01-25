#include "Harl.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Usage: ./harlFilter <level>" << std::endl;
		return 1;
	}
	std::string level = argv[1];
	int index = -1;
	std::string levels[4] = {"DEBUG","INFO","WARNING","ERROR"};
	for ( int i = 0; i < 4;i++)
	{
		if (levels[i] == level)
		{
			index = i;
			break;
		}
	}
	Harl harl;
	switch (index)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain("DEBUG");
			std::cout << std::endl;
			// fall through
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain("INFO");
			std::cout << std::endl;
			// fall through
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain("WARNING");
			std::cout << std::endl;
			// fall through
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			std::cout << std::endl;
			break;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

