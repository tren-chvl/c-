#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main()
{
	PhoneBook phonebook;
	std::string command;

	while (true)
	{
		std::cout << "ENTER command (ADD, SEARCH, EXIT); ";
		std::getline(std::cin,command);

		if (std::cin.eof())
			break;
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.SearchContact();
		else if (command == "EXIT")
			break;
		else
			std::cout << "Unknow command." << std::endl;
	}
	return (0);
}