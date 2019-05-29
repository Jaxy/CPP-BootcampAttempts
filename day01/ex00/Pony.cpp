#include "Pony.hpp"

Pony::Pony() {
    std::cout << "This is the constructor" << std::endl;
    return;
}

std::string Pony::getName() {
    return this->name;
}

void Pony::setName(std::string name) {
    this->name = name;
}

std::string Pony::getColour() {
    return this->colour;
}

void Pony::setColour(std::string colour) {
    this->colour = colour;
}

int Pony::getAge() {
    return this->age;
}

void Pony::setAge(int age) {
    this->age = age;
}

void Pony::displayDetails() {
    std::cout << "Pony Details" << std::endl;
    std::cout << "Name: \t\t" << this->name << std::endl;
    std::cout << "Colour: \t" << this->colour << std::endl;
    std::cout << "Age: \t\t" << this->age << " years" << std::endl;
}