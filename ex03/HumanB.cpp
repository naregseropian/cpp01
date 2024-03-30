#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    std::cout << "HumanB Constructor called" << std::endl;
    _weapon = NULL;
    return;
}

HumanB::~HumanB()
{
    std::cout << "HumanB Destructor called" << std::endl;
    return;
}

void HumanB::attack()
{
    if (_weapon == 0)
        std::cout << _name << " attacks with their fists" << std::endl;
    else
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
}
