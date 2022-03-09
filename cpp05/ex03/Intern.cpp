#include "Intern.hpp"

Intern::Intern(void)
{

}

Intern::~Intern(void)
{

}

Intern::Intern(Intern const &intern)
{
	*this = intern;
}

Intern	&Intern::operator=(Intern const &intern)
{
	(void) intern;
	return (*this);
}

Form	*Intern::makeForm(str::string &formname, std::string &target)
{

}
