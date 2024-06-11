
#include "../headers/AForm.hpp"
#include "../headers/Bureaucrat.hpp"
#include "../headers/ShrubberyCreationForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/PresidentialPardonForm.hpp"
#include "../headers/Intern.hpp"

int	main()
{
	try {
		Intern Alberto;
		AForm *test;
		test = Alberto.makeForm("presidential pardon", "USA");
		std::cout << *test;
		delete test;
		test = (Alberto.makeForm("divorce form", "Break"));
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
