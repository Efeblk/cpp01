#include "Zombie.hpp"

Zombie::Zombie() {
}

void Zombie::announce(void) {
    if (this->name == "Foo") {
        std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
    } else {
        std::cout << "<" << this->name << "> BraiiiiiiinnnzzzZ..." << std::endl;
    }
}

void Zombie::setName(std::string name) {
    this->name = name;
}
