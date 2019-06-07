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

    bool operator>(Fixed const &rhs);
    bool operator<(Fixed const &rhs);
    bool operator>=(Fixed const &rhs);
    bool operator<=(Fixed const &rhs);
    bool operator==(Fixed const &rhs);
    bool operator!=(Fixed const &rhs);

    Fixed operator+(Fixed const &rhs);
    Fixed operator-(Fixed const &rhs);
    Fixed operator*(Fixed const &rhs);
    Fixed operator/(Fixed const &rhs);

    Fixed operator++(void);
    Fixed operator++(int nb);
    Fixed operator--(void);
    Fixed operator--(int nb);

    static Fixed &min(Fixed &lhs, Fixed &rhs);
    static Fixed &max(Fixed &lhs, Fixed &rhs);
    static Fixed const &min(Fixed const &lhs, Fixed const &rhs);
    static Fixed const &max(Fixed const &lhs, Fixed const &rhs);
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif