#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";

	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "addresse memoire de str:          " << &str << std::endl;
	std::cout << "addresse memoire de str en ptr:   " << ptr << std::endl;
	std::cout << "addresse memoire de str en ref:   " << &ref << std::endl;

	std::cout << std::endl;

	std::cout << "valeur de str             " << str << std::endl;
	std::cout << "valeur de str par ptr:    " << *ptr << std::endl;
	std::cout << "valeur de str par ref:    " << ref << std::endl;
	return (0);
}