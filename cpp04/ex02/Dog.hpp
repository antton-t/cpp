#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal, virtual public Brain
{
	public :

	Dog(void);
	virtual ~Dog(void);
	Dog(const Dog &src);

	Dog	&operator=(const Dog &other);
	virtual void	makeSound(void) const;
	virtual void	myBrain(void) const;
	std::string		getType(void);

	private :

};

#endif
