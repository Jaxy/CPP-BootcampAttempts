#include "AWeapon.hpp"

AWeapon::AWeapon() {
    return ;
}

AWeapon::AWeapon(const std::string &name, int apcost, int damage) {
    this->_damage = damage;
    this->_apcost = apcost;
    this->_name = name;
    return ;
}

AWeapon::AWeapon(const AWeapon &src) {
    *this = src;
    return ;
}

AWeapon::~AWeapon() {
    return ;
}

AWeapon & AWeapon::operator= (const AWeapon &rhs) {
    this->_damage = rhs._damage;
    this->_apcost = rhs._apcost;
    this->_name = rhs._name;
    return (*this);
}

int AWeapon::getAPCost() const {
    return (this->_apcost);
}

int AWeapon::getDamage() const {
    return (this->_damage);
}

const std::string AWeapon::getName() const {
    return (this->_name);
}