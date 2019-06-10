#ifndef SUPER_MUTANT_HPP_
# define SUPER_MUTANT_HPP_

# include <iostream>

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public:
    SuperMutant();
    SuperMutant(const SuperMutant &src);
    SuperMutant   &operator= (const SuperMutant &rhs);
    ~SuperMutant();

    virtual void  takeDamage(int damage);
};

#endif