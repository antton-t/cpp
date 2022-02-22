#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(Fixed &i)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = i;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" <<std::endl;
}

Fixed &	Fixed::operator=(Fixed const & j)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->_value = j.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}
