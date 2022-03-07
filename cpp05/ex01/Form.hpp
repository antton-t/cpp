#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>

class Form
{
	public :

	Form(std::string name, int sign, int gradesign);
	Form(void);
	~Form(void);
	public :

	class GradeTooHighException : public std::exception
	{
		public:

		const char* what() const throw();
	};
	public :

	class GradeTooLowException : public std::exception
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

#endif
