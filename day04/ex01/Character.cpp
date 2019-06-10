#include "Character.hpp"

Character::Character() {
    return ;
}

Character::Character(const Character &src) {
    *this = src;
    return ;
}

Character::Character(const std::string &name) {
    this->_ap = 40;
    this->_name = name;
    this->_weapon = NULL;
    return ;
}

Character::~Character() {
    return ;
}

Character & Character::operator= (const Character &rhs) {
    this->_ap = rhs._ap;
    this->_name = rhs._name;
    this->_weapon = rhs._weapon;
    return (*this);
}

std::ostream &operator<<(std::ostream &o, const Character &rhs) {
    if (rhs.getWeapon() != NULL)
    {
        o << rhs.getName() << " has " << rhs.getAP() \
            << " AP and wields a " << rhs.getWeapon()->getName() << std::endl;
    }
    else
    {
        o << rhs.getName() << " has " << rhs.getAP() \
            << " AP and is unarmed" << std::endl;
    }
    return (o);
}

void Character::recoverAP()
{
    this->_ap <= 30 ? this->_ap += 10 : this->_ap = 40;
    return ;
}

void Character::equip(AWeapon *weapon) {
    this->_weapon = weapon;
    return ;
}

void Character::attack(Enemy *enemy)
{
    int   ap_cost;

    if (this->_weapon != NULL && enemy != NULL)
    {
        ap_cost = this->_weapon->getAPCost();
        if (this->_ap - ap_cost >= 0)
        {
          std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
          this->_weapon->attack();
          enemy->takeDamage(this->_weapon->getDamage());
          if (enemy->getHP() <= 0)
              delete enemy;
          this->_ap -= ap_cost;
        }
    }
    return ;
}

int Character::getAP() const
{
    return (this->_ap);
}

AWeapon *Character::getWeapon() const
{
    return (this->_weapon);
}

const std::string Character::getName() const {
    return (this->_name);
}