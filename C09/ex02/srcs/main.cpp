
#include "../headers/PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << BLINK << RED << "Numbers required." << NRM << std::endl;
	else {
		PmergeMe data(argv);
	}
}
