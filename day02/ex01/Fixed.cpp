#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    _nb = 0;
    return;
}

Fixed::Fixed(int const nb) {
    std::cout << "Int constructor called" << std::endl;
    // shifting bits for nb 8 to the left
    setRawBits(nb << this->_nbBits);
    return;
}

Fixed::Fixed(float const nb) {
    std::cout << "Float constructor called" << std::endl;
    // shifting bits 8 to the left, 1 becomes 1000 0000 (binary) which is 256 (decimal)
    // because it is a float, we need to round off to nearest whole number
    setRawBits(ceil(nb * (1 << this->_nbBits)));
    // std::cout << "\x1b[32mHello : " << getRawBits() << "\x1b[0m" << std::endl;
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
    o << rhs.toFloat();
    return o;
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
    // shifting bits 8 to the left, 1 becomes 1000 0000 (binary) which is 256 (decimal)
    return ((float)getRawBits() / (1 << this->_nbBits));
}

int Fixed::toInt() const {
    // shifting bits for nb 8 to the right to get Int value
    return (getRawBits() >> this->_nbBits);
}