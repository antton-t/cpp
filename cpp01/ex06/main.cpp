#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen	karen;

	if (argc != 2)
	{
		std::cout << "Error of arguments number" << std::endl;
	}
	else
		karen.handleKaren((std::string)argv[1]);
	return (0);
}
