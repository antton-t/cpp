#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"
#include <typeinfo>

class	HumanA
{
	public :

	HumanA(std::string name, Weapon &wpn);
	~HumanA();
	void	attack();

	private :

	Weapon	&_weapon;
	std::string	_name;
};

#endif
