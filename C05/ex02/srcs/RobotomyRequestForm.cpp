
#include "../headers/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequest",72,45) {
	_target = "Generic";
	std::cout << "Default Constructor Form " << GRN << this->getName() << NRM << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequest",72,45) {
	this->_target = target;
	std::cout << "Constructor Form " << GRN << this->getName() << NRM << " Target: " << this->_target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy) : AForm(copy) {
	std::cout << "Copy Constructor Form " << GRN << this->getName() << NRM << std::endl;
}


RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &values) {
	if(this != &values)
	{
		this->_target =  values.getTarget();
	}
	return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << RED << "Destructed Form " << GRN << AForm::getName() << NRM << std::endl;
}

std::string RobotomyRequestForm::getTarget() const {
	return(_target);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() > this->getRequiredExecGrade())
		throw GradeTooLowException();
	if (!this->getState())
		throw NotSignedException();

	srand((unsigned) time(NULL));
	std::cout << BLD << "\nROBOTOMY STARTED ON " << CYAN << _target << BLD << std::endl;
	std::cout << "BZZZTTT WHRRRRRR BOOOOMMM" << std::endl;
	std:: cout << CYAN <<"Progress:[";

	int number = 300000 + (rand() % 1000000);
	for (int i = 0; i < 20; ++i) {
		std::cout << "#" << std::flush;
		usleep(number);
	}
	std::cout << "]" << GRN << "  ROBOTOMY COMPLETED!" << BLD << std::endl;

	number = rand() % 100;
	std::cout << number;
	if (number >= 50)
		std::cout << GRN << "ROBOTOMY PERFORMED SUCCESSFULLY ON " << CYAN << _target << BLD << "!" << std::endl;
	else
		std::cout << RED << "ROBOTOMY FAILED!" << BLD << std::endl;
}

std::ostream& operator<<(std::ostream& os, const RobotomyRequestForm &values)
{
	os << "Form : " << GRN << values.getName() << NRM << " | Target: " << values.getTarget() << " | Required Sign Grade: "
	<< values.getRequiredSignGrade() << " | Required Execution Grade: "  << values.getRequiredExecGrade() <<std::endl;
	return(os);
}
