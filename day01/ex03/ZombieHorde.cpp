#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) {
    std::string randomNames[] = { "Joe", "Bill", "Sam", "Jill", "Harry"};
    int randIndex;
    srand(time(NULL));
    this->zombies = new Zombie[n];
    this->size = n;
    for (int i = 0; i < n; i++) {
        randIndex = (rand() % 100) % 5;
        this->zombies[i].setName(randomNames[randIndex]);
        this->zombies[i].setType("typo");
    }
}

ZombieHorde::~ZombieHorde() {
    delete [] this->zombies;
}

void ZombieHorde::announce() {
    for (int i = 0; i < this->size; i++) {
        this->zombies[i].announce();
    }
}