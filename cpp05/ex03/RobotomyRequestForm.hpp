#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form
{
	public :

	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string name);
	virtual ~RobotomyRequestForm(void);
	RobotomyRequestForm(const RobotomyRequestForm &rob);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &rob);

	virtual void	execute (Bureaucrat const &executor) const;
	std::string		getTarget(void) const;
	private :

	std::string _target;

	protected :

};

#endif
