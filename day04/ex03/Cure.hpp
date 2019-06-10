#ifndef CURE_HPP_
# define CURE_HPP_

# include <iostream>

# include "AMateria.hpp"

class Cure : public AMateria
{
    public:
    Cure();
    Cure(const Cure &src);
    Cure &operator= (const Cure &rhs);
    ~Cure();

    AMateria *clone() const;
    virtual void use(ICharacter &target);
};

#endif