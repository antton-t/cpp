#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public :

	ClapTrap(std::string name);
	ClapTrap(void);
	~ClapTrap(void);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	protected :

	std::string _name;
	int			_hitPoint = 100;
	int			_energyPoint = 100;
	int			_attackDammage = 30;
};

#endif
