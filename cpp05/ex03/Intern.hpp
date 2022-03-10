#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern
{
	public :

		Intern(void);
		~Intern(void);
		Intern(Intern const &intern);
		Intern& operator=(Intern const &intern);

		Form	*makeForm(std::string const &formname, std::string const &target);

		class FormInternFail: public std::exception
		{
			public :

			const char* what() const throw();
		};
	private :
};

#endif
