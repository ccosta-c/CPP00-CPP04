
#include "../headers/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery",145,137) {
	_target = "undefined";
	std::cout << "Default Constructor ShrubberyCreation " << GRN << this->getName() << NRM << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery",145,137) {
	this->_target = target;
	std::cout << "Constructor ShrubberyCreation " << GRN << this->getName() << NRM << " Target: " << this->_target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy) : AForm(copy) {
	std::cout << "Copy Constructor ShrubberyCreation " << GRN << this->getName() << NRM << std::endl;
}


ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &values) {
	if(this != &values)
	{
		this->_target =  values.getTarget();
	}
	return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << RED << "Destructed ShrubberyCreation " << GRN << AForm::getName() << NRM << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const {
	return(_target);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	std::ifstream path(_target);
	std::string outName = _target;
	outName.append("_shrubbery");
}

std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm &values)
{
	os << "Form : " << GRN << values.getName() << NRM << " | Target: " << values.getTarget() << " | Required Sign Grade: "
	<< values.getRequiredSignGrade() << " | Required Execution Grade: "  << values.getRequiredExecGrade() <<std::endl;
	return(os);
}
