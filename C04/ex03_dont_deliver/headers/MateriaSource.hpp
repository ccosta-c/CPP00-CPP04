
#ifndef CPP00_CPP04_MATERIASOURCE_HPP
#define CPP00_CPP04_MATERIASOURCE_HPP

#include "AMateria.hpp"

class MateriaSource {
  private:
	AMateria *_slots[4];
  public:
	MateriaSource();
	MateriaSource(MateriaSource &copy);
	MateriaSource &operator=(const MateriaSource &values);
	~MateriaSource();

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif
