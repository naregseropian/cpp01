#include "Zombie.hpp"

int main(void)
{
    Zombie  *zombiePtr;

    zombiePtr = newZombie("Heap");
    zombiePtr->announce();
    delete zombiePtr;

    randomChump("Stack");
    
    return (0);
}
