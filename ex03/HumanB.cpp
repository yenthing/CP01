#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    return;
}

HumanB::~HumanB()
{
    return;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
    return;
}

void HumanB::attack(void)
{
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
    return;
}
