#include "phone_book.hpp"
#include "contact.class.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

// enter value

void		Contact::set_first_name(std::string str)
{
	this->_firstName = str;
}

void		Contact::set_last_name(std::string str)
{
	this->_lastName = str;
}

void		Contact::set_nickname(std::string str)
{
	this->_nickname = str;
}

void		Contact::set_phone_number(std::string str)
{
	this->_phoneNumber = str;
}

void		Contact::set_dark_secret(std::string str)
{
	this->_darkSecret = str;
}

// Print Value

std::string	Contact::print_first_name(void)
{
	return (this->_firstName);
}

std::string	Contact::print_last_name(void)
{
	return (this->_lastName);
}

std::string	Contact::print_nickname(void)
{
	return (this->_nickname);
}

std::string	Contact::print_phone_number(void)
{
	return (this->_phoneNumber);
}

std::string	Contact::print_dark_secret(void)
{
	return (this->_darkSecret);
}
