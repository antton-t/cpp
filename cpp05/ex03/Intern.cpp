#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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

Form	*Intern::makeForm(std::string const &FormName, std::string const &target)
{
	std::string formname[] =
	{
		"Robotomy Request",
		"Presidential Pardon",
		"Shrubbery Creation",
	};
	Form	*form[] =
	{
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target),
		new ShrubberyCreationForm(target),
	};
	Form	*formask = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (FormName.compare(formname[i]))
			delete form[i];
		else
			formask = form[i];
	}
	if (formask == NULL)
		throw Intern::FormInternFail();
	else
		std::cout << "Intern creates " << formask->GetName() << std::endl;
	return (formask);
}

const char* Intern::FormInternFail::what() const throw()
{
	return ("This form doesn't exist");
}
