#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
    std::cout << "Weapon Constructor called" << std::endl;
    return;
}

Weapon::~Weapon()
{
    std::cout << "Weapon Destructor called" << std::endl;
    return;
}

const std::string& Weapon::getType() const
{
    return _type;
}

void Weapon::setType(const std::string& type)
{
    _type = type;
}
