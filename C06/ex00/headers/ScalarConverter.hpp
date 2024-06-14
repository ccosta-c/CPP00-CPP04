
#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>
# include <iostream>
# include <ctype.h>
# include <cstdlib>
# include <limits>
# include <iomanip>
# include "clrs.hpp"

class ScalarConverter {
  private:
	ScalarConverter();
	ScalarConverter(ScalarConverter& copy);
	~ScalarConverter();
	ScalarConverter &operator=(const ScalarConverter &values);
  public:
	static void convert(std::string& data);
	static bool checkChar(std::string& data);
	static bool checkInt(std::string& data);
	static bool checkFloat(std::string& data);
	static bool checkDouble(std::string& data);
	static void IntConversion(std::string& data);
	static void CharConversion(std::string& data);
	static void FloatConversion(std::string& data);
	static void DoubleConversion(std::string& data);
	static void checkSpecials(std::string& data);
};

#endif
