
#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		Harl harlinho;
		harlinho.complain(argv[1]);
	}
	else
		std::cout << "Please insert a valid word: DEBUG, INFO, WARNING, ERROR\n";
}
