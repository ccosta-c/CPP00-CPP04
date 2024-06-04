
#include "../headers/Bureaucrat.hpp"

int	main()
{
	try {
		Bureaucrat Ramiro("Ramiro", 547);
		Ramiro.incrementGrade(3);
		std::cout << Ramiro;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try {
		Bureaucrat Alfredo("Alfredo", -547);
		Alfredo.incrementGrade(3);
		std::cout << Alfredo;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try {
		Bureaucrat Lurdes("Lurdes", 50);
		Lurdes.incrementGrade(49);
		std::cout << Lurdes;
		Bureaucrat Carminda(Lurdes);
		Lurdes.decrementGrade(57);
		std::cout << Carminda;
		std::cout << Lurdes;
		Lurdes = Carminda;
		std::cout << Carminda;
		std::cout << Lurdes;
		Carminda.decrementGrade(100);
		Lurdes.incrementGrade(200);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
