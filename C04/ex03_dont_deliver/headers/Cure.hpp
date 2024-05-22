
#ifndef CPP00_CPP04_CURE_HPP
#define CPP00_CPP04_CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
  public:
	Cure();
	Cure(const Cure &copy);
	Cure &operator=(const Cure &values);
	AMateria* clone() const;
	~Cure();
};

#endif
