#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
    std::cout << "Constructor called" << std::endl;
    return;
}

Zombie::~Zombie(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
