#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "Constructor called" << std::endl;
    return;
}

Zombie::Zombie(void)
{
    std::cout << "Default Constructor called" << std::endl;
    return;
}

Zombie::~Zombie(void)
{
    std::cout << "Default Destructor called" << std::endl;
    return;
}

void    Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
