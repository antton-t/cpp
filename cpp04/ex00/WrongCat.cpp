#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "Constructor Default WrongCat" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destructor Default WrongCat" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Cat cat they are fake what did you expected" << std::endl;
}
