#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Constructor Default WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor Default WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "Constructor Copy WrongAnimal" << std::endl;
	*this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	this->_type = other.getType();
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Animal does not make a sound they are fake" << std::endl;
}
