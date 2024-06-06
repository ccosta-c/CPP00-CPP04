
#include "../headers/AForm.hpp"

AForm::AForm() : _name("Undefined"), _isItSigned(false), _requiredSignGrade(75), _requiredExecGrade(75) {
	std::cout << "Default Constructor AForm " << GRN << _name << NRM << std::endl;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExec) : _name(name), _isItSigned(false), _requiredSignGrade(gradeToSign), _requiredExecGrade(gradeToExec) {
	if (_requiredExecGrade < 1 || _requiredSignGrade < 1)
		throw GradeTooHighException();
	if(_requiredExecGrade > 150 || _requiredSignGrade > 150)
		throw GradeTooLowException();
	std::cout << "Constructed AForm " << GRN << _name << NRM << std::endl;
}

AForm::AForm(AForm &copy) : _name(copy.getName()), _isItSigned(copy.getState()), _requiredSignGrade(copy.getRequiredSignGrade()), _requiredExecGrade(copy.getRequiredExecGrade()){
	std::cout << "Copy Constructor AForm " << GRN << _name << NRM << std::endl;
}

AForm &AForm::operator=(const AForm &values) {
	if(this != &values)
	{
		this->_isItSigned = values._isItSigned;
	}
	return(*this);
}

std::string AForm::getName() const {
	return(_name);
}

AForm::~AForm() {
	std::cout << RED << "Destructed AForm " << GRN << _name << NRM << std::endl;
}

bool AForm::getState() const {
	return(_isItSigned);
}

int AForm::getRequiredSignGrade() const {
	return (_requiredSignGrade);
}

int AForm::getRequiredExecGrade() const {
	return(_requiredExecGrade);
}

void AForm::BeSigned(Bureaucrat& name)
{
	if(name.getGrade() <= this->getRequiredSignGrade()) {
		this->_isItSigned = true;
	}
	if(name.getGrade() > this->getRequiredSignGrade())
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const AForm &values)
{
	os << "AForm : " << GRN << values.getName() << NRM << " | Signed?: " << values.getState() << " | Required Sign Grade: "
	<< values.getRequiredSignGrade() << " | Required Execution Grade: "  << values.getRequiredExecGrade() <<std::endl;
	return(os);
}
