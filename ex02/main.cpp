#include <iostream>

int main()
{
    std::string init_string = "HI THIS IS BRAIN";
    std::string* stringPTR = &init_string;
    std::string& stringREF = init_string;
    std::cout << "Address of the string: " << &init_string << std::endl;
    std::cout << "Address of the stringPTR: " << stringPTR << std::endl;
    std::cout << "Address of the stringREF: " << &stringREF << std::endl;
    std::cout << "Value of the string: " << init_string << std::endl;
    std::cout << "Value of the stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value of the stringREF: " << stringREF << std::endl;
    return 0;
}