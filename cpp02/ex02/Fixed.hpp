#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <complex>
#include <valarray>

class	Fixed
{
	public :

	Fixed(void);
	Fixed(int nb);
	Fixed(float fl);
	~Fixed(void);

	float	toFloat(void)const;
	int		toInt(void)const;
	Fixed	&operator=(Fixed const & j);
	float	operator+(Fixed const & j);
	float	operator-(Fixed const & j);
	float	operator*(Fixed const & j);
	float	operator/(Fixed const & j);

	Fixed	&operator++(void);
	Fixed	operator++(int);
	Fixed	operator--(int);
	Fixed	&operator--(void);

	static Fixed		&max(Fixed &a, Fixed &b);
	static const Fixed	&max(Fixed const &a, Fixed const &b);
	static Fixed		&min(Fixed &a, Fixed &b);
	static const Fixed	&min (Fixed const &a, Fixed const &b);
	int					getRawBits(void) const;

	private :

	int					_value;
	static const int	_fractPart = 8;

};

std::ostream	&operator<<(std::ostream &ost, Fixed const &i);

#endif
