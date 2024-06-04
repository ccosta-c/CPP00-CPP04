
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

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


  class GradeTooHighException : public std::exception
  {
	public:
	  virtual const char * what() const throw()
	  {
		  return ("Bureaucrat grade is too high!");
	  }
  };
	class GradeTooLowException : public std::exception {
	  public:
		virtual const char *what() const throw()
		{
			return ("Bureaucrat grade is too low!");
		}
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat &values);

#endif
