#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Presidential Pardon", 5, 25)
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form("Presidential Pardon", 5, 25)
{
	this->_target = name;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &pre)
{
	*this = pre;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &pre)
{
	this->_target = pre._target;
	return (*this);
}

std::string	PresidentialPardonForm::getTarget(void)
{
	return (this->_target);
}

void		PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->GetExecute() < executor.GetGrade())
		throw Form::GradeHighException();
	if (this->IsSigned() == true)
		std::cout << "Zaphod Beeblebrox.forgive " << this->_target << std::endl;
	return ;
}
