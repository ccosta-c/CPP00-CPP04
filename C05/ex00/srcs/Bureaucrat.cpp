
#include "../headers/Bureaucrat.hpp"
#include <iostream>

# define RED "\033[1;31m"
# define NRM "\033[0m"
# define GRN "\033[1;32m"
# define BLD "\033[1;37m"
# define CYAN "\033[1;36m"

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	_name = name;
	_grade = grade;
	if (grade < 1)
		throw GradeTooLowException();
	if (grade > 150)
		throw GradeTooHighException();
	std::cout << "Constructed Bureaucrat " << GRN << _name << NRM << " with the grade " << GRN << _grade << NRM << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &copy)
{
	*this = copy;
	std::cout << "Copy Constructor Bureaucrat " << GRN << copy._name << NRM << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &values)
{
	if(this != &values)
	{
		this->_name =values._name;
		this->_grade =values._grade;
	}
	return(*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructed Bureaucrat " << GRN << _name << NRM << std::endl;
}

std::string Bureaucrat::getName() const
{
	return(_name);
}

int Bureaucrat::getGrade() const
{
	return(_grade);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& values)
{
	os << GRN << values.getName() << NRM << ", bureaucrat grade " << GRN << values.getGrade() << NRM << ".\n";
	return (os);
}
