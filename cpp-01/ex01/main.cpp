#include "Zombie.hpp"

int main()
{
	int nb = 5;
	Zombie *horde = zombieHorde(5,"hordeZombieeeee");
	for(int i = 0; i < nb;i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}