
#include "../headers/Bureaucrat.hpp"

int main(void)
{
	Bureaucrat Joaquim("joaquim", 0);

	Bureaucrat Antonio(Joaquim);

	std::cout << Joaquim;
}
