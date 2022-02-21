#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int nb)
{
	this->_floatValue = nb;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float fl)
{
	this->_floatValue = fl;
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &b)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = b;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::toInt(void) const
{
	return(this->_floatValue);
}

std::ostream	&operator<<(std::ostream &ost, Fixed const &i)
{
	ost << i.toFloat();
	return(ost);
}

Fixed	&Fixed::operator=(Fixed const &i)
{
	this->_floatValue = i._floatValue;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

float	Fixed::toFloat(void)const
{
	return(this->_floatValue);
}
