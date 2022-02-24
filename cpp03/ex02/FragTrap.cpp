#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor create FragTrap " << this->_name << std::endl;
}

FragTrap::FragTrap(void)
{
	std::cout << "Constructor default created FragTrap" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor Called FragTrap " << this->_name << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High Five Guys!!" << std::endl;
}
