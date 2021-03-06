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
