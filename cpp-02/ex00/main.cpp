#include <iostream>
#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed b(a);
    Fixed c;

    c = b;

    std::cout << a.getRawbits() << std::endl;
    std::cout << b.getRawbits() << std::endl;
    std::cout << c.getRawbits() << std::endl;

    return (0);
}