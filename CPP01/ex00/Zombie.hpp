#pragma once

#include <iostream>
#include <stdio.h>
#include <string>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void announce();
        void setName(std::string name);
};
