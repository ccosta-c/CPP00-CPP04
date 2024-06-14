
#include "../headers/ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
}

ScalarConverter::~ScalarConverter() {
}

void ScalarConverter::convert(std::string& data) {
	if(checkInt(data))
		IntConversion(data);
	else if (checkChar(data))
		CharConversion(data);
	else if (checkFloat(data))
		FloatConversion(data);
	else if (checkDouble(data))
		DoubleConversion(data);
	else {
		checkSpecials(data);
		std::cout << RED << "Conversion Impossible" << std::endl;
	}
}
bool ScalarConverter::checkChar(std::string& data) {
	if(data.length() > 1)
		return(false);
	if(isdigit(data[0]) == 1 )
		return (false);
	else
		return (true);
}

bool ScalarConverter::checkInt(std::string &data) {
	long int nbr = strtol(data.c_str(), NULL, 10);

	if (nbr == 0 && data[0] != '0')
		return (false);
	for ( unsigned long it = 0; it < data.length(); ++it) {
		if (!isdigit(data[it]))
			return (false);
	}
	if (nbr > std::numeric_limits<int>::max() || nbr < std::numeric_limits<int>::min())
		return (false);
	return (true);
}

bool ScalarConverter::checkFloat(std::string& data) {

		bool checkDot;

		if (!(isdigit(data[0]) || data[0] == 45))
			return (false);
		if (data[data.length() - 1] != 'f')
			return (false);
		for ( unsigned long it = 1; it < data.length() - 1; it++) {
			if (!(isdigit(data[it]) || data[it] == '.'))
				return (false);
			if (data[it] == '.' && checkDot)
				return (false);
			if (data[it] == '.' && !checkDot)
				checkDot = true;
		}
		if (!checkDot)
			return (false);
		float number = atof(data.c_str());
		if (number > std::numeric_limits<float>::max() || number < -std::numeric_limits<float>::max())
			return (false);
		return (true);
}

bool ScalarConverter::checkDouble(std::string& data) {

		bool checkDot;

		if (!(isdigit(data[0]) || data[0] == 45))
			return (false);
		for ( unsigned long it = 1; it < data.length(); it++) {
			if (!(isdigit(data[it]) || data[it] == '.'))
				return (false);
			if (data[it] == '.' && checkDot)
				return (false);
			if (data[it] == '.' && !checkDot)
				checkDot = true;
		}
		if (!checkDot)
			return (false);
		long double number = atof(data.c_str());
		if (number > std::numeric_limits<double>::max() || number < -std::numeric_limits<double>::max())
			return (false);
		return (true);
}

void ScalarConverter::IntConversion(std::string &data) {
	int nbr = atoi(data.c_str());
	if (nbr > 0 && nbr < 127)
		if (isprint(nbr))
			std::cout << "char: " << CYAN << static_cast<char>(nbr) << NRM << std::endl;
		else
			std::cout << "char: " << RED << "Not Printable" << NRM << std::endl;
	else
		std::cout << "char: " << RED << "Impossible" << NRM << std::endl;
	std::cout << "int: " << CYAN << nbr << NRM << std::endl;
	std::cout << "float: " << CYAN << std::fixed << std::setprecision(2) << static_cast<float>(nbr) << "f" << NRM << std::endl;
	std::cout << "double: " << CYAN << static_cast<double>(nbr) << NRM << std::endl;
}

void ScalarConverter::CharConversion(std::string &data) {
	char character = data[0];

	std::cout << "char: " << CYAN << character << NRM << std::endl;
	std::cout << "int: " << CYAN << static_cast<int>(character) << NRM << std::endl;
	std::cout << "float: " << CYAN << std::fixed << std::setprecision(2) << static_cast<float>(character) << "f" << NRM << std::endl;
	std::cout << "double: " << CYAN << static_cast<double>(character) << NRM << std::endl;
}

void ScalarConverter::FloatConversion(std::string &data) {
	const float floatnbr = atof(data.c_str());

	if (static_cast<int>(floatnbr) > 0 && static_cast<int>(floatnbr) < 127) {
		if (isprint(static_cast<int>(floatnbr)))
			std::cout << "char: " << CYAN << static_cast<char>(floatnbr) << NRM << std::endl;
		else
			std::cout << "char: " << RED << "Not Printable" << NRM << std::endl;
	}
	else
		std::cout << "char: " << RED << "Impossible" << NRM << std::endl;
	if (static_cast<long int>(floatnbr) > std::numeric_limits<int>::max() || static_cast<long int>(floatnbr) < std::numeric_limits<int>::min())
		std::cout << "int: " << RED << "Impossible" << NRM << std::endl;
	else
		std::cout << "int: " << CYAN << static_cast<int>(floatnbr) << NRM << std::endl;
	std::cout << "float: " << CYAN << static_cast<float>(floatnbr) << "f" << NRM << std::endl;
	std::cout << "double: " << CYAN << static_cast<double>(floatnbr) << NRM << std::endl;
}

void ScalarConverter::DoubleConversion(std::string &data) {
	const double doublenbr = atof(data.c_str());

	if (static_cast<long int>(doublenbr) > 0 && static_cast<long int>(doublenbr) < 127) {
		if (isprint(static_cast<char>(doublenbr)))
			std::cout << "char: " << CYAN << static_cast<char>(doublenbr) << NRM << std::endl;
		else
			std::cout << "char: " << RED << "Not Printable" << NRM << std::endl;
	}
	else
		std::cout << "char: " << RED << "Impossible" << NRM << std::endl;
	if (static_cast<long int>(doublenbr) > std::numeric_limits<int>::max() || static_cast<long int>(doublenbr) < std::numeric_limits<int>::min())
		std::cout << "int: " << RED << "Impossible" << NRM << std::endl;
	else
		std::cout << "int: " << CYAN << static_cast<int>(doublenbr) << NRM << std::endl;
	std::cout << "float: " << CYAN << static_cast<float>(doublenbr) << "f" << NRM << std::endl;
	std::cout << "double: " << CYAN << static_cast<double>(doublenbr) << NRM << std::endl;
	return ;
}

void ScalarConverter::checkSpecials(std::string &data) {
	(void) data;
}
