#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public :

	Bureaucrat(void);
	Bureaucrat(std::string name, int i);
	~Bureaucrat(void);
	Bureaucrat(const Bureaucrat &src);
	Bureaucrat &operator =(Bureaucrat const &src);
	
	std::string	GetName(void) const;
	int			GetGrade(void) const;

	void 		signForm(Form &fo) const;
	void		executeForm(Form const &form) const;

	void		DecreGrade(void);
	void		IncreGrade(void);

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

	private :

	std::string const	_name;
	int			_grade;

};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
