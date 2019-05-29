#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
    return;
}

void ZombieEvent::setZombieType() {
    this->type = "zomZom";
}

void ZombieEvent::randomChump() {
    std::string randomNames[] = { "Joe", "Bill", "Sam", "Jill", "Harry"};
    srand(time(NULL));
    int randIndex = (rand() % 100) % 5;
    Zombie *newZombie = new Zombie();
    newZombie->setName(randomNames[randIndex]);
    newZombie->setType(this->type);
    newZombie->announce();
    delete newZombie;
}

Zombie* ZombieEvent::newZombie(std::string name) {
    Zombie *newZombie = new Zombie();
    newZombie->setName(name);
    newZombie->setType(this->type);
    return newZombie;
}