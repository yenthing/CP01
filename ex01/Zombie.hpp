#pragma once

#include <iostream>
#include <string>

class Zombie
{
    public:
        Zombie();
        ~Zombie();
        Zombie* ZomBie[10];
        void announce(void) const;
        void setName(std::string name);
    private:
        std::string _name;
};
