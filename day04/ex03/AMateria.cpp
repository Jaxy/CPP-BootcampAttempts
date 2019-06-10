#include "AMateria.hpp"

AMateria::AMateria() {
    return ;
}

AMateria::AMateria(const std::string &type) {
    this->xp_ = 0;
    this->_type = type;
    return ;
}

AMateria::AMateria(const AMateria &src) {
    *this = src;
    return ;
}

AMateria::~AMateria()
{
    return ;
}

AMateria & AMateria::operator=(const AMateria &rhs)
{
    this->xp_ = rhs.xp_;
    this->_type = rhs._type;
    return (*this);
}

const std::string & AMateria::getType() const {
    return (this->_type);
}

unsigned int  AMateria::getXP() const {
    return (this->xp_);
}