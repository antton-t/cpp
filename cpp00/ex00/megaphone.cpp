#include <iostream>
#include <string>
#include <cstring>

int main (int argc, char **argv)
{
	int		i = 0;
	char	c;

	if (argc == 1)
	{
		std :: cout << "LOUD AND UNBEARABLE FEEDBACK NOISE";
		std ::cout << std::endl;
		return (0);
	}
	if (argc == 2)
	{
		while (argv[1][i])
		{
			c = toupper(argv[1][i]);
			std::cout << c;
			i++;
		}
		std::cout << std::endl;
	}
	else
		return (0);
	return 0;
}
