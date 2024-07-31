#include "../headers/BitcoinExchange.hpp"

float Data::toFloat(const std::string& str) {
	std::stringstream ss(str);
	float num;
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
		exchangeDatabase.insert(std::pair<std::string,float>(tmp.substr(0, commaLocation),
			toFloat(tmp.substr(commaLocation + 1, tmp.npos))));
	}
//	for (std::map<std::string,float>::iterator it=inputDatabase.begin(); it!=inputDatabase.end(); ++it)
//		std::cout << it->first << "|" << std::fixed << std::setprecision(2) << it->second << std::endl;
}

void Data::execute(std::ifstream& inputFile) {
	std::string tmp;
	int separator;

	std::getline(inputFile, tmp);
	while(true) {
		std::getline(inputFile, tmp);
		if (inputFile.eof())
			break ;
		separator = tmp.find(' ');
		if (separator == -1) {
			lineData.first = tmp;
			lineData.second = //see what error to send;
			checkDatabase();
		}
		lineData.first = tmp.substr(0, separator);
		lineData.second = toFloat(tmp.substr(separator + 2, tmp.length()));
		checkDatabase();
		//std::cout << lineData.first << "|" << lineData.second << std::endl;
	}
}

void Data::checkDatabase() {
	std::map<std::string,float>::iterator it;

	if
	it = exchangeDatabase.lower_bound(lineData.first);
	std::cout << it->first << std::endl;
}
