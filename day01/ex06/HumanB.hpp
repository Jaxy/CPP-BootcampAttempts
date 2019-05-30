#ifndef HUMAN_B_HPP_
#define HUMAN_B_HPP_

#include "Weapon.hpp"

class HumanB {
private:
    Weapon *weapon;
    std::string name;
public:
    HumanB();
    HumanB(std::string);
    void setWeapon(Weapon&);
    void attack();
};

#endif