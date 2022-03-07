#include "Form.hpp"

Form::Form(void)
{

}

Form::Form(std::string name, int gradeexecute, int gradesign) : _name(name)
{
	this->_gradeexecute = gradeexecute;
	this->_gradesign = gradesign;
}

Form::~Form(void)
{

}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}
