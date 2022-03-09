#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try	{
		Form form("Formr1", 0, 150);
		std::cout << form;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------" << std::endl;
	try	{
		Form form("Formr2", 1, 0);
		std::cout << form;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------" << std::endl;
	try	{
		Form form("Formr3", 1, 151);
		std::cout << form;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------" << std::endl;
	try	{
		Form form("Formr4", 151, 1);
		std::cout << form;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------" << std::endl;
	try	{
		Bureaucrat hello("hello", 2);
		Form form("Formr5", 1, 15);

		std::cout << form;
		hello.signForm(form);
		std::cout << form;
		hello.signForm(form);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------" << std::endl;
	try	{
		Bureaucrat hello("hello", 16);
		Form form("Formr6", 1, 15);

		std::cout << form;
		hello.signForm(form);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------" << std::endl;
	try	{
		Bureaucrat hello("hello", 16);
		Bureaucrat hi("hi", 1);
		Form form("Formr7", 1, 15);

		std::cout << form;
		hello.signForm(form);
		form.execute(hi);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------" << std::endl;
	try	{
		Bureaucrat hello("hello", 15);
		Bureaucrat hi("hi", 1);
		Form form("Formr8", 1, 15);

		std::cout << form;
		hello.signForm(form);
		form.execute(hi);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------" << std::endl;
	try	{
		Bureaucrat hello("hello", 15);
		Bureaucrat hi("hi", 1);
		ShrubberyCreationForm form("Formr9");

		std::cout << form;
		hello.signForm(form);
		form.execute(hi);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------" << std::endl;
	try	{
		Bureaucrat hello("hello", 15);
		Bureaucrat hi("hi", 1);
		RobotomyRequestForm form("Formr9");

		std::cout << form;
		hello.signForm(form);
		form.execute(hi);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------" << std::endl;
	try	{
		Bureaucrat hello("hello", 15);
		Bureaucrat hi("hi", 1);
		PresidentialPardonForm form("Formr10");

		std::cout << form;
		hello.signForm(form);
		form.execute(hi);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
