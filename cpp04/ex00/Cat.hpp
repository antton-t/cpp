#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : virtual public Animal
{
	public :

	Cat(void);
	~Cat(void);

	virtual void	makeSound(void) const;

	private :

};

#endif
