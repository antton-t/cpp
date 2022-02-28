#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "iostream"

class WrongAnimal
{
	public :

	WrongAnimal(void);
	virtual ~WrongAnimal(void);
	WrongAnimal(const WrongAnimal &src);

	WrongAnimal &operator=(const WrongAnimal &other);
	virtual void	makeSound(void) const;
	std::string	getType(void) const;

	protected :

	std::string _type;
};

#endif
