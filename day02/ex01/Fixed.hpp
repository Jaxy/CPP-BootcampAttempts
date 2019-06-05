#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iostream>
#include <cmath>

class Fixed {
    private:
    int _nb;
    static const int _nbBits = 8;

    public:
    Fixed();                                    // Constructor
    Fixed(int const nb);
    Fixed(float const nb);
    Fixed(Fixed const & src);                   // Copy Constructor
    Fixed & operator=(Fixed const & rhs);       // Assignation Operator
    
    ~Fixed();                                   // Destructor

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif