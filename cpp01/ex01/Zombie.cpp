#include "Zombie.hpp"


Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " died" << std::endl;
}

void	Zombie::annouce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}
