#include "Fixed.hpp"

const int Fixed::bit = 8;

Fixed::Fixed()
	: value(0)
{
    std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(const int n)
    : value(n << bit)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n)
    : value(roundf((1 << bit) * n))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed & src )
{
    std::cout << "Copy constructor called" << std::endl;
    value = src.getRawBits();
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &				Fixed::operator=( Fixed const & rhs )
{
    std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
		value = rhs.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &o, const Fixed &fixed)
{
    o << fixed.toFloat();
    return o;
}

float Fixed::toFloat() const
{
    return ((float)value / (float)(1 << bit));
}

float Fixed::toInt() const
{
    return getRawBits() >> bit;
}

int Fixed::getRawBits() const
{
    return value;
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}
