#ifndef PEON_HPP_
#define PEON_HPP_

#include <iostream>
#include <ostream>
#include "Victim.hpp"

class Peon : public Victim {
    //No need to store name as it is already contained within the Victim class
    public:
    Peon(std::string name);                 //Constructor
    Peon(Peon &obj);                        //Copy constructor
    Peon &operator=(Peon const &rhs);       //Assignation operator
    ~Peon();                                //Destructor

    void getPolymorphed() const;
};

#endif