
#ifndef BRAINS_HPP
#define BRAINS_HPP

#include <iostream>

# define RED "\033[1;31m"
# define NRM "\033[0m"
# define GRN "\033[1;32m"
# define BLD "\033[1;37m"
# define CYAN "\033[1;36m"

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
