#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Constructor Default Dog" << std::endl;
	this->_type = "Dog";
}

Dog::~Dog(void)
{
	std::cout << "Destructor Default Dog" << std::endl;
}

Dog::Dog(const Dog &src)
{
	std::cout << "Constructor Copy Dog" << std::endl;
	*this = src;
}

void	Dog::makeSound(void) const
{
	std::cout << "The dog is barking" << std::endl;
}

void	Dog::myBrain(void) const
{
	std::cout << "Dog Brain" << std::endl;
}

Dog	&Dog::operator=(const Dog &other)
{
	this->_type = other._type;
	return (*this);
}

std::string Dog::getType(void)
{
	return (this->_type);
}
