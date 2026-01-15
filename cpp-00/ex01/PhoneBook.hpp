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
	void SearchContact() const;
	std::string formatField(const std::string &str) const;
	void printTable() const;

};

#endif