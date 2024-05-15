
#ifndef BRAINS_HPP
#define BRAINS_HPP

#include <iostream>

class Brains
{
  public:
	std::string ideas[100];

	Brains();
	Brains(Brains &copy);
	Brains &operator=(const Brains &values);
	~Brains();
};

#endif
