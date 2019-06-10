#ifndef VICTIM_HPP_
#define VICTIM_HPP_

#include <iostream>
#include <ostream>

class Victim {
    protected:
    std::string _name;  //We make _name protected so that Victim and any child
                        //class of Victim can have access to _name (i.e. Peon)

    public:
    Victim(std::string name);                         //Constructor
    Victim(Victim &obj);                            //Copy constructor
    Victim &operator=(Victim const &rhs);           //Assignation operator
    ~Victim();                                        //Destructor

    std::string getName() const;
    virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &o, Victim const &rhs);

#endif