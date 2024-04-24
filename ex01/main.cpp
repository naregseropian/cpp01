#include "Zombie.hpp"

int main(void)
{
    Zombie  *zombiePtr;

    zombiePtr = zombieHorde(3, "Zombie");
    for (int i = 0; i < 3; i++){
		zombiePtr[i].announce();
	}
    delete[] zombiePtr;
    return (0);
}
