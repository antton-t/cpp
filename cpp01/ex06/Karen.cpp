#include "Karen.hpp"

Karen::Karen(void)
{

}

Karen::~Karen(void)
{

}

void	Karen::handleKaren(std::string word)
{
	int	i = 0;

	std::string	ComplainLevel[] =
	{
		"debug",
		"info",
		"warning",
		"error",
	};
	while (i < 5)
	{
		if (word == ComplainLevel[i])
			break;
		i++;
	}
	switch (i)
	{
		case 0:
			std::cout << "[DEBUG]" << std::endl;
			this->debug();
			std::cout << std::endl;
		case 1:
			std::cout << "[INFO]" << std::endl;
			this->info();
			std::cout << std::endl;
		case 2:
			std::cout << "[WARNING]" << std::endl;
			this->warning();
			std::cout << std::endl;
		case 3:
			std::cout << "[ERROR]" << std::endl;
			this->error();
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			std::cout << std::endl;
			break;
	}
}

void	Karen::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Karen::nothing(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
