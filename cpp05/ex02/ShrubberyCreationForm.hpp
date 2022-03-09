#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <fstream>

class Form ;

class ShrubberyCreationForm : public Form
{
	public :

	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string name);
	virtual ~ShrubberyCreationForm(void);
	ShrubberyCreationForm(const ShrubberyCreationForm &shu);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &shu);

	virtual void	execute(Bureaucrat const &executor) const;
	std::string	getTarget(void);
	private :

	std::string _target;

	protected :

};

#endif
