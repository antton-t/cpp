#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int i) : _name(name)
{
	if (i < 1)
		throw Bureaucrat::GradeTooHightException();
	if ( i > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = i;
}

Bureaucrat::~Bureaucrat(void)
{

}

Bureaucrat::Bureaucrat(void)
{

}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	*this = src;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &src)
{
	this->_grade = src._grade;
	return (*this);
}

std::string	Bureaucrat::GetName(void) const
{
	return (this->_name);
}

int	Bureaucrat::GetGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::DecreGrade(void)
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void	Bureaucrat::IncreGrade(void)
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHightException();
	this->_grade--;
}

const char* Bureaucrat::GradeTooHightException::what() const throw()
{
		return ("Grade at the top already");
}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
		return ("Grade too low please have some mercy");
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << rhs.GetName() << " bureaucrat grade " << rhs.GetGrade();
	return (o);
}
