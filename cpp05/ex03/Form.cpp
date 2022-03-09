#include "Form.hpp"

Form::Form(void) : _sign(false)
{
}

Form::Form(std::string name, int gradeexecute, int gradesign) : _name(name), _sign(false)
{
	if (gradeexecute > 150)
		throw Form::GradeLowException();
	if (gradeexecute < 1)
		throw Form::GradeHighException();
	if (gradesign > 150)
		throw Form::GradeLowException();
	if (gradesign < 1)
		throw Form::GradeHighException();
	this->_gradeexecute = gradeexecute;
	this->_gradesign = gradesign;
}

Form::Form(Form &fo)
{
	*this = fo;
}

Form::~Form(void)
{

}

int	Form::GetGrade() const
{
	return (this->_gradesign);
}

int Form::GetExecute() const
{
	return (this->_gradeexecute);
}

std::string	Form::GetName(void) const
{
	return (this->_name);
}

Form &Form::operator=(Form &fo)
{
	this->_gradesign = fo.GetGrade();
	this->_gradeexecute = fo.GetExecute();
	this->_sign = fo._sign;
	return (*this);
}

const char* Form::FormAlreadySign::what() const throw()
{
	return ("Form already sign");
}

const char* Form::GradeHighException::what() const throw()
{
	return ("too High impossible");
}
const char* Form::GradeLowException::what() const throw()
{
	return ("too Low impossible");
}

void	operator<<(std::ostream &o, Form const &fo)
{
	o << "Form name " <<fo.GetName() << " grade to sign " << fo.GetGrade() << " grade to execute " << fo.GetExecute() << std::endl;
}

void	Form::beSigned(Bureaucrat bureau)
{
	if (this->_gradesign < bureau.GetGrade())
		throw Form::GradeHighException();
	else
	{
		this->_sign = true;
	}
}

bool	Form::IsSigned(void) const
{
	return (this->_sign);
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (this->_gradeexecute < executor.GetGrade())
		throw Form::GradeHighException();
	else
		executor.executeForm(*this);
}
