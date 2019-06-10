#ifndef PLASMA_RIFLE_HPP_
# define PLASMA_RIFLE_HPP_

# include <iostream>

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
    public:
    PlasmaRifle();
    PlasmaRifle(const PlasmaRifle &src);
    PlasmaRifle   &operator= (const PlasmaRifle &rhs);
    ~PlasmaRifle();

    virtual void  attack() const;
};

#endif