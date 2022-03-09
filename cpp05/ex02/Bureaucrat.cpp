#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{

}

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

Bureaucrat::Bureaucrat(Bureaucrat const &src)
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

void Bureaucrat::signForm(Form &fo) const
{
	try
	{
		if (fo.IsSigned() == true)
			std::cout << "Form is already sign" << std::endl;
		else
		{
			fo.beSigned(*this);
			std::cout << this->_name << " signed " << fo.GetName() << std::endl;
		}
	}
	catch (Form::GradeHighException & e)
	{
		std::cerr << this->_name << " couldn't sign " << fo.GetName() << " because " << e.what() << std::endl;
	}
	return ;
}

void	Bureaucrat::executeForm(Form const &form) const
{
	try
	{
		if (form.IsSigned() == false)
			std::cout << "Form is not signed yet " << form.GetName() << " need to be signed first" << std::endl;
		else
			std::cout << this->GetName() << " executed " << form.GetName() << std::endl;
	}
	catch (Form::GradeHighException &e)
	{
		std::cerr << this->_name << " couldn't execute " << form.GetName() << " because " << e.what() << std::endl;
	}
}
