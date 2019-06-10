#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : RadScorpion::Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
    return ;
}

RadScorpion::RadScorpion(const RadScorpion &src)
{
    *this = src;
    return ;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
    return ;
}

RadScorpion
&RadScorpion::operator= (const RadScorpion &rhs)
{
    if (this != &rhs)
    {
        this->_hp = rhs._hp;
        this->_type = rhs._type;
    }
    return (*this);
}