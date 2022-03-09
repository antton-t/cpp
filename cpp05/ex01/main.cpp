#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try	{
		Form form("Formr", 0, 150);
		std::cout << form;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------" << std::endl;
	try	{
		Form form("Formr", 1, 0);
		std::cout << form;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------" << std::endl;
	try	{
		Form form("Formr", 1, 151);
		std::cout << form;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------" << std::endl;
	try	{
		Form form("Formr", 151, 1);
		std::cout << form;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------" << std::endl;
	try	{
		Bureaucrat hello("hello", 2);
		Form form("Formr", 1, 15);

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
		Form form("Formr", 1, 15);

		std::cout << form;
		hello.signForm(form);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
