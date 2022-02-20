#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	this->_type = name;
}

Weapon::~Weapon(void)
{

}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string	&Weapon::getType(void)
{
	return (this->_type);
}
