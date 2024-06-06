
#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include <iostream>
# include <fstream>
# include <exception>
# include <unistd.h>
# include<cstdlib>
# include "Bureaucrat.hpp"

# define RED "\033[1;31m"
# define NRM "\033[0m"
# define GRN "\033[1;32m"
# define BLD "\033[1;37m"
# define CYAN "\033[1;36m"
# define BLUE "\033[1;34m"

class Bureaucrat;

class PresidentialPardonForm : public AForm {
  private:
	std::string _target;
  public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm &copy);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &values);
	~PresidentialPardonForm();

	std::string getTarget() const;
	void execute(Bureaucrat const & executor) const;

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
	class NotSignedException : public std::exception
	{
	  public:
		virtual const char *what() const throw()
		{
			return ("The form is not signed!");
		}
	};
};

std::ostream& operator<<(std::ostream& os, const PresidentialPardonForm &values);

#endif
