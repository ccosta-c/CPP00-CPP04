
#ifndef INTERN_HPP
# define INTERN_HPP

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <string>

class Intern {
  public:
	Intern();
	Intern(Intern &copy);
	Intern &operator=(const Intern &values);
	~Intern();

	AForm* makeForm(std::string name, std::string target);
	AForm* makeShrubberyCreation(std::string _target);
	AForm* makeRobotomyRequest(std::string _target);
	AForm* makePresidentialPardon(std::string _target);

	class NotFound : public std::exception
	{
	  public:
		virtual const char *what() const throw()
		{
			return ("Form not found!");
		}
	};
};

#endif
