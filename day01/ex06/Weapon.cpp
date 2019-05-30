#include "Weapon.hpp"

Weapon::Weapon() {
    return;
}

Weapon::Weapon(std::string weapon) {
    setType(weapon);
    return;
}

std::string Weapon::getType() {
    return this->type;
}

void Weapon::setType(std::string type) {
    this->type = type;
}