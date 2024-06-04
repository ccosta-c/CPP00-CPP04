
#ifndef CPP00_CPP04_CAT_HPP
#define CPP00_CPP04_CAT_HPP

#include "Animal.hpp"
#include "Brains.hpp"

class Cat : public Animal
{
  private:
	Brains *_brain;
  public:
	Cat();
	Cat(Cat &copy);
	Cat &operator=(const Cat &values);
	virtual ~Cat();

	std::string getType() const;
	void makeSound() const;
	Brains *getBrain() const;
};


#endif
