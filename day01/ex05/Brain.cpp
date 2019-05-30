#include "Brain.hpp"

Brain::Brain() {
    setAddress();
    return;
}

std::string Brain::getAddress() {
    return this->address;
}

void Brain::setAddress() {
    std::stringstream address;
    address << this;
    this->address = address.str();
}

std::string Brain::identify() {
    return this->address;
}