#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iostream>

class Fixed {
    private:
    int _nb;
    static const int _nbBits = 8;

    public:
    Fixed();                                    // Constructor
    Fixed(Fixed const & src);                   // Copy Constructor
    Fixed & operator=(Fixed const & rhs);       // Assignation Operator
    ~Fixed();                                   // Destructor

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif