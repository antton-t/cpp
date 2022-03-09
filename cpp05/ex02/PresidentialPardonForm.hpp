#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class Form ;

class PresidentialPardonForm : public Form
{
	public :

	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string name);
	virtual ~PresidentialPardonForm(void);
	PresidentialPardonForm(const PresidentialPardonForm &pre);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &pre);

	virtual void		execute(Bureaucrat const &executor) const;
	std::string	getTarget(void);

	private :

	std::string _target;
};

#endif
