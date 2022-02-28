#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

Animal::Animal(void)
{
	std::cout << "Constructor Default Animal" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Destructor Virtual Default Animal" << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Constructor Copy Animal" << std::endl;
	*this = src;
}

Animal &Animal::operator=(const Animal &other)
{
	this->_type = other._type;
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

Animal	**Animal::fill_animal(int i)
{
	Animal **out = new Animal*[i];

	int		j = 0;
	while (j < i)
	{
		if (j % 2 == 0)
			out[j] = new Dog();
		else
			out[j] = new Cat();
		j++;
	}
std::cout << "BUG ICI\n";
	return (out);
}
