
#include "../headers/Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_name = name;
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
	{
		this->_name =values._name;
		this->_grade =values._grade;
	}
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

void Bureaucrat::signForm(AForm &form) {
	if (form.getState()) {
		std::cout << "The form is already signed!" << std::endl;
		return ;
	}
	try {
		form.BeSigned(*this);
		std::cout << "Bureaucrat " << GRN << this->_name << NRM << " signed the " << form.getName() << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << "Bureaucrat " << GRN << this->_name << NRM << " couldn’t sign the " << form.getName()
		<< " because "<< e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(const AForm &form) {
	try {
		form.execute(*this);
		std::cout << GRN << this->getName() << NRM << " executed " << CYAN << form.getName() << "!" << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& values)
{
	os << "Bureaucrat: " << GRN << values.getName() << NRM << "     Grade: "
	<< CYAN << values.getGrade() << NRM << std::endl;
	return (os);
}
