
#include "../headers/Form.hpp"
#include "../headers/Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat Joaquim("Joaquim", 75);
		Form WeddingForm("Wedding Form", 150, 1);
		std::cout << WeddingForm;
		Joaquim.decrementGrade(1);
		Joaquim.signForm(WeddingForm);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Alana("Alana", 76);
		Form DivorceForm("Divorce Form", 75, 1);
		std::cout << DivorceForm;
		Alana.signForm(DivorceForm);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
