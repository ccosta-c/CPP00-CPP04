
#include "../headers/Bureaucrat.hpp"
#include <iostream>

# define RED "\033[1;31m"
# define NRM "\033[0m"
# define GRN "\033[1;32m"
# define BLD "\033[1;37m"
# define CYAN "\033[1;36m"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
	std::cout << "Constructed Bureaucrat " << GRN << _name << NRM << " with the grade " << CYAN << _grade << NRM << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &copy)
{
	*this = copy;
	std::cout << "Copy Constructor Bureaucrat " << GRN << copy._name << NRM << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &values)
{
	if(this != &values)
		this->_grade =values._grade;
	return(*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << RED << "Destructed Bureaucrat " << GRN << _name << NRM << std::endl;
}

std::string Bureaucrat::getName() const
{
	return(_name);
}

int Bureaucrat::getGrade() const
{
	return(_grade);
}

void Bureaucrat::incrementGrade(int ammount) {
		if (_grade - ammount < 1)
		{
			std::cout << RED << "INVALID INCREMENT! Attempted to increment Bureaucrat's Grade " GRN << _name << NRM << " by "
					  << CYAN << ammount << NRM << " to the total of " << CYAN << _grade - ammount << NRM << std::endl;
			throw GradeTooHighException();
		}
		if (_grade - ammount > 150)
		{
			std::cout << RED << "INVALID INCREMENT! Attempted to increment Bureaucrat's Grade " GRN << _name << NRM
					  << " by "
					  << CYAN << ammount << NRM << " to the total of " << CYAN << _grade - ammount << NRM << std::endl;
			throw GradeTooLowException();
		}
		_grade -= ammount;
		std::cout << "Bureaucrat " GRN << _name << NRM << " incremented by "
		<< CYAN << ammount << NRM << " to the total of " << CYAN << _grade << NRM << std::endl;
}

void Bureaucrat::decrementGrade(int ammount) {
	if (_grade + ammount < 1)
	{
		std::cout << RED << "INVALID DECREMENT! Attempted to decrement Bureaucrat's Grade " GRN << _name << NRM << " by "
				  << CYAN << ammount << NRM << " to the total of " << CYAN << _grade + ammount << NRM << std::endl;
		throw GradeTooHighException();
	}
	if (_grade + ammount > 150)
	{
		std::cout << RED << "INVALID DECREMENT! Attempted to decrement Bureaucrat's Grade " GRN << _name << NRM << " by "
				  << CYAN << ammount << NRM << " to the total of " << CYAN << _grade + ammount << NRM << std::endl;
		throw GradeTooLowException();
	}

	_grade += ammount;
	std::cout << "Bureaucrat " GRN << _name << NRM << " decremented by "
	<< CYAN << ammount << NRM << " to the total of " << CYAN << _grade << NRM << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& values) {
	os << "Bureaucrat: " << GRN << values.getName() << NRM << "     Grade: "
	<< CYAN << values.getGrade() << NRM << std::endl;
	return (os);
}
