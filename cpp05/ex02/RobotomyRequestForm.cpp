#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Robotomy Form", 45, 72)
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form("Robotomy Form", 45, 72)
{
	this->_target = name;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rob)
{
	*this = rob;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rob)
{
	this->_target = rob._target;
	return (*this);
}

std::string			RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void				RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->GetExecute() < executor.GetGrade())
		throw Form::GradeHighException();
	if (this->IsSigned() == true)
	{
		std::cout << "Drilling Drilling " << this->getTarget() << " has been robotominized";
		if (rand() % 2 == 0)
			std::cout << " with sucess" << std::endl;
		else
			std::cout << " with failure" << std::endl;
	}
	return ;
}
