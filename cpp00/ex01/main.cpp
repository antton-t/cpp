#include "phone_book.hpp"
#include "contact.class.hpp"

int main(void)
{
	std::string	imput;
	Phone_book	index;
	int		end;

	std::cout << "Welcome to an awsome PhoneBook" << std::endl;
	while (1)
	{
		std::cout << "Select one of the following mode ADD | SEARCH | EXIT" << std::endl;
		getline(std::cin, imput);
		if (imput == "ADD")
		{
			end = index.add();
			if (end == 1)
			{
				std::cout  << "Bye see you :)" << std::endl;
				break ;
			}
		}
		else if (imput ==  "SEARCH")
		{
			end = index.search();
			if (end == 1)
			{
				std::cout  << "Bye see you :)" << std::endl;
				break ;
			}
		}
		else if (imput == "EXIT" || std::cin.eof())
		{
			std::cout  << "Bye see you :)" << std::endl;
			break ;
		}
		else
			std::cout  << "WRONG COMMAND" << std::endl;
		
	}
	return (1);
}
