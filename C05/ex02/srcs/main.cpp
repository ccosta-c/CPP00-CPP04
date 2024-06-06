
#include "../headers/AForm.hpp"
#include "../headers/Bureaucrat.hpp"
#include "../headers/ShrubberyCreationForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"

int	main()
{
	try
	{
		Bureaucrat Joaquim("Joaquim", 2);
		RobotomyRequestForm Tree("test");
		Tree.BeSigned(Joaquim);
		Tree.execute(Joaquim);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
