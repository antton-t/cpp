#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat David("David", 1);
		std::cout << David << std::endl;
		David.DecreGrade();
		std::cout << David << std::endl;
		David.IncreGrade();
		std::cout << David << std::endl;
		David.IncreGrade();
		std::cout << David << std::endl;
		David.DecreGrade();
		std::cout << David << std::endl;
	}
	catch (std::exception& e)
  	{
 		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat David("David", 151);
		std::cout << David << std::endl;
	}
	catch (std::exception& e)
  	{
 		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat David("David", 0);
		std::cout << David << std::endl;
	}
	catch (std::exception& e)
  	{
 		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat David("David", 150);
		std::cout << David << std::endl;
		David.DecreGrade();
	}
	catch (std::exception& e)
  	{
 		std::cout << e.what() << std::endl;
	}

}
