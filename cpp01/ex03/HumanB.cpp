#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB(void)
{

}

void	HumanB::attack(void)
{
	std::cout << this->_name <<" attacks with their " << _weapon->getType()  << std::endl;
}

void	HumanB::setWeapon(Weapon &wpn)
{
	this->_weapon = &wpn;
}
