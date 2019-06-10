#include "PowerFist.hpp"

PowerFist::PowerFist() : PowerFist::AWeapon("Power Fist", 8, 50) {
    return ;
}

PowerFist::PowerFist(const PowerFist &src) {
    *this = src;
    return ;
}

PowerFist::~PowerFist() {
    return ;
}

PowerFist & PowerFist::operator= (const PowerFist &rhs) {
    this->_name = rhs._name;
    this->_apcost = rhs._apcost;
    this->_damage = rhs._damage;
    return (*this);
}

void PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}