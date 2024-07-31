
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <string>
#include <iomanip>

# define RED "\033[1;31m"
# define NRM "\033[0m"
# define GRN "\033[1;32m"
# define BLD "\033[1;37m"
# define CYAN "\033[1;36m"

class Data {
  private:
	std::map<std::string,double> exchangeDatabase;
	std::map<std::string,double> inputDatabase;

  public:
	Data(std::ifstream& databaseFile);
	void execute(std::ifstream& inputDatabase);
};


#endif
