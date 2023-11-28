#include <iostream>

int main(int argc, char const *argv[])
{
    std::string first = "HI THIS IS BRAIN";
    std::string *stringPTR = &first;
    std::string &stringREF = first;
    return 0;
}
