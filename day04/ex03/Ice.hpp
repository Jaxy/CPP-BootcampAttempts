#ifndef ICE_HPP_
# define ICE_HPP_

# include <iostream>

# include "AMateria.hpp"

class Ice : public AMateria
{
    public:
    Ice();
    Ice(const Ice &src);
    Ice &operator=(const Ice &rhs);
    ~Ice();

    AMateria *clone(void) const;
    virtual void use(ICharacter &target);
};

#endif