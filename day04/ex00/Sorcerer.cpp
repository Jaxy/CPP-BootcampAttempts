#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
    std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
    return;
}

Sorcerer::Sorcerer(Sorcerer &obj) {
    *this = obj;
    return;
}

Sorcerer & Sorcerer::operator=(Sorcerer const &rhs) {
    this->_name = rhs._name;
    this->_title = rhs._title;
    return (*this);
}

Sorcerer::~Sorcerer() {
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
    return;
}

std::ostream &operator<<(std::ostream &o, Sorcerer const &rhs) {
    o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;
    return (o);
}

std::string Sorcerer::getName() const {
    return this->_name;
}

std::string Sorcerer::getTitle() const {
    return this->_title;
}

void Sorcerer::polymorph(Victim const &victim) const {
    victim.getPolymorphed();
    return;
}