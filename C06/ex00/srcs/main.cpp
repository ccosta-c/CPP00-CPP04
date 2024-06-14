
#include "../headers/ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc == 2) {
		std::string nanf(argv[1]);
		ScalarConverter::convert(nanf);
	}
	else
		std::cout << RED << "Please provide one argument." << std::endl;
}
