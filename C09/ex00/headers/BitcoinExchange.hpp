
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <string>
#include <iomanip>
#include <cmath>
#include <limits>

# define RED "\033[1;31m"
# define NRM "\033[0m"
# define GRN "\033[1;32m"
# define BLD "\033[1;37m"
# define CYAN "\033[1;36m"
# define BLINK "\033[5m"

class Data {
  private:
	std::map<std::string,float> exchangeDatabase;
	std::pair<std::string, float> lineData;

  public:
	Data(std::ifstream& databaseFile);
	~Data(void);
	Data(Data& copy);
	Data& operator=(const Data &values);

	void execute(std::ifstream& inputDatabase);
	float toFloat(const std::string& str);
	void checkDatabase();
	bool checkDate(void);
};


#endif
