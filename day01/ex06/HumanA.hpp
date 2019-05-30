#ifndef HUMAN_A_HPP_
#define HUMAN_A_HPP_

#include "Weapon.hpp"

class HumanA {
private:
    Weapon *weapon;
    std::string name;
public:
    HumanA();
    HumanA(std::string, Weapon&);
    void attack();
};

#endif