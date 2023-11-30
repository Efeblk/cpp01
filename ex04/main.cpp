#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char const *argv[])
{
    if (argc == 4)
    {
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        std::ifstream file;
        std::ofstream replace;
        file.open(argv[1]);
        replace.open(std::string(argv[1]) + ".replace");
        if (file.is_open() && replace.is_open())
        {
            std::string line;
            while (std::getline(file, line)) 
            {
                size_t pos = 0;
                while ((pos = line.find(s1, pos)) != std::string::npos) 
                {
                    line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
                    pos += s2.length();
                }
                replace << line << '\n';
            }
        }
        file.close(); 
        replace.close();
    }
    return 0;
}
