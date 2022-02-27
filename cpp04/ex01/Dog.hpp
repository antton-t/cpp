#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : virtual public Animal, virtual public Brain
{
	public :

	Dog(void);
	~Dog(void);

	virtual void	makeSound(void) const;
	virtual void	myBrain(void) const;

	private :

};

#endif
