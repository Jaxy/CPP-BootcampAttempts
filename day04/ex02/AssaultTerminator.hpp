#ifndef ASSAULT_TERMINATOR_HPP_
# define ASSAULT_TERMINATOR_HPP_

# include <iostream>

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
    public:
    AssaultTerminator();
    AssaultTerminator(const AssaultTerminator &src);
    AssaultTerminator &operator= (const AssaultTerminator &rhs);
    ~AssaultTerminator();

    virtual void battleCry() const;
    virtual void meleeAttack() const;
    virtual void rangedAttack() const;
    virtual ISpaceMarine *clone() const;
};

#endif