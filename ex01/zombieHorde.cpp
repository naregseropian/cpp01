#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie  *horde = new Zombie[1];
    // int i = 0;
    // while (i < N)
    // {
    //     new(&horde[i]) Zombie(name + " " + std::to_string(i));
    //     i++;
    // }
    return horde;
}
