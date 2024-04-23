#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstring>

void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2) 
{
    FILE* input_file = fopen(filename.c_str(), "r");
    if (input_file)
    {
        if (s1.empty() || s2.empty())
        {
            std::cout << "Error! strings is empty" << std::endl;
            return;
        }
        std::string output_filename = filename + ".replace";
        FILE* output_file = fopen(output_filename.c_str(), "w");
        if (output_file)
        {
            char line[256];
            while (fgets(line, sizeof(line), input_file) != NULL) {
                size_t pos = 0;
                char* found;
                while ((found = strstr(line + pos, s1.c_str())) != NULL) {
                    fwrite(line + pos, 1, found - (line + pos), output_file);
                    fwrite(s2.c_str(), 1, s2.size(), output_file);
                    pos = found - line + s1.size();
                }
                fwrite(line + pos, 1, strlen(line) - pos, output_file);
            }
            std::cout << "Replacement completed. Check " << output_filename << std::endl;
            fclose(output_file);
        }
        else
            std::cout << "Error! File is not created" << std::endl;
        fclose(input_file);
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
