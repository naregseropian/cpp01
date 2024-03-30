#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
    std::cout << "HumanA Constructor called" << std::endl;
    return;
}

HumanA::~HumanA()
{
    std::cout << "HumanA Destructor called" << std::endl;
    return;
}

void HumanA::attack()
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}