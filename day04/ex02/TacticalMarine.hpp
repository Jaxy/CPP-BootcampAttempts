#ifndef TACTICAL_MARINE_HPP_
# define TACTICAL_MARINE_HPP_

# include <iostream>

# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    public:
    TacticalMarine();
    TacticalMarine(const TacticalMarine &src);
    TacticalMarine    &operator= (const TacticalMarine &rhs);
    ~TacticalMarine();


    virtual void battleCry() const;
    virtual void meleeAttack() const;
    virtual void rangedAttack() const;
    virtual ISpaceMarine *clone() const;
};

#endif