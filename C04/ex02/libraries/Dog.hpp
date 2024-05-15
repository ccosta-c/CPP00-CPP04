
#ifndef CPP00_CPP04_DOG_HPP
#define CPP00_CPP04_DOG_HPP

#include "Animal.hpp"
#include "Brains.hpp"

class Dog : public Animal
{
  public:
	Dog();
	Dog(Dog &copy);
	Dog &operator=(const Dog &values);
	virtual ~Dog();
	std::string getType() const;
	void makeSound() const;

	Brains *_brain;
};

#endif
