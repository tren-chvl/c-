#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook() : index(0), count(0)
{

}

void PhoneBook::addContact()
{
    Contact c;

    std::string first = promptField("First name: ");
    if (first.empty()) return;
    c.setFirstName(first);

    std::string last = promptField("Last name: ");
    if (last.empty()) return;
    c.setLastName(last);

    std::string nick = promptField("Nickname: ");
    if (nick.empty()) return;
    c.setNickname(nick);

    std::string phone = promptField("Phone number: ");
    if (phone.empty()) return;
    c.setPhoneNumber(phone);

    std::string secret = promptField("Darkest secret: ");
    if (secret.empty()) return;
    c.setDarkestSecret(secret);

    contact[index] = c;
    index = (index + 1) % 8;
    if (count < 8)
        count++;

    std::cout << "Contact added!" << std::endl;
}


void SearchContact()
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
	return;
}