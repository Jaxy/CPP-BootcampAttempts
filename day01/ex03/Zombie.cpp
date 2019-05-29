#include "Zombie.hpp"

Zombie::Zombie() {
    return;
}

std::string Zombie::getName() {
    return this->name;
}

void Zombie::setName(std::string name) {
    this->name = name;
}

std::string Zombie::getType() {
    return this->type;
}

void Zombie::setType(std::string type) {
    this->type = type;
}

void Zombie::announce() {
    std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
}