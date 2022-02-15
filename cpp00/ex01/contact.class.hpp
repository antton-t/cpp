#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class	Contact
{
	//to have access from outside;
	public:

	Contact(void);
	~Contact(void);

	void	set_first_name(std::string str);
	void	set_last_name(std::string str);
	void	set_nickname(std::string str);
	void	set_phone_number(std::string str);
	void	set_dark_secret(std::string str);

	std::string	print_first_name(void);
	std::string	print_last_name(void);
	std::string	print_nickname(void);
	std::string	print_phone_number(void);
	std::string	print_dark_secret(void);

	private :

	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkSecret;
};

#endif
