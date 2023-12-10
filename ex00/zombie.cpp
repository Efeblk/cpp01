#include "Zombie.hpp"

Zombie::Zombie() 
{
}

void Zombie::announce(void) {
    if (name == "Foo") {
        std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
    } else {
        std::cout << "<" << name << "> BraiiiiiiinnnzzzZ..." << std::endl;
    }
}

void Zombie::setName(std::string name) {
    this->name = name;
}
