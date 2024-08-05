#ifndef DATA_HPP
#define DATA_HPP

#include <stack>

class data {
  private:
	std::stack<int> storage;
  public:
	data();
	data(data &copy);
	data &operator=(const data &values);
	~data();
};


#endif
