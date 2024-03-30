#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie  *horde = new Zombie[N];
    int i = 0;
    while (i < N)
    {
        new(&horde[i]) Zombie(name);
        i++;
    }
    return horde;
}
