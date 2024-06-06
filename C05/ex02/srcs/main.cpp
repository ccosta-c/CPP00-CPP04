
#include "../headers/AForm.hpp"
#include "../headers/Bureaucrat.hpp"
#include "../headers/ShrubberyCreationForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		Bureaucrat Joaquim("Joaquim", 1);
		PresidentialPardonForm Tree("test");
		Joaquim.signForm(Tree);
		Joaquim.executeForm(Tree);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
