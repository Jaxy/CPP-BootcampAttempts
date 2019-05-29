#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
    return;
}

void ZombieEvent::setZombieType() {
    this->type = "zomZom";
}

Zombie* ZombieEvent::newZombie(std::string name) {
    Zombie *newZombie = new Zombie();
    newZombie->setName(name);
    newZombie->setType(this->type);
    return newZombie;
}