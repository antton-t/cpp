#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		Bureaucrat hello("hello", 15);
		Bureaucrat hi("hi", 1);

		rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
		std::cout << *rrf;
		hello.signForm(*rrf);
		rrf->execute(hi);
		delete	rrf;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("Hello", "Bender");
		delete	rrf;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
