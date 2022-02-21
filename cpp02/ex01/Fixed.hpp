#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
class Fixed {

	public :

	Fixed(void);
	Fixed(int nb);
	Fixed(float fl);
	Fixed(Fixed const &b);
	~Fixed(void);

	int		toInt(void) const;
	float	toFloat( void ) const;
	void	operator<<(Fixed const &i);
	Fixed&	operator=(Fixed const &i);

	private :

	float				_floatValue;
	static const int	_fractPart = 8;

};

#endif
