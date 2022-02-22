#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <complex>
#include <valarray>
class Fixed {

	public :

	Fixed(void);
	Fixed(int nb);
	Fixed(float fl);
	Fixed(Fixed const &b);
	~Fixed(void);

	int		toInt(void) const;
	float	toFloat( void ) const;
	Fixed&	operator=(Fixed const &i);

	private :

	int					_floatValue;
	static const int	_fractPart = 8;

};

	std::ostream	&operator<<(std::ostream &ost, Fixed const &i);

#endif
