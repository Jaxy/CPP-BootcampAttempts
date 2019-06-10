#ifndef POWER_FIST_HPP_
# define POWER_FIST_HPP_

# include <iostream>

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    public:
    PowerFist();
    PowerFist(const PowerFist &src);
    PowerFist     &operator= (const PowerFist &rhs);
    ~PowerFist();

    virtual void  attack() const;
};

#endif