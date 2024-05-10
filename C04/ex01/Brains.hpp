
#ifndef BRAINS_HPP
#define BRAINS_HPP

#include <iostream>

class Brains
{
  private:
	std::string ideas[100];
  public:
	Brains();
	Brains(Brains &copy);
	Brains &operator=(const Brains &values);
	~Brains();
};


//CHECK CREATION OF ARRAYS AND DELETION OF ARRAYS

#endif
