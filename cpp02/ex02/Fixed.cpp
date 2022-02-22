#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_value = 0;
}

Fixed::Fixed(int nb)
{
	int	power;

	power = pow(2, this->_fractPart);
	this->_value = nb * power;
}

Fixed::Fixed(float fl)
{
	int	power;

	power = pow(2, this->_fractPart);
	this->_value = roundf(fl * power);
}

Fixed::~Fixed(void)
{

}

Fixed &	Fixed::operator=(Fixed const & j)
{
	this->_value = j.getRawBits();
	return (*this);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a._value > b._value)
		return (a);
	else
		return (b);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a._value > b._value)
		return (a);
	else
		return (b);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a._value < b._value)
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a._value < b._value)
		return (a);
	else
		return (b);
}

float 	Fixed::operator+(Fixed const & j)
{
	return (this->toFloat() + j.toFloat());
}

float	Fixed::operator-(Fixed const & j)
{
	return (this->toFloat() - j.toFloat());
}

float	Fixed::operator*(Fixed const & j)
{
	return (this->toFloat() * j.toFloat());
}

float	Fixed::operator/(Fixed const & j)
{
	return (this->toFloat() / j.toFloat());
}

Fixed &	Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed &	Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	out(*this);
	this->_value++;
	return (out);
}

Fixed	Fixed::operator--(int)
{
	Fixed	out(*this);
	this->_value--;
	return (out);
}

std::ostream	&operator<<(std::ostream &ost, Fixed const &i)
{
	ost << i.toFloat();
	return(ost);
}

float	Fixed::toFloat(void)const
{
	float	out;
	int		power;

	power = pow(2, this->_fractPart);
	out = (float)this->_value / power;
	return (out);
}

int	Fixed::toInt(void) const
{
	int	out;
	int	power;

	power = pow(2, this->_fractPart);
	out = (int)this->_value / power;
	return(out);
}
