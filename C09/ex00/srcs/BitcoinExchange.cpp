#include "../headers/BitcoinExchange.hpp"

double toFloat(const std::string& str) {
	std::stringstream ss(str);
	double num;
	ss >> num;
	return num;
}

Data::Data(std::ifstream& databaseFile){
	std::string tmp;
	int commaLocation;

	std::getline(databaseFile, tmp);
	while(true) {
		std::getline(databaseFile, tmp);
		if (databaseFile.eof())
			break ;
		commaLocation = tmp.find(',');
		exchangeDatabase.insert(std::pair<std::string,double>(tmp.substr(0, commaLocation), toFloat(tmp.substr(commaLocation + 1, tmp.npos))));
	}
//	for (std::map<std::string,double>::iterator it=inputDatabase.begin(); it!=inputDatabase.end(); ++it)
//		std::cout << it->first << "|" << std::fixed << std::setprecision(2) << it->second << std::endl;
}

void Data::execute(std::ifstream& inputFile) {
	std::string tmp;
	std::pair<std::string, std::string> lineData;
	int separator;

	std::getline(inputFile, tmp);
	while(true) {
		std::getline(inputFile, tmp);
		if (inputFile.eof())
			break ;
		separator = tmp.find(' ');

	}
}
