#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	std::cout << "Constructor called " << this->_name << std::endl;
}

ClapTrap::ClapTrap(void)
{
	std::cout << "Constructor called " << this->_name << "ClapTrap" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called " << this->_name << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	this->takeDamage(1);
	std::cout << this->_name << " attacks " << target << " causing " << this->_attackDammage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoint <= 0) 
		std::cout << "No more point life " << this->_name << "can't take more dammage need to be repaired" << std::endl;
	if (this->_energyPoint <= 0)
		std::cout << "No more enery point" << this->_name << " can't perform any action any more" << std::endl;
	else
	{
		this->_energyPoint --;
		this->_hitPoint -= amount;
		if (this->_hitPoint <= 0)
			std::cout << this->_name << " doesn't life any more need to be repaired" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoint <= 0)
		std::cout << "No more enery point" << this->_name << " can't perform any action any more" << std::endl;
	else
	{
		this->_hitPoint += amount;
		this->_energyPoint--;
		std::cout << this->_name << " new life is " << this->_hitPoint << std::endl;
	}
}
