#include "ZombieEvent.hpp"

int main() {
    ZombieEvent zoE;
    zoE.setZombieType();
    Zombie *lo = zoE.newZombie("Joe");
    lo->announce();
    delete lo;
    return 0;
}