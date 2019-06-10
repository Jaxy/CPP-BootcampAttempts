#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
    return ;
}

Ice::Ice(const Ice &src) {
    *this = src;
    return ;
}

Ice::~Ice() {
    return ;
}

Ice & Ice::operator= (const Ice &rhs) {
    if (this != &rhs)
    {
        this->xp_ = rhs.xp_;
    }
    return (*this);
}

AMateria *Ice::clone() const {
    return (new Ice());
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" \
              << std::endl;
    return ;
}