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

void	Dog::makeSound(void) const
{
	std::cout << "The dog is barking" << std::endl;
}

void	Dog::myBrain(void) const
{
	std::cout << "Dog Brain" << std:endl;
}
