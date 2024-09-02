#include "../headers/BitcoinExchange.hpp"

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
}

Data::Data(Data &copy) {
	//I'm not wasting time doing a function I will never use in this exercise.
	(void) copy;
}
Data &Data::operator=(const Data &values) {
	//I'm not wasting time doing a function I will never use in this exercise.
	(void) values;
	return (*this);
}

Data::~Data(void) {}

float Data::toFloat(const std::string& str) {
	std::stringstream ss(str);
	float num;
	ss >> num;
	return num;
}

void Data::execute(std::ifstream& inputFile) {
	std::string tmp;
	int separator;

	if (tmp.find_first_of("abcdefghijklmnopqrstuvwxyz") != tmp.npos)
		std::getline(inputFile, tmp);
	while(true) {
		std::getline(inputFile, tmp);
		if (inputFile.eof())
			break ;
		separator = tmp.find(' ');
		if (separator == (int)tmp.npos) {
			lineData.first = tmp;
			lineData.second =  std::numeric_limits<float>::quiet_NaN();
			checkDatabase();
			continue ;
		}
		lineData.first = tmp.substr(0, separator);
		lineData.second = toFloat(tmp.substr(separator + 2, tmp.length()));
		checkDatabase();
		//std::cout << lineData.first << "|" << lineData.second << std::endl;
	}
}

void Data::checkDatabase() {
	std::map<std::string,float>::iterator it;

	if (!checkDate()) {
		std::cerr << BLINK << RED << "Error: Invalid Date! ====> " << lineData.first << NRM << std::endl;
		return ;
	}
	if (lineData.second < 0) {
		std::cerr << BLINK << RED << "Error: Not a positive number! ====> " << lineData.second << NRM << std::endl;
		return ;
	}
	if ((long)lineData.second > std::numeric_limits<int>::max()) {
		std::cerr << BLINK << RED << "Error: Too large a number! ====> " << (long)lineData.second << NRM << std::endl;
		return ;
	}
	if (!std::isnan(lineData.second)) {
		it = exchangeDatabase.lower_bound(lineData.first);
		if (it->first > lineData.first)
			it--;
		std::cout << CYAN << lineData.first << NRM << " => " << lineData.second << " = " << lineData.second * it->second << std::endl;
	}
}

bool Data::checkDate(void) {
	if (lineData.first.length() != 10)
		return (false);
	std::stringstream yearStream(lineData.first.substr(0, 4));
	std::stringstream monthStream(lineData.first.substr(5, 2));
	std::stringstream dayStream(lineData.first.substr(8, 2));
	int daysOfMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31,30, 31};
	int year;
	int month;
	int day;
	yearStream >> year;
	monthStream >> month;
	dayStream >> day;
	if (!(year >= 2009 && year <= 2022))
		return (false);
	if (!(month >= 1 && month <= 12))
		return (false);
	if (year == 2012 || year == 2016 || year == 2020)
		if (month == 2)
			if (day > 29)
				return (false);
	if (!(day > 0 && day <= daysOfMonth[month]))
		return (false);
	return (true);
}
