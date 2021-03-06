#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int nb)
{
	int	power;

	power = pow(2, this->_fractPart);
	this->_floatValue = nb * power;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float fl)
{
	int	power;

	power = pow(2, this->_fractPart);
	this->_floatValue = roundf(fl * power);
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
	int	out;
	int	power;

	power = pow(2, this->_fractPart);
	out = (int)this->_floatValue / power;
	return(out);
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
	float	out;
	int		power;

	power = pow(2, this->_fractPart);
	out = (float)this->_floatValue / power;
	return (out);
}
