
#include "../headers/Form.hpp"
#include "../headers/Bureaucrat.hpp"

int	main()
{
	// MAKE MORE TESTS
	try
	{
		Bureaucrat Joaquim("Joaquim", 75);
		Form WeddingForm("Wedding Form", 75, 75);
		std::cout << WeddingForm;
		Joaquim.signForm(WeddingForm);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
