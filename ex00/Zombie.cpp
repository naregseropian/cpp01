#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << "Default Constructor called" << std::endl;
    return;
}

Zombie::Zombie(std::string& name) : _name(name)
{
    std::cout << _name << " Constructor called" << std::endl;
    return;
}

Zombie::~Zombie(void)
{
    std::cout << _name << " Destructor called" << std::endl;
    return;
}

void    Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

const std::string& Zombie::getZombie(void) const
{
    return (this->_name);
}

void    Zombie::setZombie(std::string& name)
{
    this->_name = name;
}
