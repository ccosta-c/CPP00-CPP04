
#include "../headers/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon",25,5) {
	_target = "Generic";
	std::cout << "Default Constructor Form " << GRN << this->getName() << NRM << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Form",25,5) {
	this->_target = target;
	std::cout << "Constructor Form " << GRN << this->getName() << NRM << " Target: " << this->_target << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy) : AForm(copy) {
	std::cout << "Copy Constructor Form " << GRN << this->getName() << NRM << std::endl;
}


PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &values) {
	if(this != &values)
	{
		this->_target =  values.getTarget();
	}
	return(*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << RED << "Destructed Form " << GRN << AForm::getName() << NRM << std::endl;
}

std::string PresidentialPardonForm::getTarget() const {
	return(_target);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() > this->getRequiredExecGrade())
		throw GradeTooLowException();
	if (!this->getState())
		throw NotSignedException();
	std::cout << std::endl << CYAN << _target << NRM << " has been pardoned by Zaphod Beeblebrox!" << std::endl << std::endl;
	for (int i = 0; i < 5; ++i) {
		std::cout << BLUE << "|* * * * * * * * * * " << RED << "OOOOOOOOOOOOOOOOOOOOOOOOO|" << NRM << std::endl;
		std::cout << BLUE << "| * * * * * * * * * " << NRM << " :::::::::::::::::::::::::|" << NRM << std::endl;
		std::cout << BLUE << "|* * * * * * * * * *" << RED << " OOOOOOOOOOOOOOOOOOOOOOOOO|" << NRM << std::endl;
		std::cout << BLUE << "| * * * * * * * * * " << NRM << " :::::::::::::::::::::::::|" << NRM << std::endl;
		std::cout << BLUE << "|* * * * * * * * * *" << RED << " OOOOOOOOOOOOOOOOOOOOOOOOO|" << NRM << std::endl;
		std::cout << BLUE << "| * * * * * * * * * " << NRM << " :::::::::::::::::::::::::|" << NRM << std::endl;
		std::cout << BLUE << "* * * * * * * * * * " << RED << "OOOOOOOOOOOOOOOOOOOOOOOOO0|" << NRM << std::endl;
		std::cout << "|:::::::::::::::::::::::::::::::::::::::::::::|" << std::endl;
		std::cout << RED << "|OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO|" << NRM << std::endl;
		std::cout << "|:::::::::::::::::::::::::::::::::::::::::::::|" << std::endl;
		std::cout << RED << "|OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO|" << NRM << std::endl;
		std::cout << "|:::::::::::::::::::::::::::::::::::::::::::::|" << std::endl;
		std::cout << RED << "|OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO|" << NRM << std::endl;
		usleep(500000);
		std::cout << "\x1b[13A" << std::flush;
		std::cout << BLUE << "| * * * * * * * * * *" << NRM << "OOOOOOOOOOOOOOOOOOOOOOOOO|" << NRM << std::endl;
		std::cout << BLUE << "|* * * * * * * * * *" << RED << " :::::::::::::::::::::::::|" << NRM << std::endl;
		std::cout << BLUE << "| * * * * * * * * * " << NRM << " OOOOOOOOOOOOOOOOOOOOOOOOO|" << NRM << std::endl;
		std::cout << BLUE << "|* * * * * * * * * *" << RED << " :::::::::::::::::::::::::|" << NRM << std::endl;
		std::cout << BLUE << "| * * * * * * * * * " << NRM << " OOOOOOOOOOOOOOOOOOOOOOOOO|" << NRM << std::endl;
		std::cout << BLUE << "|* * * * * * * * * *" << RED << " :::::::::::::::::::::::::|" << NRM << std::endl;
		std::cout << BLUE << " * * * * * * * * * *" << NRM << "OOOOOOOOOOOOOOOOOOOOOOOOO0|" << NRM << std::endl;
		std::cout << RED << "|:::::::::::::::::::::::::::::::::::::::::::::|" << NRM << std::endl;
		std::cout << "|OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO|" << std::endl;
		std::cout << RED << "|:::::::::::::::::::::::::::::::::::::::::::::|" << NRM << std::endl;
		std::cout << "|OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO|" << std::endl;
		std::cout << RED << "|:::::::::::::::::::::::::::::::::::::::::::::|" << NRM << std::endl;
		std::cout << "|OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO|" << std::endl;
		if (i != 4)
			std::cout << "\x1b[13A" << std::flush;
		usleep(500000);
	}
	std::cout << std::endl;
}

std::ostream& operator<<(std::ostream& os, const PresidentialPardonForm &values)
{
	os << "Form : " << GRN << values.getName() << NRM << " | Target: " << values.getTarget() << " | Required Sign Grade: "
	<< values.getRequiredSignGrade() << " | Required Execution Grade: "  << values.getRequiredExecGrade() <<std::endl;
	return(os);
}
