#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
    return ;
}

Cure::Cure(const Cure &src) {
    *this = src;
    return ;
}

Cure::~Cure() {
    return ;
}

Cure & Cure::operator= (const Cure &rhs) {
    if (this != &rhs)
    {
        this->xp_ = rhs.xp_;
    }
    return (*this);
}

AMateria *Cure::clone(void) const {
    return (new Cure());
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
    return ;
}