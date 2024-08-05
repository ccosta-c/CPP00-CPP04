
#include "../headers/RPN.hpp"

data::data() {}

data::data(data &copy) {
	(void) copy;
}

data &data::operator=(const data &values) {
	(void) values;
	return (*this);
}

data::~data() {}

void data::execute(char **argv) {
	argv++;
	while (*argv) {
		std::string tmp = *argv;
		if (tmp.find_first_not_of("0123456789+-*/") != tmp.npos) {
			std::cout << BLINK << RED << "ERROR!" << NRM << std::endl;
			return;
		}
		if (tmp.find_first_not_of("0123456789") == tmp.npos)
			storage.push(toInt(tmp));
		if (tmp.find_first_of("+-*/") != tmp.npos) {
			int one = storage.top();
			storage.pop();
			int two = storage.top();
			storage.pop();
			//HAVE TO DO THE OPERATION  THINK MAYBE A SWITCH CASE INSTEAD OF 4 IFS
		}
		argv++;
	}
	std::cout << storage.top() << std::endl;
}

int data::toInt(const std::string& str) {
	std::stringstream ss(str);
	int num;
	ss >> num;
	return (num);
}
