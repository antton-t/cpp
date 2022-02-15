#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include <string>
#include <cstring>
#include <iostream>
#include <iomanip>
#include "contact.class.hpp"

class	Phone_book
{
	public:

	Phone_book();
	~Phone_book();
	int	add(void);
	int	search(void);

	private:

	Contact	_book[8];
	int	nbContact;
	int	listFull;
};
#endif
