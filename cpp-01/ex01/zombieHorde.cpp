#include "Zombie.hpp"

Zombie *zombieHorde(int nb, std::string name)
{
    if ( nb == 0)
        return (NULL);
    Zombie *horde = new Zombie[nb];
    for(int i = 0;i < nb; i++)
        horde[i].setName(name);
    return(horde);
}