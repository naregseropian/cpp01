#include "Zombie.hpp"

int main(void)
{
    Zombie  *zombiePtr;

    zombiePtr = zombieHorde(10, "Zombie");
    for (int i = 0; i < 10; i++){
		zombiePtr[i].announce();
	}
    delete[] zombiePtr;
    return (0);
}
