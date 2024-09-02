
#include "../headers/RPN.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << BLINK << RED << "ERROR: Not enough arguments!" << NRM << std::endl;
		return (-1);
	}
	data one;
	one.execute(argv[1]);
}
