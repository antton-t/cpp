#include "Animal.hpp"

Animal::Animal(void)
{

}

Animal::~Animal(void)
{

}

std::string	Animal::getType(void) const
{
	return(this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal does not have a Sound" << std::endl;
}
