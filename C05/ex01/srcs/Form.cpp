
#include "../headers/Form.hpp"

Form::Form() : _name("Undefined"), _isItSigned(false), _requiredSignGrade(75), _requiredExecGrade(75)
{
	std::cout << "Default Constructor Form " << GRN << _name << NRM << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name(name), _isItSigned(false), _requiredSignGrade(gradeToSign), _requiredExecGrade(gradeToExec) {
	std::cout << "Constructed Form " << GRN << _name << NRM << std::endl;
}

Form::Form(Form &copy) : _name(copy.getName()), _isItSigned(copy.getState()), _requiredSignGrade(copy.getRequiredSignGrade()), _requiredExecGrade(copy.getRequiredExecGrade()){
	std::cout << "Copy Constructor Form " << GRN << _name << NRM << std::endl;
}

Form &Form::operator=(const Form &values) {
	if(this != &values)
	{
		this->_isItSigned = values._isItSigned;
	}
	return(*this);
}

std::string Form::getName() const {
	return(_name);
}

Form::~Form() {
	std::cout << RED << "Destructed Form " << GRN << _name << NRM << std::endl;
}

bool Form::getState() const {
	return(_isItSigned);
}

int Form::getRequiredSignGrade() const {
	return (_requiredSignGrade);
}

int Form::getRequiredExecGrade() const {
	return(_requiredExecGrade);
}

std::ostream& operator<<(std::ostream& os, const Form &values)
{
	os << "Form : " << GRN << values.getName() << NRM << " | Signed?: " << values.getState() << " | Required Sign Grade: "
	<< values.getRequiredSignGrade() << " | Required Execution Grade: "  << values.getRequiredExecGrade() <<std::endl;
	return(os);
}
