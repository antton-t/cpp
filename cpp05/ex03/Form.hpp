#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include <vector>
#include "Bureaucrat.hpp"

class Bureaucrat ;

class Form
{
	public :

	Form(std::string name, int execute, int sign);
	Form(void);
	virtual ~Form(void);
	Form(Form &fo);
	Form &operator=(Form &fo);
	
	void		beSigned(Bureaucrat Bureau);
	int			GetExecute(void) const;
	bool		IsSigned(void) const;
	void		execute(Bureaucrat const &executor) const;
	std::string	GetName(void) const;
	int			GetGrade(void) const;

	public :

	class GradeHighException : public std::exception
	{
		public:

		virtual const char* what() const throw();
	};
	public :

	class GradeLowException : public std::exception
	{
		public:

		const char* what() const throw();
	};
	
	class FormAlreadySign : public std::exception
	{
		public:

		const char* what() const throw();
	};
	private :

	std::string const	_name;
	bool			_sign;
	int			_gradesign;
	int			_gradeexecute;
};

void	operator<<(std::ostream &o, Form const &fo);

#endif
