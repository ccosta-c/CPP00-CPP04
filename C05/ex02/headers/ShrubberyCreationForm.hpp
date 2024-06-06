
#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include <iostream>
# include <exception>
# include <unistd.h>
# include "Bureaucrat.hpp"

# define RED "\033[1;31m"
# define NRM "\033[0m"
# define GRN "\033[1;32m"
# define BLD "\033[1;37m"
# define CYAN "\033[1;36m"

class Bureaucrat;

class ShrubberyCreationForm : public AForm {
  private:
	std::string target;
  public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm &copy);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &values);
	~ShrubberyCreationForm();

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

std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm &values);

#endif
