
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

void data::execute(std::string str) {
		std::stringstream ss(str);
		std::string tmp;
		while (true) {
			if (ss.eof())
				break;
			std::getline(ss, tmp, ' ');
			if (tmp.find_first_not_of("0123456789+-*/") != tmp.npos) {
				std::cerr << BLINK << RED << "ERROR" << NRM << std::endl;
				return ;
			}
			if (tmp.find_first_not_of("0123456789") == tmp.npos)
				storage.push(toInt(tmp));
			if (tmp.find_first_of("+-*/") != tmp.npos && tmp.length() == 1) {
				int one = storage.top();
				storage.pop();
				int two = storage.top();
				storage.pop();
				switch (tmp[0]) {
					case '*':
						storage.push(two * one);
						break;
					case '+':
						storage.push(two + one);
						break;
					case '-':
						storage.push(two - one);
						break;
					case '/':
						storage.push(two / one);
						break;
				}
			}
		}
	std::cout << storage.top() << std::endl;
	}

int data::toInt(const std::string& str) {
	std::stringstream ss(str);
	int num;
	ss >> num;
	return (num);
}
