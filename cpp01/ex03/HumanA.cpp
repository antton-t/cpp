#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wpn) : _weapon(wpn)
{
	this->_name = name;
}

HumanA::~HumanA(void)
{

}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << _weapon.getType() << std::endl;
}
