#include "Human.hpp"

Human::Human() {
    return;
}

std::string Human::identify() {
    return this->brain.identify();;
}

Brain Human::getBrain() {
    return this->brain;
}