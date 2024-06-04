
#include "../headers/Bureaucrat.hpp"
#include "../headers/Form.hpp"

int	main()
{
	try
	{
		Bureaucrat Joaquim("Joaquim", 76);
		Form WeddingForm("Wedding Form", 75, 75);
		std::cout << WeddingForm;
		WeddingForm.BeSigned(Joaquim);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
