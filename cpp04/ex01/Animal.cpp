#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Constructor Default Animal" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Destructor Default Animal" << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Constructor Copy Animal" << std::endl;
	*this = src;
}

Animal &Animal::operator=(const Animal &other)
{
	this->_type = other.getType();
	return (*this);
}

std::string	Animal::getType(void) const
{
	return(this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal does not have a Sound" << std::endl;
}

void	Animal::myBrain(void) const
{
	std::cout <<"All animal have a brain but not all have the same size" << std::endl;
}

static	Animal	**Animal::fill_animal(int i)
{
	Animal **out;
	int		j = 0;

	while (j != i)
	{
		if (i % 2 == 0)
			out[i] = new Dog();
		else
			out[i] = new Cat();
	}
	return (out)
}
