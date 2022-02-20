#include <iostream>

int	main()
{
	std::string	brain = "HI THIS IS BRAIN";

	std::string	*ptr = &brain;
	std::string	&ref = brain;

	std::cout << "Adress string in memory " << &brain << std::endl;
	std::cout << "Adress stored in ptr " << ptr << std::endl;
	std::cout << "Adress stored in ref " << &ref << std::endl;
	std::cout << std::endl;
	std::cout << "Value string in memory " << brain << std::endl;
	std::cout << "Value stored in ptr " << *ptr << std::endl;
	std::cout << "Value stored in ref " << ref << std::endl;
	return (0);
}
