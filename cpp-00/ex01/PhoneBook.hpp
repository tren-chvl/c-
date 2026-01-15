#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

class PhoneBook
{
private:
	Contact contact[8];
	int	index;
	int count;
	std::string promptField(const std::string &message) const;

public:
	PhoneBook();

	void addContact();
	void SearchContact();
};

#endif