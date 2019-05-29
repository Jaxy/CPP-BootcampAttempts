#ifndef ZOMBIE_HPP_
#define ZOMBIE_HPP_

#include <iostream>

class Zombie {
private:
    std::string name;
    std::string type;
public:
    Zombie();
    std::string getName();
    void setName(std::string name);
    std::string getType();
    void setType(std::string type);
    void announce();
};

#endif