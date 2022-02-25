#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <vector>

class Animal
{
	public :

	Animal(void);
	~Animal(void);

	void		makeSound(void) const;
	std::string	getType(void) const;

	protected :

	std::string	_type;
};

#endif
