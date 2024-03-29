#ifndef ZOMBIE_EVENT_HPP_
#define ZOMBIE_EVENT_HPP_

#include "Zombie.hpp"

class ZombieEvent {
private:
    std::string type;
public:
    ZombieEvent();
    void setZombieType();
    void randomChump();
    Zombie* newZombie(std::string name);
};

#endif