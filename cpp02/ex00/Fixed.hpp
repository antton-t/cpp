#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
	public :

	Fixed(void);
	Fixed(Fixed &i);
	~Fixed(void);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	Fixed &	operator=(Fixed const & j);

	private :

	int					_value;
	static const int	_fractPart = 8;
};
#endif
