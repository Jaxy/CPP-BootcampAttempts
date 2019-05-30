#ifndef WEAPON_HPP_
#define WEAPON_HPP_

#include <iostream>

class Weapon {
private:
    std::string type;
public:
    Weapon();
    Weapon(std::string);
    std::string getType();
    void setType(std::string type);
};

#endif