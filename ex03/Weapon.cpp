#include "Weapon.hpp"

Weapon::Weapon() {
    this->type = "";
}

Weapon::Weapon(std::string type) {
    this->type = type;
}

std::string const &Weapon::getType() {
    return (this->type);
}

void Weapon::setType(std::string type) {
    this->type = type;
}

