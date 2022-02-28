#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <vector>
#include <Brain.hpp>

class Animal
{
	public :

	Animal(void);
	virtual ~Animal(void);
	Animal(const Animal &src);
	Animal	&operator=(const Animal &other);

	virtual void		makeSound(void) const;
	std::string	getType(void) const;
	virtual void		myBrain(void) const;
	static Animal		**fill_animal(int i);

	protected :

	std::string	_type;
};

#endif
