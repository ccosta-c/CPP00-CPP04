
#ifndef CPP00_CPP04_ICE_HPP
#define CPP00_CPP04_ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
  public:
	Ice();
	Ice(const Ice &copy);
	Ice &operator=(const Ice &values);
	AMateria* clone() const;
	~Ice();
};

#endif
