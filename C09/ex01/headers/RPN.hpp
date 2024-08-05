#ifndef DATA_HPP
#define DATA_HPP

# define RED "\033[1;31m"
# define NRM "\033[0m"
# define GRN "\033[1;32m"
# define BLD "\033[1;37m"
# define CYAN "\033[1;36m"
# define BLINK "\033[5m"

# include <stack>
# include <iostream>
#	include <sstream>

class data {
  private:
	std::stack<int> storage;
  public:
	data();
	data(data &copy);
	data &operator=(const data &values);
	~data();

	void execute(char **argv);
	int toInt(const std::string& str);
};

#endif
