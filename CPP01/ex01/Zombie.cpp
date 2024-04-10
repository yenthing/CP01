#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    std::cout << "Zombie " << _name << " is born" << std::endl;
}

Zombie::Zombie(void)
{
    std::cout << "Zombie " << "(NULL)" << " is born" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << _name << " is dead" << std::endl;
}

void Zombie::announce(void) const
{
    std::cout << "Zombie " << _name << "Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::setName(std::string name)
{
    _name = name;
}
