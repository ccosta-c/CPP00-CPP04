
#include "../headers/Form.hpp"
#include "../headers/Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat Joaquim("Joaquim", 75);
		Form WeddingForm("Wedding Form", 150, 0);
		std::cout << WeddingForm;
		Joaquim.decrementGrade(1);
		Joaquim.signForm(WeddingForm);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
