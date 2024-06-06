
#include "../headers/AForm.hpp"
#include "../headers/Bureaucrat.hpp"
#include "../headers/ShrubberyCreationForm.hpp"

int	main()
{
	try
	{
		Bureaucrat Joaquim("Joaquim", 75);
		ShrubberyCreationForm Tree;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
