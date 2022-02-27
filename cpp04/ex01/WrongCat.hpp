#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal
{
	public :

	WrongCat(void);
	~WrongCat(void);

	virtual void	makeSound(void) const;
};

#endif
