#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook() : index(0), count(0)
{

}

std::string PhoneBook::promptField(const std::string &message) const
{
	std::string input;

	std::cout << message;
	std::getline(std::cin, input);

	if (input.empty())
	{
		std::cout << "field is really empty bro :|";
		return "";
	}
	return input;
}

void PhoneBook::addContact()
{
    Contact c;

    std::string first = promptField("First name: ");
    if (first.empty()) 
		return;
    c.setFirstName(first);

    std::string last = promptField("Last name: ");
    if (last.empty()) 
		return;
    c.setLastName(last);

    std::string nick = promptField("Nickname: ");
    if (nick.empty()) 
		return;
    c.setNickname(nick);

    std::string phone = promptField("Phone number: ");
    if (phone.empty()) 
		return;
    c.setPhoneNumber(phone);

    std::string secret = promptField("Darkest secret: ");
    if (secret.empty()) 
		return;
    c.setDarkestSecret(secret);

    contact[index] = c;
    index = (index + 1) % 8;
    if (count < 8)
        count++;
    std::cout << "Contact added!" << std::endl;
}

std::string PhoneBook::formatField(const std::string &str) const
{
	if (str.length() > 10)
		return (str.substr(0,9) + ".");
	
	return (std::string(10 - str.length(), ' ') + str);
}

void PhoneBook::printTable() const
{
	std::cout << "|   Index|First Name| Last Name| NickName|" << std::endl;

	for (int i = 0; i < count; i++)
	{
		std::cout	<< "|"
					<< formatField(std::to_string(i)) << "|"
					<< formatField(contact[i].getFirstName()) << "|"
					<< formatField(contact[i].getLastName()) << "|"
					<< formatField(contact[i].getNickname()) << "|"
					<< std::endl;
	}
}

void PhoneBook::SearchContact() const
{
	if (count == 0)
	{
		std::cout << "rip no contact brodhaa." << std::endl;
		return;
	}

	printTable();
	std::cout << "enter index: " << std::endl;
	std::string input;
	std::getline(std::cin,input);
	if (input.length() != 1 || !isdigit(input[0]))
	{
		std::cout << "invalid index. " << std::endl;
		return;
	}
	int id = input[0] - '0';

	if (id < 0 || id >= count)
	{
		std::cout << "index out !" << std::endl;
		return;
	}

	std::cout << "First Name: " << contact[id].getFirstName() << std::endl;
	std::cout << "Last Name: " << contact[id].getLastName() << std::endl;
	std::cout << "NickName: " << contact[id].getNickname() << std::endl;
	std::cout << "Phone Number: " << contact[id].getPhoneNumber() << std::endl;
	std::cout << "Darknest secret: " << contact[id].getDarkestSecret() << std::endl;
}