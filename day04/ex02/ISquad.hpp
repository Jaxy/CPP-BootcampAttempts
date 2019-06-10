#ifndef I_SQUAD_HPP_
# define I_SQUAD_HPP_

# include "ISpaceMarine.hpp"

class ISquad
{
    public:
    virtual ~ISquad(void) { return ; }

    virtual int push(ISpaceMarine *marine) = 0;
    virtual int getCount(void) const = 0;
    virtual ISpaceMarine *getUnit(int n) const = 0;
};

#endif