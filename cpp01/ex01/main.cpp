#include "Zombie.hpp"

int main()
{
	int	i = 10;
	Zombie	*first;

	first = zombieHorde(i, "hello");
	for(int count = 0; count < i; count++)
		first[count].annouce();
	for(int count = 0; count < i; count++)
		first[count].~Zombie();
}
