
#include "Harl.hpp"

void switchFunction(Harl& harlinho, int nbr)
{
	switch (nbr)
	{
		case 0:
			harlinho.complain("debug");
			harlinho.complain("info");
			harlinho.complain("warning");
			harlinho.complain("error");
			break ;
		case 1:
			harlinho.complain("info");
			harlinho.complain("warning");
			harlinho.complain("error");
			break ;
		case 2:
			harlinho.complain("warning");
			harlinho.complain("error");
			break ;
		case 3:
			harlinho.complain("error");
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
		std::string levels[4] = {"debug", "info", "warning", "error"};
		int i;
		bool match = false;

		for (i = 0; i < 4; i++)
		{
			if (argv[1] == levels[i])
			{
				switchFunction(harlinho, i);
				match = true;
			}
		}
		if (!match)
			switchFunction(harlinho, 4);
	}
	else
		std::cout << "Wrong number of arguments (just need one).\n";
}
