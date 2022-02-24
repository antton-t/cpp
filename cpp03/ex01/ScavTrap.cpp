#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	std::cout << "Constructor create ScavTrap " << this->_name << std::endl;
}

ScavTrap::ScavTrap(void)
{
	std::cout << "Constructor default create ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor called ScavTrap " << this->_name << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "Gard mode activated from " << this->_name << std::endl;
}
