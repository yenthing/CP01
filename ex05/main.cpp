#include "Harl.hpp"

int main()
{
    Harl harl;
    std::cout << "Enter the level of complaint: ";
    std::string level;
    std::cin >> level;
    harl.complain(level);
    return 0;
}