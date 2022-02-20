#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie*	zozo;

	zozo = new Zombie(name);
	return (zozo);
}
