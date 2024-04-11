
#include "Harl.hpp"

void switchFunction(Harl& harlinho, int nbr)
{
	switch (nbr)
	{
		case 0:
			harlinho.complain("DEBUG");
		case 1:
			harlinho.complain("INFO");
		case 2:
			harlinho.complain("WARNING");
		case 3:
			harlinho.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break ;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		Harl harlinho;
		std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		int i;

		for (i = 0; i < 4; i++)
		{
			if (argv[1] == levels[i])
				return (switchFunction(harlinho, i), 0);
		}
			switchFunction(harlinho, 4);
	}
	else
		std::cout << "Wrong number of arguments (just need one).\n";
}
