
#ifndef CPP00_CPP04_CAT_HPP
#define CPP00_CPP04_CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
  public:
	Cat();
	Cat(Cat &copy);
	Cat &operator=(const Cat &values);
	~Cat();
	std::string getType() const;
	void makeSound() const;
};


#endif
