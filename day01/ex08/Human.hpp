#ifndef HUMAN_HPP_
#define HUMAN_HPP_

#include <iostream>

class Human
{
    private:
    void meleeAttack(std::string const & target);
    // void meleeAttack(void);
    void rangedAttack(std::string const & target);
    void intimidatingShout(std::string const & target);

    public:
    void action(std::string const & action_name, std::string const & target);
};

#endif