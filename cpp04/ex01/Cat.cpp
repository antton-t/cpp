#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Constructor Default Cat" << std::endl;
	this->_type = "Cat";
}

Cat::~Cat(void)
{
	std::cout << "Destructor Default Cat" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "The cat is meowing" << std::endl;
}

void	Cat::myBrain(void) const
{
	std::cout << "Cat Brain" << std:endl;
}
