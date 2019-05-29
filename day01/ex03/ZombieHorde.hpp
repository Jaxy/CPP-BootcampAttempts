#ifndef ZOMBIE_HORDE_HPP_
#define ZOMBIE_HORDE_HPP_

#include "Zombie.hpp"

class ZombieHorde {
private:
    Zombie *zombies;
    int size;
public:
    ZombieHorde(int n);
    ~ZombieHorde();
    void announce();
};

#endif