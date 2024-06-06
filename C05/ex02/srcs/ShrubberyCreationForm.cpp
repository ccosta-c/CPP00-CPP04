
#include "../headers/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery",145,137) {
	target = "undefined";
	std::cout << "Default Constructor ShrubberyCreation " << GRN << this->getName() << NRM << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy) : AForm(copy) {
	std::cout << "Copy Constructor ShrubberyCreation " << GRN << this->getName() << NRM << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &values) {
	if(this != &values)
	{

	}
	return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << RED << "Destructed ShrubberyCreation " << GRN << _name << NRM << std::endl;
}

void ShrubberyCreationForm::BeSigned(Bureaucrat& name)
{
	if(name.getGrade() <= this->getRequiredSignGrade())
		this->_isItSigned = true;
	if(name.getGrade() > this->getRequiredSignGrade())
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm &values)
{
	os << "Form : " << GRN << values.getName() << NRM << " | Signed?: " << values.getState() << " | Required Sign Grade: "
	<< values.getRequiredSignGrade() << " | Required Execution Grade: "  << values.getRequiredExecGrade() <<std::endl;
	return(os);
}
