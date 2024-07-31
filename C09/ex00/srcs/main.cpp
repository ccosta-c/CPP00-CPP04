
#include "../headers/BitcoinExchange.hpp"

int main (int argc, char **argv)
{
	if (argc == 2) {
		std::ifstream databaseFile;
		std::ifstream inputFile;

		inputFile.open(argv[1], std::ifstream::in);
		databaseFile.open("data.csv", std::ifstream::in);
		if (!databaseFile)
			std::cout << RED << "Database not found!" << NRM << std::endl;
		if (!inputFile)
			std::cout << RED << "Input File not found!" << NRM << std::endl;
		Data test(databaseFile);
		databaseFile.close();
		test.execute(inputFile);
		inputFile.close();
	}
	else
		std::cout << RED << "You must pass a file as an argument!" << NRM << std::endl;
}
