#ifndef RAD_SCORPION_HPP_
# define RAD_SCORPION_HPP_

# include <iostream>

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
    public:
        RadScorpion();
        RadScorpion(const RadScorpion &src);
        RadScorpion   &operator= (const RadScorpion &rhs);
        ~RadScorpion();
};

#endif