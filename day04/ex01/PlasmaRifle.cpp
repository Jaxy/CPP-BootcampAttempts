#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {
    return ;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &src) {
    *this = src;
    return ;
}

PlasmaRifle::~PlasmaRifle() {
    return ;
}

PlasmaRifle &PlasmaRifle::operator= (const PlasmaRifle &rhs) {
    this->_name = rhs._name;
    this->_apcost = rhs._apcost;
    this->_damage = rhs._damage;
    return (*this);
}

void PlasmaRifle::attack() const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
    return ;
}