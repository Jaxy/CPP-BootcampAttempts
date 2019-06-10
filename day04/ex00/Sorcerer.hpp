#ifndef SORCERER_HPP_
#define SORCERER_HPP_

#include <iostream>
#include <ostream>
#include "Victim.hpp"

class Sorcerer {
    private:
    std::string _name;
    std::string _title;

    public:
    Sorcerer(std::string name, std::string title);      //Constructor
    Sorcerer(Sorcerer &obj);                            //Copy constructor
    Sorcerer &operator=(Sorcerer const &rhs);           //Assignation operator
    ~Sorcerer();                                        //Destructor

    std::string getName() const;
    std::string getTitle() const;

    void polymorph(Victim const &) const;
};

std::ostream &operator<<(std::ostream &o, Sorcerer const &rhs);

#endif