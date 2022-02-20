#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name )
{
	int	i = 0;
	Zombie	*first = new Zombie[N];

	while (i < N)
	{
		first[i].setName(name);
		i++;
	}
	return (first);
}
