#include "zombie.hpp"

Zombie::Zombie(/* args */) {
}

void Zombie::announce(void) {
    if (this->name == "Foo") {
        std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
    } else {
        std::cout << "<" << this->name << "> BraiiiiiiinnnzzzZ..." << std::endl;
    }
}

Zombie* Zombie::newZombie(std::string name) {
    Zombie* newZombie = new Zombie();
    newZombie->name = name;
    return newZombie;
}

void Zombie::randomChump(std::string name) {
    Zombie newZombie;
    newZombie.name = name;
    newZombie.announce();
}