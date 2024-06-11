
#include "../headers/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery",145,137) {
	_target = "undefined";
	std::cout << "Default Constructor Form " << GRN << this->getName() << NRM << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery",145,137) {
	this->_target = target;
	std::cout << "Constructor Form " << GRN << this->getName() << NRM << " Target: " << this->_target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy) : AForm(copy) {
	std::cout << "Copy Constructor Form " << GRN << this->getName() << NRM << std::endl;
}


ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &values) {
	if(this != &values)
	{
		this->_target =  values.getTarget();
	}
	return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << RED << "Destructed Form " << GRN << AForm::getName() << NRM << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const {
	return(_target);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() > this->getRequiredExecGrade())
		throw GradeTooLowException();
	if (!this->getState())
		throw NotSignedException();
	std::ifstream path(_target.c_str());
	std::ofstream Outfile(getTarget().append("_shrubbery").c_str());
	Outfile << "                                            /\\ \n";
	Outfile << "/\\                                         /%%\\  /\\\n";
	Outfile << "%%\\            ,                          /%%%%\\/%%\\\n";
	Outfile << "%%%\\          ,~,                /\\       /%%%%/%%%%\\    ,   /\\\n";
	Outfile << "%%%\\         ,~~~,   /\\         /%%\\  /\\ /%%%%%//\\%%\\/\\ ,~, /%%\\\n";
	Outfile << "%%%%\\  /\\   ,~~~~~, /%%\\   /\\   /%%\\ /%%\\%/\\%/\\/%%\\%/%%\\~~~/%%%%\\\n";
	Outfile << "%%%%\\ /%%\\ /\\~~~~~~/%%%%\\ /%%\\ /%%%%\\/%%\\/%%\\%%\\%%%/%(%%\\~~/%%%%\\\n";
	Outfile << "%/\\%%/%%%%\\%%%/%%\\/%%%%%%\\%%/\\/%%/\\%%\\%%/\\%%%\\%%\\%%(%%%%%/%%%%%%%%\\ \n";
	Outfile << "/%%\\/%%%%%%\\/\\/%%\\/%%%%%%\\%/%%\\%/%%\\%%\\/%%\\_______[_]________%%%%%\\\n";
	Outfile << "%%%%/%%%%%%/%%\\%%/%%%%%%%%\\/%%\\%/%%\\%%/%%%%\\ _-       _-  _- \\%%%%%\\\n";
	Outfile << "%%%/%%%%%%%/%%\\%%/%%/\\%%%%/%%%%\\%%%%\\/%%%%%%\\______-__________\\\"\"\",\"\n";
	Outfile << "%%/%%%%%%%/%%%%\\/%%/%%\\%%%/%%%%\\%%%%\\/%%%%%%\\__===______====_]   ,~,  _-\n";
	Outfile << "%%/%%%%%%/%%%%%%,%%/%%\\%%/%%%%%%\\%%%/%%%%%%%%\\_|_|______|  |_]  ,~~~,\n";
	Outfile << " /%%%%%%%/%%%%%,~,/%%%%\\/%%%%%%%%\\%/%%%%%%%%%%\\_________|- |_] ,~~~~~,\n";
	Outfile << " /%%%%%%/%%%%%,~~~,%%%%\\/%%%%%%%%\\%/%%%%%%%%%%\\___#__#__|__|_],~~~~~~~,\n";
	Outfile << "~.:.~.:.~.:.~.:.~.:.~.:.~.:.~.:.~.:.~.:.~.:.<>.:.~.:.~.:.~.:.~.:.~.:.~.:.\n";
	Outfile.close();
}

std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm &values)
{
	os << "Form : " << GRN << values.getName() << NRM << " | Target: " << values.getTarget() << " | Required Sign Grade: "
	<< values.getRequiredSignGrade() << " | Required Execution Grade: "  << values.getRequiredExecGrade() <<std::endl;
	return(os);
}
