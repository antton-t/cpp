#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
	public :

	Bureaucrat(std::string name, int i);
	~Bureaucrat(void);
	Bureaucrat(const Bureaucrat &src);
	Bureaucrat &operator =(const Bureaucrat &src);
	class GradeTooHightException : public std::exception
	{
		public :

		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public :

		const char* what() const throw();
	};
	std::string	GetName(void) const;
	int	GetGrade(void) const;
	void	DecreGrade(void);
	void	IncreGrade(void);
	

	private :

	std::string const	_name;
	int			_grade;

};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
