#include "Zombie.hpp"

int main()
{
    Zombie *z = newZombie("heapZombie");
    z->announce();
    delete z;
    randomChump("StackZombie");
    return (0);
}