#include "ClapTrap.hpp"

int main()
{
	ClapTrap Pif("antoine");

	Pif.attack("eric");
	Pif.takeDamage(6);
	Pif.beRepaired(4);
	Pif.takeDamage(3);
	Pif.beRepaired(8);
	Pif.takeDamage(17);
	return (0);
}
