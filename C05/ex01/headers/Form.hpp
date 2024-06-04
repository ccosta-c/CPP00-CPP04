
#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

# define RED "\033[1;31m"
# define NRM "\033[0m"
# define GRN "\033[1;32m"
# define BLD "\033[1;37m"
# define CYAN "\033[1;36m"

class Bureaucrat;

class Form {
  private:
	const std::string _name;
	bool _isItSigned;
	const int _requiredSignGrade;
	const int _requiredExecGrade;
  public:
	Form();
	Form(std::string name, int gradeToSign, int gradeToExec);
	Form(Form &copy);
	Form &operator=(const Form &values);
	~Form();

	std::string getName() const;
	bool getState() const;
	int getRequiredSignGrade() const;
	int getRequiredExecGrade() const;
	void BeSigned(Bureaucrat& name);

	class GradeTooHighException : public std::exception
	{
	  public:
		virtual const char *what() const throw()
		{
			return ("Grade is too high!");
		}
	};
	class GradeTooLowException : public std::exception
	{
	  public:
		virtual const char *what() const throw()
		{
			return ("Grade is too low!");
		}
	};
};

std::ostream& operator<<(std::ostream& os, const Form &values);

#endif
