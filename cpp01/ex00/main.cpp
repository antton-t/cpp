#include "Zombie.hpp"

int	main(void)
{
	Zombie newzon("Zombie create by newZombie");
	std::cout << "Welcome to ZombieLand! Houuuuuu" << std::endl;
	std::cout << "Zombie create by newZombie" << std::endl;
	newzon = *(newZombie("newZombie"));
	newzon.annouce();
	std::cout << "Zombie create by randomChump" << std::endl;
	randomChump("RandomChump");
	return (1);
}
