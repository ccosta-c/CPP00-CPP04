
#include "../headers/Intern.hpp"

Intern::Intern() {
	std::cout << "Default Constructed Called!" << std::endl;
}

Intern::Intern(Intern &copy) {
	(void) copy;
	*this = copy;
	std::cout << "Default Copy Constructor Called!" << std::endl;
}

Intern::~Intern() {
	std::cout << "Default Destructor Called!" << std::endl;
}

Intern &Intern::operator=(const Intern &values) {
	(void)values;
	return (*this);
}


AForm	*Intern::makeShrubberyCreation(std::string _target)
{
	std::cout << "Intern created the Shrubbery Form with the target " << CYAN << _target << NRM << std::endl;
	return new ShrubberyCreationForm(_target);
}

AForm	*Intern::makeRobotomyRequest(std::string _target)
{
	std::cout << "Intern created the Robotomy Form with the target " << CYAN << _target << NRM << std::endl;
	return new RobotomyRequestForm(_target);
}

AForm	*Intern::makePresidentialPardon(std::string _target)
{
	std::cout << "Intern created the Presidential Form with the target " << CYAN << _target << NRM << std::endl;
	return new PresidentialPardonForm(_target);
}

AForm	*Intern::makeForm(std::string _formName, std::string _targetName)
{
	AForm *(Intern::*function[3])(std::string) = {&Intern::makeShrubberyCreation, &Intern::makeRobotomyRequest, &Intern::makePresidentialPardon};
	std::string	formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	int i;
	for (i = 0; i < 3; i++)
	{
		if (formNames[i] == _formName)
			return (this->*function[i])(_targetName);
	}
	throw NotFound();
}

