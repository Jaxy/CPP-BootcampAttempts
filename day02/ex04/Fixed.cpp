#include "Fixed.hpp"

Fixed::Fixed() {
    // std::cout << "Default constructor called" << std::endl;
    _nb = 0;
    return;
}

Fixed::Fixed(int const nb) {
    // std::cout << "Int constructor called" << std::endl;
    // shifting bits for nb 8 to the left
    setRawBits(nb << this->_nbBits);
    return;
}

Fixed::Fixed(float const nb) {
    // std::cout << "Float constructor called" << std::endl;
    // shifting bits 8 to the left, 1 becomes 1000 0000 (binary) which is 256 (decimal)
    // because it is a float, we need to round off to nearest whole number
    setRawBits(ceil(nb * (1 << this->_nbBits)));
    // std::cout << "\x1b[32mHello : " << getRawBits() << "\x1b[0m" << std::endl;
    return;
}

Fixed::~Fixed() {
    // std::cout << "Destructor called" << std::endl;
    return;
}

Fixed::Fixed(Fixed const & src) {
    // std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
    // std::cout << "Assignation operator called" << std::endl;
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

bool Fixed::operator>(Fixed const &rhs)
{
	return (this->toFloat() > rhs.toFloat());
}

bool Fixed::operator<(Fixed const &rhs)
{
    return (this->toFloat() < rhs.toFloat());
}

bool Fixed::operator>=(Fixed const &rhs)
{
    return (this->toFloat() >= rhs.toFloat());
}

bool Fixed::operator<=(Fixed const &rhs)
{
    return (this->toFloat() <= rhs.toFloat());
}

bool Fixed::operator==(Fixed const &rhs)
{
    return (this->toFloat() == rhs.toFloat());
}

bool Fixed::operator!=(Fixed const &rhs)
{
    return (this->toFloat() != rhs.toFloat());
}

Fixed Fixed::operator+(Fixed const &rhs)
{
	return (Fixed(this->_nb + rhs.getRawBits()));
}

Fixed Fixed::operator-(Fixed const &rhs)
{
	return (Fixed(this->_nb - rhs.getRawBits()));
}

Fixed Fixed::operator*(Fixed const &rhs)
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const &rhs)
{
	if (rhs.toFloat() != 0)
		return (Fixed(this->toFloat() / rhs.toFloat()));
	else
	{
		std::cout << "Division by 0 is not possible. Resulting value will equate to 0." << std::endl;
		return (Fixed(0));
	}
}

Fixed Fixed::operator++(void)
{
    // pre-increment
	this->_nb = this->_nb + 1;
	return (*this);
}

Fixed Fixed::operator++(int nb)
{
    // post-increment
	Fixed postAdd(*this);
	(void)nb; // parameter required for prototype (override), but is otherwise irrelevant 

	this->_nb = this->_nb + 1;
	return (postAdd);
}

Fixed Fixed::operator--(void)
{
	this->_nb = this->_nb - 1;
	return (*this);
}

Fixed Fixed::operator--(int nb)
{
	Fixed postMinus(*this);
	(void)nb; // parameter required for prototype (override), but is otherwise irrelevant 
	
	this->_nb = this->_nb - 1;
	return (postMinus);
}

Fixed &Fixed::min(Fixed &lhs, Fixed &rhs)
{
	return ((lhs.toFloat() < rhs.toFloat()) ? lhs : rhs);
}

Fixed &Fixed::max(Fixed &lhs, Fixed &rhs)
{
	return ((lhs.toFloat() > rhs.toFloat()) ? lhs : rhs);
}

Fixed const &Fixed::min(Fixed const &lhs, Fixed const &rhs)
{
	return ((lhs.toFloat() < rhs.toFloat()) ? lhs : rhs);
}

Fixed const &Fixed::max(Fixed const &lhs, Fixed const &rhs)
{
	return ((lhs.toFloat() > rhs.toFloat()) ? lhs : rhs);
}
