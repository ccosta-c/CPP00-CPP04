
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>
# include "AForm.hpp"

# define RED "\033[1;31m"
# define NRM "\033[0m"
# define GRN "\033[1;32m"
# define BLD "\033[1;37m"
# define CYAN "\033[1;36m"

class AForm;

class Bureaucrat {
  private:
	std::string _name;
	int _grade;
  public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat &copy);
	~Bureaucrat();

	Bureaucrat& operator=(const Bureaucrat &values);
	std::string getName() const;
	int getGrade() const;

	void incrementGrade(int ammount);
	void decrementGrade(int ammount);
	void signForm(AForm& form);
	void executeForm(AForm const& form);

  class GradeTooHighException : public std::exception
  {
	public:
	  virtual const char *what() const throw()
	  {
		  return ("Bureaucrat grade is too high!");
	  }
  };
	class GradeTooLowException : public std::exception
	{
	  public:
		virtual const char *what() const throw()
		{
			return ("Bureaucrat grade is too low!");
		}
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat &values);

#endif
