#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : virtual public Animal, virtual public Brain
{
	public :

	Cat(void);
	~Cat(void);

	virtual void	makeSound(void) const;
	virtual void	myBrain(void) const;

	private :

};

#endif
