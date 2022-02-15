#include "phone_book.hpp"
#include "contact.class.hpp"


Phone_book::Phone_book(void)
{
	this->nbContact = -1;
	this->listFull = -1;
}

Phone_book::~Phone_book(void)
{
}

//ADD

int	Phone_book::add(void)
{
	std::string	imput;
	int	count;
	int	tmp;

	if (Phone_book::nbContact >= -1 && Phone_book::nbContact < 7)
	{
		tmp = Phone_book::nbContact;
		tmp++;
		this->nbContact = tmp;
		count = tmp;
	}
	else
	{
		this->listFull = 1;
		this->nbContact = 0;
		count = 0;
	}
	if (std::cin.eof())
		return (1);
	std::cout << "Enter contact first name" << std::endl;
	{
		while (imput.size() == 0)
			getline(std::cin, imput);
		this->_book[count].set_first_name(imput);
	}
	if (std::cin.eof())
		return (1);
	imput = "";
	std::cout << "Enter contact last name" << std::endl;
	{
		while (imput.size() == 0)
			getline(std::cin, imput);
		this->_book[count].set_last_name(imput);
	}
	if (std::cin.eof())
		return (1);
	imput = "";
	std::cout << "Enter contact nickname" << std::endl;
	{
		while (imput.size() == 0)
			getline(std::cin, imput);
		this->_book[count].set_nickname(imput);
	}
	if (std::cin.eof())
		return (1);
	imput = "";
	std::cout << "Enter contact phone number" << std::endl;
	{
		while (imput.size() == 0)
			getline(std::cin, imput);
		this->_book[count].set_phone_number(imput);
	}
	if (std::cin.eof())
		return (1);
	imput = "";
	std::cout << "Enter contact darksecret" << std::endl;
	{
		while (imput.size() == 0)
			getline(std::cin, imput);
		this->_book[count].set_dark_secret(imput);
	}
	return (0);
}

// Search

int	Phone_book::search(void)
{
	int		i = 0;
	int		max = 0;
	std::string	str;

	if (Phone_book::nbContact == -1)
	{
		std::cout << "No contact in the list yet add one first" << std::endl;
	}
	else
	{
		if (Phone_book::listFull == 1)
			max = 7;
		else
			max = Phone_book::nbContact;
		std::cout << std::setw(10) << "Index" << "|" <<  std::setw(10) << "FirstName" << "|" << std::setw(10) << "LastName" << "|" << std::setw(10) << "Nickname" << std::endl;
		while (i <= max)
		{
			std::cout << std::setw(10) << i << "|";
			str = this->_book[i].print_first_name();
			if (str.size() > 10)
			{
				str.resize(9);
				str += '.';
				std::cout << str << "|";
			}
			else
				std::cout << std::setw(10) << str << "|";
			str = this->_book[i].print_last_name();
			if (str.size() > 10)
			{
				str.resize(9);
				str += '.';
				std::cout << str << "|";
			}
			else
				std::cout << std::setw(10) << str << "|";
			str = this->_book[i].print_nickname();
			if (str.size() > 10)
			{
				str.resize(9);
				str += '.';
				std::cout << str;
			}
			else
				std::cout << std::setw(10) << str;
			std::cout << std::endl;
			i++;
		}
		std::cout << "Which contact do you want enter his index!" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			return (1);
		if (!std::isdigit(str[0]) || str.size() > 1 || std::stoi(str) > max)
			std::cout << "Please enter a good index" << std::endl;
		else
		{
			i = stoi(str);
			str = this->_book[i].print_first_name();
			std::cout << "First Name : " << str << std::endl;
			str = this->_book[i].print_last_name();
			std::cout << "Last Name : " << str << std::endl;
			str = this->_book[i].print_nickname();
			std::cout << "Nickname : " << str << std::endl;
			str = this->_book[i].print_phone_number();
			std::cout << "Phone Number : " << str << std::endl;
			str = this->_book[i].print_dark_secret();
			std::cout << "Dark Secret : " << str << std::endl;
		}
	}
	return (0);
}
