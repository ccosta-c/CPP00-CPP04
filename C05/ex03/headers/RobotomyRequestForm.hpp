
#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

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

class Bureaucrat;

class RobotomyRequestForm : public AForm {
  private:
	std::string _target;
  public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm &copy);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &values);
	~RobotomyRequestForm();

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

std::ostream& operator<<(std::ostream& os, const RobotomyRequestForm &values);

#endif
