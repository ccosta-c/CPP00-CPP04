
#include "../headers/AForm.hpp"
#include "../headers/Bureaucrat.hpp"
#include "../headers/ShrubberyCreationForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		Bureaucrat Claudio("Claudio", 73);
		AForm *Form = new ShrubberyCreationForm("home");
		Claudio.signForm(*Form);
		Claudio.executeForm(*Form);
		delete Form;
		AForm *Robot = new RobotomyRequestForm("Marvin");
		Claudio.incrementGrade(31);
		Claudio.signForm(*Robot);
		Claudio.executeForm(*Robot);
		delete Robot;
		sleep(5);
		AForm *USA = new PresidentialPardonForm("Trump");
		Claudio.incrementGrade(41);
		Claudio.signForm(*USA);
		Claudio.executeForm(*USA);
		delete USA;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
