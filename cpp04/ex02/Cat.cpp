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

Cat::Cat(const Cat &src)
{
	std::cout << "Constructor Default Cat" << std::endl;
	*this = src;
}

void	Cat::makeSound(void) const
{
	std::cout << "The cat is meowing" << std::endl;
}

void	Cat::myBrain(void) const
{
	std::cout << "Cat Brain" << std::endl;
}

std::string	Cat::getType(void)
{
	return (this->_type);
}

Cat		&Cat::operator=(const Cat &other)
{
	this->_type = other._type;
	return (*this);
}
