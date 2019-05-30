#ifndef HUMAN_HPP_
#define HUMAN_HPP_

#include "Brain.hpp"

class Human {
private:
    Brain brain;
public:
    Human();
    std::string identify();
    Brain getBrain();
};

#endif