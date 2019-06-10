#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name) {
    std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
    return;
}

Victim::Victim(Victim &obj) {
    *this = obj;
    return;
}

Victim & Victim::operator=(Victim const &rhs) {
    this->_name = rhs._name;
    return (*this);
}

Victim::~Victim() {
    std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
}

std::ostream &operator<<(std::ostream &o, Victim const &rhs) {
    o << "I'm " << rhs.getName() << " and I like otters! " << std::endl;
    return o;
}

std::string Victim::getName() const {
    return this->_name;
}

void Victim::getPolymorphed() const {
    std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
    return;
}