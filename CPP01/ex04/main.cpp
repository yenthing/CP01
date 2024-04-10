#include <iostream>
#include <fstream>
#include <string>

void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2) 
{
    std::ifstream input_file(filename);
    if (input_file)
    {
        std::ofstream output_file(filename + ".replace");
        if (output_file)
        {
            std::string line;
            while (std::getline(input_file, line)) {
                size_t pos = 0;
                while ((pos = line.find(s1, pos)) != std::string::npos) {
                    line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
                    pos += s2.length();
                }
                output_file << line << std::endl;
            }
            std::cout << "Replacement completed. Check " << filename << ".replace" << std::endl;
        }
        else
            std::cout << "Error! File is not created" << std::endl;
    }
    else
        std::cout << "Error! File is not found" << std::endl;
    
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Error! Invalid input of ac" << std::endl;
        return 1;
    }
    else
    {
        std::string filename = av[1];
        std::string s1 = av[2];
        std::string s2 = av[3];
        replaceInFile(filename, s1, s2);
    }
    return 0;
}