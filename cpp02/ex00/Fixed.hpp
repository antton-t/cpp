#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
	public :

	Fixed(void);
	Fixed(int i);
	~Fixed(void);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);

	private :

	int			_value;
	static const int	_fractPart;
};
#endif
