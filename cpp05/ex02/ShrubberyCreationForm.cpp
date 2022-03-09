#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Shrubbery Form", 137, 145)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form("Shrubbery Form", 137, 145)
{
	this->_target = name;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shu)
{
	*this = shu;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &shu)
{
	this->_target = shu._target;
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget(void)
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->GetExecute() < executor.GetGrade())
		throw Form::GradeHighException();
	if (this->IsSigned() == true)
	{
		std::string	path = this->_target + "_shrubbery";

		std::ofstream file;
		file.open(path.c_str());
		file << "┼┼┼┼┼┼┼▄▀▀▀▄▄▄▄▄▄▄▀▀▀▄┼┼┼┼┼┼" << std::endl;
		file << "┼┼┼┼┼┼┼█▒▒░░░░░░░░░▒▒█┼┼┼┼┼┼" << std::endl;
		file << "┼┼┼┼┼┼┼┼█░░█░░░░░█░░█┼┼┼┼┼┼┼" << std::endl;
		file << "┼┼┼┼─▄▄──█░░░▀█▀░░░█──▄▄─┼┼┼" << std::endl;
		file << "┼┼┼┼█░░█─▀▄░░░░░░░▄▀─█░░█┼┼┼" << std::endl;
		file << "┼██░██░████░██░░░██░░░█████┼" << std::endl;
		file << "┼██▄██░██▄▄░██░░░██░░░██░██┼" << std::endl;
		file << "┼██▀██░██▀▀░██░░░██░░░██░██┼" << std::endl;
		file << "┼██░██░████░████░████░█████┼;" << std::endl;
		file.close();
	}
	return ;
}
