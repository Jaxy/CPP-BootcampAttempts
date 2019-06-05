#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    _nb = 0;
    return;
}

Fixed::Fixed(int const nb) {
    std::cout << "Int constructor called" << std::endl;
    _nb = nb;
    return;
}

Fixed::Fixed(float const nb) {
    std::cout << "Float constructor called" << std::endl;
    _nb = nb;
    return;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
    return;
}

Fixed::Fixed(Fixed const & src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
    std::cout << "Assignation operator called" << std::endl;
    this->_nb = rhs.getRawBits();
    return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
    // std::cout << "Assignation operator called" << std::endl;
    // this->_nb = rhs.getRawBits();
    o << rhs.toFloat();
    return o;
    // return *this;
}

int Fixed::getRawBits(void) const {
    // std::cout << "getRawBits member function called" << std::endl;
    return this->_nb;
}

void Fixed::setRawBits(int const raw) {
    this->_nb = raw;
    return;
}

float Fixed::toFloat() const {
    return (float)this->_nb;
}

int Fixed::toInt() const {
    return (int)this->_nb;
}